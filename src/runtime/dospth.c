/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

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
dospth_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto make_dos_host_type_0;

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

DEFLABEL (make_dos_host_type_16)
DEFLABEL (make_dos_host_type_0)
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
dospth_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_3_8 5
#define LABEL_3_5 7
#define LABEL_3_6 9
#define LABEL_3_13 11
#define LABEL_3_7 13
#define LABEL_3_10 15
#define TAG_3_11 6
#define LABEL_3_12 17
#define LABEL_3_16 19
#define TAG_3_17 8
#define LABEL_3_18 21
#define LABEL_3_19 23
#define LABEL_3_25 25
#define LABEL_3_23 27
#define LABEL_3_28 29
#define LABEL_3_22 31
#define LABEL_3_31 33
#define LABEL_3_33 35
#define LABEL_3_34 37
#define LABEL_3_27 39
#define LABEL_3_37 41
#define LABEL_3_38 43
#define LABEL_3_39 45
#define LABEL_3_40 47
#define LABEL_3_32 49
#define LABEL_3_42 51
#define LABEL_3_43 53
#define LABEL_3_35 55
#define LABEL_3_36 57
#define ENVIRONMENT_LABEL_3_3 91
#define DEBUGGING_LABEL_3_2 90
#define OBJECT_3_5 89
#define OBJECT_3_4 88
#define OBJECT_3_3 87
#define OBJECT_3_2 86
#define OBJECT_3_1 85
#define OBJECT_3_0 84
#define EXECUTE_CACHE_3_44 59
#define EXECUTE_CACHE_3_41 61
#define EXECUTE_CACHE_3_30 63
#define EXECUTE_CACHE_3_29 65
#define EXECUTE_CACHE_3_26 67
#define EXECUTE_CACHE_3_24 69
#define EXECUTE_CACHE_3_21 71
#define EXECUTE_CACHE_3_20 73
#define EXECUTE_CACHE_3_15 75
#define EXECUTE_CACHE_3_14 77
#define EXECUTE_CACHE_3_9 79
#define FREE_REFERENCE_3_1 82
#define FREE_REFERENCE_3_0 83
#define FREE_REFERENCES_LABEL_3_0 58
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_3_4);
      goto dos_parse_namestring_30;

    case 1:
      current_block = (Rpc - LABEL_3_8);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_26;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_25;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_46;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_28;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_47;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_3_25);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_3_28);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_3_33);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_3_34);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_3_37);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_3_38);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_3_39);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_3_40);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_3_42);
      goto label_42;

    case 25:
      current_block = (Rpc - LABEL_3_43);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_3_35);
      goto continuation_6;

    case 27:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_parse_namestring_45)
DEFLABEL (dos_parse_namestring_30)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_51;
  Wrd14 = Wrd18;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_49;
  Wrd9 = Wrd13;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_3_12);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd10.pObj));

DEFLABEL (label_33)
  (Wrd9.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_8])), (Wrd15.pObj));

DEFLABEL (label_32)
  (Wrd14.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_10])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_3_10);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_16])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_53;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_53)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_3_16);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_3_1]))
    goto label_71;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd23.uLng) == 1))
    goto label_70;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_67;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_66)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_58;

DEFLABEL (label_57)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_55;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (label_55)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_37)
DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_65;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_64)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_63;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_61;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_60)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_59;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_54;

DEFLABEL (label_59)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_41)
  goto label_56;

DEFLABEL (label_61)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_40)
  (Wrd57.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_38)
  (Wrd32.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  goto label_54;

DEFLABEL (label_70)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_72)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_2]);
  (Rsp [5]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_78;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_77)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_76;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_75)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [1]));

DEFLABEL (label_74)
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd5.Obj);

DEFLABEL (label_73)
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_44]));

DEFLABEL (label_76)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_43)
  (Wrd23.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_42)
  (Wrd14.Obj) = Rvl;
  goto label_77;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_36);
  (Wrd5.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_35);
  (Wrd13.Obj) = (current_block [OBJECT_3_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = Rvl;
  goto label_73;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (* (--Rsp)) = Rvl;
  goto label_72;

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
#define LABEL_4_29 33
#define LABEL_4_24 35
#define LABEL_4_31 37
#define LABEL_4_33 39
#define LABEL_4_28 41
#define LABEL_4_34 43
#define LABEL_4_35 45
#define LABEL_4_38 47
#define LABEL_4_36 49
#define LABEL_4_40 51
#define ENVIRONMENT_LABEL_4_3 89
#define DEBUGGING_LABEL_4_2 88
#define OBJECT_4_7 87
#define OBJECT_4_6 86
#define OBJECT_4_5 85
#define OBJECT_4_4 84
#define OBJECT_4_3 83
#define OBJECT_4_2 82
#define OBJECT_4_1 81
#define OBJECT_4_0 80
#define EXECUTE_CACHE_4_41 53
#define EXECUTE_CACHE_4_39 55
#define EXECUTE_CACHE_4_37 57
#define EXECUTE_CACHE_4_32 59
#define EXECUTE_CACHE_4_30 61
#define EXECUTE_CACHE_4_26 63
#define EXECUTE_CACHE_4_25 65
#define EXECUTE_CACHE_4_23 67
#define EXECUTE_CACHE_4_22 69
#define EXECUTE_CACHE_4_19 71
#define EXECUTE_CACHE_4_17 73
#define EXECUTE_CACHE_4_13 75
#define FREE_REFERENCE_4_1 78
#define FREE_REFERENCE_4_0 79
#define FREE_REFERENCES_LABEL_4_0 52
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd14;
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
      goto expand_directory_prefixes_32;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto label_38;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto continuation_21;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_48;

    case 9:
      current_block = (Rpc - LABEL_4_20);
      goto label_40;

    case 10:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_27;

    case 11:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_26;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_22;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_19;

    case 14:
      current_block = (Rpc - LABEL_4_27);
      goto lambda_12;

    case 15:
      current_block = (Rpc - LABEL_4_29);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_4_31);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_1;

    case 20:
      current_block = (Rpc - LABEL_4_34);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_4_35);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_4_38);
      goto label_43;

    case 23:
      current_block = (Rpc - LABEL_4_36);
      goto continuation_6;

    case 24:
      current_block = (Rpc - LABEL_4_40);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expand_directory_prefixes_47)
DEFLABEL (expand_directory_prefixes_32)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_67;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_66)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_65;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_64)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_63;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! ((Wrd96.Lng) == 0))
    goto label_51;

DEFLABEL (label_50)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_62;
  Wrd32 = Wrd36;

DEFLABEL (label_61)
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 30))
    goto label_60;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd49.Lng))))
    goto label_60;
  (Wrd42.uLng) = ((unsigned long) (((unsigned char *) (Wrd47.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd43.Obj) = (MAKE_OBJECT (2, (Wrd42.uLng)));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_59)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == (current_block [OBJECT_4_4]))
    goto label_55;
  if ((Wrd57.Obj) == (current_block [OBJECT_4_6]))
    goto label_53;

DEFLABEL (label_52)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_53)
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

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_14);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_4_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Rsp [0]) = Rvl;
  goto lambda_12;

DEFLABEL (label_55)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_58;
  if ((Wrd72.Obj) == (current_block [OBJECT_4_5]))
    goto label_52;

DEFLABEL (label_57)
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

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto lambda_12;

DEFLABEL (label_56)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd74.Obj) = (current_block [OBJECT_4_5]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_52;

DEFLABEL (label_60)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_4_2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd33.pObj));

DEFLABEL (label_37)
  (Wrd32.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_50;

DEFLABEL (label_65)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_70;
  if (! ((Wrd7.Obj) == (current_block [OBJECT_4_5])))
    goto label_69;

DEFLABEL (label_68)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (label_69)
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

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (label_70)
  (Wrd9.Obj) = (current_block [OBJECT_4_5]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_68;

DEFLABEL (lambda_49)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_4_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_83;
  Wrd8 = Wrd12;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_30]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_81;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_80)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_75;

DEFLABEL (label_74)
  (Wrd20.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_73)
  (Rsp [0]) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_72;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_71)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_39]));

DEFLABEL (label_72)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 1);

DEFLABEL (label_43)
  (Wrd21.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_75)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_79;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_78)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_74;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_36);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_77;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_41]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd49.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (Wrd20.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 1);

DEFLABEL (label_44)
  (Wrd30.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_7]), 1);

DEFLABEL (label_42)
  (Wrd9.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_29])), (Wrd9.pObj));

DEFLABEL (label_41)
  (Wrd8.Obj) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_4 5
#define LABEL_5_8 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define LABEL_5_13 15
#define TAG_5_14 6
#define LABEL_5_6 17
#define LABEL_5_15 19
#define LABEL_5_16 21
#define TAG_5_17 9
#define ENVIRONMENT_LABEL_5_3 37
#define DEBUGGING_LABEL_5_2 36
#define OBJECT_5_8 35
#define OBJECT_5_7 34
#define OBJECT_5_6 33
#define OBJECT_5_5 32
#define OBJECT_5_4 31
#define OBJECT_5_3 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_12 23
#define EXECUTE_CACHE_5_7 25
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_5_4);
      goto parse_device_and_path_15;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto lambda_24;

    case 7:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_device_and_path_23)
DEFLABEL (parse_device_and_path_15)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));

DEFLABEL (label_34)
  if ((Wrd14.Obj) == (current_block [OBJECT_5_3]))
    goto label_27;

DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_13])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  Rvl = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_33;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_33;
  (Wrd36.uLng) = ((unsigned long) (((unsigned char *) (Wrd40.pChr)) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd32.Obj) = (MAKE_OBJECT (2, (Wrd36.uLng)));

DEFLABEL (label_32)
  if (! ((Wrd32.Obj) == (current_block [OBJECT_5_5])))
    goto label_26;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 30))
    goto label_31;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd64.Lng))))
    goto label_31;
  (Wrd57.uLng) = ((unsigned long) (((unsigned char *) (Wrd62.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd58.Obj) = (MAKE_OBJECT (2, (Wrd57.uLng)));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_28)
  (Wrd18.Obj) = (current_block [OBJECT_5_8]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Rsp [1]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_16])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd24 = Wrd21;
  ((Wrd24.pObj) [2]) = (Wrd15.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_21)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_5_6]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_5_0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 2);

DEFLABEL (label_19)
  (Wrd32.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_5_13);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_5_16);

DEFLABEL (lambda_12)
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

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define OBJECT_6_5 18
#define OBJECT_6_4 17
#define OBJECT_6_3 16
#define OBJECT_6_2 15
#define OBJECT_6_1 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_8 11
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_6_4);
      goto simplify_directory_5;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simplify_directory_10)
DEFLABEL (simplify_directory_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_18)
  if ((Wrd5.Obj) == (current_block [OBJECT_6_1]))
    goto label_15;

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_6_5]);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_17;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_16)
  if (! ((Wrd20.Obj) == (current_block [OBJECT_6_3])))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_8 7
#define LABEL_7_5 9
#define LABEL_7_9 11
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define OBJECT_7_0 22
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_10 15
#define EXECUTE_CACHE_7_7 17
#define FREE_REFERENCE_7_1 20
#define FREE_REFERENCE_7_0 21
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_7_4);
      goto parse_directory_components_2;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_directory_components_7)
DEFLABEL (parse_directory_components_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_8);

DEFLABEL (label_10)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_9;
  Wrd12 = Wrd16;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_11;

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
dospth_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto parse_directory_component_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_directory_component_4)
DEFLABEL (parse_directory_component_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_8_1]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define OBJECT_9_1 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto string_components_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_components_5)
DEFLABEL (string_components_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_10 9
#define LABEL_10_8 11
#define LABEL_10_11 13
#define ENVIRONMENT_LABEL_10_3 21
#define DEBUGGING_LABEL_10_2 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_9 15
#define EXECUTE_CACHE_10_7 17
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_10_4);
      goto substring_components_9;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substring_components_12)
DEFLABEL (substring_components_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_7;

DEFLABEL (loop_13)
DEFLABEL (loop_7)
  DLINK_INTERRUPT_CHECK (25, LABEL_10_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.Lng) = ((Wrd19.Lng) + 1L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd21.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_7;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_14)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_6 9
#define LABEL_11_9 11
#define LABEL_11_13 13
#define LABEL_11_10 15
#define TAG_11_11 6
#define LABEL_11_15 17
#define LABEL_11_16 19
#define TAG_11_17 8
#define ENVIRONMENT_LABEL_11_3 35
#define DEBUGGING_LABEL_11_2 34
#define OBJECT_11_6 33
#define OBJECT_11_5 32
#define OBJECT_11_4 31
#define OBJECT_11_3 30
#define OBJECT_11_2 29
#define OBJECT_11_1 28
#define OBJECT_11_0 27
#define EXECUTE_CACHE_11_14 21
#define EXECUTE_CACHE_11_12 23
#define EXECUTE_CACHE_11_7 25
#define FREE_REFERENCES_LABEL_11_0 20
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_11_4);
      goto parse_name_19;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_name_24)
DEFLABEL (parse_name_19)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  if (Rvl == (current_block [OBJECT_11_3]))
    goto label_27;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  if (Rvl == (Wrd9.Obj))
    goto label_27;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = ((Wrd16.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_33;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_33;
  Wrd26 = Wrd17;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_33;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd23.pChr) = (& ((Wrd28.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (2, (Wrd24.uLng)));

DEFLABEL (label_32)
  if ((Wrd18.Obj) == (current_block [OBJECT_11_1]))
    goto label_27;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) + 1L);
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_16])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [1]);
  if ((Wrd48.Obj) == (current_block [OBJECT_11_3]))
    goto label_31;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_11_6]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd55.Obj) = (current_block [OBJECT_11_2]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd55.Obj) = (Rsp [2]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  (Rsp [2]) = (Wrd55.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_10])));
  Rhp += 1;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  Wrd59 = Wrd58;
  (Wrd60.Obj) = (Rsp [0]);
  ((Wrd59.pObj) [2]) = (Wrd60.Obj);
  Rvl = (Wrd57.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd55.Obj) = (current_block [OBJECT_11_5]);
  goto label_30;

DEFLABEL (label_33)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 2);

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_11_10);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_11_16);

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

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define OBJECT_12_3 14
#define OBJECT_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto extract_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extract_4)
DEFLABEL (extract_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_12_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_12 13
#define LABEL_13_13 15
#define LABEL_13_17 17
#define ENVIRONMENT_LABEL_13_3 36
#define DEBUGGING_LABEL_13_2 35
#define EXECUTE_CACHE_13_19 19
#define EXECUTE_CACHE_13_18 21
#define EXECUTE_CACHE_13_16 23
#define EXECUTE_CACHE_13_15 25
#define EXECUTE_CACHE_13_14 27
#define EXECUTE_CACHE_13_11 29
#define EXECUTE_CACHE_13_10 31
#define EXECUTE_CACHE_13_7 33
#define FREE_REFERENCES_LABEL_13_0 18
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto dos_pathname__namestring_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_pathname__namestring_10)
DEFLABEL (dos_pathname__namestring_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto unparse_device_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_device_4)
DEFLABEL (unparse_device_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_6;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == (current_block [OBJECT_14_0]))
    goto label_5;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define LABEL_15_7 11
#define LABEL_15_11 13
#define LABEL_15_12 15
#define LABEL_15_14 17
#define LABEL_15_13 19
#define LABEL_15_17 21
#define LABEL_15_16 23
#define ENVIRONMENT_LABEL_15_3 43
#define DEBUGGING_LABEL_15_2 42
#define OBJECT_15_6 41
#define OBJECT_15_5 40
#define OBJECT_15_4 39
#define OBJECT_15_3 38
#define OBJECT_15_2 37
#define OBJECT_15_1 36
#define OBJECT_15_0 35
#define EXECUTE_CACHE_15_15 25
#define EXECUTE_CACHE_15_18 27
#define EXECUTE_CACHE_15_10 29
#define EXECUTE_CACHE_15_9 31
#define FREE_REFERENCE_15_0 34
#define FREE_REFERENCES_LABEL_15_0 24
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
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
      goto unparse_directory_15;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto loop_13;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_15_14);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_15_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_directory_24)
DEFLABEL (unparse_directory_15)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_0]))
    goto label_26;
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_28;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_5]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_28)
  if (! ((Wrd10.uLng) == 1))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_35)
  if ((Wrd13.Obj) == (current_block [OBJECT_15_3]))
    goto label_32;
  (Wrd23.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_30;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_29)
  goto loop_13;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (label_30)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_34;
  Wrd36 = Wrd40;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd37.pObj));

DEFLABEL (label_19)
  (Wrd36.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_35;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_15_11);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_6])))
    goto label_37;
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_43;
  Wrd7 = Wrd11;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_41;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_38)
  goto loop_13;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_12])), (Wrd8.pObj));

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
dospth_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      goto unparse_directory_component_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_directory_component_5)
DEFLABEL (unparse_directory_component_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_8;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_6;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_2]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

DEFLABEL (label_6)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_16_1]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_1 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_6 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto unparse_name_5;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_name_8)
DEFLABEL (unparse_name_5)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd8.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_10)
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Rsp [1]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 11
#define DEBUGGING_LABEL_18_2 10
#define OBJECT_18_2 9
#define OBJECT_18_1 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto unparse_component_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_component_5)
DEFLABEL (unparse_component_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_8;
  if ((Wrd5.Obj) == (current_block [OBJECT_18_0]))
    goto label_6;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_18_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_18_1]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_8 7
#define LABEL_19_4 9
#define LABEL_19_14 11
#define LABEL_19_16 13
#define LABEL_19_12 15
#define LABEL_19_21 17
#define LABEL_19_22 19
#define LABEL_19_10 21
#define LABEL_19_9 23
#define LABEL_19_26 25
#define LABEL_19_25 27
#define LABEL_19_24 29
#define LABEL_19_17 31
#define LABEL_19_19 33
#define LABEL_19_30 35
#define LABEL_19_31 37
#define LABEL_19_32 39
#define LABEL_19_18 41
#define LABEL_19_28 43
#define LABEL_19_27 45
#define LABEL_19_29 47
#define ENVIRONMENT_LABEL_19_3 81
#define DEBUGGING_LABEL_19_2 80
#define OBJECT_19_14 79
#define OBJECT_19_13 78
#define OBJECT_19_12 77
#define OBJECT_19_11 76
#define OBJECT_19_10 75
#define OBJECT_19_9 74
#define OBJECT_19_8 73
#define OBJECT_19_7 72
#define OBJECT_19_6 71
#define OBJECT_19_5 70
#define OBJECT_19_4 69
#define OBJECT_19_3 68
#define OBJECT_19_2 67
#define OBJECT_19_1 66
#define OBJECT_19_0 65
#define EXECUTE_CACHE_19_34 49
#define EXECUTE_CACHE_19_33 51
#define EXECUTE_CACHE_19_23 53
#define EXECUTE_CACHE_19_20 55
#define EXECUTE_CACHE_19_15 57
#define EXECUTE_CACHE_19_13 59
#define EXECUTE_CACHE_19_11 61
#define EXECUTE_CACHE_19_7 63
#define FREE_REFERENCES_LABEL_19_0 48
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_4);
      goto dos_make_pathname_26;

    case 4:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_19_21);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_19_22);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_19_10);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_19;

    case 11:
      current_block = (Rpc - LABEL_19_26);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_19_25);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_19_17);
      goto lambda_14;

    case 15:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_19_30);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_19_31);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_19_32);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_19_28);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_19_27);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_19_29);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_make_pathname_33)
DEFLABEL (dos_make_pathname_26)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 30)
    goto label_64;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd41.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  if ((Wrd20.Obj) == (current_block [OBJECT_19_1]))
    goto label_60;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;

DEFLABEL (label_48)
  (Wrd22.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd29.Obj) = Rvl;

DEFLABEL (label_47)
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_43)
  (Wrd5.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_42)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd5.Obj) = (Rsp [5]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_37)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_19_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd9.Obj) = (current_block [OBJECT_19_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_19_27);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_35)
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_34]));

DEFLABEL (label_36)
  (Wrd5.Obj) = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [1]));
  goto label_35;

DEFLABEL (label_39)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 30)
    goto label_41;

DEFLABEL (label_40)
  (Wrd19.Obj) = (current_block [OBJECT_19_9]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_19_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_40;

DEFLABEL (label_44)
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 30)
    goto label_46;

DEFLABEL (label_45)
  (Wrd19.Obj) = (current_block [OBJECT_19_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_45;

DEFLABEL (label_49)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_19_4]))
    goto label_48;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_59;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_54;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_53)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_52;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_52)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_32]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_13]), 1);

DEFLABEL (label_30)
  (Wrd17.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_13]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_57;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_50;

DEFLABEL (label_57)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_30]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_13]), 1);

DEFLABEL (label_31)
  (Wrd25.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd29.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_47;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [2]);

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  goto label_61;

DEFLABEL (label_64)
  Wrd16 = Wrd8;
  goto label_63;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_34)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_19_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_68;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_65;

DEFLABEL (label_66)
  Rvl = (current_block [OBJECT_19_12]);

DEFLABEL (label_65)
DEFLABEL (label_67)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  if ((Wrd5.Obj) == (current_block [OBJECT_19_11]))
    goto label_70;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_69;

DEFLABEL (label_70)
  Rvl = (current_block [OBJECT_19_12]);

DEFLABEL (label_69)
DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 13
#define DEBUGGING_LABEL_20_2 12
#define OBJECT_20_0 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto Z___make_pathname_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___make_pathname_5)
DEFLABEL (Z___make_pathname_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd7.Obj) = (current_block [OBJECT_20_0]);
  goto label_6;

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define LABEL_21_10 15
#define ENVIRONMENT_LABEL_21_3 23
#define DEBUGGING_LABEL_21_2 22
#define OBJECT_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_11 17
#define FREE_REFERENCES_LABEL_21_0 16
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto server_directoryP_10;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (server_directoryP_19)
DEFLABEL (server_directoryP_10)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_21;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if (! ((Wrd6.uLng) == 1))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_32)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_21_1])))
    goto label_20;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_31;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_30)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_20;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_29;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_28)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_27;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_26)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd45.uLng) == 30))
    goto label_20;
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_25;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_24)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_23;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_23)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_17)
  (Wrd55.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_16)
  (Wrd46.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_15)
  (Wrd38.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_14)
  (Wrd29.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_13)
  (Wrd19.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
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
dospth_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto dos_directory_pathnameP_2;

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

DEFLABEL (dos_directory_pathnameP_5)
DEFLABEL (dos_directory_pathnameP_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_22_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define ENVIRONMENT_LABEL_23_3 21
#define DEBUGGING_LABEL_23_2 20
#define OBJECT_23_0 19
#define EXECUTE_CACHE_23_11 11
#define EXECUTE_CACHE_23_10 13
#define EXECUTE_CACHE_23_8 15
#define EXECUTE_CACHE_23_6 17
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto dos_directory_pathname_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_directory_pathname_6)
DEFLABEL (dos_directory_pathname_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [5]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_9 9
#define LABEL_24_11 11
#define ENVIRONMENT_LABEL_24_3 24
#define DEBUGGING_LABEL_24_2 23
#define EXECUTE_CACHE_24_13 13
#define EXECUTE_CACHE_24_12 15
#define EXECUTE_CACHE_24_10 17
#define EXECUTE_CACHE_24_8 19
#define EXECUTE_CACHE_24_6 21
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto dos_file_pathname_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_file_pathname_7)
DEFLABEL (dos_file_pathname_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_16 11
#define LABEL_25_18 13
#define LABEL_25_10 15
#define LABEL_25_11 17
#define LABEL_25_12 19
#define LABEL_25_14 21
#define LABEL_25_23 23
#define ENVIRONMENT_LABEL_25_3 52
#define DEBUGGING_LABEL_25_2 51
#define OBJECT_25_3 50
#define OBJECT_25_2 49
#define OBJECT_25_1 48
#define OBJECT_25_0 47
#define EXECUTE_CACHE_25_25 25
#define EXECUTE_CACHE_25_24 27
#define EXECUTE_CACHE_25_22 29
#define EXECUTE_CACHE_25_21 31
#define EXECUTE_CACHE_25_20 33
#define EXECUTE_CACHE_25_19 35
#define EXECUTE_CACHE_25_17 37
#define EXECUTE_CACHE_25_15 39
#define EXECUTE_CACHE_25_13 41
#define EXECUTE_CACHE_25_8 43
#define EXECUTE_CACHE_25_6 45
#define FREE_REFERENCES_LABEL_25_0 24
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
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
      goto dos_pathname_as_directory_15;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_25_16);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_25_18);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_25_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_pathname_as_directory_18)
DEFLABEL (dos_pathname_as_directory_15)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_18);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 1))
    goto label_21;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_17]));

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_23);
  (* (--Rsp)) = Rvl;
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (current_block [OBJECT_25_3]);
  (Rsp [5]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_25]));

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_20;

DEFLABEL (label_23)
  (Wrd21.Obj) = (Rsp [1]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_7 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define LABEL_26_9 11
#define LABEL_26_13 13
#define LABEL_26_14 15
#define LABEL_26_10 17
#define LABEL_26_15 19
#define TAG_26_16 8
#define LABEL_26_17 21
#define LABEL_26_18 23
#define LABEL_26_19 25
#define LABEL_26_26 27
#define LABEL_26_22 29
#define LABEL_26_23 31
#define LABEL_26_28 33
#define LABEL_26_31 35
#define ENVIRONMENT_LABEL_26_3 68
#define DEBUGGING_LABEL_26_2 67
#define OBJECT_26_5 66
#define OBJECT_26_4 65
#define OBJECT_26_3 64
#define OBJECT_26_2 63
#define OBJECT_26_1 62
#define OBJECT_26_0 61
#define EXECUTE_CACHE_26_33 37
#define EXECUTE_CACHE_26_32 39
#define EXECUTE_CACHE_26_30 41
#define EXECUTE_CACHE_26_29 43
#define EXECUTE_CACHE_26_27 45
#define EXECUTE_CACHE_26_25 47
#define EXECUTE_CACHE_26_24 49
#define EXECUTE_CACHE_26_21 51
#define EXECUTE_CACHE_26_20 53
#define EXECUTE_CACHE_26_12 55
#define EXECUTE_CACHE_26_11 57
#define EXECUTE_CACHE_26_6 59
#define FREE_REFERENCES_LABEL_26_0 36
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_26_4);
      goto dos_directory_pathname_as_file_21;

    case 1:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_26_14);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_26_15);
      goto lambda_29;

    case 9:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_26_26);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_26_22);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_26_23);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_26_28);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_26_31);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_directory_pathname_as_file_28)
DEFLABEL (dos_directory_pathname_as_file_21)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_7);

DEFLABEL (label_36)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_26_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_34)
  if ((Wrd15.Obj) == (current_block [OBJECT_26_4]))
    goto label_30;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_15])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26_19);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_33;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_26_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_41)
  if ((Wrd12.Obj) == (current_block [OBJECT_26_1]))
    goto label_36;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_40;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_39)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_36;
  goto label_37;

DEFLABEL (label_40)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 1);

DEFLABEL (label_24)
  (Wrd22.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_26_15);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_30]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_26_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [5]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_33]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define OBJECT_27_1 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_8 9
#define EXECUTE_CACHE_27_6 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto dos_pathname_wildP_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_pathname_wildP_7)
DEFLABEL (dos_pathname_wildP_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_7 9
#define ENVIRONMENT_LABEL_28_3 24
#define DEBUGGING_LABEL_28_2 23
#define OBJECT_28_3 22
#define OBJECT_28_2 21
#define OBJECT_28_1 20
#define OBJECT_28_0 19
#define EXECUTE_CACHE_28_10 11
#define EXECUTE_CACHE_28_9 13
#define EXECUTE_CACHE_28_6 15
#define FREE_REFERENCE_28_0 18
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto dos_pathname__truename_3;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_pathname__truename_7)
DEFLABEL (dos_pathname__truename_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_10;
  Wrd17 = Wrd21;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_8])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define EXECUTE_CACHE_29_8 9
#define EXECUTE_CACHE_29_7 11
#define FREE_REFERENCE_29_0 14
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto dos_user_homedir_pathname_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_user_homedir_pathname_6)
DEFLABEL (dos_user_homedir_pathname_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
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
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_10 9
#define LABEL_30_8 11
#define ENVIRONMENT_LABEL_30_3 22
#define DEBUGGING_LABEL_30_2 21
#define EXECUTE_CACHE_30_11 13
#define EXECUTE_CACHE_30_9 15
#define EXECUTE_CACHE_30_7 17
#define FREE_REFERENCE_30_0 20
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto dos_init_file_pathname_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_init_file_pathname_8)
DEFLABEL (dos_init_file_pathname_4)
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
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Rsp [0]);
  goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_10])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define LABEL_31_8 7
#define LABEL_31_9 9
#define LABEL_31_12 11
#define LABEL_31_5 13
#define LABEL_31_17 15
#define LABEL_31_14 17
#define LABEL_31_19 19
#define LABEL_31_15 21
#define LABEL_31_16 23
#define LABEL_31_22 25
#define LABEL_31_23 27
#define LABEL_31_25 29
#define LABEL_31_24 31
#define LABEL_31_26 33
#define LABEL_31_10 35
#define LABEL_31_27 37
#define ENVIRONMENT_LABEL_31_3 61
#define DEBUGGING_LABEL_31_2 60
#define OBJECT_31_6 59
#define OBJECT_31_5 58
#define OBJECT_31_4 57
#define OBJECT_31_3 56
#define OBJECT_31_2 55
#define OBJECT_31_1 54
#define OBJECT_31_0 53
#define EXECUTE_CACHE_31_21 39
#define EXECUTE_CACHE_31_20 41
#define EXECUTE_CACHE_31_18 43
#define EXECUTE_CACHE_31_13 45
#define EXECUTE_CACHE_31_11 47
#define EXECUTE_CACHE_31_6 49
#define FREE_REFERENCE_31_0 52
#define FREE_REFERENCES_LABEL_31_0 38
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dospth_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_31_4);
      goto dos_pathname_simplify_31;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_26;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_31_12);
      goto continuation_21;

    case 5:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_31_17);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_31_19);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_31_22);
      goto loop_17;

    case 12:
      current_block = (Rpc - LABEL_31_23);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_31_25);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_31_24);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_31_26);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_25;

    case 17:
      current_block = (Rpc - LABEL_31_27);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_pathname_simplify_40)
DEFLABEL (dos_pathname_simplify_31)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_46;
  (Wrd7.Obj) = (current_block [OBJECT_31_2]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd7.Obj);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  Rvl = (Wrd7.Obj);
  goto label_42;

DEFLABEL (label_43)
  Rvl = (Rsp [1]);

DEFLABEL (label_42)
DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_56;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_16);
  (* (--Rsp)) = Rvl;
  goto loop_17;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_53)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_31_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Rsp [0]) = Rvl;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_52;
  Wrd42 = Wrd46;

DEFLABEL (label_51)
  if ((Wrd42.Obj) == (current_block [OBJECT_31_0]))
    goto label_49;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_31_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_31_27);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_6]), 2);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;

DEFLABEL (label_49)
  (Wrd7.Obj) = (Rsp [0]);
  goto label_47;

DEFLABEL (label_48)
  (Wrd7.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_47)
DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  goto label_45;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_9])), (Wrd43.pObj));

DEFLABEL (label_37)
  (Wrd42.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 1);

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (loop_41)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_31_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_31_4]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_57;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_66;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_65)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_64;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_63)
  goto loop_17;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_31_24);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_31_5]))
    goto label_59;

DEFLABEL (label_58)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  if (Rvl == (current_block [OBJECT_31_4]))
    goto label_58;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 1))
    goto label_62;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_61)
  if ((Wrd16.Obj) == (current_block [OBJECT_31_5]))
    goto label_58;
  Rsp = (& (Rsp [1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_60;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  Rvl = ((Wrd28.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_60)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_62)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 1);

DEFLABEL (label_38)
  (Wrd16.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_8 7
#define LABEL_9 9
#define LABEL_10 11
#define ENVIRONMENT_LABEL_3 27
#define DEBUGGING_LABEL_2 26
#define PURIFICATION_ROOT 25
#define OBJECT_6 24
#define OBJECT_5 23
#define OBJECT_4 22
#define OBJECT_3 21
#define OBJECT_2 20
#define OBJECT_1 19
#define OBJECT_0 18
#define EXECUTE_CACHE_6 13
#define GLOBAL_EXECUTE_CACHE_7 16
#define FREE_REFERENCES_LABEL_0 12
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
dospth_so_2c1f55340a1765bb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_7)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_6)
  {
    static const short sections [] =
      {
	0,
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
	2,
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
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 31)
      goto label_5;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_5)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_dospth_so_2c1f55340a1765bb [31] =
  {
    { "dospth_so_code_1", 14, dospth_so_code_1 },
    { "dospth_so_code_2", 2, dospth_so_code_2 },
    { "dospth_so_code_3", 28, dospth_so_code_3 },
    { "dospth_so_code_4", 25, dospth_so_code_4 },
    { "dospth_so_code_5", 10, dospth_so_code_5 },
    { "dospth_so_code_6", 4, dospth_so_code_6 },
    { "dospth_so_code_7", 5, dospth_so_code_7 },
    { "dospth_so_code_8", 2, dospth_so_code_8 },
    { "dospth_so_code_9", 2, dospth_so_code_9 },
    { "dospth_so_code_10", 6, dospth_so_code_10 },
    { "dospth_so_code_11", 9, dospth_so_code_11 },
    { "dospth_so_code_12", 2, dospth_so_code_12 },
    { "dospth_so_code_13", 8, dospth_so_code_13 },
    { "dospth_so_code_14", 1, dospth_so_code_14 },
    { "dospth_so_code_15", 11, dospth_so_code_15 },
    { "dospth_so_code_16", 1, dospth_so_code_16 },
    { "dospth_so_code_17", 3, dospth_so_code_17 },
    { "dospth_so_code_18", 1, dospth_so_code_18 },
    { "dospth_so_code_19", 23, dospth_so_code_19 },
    { "dospth_so_code_20", 2, dospth_so_code_20 },
    { "dospth_so_code_21", 7, dospth_so_code_21 },
    { "dospth_so_code_22", 3, dospth_so_code_22 },
    { "dospth_so_code_23", 4, dospth_so_code_23 },
    { "dospth_so_code_24", 5, dospth_so_code_24 },
    { "dospth_so_code_25", 11, dospth_so_code_25 },
    { "dospth_so_code_26", 17, dospth_so_code_26 },
    { "dospth_so_code_27", 3, dospth_so_code_27 },
    { "dospth_so_code_28", 4, dospth_so_code_28 },
    { "dospth_so_code_29", 3, dospth_so_code_29 },
    { "dospth_so_code_30", 5, dospth_so_code_30 },
    { "dospth_so_code_31", 18, dospth_so_code_31 }
  };

int
decl_dospth_so_2c1f55340a1765bb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dospth_so_2c1f55340a1765bb);
  return (0);
}

DECLARE_COMPILED_CODE ("dospth.so", 5, decl_dospth_so_2c1f55340a1765bb, dospth_so_2c1f55340a1765bb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dospth_so_data_2c1f55340a1765bb [5222] =
  "\x67\x4b\xc2\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d\xba"
  "\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88"
  "\xb1\x0d\xb9\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x0d\x1c\x0d\x1c\xc1\x1c\x0d\x1c\x08\xc1\x1c\x0d\x1c"
  "\x0d\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\x1b\x0f\x81\x0f\xc2\x1c\x80\xc1\x1c\x1b\x0d\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x85\x88\x0c\x1b\x80\x0f\x1b\x82\x1b\x1b\x81\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x1b\x08\x88\x1b\x0d\x1c\x08\x89\x08\x1b\x1b\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x80\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x1b\x80"
  "\x0d\x1c\x0f\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x80\x81\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x28"
  "\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c\x1b\x1b"
  "\x1b\x0c\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1b\x07\x1b\x06\x1b\x1b\x0d\x08\x8b\x0c"
  "\x0c\x1b\x1b\x1b\x08\x89\x0c\x08\x06\x1b\x08\x89\x06\x1b\x08\x89"
  "\x1b\x0c\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\x0d\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x08"
  "\xb4\x24\x28\x0d\x28\x0d\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x24\x28\xb3\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\x08\x1b\x06\x1b"
  "\x0d\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\xc3\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x17\x1b"
  "\xb2\xb3\xb4\x1b\xb5\xb6\xb7\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\xb1\x1b\x1b"
  "\x17\x0f\x0f\x28\x0d\x26\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x64\x6f\x73\x70\x74\x68\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x04\x64\x6f\x73\x17\x64\x6f\x73\x2f\x69\x6e\x69\x74\x2d\x66"
  "\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1a\x64\x6f\x73"
  "\x2f\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x17\x64\x6f\x73\x2f\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x3e\x74\x72\x75\x65\x6e\x61\x6d\x65\x1f\x64\x6f"
  "\x73\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65\x1a\x64\x6f\x73"
  "\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x12\x64\x6f\x73\x2f\x66\x69\x6c\x65\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x17\x64\x6f\x73\x2f\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x09"
  "\x18\x64\x6f\x73\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x3f\x0a\x13\x64\x6f\x73\x2f\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x77\x69\x6c\x64\x3f\x0b\x12\x64\x6f"
  "\x73\x2f\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x0c"
  "\x19\x64\x6f\x73\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x3e\x6e"
  "\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x0d\x15\x64\x6f\x73\x2f\x70"
  "\x61\x72\x73\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x0e"
  "\x16\x64\x6f\x73\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x73\x69"
  "\x6d\x70\x6c\x69\x66\x79\x0f\x0e\x11\x0f\x6d\x61\x6b\x65\x2d\x68"
  "\x6f\x73\x74\x2d\x74\x79\x70\x65\x02\x13\x1e\x81\x9f\x02\x12\x1c"
  "\x81\x99\x02\x11\x1a\x81\x97\x02\x10\x18\x81\x95\x02\x0f\x16\x81"
  "\x93\x02\x0e\x14\x81\x91\x02\x0d\x12\x81\x8f\x02\x0c\x10\x81\x8d"
  "\x02\x0b\x0e\x81\x8b\x02\x0a\x0c\x81\x89\x02\x09\x0a\x81\x87\x02"
  "\x08\x08\x81\x85\x02\x07\x06\x81\x83\x02\x06\x04\x83\x04\x1d\x32"
  "\x10\x02\x13\x6d\x61\x6b\x65\x2d\x64\x6f\x73\x2d\x68\x6f\x73\x74"
  "\x2d\x74\x79\x70\x65\x02\x04\x18\x61\x64\x64\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x21\x02"
  "\x15\x06\x81\x81\x02\x14\x04\x82\x02\x05\x0e\x11\x02\x09\x61\x62"
  "\x73\x6f\x6c\x75\x74\x65\x12\x09\x72\x65\x6c\x61\x74\x69\x76\x65"
  "\x13\x04\x63\x64\x72\x14\x0b\x75\x6e\x73\x70\x65\x63\x69\x66\x69"
  "\x63\x15\x04\x63\x61\x72\x16\x19\x73\x75\x62\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x2d\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73"
  "\x17\x11\x73\x74\x72\x69\x6e\x67\x2d\x64\x6f\x77\x6e\x63\x61\x73"
  "\x65\x21\x03\x04\x12\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x6d\x70"
  "\x6f\x6e\x65\x6e\x74\x73\x18\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x03\x1a\x65\x78\x70\x61\x6e\x64\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x72\x65\x66\x69\x78\x65\x73\x19\x03\x0a\x6c"
  "\x61\x73\x74\x2d\x70\x61\x69\x72\x1a\x03\x16\x70\x61\x72\x73\x65"
  "\x2d\x64\x65\x76\x69\x63\x65\x2d\x61\x6e\x64\x2d\x70\x61\x74\x68"
  "\x1b\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70"
  "\x61\x69\x72\x1c\x03\x0b\x70\x61\x72\x73\x65\x2d\x6e\x61\x6d\x65"
  "\x1d\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x1e"
  "\x08\x0c\x03\x1b\x70\x61\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x1f\x03"
  "\x13\x73\x69\x6d\x70\x6c\x69\x66\x79\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x20\x0c\x31\x3a\x81\x83\x02\x30\x38\x81\x83\x02\x2f"
  "\x36\x81\x87\x02\x2e\x34\x81\x87\x02\x2d\x32\x81\x85\x02\x2c\x30"
  "\x81\x85\x02\x2b\x2e\x81\x87\x02\x2a\x2c\x81\x87\x02\x29\x2a\x81"
  "\x85\x02\x28\x28\x81\x83\x02\x27\x26\x81\x87\x02\x26\x24\x81\x87"
  "\x02\x25\x22\x81\x85\x02\x24\x20\x81\x87\x02\x23\x1e\x81\x85\x02"
  "\x22\x1c\x81\x89\x02\x21\x1a\x81\x8b\x02\x20\x18\x81\x8b\x02\x1f"
  "\x16\x81\x89\x02\x1e\x14\x81\x87\x02\x1d\x12\x81\x83\x02\x1c\x10"
  "\x81\x87\x02\x1b\x0e\x81\x89\x02\x1a\x0c\x81\x87\x02\x19\x0a\x81"
  "\x87\x02\x18\x08\x81\x85\x02\x17\x06\x81\x8b\x02\x16\x04\x84\x06"
  "\x39\x5c\x21\x02\x14\x01\x7f\x01\x25\x0b\x73\x74\x72\x69\x6e\x67"
  "\x2d\x72\x65\x66\x22\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x23\x16\x1d\x2a\x65\x78\x70\x61\x6e\x64\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x72\x65\x66\x69\x78\x65\x73"
  "\x3f\x2a\x17\x03\x05\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x24"
  "\x03\x0e\x69\x67\x6e\x6f\x72\x65\x2d\x65\x72\x72\x6f\x72\x73\x03"
  "\x0b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x3f\x02\x17\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x25\x03\x19\x67\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x03\x0d"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x26\x03\x14\x75"
  "\x73\x65\x72\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x04\x18\x03\x1c\x03\x1a\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x27\x03\x1e\x0d\x4a\x34\x81\x89\x02\x49\x32\x81\x89\x02\x48\x30"
  "\x81\x85\x02\x47\x2e\x81\x87\x02\x46\x2c\x81\x87\x02\x45\x2a\x81"
  "\x85\x02\x44\x28\x81\x85\x02\x43\x26\x81\x87\x02\x42\x24\x81\x85"
  "\x02\x41\x22\x81\x87\x02\x40\x20\x81\x85\x02\x3f\x1e\x81\x83\x02"
  "\x3e\x1c\x81\x85\x02\x3d\x1a\x81\x8b\x02\x3c\x18\x81\x89\x02\x3b"
  "\x16\x81\x83\x02\x3a\x14\x81\x83\x02\x39\x12\x81\x89\x02\x38\x10"
  "\x81\x89\x02\x37\x0e\x81\x87\x02\x36\x0c\x81\x87\x02\x35\x0a\x81"
  "\x87\x02\x34\x08\x81\x85\x02\x33\x06\x81\x83\x02\x32\x04\x83\x04"
  "\x33\x5a\x28\x02\x01\x14\x01\x3b\x22\x23\x16\x04\x0c\x73\x74\x72"
  "\x69\x6e\x67\x2d\x68\x65\x61\x64\x03\x11\x63\x68\x61\x72\x2d\x61"
  "\x6c\x70\x68\x61\x62\x65\x74\x69\x63\x3f\x03\x54\x16\x81\x85\x02"
  "\x53\x14\x81\x85\x02\x52\x12\x81\x85\x02\x51\x10\x81\x85\x02\x50"
  "\x0e\x81\x87\x02\x4f\x0c\x81\x85\x02\x4e\x0a\x81\x85\x02\x4d\x08"
  "\x81\x83\x02\x4c\x06\x83\x04\x4b\x04\x81\x85\x02\x15\x26\x29\x02"
  "\x12\x12\x03\x75\x70\x2a\x14\x13\x16\x04\x07\x65\x71\x75\x61\x6c"
  "\x3f\x2b\x02\x58\x0a\x81\x83\x02\x57\x08\x81\x83\x02\x56\x06\x81"
  "\x83\x02\x55\x04\x83\x04\x09\x15\x2c\x02\x08\x23\x44\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x20\x63\x6f\x6e\x74\x61\x69\x6e\x73\x20\x6e"
  "\x75\x6c\x6c\x20\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x3a\x1e\x1a"
  "\x70\x61\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2d\x03\x04\x0e\x74\x68\x65"
  "\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x04\x04\x6d\x61\x70\x04"
  "\x06\x65\x72\x72\x6f\x72\x04\x5d\x0c\x81\x83\x02\x5c\x0a\x81\x83"
  "\x02\x5b\x08\x81\x83\x02\x5a\x06\x81\x85\x02\x59\x04\x83\x04\x0b"
  "\x19\x2e\x02\x09\x2a\x03\x2e\x2e\x04\x09\x73\x74\x72\x69\x6e\x67"
  "\x3d\x3f\x2f\x02\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x05\x0d\x30"
  "\x02\x0a\x23\x06\x15\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x63"
  "\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x31\x02\x61\x06\x81\x89\x02"
  "\x60\x04\x84\x06\x05\x0d\x32\x02\x0b\x06\x20\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63"
  "\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x05\x24\x03\x67\x0e\xfd"
  "\xff\x03\x66\x0c\xfd\xff\x03\x65\x0a\xfd\xff\x03\x64\x08\xfd\xff"
  "\x03\x63\x06\xff\xff\x03\x62\x04\x86\x0a\x0d\x16\x33\x02\x0c\x02"
  "\x2a\x22\x05\x77\x69\x6c\x64\x22\x01\x2f\x23\x04\x1a\x73\x74\x72"
  "\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x70\x72\x65\x76\x69\x6f\x75"
  "\x73\x2d\x63\x68\x61\x72\x04\x2f\x05\x08\x65\x78\x74\x72\x61\x63"
  "\x74\x2f\x04\x70\x14\x81\x85\x02\x6f\x12\x81\x89\x02\x6e\x10\x81"
  "\x85\x02\x6d\x0e\x81\x87\x02\x6c\x0c\x81\x87\x02\x6b\x0a\x81\x85"
  "\x02\x6a\x08\x81\x87\x02\x69\x06\x81\x83\x02\x68\x04\x83\x04\x13"
  "\x24\x23\x02\x0d\x22\x02\x2a\x08\x0c\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x3d\x3f\x05\x24\x03\x72\x06\x81\x87\x02\x71\x04\x85\x08"
  "\x05\x11\x24\x02\x0e\x03\x14\x25\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x34\x03\x11\x25\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76\x69\x63\x65\x35\x03\x12"
  "\x75\x6e\x70\x61\x72\x73\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x36\x03\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79"
  "\x70\x65\x37\x03\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x38\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x39\x03\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x6e\x61\x6d\x65\x3a\x04\x0d\x75\x6e\x70\x61\x72\x73\x65\x2d\x6e"
  "\x61\x6d\x65\x3b\x09\x7a\x12\x81\x8b\x02\x79\x10\x81\x89\x02\x78"
  "\x0e\x81\x87\x02\x77\x0c\x81\x87\x02\x76\x0a\x81\x85\x02\x75\x08"
  "\x81\x85\x02\x74\x06\x81\x83\x02\x73\x04\x83\x04\x11\x25\x3c\x02"
  "\x0f\x02\x3a\x01\x15\x04\x39\x02\x7b\x04\x83\x04\x03\x0c\x3d\x02"
  "\x10\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x14\x12\x16\x01\x15"
  "\x1f\x73\x75\x62\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x64"
  "\x65\x6c\x69\x6d\x69\x74\x65\x72\x2d\x73\x74\x72\x69\x6e\x67\x3e"
  "\x02\x04\x21\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x65\x67\x61\x6c"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x3f\x04\x39\x05\x39\x03\x1c\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x6f\x6d\x70"
  "\x6f\x6e\x65\x6e\x74\x40\x05\x86\x01\x18\x81\x87\x02\x85\x01\x16"
  "\x81\x89\x02\x84\x01\x14\x81\x85\x02\x83\x01\x12\x81\x87\x02\x82"
  "\x01\x10\x81\x83\x02\x81\x01\x0e\x81\x83\x02\x80\x01\x0c\x81\x85"
  "\x02\x7f\x0a\x81\x87\x02\x7e\x08\x81\x83\x02\x7d\x06\x81\x83\x02"
  "\x7c\x04\x83\x04\x17\x2c\x41\x02\x11\x14\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x20\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x03\x2e\x2e"
  "\x2a\x04\x3f\x02\x87\x01\x04\x83\x04\x03\x0c\x42\x02\x12\x02\x2e"
  "\x01\x03\x12\x75\x6e\x70\x61\x72\x73\x65\x2d\x63\x6f\x6d\x70\x6f"
  "\x6e\x65\x6e\x74\x43\x05\x39\x03\x8a\x01\x08\x81\x85\x02\x89\x01"
  "\x06\x81\x85\x02\x88\x01\x04\x84\x06\x07\x11\x39\x02\x13\x0a\x63"
  "\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x02\x2a\x22\x04\x3f\x02\x8b\x01"
  "\x04\x83\x04\x03\x0c\x44\x02\x14\x08\x76\x65\x72\x73\x69\x6f\x6e"
  "\x14\x2a\x15\x22\x07\x6e\x65\x77\x65\x73\x74\x05\x74\x79\x70\x65"
  "\x05\x6e\x61\x6d\x65\x16\x13\x12\x0a\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x15\x22\x15\x07\x64\x65\x76\x69\x63\x65\x04\x3f\x04\x05"
  "\x6d\x65\x6d\x71\x03\x06\x6c\x69\x73\x74\x3f\x03\x20\x03\x12\x73"
  "\x65\x72\x76\x65\x72\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f"
  "\x3f\x03\x1e\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x08\x10\x25"
  "\x25\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x22\x09"
  "\xa2\x01\x30\x81\x83\x02\xa1\x01\x2e\x81\x8d\x02\xa0\x01\x2c\x81"
  "\x8f\x02\x9f\x01\x2a\x81\x93\x02\x9e\x01\x28\x81\x95\x02\x9d\x01"
  "\x26\x81\x95\x02\x9c\x01\x24\x81\x95\x02\x9b\x01\x22\x81\x95\x02"
  "\x9a\x01\x20\x83\x04\x99\x01\x1e\x81\x8d\x02\x98\x01\x1c\x81\x8f"
  "\x02\x97\x01\x1a\x81\x8f\x02\x96\x01\x18\x81\x8d\x02\x95\x01\x16"
  "\x81\x8f\x02\x94\x01\x14\x81\x8f\x02\x93\x01\x12\x81\x93\x02\x92"
  "\x01\x10\x81\x8f\x02\x91\x01\x0e\x81\x8f\x02\x90\x01\x0c\x81\x8f"
  "\x02\x8f\x01\x0a\x88\x0e\x8e\x01\x08\x81\x8d\x02\x8d\x01\x06\x81"
  "\x8f\x02\x8c\x01\x04\x81\x8d\x02\x2f\x52\x45\x02\x15\x15\x03\x3f"
  "\x08\x0f\x25\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x03\xa4\x01\x06\x81\x8d\x02\xa3\x01\x04\x88\x0e\x05\x0e\x46\x02"
  "\x16\x14\x12\x16\x03\x1e\x02\xab\x01\x10\x81\x83\x02\xaa\x01\x0e"
  "\x81\x83\x02\xa9\x01\x0c\x81\x83\x02\xa8\x01\x0a\x81\x83\x02\xa7"
  "\x01\x08\x81\x83\x02\xa6\x01\x06\x81\x83\x02\xa5\x01\x04\x83\x04"
  "\x0f\x18\x1e\x02\x17\x03\x3a\x03\x37\x03\xae\x01\x08\x81\x83\x02"
  "\xad\x01\x06\x81\x83\x02\xac\x01\x04\x83\x04\x07\x10\x47\x02\x18"
  "\x15\x03\x34\x03\x35\x03\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x68\x6f\x73\x74\x48\x08\x22\x05\xb2\x01\x0a\x81\x8b\x02\xb1"
  "\x01\x08\x81\x89\x02\xb0\x01\x06\x81\x87\x02\xaf\x01\x04\x83\x04"
  "\x09\x16\x49\x02\x19\x03\x37\x03\x3a\x03\x48\x03\x12\x25\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x08\x22"
  "\x06\xb7\x01\x0c\x81\x8d\x02\xb6\x01\x0a\x81\x8b\x02\xb5\x01\x08"
  "\x81\x85\x02\xb4\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04\x0b\x19"
  "\x4a\x02\x1a\x15\x13\x02\x2e\x03\x37\x03\x3a\x04\x3b\x03\x35\x04"
  "\x27\x04\x2b\x03\x20\x03\x34\x03\x2d\x03\x48\x08\x22\x0c\xc2\x01"
  "\x18\x81\x8b\x02\xc1\x01\x16\x81\x89\x02\xc0\x01\x14\x81\x8d\x02"
  "\xbf\x01\x12\x81\x8b\x02\xbe\x01\x10\x81\x89\x02\xbd\x01\x0e\x81"
  "\x8d\x02\xbc\x01\x0c\x81\x85\x02\xbb\x01\x0a\x81\x87\x02\xba\x01"
  "\x08\x81\x85\x02\xb9\x01\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x17"
  "\x35\x27\x02\x1b\x15\x1b\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65"
  "\x14\x12\x16\x03\x34\x03\x3a\x04\x19\x65\x72\x72\x6f\x72\x3a\x62"
  "\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x03\x1a\x03\x37\x03\x1c\x03\x1d\x03\x40\x03\x35\x03\x20\x03"
  "\x48\x08\x22\x0d\xd3\x01\x24\x81\x8b\x02\xd2\x01\x22\x81\x89\x02"
  "\xd1\x01\x20\x81\x89\x02\xd0\x01\x1e\x81\x87\x02\xcf\x01\x1c\x81"
  "\x89\x02\xce\x01\x1a\x81\x89\x02\xcd\x01\x18\x81\x87\x02\xcc\x01"
  "\x16\x81\x85\x02\xcb\x01\x14\x81\x87\x02\xca\x01\x12\x81\x85\x02"
  "\xc9\x01\x10\x81\x85\x02\xc8\x01\x0e\x81\x85\x02\xc7\x01\x0c\x81"
  "\x85\x02\xc6\x01\x0a\x81\x85\x02\xc5\x01\x08\x81\x83\x02\xc4\x01"
  "\x06\x81\x85\x02\xc3\x01\x04\x83\x04\x23\x45\x48\x02\x1c\x01\x40"
  "\x01\x2b\x03\x10\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72"
  "\x69\x6e\x67\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64"
  "\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x03\xd6\x01\x08\x81\x83"
  "\x02\xd5\x01\x06\x81\x83\x02\xd4\x01\x04\x83\x04\x07\x11\x3a\x02"
  "\x1d\x05\x66\x69\x6e\x64\x05\x66\x69\x6c\x65\x14\x66\x69\x6c\x65"
  "\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x65\x78\x69\x73\x74\x02"
  "\x03\x14\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x2d\x64\x69"
  "\x72\x65\x63\x74\x3f\x08\x15\x65\x72\x72\x6f\x72\x3a\x66\x69\x6c"
  "\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x03\x04\xda\x01\x0a"
  "\x81\x83\x02\xd9\x01\x08\x81\x87\x02\xd8\x01\x06\x81\x83\x02\xd7"
  "\x01\x04\x83\x04\x09\x19\x37\x02\x1e\x0b\x6c\x6f\x63\x61\x6c\x2d"
  "\x68\x6f\x73\x74\x02\x02\x25\x03\x16\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x03\xdd"
  "\x01\x08\x81\x83\x02\xdc\x01\x06\x81\x83\x02\xdb\x01\x04\x83\x04"
  "\x07\x11\x35\x02\x1f\x0f\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d"
  "\x6e\x61\x6d\x65\x34\x02\x03\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78"
  "\x69\x73\x74\x73\x3f\x04\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x73\x04\xe2\x01\x0c\x81\x83\x02\xe1\x01\x0a"
  "\x81\x87\x02\xe0\x01\x08\x81\x85\x02\xdf\x01\x06\x81\x83\x02\xde"
  "\x01\x04\x83\x04\x0b\x17\x25\x02\x20\x09\x66\x69\x6c\x65\x2d\x65"
  "\x71\x3f\x2a\x16\x14\x05\x6f\x73\x2f\x32\x1e\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x69\x64\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e"
  "\x67\x2d\x73\x79\x73\x74\x65\x6d\x02\x03\x13\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x03\x26\x04"
  "\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x03\x08\x72\x65\x76\x65\x72\x73\x65"
  "\x04\x2b\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x07\xf4\x01\x26"
  "\x81\x8b\x02\xf3\x01\x24\x81\x89\x02\xf2\x01\x22\x81\x85\x02\xf1"
  "\x01\x20\x81\x85\x02\xf0\x01\x1e\x81\x87\x02\xef\x01\x1c\x81\x83"
  "\x02\xee\x01\x1a\x81\x83\x02\xed\x01\x18\x81\x89\x02\xec\x01\x16"
  "\x81\x87\x02\xeb\x01\x14\x81\x87\x02\xea\x01\x12\x81\x85\x02\xe9"
  "\x01\x10\x81\x8b\x02\xe8\x01\x0e\x81\x83\x02\xe7\x01\x0c\x81\x87"
  "\x02\xe6\x01\x0a\x81\x87\x02\xe5\x01\x08\x81\x87\x02\xe4\x01\x06"
  "\x81\x87\x02\xe3\x01\x04\x83\x04\x25\x3e\x2b\x20\x2a\x2a\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17"
  "\x2b\x04\x25\x04\x35\x04\x37\x04\x3a\x04\x48\x04\x27\x04\x4a\x04"
  "\x49\x04\x47\x04\x1e\x04\x46\x04\x45\x0a\x44\x04\x39\x04\x42\x04"
  "\x41\x04\x3d\x04\x3c\x04\x24\x04\x23\x04\x33\x04\x32\x04\x30\x04"
  "\x2e\x04\x2c\x04\x29\x06\x28\x04\x21\x04\x11\x04\x10\x04\x0b\x73"
  "\x63\x68\x65\x6d\x65\x2e\x69\x6e\x69\x02\x5c\x22\x0f\x0b\x09\x0a"
  "\x3f\x22\x0c\x43\x3b\x40\x36\x38\x0d\x2f\x1d\x31\x18\x2d\x1f\x20"
  "\x1b\x19\x0e\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x34\x3e\x22\x01\x5d\x01\x30\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x04\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x02\x05\x0c\x80\x80\x04"
  "\x04\x0a\x81\x81\x02\x03\x08\x81\x81\x02\x02\x06\x81\x85\x02\x01"
  "\x04\x81\x83\x02\x0b\x1c";

SCHEME_OBJECT *
dospth_so_data_2c1f55340a1765bb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dospth_so_data_2c1f55340a1765bb [0]))), (sizeof (prog_dospth_so_data_2c1f55340a1765bb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("dospth.so", dospth_so_data_2c1f55340a1765bb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dospth.so", "0cf3254b3e36a541")
