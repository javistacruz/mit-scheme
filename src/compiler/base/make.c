/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:12-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_12 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_16 17
#define LABEL_1_18 19
#define LABEL_1_19 21
#define ENVIRONMENT_LABEL_1_3 48
#define DEBUGGING_LABEL_1_2 47
#define OBJECT_1_9 46
#define OBJECT_1_8 45
#define OBJECT_1_7 44
#define OBJECT_1_6 43
#define OBJECT_1_5 42
#define OBJECT_1_4 41
#define OBJECT_1_3 40
#define OBJECT_1_2 39
#define OBJECT_1_1 38
#define OBJECT_1_0 37
#define EXECUTE_CACHE_1_20 23
#define EXECUTE_CACHE_1_17 25
#define EXECUTE_CACHE_1_15 27
#define EXECUTE_CACHE_1_14 29
#define EXECUTE_CACHE_1_13 31
#define EXECUTE_CACHE_1_11 33
#define EXECUTE_CACHE_1_6 35
#define FREE_REFERENCES_LABEL_1_0 22
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
make_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_1_3]))
    goto label_16;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_15)
  (Wrd14.Obj) = (current_block [OBJECT_1_5]);
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_16)
  (Wrd13.Obj) = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_15;

DEFLABEL (lambda_14)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define ENVIRONMENT_LABEL_3 12
#define DEBUGGING_LABEL_2 11
#define PURIFICATION_ROOT 10
#define OBJECT_1 9
#define OBJECT_0 8
#define FREE_REFERENCES_LABEL_0 8
#define NUMBER_OF_LINKER_SECTIONS_1 0

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
make_so_2c252a0a4ea8cfe7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4);
      goto label_2;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_0)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_3)
  {
    SCHEME_OBJECT * sub_block = (OBJECT_ADDRESS (current_block [OBJECT_1]));
    (sub_block [48]) = (Rrb [REGBLOCK_ENV]);
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_4])), sub_block, (& (sub_block [22])), 1);
  }

DEFLABEL (label_2)
  Rvl = (current_block [OBJECT_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_4
}

int
decl_make_so_2c252a0a4ea8cfe7 (void)
{
  DECLARE_SUBCODE ("make_so_code_1", 10, make_so_code_1);
  return (0);
}

DECLARE_COMPILED_CODE ("make.so", 3, decl_make_so_2c252a0a4ea8cfe7, make_so_2c252a0a4ea8cfe7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_make_so_data_2c252a0a4ea8cfe7 [510] =
  "\x34\x02\x4d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x0d\x0d\x08\x89"
  "\x0d\x0c\x84\x02\x08\x89\x0c\x1d\x0c\x0d\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb8\x98\x88\xb0\xb0\x2a\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x6d"
  "\x61\x6b\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x12\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x08"
  "\x72\x75\x6e\x74\x69\x6d\x65\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x69\x6e\x66\x6f\x1e\x77\x69\x74\x68\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74\x69\x6e\x67\x2d\x72"
  "\x75\x6c\x65\x06\x4c\x49\x41\x52\x2f\x77\x05\x4c\x49\x41\x52\x08"
  "\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\x08\x72\x62\x2d\x74\x72\x65"
  "\x65\x09\x63\x6f\x6d\x70\x72\x65\x73\x73\x03\x0c\x6c\x6f\x61\x64"
  "\x2d\x6f\x70\x74\x69\x6f\x6e\x03\x16\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x04\x1e"
  "\x61\x64\x64\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x21\x04\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x03\x11\x6c\x6f"
  "\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x73\x65\x74\x02\x1b"
  "\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x0e\x2d\x3e\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x08\x0d\x16\x81\x8f\x02\x0c"
  "\x14\x81\x8b\x02\x0b\x12\x81\x89\x02\x0a\x10\x81\x87\x02\x09\x0e"
  "\x82\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x83"
  "\x02\x05\x06\x81\x83\x02\x04\x04\x83\x02\x15\x31\x04\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x0d";

SCHEME_OBJECT *
make_so_data_2c252a0a4ea8cfe7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_make_so_data_2c252a0a4ea8cfe7 [0]))), (sizeof (prog_make_so_data_2c252a0a4ea8cfe7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_6]));
}

DECLARE_COMPILED_DATA_NS ("make.so", make_so_data_2c252a0a4ea8cfe7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("make.so", "f68e300bdc219084")
