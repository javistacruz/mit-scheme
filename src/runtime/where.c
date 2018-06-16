/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:01-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_12 11
#define LABEL_1_17 13
#define LABEL_1_13 15
#define TAG_1_14 6
#define LABEL_1_19 17
#define ENVIRONMENT_LABEL_1_3 45
#define DEBUGGING_LABEL_1_2 44
#define OBJECT_1_6 43
#define OBJECT_1_5 42
#define OBJECT_1_4 41
#define OBJECT_1_3 40
#define OBJECT_1_2 39
#define OBJECT_1_1 38
#define OBJECT_1_0 37
#define EXECUTE_CACHE_1_21 19
#define EXECUTE_CACHE_1_20 21
#define EXECUTE_CACHE_1_18 23
#define EXECUTE_CACHE_1_16 25
#define EXECUTE_CACHE_1_15 27
#define EXECUTE_CACHE_1_11 29
#define EXECUTE_CACHE_1_10 31
#define EXECUTE_CACHE_1_7 33
#define FREE_REFERENCE_1_0 36
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto where_9;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_1_17);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto lambda_15;

    case 7:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (where_13)
DEFLABEL (where_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  if ((Wrd13.Obj) == (current_block [OBJECT_1_2]))
    goto label_18;
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_13])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_17])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_1_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_6]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_2_4);
      goto wstate_frame_list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wstate_frame_list_3)
DEFLABEL (wstate_frame_list_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define OBJECT_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_3_4);
      goto set_wstate_frame_listB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_wstate_frame_listB_3)
DEFLABEL (set_wstate_frame_listB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_3 15
#define OBJECT_4_2 14
#define OBJECT_4_1 13
#define OBJECT_4_0 12
#define FREE_REFERENCE_4_0 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4_4);
      goto wstateP_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wstateP_10)
DEFLABEL (wstateP_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_4_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_5 25
#define LABEL_5_17 27
#define ENVIRONMENT_LABEL_5_3 68
#define DEBUGGING_LABEL_5_2 67
#define OBJECT_5_22 66
#define OBJECT_5_21 65
#define OBJECT_5_20 64
#define OBJECT_5_19 63
#define OBJECT_5_18 62
#define OBJECT_5_17 61
#define OBJECT_5_16 60
#define OBJECT_5_15 59
#define OBJECT_5_14 58
#define OBJECT_5_13 57
#define OBJECT_5_12 56
#define OBJECT_5_11 55
#define OBJECT_5_10 54
#define OBJECT_5_9 53
#define OBJECT_5_8 52
#define OBJECT_5_7 51
#define OBJECT_5_6 50
#define OBJECT_5_5 49
#define OBJECT_5_4 48
#define OBJECT_5_3 47
#define OBJECT_5_2 46
#define OBJECT_5_1 45
#define OBJECT_5_0 44
#define EXECUTE_CACHE_5_16 29
#define FREE_REFERENCE_5_9 32
#define FREE_REFERENCE_5_8 33
#define FREE_REFERENCE_5_7 34
#define FREE_REFERENCE_5_6 35
#define FREE_REFERENCE_5_5 36
#define FREE_REFERENCE_5_4 37
#define FREE_REFERENCE_5_3 38
#define FREE_REFERENCE_5_2 39
#define FREE_REFERENCE_5_1 40
#define FREE_REFERENCE_5_0 41
#define FREE_ASSIGNMENT_5_0 43
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd234;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd233;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd216;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd211;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd193;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd170;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd124;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5_4);
      goto initialize_packageB_41;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_43;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_40;

    case 12:
      current_block = (Rpc - LABEL_5_17);
      goto label_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_55)
DEFLABEL (initialize_packageB_41)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_78;
  Wrd9 = Wrd13;

DEFLABEL (label_77)
  (Wrd18.Obj) = (current_block [OBJECT_5_0]);
  (Wrd19.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_76;
  Wrd32 = Wrd36;

DEFLABEL (label_75)
  (Wrd41.Obj) = (current_block [OBJECT_5_3]);
  (Wrd42.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd50.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_74;
  Wrd55 = Wrd59;

DEFLABEL (label_73)
  (Wrd64.Obj) = (current_block [OBJECT_5_5]);
  (Wrd65.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd73.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_72;
  Wrd78 = Wrd82;

DEFLABEL (label_71)
  (Wrd87.Obj) = (current_block [OBJECT_5_7]);
  (Wrd88.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd95.Obj) = (current_block [OBJECT_5_8]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd96.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd105.Obj) = ((Wrd102.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_70;
  Wrd101 = Wrd105;

DEFLABEL (label_69)
  (Wrd110.Obj) = (current_block [OBJECT_5_9]);
  (Wrd111.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_5_10]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_5]));
  (Wrd128.Obj) = ((Wrd125.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_68;
  Wrd124 = Wrd128;

DEFLABEL (label_67)
  (Wrd133.Obj) = (current_block [OBJECT_5_11]);
  (Wrd134.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd134.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (Wrd141.Obj) = (current_block [OBJECT_5_12]);
  (* (Rhp++)) = (Wrd141.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd140.pObj) = (& (Rhp [-2]));
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd140.pObj)));
  (Wrd142.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd142.Obj);
  (Wrd144.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd144.pObj)));
  (* (--Rsp)) = (Wrd145.Obj);
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_6]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_66;
  Wrd147 = Wrd151;

DEFLABEL (label_65)
  (Wrd156.Obj) = (current_block [OBJECT_5_13]);
  (Wrd157.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd157.Obj);
  (Wrd155.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd155.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (Wrd164.Obj) = (current_block [OBJECT_5_14]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd165.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd165.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (* (--Rsp)) = (Wrd168.Obj);
  (Wrd171.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_7]));
  (Wrd174.Obj) = ((Wrd171.pObj) [0]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if ((Wrd175.uLng) == 50)
    goto label_64;
  Wrd170 = Wrd174;

DEFLABEL (label_63)
  (Wrd179.Obj) = (current_block [OBJECT_5_15]);
  (Wrd180.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd179.Obj);
  (* (Rhp++)) = (Wrd180.Obj);
  (Wrd178.pObj) = (& (Rhp [-2]));
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd178.pObj)));
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd176.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (Wrd187.Obj) = (current_block [OBJECT_5_16]);
  (* (Rhp++)) = (Wrd187.Obj);
  (* (Rhp++)) = (Wrd181.Obj);
  (Wrd186.pObj) = (& (Rhp [-2]));
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd186.pObj)));
  (Wrd188.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd184.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  (Wrd190.pObj) = (& (Rhp [-2]));
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd190.pObj)));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd194.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_8]));
  (Wrd197.Obj) = ((Wrd194.pObj) [0]);
  (Wrd198.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if ((Wrd198.uLng) == 50)
    goto label_62;
  Wrd193 = Wrd197;

DEFLABEL (label_61)
  (Wrd202.Obj) = (current_block [OBJECT_5_17]);
  (Wrd203.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd202.Obj);
  (* (Rhp++)) = (Wrd203.Obj);
  (Wrd201.pObj) = (& (Rhp [-2]));
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd201.pObj)));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd199.Obj);
  (Wrd206.pObj) = (& (Rhp [-2]));
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd206.pObj)));
  (Wrd210.Obj) = (current_block [OBJECT_5_18]);
  (* (Rhp++)) = (Wrd210.Obj);
  (* (Rhp++)) = (Wrd204.Obj);
  (Wrd209.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd209.pObj)));
  (Wrd211.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd207.Obj);
  (* (Rhp++)) = (Wrd211.Obj);
  (Wrd213.pObj) = (& (Rhp [-2]));
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd213.pObj)));
  (* (--Rsp)) = (Wrd214.Obj);
  (Wrd217.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_9]));
  (Wrd220.Obj) = ((Wrd217.pObj) [0]);
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if ((Wrd221.uLng) == 50)
    goto label_60;
  Wrd216 = Wrd220;

DEFLABEL (label_59)
  (Wrd225.Obj) = (current_block [OBJECT_5_19]);
  (Wrd226.Obj) = (current_block [OBJECT_5_1]);
  (* (Rhp++)) = (Wrd225.Obj);
  (* (Rhp++)) = (Wrd226.Obj);
  (Wrd224.pObj) = (& (Rhp [-2]));
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd224.pObj)));
  (* (Rhp++)) = (Wrd216.Obj);
  (* (Rhp++)) = (Wrd222.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd233.Obj) = (current_block [OBJECT_5_20]);
  (* (Rhp++)) = (Wrd233.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd232.pObj) = (& (Rhp [-2]));
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd232.pObj)));
  (Wrd234.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd230.Obj);
  (* (Rhp++)) = (Wrd234.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd238.Obj) = (current_block [OBJECT_5_21]);
  (* (--Rsp)) = (Wrd238.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_5_22]);
  goto pop_return;

DEFLABEL (label_58)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_53)
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_15])), (Wrd217.pObj));

DEFLABEL (label_52)
  (Wrd216.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd194.pObj));

DEFLABEL (label_51)
  (Wrd193.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd171.pObj));

DEFLABEL (label_50)
  (Wrd170.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_12])), (Wrd148.pObj));

DEFLABEL (label_49)
  (Wrd147.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_11])), (Wrd125.pObj));

DEFLABEL (label_48)
  (Wrd124.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_10])), (Wrd102.pObj));

DEFLABEL (label_47)
  (Wrd101.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd79.pObj));

DEFLABEL (label_46)
  (Wrd78.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd56.pObj));

DEFLABEL (label_45)
  (Wrd55.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd33.pObj));

DEFLABEL (label_44)
  (Wrd32.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
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
where_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto show_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_3)
DEFLABEL (show_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_8 7
#define LABEL_7_10 9
#define LABEL_7_9 11
#define LABEL_7_12 13
#define ENVIRONMENT_LABEL_7_3 26
#define DEBUGGING_LABEL_7_2 25
#define OBJECT_7_3 24
#define OBJECT_7_2 23
#define OBJECT_7_1 22
#define OBJECT_7_0 21
#define EXECUTE_CACHE_7_13 15
#define EXECUTE_CACHE_7_11 17
#define EXECUTE_CACHE_7_7 19
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto show_current_frame_6;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_current_frame_12)
DEFLABEL (show_current_frame_6)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_18)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_17;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [3]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_7_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define ENVIRONMENT_LABEL_8_3 20
#define DEBUGGING_LABEL_8_2 19
#define OBJECT_8_3 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_9 11
#define EXECUTE_CACHE_8_7 13
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto show_all_3;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_all_8)
DEFLABEL (show_all_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_10;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd13.Obj) = (current_block [OBJECT_8_3]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_6 9
#define LABEL_9_10 11
#define LABEL_9_9 13
#define LABEL_9_13 15
#define ENVIRONMENT_LABEL_9_3 32
#define DEBUGGING_LABEL_9_2 31
#define OBJECT_9_5 30
#define OBJECT_9_4 29
#define OBJECT_9_3 28
#define OBJECT_9_2 27
#define OBJECT_9_1 26
#define OBJECT_9_0 25
#define EXECUTE_CACHE_9_14 17
#define EXECUTE_CACHE_9_12 19
#define EXECUTE_CACHE_9_11 21
#define EXECUTE_CACHE_9_8 23
#define FREE_REFERENCES_LABEL_9_0 16
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_9_4);
      goto parent_9;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parent_16)
DEFLABEL (parent_9)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_23;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_6);
  if (Rvl == (current_block [OBJECT_9_3]))
    goto label_17;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_4]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_21;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  ((Wrd17.pObj) [2]) = (Wrd6.Obj);

DEFLABEL (label_18)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_3]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_9_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 3);

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_21)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define ENVIRONMENT_LABEL_10_3 24
#define DEBUGGING_LABEL_10_2 23
#define OBJECT_10_5 22
#define OBJECT_10_4 21
#define OBJECT_10_3 20
#define OBJECT_10_2 19
#define OBJECT_10_1 18
#define OBJECT_10_0 17
#define EXECUTE_CACHE_10_10 13
#define EXECUTE_CACHE_10_9 15
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_10_4);
      goto son_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (son_13)
DEFLABEL (son_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_20;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_19)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd30.uLng) == 1)
    goto label_14;
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_10_5]);
  (Rsp [2]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (label_14)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_18;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_17)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_16;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_16;
  ((Wrd50.pObj) [2]) = (Wrd34.Obj);

DEFLABEL (label_15)
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_10_4]);
  (Rsp [1]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_16)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (current_block [OBJECT_10_0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_18)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_10)
  (Wrd34.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 15
#define DEBUGGING_LABEL_11_2 14
#define OBJECT_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_11_4);
      goto command_print_environment_procedure_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_environment_procedure_7)
DEFLABEL (command_print_environment_procedure_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_9;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (label_9)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_9 11
#define LABEL_12_11 13
#define ENVIRONMENT_LABEL_12_3 29
#define DEBUGGING_LABEL_12_2 28
#define OBJECT_12_4 27
#define OBJECT_12_3 26
#define OBJECT_12_2 25
#define OBJECT_12_1 24
#define OBJECT_12_0 23
#define EXECUTE_CACHE_12_13 15
#define EXECUTE_CACHE_12_12 17
#define EXECUTE_CACHE_12_10 19
#define EXECUTE_CACHE_12_8 21
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_12_4);
      goto recursive_where_7;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recursive_where_12)
DEFLABEL (recursive_where_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_15)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_14;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_13)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_14)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_4 15
#define OBJECT_13_3 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_13_4);
      goto enter_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enter_7)
DEFLABEL (enter_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_9;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_8)
  (Wrd28.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [1]) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_13_4]);
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_9)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_2 13
#define OBJECT_14_1 12
#define OBJECT_14_0 11
#define EXECUTE_CACHE_14_7 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
where_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
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
      goto show_object_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_object_7)
DEFLABEL (show_object_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_10)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_9;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_9)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define ENVIRONMENT_LABEL_3 52
#define DEBUGGING_LABEL_2 51
#define PURIFICATION_ROOT 50
#define OBJECT_12 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_11 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
where_so_a532fa8624c6fce6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_wstate_17;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_13)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_20)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_19)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	3,
	1,
	0,
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 14)
      goto label_18;
    blocks = (current_block [OBJECT_12]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_18)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_24;
  Wrd11 = Wrd15;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_22;
  Wrd11 = Wrd15;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_10]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (make_wstate_17)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_wstate_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_where_so_a532fa8624c6fce6 [14] =
  {
    { "where_so_code_1", 8, where_so_code_1 },
    { "where_so_code_2", 1, where_so_code_2 },
    { "where_so_code_3", 1, where_so_code_3 },
    { "where_so_code_4", 4, where_so_code_4 },
    { "where_so_code_5", 13, where_so_code_5 },
    { "where_so_code_6", 1, where_so_code_6 },
    { "where_so_code_7", 6, where_so_code_7 },
    { "where_so_code_8", 4, where_so_code_8 },
    { "where_so_code_9", 7, where_so_code_9 },
    { "where_so_code_10", 5, where_so_code_10 },
    { "where_so_code_11", 3, where_so_code_11 },
    { "where_so_code_12", 6, where_so_code_12 },
    { "where_so_code_13", 3, where_so_code_13 },
    { "where_so_code_14", 3, where_so_code_14 }
  };

int
decl_where_so_a532fa8624c6fce6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_where_so_a532fa8624c6fce6);
  return (0);
}

DECLARE_COMPILED_CODE ("where.so", 13, decl_where_so_a532fa8624c6fce6, where_so_a532fa8624c6fce6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_where_so_data_a532fa8624c6fce6 [2816] =
  "\x4c\x1d\x8c\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x07\x08\x0c"
  "\x1d\x0d\x0c\x0d\xb9\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\xba\x28\x0d\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0"
  "\x82\x88\xc2\xbe\x81\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x83\x88\xc3"
  "\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x84\x88\x07\xb6\x80"
  "\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x1d\x0d\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c"
  "\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x08\x0c\xb1\x25\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x24"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x28\xb3\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\xc1\x1c\xb6\x81\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x80\x1b\xb6\x81\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x07\x1b"
  "\xb6\x81\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x07\x1b\x1b\xb6\x81\x28\xb3\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb6\x81\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x1b\xb6\x81\x28\x0d\x28\xb4\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\xb6\x81\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x1b\xb6\x81\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xbe\x88\xb6\x1b"
  "\x1b\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb3"
  "\x1b\xb1\x0d\x0d\x17\xc3\xb2\x0d\x0d\x99\x1b\x2a\xb7\x2a\x99\x0d"
  "\x1c\x0d\x99\xb5\x2a\x0c\x0d\x08\x88\x08\x28\x0d\x28\x0d\x28\x0d"
  "\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x77\x68\x65\x72\x65"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x4b\x59\x6f\x75\x20\x61"
  "\x72\x65\x20\x6e\x6f\x77\x20\x69\x6e\x20\x74\x68\x65\x20\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x69\x6e\x73\x70\x65\x63"
  "\x74\x6f\x72\x2e\x20\x20\x54\x79\x70\x65\x20\x71\x20\x74\x6f\x20"
  "\x71\x75\x69\x74\x2c\x20\x3f\x20\x66\x6f\x72\x20\x63\x6f\x6d\x6d"
  "\x61\x6e\x64\x73\x2e\x07\x77\x68\x65\x72\x65\x3e\x08\x09\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x13\x52\x65\x74\x75\x72\x6e\x20\x66\x72"
  "\x6f\x6d\x20\x57\x48\x45\x52\x45\x2e\x0c\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2d\x73\x65\x74\x02\x05\x14\x77\x69\x74\x68\x2d\x73\x69\x6d"
  "\x70\x6c\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x02\x19\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x03\x14\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61"
  "\x67\x65\x2f\x61\x63\x74\x69\x76\x65\x03\x0c\x6d\x61\x6b\x65\x2d"
  "\x77\x73\x74\x61\x74\x65\x06\x10\x6c\x65\x74\x74\x65\x72\x2d\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x73\x05\x13\x73\x68\x6f\x77\x2d\x63\x75"
  "\x72\x72\x65\x6e\x74\x2d\x66\x72\x61\x6d\x65\x04\x11\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\x09\x15\x12"
  "\x81\x85\x02\x14\x10\x81\x85\x02\x13\x0e\x81\x87\x02\x12\x0c\x81"
  "\x85\x02\x11\x0a\x81\x85\x02\x10\x08\x81\x83\x02\x0f\x06\x81\x83"
  "\x02\x0e\x04\x83\x02\x11\x2e\x02\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x16\x04\x83\x04\x03\x02\x0d\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x21\x09\x02\x17\x04\x84\x06\x03\x0a\x02"
  "\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07"
  "\x2e\x74\x61\x67\x2e\x31\x0b\x02\x1b\x0a\x81\x85\x02\x1a\x08\x81"
  "\x83\x02\x19\x06\x81\x83\x02\x18\x04\x83\x04\x09\x12\x0c\x02\x02"
  "\x0f\x77\x68\x65\x72\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x01"
  "\x40\x1b\x68\x65\x6c\x70\x2c\x20\x6c\x69\x73\x74\x20\x63\x6f\x6d"
  "\x6d\x61\x6e\x64\x20\x6c\x65\x74\x74\x65\x72\x73\x01\x42\x3b\x73"
  "\x68\x6f\x77\x20\x41\x6c\x6c\x20\x62\x69\x6e\x64\x69\x6e\x67\x73"
  "\x20\x69\x6e\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x61\x6e\x64\x20\x69\x74\x73\x20"
  "\x61\x6e\x63\x65\x73\x74\x6f\x72\x73\x01\x44\x38\x73\x68\x6f\x77"
  "\x20\x62\x69\x6e\x64\x69\x6e\x67\x73\x20\x6f\x66\x20\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x73\x20\x69\x6e\x20\x74\x68\x65\x20"
  "\x43\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x01\x46\x38\x45\x6e\x74\x65\x72\x20\x61\x20\x72\x65"
  "\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x20\x6c\x6f"
  "\x6f\x70\x20\x69\x6e\x20\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6e"
  "\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x50\x40"
  "\x70\x72\x65\x74\x74\x79\x20\x70\x72\x69\x6e\x74\x20\x74\x68\x65"
  "\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x74\x68\x61\x74\x20"
  "\x63\x72\x65\x61\x74\x65\x64\x20\x74\x68\x65\x20\x63\x75\x72\x72"
  "\x65\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01"
  "\x51\x3a\x6d\x6f\x76\x65\x20\x74\x6f\x20\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x20\x74\x68\x61\x74\x20\x69\x73\x20\x50\x61"
  "\x72\x65\x6e\x74\x20\x6f\x66\x20\x63\x75\x72\x72\x65\x6e\x74\x20"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x52\x22\x51\x75"
  "\x69\x74\x20\x28\x65\x78\x69\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x20\x69\x6e\x73\x70\x65\x63\x74\x6f\x72\x29\x01"
  "\x54\x38\x6d\x6f\x76\x65\x20\x74\x6f\x20\x63\x68\x69\x6c\x64\x20"
  "\x6f\x66\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x20\x28\x69\x6e\x20\x63\x75\x72\x72\x65"
  "\x6e\x74\x20\x63\x68\x61\x69\x6e\x29\x01\x57\x2b\x65\x56\x61\x6c"
  "\x75\x61\x74\x65\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20"
  "\x69\x6e\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x01\x58\x3f\x65\x6e\x74\x65\x72\x20\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x69\x6e\x73\x70\x65"
  "\x63\x74\x6f\x72\x20\x28\x57\x68\x65\x72\x65\x29\x20\x6f\x6e\x20"
  "\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x10\x72\x65\x63\x75\x72\x73\x69"
  "\x76\x65\x2d\x77\x68\x65\x72\x65\x0d\x0c\x73\x68\x6f\x77\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x0e\x04\x73\x6f\x6e\x0f\x16\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x65\x78\x69\x74\x2d\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x07\x70\x61\x72\x65\x6e\x74\x10\x24\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2f\x70\x72\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x11\x06\x65"
  "\x6e\x74\x65\x72\x12\x05\x73\x68\x6f\x77\x13\x09\x73\x68\x6f\x77"
  "\x2d\x61\x6c\x6c\x14\x16\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x68"
  "\x65\x6c\x70\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x0b\x04\x11\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x73\x65\x74\x02\x28"
  "\x1c\x81\x81\x02\x27\x1a\x81\x81\x02\x26\x18\x81\x85\x02\x25\x16"
  "\x81\x85\x02\x24\x14\x81\x85\x02\x23\x12\x81\x85\x02\x22\x10\x81"
  "\x85\x02\x21\x0e\x81\x85\x02\x20\x0c\x81\x85\x02\x1f\x0a\x81\x85"
  "\x02\x1e\x08\x81\x85\x02\x1d\x06\x81\x83\x02\x1c\x04\x82\x02\x1b"
  "\x45\x15\x02\x05\x02\x29\x04\x84\x06\x03\x16\x02\x08\x04\x63\x61"
  "\x72\x17\x04\x63\x64\x72\x18\x04\x16\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f\x6e\x03\x07"
  "\x6c\x65\x6e\x67\x74\x68\x06\x0b\x73\x68\x6f\x77\x2d\x66\x72\x61"
  "\x6d\x65\x04\x2f\x0e\x81\x87\x02\x2e\x0c\x81\x85\x02\x2d\x0a\x81"
  "\x87\x02\x2c\x08\x81\x83\x02\x2b\x06\x81\x83\x02\x2a\x04\x85\x08"
  "\x0d\x1b\x19\x02\x09\x17\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69"
  "\x72\x05\x0c\x73\x68\x6f\x77\x2d\x66\x72\x61\x6d\x65\x73\x03\x33"
  "\x0a\x81\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x87\x02\x30\x04"
  "\x84\x06\x09\x15\x1a\x02\x0a\x09\x20\x54\x68\x65\x20\x63\x75\x72"
  "\x72\x65\x6e\x74\x20\x66\x72\x61\x6d\x65\x20\x68\x61\x73\x20\x6e"
  "\x6f\x20\x70\x61\x72\x65\x6e\x74\x17\x03\x18\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x68\x61\x73\x2d\x70\x61\x72\x65\x6e"
  "\x74\x3f\x03\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x70\x61\x72\x65\x6e\x74\x04\x11\x64\x65\x62\x75\x67\x67\x65\x72"
  "\x2d\x66\x61\x69\x6c\x75\x72\x65\x1b\x05\x05\x3a\x10\x81\x87\x02"
  "\x39\x0e\x81\x87\x02\x38\x0c\x81\x89\x02\x37\x0a\x81\x87\x02\x36"
  "\x08\x81\x89\x02\x35\x06\x81\x85\x02\x34\x04\x84\x06\x0f\x21\x1c"
  "\x02\x0b\x39\x54\x68\x69\x73\x20\x69\x73\x20\x74\x68\x65\x20\x6f"
  "\x72\x69\x67\x69\x6e\x61\x6c\x20\x66\x72\x61\x6d\x65\x3b\x20\x69"
  "\x74\x73\x20\x63\x68\x69\x6c\x64\x72\x65\x6e\x20\x63\x61\x6e\x6e"
  "\x6f\x74\x20\x62\x65\x20\x66\x6f\x75\x6e\x64\x09\x18\x05\x04\x1b"
  "\x03\x3f\x0c\x81\x87\x02\x3e\x0a\x81\x87\x02\x3d\x08\x81\x87\x02"
  "\x3c\x06\x81\x85\x02\x3b\x04\x84\x06\x0b\x19\x1b\x02\x0c\x17\x04"
  "\x1b\x73\x68\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x42\x08\x81\x85"
  "\x02\x41\x06\x81\x85\x02\x40\x04\x84\x06\x07\x10\x18\x02\x0d\x0b"
  "\x4e\x65\x77\x20\x77\x68\x65\x72\x65\x21\x1f\x4f\x62\x6a\x65\x63"
  "\x74\x20\x74\x6f\x20\x65\x76\x61\x6c\x75\x61\x74\x65\x20\x61\x6e"
  "\x64\x20\x65\x78\x61\x6d\x69\x6e\x65\x17\x05\x16\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x04\x04\x0b\x64\x65\x62\x75\x67\x2f\x65\x76\x61\x6c\x03\x0c"
  "\x64\x65\x62\x75\x67\x2f\x77\x68\x65\x72\x65\x05\x48\x0e\x81\x89"
  "\x02\x47\x0c\x81\x89\x02\x46\x0a\x81\x87\x02\x45\x08\x81\x85\x02"
  "\x44\x06\x81\x85\x02\x43\x04\x84\x06\x0d\x1e\x09\x02\x0e\x1f\x74"
  "\x68\x65\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x66"
  "\x6f\x72\x20\x74\x68\x69\x73\x20\x66\x72\x61\x6d\x65\x1a\x74\x68"
  "\x65\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x69\x6e"
  "\x73\x70\x65\x63\x74\x6f\x72\x17\x05\x16\x64\x65\x62\x75\x67\x2f"
  "\x72\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x02"
  "\x4b\x08\x81\x85\x02\x4a\x06\x81\x85\x02\x49\x04\x84\x06\x07\x12"
  "\x02\x0f\x17\x04\x18\x64\x65\x62\x75\x67\x2f\x72\x65\x61\x64\x2d"
  "\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x2d\x31\x02\x4e\x08\x81"
  "\x85\x02\x4d\x06\x81\x85\x02\x4c\x04\x84\x06\x07\x10\x17\x0f\x0b"
  "\x17\x04\x04\x09\x04\x18\x04\x1b\x04\x1c\x04\x1a\x04\x19\x04\x16"
  "\x04\x15\x04\x0c\x04\x0d\x0e\x12\x0d\x11\x0f\x10\x14\x13\x14\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x21\x08\x77\x73\x74\x61\x74\x65\x3f\x0d\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17\x73\x65\x74"
  "\x2d\x77\x73\x74\x61\x74\x65\x2f\x66\x72\x61\x6d\x65\x2d\x6c\x69"
  "\x73\x74\x21\x12\x77\x73\x74\x61\x74\x65\x2f\x66\x72\x61\x6d\x65"
  "\x2d\x6c\x69\x73\x74\x0a\x04\x04\x0b\x72\x74\x64\x3a\x77\x73\x74"
  "\x61\x74\x65\x1c\x06\x77\x68\x65\x72\x65\x04\x07\x77\x73\x74\x61"
  "\x74\x65\x0b\x66\x72\x61\x6d\x65\x2d\x6c\x69\x73\x74\x06\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03"
  "\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x1c\x02\x0d\x1c\x80"
  "\x80\x04\x0c\x1a\x81\x81\x02\x0b\x18\x81\x81\x02\x0a\x16\x81\x85"
  "\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x87\x02"
  "\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03"
  "\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x1b\x35";

SCHEME_OBJECT *
where_so_data_a532fa8624c6fce6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_where_so_data_a532fa8624c6fce6 [0]))), (sizeof (prog_where_so_data_a532fa8624c6fce6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("where.so", where_so_data_a532fa8624c6fce6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("where.so", "47650eae43293560")
