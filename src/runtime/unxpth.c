/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define LABEL_1_12 19
#define LABEL_1_13 21
#define LABEL_1_14 23
#define LABEL_1_15 25
#define LABEL_1_16 27
#define LABEL_1_17 29
#define ENVIRONMENT_LABEL_1_3 49
#define DEBUGGING_LABEL_1_2 48
#define OBJECT_1_0 47
#define EXECUTE_CACHE_1_18 31
#define FREE_REFERENCE_1_12 34
#define FREE_REFERENCE_1_11 35
#define FREE_REFERENCE_1_10 36
#define FREE_REFERENCE_1_9 37
#define FREE_REFERENCE_1_8 38
#define FREE_REFERENCE_1_7 39
#define FREE_REFERENCE_1_6 40
#define FREE_REFERENCE_1_5 41
#define FREE_REFERENCE_1_4 42
#define FREE_REFERENCE_1_3 43
#define FREE_REFERENCE_1_2 44
#define FREE_REFERENCE_1_1 45
#define FREE_REFERENCE_1_0 46
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_unix_host_type_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_13;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_unix_host_type_16)
DEFLABEL (make_unix_host_type_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_38;
  Wrd17 = Wrd21;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_36;
  Wrd23 = Wrd27;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_34;
  Wrd29 = Wrd33;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_32;
  Wrd35 = Wrd39;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_30;
  Wrd41 = Wrd45;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_28;
  Wrd47 = Wrd51;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_26;
  Wrd53 = Wrd57;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_9]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_24;
  Wrd59 = Wrd63;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_10]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_22;
  Wrd65 = Wrd69;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_11]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_20;
  Wrd71 = Wrd75;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_12]));
  (Wrd84.Obj) = ((Wrd81.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_18;
  Wrd80 = Wrd84;

DEFLABEL (label_17)
  (Rsp [14]) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd81.pObj));

DEFLABEL (label_14)
  (Wrd80.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd72.pObj));

DEFLABEL (label_13)
  (Wrd71.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd66.pObj));

DEFLABEL (label_12)
  (Wrd65.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd60.pObj));

DEFLABEL (label_11)
  (Wrd59.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd54.pObj));

DEFLABEL (label_10)
  (Wrd53.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd48.pObj));

DEFLABEL (label_9)
  (Wrd47.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd42.pObj));

DEFLABEL (label_8)
  (Wrd41.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd36.pObj));

DEFLABEL (label_7)
  (Wrd35.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd30.pObj));

DEFLABEL (label_6)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd24.pObj));

DEFLABEL (label_5)
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd18.pObj));

DEFLABEL (label_4)
  (Wrd17.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_4)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd11.Obj);
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
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_9 11
#define LABEL_3_12 13
#define LABEL_3_13 15
#define TAG_3_14 6
#define LABEL_3_17 17
#define LABEL_3_20 19
#define LABEL_3_16 21
#define LABEL_3_19 23
#define LABEL_3_25 25
#define LABEL_3_23 27
#define LABEL_3_24 29
#define ENVIRONMENT_LABEL_3_3 59
#define DEBUGGING_LABEL_3_2 58
#define OBJECT_3_8 57
#define OBJECT_3_7 56
#define OBJECT_3_6 55
#define OBJECT_3_5 54
#define OBJECT_3_4 53
#define OBJECT_3_3 52
#define OBJECT_3_2 51
#define OBJECT_3_1 50
#define OBJECT_3_0 49
#define EXECUTE_CACHE_3_27 31
#define EXECUTE_CACHE_3_26 33
#define EXECUTE_CACHE_3_22 35
#define EXECUTE_CACHE_3_21 37
#define EXECUTE_CACHE_3_18 39
#define EXECUTE_CACHE_3_15 41
#define EXECUTE_CACHE_3_11 43
#define EXECUTE_CACHE_3_10 45
#define EXECUTE_CACHE_3_8 47
#define FREE_REFERENCES_LABEL_3_0 30
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_3_4);
      goto unix_parse_namestring_18;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_26;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_3_25);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_parse_namestring_25)
DEFLABEL (unix_parse_namestring_18)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_28)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (* (--Rsp)) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_32;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  (Wrd5.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_22]));

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_37;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_36)
  (Wrd28.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_33;

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd9.Obj) = (current_block [OBJECT_3_8]);
  (* (Rhp++)) = (Wrd9.Obj);

DEFLABEL (label_38)
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (Wrd13.Obj) = (current_block [OBJECT_3_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  goto label_38;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define LABEL_4_9 13
#define LABEL_4_10 15
#define LABEL_4_14 17
#define LABEL_4_15 19
#define TAG_4_16 8
#define LABEL_4_20 21
#define LABEL_4_11 23
#define LABEL_4_12 25
#define LABEL_4_18 27
#define LABEL_4_21 29
#define LABEL_4_27 31
#define LABEL_4_24 33
#define LABEL_4_28 35
#define LABEL_4_30 37
#define ENVIRONMENT_LABEL_4_3 69
#define DEBUGGING_LABEL_4_2 68
#define OBJECT_4_8 67
#define OBJECT_4_7 66
#define OBJECT_4_6 65
#define OBJECT_4_5 64
#define OBJECT_4_4 63
#define OBJECT_4_3 62
#define OBJECT_4_2 61
#define OBJECT_4_1 60
#define OBJECT_4_0 59
#define EXECUTE_CACHE_4_31 39
#define EXECUTE_CACHE_4_29 41
#define EXECUTE_CACHE_4_26 43
#define EXECUTE_CACHE_4_25 45
#define EXECUTE_CACHE_4_23 47
#define EXECUTE_CACHE_4_22 49
#define EXECUTE_CACHE_4_19 51
#define EXECUTE_CACHE_4_17 53
#define EXECUTE_CACHE_4_13 55
#define FREE_REFERENCE_4_0 58
#define FREE_REFERENCES_LABEL_4_0 38
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd96;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_4);
      goto expand_directory_prefixes_23;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_35;

    case 9:
      current_block = (Rpc - LABEL_4_20);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_4_27);
      goto lambda_3;

    case 15:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_1;

    case 17:
      current_block = (Rpc - LABEL_4_30);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expand_directory_prefixes_34)
DEFLABEL (expand_directory_prefixes_23)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_52;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_51)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_50;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! ((Wrd96.Lng) == 0))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_49;
  Wrd32 = Wrd36;

DEFLABEL (label_48)
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 30))
    goto label_47;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd49.Lng))))
    goto label_47;
  (Wrd42.uLng) = ((unsigned long) (((unsigned char *) (Wrd47.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd43.Obj) = (MAKE_OBJECT (2, (Wrd42.uLng)));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_46)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == (current_block [OBJECT_4_4]))
    goto label_42;
  if ((Wrd57.Obj) == (current_block [OBJECT_4_6]))
    goto label_40;

DEFLABEL (label_39)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 2;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  Wrd70 = Wrd67;
  (Wrd71.Obj) = (Rsp [3]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [3]) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Rsp [0]) = Rvl;
  goto lambda_3;

DEFLABEL (label_42)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_45;
  if ((Wrd72.Obj) == (current_block [OBJECT_4_5]))
    goto label_39;

DEFLABEL (label_44)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto lambda_3;

DEFLABEL (label_43)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd74.Obj) = (current_block [OBJECT_4_5]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_39;

DEFLABEL (label_47)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_4_2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd33.pObj));

DEFLABEL (label_28)
  (Wrd32.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_52)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_57;
  if (! ((Wrd7.Obj) == (current_block [OBJECT_4_5])))
    goto label_56;

DEFLABEL (label_55)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (label_56)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (label_57)
  (Wrd9.Obj) = (current_block [OBJECT_4_5]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

DEFLABEL (lambda_36)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_4_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_59;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_58)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (label_59)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_32)
  (Wrd6.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_3 11
#define OBJECT_5_2 10
#define OBJECT_5_1 9
#define OBJECT_5_0 8
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_4);
      goto simplify_directory_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simplify_directory_9)
DEFLABEL (simplify_directory_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  if ((Wrd5.Obj) == (current_block [OBJECT_5_1]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_14;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_13)
  if (! ((Wrd17.Obj) == (current_block [OBJECT_5_3])))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_14)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_6 9
#define ENVIRONMENT_LABEL_6_3 19
#define DEBUGGING_LABEL_6_2 18
#define EXECUTE_CACHE_6_9 11
#define EXECUTE_CACHE_6_8 13
#define FREE_REFERENCE_6_1 16
#define FREE_REFERENCE_6_0 17
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6_4);
      goto parse_directory_components_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_directory_components_6)
DEFLABEL (parse_directory_components_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_8;
  Wrd14 = Wrd18;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define ENVIRONMENT_LABEL_7_3 16
#define DEBUGGING_LABEL_7_2 15
#define OBJECT_7_3 14
#define OBJECT_7_2 13
#define OBJECT_7_1 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto parse_directory_component_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_directory_component_5)
DEFLABEL (parse_directory_component_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_7_3]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define OBJECT_8_1 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_8_4);
      goto string_components_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_components_5)
DEFLABEL (string_components_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 30))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_11 9
#define LABEL_9_10 11
#define LABEL_9_8 13
#define LABEL_9_12 15
#define ENVIRONMENT_LABEL_9_3 23
#define DEBUGGING_LABEL_9_2 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_9 17
#define EXECUTE_CACHE_9_7 19
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto substring_components_9;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substring_components_13)
DEFLABEL (substring_components_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_9_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_15)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd27.uLng) == 26))
    goto label_17;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd28.Lng) = ((Wrd30.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_17;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_16)
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_6 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_13 19
#define LABEL_10_15 21
#define LABEL_10_17 23
#define LABEL_10_14 25
#define LABEL_10_19 27
#define ENVIRONMENT_LABEL_10_3 43
#define DEBUGGING_LABEL_10_2 42
#define OBJECT_10_6 41
#define OBJECT_10_5 40
#define OBJECT_10_4 39
#define OBJECT_10_3 38
#define OBJECT_10_2 37
#define OBJECT_10_1 36
#define OBJECT_10_0 35
#define EXECUTE_CACHE_10_18 29
#define EXECUTE_CACHE_10_16 31
#define EXECUTE_CACHE_10_7 33
#define FREE_REFERENCES_LABEL_10_0 28
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd84;
  machine_word Wrd96;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_10_4);
      goto parse_name_16;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_name_27)
DEFLABEL (parse_name_16)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_47)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_46;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd99.Lng) == 0)
    goto label_30;

DEFLABEL (label_45)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_44;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_44;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_43)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_42;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_42;
  if ((Wrd24.Obj) == (Wrd18.Obj))
    goto label_30;

DEFLABEL (label_41)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_40;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_40;
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_39)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 30))
    goto label_38;
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_38;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [1]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) (Wrd51.Lng)) < ((unsigned long) (Wrd55.Lng))))
    goto label_38;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd48.pChr) = (& ((Wrd53.pChr) [(Wrd45.Lng)]));
  (Wrd49.uLng) = ((unsigned long) (((unsigned char *) (Wrd48.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd43.Obj) = (MAKE_OBJECT (2, (Wrd49.uLng)));

DEFLABEL (label_37)
  if ((Wrd43.Obj) == (current_block [OBJECT_10_1]))
    goto label_30;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_29;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd74.Lng) = ((Wrd76.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd74.Lng)))
    goto label_29;
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_28)
  (Wrd78.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_29)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_36;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if ((Wrd96.Lng) == 0)
    goto label_35;

DEFLABEL (label_34)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd91.Obj) = (current_block [OBJECT_10_3]);
  goto label_31;

DEFLABEL (label_32)
  (Wrd91.Obj) = (Rsp [2]);

DEFLABEL (label_31)
DEFLABEL (label_33)
  (Rsp [2]) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd92.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_35)
  (Wrd91.Obj) = (current_block [OBJECT_10_6]);
  goto label_33;

DEFLABEL (label_36)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_23)
  (Wrd43.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_22)
  (Wrd37.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_30;

DEFLABEL (label_44)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_30;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_3 14
#define OBJECT_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto extract_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_4)
DEFLABEL (extract_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_11_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_13 13
#define ENVIRONMENT_LABEL_12_3 28
#define DEBUGGING_LABEL_12_2 27
#define EXECUTE_CACHE_12_15 15
#define EXECUTE_CACHE_12_14 17
#define EXECUTE_CACHE_12_12 19
#define EXECUTE_CACHE_12_11 21
#define EXECUTE_CACHE_12_10 23
#define EXECUTE_CACHE_12_7 25
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto unix_pathname__namestring_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_pathname__namestring_8)
DEFLABEL (unix_pathname__namestring_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_6 9
#define LABEL_13_10 11
#define LABEL_13_12 13
#define LABEL_13_11 15
#define LABEL_13_15 17
#define LABEL_13_14 19
#define ENVIRONMENT_LABEL_13_3 36
#define DEBUGGING_LABEL_13_2 35
#define OBJECT_13_5 34
#define OBJECT_13_4 33
#define OBJECT_13_3 32
#define OBJECT_13_2 31
#define OBJECT_13_1 30
#define OBJECT_13_0 29
#define EXECUTE_CACHE_13_13 21
#define EXECUTE_CACHE_13_16 23
#define EXECUTE_CACHE_13_9 25
#define EXECUTE_CACHE_13_8 27
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto unparse_directory_14;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_directory_21)
DEFLABEL (unparse_directory_14)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_24;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_5]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_24)
  if (! ((Wrd8.uLng) == 1))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_30)
  if ((Wrd11.Obj) == (current_block [OBJECT_13_2]))
    goto label_26;
  (Wrd21.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd34.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_25)
DEFLABEL (label_29)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_27)
  goto loop_12;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_28)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_13_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_34;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  goto loop_12;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_14);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 13
#define DEBUGGING_LABEL_14_2 12
#define OBJECT_14_4 11
#define OBJECT_14_3 10
#define OBJECT_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_14_4);
      goto unparse_directory_component_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_directory_component_6)
DEFLABEL (unparse_directory_component_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_14_0]))
    goto label_10;
  if ((Wrd5.Obj) == (current_block [OBJECT_14_2]))
    goto label_9;
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd10.uLng) == 30)
    goto label_7;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_4]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

DEFLABEL (label_7)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_14_3]);
  goto label_8;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_14_1]);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define ENVIRONMENT_LABEL_15_3 16
#define DEBUGGING_LABEL_15_2 15
#define OBJECT_15_1 14
#define OBJECT_15_0 13
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_6 11
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto unparse_name_5;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_name_8)
DEFLABEL (unparse_name_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd8.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_10)
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [1]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_1]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_2 9
#define OBJECT_16_1 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto unparse_component_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_component_5)
DEFLABEL (unparse_component_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_8;
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_6;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_16_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_16_1]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_8 5
#define LABEL_17_10 7
#define LABEL_17_12 9
#define LABEL_17_14 11
#define LABEL_17_6 13
#define LABEL_17_5 15
#define LABEL_17_18 17
#define LABEL_17_19 19
#define LABEL_17_17 21
#define LABEL_17_16 23
#define LABEL_17_11 25
#define LABEL_17_24 27
#define LABEL_17_22 29
#define LABEL_17_21 31
#define LABEL_17_23 33
#define LABEL_17_26 35
#define LABEL_17_25 37
#define ENVIRONMENT_LABEL_17_3 66
#define DEBUGGING_LABEL_17_2 65
#define OBJECT_17_13 64
#define OBJECT_17_12 63
#define OBJECT_17_11 62
#define OBJECT_17_10 61
#define OBJECT_17_9 60
#define OBJECT_17_8 59
#define OBJECT_17_7 58
#define OBJECT_17_6 57
#define OBJECT_17_5 56
#define OBJECT_17_4 55
#define OBJECT_17_3 54
#define OBJECT_17_2 53
#define OBJECT_17_1 52
#define OBJECT_17_0 51
#define EXECUTE_CACHE_17_27 39
#define EXECUTE_CACHE_17_20 41
#define EXECUTE_CACHE_17_15 43
#define EXECUTE_CACHE_17_13 45
#define EXECUTE_CACHE_17_9 47
#define EXECUTE_CACHE_17_7 49
#define FREE_REFERENCES_LABEL_17_0 38
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd61;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto unix_make_pathname_21;

    case 1:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_17_12);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_17_18);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_17_17);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_17_11);
      goto lambda_9;

    case 12:
      current_block = (Rpc - LABEL_17_24);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_17_23);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_17_25);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_make_pathname_26)
DEFLABEL (unix_make_pathname_21)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd41.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_31;

DEFLABEL (label_30)
  (Wrd13.Obj) = (current_block [OBJECT_17_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_14);
  (Wrd29.Obj) = Rvl;

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd12.uLng) == 1))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_28;

DEFLABEL (label_32)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_6]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_33)
  Wrd29 = Wrd9;
  Rsp = (& (Rsp [1]));
  goto label_29;

DEFLABEL (label_35)
  (Wrd5.Obj) = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [1]));
  goto label_34;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd5.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_43)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd5.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_38)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_17_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd9.Obj) = (current_block [OBJECT_17_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_17_25);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_36)
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_27]));

DEFLABEL (label_37)
  (Wrd5.Obj) = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [1]));
  goto label_36;

DEFLABEL (label_40)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 30)
    goto label_42;

DEFLABEL (label_41)
  (Wrd19.Obj) = (current_block [OBJECT_17_10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_17_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_41;

DEFLABEL (label_45)
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 30)
    goto label_47;

DEFLABEL (label_46)
  (Wrd19.Obj) = (current_block [OBJECT_17_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_46;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_49;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_49)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_27)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_17_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_50;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_9]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (label_50)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_17_12]);

DEFLABEL (label_51)
DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_18_4);
      goto unix_directory_pathnameP_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_directory_pathnameP_5)
DEFLABEL (unix_directory_pathnameP_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_18_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_9 9
#define ENVIRONMENT_LABEL_19_3 21
#define DEBUGGING_LABEL_19_2 20
#define OBJECT_19_0 19
#define EXECUTE_CACHE_19_11 11
#define EXECUTE_CACHE_19_10 13
#define EXECUTE_CACHE_19_8 15
#define EXECUTE_CACHE_19_6 17
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto unix_directory_pathname_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_directory_pathname_6)
DEFLABEL (unix_directory_pathname_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_9 9
#define LABEL_20_11 11
#define ENVIRONMENT_LABEL_20_3 25
#define DEBUGGING_LABEL_20_2 24
#define OBJECT_20_0 23
#define EXECUTE_CACHE_20_13 13
#define EXECUTE_CACHE_20_12 15
#define EXECUTE_CACHE_20_10 17
#define EXECUTE_CACHE_20_8 19
#define EXECUTE_CACHE_20_6 21
#define FREE_REFERENCES_LABEL_20_0 12
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_20_4);
      goto unix_file_pathname_4;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_file_pathname_7)
DEFLABEL (unix_file_pathname_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_11);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_13 9
#define LABEL_21_15 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define LABEL_21_11 17
#define LABEL_21_17 19
#define ENVIRONMENT_LABEL_21_3 44
#define DEBUGGING_LABEL_21_2 43
#define OBJECT_21_3 42
#define OBJECT_21_2 41
#define OBJECT_21_1 40
#define OBJECT_21_0 39
#define EXECUTE_CACHE_21_21 21
#define EXECUTE_CACHE_21_20 23
#define EXECUTE_CACHE_21_19 25
#define EXECUTE_CACHE_21_18 27
#define EXECUTE_CACHE_21_16 29
#define EXECUTE_CACHE_21_14 31
#define EXECUTE_CACHE_21_12 33
#define EXECUTE_CACHE_21_8 35
#define EXECUTE_CACHE_21_6 37
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_21_4);
      goto unix_pathname_as_directory_13;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_21_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_pathname_as_directory_16)
DEFLABEL (unix_pathname_as_directory_13)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (label_17)
  (Wrd30.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_18)
  (Wrd5.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_17);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (current_block [OBJECT_21_3]);
  (Rsp [5]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (label_19)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_21_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [1]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_7 5
#define LABEL_22_5 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define LABEL_22_13 13
#define LABEL_22_14 15
#define LABEL_22_10 17
#define LABEL_22_15 19
#define TAG_22_16 8
#define LABEL_22_17 21
#define LABEL_22_18 23
#define LABEL_22_25 25
#define LABEL_22_21 27
#define LABEL_22_22 29
#define LABEL_22_27 31
#define ENVIRONMENT_LABEL_22_3 61
#define DEBUGGING_LABEL_22_2 60
#define OBJECT_22_4 59
#define OBJECT_22_3 58
#define OBJECT_22_2 57
#define OBJECT_22_1 56
#define OBJECT_22_0 55
#define EXECUTE_CACHE_22_30 33
#define EXECUTE_CACHE_22_29 35
#define EXECUTE_CACHE_22_28 37
#define EXECUTE_CACHE_22_26 39
#define EXECUTE_CACHE_22_24 41
#define EXECUTE_CACHE_22_23 43
#define EXECUTE_CACHE_22_20 45
#define EXECUTE_CACHE_22_19 47
#define EXECUTE_CACHE_22_12 49
#define EXECUTE_CACHE_22_11 51
#define EXECUTE_CACHE_22_6 53
#define FREE_REFERENCES_LABEL_22_0 32
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_22_4);
      goto unix_directory_pathname_as_file_19;

    case 1:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_22_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto lambda_27;

    case 9:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_22_25);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_22_21);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_22_27);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_directory_pathname_as_file_26)
DEFLABEL (unix_directory_pathname_as_file_19)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_36;

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_7);

DEFLABEL (label_34)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_22_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_33;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_32)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_28;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_15])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_31;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_24]));

DEFLABEL (label_31)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_23)
  (Wrd15.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_39)
  if ((Wrd12.Obj) == (current_block [OBJECT_22_1]))
    goto label_34;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_38;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_37)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_22_15);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_22_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_22_4]);
  (Rsp [5]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_1 14
#define OBJECT_23_0 13
#define EXECUTE_CACHE_23_8 9
#define EXECUTE_CACHE_23_6 11
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto unix_pathname_wildP_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_pathname_wildP_6)
DEFLABEL (unix_pathname_wildP_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (! (Rvl == (current_block [OBJECT_23_0])))
    goto label_7;
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_7);
  if (Rvl == (current_block [OBJECT_23_0]))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_23_1]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_8 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 24
#define DEBUGGING_LABEL_24_2 23
#define OBJECT_24_3 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_10 11
#define EXECUTE_CACHE_24_9 13
#define EXECUTE_CACHE_24_6 15
#define FREE_REFERENCE_24_0 18
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_24_4);
      goto unix_pathname__truename_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_pathname__truename_7)
DEFLABEL (unix_pathname__truename_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_10;
  Wrd17 = Wrd21;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 16
#define DEBUGGING_LABEL_25_2 15
#define EXECUTE_CACHE_25_8 9
#define EXECUTE_CACHE_25_7 11
#define FREE_REFERENCE_25_0 14
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_25_4);
      goto unix_user_homedir_pathname_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_user_homedir_pathname_6)
DEFLABEL (unix_user_homedir_pathname_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_8 9
#define ENVIRONMENT_LABEL_26_3 19
#define DEBUGGING_LABEL_26_2 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_10 11
#define EXECUTE_CACHE_26_9 13
#define EXECUTE_CACHE_26_7 15
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_26_4);
      goto unix_init_file_pathname_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_init_file_pathname_7)
DEFLABEL (unix_init_file_pathname_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Rsp [0]);
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define LABEL_27_11 13
#define LABEL_27_12 15
#define LABEL_27_13 17
#define LABEL_27_14 19
#define LABEL_27_15 21
#define LABEL_27_19 23
#define LABEL_27_23 25
#define LABEL_27_24 27
#define LABEL_27_20 29
#define LABEL_27_21 31
#define LABEL_27_16 33
#define LABEL_27_17 35
#define LABEL_27_26 37
#define LABEL_27_29 39
#define LABEL_27_30 41
#define LABEL_27_31 43
#define LABEL_27_27 45
#define LABEL_27_32 47
#define ENVIRONMENT_LABEL_27_3 70
#define DEBUGGING_LABEL_27_2 69
#define OBJECT_27_5 68
#define OBJECT_27_4 67
#define OBJECT_27_3 66
#define OBJECT_27_2 65
#define OBJECT_27_1 64
#define OBJECT_27_0 63
#define EXECUTE_CACHE_27_33 49
#define EXECUTE_CACHE_27_28 51
#define EXECUTE_CACHE_27_25 53
#define EXECUTE_CACHE_27_22 55
#define EXECUTE_CACHE_27_18 57
#define EXECUTE_CACHE_27_10 59
#define EXECUTE_CACHE_27_6 61
#define FREE_REFERENCES_LABEL_27_0 48
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_27_4);
      goto unix_pathname_simplify_35;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto loop_33;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto scan_30;

    case 6:
      current_block = (Rpc - LABEL_27_12);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_27_14);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_27_15);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_27_19);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_27_23);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_27_24);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_27_20);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_27_26);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_27_29);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_27_30);
      goto label_45;

    case 20:
      current_block = (Rpc - LABEL_27_31);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_27_27);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_27_32);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unix_pathname_simplify_48)
DEFLABEL (unix_pathname_simplify_35)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_51;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd10.Obj);
  goto loop_33;

DEFLABEL (loop_49)
DEFLABEL (loop_33)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  goto scan_30;

DEFLABEL (scan_50)
DEFLABEL (scan_30)
  INTERRUPT_CHECK (26, LABEL_27_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_52;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  if (! ((Wrd6.uLng) == 1))
    goto label_76;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_75)
  if ((Wrd9.Obj) == (current_block [OBJECT_27_2]))
    goto label_60;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_74;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_73)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_61;

DEFLABEL (label_60)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_59;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_58)
  if (! ((Wrd29.Obj) == (current_block [OBJECT_27_4])))
    goto label_53;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_22]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27_20);
  (* (--Rsp)) = Rvl;
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto loop_33;

DEFLABEL (label_53)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_57;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_55;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd57.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd55.Lng)))
    goto label_55;
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd52.Obj);
  goto scan_30;

DEFLABEL (label_55)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_41)
  (Wrd52.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_40)
  (Wrd39.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_39)
  (Wrd29.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_72;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_71)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_70;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd75.Obj) = ((Wrd76.pObj) [0]);

DEFLABEL (label_69)
  if (! ((Wrd75.Obj) == (current_block [OBJECT_27_2])))
    goto label_60;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_27_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_28]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_27_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_28]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_33]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_27_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  goto loop_33;

DEFLABEL (label_62)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_68;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_67)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_66;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_64;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_64;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));

DEFLABEL (label_63)
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto scan_30;

DEFLABEL (label_64)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_27_5]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_31]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_46)
  (Wrd31.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_45)
  (Wrd19.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_44)
  (Wrd10.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_43)
  (Wrd75.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_42)
  (Wrd66.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_38)
  (Wrd19.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_8 9
#define LABEL_28_7 11
#define LABEL_28_9 13
#define ENVIRONMENT_LABEL_28_3 17
#define DEBUGGING_LABEL_28_2 16
#define OBJECT_28_1 15
#define OBJECT_28_0 14
#define FREE_REFERENCES_LABEL_28_0 14
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_28_4);
      goto delete_up_8;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_28_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_up_14)
DEFLABEL (delete_up_8)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_6;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_28_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_20;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_19;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_18)
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_16)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 1);

DEFLABEL (label_12)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_10)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_23;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_22)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_21;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  Rvl = ((Wrd47.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_23)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_11)
  (Wrd37.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd37.Obj));
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_6 9
#define LABEL_29_8 11
#define ENVIRONMENT_LABEL_29_3 15
#define DEBUGGING_LABEL_29_2 14
#define OBJECT_29_1 13
#define OBJECT_29_0 12
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_29_4);
      goto delete_here_7;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_29_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_here_12)
DEFLABEL (delete_here_7)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  DLINK_INTERRUPT_CHECK (25, LABEL_29_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_18;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_17;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_16)
  Rdl = (& (Rsp [2]));
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_15;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_14)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_10)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_9)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_19;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  Rvl = ((Wrd37.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_10 13
#define EXECUTE_CACHE_30_7 15
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxpth_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto file_eqP_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_eqP_7)
DEFLABEL (file_eqP_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 2);

INVOKE_INTERFACE_TARGET_1
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
unxpth_so_f86e2916c373bff3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	1,
	1,
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
	1,
	2,
	0,
	2,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 30)
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

static const struct liarc_code_S arr_decl_unxpth_so_f86e2916c373bff3 [30] =
  {
    { "unxpth_so_code_1", 14, unxpth_so_code_1 },
    { "unxpth_so_code_2", 2, unxpth_so_code_2 },
    { "unxpth_so_code_3", 14, unxpth_so_code_3 },
    { "unxpth_so_code_4", 18, unxpth_so_code_4 },
    { "unxpth_so_code_5", 3, unxpth_so_code_5 },
    { "unxpth_so_code_6", 4, unxpth_so_code_6 },
    { "unxpth_so_code_7", 3, unxpth_so_code_7 },
    { "unxpth_so_code_8", 2, unxpth_so_code_8 },
    { "unxpth_so_code_9", 7, unxpth_so_code_9 },
    { "unxpth_so_code_10", 13, unxpth_so_code_10 },
    { "unxpth_so_code_11", 2, unxpth_so_code_11 },
    { "unxpth_so_code_12", 6, unxpth_so_code_12 },
    { "unxpth_so_code_13", 9, unxpth_so_code_13 },
    { "unxpth_so_code_14", 1, unxpth_so_code_14 },
    { "unxpth_so_code_15", 3, unxpth_so_code_15 },
    { "unxpth_so_code_16", 1, unxpth_so_code_16 },
    { "unxpth_so_code_17", 18, unxpth_so_code_17 },
    { "unxpth_so_code_18", 3, unxpth_so_code_18 },
    { "unxpth_so_code_19", 4, unxpth_so_code_19 },
    { "unxpth_so_code_20", 5, unxpth_so_code_20 },
    { "unxpth_so_code_21", 9, unxpth_so_code_21 },
    { "unxpth_so_code_22", 15, unxpth_so_code_22 },
    { "unxpth_so_code_23", 3, unxpth_so_code_23 },
    { "unxpth_so_code_24", 4, unxpth_so_code_24 },
    { "unxpth_so_code_25", 3, unxpth_so_code_25 },
    { "unxpth_so_code_26", 4, unxpth_so_code_26 },
    { "unxpth_so_code_27", 23, unxpth_so_code_27 },
    { "unxpth_so_code_28", 6, unxpth_so_code_28 },
    { "unxpth_so_code_29", 5, unxpth_so_code_29 },
    { "unxpth_so_code_30", 5, unxpth_so_code_30 }
  };

int
decl_unxpth_so_f86e2916c373bff3 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unxpth_so_f86e2916c373bff3);
  return (0);
}

DECLARE_COMPILED_CODE ("unxpth.so", 3, decl_unxpth_so_f86e2916c373bff3, unxpth_so_f86e2916c373bff3)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unxpth_so_data_f86e2916c373bff3 [4556] =
  "\x64\x42\xaf\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d\xba"
  "\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88"
  "\xb1\x0d\xb9\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x0d\x1c\x0d\x1c\xc1\x1c\x0d\x1c\x0c\xc1\x1c\x80\x0f"
  "\xc1\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\x1b\x0f\x0f\x81\x0f\xc2\x1c\x80\x1b\x1b\x0d\x24\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x08\x1b\x1b\x1b\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0d\x1c\x0c\x0c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x0c\x1b\x0d\x1c\x80\x0f\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0c\x80\x81\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x0c\x1b\x1b\x0c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x0c\x1b"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x07\x06\x1b\x1b\x0d\x08\x8b\x0c\x1b\x1b\x08\x89"
  "\x0c\x0c\x1b\x1b\x1b\x08\x89\x06\x1b\x08\x89\x1b\x0c\x1b\x06\x1b"
  "\x08\x89\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1b\x1b\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x0c\x08\xb4\x24\x28\x0d\x28\x0d\x28\xb4\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\xb3\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x1b\x1b\x1b"
  "\x81\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\xb2\xb3\xb4\x1b"
  "\xb5\xb6\xb7\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\xb1\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x6e"
  "\x78\x70\x74\x68\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x05\x75"
  "\x6e\x69\x78\x18\x75\x6e\x69\x78\x2f\x69\x6e\x69\x74\x2d\x66\x69"
  "\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1b\x75\x6e\x69\x78"
  "\x2f\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x18\x75\x6e\x69\x78\x2f\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x3e\x74\x72\x75\x65\x6e\x61\x6d\x65\x20\x75"
  "\x6e\x69\x78\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65\x1b\x75"
  "\x6e\x69\x78\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x13\x75\x6e\x69\x78\x2f\x66"
  "\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x18\x75\x6e\x69"
  "\x78\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x09\x19\x75\x6e\x69\x78\x2f\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x0a\x14"
  "\x75\x6e\x69\x78\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x77\x69"
  "\x6c\x64\x3f\x0b\x13\x75\x6e\x69\x78\x2f\x6d\x61\x6b\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x0c\x1a\x75\x6e\x69\x78\x2f\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69"
  "\x6e\x67\x0d\x16\x75\x6e\x69\x78\x2f\x70\x61\x72\x73\x65\x2d\x6e"
  "\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x0e\x17\x75\x6e\x69\x78\x2f"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x73\x69\x6d\x70\x6c\x69\x66"
  "\x79\x0f\x0e\x11\x0f\x6d\x61\x6b\x65\x2d\x68\x6f\x73\x74\x2d\x74"
  "\x79\x70\x65\x02\x11\x1e\x81\x9f\x02\x10\x1c\x81\x99\x02\x0f\x1a"
  "\x81\x97\x02\x0e\x18\x81\x95\x02\x0d\x16\x81\x93\x02\x0c\x14\x81"
  "\x91\x02\x0b\x12\x81\x8f\x02\x0a\x10\x81\x8d\x02\x09\x0e\x81\x8b"
  "\x02\x08\x0c\x81\x89\x02\x07\x0a\x81\x87\x02\x06\x08\x81\x85\x02"
  "\x05\x06\x81\x83\x02\x04\x04\x83\x04\x1d\x32\x10\x02\x14\x6d\x61"
  "\x6b\x65\x2d\x75\x6e\x69\x78\x2d\x68\x6f\x73\x74\x2d\x74\x79\x70"
  "\x65\x02\x04\x18\x61\x64\x64\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x21\x02\x13\x06\x81\x81"
  "\x02\x12\x04\x82\x02\x05\x0e\x11\x02\x09\x61\x62\x73\x6f\x6c\x75"
  "\x74\x65\x12\x09\x72\x65\x6c\x61\x74\x69\x76\x65\x13\x04\x63\x64"
  "\x72\x14\x0b\x75\x6e\x73\x70\x65\x63\x69\x66\x69\x63\x15\x01\x04"
  "\x63\x61\x72\x16\x01\x30\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x17\x06\x15\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x18\x03\x0a\x6c\x61"
  "\x73\x74\x2d\x70\x61\x69\x72\x19\x03\x1a\x65\x78\x70\x61\x6e\x64"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x72\x65\x66\x69"
  "\x78\x65\x73\x1a\x04\x0b\x70\x61\x72\x73\x65\x2d\x6e\x61\x6d\x65"
  "\x1b\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70"
  "\x61\x69\x72\x1c\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x1d\x08"
  "\x0f\x25\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1e"
  "\x03\x1b\x70\x61\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x1f\x03\x13\x73"
  "\x69\x6d\x70\x6c\x69\x66\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x20\x0a\x21\x1e\x81\x83\x02\x20\x1c\x81\x83\x02\x1f\x1a\x81"
  "\x85\x02\x1e\x18\x81\x83\x02\x1d\x16\x81\x87\x02\x1c\x14\x81\x85"
  "\x02\x1b\x12\x81\x89\x02\x1a\x10\x81\x87\x02\x19\x0e\x81\x87\x02"
  "\x18\x0c\x81\x87\x02\x17\x0a\x81\x89\x02\x16\x08\x81\x87\x02\x15"
  "\x06\x81\x85\x02\x14\x04\x84\x06\x1d\x3c\x21\x02\x14\x01\x30\x01"
  "\x7f\x01\x25\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x22\x17"
  "\x16\x1d\x2a\x65\x78\x70\x61\x6e\x64\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x72\x65\x66\x69\x78\x65\x73\x3f\x2a\x02\x05"
  "\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x23\x03\x0e\x69\x67\x6e"
  "\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x03\x0b\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x3f\x02\x17\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x24\x03"
  "\x19\x67\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x03\x0d\x2d\x3e\x6e\x61\x6d"
  "\x65\x73\x74\x72\x69\x6e\x67\x25\x03\x14\x75\x73\x65\x72\x2d\x68"
  "\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x04\x12\x73"
  "\x74\x72\x69\x6e\x67\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73"
  "\x26\x04\x07\x61\x70\x70\x65\x6e\x64\x27\x0a\x33\x26\x81\x85\x02"
  "\x32\x24\x81\x85\x02\x31\x22\x81\x85\x02\x30\x20\x81\x85\x02\x2f"
  "\x1e\x81\x83\x02\x2e\x1c\x81\x85\x02\x2d\x1a\x81\x8b\x02\x2c\x18"
  "\x81\x89\x02\x2b\x16\x81\x83\x02\x2a\x14\x81\x83\x02\x29\x12\x81"
  "\x89\x02\x28\x10\x81\x89\x02\x27\x0e\x81\x87\x02\x26\x0c\x81\x87"
  "\x02\x25\x0a\x81\x87\x02\x24\x08\x81\x85\x02\x23\x06\x81\x83\x02"
  "\x22\x04\x83\x04\x25\x46\x28\x02\x14\x13\x16\x36\x08\x81\x83\x02"
  "\x35\x06\x81\x83\x02\x34\x04\x83\x04\x07\x0e\x29\x02\x1a\x70\x61"
  "\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x2a\x0d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6e\x75\x6c\x6c\x3f\x2b\x03\x04\x16\x64\x65\x6c\x65\x74\x65\x2d"
  "\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04\x04"
  "\x6d\x61\x70\x03\x3a\x0a\x81\x85\x02\x39\x08\x81\x87\x02\x38\x06"
  "\x81\x83\x02\x37\x04\x83\x04\x09\x14\x2c\x02\x08\x05\x68\x65\x72"
  "\x65\x2d\x03\x75\x70\x2e\x02\x2e\x03\x2e\x2e\x04\x1d\x02\x3d\x08"
  "\x81\x83\x02\x3c\x06\x81\x83\x02\x3b\x04\x83\x04\x07\x11\x2f\x02"
  "\x09\x17\x06\x18\x02\x3f\x06\x81\x89\x02\x3e\x04\x84\x06\x05\x0d"
  "\x30\x02\x0a\x06\x19\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66"
  "\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x05\x23\x03"
  "\x46\x10\xfd\xff\x03\x45\x0e\xfd\xff\x03\x44\x0c\xfd\xff\x03\x43"
  "\x0a\xfd\xff\x03\x42\x08\xfd\xff\x03\x41\x06\xff\xff\x03\x40\x04"
  "\x86\x0a\x0f\x18\x31\x02\x0b\x02\x2a\x22\x05\x77\x69\x6c\x64\x22"
  "\x01\x2f\x17\x06\x1d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x66"
  "\x69\x6e\x64\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x63\x68\x61"
  "\x72\x05\x08\x65\x78\x74\x72\x61\x63\x74\x17\x04\x1d\x04\x53\x1c"
  "\x81\x8b\x02\x52\x1a\x81\x89\x02\x51\x18\x81\x89\x02\x50\x16\x81"
  "\x8d\x02\x4f\x14\x81\x89\x02\x4e\x12\x81\x89\x02\x4d\x10\x81\x89"
  "\x02\x4c\x0e\x81\x89\x02\x4b\x0c\x81\x89\x02\x4a\x0a\x81\x87\x02"
  "\x49\x08\x81\x89\x02\x48\x06\x81\x85\x02\x47\x04\x84\x06\x1b\x2c"
  "\x1d\x02\x0c\x22\x02\x2a\x08\x0c\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x3d\x3f\x05\x23\x03\x55\x06\x81\x87\x02\x54\x04\x85\x08\x05"
  "\x11\x23\x02\x0d\x03\x14\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x32\x03\x0f\x25\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x33\x03\x12\x75\x6e\x70"
  "\x61\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x34\x04"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x35\x03"
  "\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x36"
  "\x04\x0d\x75\x6e\x70\x61\x72\x73\x65\x2d\x6e\x61\x6d\x65\x37\x07"
  "\x5b\x0e\x81\x89\x02\x5a\x0c\x81\x87\x02\x59\x0a\x81\x85\x02\x58"
  "\x08\x81\x85\x02\x57\x06\x81\x83\x02\x56\x04\x83\x04\x0d\x1d\x38"
  "\x02\x0e\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x14\x02\x2f\x12"
  "\x16\x01\x04\x21\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x63\x6f\x6d\x70\x6f"
  "\x6e\x65\x6e\x74\x39\x04\x35\x05\x35\x03\x1c\x75\x6e\x70\x61\x72"
  "\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x6f\x6d"
  "\x70\x6f\x6e\x65\x6e\x74\x3a\x05\x64\x14\x81\x87\x02\x63\x12\x81"
  "\x89\x02\x62\x10\x81\x85\x02\x61\x0e\x81\x87\x02\x60\x0c\x81\x83"
  "\x02\x5f\x0a\x81\x85\x02\x5e\x08\x81\x87\x02\x5d\x06\x81\x83\x02"
  "\x5c\x04\x83\x04\x13\x25\x3b\x02\x0f\x14\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x20\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x02\x2e\x2d"
  "\x03\x2e\x2e\x2e\x04\x39\x02\x65\x04\x83\x04\x03\x0e\x3c\x02\x10"
  "\x02\x2e\x01\x03\x12\x75\x6e\x70\x61\x72\x73\x65\x2d\x63\x6f\x6d"
  "\x70\x6f\x6e\x65\x6e\x74\x3d\x05\x35\x03\x68\x08\x81\x85\x02\x67"
  "\x06\x81\x85\x02\x66\x04\x84\x06\x07\x11\x35\x02\x11\x0a\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x02\x2a\x22\x04\x39\x02\x69\x04\x83"
  "\x04\x03\x0c\x3e\x02\x12\x08\x76\x65\x72\x73\x69\x6f\x6e\x15\x22"
  "\x07\x6e\x65\x77\x65\x73\x74\x05\x74\x79\x70\x65\x2e\x2d\x05\x6e"
  "\x61\x6d\x65\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x16\x13\x12"
  "\x22\x15\x07\x64\x65\x76\x69\x63\x65\x14\x15\x04\x05\x6d\x65\x6d"
  "\x71\x03\x20\x04\x0e\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70"
  "\x65\x3f\x04\x39\x03\x2b\x08\x1e\x07\x7b\x26\x81\x8d\x02\x7a\x24"
  "\x81\x8f\x02\x79\x22\x81\x83\x02\x78\x20\x81\x8d\x02\x77\x1e\x81"
  "\x8f\x02\x76\x1c\x81\x8f\x02\x75\x1a\x83\x04\x74\x18\x81\x8d\x02"
  "\x73\x16\x81\x8f\x02\x72\x14\x81\x8f\x02\x71\x12\x81\x93\x02\x70"
  "\x10\x81\x8d\x02\x6f\x0e\x81\x8f\x02\x6e\x0c\x81\x8d\x02\x6d\x0a"
  "\x81\x93\x02\x6c\x08\x81\x8f\x02\x6b\x06\x81\x8f\x02\x6a\x04\x88"
  "\x0e\x25\x43\x39\x02\x13\x03\x36\x03\x33\x03\x7e\x08\x81\x83\x02"
  "\x7d\x06\x81\x83\x02\x7c\x04\x83\x04\x07\x10\x2b\x02\x14\x15\x03"
  "\x32\x03\x11\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x03\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x68"
  "\x6f\x73\x74\x3f\x08\x1e\x05\x82\x01\x0a\x81\x8b\x02\x81\x01\x08"
  "\x81\x89\x02\x80\x01\x06\x81\x87\x02\x7f\x04\x83\x04\x09\x16\x40"
  "\x02\x15\x15\x03\x33\x03\x36\x03\x3f\x03\x12\x25\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x08\x1e\x06\x87"
  "\x01\x0c\x81\x8d\x02\x86\x01\x0a\x81\x8b\x02\x85\x01\x08\x81\x85"
  "\x02\x84\x01\x06\x81\x83\x02\x83\x01\x04\x83\x04\x0b\x1a\x41\x02"
  "\x16\x15\x13\x02\x2e\x03\x33\x03\x36\x04\x37\x04\x27\x04\x07\x65"
  "\x71\x75\x61\x6c\x3f\x03\x3f\x03\x32\x03\x2a\x08\x1e\x0a\x90\x01"
  "\x14\x81\x8b\x02\x8f\x01\x12\x81\x8b\x02\x8e\x01\x10\x81\x89\x02"
  "\x8d\x01\x0e\x81\x87\x02\x8c\x01\x0c\x81\x8b\x02\x8b\x01\x0a\x81"
  "\x85\x02\x8a\x01\x08\x81\x85\x02\x89\x01\x06\x81\x83\x02\x88\x01"
  "\x04\x83\x04\x13\x2d\x27\x02\x17\x15\x1b\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d"
  "\x66\x69\x6c\x65\x14\x12\x16\x03\x32\x03\x36\x04\x19\x65\x72\x72"
  "\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x03\x19\x03\x33\x03\x1c\x04\x1b\x03\x3a\x03"
  "\x3f\x03\x20\x08\x1e\x0c\x9f\x01\x20\x81\x8b\x02\x9e\x01\x1e\x81"
  "\x89\x02\x9d\x01\x1c\x81\x87\x02\x9c\x01\x1a\x81\x87\x02\x9b\x01"
  "\x18\x81\x87\x02\x9a\x01\x16\x81\x85\x02\x99\x01\x14\x81\x87\x02"
  "\x98\x01\x12\x81\x85\x02\x97\x01\x10\x81\x85\x02\x96\x01\x0e\x81"
  "\x85\x02\x95\x01\x0c\x81\x85\x02\x94\x01\x0a\x81\x85\x02\x93\x01"
  "\x08\x81\x83\x02\x92\x01\x06\x81\x85\x02\x91\x01\x04\x83\x04\x1f"
  "\x3e\x3f\x02\x18\x22\x03\x36\x03\x33\x03\xa2\x01\x08\x81\x83\x02"
  "\xa1\x01\x06\x81\x83\x02\xa0\x01\x04\x83\x04\x07\x11\x36\x02\x19"
  "\x05\x66\x69\x6e\x64\x05\x66\x69\x6c\x65\x14\x66\x69\x6c\x65\x20"
  "\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x65\x78\x69\x73\x74\x02\x03"
  "\x14\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x2d\x64\x69\x72"
  "\x65\x63\x74\x3f\x08\x15\x65\x72\x72\x6f\x72\x3a\x66\x69\x6c\x65"
  "\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x03\x04\xa6\x01\x0a\x81"
  "\x83\x02\xa5\x01\x08\x81\x87\x02\xa4\x01\x06\x81\x83\x02\xa3\x01"
  "\x04\x83\x04\x09\x19\x33\x02\x1a\x0b\x6c\x6f\x63\x61\x6c\x2d\x68"
  "\x6f\x73\x74\x02\x02\x24\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x03\xa9\x01"
  "\x08\x81\x83\x02\xa8\x01\x06\x81\x83\x02\xa7\x01\x04\x83\x04\x07"
  "\x11\x32\x02\x1b\x0d\x2e\x73\x63\x68\x65\x6d\x65\x2e\x69\x6e\x69"
  "\x74\x03\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f"
  "\x04\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x73\x24\x04\xad\x01\x0a\x81\x83\x02\xac\x01\x08\x81\x85\x02\xab"
  "\x01\x06\x81\x83\x02\xaa\x01\x04\x83\x04\x09\x14\x22\x02\x1c\x2d"
  "\x14\x2e\x16\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x04\x0a\x6c\x69\x73\x74\x2d\x74\x61"
  "\x69\x6c\x04\x0a\x64\x65\x6c\x65\x74\x65\x2d\x75\x70\x2e\x04\x0c"
  "\x64\x65\x6c\x65\x74\x65\x2d\x68\x65\x72\x65\x2d\x04\x17\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x09\x66\x69\x6c\x65\x2d\x65"
  "\x71\x3f\x1e\x08\xc4\x01\x30\x81\x91\x02\xc3\x01\x2e\x81\x8f\x02"
  "\xc2\x01\x2c\x81\x8d\x02\xc1\x01\x2a\x81\x8d\x02\xc0\x01\x28\x81"
  "\x8d\x02\xbf\x01\x26\x81\x8d\x02\xbe\x01\x24\x81\x8d\x02\xbd\x01"
  "\x22\x81\x8b\x02\xbc\x01\x20\x81\x8d\x02\xbb\x01\x1e\x81\x8b\x02"
  "\xba\x01\x1c\x81\x8b\x02\xb9\x01\x1a\x81\x8b\x02\xb8\x01\x18\x81"
  "\x8b\x02\xb7\x01\x16\x81\x8b\x02\xb6\x01\x14\x81\x8b\x02\xb5\x01"
  "\x12\x81\x8b\x02\xb4\x01\x10\x81\x8b\x02\xb3\x01\x0e\x81\x8b\x02"
  "\xb2\x01\x0c\x81\x89\x02\xb1\x01\x0a\x81\x85\x02\xb0\x01\x08\x81"
  "\x85\x02\xaf\x01\x06\x81\x83\x02\xae\x01\x04\x83\x04\x2f\x47\x1c"
  "\x02\x1d\x16\x14\xca\x01\x0e\xfd\xff\x03\xc9\x01\x0c\xfd\xff\x03"
  "\xc8\x01\x0a\xfd\xff\x03\xc7\x01\x08\xfd\xff\x03\xc6\x01\x06\xff"
  "\xff\x03\xc5\x01\x04\x84\x06\x0d\x12\x19\x02\x1e\x16\x14\xcf\x01"
  "\x0c\xfd\xff\x03\xce\x01\x0a\xfd\xff\x03\xcd\x01\x08\xfd\xff\x03"
  "\xcc\x01\x06\xff\xff\x03\xcb\x01\x04\x84\x06\x0b\x10\x16\x02\x1f"
  "\x09\x66\x69\x6c\x65\x2d\x65\x71\x3f\x03\x24\x03\x25\x03\xd4\x01"
  "\x0c\x81\x87\x02\xd3\x01\x0a\x81\x85\x02\xd2\x01\x08\x81\x87\x02"
  "\xd1\x01\x06\x81\x85\x02\xd0\x01\x04\x84\x06\x0b\x14\x25\x1f\x24"
  "\x24\x25\x04\x16\x04\x19\x04\x1c\x04\x22\x04\x32\x04\x33\x04\x36"
  "\x04\x3f\x04\x27\x04\x41\x04\x40\x04\x2b\x04\x39\x04\x3e\x04\x35"
  "\x04\x3c\x04\x3b\x04\x38\x04\x23\x04\x1d\x04\x31\x04\x30\x04\x2f"
  "\x04\x2c\x04\x29\x04\x28\x04\x21\x04\x11\x04\x10\x04\x1f\x1e\x2d"
  "\x2e\x0f\x0b\x09\x0a\x0c\x3d\x37\x3a\x34\x0d\x17\x1b\x18\x26\x2a"
  "\x1f\x20\x1a\x0e\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x21\x1f\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
unxpth_so_data_f86e2916c373bff3 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unxpth_so_data_f86e2916c373bff3 [0]))), (sizeof (prog_unxpth_so_data_f86e2916c373bff3)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("unxpth.so", unxpth_so_data_f86e2916c373bff3)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unxpth.so", "78a963c0a1de0971")
