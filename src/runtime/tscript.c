/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:57-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_9 7
#define LABEL_1_7 9
#define LABEL_1_10 11
#define ENVIRONMENT_LABEL_1_3 26
#define DEBUGGING_LABEL_1_2 25
#define OBJECT_1_1 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_13 13
#define EXECUTE_CACHE_1_12 15
#define EXECUTE_CACHE_1_11 17
#define EXECUTE_CACHE_1_8 19
#define EXECUTE_CACHE_1_6 21
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tscript_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto transcript_on_6;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcript_on_9)
DEFLABEL (transcript_on_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_1_0])))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_9);

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define ENVIRONMENT_LABEL_2_3 22
#define DEBUGGING_LABEL_2_2 21
#define OBJECT_2_1 20
#define OBJECT_2_0 19
#define EXECUTE_CACHE_2_11 11
#define EXECUTE_CACHE_2_10 13
#define EXECUTE_CACHE_2_8 15
#define EXECUTE_CACHE_2_6 17
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tscript_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto transcript_off_6;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transcript_off_9)
DEFLABEL (transcript_off_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_2_0])))
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd11.Obj) = Rvl;

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (label_12)
  Wrd11 = Wrd8;
  Rsp = (& (Rsp [1]));
  goto label_11;

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
tscript_so_1878d5646fe2fc34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
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

static const struct liarc_code_S arr_decl_tscript_so_1878d5646fe2fc34 [2] =
  {
    { "tscript_so_code_1", 5, tscript_so_code_1 },
    { "tscript_so_code_2", 4, tscript_so_code_2 }
  };

int
decl_tscript_so_1878d5646fe2fc34 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_tscript_so_1878d5646fe2fc34);
  return (0);
}

DECLARE_COMPILED_CODE ("tscript.so", 3, decl_tscript_so_1878d5646fe2fc34, tscript_so_1878d5646fe2fc34)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_tscript_so_data_1878d5646fe2fc34 [447] =
  "\x1e\x06\x59\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x1d\x28\x0d\xb9"
  "\x28\x0d\xba\x28\x0d\x28\x0d\x28\x0d\xbb\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x1d\x1d\x28"
  "\xb1\x28\xb2\x28\xb3\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbb\x99\xba\x88\xb2\xb3\x2a\xb4\x2a\x99\x0d\x0d\x99"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x74\x73\x63\x72\x69\x70\x74\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1e\x54\x72\x61\x6e\x73\x63\x72"
  "\x69\x70\x74\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x74\x75\x72\x6e"
  "\x65\x64\x20\x6f\x6e\x2e\x08\x02\x12\x6e\x65\x61\x72\x65\x73\x74"
  "\x2d\x63\x6d\x64\x6c\x2f\x70\x6f\x72\x74\x03\x10\x70\x6f\x72\x74"
  "\x2f\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x03\x11\x6f\x70\x65"
  "\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x03\x06\x65"
  "\x72\x72\x6f\x72\x04\x15\x73\x65\x74\x2d\x70\x6f\x72\x74\x2f\x74"
  "\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x21\x06\x08\x0c\x81\x87\x02"
  "\x07\x0a\x81\x87\x02\x06\x08\x81\x87\x02\x05\x06\x84\x04\x04\x04"
  "\x81\x85\x02\x0b\x1b\x02\x02\x08\x02\x03\x04\x03\x0b\x63\x6c\x6f"
  "\x73\x65\x2d\x70\x6f\x72\x74\x05\x0c\x0a\x81\x85\x02\x0b\x08\x81"
  "\x83\x02\x0a\x06\x83\x02\x09\x04\x81\x83\x02\x09\x17\x06\x06\x0f"
  "\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x2d\x6f\x66\x66\x0e\x74"
  "\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x2d\x6f\x6e\x05\x10\x64\x65"
  "\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08"
  "\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
tscript_so_data_1878d5646fe2fc34 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_tscript_so_data_1878d5646fe2fc34 [0]))), (sizeof (prog_tscript_so_data_1878d5646fe2fc34)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("tscript.so", tscript_so_data_1878d5646fe2fc34)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("tscript.so", "1daa50c5efefc485")
