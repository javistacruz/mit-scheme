/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_6 9
#define LABEL_1_10 11
#define LABEL_1_9 13
#define LABEL_1_15 15
#define LABEL_1_13 17
#define TAG_1_14 7
#define LABEL_1_17 19
#define ENVIRONMENT_LABEL_1_3 37
#define DEBUGGING_LABEL_1_2 36
#define OBJECT_1_6 35
#define OBJECT_1_5 34
#define OBJECT_1_4 33
#define OBJECT_1_3 32
#define OBJECT_1_2 31
#define OBJECT_1_1 30
#define OBJECT_1_0 29
#define EXECUTE_CACHE_1_16 21
#define EXECUTE_CACHE_1_12 23
#define EXECUTE_CACHE_1_11 25
#define EXECUTE_CACHE_1_7 27
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_1_4);
      goto format_packages_10;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_packages_16)
DEFLABEL (format_packages_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);

DEFLABEL (label_23)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_22;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_21)
  (Wrd27.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 1);

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Wrd5.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define LABEL_2_6 9
#define LABEL_2_11 11
#define LABEL_2_7 13
#define LABEL_2_18 15
#define LABEL_2_19 17
#define LABEL_2_13 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_23 25
#define LABEL_2_14 27
#define TAG_2_15 12
#define LABEL_2_16 29
#define LABEL_2_10 31
#define LABEL_2_25 33
#define ENVIRONMENT_LABEL_2_3 63
#define DEBUGGING_LABEL_2_2 62
#define OBJECT_2_9 61
#define OBJECT_2_8 60
#define OBJECT_2_7 59
#define OBJECT_2_6 58
#define OBJECT_2_5 57
#define OBJECT_2_4 56
#define OBJECT_2_3 55
#define OBJECT_2_2 54
#define OBJECT_2_1 53
#define OBJECT_2_0 52
#define EXECUTE_CACHE_2_27 35
#define EXECUTE_CACHE_2_26 37
#define EXECUTE_CACHE_2_24 39
#define EXECUTE_CACHE_2_20 41
#define EXECUTE_CACHE_2_17 43
#define EXECUTE_CACHE_2_12 45
#define EXECUTE_CACHE_2_8 47
#define FREE_REFERENCE_2_1 50
#define FREE_REFERENCE_2_0 51
#define FREE_REFERENCES_LABEL_2_0 34
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd5;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto format_packages_unusual_21;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_2_18);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_2_14);
      goto lambda_29;

    case 13:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_packages_unusual_28)
DEFLABEL (format_packages_unusual_21)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_36;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_35)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_32;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_14])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_34;
  Wrd27 = Wrd31;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = (current_block [OBJECT_2_2]);
  ((Wrd35.pObj) [0]) = (Wrd36.Obj);
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd28.pObj));

DEFLABEL (label_24)
  (Wrd27.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_2_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_30)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_38;
  Wrd22 = Wrd26;

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_2_14);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_41;
  Rvl = (current_block [OBJECT_2_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_23);

DEFLABEL (label_43)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_42)
  (Wrd28.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (label_45)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_22);

DEFLABEL (label_46)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_42;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2_2]);
  ((Wrd8.pObj) [0]) = (Wrd14.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [3]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = (current_block [OBJECT_2_2]);
  ((Wrd58.pObj) [0]) = (Wrd59.Obj);
  goto label_44;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_7 7
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto write_separator_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_separator_4)
DEFLABEL (write_separator_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_8 7
#define LABEL_4_10 9
#define LABEL_4_7 11
#define LABEL_4_13 13
#define LABEL_4_11 15
#define LABEL_4_15 17
#define LABEL_4_14 19
#define LABEL_4_16 21
#define LABEL_4_20 23
#define LABEL_4_21 25
#define LABEL_4_22 27
#define LABEL_4_18 29
#define LABEL_4_27 31
#define LABEL_4_23 33
#define LABEL_4_33 35
#define LABEL_4_24 37
#define TAG_4_25 17
#define LABEL_4_36 39
#define LABEL_4_37 41
#define LABEL_4_38 43
#define LABEL_4_29 45
#define TAG_4_30 21
#define LABEL_4_40 47
#define LABEL_4_41 49
#define LABEL_4_42 51
#define LABEL_4_31 53
#define LABEL_4_32 55
#define LABEL_4_44 57
#define LABEL_4_34 59
#define LABEL_4_45 61
#define ENVIRONMENT_LABEL_4_3 95
#define DEBUGGING_LABEL_4_2 94
#define OBJECT_4_8 93
#define OBJECT_4_7 92
#define OBJECT_4_6 91
#define OBJECT_4_5 90
#define OBJECT_4_4 89
#define OBJECT_4_3 88
#define OBJECT_4_2 87
#define OBJECT_4_1 86
#define OBJECT_4_0 85
#define EXECUTE_CACHE_4_43 63
#define EXECUTE_CACHE_4_39 65
#define EXECUTE_CACHE_4_35 67
#define EXECUTE_CACHE_4_28 69
#define EXECUTE_CACHE_4_26 71
#define EXECUTE_CACHE_4_19 73
#define EXECUTE_CACHE_4_17 75
#define EXECUTE_CACHE_4_12 77
#define EXECUTE_CACHE_4_9 79
#define EXECUTE_CACHE_4_6 81
#define FREE_REFERENCE_4_0 84
#define FREE_REFERENCES_LABEL_4_0 62
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_4_4);
      goto format_package_32;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_8;

    case 10:
      current_block = (Rpc - LABEL_4_20);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_4_21);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_4_27);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_4_33);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_4_24);
      goto lambda_52;

    case 18:
      current_block = (Rpc - LABEL_4_36);
      goto label_41;

    case 19:
      current_block = (Rpc - LABEL_4_37);
      goto label_42;

    case 20:
      current_block = (Rpc - LABEL_4_38);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_4_29);
      goto lambda_53;

    case 22:
      current_block = (Rpc - LABEL_4_40);
      goto label_44;

    case 23:
      current_block = (Rpc - LABEL_4_41);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_4_42);
      goto label_46;

    case 25:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_29;

    case 26:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_28;

    case 27:
      current_block = (Rpc - LABEL_4_44);
      goto label_47;

    case 28:
      current_block = (Rpc - LABEL_4_34);
      goto lambda_26;

    case 29:
      current_block = (Rpc - LABEL_4_45);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_package_50)
DEFLABEL (format_package_32)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_71;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_71;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_70)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;

DEFLABEL (label_66)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_65;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_65;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_61;

DEFLABEL (label_60)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_24])));
  Rhp += 4;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd35 = Wrd28;
  (Wrd36.Obj) = (Rsp [7]);
  ((Wrd35.pObj) [2]) = (Wrd36.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  ((Wrd35.pObj) [3]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  ((Wrd35.pObj) [4]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  ((Wrd35.pObj) [5]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_55;
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_29])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_59;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_58)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_35]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_32);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_57;
  Wrd5 = Wrd9;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_31);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_44])), (Wrd6.pObj));

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_22);
  goto label_60;

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_4_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_69;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_69;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_68)
  (Wrd27.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_10);
  goto label_66;

DEFLABEL (label_69)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Obj) = (current_block [OBJECT_4_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_4_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (lambda_51)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_4_16);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_77;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_77;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_76)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_75;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_75;
  (Wrd22.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_74)
  (Wrd34.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 62)
    goto label_73;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_73)
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_72;
  Rvl = ((Wrd42.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd30.Obj) = (current_block [OBJECT_4_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_4_24);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_84;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_83)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  if (! ((Wrd16.Obj) == (Wrd5.Obj)))
    goto label_78;
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_82;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_81)
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_80;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_79)
  (Rsp [5]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_39]));

DEFLABEL (label_80)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_43)
  (Wrd38.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_42)
  (Wrd29.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_4_29);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_91;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_90)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  if (! ((Wrd16.Obj) == (Wrd5.Obj)))
    goto label_85;
  Rvl = (current_block [OBJECT_4_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd19.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_89;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_88)
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_87;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_86)
  (Rsp [4]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_43]));

DEFLABEL (label_87)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_46)
  (Wrd35.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_41]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_45)
  (Wrd26.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_54)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_4_34);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_95;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_95;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_94)
  (Wrd21.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_93;

DEFLABEL (label_92)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_93)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_92;
  Rvl = ((Wrd29.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_95)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_94;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_10 7
#define LABEL_5_12 9
#define LABEL_5_7 11
#define TAG_5_8 4
#define LABEL_5_16 13
#define LABEL_5_9 15
#define LABEL_5_11 17
#define LABEL_5_14 19
#define LABEL_5_20 21
#define LABEL_5_21 23
#define LABEL_5_15 25
#define LABEL_5_23 27
#define ENVIRONMENT_LABEL_5_3 54
#define DEBUGGING_LABEL_5_2 53
#define OBJECT_5_4 52
#define OBJECT_5_3 51
#define OBJECT_5_2 50
#define OBJECT_5_1 49
#define OBJECT_5_0 48
#define EXECUTE_CACHE_5_25 29
#define EXECUTE_CACHE_5_24 31
#define EXECUTE_CACHE_5_22 33
#define EXECUTE_CACHE_5_19 35
#define EXECUTE_CACHE_5_18 37
#define EXECUTE_CACHE_5_17 39
#define EXECUTE_CACHE_5_13 41
#define EXECUTE_CACHE_5_6 43
#define FREE_REFERENCE_5_1 46
#define FREE_REFERENCE_5_0 47
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5_4);
      goto format_value_cells_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_10);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_5_12);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_5_16);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_5_20);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_value_cells_18)
DEFLABEL (format_value_cells_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_23;
  Wrd17 = Wrd21;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_21;
  Wrd27 = Wrd31;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_12])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_10])), (Wrd18.pObj));

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_5_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Rsp [4]) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_27;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_27;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_26)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_25;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_25;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);

DEFLABEL (label_24)
  (Rsp [5]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (label_25)
  (Wrd31.Obj) = (current_block [OBJECT_5_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (Wrd22.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_5_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [7]);
  (Wrd33.Obj) = (current_block [OBJECT_5_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_15 13
#define LABEL_6_16 15
#define LABEL_6_10 17
#define LABEL_6_12 19
#define LABEL_6_13 21
#define LABEL_6_20 23
#define LABEL_6_18 25
#define TAG_6_19 11
#define ENVIRONMENT_LABEL_6_3 40
#define DEBUGGING_LABEL_6_2 39
#define OBJECT_6_3 38
#define OBJECT_6_2 37
#define OBJECT_6_1 36
#define OBJECT_6_0 35
#define EXECUTE_CACHE_6_17 27
#define EXECUTE_CACHE_6_14 29
#define EXECUTE_CACHE_6_11 31
#define EXECUTE_CACHE_6_6 33
#define FREE_REFERENCES_LABEL_6_0 26
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto get_value_cells_unusual_14;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_8;

    case 5:
      current_block = (Rpc - LABEL_6_15);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_6_16);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_6_13);
      goto lambda_1;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_6_18);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_value_cells_unusual_20)
DEFLABEL (get_value_cells_unusual_14)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_21)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_6_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_18])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd6.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_6_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_27;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  if (! ((Wrd22.uLng) == 1))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_28)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_26;
  Rvl = (current_block [OBJECT_6_3]);
  goto label_25;

DEFLABEL (label_29)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_24)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_6_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_35)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_32;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_6_3]);

DEFLABEL (label_32)
DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_6_18);

DEFLABEL (lambda_10)
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

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define TAG_7_7 2
#define LABEL_7_13 9
#define LABEL_7_9 11
#define TAG_7_10 4
#define LABEL_7_11 13
#define TAG_7_12 5
#define LABEL_7_14 15
#define LABEL_7_15 17
#define LABEL_7_16 19
#define LABEL_7_17 21
#define ENVIRONMENT_LABEL_7_3 35
#define DEBUGGING_LABEL_7_2 34
#define OBJECT_7_6 33
#define OBJECT_7_5 32
#define OBJECT_7_4 31
#define OBJECT_7_3 30
#define OBJECT_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_18 23
#define EXECUTE_CACHE_7_8 25
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto get_value_cells_19;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_15;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_7_13);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto lambda_28;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto lambda_29;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_value_cells_26)
DEFLABEL (get_value_cells_19)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd21 = Wrd18;
  ((Wrd21.pObj) [2]) = (Wrd7.Obj);
  ((Wrd21.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_9])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_31;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_31;
  (Wrd16.Obj) = ((Wrd22.pObj) [6]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_7_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_21)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_7_9);

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

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_7_11);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_39;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_38)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_37;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_37;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_36)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_35;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_34)
  if (! ((Wrd37.Obj) == (current_block [OBJECT_7_0])))
    goto label_32;
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [3]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Rsp [0]) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  ((Wrd61.pObj) [0]) = (Wrd54.Obj);
  Rvl = (Wrd62.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (current_block [OBJECT_7_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [0]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  ((Wrd16.pObj) [0]) = (Wrd9.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_5]), 1);

DEFLABEL (label_24)
  (Wrd37.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_7_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_23)
  (Wrd21.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_7_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define ENVIRONMENT_LABEL_8_3 21
#define DEBUGGING_LABEL_8_2 20
#define OBJECT_8_0 19
#define EXECUTE_CACHE_8_11 13
#define EXECUTE_CACHE_8_10 15
#define EXECUTE_CACHE_8_6 17
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto write_package_name_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_package_name_7)
DEFLABEL (write_package_name_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_8);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_11 13
#define LABEL_9_15 15
#define LABEL_9_13 17
#define TAG_9_14 7
#define LABEL_9_17 19
#define LABEL_9_19 21
#define LABEL_9_20 23
#define ENVIRONMENT_LABEL_9_3 44
#define DEBUGGING_LABEL_9_2 43
#define OBJECT_9_3 42
#define OBJECT_9_2 41
#define OBJECT_9_1 40
#define OBJECT_9_0 39
#define EXECUTE_CACHE_9_22 25
#define EXECUTE_CACHE_9_21 27
#define EXECUTE_CACHE_9_18 29
#define EXECUTE_CACHE_9_16 31
#define EXECUTE_CACHE_9_12 33
#define EXECUTE_CACHE_9_10 35
#define EXECUTE_CACHE_9_7 37
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_9_4);
      goto format_package_files_10;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_17;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_9_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_package_files_16)
DEFLABEL (format_package_files_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_24;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd18.Lng) > 0)
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_9_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_21;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_21;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_9_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_14)
  (Wrd12.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_24)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_9_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_8 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_13 13
#define LABEL_10_12 15
#define LABEL_10_15 17
#define LABEL_10_18 19
#define LABEL_10_16 21
#define LABEL_10_17 23
#define ENVIRONMENT_LABEL_10_3 48
#define DEBUGGING_LABEL_10_2 47
#define OBJECT_10_7 46
#define OBJECT_10_6 45
#define OBJECT_10_5 44
#define OBJECT_10_4 43
#define OBJECT_10_3 42
#define OBJECT_10_2 41
#define OBJECT_10_1 40
#define OBJECT_10_0 39
#define EXECUTE_CACHE_10_21 25
#define EXECUTE_CACHE_10_20 27
#define EXECUTE_CACHE_10_19 29
#define EXECUTE_CACHE_10_14 31
#define EXECUTE_CACHE_10_11 33
#define EXECUTE_CACHE_10_7 35
#define FREE_REFERENCE_10_0 38
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd37;
  machine_word Wrd36;
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
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto format_package_bindings_11;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_10_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_package_bindings_19)
DEFLABEL (format_package_bindings_11)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);
  (Rsp [6]) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [5]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_30)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_29;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_29;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_28)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_25;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd7.Lng) < 2L))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_21;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;
  Wrd21 = Wrd25;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10_5]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_18])), (Wrd22.pObj));

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd28.Obj) = (current_block [OBJECT_10_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_27)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_10_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd30.Obj) = (current_block [OBJECT_10_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto format_package_imports_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_package_imports_4)
DEFLABEL (format_package_imports_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_6;
  Wrd11 = Wrd15;

DEFLABEL (label_5)
  (Rsp [6]) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [7]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd12.pObj));

DEFLABEL (label_2)
  (Wrd11.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 13
#define DEBUGGING_LABEL_12_2 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCE_12_0 10
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto format_package_exports_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_package_exports_4)
DEFLABEL (format_package_exports_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_6;
  Wrd12 = Wrd16;

DEFLABEL (label_5)
  (Rsp [6]) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [7]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd13.pObj));

DEFLABEL (label_2)
  (Wrd12.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define TAG_13_9 3
#define LABEL_13_14 11
#define LABEL_13_15 13
#define LABEL_13_12 15
#define LABEL_13_16 17
#define LABEL_13_17 19
#define LABEL_13_13 21
#define LABEL_13_18 23
#define LABEL_13_19 25
#define LABEL_13_21 27
#define LABEL_13_22 29
#define ENVIRONMENT_LABEL_13_3 52
#define DEBUGGING_LABEL_13_2 51
#define OBJECT_13_5 50
#define OBJECT_13_4 49
#define OBJECT_13_3 48
#define OBJECT_13_2 47
#define OBJECT_13_1 46
#define OBJECT_13_0 45
#define EXECUTE_CACHE_13_24 31
#define EXECUTE_CACHE_13_23 33
#define EXECUTE_CACHE_13_20 35
#define EXECUTE_CACHE_13_25 37
#define EXECUTE_CACHE_13_11 39
#define EXECUTE_CACHE_13_10 41
#define EXECUTE_CACHE_13_7 43
#define FREE_REFERENCES_LABEL_13_0 30
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_13_4);
      goto format_exports_18;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto lambda_26;

    case 4:
      current_block = (Rpc - LABEL_13_14);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_13_15);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto lambda_13;

    case 7:
      current_block = (Rpc - LABEL_13_16);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_13_22);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_exports_25)
DEFLABEL (format_exports_18)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_8])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [7]) = (Wrd10.Obj);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_13_8);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_30)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_29;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_29;
  (Wrd28.Obj) = ((Wrd31.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_28)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_29)
  (Wrd36.Obj) = (current_block [OBJECT_13_1]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_13_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_27)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_13_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_34;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_34;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_24]));

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (label_34)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_13_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_23)
  (Wrd21.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_37;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_13_4]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_24]));

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_13_5]);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_25]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_14_4);
      goto local_map_export_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_map_export_5)
DEFLABEL (local_map_export_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_0)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_15_4);
      goto local_map_import_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_map_import_5)
DEFLABEL (local_map_import_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  ((Wrd12.pObj) [3]) = (Wrd6.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_0)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_12 9
#define LABEL_16_9 11
#define TAG_16_10 4
#define LABEL_16_15 13
#define LABEL_16_16 15
#define LABEL_16_11 17
#define LABEL_16_14 19
#define LABEL_16_19 21
#define ENVIRONMENT_LABEL_16_3 41
#define DEBUGGING_LABEL_16_2 40
#define OBJECT_16_1 39
#define OBJECT_16_0 38
#define EXECUTE_CACHE_16_20 23
#define EXECUTE_CACHE_16_18 25
#define EXECUTE_CACHE_16_17 27
#define EXECUTE_CACHE_16_13 29
#define EXECUTE_CACHE_16_8 31
#define EXECUTE_CACHE_16_6 33
#define FREE_REFERENCE_16_1 36
#define FREE_REFERENCE_16_0 37
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_16_4);
      goto format_bindings_7;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_16_15);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_16_16);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_bindings_13)
DEFLABEL (format_bindings_7)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_9])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_16;
  Wrd21 = Wrd25;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_12])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_16_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_20;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng))))
    goto label_20;
  (Wrd22.Obj) = ((Wrd26.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_18;
  Wrd36 = Wrd40;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_20]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_16])), (Wrd37.pObj));

DEFLABEL (label_11)
  (Wrd36.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd31.Obj) = (Rsp [6]);
  (Wrd32.Obj) = (current_block [OBJECT_16_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define TAG_17_7 2
#define LABEL_17_9 9
#define LABEL_17_12 11
#define LABEL_17_13 13
#define LABEL_17_11 15
#define LABEL_17_15 17
#define LABEL_17_17 19
#define ENVIRONMENT_LABEL_17_3 35
#define DEBUGGING_LABEL_17_2 34
#define OBJECT_17_4 33
#define OBJECT_17_3 32
#define OBJECT_17_2 31
#define OBJECT_17_1 30
#define OBJECT_17_0 29
#define EXECUTE_CACHE_17_16 21
#define EXECUTE_CACHE_17_14 23
#define EXECUTE_CACHE_17_10 25
#define EXECUTE_CACHE_17_8 27
#define FREE_REFERENCES_LABEL_17_0 20
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_17_4);
      goto classify_bindings_by_package_17;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_17_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_17_17);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_bindings_by_package_23)
DEFLABEL (classify_bindings_by_package_17)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_6])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_17_6);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Rsp [1]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  ((Wrd49.pObj) [0]) = (Wrd55.Obj);
  Rvl = (Wrd50.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Rsp [2]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [3]) = (Wrd17.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_27;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [1]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_25)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_17_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_31;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (label_31)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_20)
  (Wrd14.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define TAG_18_8 2
#define LABEL_18_11 9
#define LABEL_18_10 11
#define LABEL_18_14 13
#define LABEL_18_12 15
#define ENVIRONMENT_LABEL_18_3 33
#define DEBUGGING_LABEL_18_2 32
#define OBJECT_18_2 31
#define OBJECT_18_1 30
#define OBJECT_18_0 29
#define EXECUTE_CACHE_18_17 17
#define EXECUTE_CACHE_18_16 19
#define EXECUTE_CACHE_18_15 21
#define EXECUTE_CACHE_18_13 23
#define EXECUTE_CACHE_18_9 25
#define EXECUTE_CACHE_18_6 27
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
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
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_18_4);
      goto format_references_7;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_13;

    case 3:
      current_block = (Rpc - LABEL_18_11);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_18_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_18_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_references_12)
DEFLABEL (format_references_7)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_16;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd28.Lng))))
    goto label_16;
  (Wrd22.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [6]);
  (Wrd32.Obj) = (current_block [OBJECT_18_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Rsp [4]) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_18;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_18;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_17)
  (Rsp [5]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_15]));

DEFLABEL (label_18)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_18_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define TAG_19_10 4
#define LABEL_19_12 13
#define LABEL_19_16 15
#define LABEL_19_17 17
#define LABEL_19_19 19
#define LABEL_19_23 21
#define LABEL_19_25 23
#define LABEL_19_21 25
#define LABEL_19_22 27
#define LABEL_19_24 29
#define LABEL_19_26 31
#define LABEL_19_27 33
#define LABEL_19_32 35
#define LABEL_19_33 37
#define LABEL_19_31 39
#define LABEL_19_36 41
#define LABEL_19_37 43
#define LABEL_19_35 45
#define LABEL_19_39 47
#define LABEL_19_40 49
#define LABEL_19_42 51
#define LABEL_19_43 53
#define LABEL_19_41 55
#define LABEL_19_47 57
#define LABEL_19_48 59
#define LABEL_19_44 61
#define LABEL_19_46 63
#define LABEL_19_49 65
#define ENVIRONMENT_LABEL_19_3 103
#define DEBUGGING_LABEL_19_2 102
#define OBJECT_19_3 101
#define OBJECT_19_2 100
#define OBJECT_19_1 99
#define OBJECT_19_0 98
#define EXECUTE_CACHE_19_51 67
#define EXECUTE_CACHE_19_50 69
#define EXECUTE_CACHE_19_45 71
#define EXECUTE_CACHE_19_38 73
#define EXECUTE_CACHE_19_34 75
#define EXECUTE_CACHE_19_30 77
#define EXECUTE_CACHE_19_29 79
#define EXECUTE_CACHE_19_28 81
#define EXECUTE_CACHE_19_20 83
#define EXECUTE_CACHE_19_18 85
#define EXECUTE_CACHE_19_15 87
#define EXECUTE_CACHE_19_14 89
#define EXECUTE_CACHE_19_13 91
#define EXECUTE_CACHE_19_11 93
#define FREE_REFERENCE_19_1 96
#define FREE_REFERENCE_19_0 97
#define FREE_REFERENCES_LABEL_19_0 66
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd56;
  machine_word Wrd55;
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
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_19_4);
      goto format_expressions_37;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_53;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_36;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_35;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto lambda_54;

    case 5:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_19_23);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_19_25);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_19_21);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_19_22);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_19_26);
      goto continuation_31;

    case 15:
      current_block = (Rpc - LABEL_19_27);
      goto lambda_30;

    case 16:
      current_block = (Rpc - LABEL_19_32);
      goto label_41;

    case 17:
      current_block = (Rpc - LABEL_19_33);
      goto label_42;

    case 18:
      current_block = (Rpc - LABEL_19_31);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_19_36);
      goto label_43;

    case 20:
      current_block = (Rpc - LABEL_19_37);
      goto label_44;

    case 21:
      current_block = (Rpc - LABEL_19_35);
      goto continuation_12;

    case 22:
      current_block = (Rpc - LABEL_19_39);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_19_40);
      goto label_46;

    case 24:
      current_block = (Rpc - LABEL_19_42);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_19_43);
      goto label_48;

    case 26:
      current_block = (Rpc - LABEL_19_41);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_19_47);
      goto label_49;

    case 28:
      current_block = (Rpc - LABEL_19_48);
      goto label_50;

    case 29:
      current_block = (Rpc - LABEL_19_44);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_19_46);
      goto continuation_25;

    case 31:
      current_block = (Rpc - LABEL_19_49);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_expressions_52)
DEFLABEL (format_expressions_37)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [5]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_9])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [7]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_14]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_19_5);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_59;
  Wrd11 = Wrd15;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_57;
  Wrd21 = Wrd25;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_21);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_28]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_19_26);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [5]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_30]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_25])), (Wrd22.pObj));

DEFLABEL (label_40)
  (Wrd21.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_23])), (Wrd12.pObj));

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_19_9);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (lambda_55)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_19_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_83)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_82;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_31);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_80;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_79)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_78;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_38]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_76;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_75)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd16.uLng) == 1)
    goto label_62;
  (Wrd17.Obj) = (current_block [OBJECT_19_3]);
  goto label_61;

DEFLABEL (label_62)
  (Wrd17.Obj) = (current_block [OBJECT_19_2]);

DEFLABEL (label_61)
DEFLABEL (label_74)
  (Rsp [0]) = (Wrd17.Obj);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  Rvl = (Wrd17.Obj);

DEFLABEL (label_63)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_73;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_72)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_63;

DEFLABEL (label_66)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_41]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_71;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_70)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_69;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_68)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_44]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_45]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_51]));

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_50]));

DEFLABEL (label_69)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_43]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_42]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_47)
  (Wrd37.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_40]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_46)
  (Wrd22.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_39]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_45)
  (Wrd7.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_36]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_33]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_41);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_46]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_89;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_88)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_87;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_86)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_49]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_45]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_19_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_51]));

DEFLABEL (label_85)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_50]));

DEFLABEL (label_87)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_48]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_47]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_49)
  (Wrd9.Obj) = Rvl;
  goto label_88;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_19_46);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_34]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_8 7
#define LABEL_20_5 9
#define LABEL_20_9 11
#define TAG_20_10 4
#define LABEL_20_11 13
#define LABEL_20_12 15
#define LABEL_20_15 17
#define LABEL_20_16 19
#define TAG_20_17 8
#define LABEL_20_13 21
#define TAG_20_14 9
#define ENVIRONMENT_LABEL_20_3 29
#define DEBUGGING_LABEL_20_2 28
#define OBJECT_20_2 27
#define OBJECT_20_1 26
#define OBJECT_20_0 25
#define EXECUTE_CACHE_20_7 23
#define FREE_REFERENCES_LABEL_20_0 22
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_20_4);
      goto classify_expression_names_16;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_20_9);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_20_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto lambda_27;

    case 9:
      current_block = (Rpc - LABEL_20_13);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_expression_names_23)
DEFLABEL (classify_expression_names_16)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_28;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_24)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_20_8);
  (Wrd5.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_20_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_37)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_34;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_33;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd21.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_32)
  (Wrd39.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_16])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd45 = Wrd42;
  (Wrd46.Obj) = (Rsp [1]);
  ((Wrd45.pObj) [2]) = (Wrd46.Obj);
  (Wrd44.Obj) = (Rsp [0]);
  ((Wrd45.pObj) [3]) = (Wrd44.Obj);
  Rvl = (Wrd41.Obj);

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_36;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd48.Obj) = ((Wrd52.pObj) [0]);

DEFLABEL (label_35)
  (Wrd66.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Rsp [2]) = (Wrd63.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_13])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd72 = Wrd69;
  (Wrd73.Obj) = (Rsp [1]);
  ((Wrd72.pObj) [2]) = (Wrd73.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  ((Wrd72.pObj) [3]) = (Wrd71.Obj);
  Rvl = (Wrd68.Obj);
  goto label_31;

DEFLABEL (label_36)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_21)
  (Wrd48.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_20_16);

DEFLABEL (lambda_7)
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

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_20_13);

DEFLABEL (lambda_11)
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

#define LABEL_21_5 3
#define LABEL_21_6 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_4 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define LABEL_21_11 17
#define LABEL_21_12 19
#define LABEL_21_13 21
#define LABEL_21_16 23
#define LABEL_21_19 25
#define LABEL_21_17 27
#define TAG_21_18 12
#define LABEL_21_21 29
#define LABEL_21_14 31
#define TAG_21_15 14
#define LABEL_21_22 33
#define ENVIRONMENT_LABEL_21_3 46
#define DEBUGGING_LABEL_21_2 45
#define OBJECT_21_7 44
#define OBJECT_21_6 43
#define OBJECT_21_5 42
#define OBJECT_21_4 41
#define OBJECT_21_3 40
#define OBJECT_21_2 39
#define OBJECT_21_1 38
#define OBJECT_21_0 37
#define EXECUTE_CACHE_21_20 35
#define FREE_REFERENCES_LABEL_21_0 34
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd130;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd107;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd132;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd64;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd63;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd172;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
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
      current_block = (Rpc - LABEL_21_5);
      goto continuation_11;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_21_4);
      goto expression__name_21;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_21_12);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_21_13);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_21_16);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_21_19);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_21_17);
      goto lambda_37;

    case 13:
      current_block = (Rpc - LABEL_21_21);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_21_14);
      goto lambda_36;

    case 15:
      current_block = (Rpc - LABEL_21_22);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression__name_35)
DEFLABEL (expression__name_21)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_54;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_54;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_53)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_17])));
  Rhp += 1;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  Wrd44 = Wrd43;
  (Wrd45.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_39;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_39;
  (Wrd48.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (label_39)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.Obj) = (current_block [OBJECT_21_5]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_25)
DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd63.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd63.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd64.Obj) = (Rsp [0]);
  if ((Wrd64.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd76.uLng) == 62))
    goto label_48;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd74.Lng))))
    goto label_48;
  (Wrd68.Obj) = ((Wrd72.pObj) [3]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_47)
  (Wrd82.Obj) = (Rsp [3]);
  if ((Wrd82.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd88.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_14])));
  Rhp += 1;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd88.pObj)));
  Wrd89 = Wrd88;
  (Wrd90.Obj) = (Rsp [1]);
  ((Wrd89.pObj) [2]) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd101.uLng) == 62))
    goto label_42;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd99.Lng))))
    goto label_42;
  (Wrd93.Obj) = ((Wrd97.pObj) [6]);
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_38;

DEFLABEL (label_42)
  (Wrd102.Obj) = (Rsp [5]);
  (Wrd103.Obj) = (current_block [OBJECT_21_4]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_16]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_27)
  goto label_40;

DEFLABEL (label_43)
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 62))
    goto label_46;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd115.Lng))))
    goto label_46;
  (Wrd107.Obj) = ((Wrd113.pObj) [3]);

DEFLABEL (label_45)
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd127.Obj) = (current_block [OBJECT_21_7]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd127.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));

DEFLABEL (label_44)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd118.Obj) = (Rsp [2]);
  (Wrd119.Obj) = (current_block [OBJECT_21_6]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_28)
  (Wrd107.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (current_block [OBJECT_21_6]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_51;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd140.Lng))))
    goto label_51;
  (Wrd132.Obj) = ((Wrd138.pObj) [3]);

DEFLABEL (label_50)
  (Wrd152.Obj) = (current_block [OBJECT_21_7]);
  (* (Rhp++)) = (Wrd132.Obj);
  (* (Rhp++)) = (Wrd152.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd143.Obj) = (Rsp [1]);
  (Wrd144.Obj) = (current_block [OBJECT_21_6]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_29)
  (Wrd132.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_54)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_21_5]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd166.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd166.uLng) == 62))
    goto label_63;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd164.Lng))))
    goto label_63;
  (Wrd158.Obj) = ((Wrd162.pObj) [4]);
  (* (--Rsp)) = (Wrd158.Obj);

DEFLABEL (label_62)
  (Wrd181.Obj) = (Rsp [3]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd182.uLng) == 62))
    goto label_61;
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [0]);
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd180.Lng))))
    goto label_61;
  (Wrd172.Obj) = ((Wrd178.pObj) [4]);

DEFLABEL (label_60)
  (Wrd188.Obj) = (* (Rsp++));
  if ((Wrd172.Obj) == (Wrd188.Obj))
    goto label_58;
  (Wrd190.Obj) = (current_block [OBJECT_21_3]);
  goto label_57;

DEFLABEL (label_58)
  (Wrd190.Obj) = (current_block [OBJECT_21_2]);

DEFLABEL (label_57)
DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));
  if ((Wrd190.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  Rvl = (Rsp [0]);
  goto label_44;

DEFLABEL (label_61)
  (Wrd183.Obj) = (Rsp [3]);
  (Wrd184.Obj) = (current_block [OBJECT_21_0]);
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_32)
  (Wrd172.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd167.Obj) = (Rsp [0]);
  (Wrd168.Obj) = (current_block [OBJECT_21_0]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  Rsp = (& (Rsp [1]));
  goto label_43;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Wrd63.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_21_17);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_69;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_69;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_68)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd24.Obj) == (Wrd5.Obj))
    goto label_66;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_65;

DEFLABEL (label_66)
  Rvl = (current_block [OBJECT_21_2]);

DEFLABEL (label_65)
DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_21_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_21_14);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_74;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_74;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_73)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_71;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_70;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_21_2]);

DEFLABEL (label_70)
DEFLABEL (label_72)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_21_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 15
#define DEBUGGING_LABEL_22_2 14
#define OBJECT_22_0 13
#define EXECUTE_CACHE_22_8 9
#define EXECUTE_CACHE_22_6 11
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto write_label_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_label_5)
DEFLABEL (write_label_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_10 15
#define LABEL_23_11 17
#define LABEL_23_12 19
#define LABEL_23_13 21
#define LABEL_23_18 23
#define LABEL_23_15 25
#define LABEL_23_17 27
#define LABEL_23_19 29
#define ENVIRONMENT_LABEL_23_3 42
#define DEBUGGING_LABEL_23_2 41
#define OBJECT_23_5 40
#define OBJECT_23_4 39
#define OBJECT_23_3 38
#define OBJECT_23_2 37
#define OBJECT_23_1 36
#define OBJECT_23_0 35
#define EXECUTE_CACHE_23_16 31
#define EXECUTE_CACHE_23_14 33
#define FREE_REFERENCES_LABEL_23_0 30
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd84;
  machine_word Wrd91;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_23_4);
      goto write_strings_compact_19;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_23_11);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_23_12);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_23_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_23_15);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_23_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_23_19);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_strings_compact_31)
DEFLABEL (write_strings_compact_19)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_17;

DEFLABEL (loop_32)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_34;
  Rsp = (& (Rsp [3]));
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (label_34)
  if (! ((Wrd6.uLng) == 1))
    goto label_53;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_52)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_51;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_50)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_49;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd28.Obj) = (MAKE_OBJECT (26, (Wrd32.uLng)));

DEFLABEL (label_48)
  (Wrd39.Obj) = (* (Rsp++));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_47;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_47;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd48.Lng) = ((Wrd49.Lng) + (Wrd50.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd48.Lng)))
    goto label_47;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd48.Lng));

DEFLABEL (label_46)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_45;
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_45;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd59.Lng) = ((Wrd61.Lng) + (Wrd62.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd59.Lng)))
    goto label_45;
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_44)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_43;
  (Wrd66.Obj) = (Rsp [6]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_43;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if ((Wrd93.Lng) > (Wrd95.Lng))
    goto label_40;

DEFLABEL (label_39)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_17);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_23_5]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_42;
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! ((Wrd91.Lng) > 0))
    goto label_39;

DEFLABEL (label_41)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_23_15);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_42)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_41;

DEFLABEL (label_43)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_45)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_24)
  (Wrd45.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 1);

DEFLABEL (label_21)
  (Wrd10.Obj) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define LABEL_24_10 9
#define ENVIRONMENT_LABEL_24_3 20
#define DEBUGGING_LABEL_24_2 19
#define EXECUTE_CACHE_24_12 11
#define EXECUTE_CACHE_24_11 13
#define EXECUTE_CACHE_24_9 15
#define EXECUTE_CACHE_24_7 17
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_24_4);
      goto write_items_miser_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_items_miser_6)
DEFLABEL (write_items_miser_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 9
#define DEBUGGING_LABEL_25_2 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto new_indentation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_indentation_3)
DEFLABEL (new_indentation_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 18
#define DEBUGGING_LABEL_26_2 17
#define OBJECT_26_1 16
#define OBJECT_26_0 15
#define EXECUTE_CACHE_26_9 9
#define EXECUTE_CACHE_26_8 11
#define EXECUTE_CACHE_26_7 13
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto binding_name_string_3;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binding_name_string_7)
DEFLABEL (binding_name_string_3)
  INTERRUPT_CHECK (26, LABEL_26_4);
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
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto package_name_string_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_name_string_5)
DEFLABEL (package_name_string_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_7 5
#define LABEL_28_5 7
#define LABEL_28_6 9
#define ENVIRONMENT_LABEL_28_3 24
#define DEBUGGING_LABEL_28_2 23
#define OBJECT_28_3 22
#define OBJECT_28_2 21
#define OBJECT_28_1 20
#define OBJECT_28_0 19
#define EXECUTE_CACHE_28_10 11
#define EXECUTE_CACHE_28_9 13
#define EXECUTE_CACHE_28_8 15
#define FREE_REFERENCE_28_0 18
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
forpkg_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_28_4);
      goto package_name__string_2;

    case 1:
      current_block = (Rpc - LABEL_28_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_name__string_6)
DEFLABEL (package_name__string_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_8;
  Wrd12 = Wrd16;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_1]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd13.pObj));

DEFLABEL (label_4)
  (Wrd12.Obj) = Rvl;
  goto label_7;

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
forpkg_so_7f40e96413911a9d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	0,
	0,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 28)
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

static const struct liarc_code_S arr_decl_forpkg_so_7f40e96413911a9d [28] =
  {
    { "forpkg_so_code_1", 9, forpkg_so_code_1 },
    { "forpkg_so_code_2", 16, forpkg_so_code_2 },
    { "forpkg_so_code_3", 2, forpkg_so_code_3 },
    { "forpkg_so_code_4", 30, forpkg_so_code_4 },
    { "forpkg_so_code_5", 13, forpkg_so_code_5 },
    { "forpkg_so_code_6", 12, forpkg_so_code_6 },
    { "forpkg_so_code_7", 10, forpkg_so_code_7 },
    { "forpkg_so_code_8", 5, forpkg_so_code_8 },
    { "forpkg_so_code_9", 11, forpkg_so_code_9 },
    { "forpkg_so_code_10", 11, forpkg_so_code_10 },
    { "forpkg_so_code_11", 2, forpkg_so_code_11 },
    { "forpkg_so_code_12", 2, forpkg_so_code_12 },
    { "forpkg_so_code_13", 14, forpkg_so_code_13 },
    { "forpkg_so_code_14", 2, forpkg_so_code_14 },
    { "forpkg_so_code_15", 2, forpkg_so_code_15 },
    { "forpkg_so_code_16", 10, forpkg_so_code_16 },
    { "forpkg_so_code_17", 9, forpkg_so_code_17 },
    { "forpkg_so_code_18", 7, forpkg_so_code_18 },
    { "forpkg_so_code_19", 32, forpkg_so_code_19 },
    { "forpkg_so_code_20", 10, forpkg_so_code_20 },
    { "forpkg_so_code_21", 16, forpkg_so_code_21 },
    { "forpkg_so_code_22", 3, forpkg_so_code_22 },
    { "forpkg_so_code_23", 14, forpkg_so_code_23 },
    { "forpkg_so_code_24", 4, forpkg_so_code_24 },
    { "forpkg_so_code_25", 1, forpkg_so_code_25 },
    { "forpkg_so_code_26", 3, forpkg_so_code_26 },
    { "forpkg_so_code_27", 2, forpkg_so_code_27 },
    { "forpkg_so_code_28", 4, forpkg_so_code_28 }
  };

int
decl_forpkg_so_7f40e96413911a9d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_forpkg_so_7f40e96413911a9d);
  return (0);
}

DECLARE_COMPILED_CODE ("forpkg.so", 3, decl_forpkg_so_7f40e96413911a9d, forpkg_so_7f40e96413911a9d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_forpkg_so_data_7f40e96413911a9d [4434] =
  "\x7d\x40\xef\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\x1d\x0c"
  "\x02\xc1\xba\xc2\xbb\x83\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe\x28"
  "\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0c\x1d\x0c"
  "\x02\x0c\x0c\x86\x07\xb3\x83\x0d\x0d\x24\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\x0f\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb2\x1d\xb1\x81\x85\x0c\xb3"
  "\x83\x0c\x0d\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\xb7\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x0c\x82\x83\xb3\x81\x0d\x1c\x0d\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb7\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x07\xb1\xb3\x82\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\xb1\x81\x83\xb3\x85\x08\x28\xb7\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\xb3\x82\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\xb7\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x82"
  "\xb3\x83\x0c\x0d\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x82\xb3\x83\x0c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x1b"
  "\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb7\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1d\xb1\xb2\x08"
  "\x28\xb7\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\xb3\x82\x28\x1b\x28\xb7\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x06\xb1\xb2\x0d\x1c\x0d"
  "\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x82"
  "\x81\x85\x06\x07\xb3\x83\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\xb1\xc1\xb2\x1d\x80\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba"
  "\x1d\xb0\x02\x88\x28\xb7\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x81\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\xb5\xb6\xb4\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x52\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x63\x72\x65\x66\x2f\x2e\x2f\x66\x6f\x72\x70\x6b"
  "\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x64\x72\x02"
  "\x03\x20\x20\x50\x04\x63\x61\x72\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x04\x18\x66\x6f\x72\x6d\x61\x74\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x73\x2d\x75\x6e\x75\x73\x75\x61\x6c\x06\x0f\x66"
  "\x6f\x72\x6d\x61\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x03\x10\x77"
  "\x72\x69\x74\x65\x2d\x73\x65\x70\x61\x72\x61\x74\x6f\x72\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x05\x0c\x14\x81\x85\x02\x0b\x12"
  "\x81\x85\x02\x0a\x10\x81\x89\x02\x09\x0e\x81\x89\x02\x08\x0c\x81"
  "\x8b\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x89\x02\x05\x06\x81\x85"
  "\x02\x04\x04\x84\x06\x13\x26\x09\x02\x10\x46\x72\x65\x65\x20\x52"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x02\x03\x20\x20\x50\x23\x42"
  "\x69\x6e\x64\x69\x6e\x67\x73\x20\x77\x69\x74\x68\x20\x4d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x20\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x73\x13\x55\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x42\x69\x6e\x64"
  "\x69\x6e\x67\x73\x0c\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3c\x3f"
  "\x12\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2f\x62\x69\x6e\x64\x69"
  "\x6e\x67\x03\x04\x0c\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x21"
  "\x04\x05\x73\x6f\x72\x74\x0a\x03\x18\x67\x65\x74\x2d\x76\x61\x6c"
  "\x75\x65\x2d\x63\x65\x6c\x6c\x73\x2f\x75\x6e\x75\x73\x75\x61\x6c"
  "\x0b\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x74\x63\x68\x69"
  "\x6e\x67\x2d\x69\x74\x65\x6d\x73\x0c\x03\x07\x13\x66\x6f\x72\x6d"
  "\x61\x74\x2d\x76\x61\x6c\x75\x65\x2d\x63\x65\x6c\x6c\x73\x0d\x08"
  "\x12\x66\x6f\x72\x6d\x61\x74\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x73\x0e\x08\x1c\x22\x81\x87\x02\x1b\x20\x81\x8d\x02\x1a\x1e"
  "\x81\x8d\x02\x19\x1c\x81\x87\x02\x18\x1a\x81\x87\x02\x17\x18\x81"
  "\x87\x02\x16\x16\x81\x87\x02\x15\x14\x81\x89\x02\x14\x12\x81\x85"
  "\x02\x13\x10\x81\x83\x02\x12\x0e\x83\x04\x11\x0c\x81\x8f\x02\x10"
  "\x0a\x81\x89\x02\x0f\x08\x81\x8b\x02\x0e\x06\x81\x87\x02\x0d\x04"
  "\x84\x06\x21\x40\x0f\x02\x01\x0d\x04\x0b\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x10\x03\x1e"
  "\x06\x81\x83\x02\x1d\x04\x83\x04\x05\x0e\x11\x02\x02\x07\x50\x61"
  "\x72\x65\x6e\x74\x08\x50\x61\x63\x6b\x61\x67\x65\x10\x62\x69\x6e"
  "\x64\x69\x6e\x67\x2f\x70\x61\x63\x6b\x61\x67\x65\x02\x05\x13\x77"
  "\x72\x69\x74\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6e\x61\x6d"
  "\x65\x12\x03\x09\x70\x61\x63\x6b\x61\x67\x65\x3f\x06\x15\x66\x6f"
  "\x72\x6d\x61\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x2f\x66\x69\x6c"
  "\x65\x73\x13\x04\x1d\x63\x6c\x61\x73\x73\x69\x66\x79\x2d\x62\x69"
  "\x6e\x64\x69\x6e\x67\x73\x2d\x62\x79\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x14\x04\x05\x61\x73\x73\x71\x15\x04\x07\x18\x66\x6f\x72\x6d"
  "\x61\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x2f\x62\x69\x6e\x64\x69"
  "\x6e\x67\x73\x16\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70"
  "\x17\x08\x17\x66\x6f\x72\x6d\x61\x74\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x2f\x69\x6d\x70\x6f\x72\x74\x73\x18\x07\x17\x66\x6f\x72\x6d"
  "\x61\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x2f\x65\x78\x70\x6f\x72"
  "\x74\x73\x19\x0b\x3c\x3e\x81\x83\x02\x3b\x3c\x83\x04\x3a\x3a\x81"
  "\x91\x02\x39\x38\x81\x8f\x02\x38\x36\x81\x8d\x02\x37\x34\x81\x8b"
  "\x02\x36\x32\x81\x8b\x02\x35\x30\x81\x85\x02\x34\x2e\x81\x85\x02"
  "\x33\x2c\x81\x8d\x02\x32\x2a\x81\x8d\x02\x31\x28\x81\x85\x02\x30"
  "\x26\x81\x85\x02\x2f\x24\x81\x91\x02\x2e\x22\x81\x8d\x02\x2d\x20"
  "\x81\x8f\x02\x2c\x1e\x81\x8b\x02\x2b\x1c\x81\x8d\x02\x2a\x1a\x81"
  "\x83\x02\x29\x18\x81\x83\x02\x28\x16\x83\x04\x27\x14\x81\x89\x02"
  "\x26\x12\x81\x8b\x02\x25\x10\x81\x89\x02\x24\x0e\x81\x8d\x02\x23"
  "\x0c\x81\x89\x02\x22\x0a\x81\x89\x02\x21\x08\x81\x8b\x02\x20\x06"
  "\x81\x89\x02\x1f\x04\x86\x0a\x3d\x60\x1a\x02\x02\x20\x0a\x62\x69"
  "\x6e\x64\x69\x6e\x67\x3c\x3f\x1b\x1a\x76\x61\x6c\x75\x65\x2d\x63"
  "\x65\x6c\x6c\x2f\x73\x6f\x75\x72\x63\x65\x2d\x62\x69\x6e\x64\x69"
  "\x6e\x67\x03\x04\x0c\x77\x72\x69\x74\x65\x2d\x6c\x61\x62\x65\x6c"
  "\x1c\x04\x04\x6d\x61\x70\x1d\x03\x14\x70\x61\x63\x6b\x61\x67\x65"
  "\x2f\x6e\x61\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x1e\x04\x04\x0a"
  "\x08\x13\x66\x6f\x72\x6d\x61\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x73\x1f\x03\x14\x62\x69\x6e\x64\x69\x6e\x67\x2f\x6e"
  "\x61\x6d\x65\x2d\x73\x74\x72\x69\x6e\x67\x20\x05\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x21\x09\x49\x1c\x81\x93"
  "\x02\x48\x1a\x81\x8f\x02\x47\x18\x81\x8d\x02\x46\x16\x81\x8d\x02"
  "\x45\x14\x81\x8d\x02\x44\x12\x81\x8f\x02\x43\x10\x81\x8b\x02\x42"
  "\x0e\x81\x91\x02\x41\x0c\x81\x85\x02\x40\x0a\x81\x93\x02\x3f\x08"
  "\x81\x8d\x02\x3e\x06\x81\x8b\x02\x3d\x04\x87\x0c\x1b\x37\x22\x02"
  "\x03\x10\x67\x65\x74\x2d\x76\x61\x6c\x75\x65\x2d\x63\x65\x6c\x6c"
  "\x73\x23\x04\x07\x61\x70\x70\x65\x6e\x64\x04\x0c\x04\x14\x6b\x65"
  "\x65\x70\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d"
  "\x73\x05\x55\x1a\x81\x85\x02\x54\x18\x81\x83\x02\x53\x16\x83\x04"
  "\x52\x14\x81\x87\x02\x51\x12\x81\x89\x02\x50\x10\x81\x83\x02\x4f"
  "\x0e\x81\x83\x02\x4e\x0c\x83\x04\x4d\x0a\x81\x85\x02\x4c\x08\x84"
  "\x06\x4b\x06\x81\x83\x02\x4a\x04\x83\x04\x19\x29\x0c\x02\x08\x02"
  "\x04\x04\x05\x6d\x65\x6d\x71\x03\x5f\x16\x81\x87\x02\x5e\x14\x81"
  "\x87\x02\x5d\x12\x81\x87\x02\x5c\x10\x81\x85\x02\x5b\x0e\x81\x85"
  "\x02\x5a\x0c\x81\x85\x02\x59\x0a\x81\x85\x02\x58\x08\x81\x85\x02"
  "\x57\x06\x81\x87\x02\x56\x04\x83\x04\x15\x24\x24\x02\x09\x03\x3a"
  "\x20\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x25"
  "\x03\x1e\x03\x10\x04\x64\x0c\x81\x8b\x02\x63\x0a\x81\x87\x02\x62"
  "\x08\x81\x87\x02\x61\x06\x81\x87\x02\x60\x04\x85\x08\x0b\x16\x26"
  "\x02\x0a\x06\x46\x69\x6c\x65\x73\x02\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x27\x03\x10\x04\x1c\x04\x04\x25\x03\x0d\x2d\x3e\x6e\x61\x6d"
  "\x65\x73\x74\x72\x69\x6e\x67\x04\x06\x77\x72\x69\x74\x65\x28\x08"
  "\x6f\x18\x81\x89\x02\x6e\x16\x81\x85\x02\x6d\x14\x81\x85\x02\x6c"
  "\x12\x81\x85\x02\x6b\x10\x81\x89\x02\x6a\x0e\x81\x89\x02\x69\x0c"
  "\x81\x89\x02\x68\x0a\x81\x89\x02\x67\x08\x81\x89\x02\x66\x06\x81"
  "\x8b\x02\x65\x04\x86\x0a\x17\x2d\x29\x02\x0b\x02\x20\x01\x03\x20"
  "\x28\x02\x29\x09\x42\x69\x6e\x64\x69\x6e\x67\x73\x10\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2f\x66\x69\x6c\x65\x02\x09\x10\x66"
  "\x6f\x72\x6d\x61\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x2a\x03"
  "\x20\x03\x27\x04\x1d\x06\x21\x06\x18\x64\x65\x63\x6f\x72\x61\x74"
  "\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x27\x07\x7a\x18\x81\x8b\x02\x79\x16\x81\x89\x02\x78\x14\x81\x8f"
  "\x02\x77\x12\x81\x89\x02\x76\x10\x81\x89\x02\x75\x0e\x81\x8b\x02"
  "\x74\x0c\x81\x87\x02\x73\x0a\x81\x85\x02\x72\x08\x81\x85\x02\x71"
  "\x06\x81\x85\x02\x70\x04\x87\x0c\x17\x31\x2b\x02\x0c\x0d\x49\x6d"
  "\x70\x6f\x72\x74\x73\x20\x66\x72\x6f\x6d\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x6d\x61\x70\x2f\x69\x6d\x70\x6f\x72\x74\x2c\x02\x0a\x0f\x66"
  "\x6f\x72\x6d\x61\x74\x2d\x65\x78\x70\x6f\x72\x74\x73\x2d\x02\x7c"
  "\x06\x81\x91\x02\x7b\x04\x88\x0e\x05\x0e\x2e\x02\x0d\x0b\x45\x78"
  "\x70\x6f\x72\x74\x73\x20\x74\x6f\x11\x6c\x6f\x63\x61\x6c\x2d\x6d"
  "\x61\x70\x2f\x65\x78\x70\x6f\x72\x74\x2f\x02\x0a\x2d\x02\x7e\x06"
  "\x81\x91\x02\x7d\x04\x87\x0c\x05\x0e\x30\x02\x0e\x02\x5d\x03\x20"
  "\x5b\x0a\x20\x70\x61\x63\x6b\x61\x67\x65\x20\x03\x1e\x09\x2a\x05"
  "\x21\x06\x21\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x3f\x31\x03\x10\x77\x72\x69\x74\x65\x2d\x74\x6f"
  "\x2d\x73\x74\x72\x69\x6e\x67\x32\x03\x0c\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x6e\x61\x6d\x65\x33\x08\x8c\x01\x1e\x81\x83\x02\x8b\x01\x1c"
  "\x81\x89\x02\x8a\x01\x1a\x81\x83\x02\x89\x01\x18\x81\x85\x02\x88"
  "\x01\x16\x81\x87\x02\x87\x01\x14\x81\x85\x02\x86\x01\x12\x81\x85"
  "\x02\x85\x01\x10\x84\x06\x84\x01\x0e\x81\x8b\x02\x83\x01\x0c\x81"
  "\x8b\x02\x82\x01\x0a\x81\x85\x02\x81\x01\x08\x81\x93\x02\x80\x01"
  "\x06\x81\x91\x02\x7f\x04\x8a\x12\x1d\x35\x34\x02\x0f\x8e\x01\x06"
  "\x81\x85\x02\x8d\x01\x04\x84\x06\x05\x35\x02\x10\x90\x01\x06\x81"
  "\x85\x02\x8f\x01\x04\x84\x06\x05\x36\x02\x11\x1b\x16\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x73\x03\x03\x10\x04\x1c\x04\x0a\x04\x17\x04\x08\x1f\x07\x9a"
  "\x01\x16\x81\x8f\x02\x99\x01\x14\x81\x8d\x02\x98\x01\x12\x81\x8f"
  "\x02\x97\x01\x10\x81\x91\x02\x96\x01\x0e\x81\x8f\x02\x95\x01\x0c"
  "\x81\x85\x02\x94\x01\x0a\x81\x91\x02\x93\x01\x08\x81\x8f\x02\x92"
  "\x01\x06\x81\x8f\x02\x91\x01\x04\x89\x10\x15\x2a\x1b\x02\x12\x09"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x02\x04\x04\x0a\x04\x0a\x70\x61"
  "\x63\x6b\x61\x67\x65\x3c\x3f\x04\x15\x05\xa3\x01\x14\x81\x89\x02"
  "\xa2\x01\x12\x81\x87\x02\xa1\x01\x10\x81\x85\x02\xa0\x01\x0e\x81"
  "\x85\x02\x9f\x01\x0c\x81\x85\x02\x9e\x01\x0a\x84\x06\x9d\x01\x08"
  "\x81\x85\x02\x9c\x01\x06\x81\x87\x02\x9b\x01\x04\x84\x06\x13\x24"
  "\x17\x02\x13\x04\x1c\x04\x03\x31\x08\x1f\x03\x32\x03\x33\x07\xaa"
  "\x01\x10\x81\x83\x02\xa9\x01\x0e\x81\x8d\x02\xa8\x01\x0c\x81\x8d"
  "\x02\xa7\x01\x0a\x81\x8f\x02\xa6\x01\x08\x81\x85\x02\xa5\x01\x06"
  "\x81\x8d\x02\xa4\x01\x04\x88\x0e\x0f\x22\x15\x02\x14\x09\x73\x74"
  "\x72\x69\x6e\x67\x3c\x3f\x37\x0d\x6e\x61\x6d\x65\x2d\x3e\x73\x74"
  "\x72\x69\x6e\x67\x38\x03\x04\x1d\x04\x25\x03\x1a\x63\x6c\x61\x73"
  "\x73\x69\x66\x79\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d"
  "\x6e\x61\x6d\x65\x73\x39\x04\x11\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2d\x3e\x6e\x61\x6d\x65\x3a\x03\x10\x03\x10\x6e\x65\x77"
  "\x2d\x69\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x3b\x04\x0a\x06"
  "\x16\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x73\x2f\x63"
  "\x6f\x6d\x70\x61\x63\x74\x0a\x06\x12\x77\x72\x69\x74\x65\x2d\x69"
  "\x74\x65\x6d\x73\x2f\x6d\x69\x73\x65\x72\x3c\x04\x37\x04\x09\x73"
  "\x74\x72\x69\x6e\x67\x3d\x3f\x03\x31\x03\x32\x03\x33\x0f\xca\x01"
  "\x42\x81\x83\x02\xc9\x01\x40\x81\x87\x02\xc8\x01\x3e\x81\x83\x02"
  "\xc7\x01\x3c\x81\x89\x02\xc6\x01\x3a\x81\x89\x02\xc5\x01\x38\x81"
  "\x87\x02\xc4\x01\x36\x81\x89\x02\xc3\x01\x34\x81\x89\x02\xc2\x01"
  "\x32\x81\x87\x02\xc1\x01\x30\x81\x87\x02\xc0\x01\x2e\x81\x87\x02"
  "\xbf\x01\x2c\x81\x8b\x02\xbe\x01\x2a\x81\x89\x02\xbd\x01\x28\x81"
  "\x85\x02\xbc\x01\x26\x81\x89\x02\xbb\x01\x24\x81\x87\x02\xba\x01"
  "\x22\x84\x06\xb9\x01\x20\x81\x89\x02\xb8\x01\x1e\x81\x8f\x02\xb7"
  "\x01\x1c\x81\x8b\x02\xb6\x01\x1a\x81\x89\x02\xb5\x01\x18\x81\x93"
  "\x02\xb4\x01\x16\x81\x8d\x02\xb3\x01\x14\x81\x87\x02\xb2\x01\x12"
  "\x81\x87\x02\xb1\x01\x10\x81\x87\x02\xb0\x01\x0e\x81\x87\x02\xaf"
  "\x01\x0c\x81\x85\x02\xae\x01\x0a\x81\x91\x02\xad\x01\x08\x81\x8f"
  "\x02\xac\x01\x06\x81\x87\x02\xab\x01\x04\x88\x0e\x41\x68\x37\x02"
  "\x15\x03\x39\x02\xd4\x01\x16\x81\x85\x02\xd3\x01\x14\x81\x85\x02"
  "\xd2\x01\x12\x81\x87\x02\xd1\x01\x10\x81\x87\x02\xd0\x01\x0e\x81"
  "\x87\x02\xcf\x01\x0c\x81\x87\x02\xce\x01\x0a\x81\x83\x02\xcd\x01"
  "\x08\x83\x04\xcc\x01\x06\x81\x85\x02\xcb\x01\x04\x83\x04\x15\x1e"
  "\x3d\x02\x16\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69"
  "\x6e\x67\x2d\x69\x74\x65\x6d\x02\xe4\x01\x22\x81\x85\x02\xe3\x01"
  "\x20\x81\x85\x02\xe2\x01\x1e\x81\x85\x02\xe1\x01\x1c\x81\x85\x02"
  "\xe0\x01\x1a\x81\x8d\x02\xdf\x01\x18\x81\x8d\x02\xde\x01\x16\x81"
  "\x89\x02\xdd\x01\x14\x81\x87\x02\xdc\x01\x12\x81\x87\x02\xdb\x01"
  "\x10\x81\x87\x02\xda\x01\x0e\x81\x85\x02\xd9\x01\x0c\x84\x06\xd8"
  "\x01\x0a\x81\x89\x02\xd7\x01\x08\x81\x8d\x02\xd6\x01\x06\x81\x8b"
  "\x02\xd5\x01\x04\x81\x89\x02\x21\x2f\x3e\x02\x17\x02\x3a\x04\x25"
  "\x03\x10\x03\xe7\x01\x08\x81\x85\x02\xe6\x01\x06\x81\x85\x02\xe5"
  "\x01\x04\x84\x06\x07\x10\x3f\x02\x18\x02\x20\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x02\x04\x25\x03\x10\x03\xf5"
  "\x01\x1e\x81\x91\x02\xf4\x01\x1c\x81\x91\x02\xf3\x01\x1a\x81\x91"
  "\x02\xf2\x01\x18\x81\x95\x02\xf1\x01\x16\x81\x91\x02\xf0\x01\x14"
  "\x81\x91\x02\xef\x01\x12\x81\x91\x02\xee\x01\x10\x81\x8f\x02\xed"
  "\x01\x0e\x81\x8f\x02\xec\x01\x0c\x81\x91\x02\xeb\x01\x0a\x81\x8f"
  "\x02\xea\x01\x08\x81\x8f\x02\xe9\x01\x06\x81\x8f\x02\xe8\x01\x04"
  "\x86\x0a\x1d\x2b\x02\x19\x04\x04\x25\x04\x28\x03\x10\x05\xf9\x01"
  "\x0a\x81\x85\x02\xf8\x01\x08\x81\x85\x02\xf7\x01\x06\x81\x85\x02"
  "\xf6\x01\x04\x86\x0a\x09\x15\x28\x02\x1a\x05\x20\x20\x20\x20\x04"
  "\x21\x02\xfa\x01\x04\x83\x04\x03\x0a\x25\x02\x1b\x03\x31\x03\x32"
  "\x03\x33\x04\xfd\x01\x08\x81\x83\x02\xfc\x01\x06\x81\x83\x02\xfb"
  "\x01\x04\x83\x04\x07\x13\x33\x02\x1c\x03\x15\x70\x61\x63\x6b\x61"
  "\x67\x65\x2d\x6e\x61\x6d\x65\x2d\x3e\x73\x74\x72\x69\x6e\x67\x32"
  "\x02\xff\x01\x06\x81\x83\x02\xfe\x01\x04\x83\x04\x05\x0d\x31\x02"
  "\x1d\x02\x20\x01\x02\x29\x02\x28\x38\x02\x04\x1d\x05\x21\x06\x27"
  "\x04\x83\x02\x0a\x81\x85\x02\x82\x02\x08\x81\x83\x02\x81\x02\x06"
  "\x81\x89\x02\x80\x02\x04\x83\x04\x09\x19\x38\x1d\x27\x27\x38\x04"
  "\x31\x04\x33\x04\x25\x04\x28\x04\x04\x3f\x04\x3e\x0c\x3d\x04\x37"
  "\x04\x15\x04\x17\x04\x1b\x04\x36\x04\x35\x04\x34\x04\x30\x04\x2e"
  "\x04\x2b\x04\x29\x04\x26\x04\x24\x04\x0c\x04\x22\x04\x1a\x04\x11"
  "\x04\x0f\x04\x09\x04\x1d\x32\x1e\x20\x3b\x3c\x0a\x1c\x3a\x39\x1f"
  "\x0e\x14\x2a\x2c\x2f\x2d\x19\x18\x16\x13\x12\x23\x0b\x0d\x10\x66"
  "\x6f\x72\x6d\x61\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x1d\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
forpkg_so_data_7f40e96413911a9d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_forpkg_so_data_7f40e96413911a9d [0]))), (sizeof (prog_forpkg_so_data_7f40e96413911a9d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("forpkg.so", forpkg_so_data_7f40e96413911a9d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("forpkg.so", "47980e6b2ff9a770")
