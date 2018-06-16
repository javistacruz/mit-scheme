/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_12 13
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define ENVIRONMENT_LABEL_3 43
#define DEBUGGING_LABEL_2 42
#define OBJECT_10 41
#define OBJECT_9 40
#define OBJECT_8 39
#define OBJECT_7 38
#define OBJECT_6 37
#define OBJECT_5 36
#define OBJECT_4 35
#define OBJECT_3 34
#define OBJECT_2 33
#define OBJECT_1 32
#define OBJECT_0 31
#define EXECUTE_CACHE_11 25
#define EXECUTE_CACHE_8 27
#define EXECUTE_CACHE_5 29
#define FREE_REFERENCES_LABEL_0 24
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
make_so_b783bd373e06f210 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto label_12;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto expression_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_10)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_16])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_12)
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

int
decl_make_so_b783bd373e06f210 (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("make.so", 11, decl_make_so_b783bd373e06f210, make_so_b783bd373e06f210)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_make_so_data_b783bd373e06f210 [445] =
  "\x2c\x02\x36\x1d\x0c\x0d\xb8\x0d\x08\x89\x0d\xc3\xb0\x0d\x08\x89"
  "\x0d\xb0\x08\x88\x0d\x07\x0c\x0c\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5d\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f\x6d\x61"
  "\x6b\x65\x2e\x69\x6e\x66\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\x0d"
  "\x66\x67\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x2c\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x3a\x66\x67\x67\x65\x6e\x2d\x75\x6e\x6d\x61"
  "\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70"
  "\x73\x2d\x65\x61\x72\x6c\x79\x3f\x13\x6c\x65\x78\x69\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0a\x74\x6f\x70\x2d"
  "\x6c\x65\x76\x65\x6c\x2c\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x2d\x64\x61\x74\x61\x2d\x66\x69\x6c\x65"
  "\x73\x2d\x61\x73\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73"
  "\x3f\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70\x72"
  "\x65\x73\x73\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x3f\x0a\x62"
  "\x61\x73\x65\x2f\x6d\x61\x6b\x65\x02\x43\x17\x73\x79\x6e\x63\x68"
  "\x72\x6f\x6e\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x03\x0c\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x03\x05"
  "\x6c\x6f\x61\x64\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x04\x0b\x18\x80\x80\x04\x0a\x16\x81\x81\x02\x09\x14"
  "\x81\x89\x02\x08\x12\x81\x83\x02\x07\x10\x81\x89\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x89\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x89"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x17\x2c";

SCHEME_OBJECT *
make_so_data_b783bd373e06f210 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_make_so_data_b783bd373e06f210 [0]))), (sizeof (prog_make_so_data_b783bd373e06f210)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_17]));
}

DECLARE_COMPILED_DATA_NS ("make.so", make_so_data_b783bd373e06f210)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("make.so", "808d16c039d28a7c")
