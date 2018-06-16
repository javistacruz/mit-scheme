/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 9
#define DEBUGGING_LABEL_1_2 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
make_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_9 7
#define LABEL_10 9
#define LABEL_11 11
#define ENVIRONMENT_LABEL_3 26
#define DEBUGGING_LABEL_2 25
#define PURIFICATION_ROOT 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define EXECUTE_CACHE_8 13
#define EXECUTE_CACHE_7 15
#define EXECUTE_CACHE_6 17
#define FREE_REFERENCES_LABEL_0 12
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
make_so_af31f6376a32e66a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_10);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_11);
      goto expression_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_2)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_5)
  {
    SCHEME_OBJECT * sub_block = (OBJECT_ADDRESS (current_block [OBJECT_4]));
    (sub_block [9]) = (Rrb [REGBLOCK_ENV]);
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), sub_block, (& (sub_block [4])), 1);
  }

DEFLABEL (label_4)
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (* (Rsp++));
  (Rrb [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
}

int
decl_make_so_af31f6376a32e66a (void)
{
  DECLARE_SUBCODE ("make_so_code_1", 1, make_so_code_1);
  return (0);
}

DECLARE_COMPILED_CODE ("make.so", 5, decl_make_so_af31f6376a32e66a, make_so_af31f6376a32e66a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_make_so_data_af31f6376a32e66a [297] =
  "\x1b\x02\x31\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x28\x0d\x23\x22"
  "\x29\x21\x17\x2b\xb8\x98\x88\xb0\x0c\x82\x83\x08\x89\x0c\xb0\x2a"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x72\x65\x66\x2f\x2e\x2f\x6d\x61\x6b\x65"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x05\x63\x72\x65\x66\x03"
  "\x11\x6c\x6f\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x73\x65"
  "\x74\x02\x06\x04\x82\x02\x03\x0a\x05\x43\x52\x45\x46\x06\x63\x72"
  "\x65\x66\x2f\x04\x03\x13\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x62"
  "\x72\x61\x72\x79\x2d\x75\x72\x69\x04\x1e\x61\x64\x64\x2d\x73\x75"
  "\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x21\x04\x15\x77\x69\x74\x68\x2d\x6c\x6f"
  "\x61\x64\x65\x72\x2d\x62\x61\x73\x65\x2d\x75\x72\x69\x04\x05\x0c"
  "\x80\x80\x04\x04\x0a\x81\x81\x02\x03\x08\x81\x81\x02\x02\x06\x81"
  "\x89\x02\x01\x04\x81\x83\x02\x0b\x1b";

SCHEME_OBJECT *
make_so_data_af31f6376a32e66a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_make_so_data_af31f6376a32e66a [0]))), (sizeof (prog_make_so_data_af31f6376a32e66a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_11]));
}

DECLARE_COMPILED_DATA_NS ("make.so", make_so_data_af31f6376a32e66a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("make.so", "86afe21ec5d301b4")
