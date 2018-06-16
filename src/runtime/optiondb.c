/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_6 11
#define ENVIRONMENT_LABEL_1_3 21
#define DEBUGGING_LABEL_1_2 20
#define OBJECT_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_9 13
#define FREE_REFERENCE_1_0 16
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
optiondb_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_13;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_12)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_11;
  Wrd26 = Wrd30;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd27.pObj));

DEFLABEL (label_7)
  (Wrd26.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_7 7
#define LABEL_10 9
#define LABEL_12 11
#define LABEL_11 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_19 25
#define ENVIRONMENT_LABEL_3 56
#define DEBUGGING_LABEL_2 55
#define PURIFICATION_ROOT 54
#define OBJECT_16 53
#define OBJECT_15 52
#define OBJECT_14 51
#define OBJECT_13 50
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
#define EXECUTE_CACHE_16 27
#define EXECUTE_CACHE_9 29
#define EXECUTE_CACHE_8 31
#define EXECUTE_CACHE_6 33
#define FREE_REFERENCE_0 36
#define FREE_REFERENCES_LABEL_0 26
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
optiondb_so_d22cdb2718a640ed (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_4);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_11;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_12;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto expression_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_8)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_12)
  {
    SCHEME_OBJECT * sub_block = (OBJECT_ADDRESS (current_block [OBJECT_16]));
    (sub_block [21]) = (Rrb [REGBLOCK_ENV]);
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_17])), sub_block, (& (sub_block [12])), 2);
  }

DEFLABEL (label_11)
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd7.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd8.Obj);
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

int
decl_optiondb_so_d22cdb2718a640ed (void)
{
  DECLARE_SUBCODE ("optiondb_so_code_1", 5, optiondb_so_code_1);
  return (0);
}

DECLARE_COMPILED_CODE ("optiondb.so", 12, decl_optiondb_so_d22cdb2718a640ed, optiondb_so_d22cdb2718a640ed)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_optiondb_so_data_d22cdb2718a640ed [940] =
  "\x39\x06\xf2\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xc1\xc1\x0d"
  "\xb8\x24\x28\x0d\xb9\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xba\x98\x88\xb2\x0d\xbb\x0d\xbc\x0d\x08\x89\x0c\xb4"
  "\x0d\x08\x89\x0c\xb4\xb3\x08\x89\x0d\xbb\x08\x88\x0c\x0d\xb4\x0d"
  "\x08\x89\x0c\x0d\xb2\x2a\x0d\xba\xb4\xb2\x08\x89\x06\x0c\x08\x8b"
  "\x0d\x08\x06\x0c\x08\x8b\x0d\xba\xb4\xb2\x08\x89\xb3\x08\x88\x0c"
  "\x08\x8b\x0d\xba\xb4\xb2\x08\x89\x06\x0c\x08\x8b\x0d\xba\xb4\xb2"
  "\x08\x89\x06\x0c\x08\x8b\x0d\xba\xb4\xb2\x08\x89\x06\x0c\x08\x8b"
  "\x0d\xba\xb4\xb2\x08\x89\x06\x0c\x08\x8b\x0d\xba\xb4\xb2\x08\x89"
  "\x06\x0c\x08\x8b\x0d\xba\xb4\xb2\x08\x89\x06\x0c\x08\x8b\x0d\xba"
  "\xb4\xb2\x08\x89\x06\x0c\x08\x8b\x0d\xba\xb4\xb2\x08\x89\xb3\x08"
  "\x88\x0c\x08\x8b\x0d\xbb\xb4\xb3\x08\x89\x06\x0c\x08\x8b\x0d\xbb"
  "\xb4\xb3\x08\x89\x06\x0c\x08\x8b\x08\x14\xb4\x0d\x0d\x08\x8a\x0c"
  "\x0d\x24\x28\xb0\x28\x0d\x28\xb1\x28\xb1\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x6f\x70\x74\x69\x6f\x6e\x64\x62\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x06\x61\x70\x70\x6c\x79\x04\x63\x64\x72\x04\x63\x61"
  "\x72\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x6f\x70\x74\x69\x6f"
  "\x6e\x2d\x6c\x6f\x61\x64\x65\x72\x02\x04\x13\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x02\x11\x0c"
  "\x81\x85\x02\x10\x0a\x81\x89\x02\x0f\x08\x81\x87\x02\x0e\x06\x81"
  "\x83\x02\x0d\x04\x83\x04\x0b\x16\x13\x72\x65\x67\x75\x6c\x61\x72"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x08\x72\x75\x6e\x74"
  "\x69\x6d\x65\x1c\x72\x65\x67\x75\x6c\x61\x72\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x07"
  "\x72\x67\x78\x63\x6d\x70\x0c\x63\x68\x61\x72\x2d\x73\x79\x6e\x74"
  "\x61\x78\x07\x63\x68\x72\x73\x79\x6e\x14\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x07\x72\x65"
  "\x67\x65\x78\x70\x0b\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x05"
  "\x72\x65\x78\x70\x05\x72\x65\x78\x70\x15\x61\x72\x69\x74\x68\x6d"
  "\x65\x74\x69\x63\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x04\x09"
  "\x63\x6f\x6d\x70\x72\x65\x73\x73\x07\x63\x70\x72\x65\x73\x73\x0b"
  "\x64\x6f\x73\x70\x72\x6f\x63\x65\x73\x73\x08\x64\x6f\x73\x70\x72"
  "\x6f\x63\x07\x66\x6f\x72\x6d\x61\x74\x07\x66\x6f\x72\x6d\x61\x74"
  "\x05\x67\x64\x62\x6d\x05\x67\x64\x62\x6d\x06\x6b\x72\x79\x70\x74"
  "\x06\x6b\x72\x79\x70\x74\x0b\x6d\x69\x6d\x65\x2d\x63\x6f\x64\x65"
  "\x63\x0b\x6d\x69\x6d\x65\x2d\x63\x6f\x64\x65\x63\x0f\x6f\x72\x64"
  "\x65\x72\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x07\x6f\x72\x64\x76"
  "\x65\x63\x0b\x70\x6f\x73\x74\x67\x72\x65\x73\x71\x6c\x06\x70\x67"
  "\x73\x71\x6c\x08\x72\x62\x2d\x74\x72\x65\x65\x07\x72\x62\x74\x72"
  "\x65\x65\x08\x73\x74\x65\x70\x70\x65\x72\x06\x79\x73\x74\x65\x70"
  "\x0b\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x08\x70\x72\x6f\x63"
  "\x65\x73\x73\x17\x73\x79\x6e\x63\x68\x72\x6f\x6e\x6f\x75\x73\x2d"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x09\x73\x79\x6e\x63\x70"
  "\x72\x6f\x63\x08\x77\x74\x2d\x74\x72\x65\x65\x07\x77\x74\x74\x72"
  "\x65\x65\x0d\x07\x6e\x75\x6d\x62\x65\x72\x0a\x69\x6e\x74\x65\x72"
  "\x66\x61\x63\x65\x07\x6e\x75\x6d\x69\x6e\x74\x14\x64\x75\x6d\x6d"
  "\x79\x2d\x6f\x70\x74\x69\x6f\x6e\x2d\x6c\x6f\x61\x64\x65\x72\x02"
  "\x05\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x07\x05\x0c\x1a"
  "\x80\x80\x04\x0b\x18\x81\x81\x02\x0a\x16\x81\x81\x02\x09\x14\x81"
  "\x8d\x02\x08\x12\x81\x8b\x02\x07\x10\x81\x89\x02\x06\x0e\x81\x87"
  "\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02"
  "\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x19\x39";

SCHEME_OBJECT *
optiondb_so_data_d22cdb2718a640ed (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_optiondb_so_data_d22cdb2718a640ed [0]))), (sizeof (prog_optiondb_so_data_d22cdb2718a640ed)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_19]));
}

DECLARE_COMPILED_DATA_NS ("optiondb.so", optiondb_so_data_d22cdb2718a640ed)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("optiondb.so", "98d6e48624be003d")
