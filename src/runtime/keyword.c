/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 18
#define DEBUGGING_LABEL_1_2 17
#define OBJECT_1_1 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_8 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
keyword_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto string__keyword_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__keyword_5)
DEFLABEL (string__keyword_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_0 15
#define EXECUTE_CACHE_2_9 9
#define EXECUTE_CACHE_2_8 11
#define EXECUTE_CACHE_2_6 13
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
keyword_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto keywordP_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (keywordP_5)
DEFLABEL (keywordP_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd7.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

INVOKE_INTERFACE_TARGET_1
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
keyword_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto guarantee_keyword_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_keyword_4)
DEFLABEL (guarantee_keyword_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 11
#define DEBUGGING_LABEL_4_2 10
#define OBJECT_4_2 9
#define OBJECT_4_1 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
keyword_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto error_not_keyword_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_keyword_5)
DEFLABEL (error_not_keyword_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_4_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_1 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_9 9
#define EXECUTE_CACHE_5_8 11
#define EXECUTE_CACHE_5_6 13
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
keyword_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto keyword__string_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (keyword__string_5)
DEFLABEL (keyword__string_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

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
keyword_so_be95b79c5bdf5da0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
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

static const struct liarc_code_S arr_decl_keyword_so_be95b79c5bdf5da0 [5] =
  {
    { "keyword_so_code_1", 3, keyword_so_code_1 },
    { "keyword_so_code_2", 3, keyword_so_code_2 },
    { "keyword_so_code_3", 2, keyword_so_code_3 },
    { "keyword_so_code_4", 1, keyword_so_code_4 },
    { "keyword_so_code_5", 3, keyword_so_code_5 }
  };

int
decl_keyword_so_be95b79c5bdf5da0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_keyword_so_be95b79c5bdf5da0);
  return (0);
}

DECLARE_COMPILED_CODE ("keyword.so", 3, decl_keyword_so_be95b79c5bdf5da0, keyword_so_be95b79c5bdf5da0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_keyword_so_data_be95b79c5bdf5da0 [636] =
  "\x1a\x0d\x94\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\xb9\x0d\xba"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbb\x1d\xb0\x82\x88\xb1\x28\x0d\x28\x0d\xbc\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x1d\x28\x0d\xbe"
  "\x28\x0d\xbf\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x06\x1d\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x02\x0d\xb8\x28\x0d\x1c\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbc\x9c\x1c\x88\x1b\xb4\x2a\x1b\x2a\x1b\x2a\xb5"
  "\x2a\xb3\x2a\xb1\x9d\xb0\xb7\x1b\xb6\xb2\x0d\x9d\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x56\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x6b\x65\x79\x77\x6f\x72\x64\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x0b\x23\x5b\x6b\x65\x79\x77\x6f\x72\x64\x5d\x10"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6b\x65\x79\x77\x6f\x72\x64\x04"
  "\x11\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x73\x79\x6d\x62\x6f\x6c"
  "\x04\x06\x08\x81\x83\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x07"
  "\x13\x02\x03\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d"
  "\x62\x6f\x6c\x3f\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d"
  "\x65\x04\x0f\x73\x74\x72\x69\x6e\x67\x2d\x70\x72\x65\x66\x69\x78"
  "\x3f\x04\x09\x08\x81\x85\x02\x08\x06\x81\x83\x02\x07\x04\x83\x04"
  "\x07\x12\x02\x02\x03\x09\x6b\x65\x79\x77\x6f\x72\x64\x3f\x04\x12"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x6b\x65\x79\x77\x6f\x72"
  "\x64\x03\x0b\x06\x81\x85\x02\x0a\x04\x84\x04\x05\x0e\x09\x02\x08"
  "\x08\x6b\x65\x79\x77\x6f\x72\x64\x05\x1a\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x02\x0c\x04\x84\x04\x03\x0c\x0a\x02\x0b\x10\x6b\x65"
  "\x79\x77\x6f\x72\x64\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x12\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6b\x65\x79\x77\x6f\x72\x64"
  "\x0b\x03\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69\x6c\x04"
  "\x0f\x08\x81\x83\x02\x0e\x06\x81\x83\x02\x0d\x04\x83\x04\x07\x13"
  "\x0c\x0c\x04\x0a\x04\x09\x04\x04\x04\x0b\x0f\x6b\x65\x79\x77\x6f"
  "\x72\x64\x2d\x70\x72\x65\x66\x69\x78\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
keyword_so_data_be95b79c5bdf5da0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_keyword_so_data_be95b79c5bdf5da0 [0]))), (sizeof (prog_keyword_so_data_be95b79c5bdf5da0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("keyword.so", keyword_so_data_be95b79c5bdf5da0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("keyword.so", "38da1afd29efb89b")
