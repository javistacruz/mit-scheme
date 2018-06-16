/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:07-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_10 11
#define LABEL_1_9 13
#define LABEL_1_13 15
#define LABEL_1_15 17
#define LABEL_1_11 19
#define LABEL_1_14 21
#define LABEL_1_19 23
#define LABEL_1_16 25
#define LABEL_1_17 27
#define LABEL_1_20 29
#define LABEL_1_21 31
#define LABEL_1_26 33
#define LABEL_1_22 35
#define LABEL_1_23 37
#define LABEL_1_28 39
#define LABEL_1_30 41
#define ENVIRONMENT_LABEL_1_3 69
#define DEBUGGING_LABEL_1_2 68
#define OBJECT_1_2 67
#define OBJECT_1_1 66
#define OBJECT_1_0 65
#define EXECUTE_CACHE_1_29 43
#define EXECUTE_CACHE_1_27 45
#define EXECUTE_CACHE_1_25 47
#define EXECUTE_CACHE_1_24 49
#define EXECUTE_CACHE_1_18 51
#define EXECUTE_CACHE_1_12 53
#define EXECUTE_CACHE_1_7 55
#define FREE_REFERENCE_1_2 58
#define FREE_REFERENCE_1_1 59
#define FREE_REFERENCE_1_0 60
#define FREE_ASSIGNMENT_1_2 62
#define FREE_ASSIGNMENT_1_1 63
#define FREE_ASSIGNMENT_1_0 64
#define FREE_REFERENCES_LABEL_1_0 42
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
usicon_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      goto usual_integrations_cacheB_14;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_1_11);
      goto lambda_8;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_1;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_4;

    case 17:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_1_30);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (usual_integrations_cacheB_24)
DEFLABEL (usual_integrations_cacheB_14)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_41;
  Wrd8 = Wrd12;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_36;
  Wrd21 = Wrd25;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_31;
  Wrd21 = Wrd25;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_21)
  goto label_27;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd22.pObj));

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd22.pObj));

DEFLABEL (label_18)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_37;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_25)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_43;
  Wrd6 = Wrd10;

DEFLABEL (label_42)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_26);
  goto label_44;

DEFLABEL (lambda_26)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
usicon_so_9d694910c9b8da26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto label_3;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto label_4;

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

DEFLABEL (label_4)
  {
    SCHEME_OBJECT * sub_block = (OBJECT_ADDRESS (current_block [OBJECT_2]));
    (sub_block [69]) = (Rrb [REGBLOCK_ENV]);
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), sub_block, (& (sub_block [42])), 3);
  }

DEFLABEL (label_3)
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

int
decl_usicon_so_9d694910c9b8da26 (void)
{
  DECLARE_SUBCODE ("usicon_so_code_1", 20, usicon_so_code_1);
  return (0);
}

DECLARE_COMPILED_CODE ("usicon.so", 3, decl_usicon_so_9d694910c9b8da26, usicon_so_9d694910c9b8da26)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_usicon_so_data_9d694910c9b8da26 [757] =
  "\x49\x05\x76\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x1d\x0d\xb8\x0d\xb9\x0d\xba\x25"
  "\x0d\xb0\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x98"
  "\x88\xb3\xb3\x2a\x1e\x1e\x1e\x9b\x0d\xb2\xb1\xb0\x9b\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x50\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e\x2f\x75"
  "\x73\x69\x63\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x23"
  "\x55\x53\x55\x41\x4c\x2d\x49\x4e\x54\x45\x47\x52\x41\x54\x49\x4f"
  "\x4e\x53\x3a\x20\x6e\x6f\x74\x20\x61\x20\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x07\x62\x69\x67\x6e\x75\x6d\x0a\x63\x68\x61\x72\x61\x63"
  "\x74\x65\x72\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x06\x66\x61\x6c"
  "\x73\x65\x07\x66\x69\x78\x6e\x75\x6d\x07\x66\x6c\x6f\x6e\x75\x6d"
  "\x10\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x07\x72\x61\x74\x6e\x75\x6d\x07\x72\x65\x63\x6e\x75\x6d\x12\x75"
  "\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x0a\x02\x22\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67\x72\x61"
  "\x74\x69\x6f\x6e\x73\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x6e"
  "\x61\x6d\x65\x73\x23\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x76\x61\x6c\x75\x65\x73\x22\x75\x73\x75\x61\x6c\x2d\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x2f\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x2d\x61\x6c\x69\x73\x74\x04\x18\x67\x6c\x6f\x62\x61"
  "\x6c\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x73\x15\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x69"
  "\x6e\x66\x6f\x2d\x74\x61\x67\x04\x03\x0a\x6c\x69\x73\x74\x2d\x63"
  "\x6f\x70\x79\x04\x04\x6d\x61\x70\x04\x13\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x03\x1a\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64"
  "\x65\x2d\x3e\x6e\x61\x6d\x65\x04\x0e\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x2f\x6d\x61\x6b\x65\x04\x06\x65\x72\x72\x6f\x72\x04\x05\x6d"
  "\x65\x6d\x71\x08\x17\x2a\x81\x87\x02\x16\x28\x81\x85\x02\x15\x26"
  "\x81\x89\x02\x14\x24\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81"
  "\x85\x02\x11\x1e\x81\x83\x02\x10\x1c\x81\x83\x02\x0f\x1a\x83\x04"
  "\x0e\x18\x81\x81\x02\x0d\x16\x81\x81\x02\x0c\x14\x83\x04\x0b\x12"
  "\x81\x83\x02\x0a\x10\x81\x81\x02\x09\x0e\x81\x81\x02\x08\x0c\x81"
  "\x83\x02\x07\x0a\x81\x81\x02\x06\x08\x81\x81\x02\x05\x06\x81\x83"
  "\x02\x04\x04\x82\x02\x29\x46\x04\x1a\x75\x73\x75\x61\x6c\x2d\x69"
  "\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x2f\x63\x61\x63\x68"
  "\x65\x21\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
usicon_so_data_9d694910c9b8da26 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_usicon_so_data_9d694910c9b8da26 [0]))), (sizeof (prog_usicon_so_data_9d694910c9b8da26)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("usicon.so", usicon_so_data_9d694910c9b8da26)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("usicon.so", "3d8ca7d9fc74c83f")
