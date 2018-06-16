/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_5 3
#define LABEL_6 5
#define ENVIRONMENT_LABEL_3 11
#define DEBUGGING_LABEL_2 10
#define OBJECT_0 9
#define EXECUTE_CACHE_4 7
#define FREE_REFERENCES_LABEL_0 6
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
ed_ffi_so_196d44e7d9a15f93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5);
      goto label_2;

    case 1:
      current_block = (Rpc - LABEL_6);
      goto expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_0)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_5])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_2)
  (Wrd5.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4]));

INVOKE_INTERFACE_TARGET_4
}

int
decl_ed_ffi_so_196d44e7d9a15f93 (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("ed-ffi.so", 2, decl_ed_ffi_so_196d44e7d9a15f93, ed_ffi_so_196d44e7d9a15f93)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ed_ffi_so_data_196d44e7d9a15f93 [4471] =
  "\xac\x01\x07\xb1\x09\x1d\x0c\x0c\x0d\xb8\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x08\x88\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\xb9\x0d\x08\x8a"
  "\x08\x89\x0c\xb0\x0d\xba\x08\x89\x08\x89\x0c\xb0\x0d\xbb\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\xbc\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\xbd\x0d\x08\x8a\x08\x89\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c"
  "\xb0\xb5\x0d\x08\x8a\x08\x89\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c"
  "\xb0\xb5\xb4\x08\x8a\x08\x89\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c"
  "\xb0\xb5\x0d\x08\x8a\x08\x89\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c"
  "\xb0\xb5\x0d\x08\x8a\x08\x89\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c"
  "\xb0\xb5\x0d\x08\x8a\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08"
  "\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08"
  "\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08"
  "\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08"
  "\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\xb1\x08"
  "\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08"
  "\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\x0d\x08\x88\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\xb2\x08"
  "\x89\x08\x89\x0c\xb0\x0d\xbc\x08\x89\x08\x89\x0c\xb0\xb3\x08\x89"
  "\x08\x89\x0c\xb0\xb4\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\xbc\x0d\x08\x8a\x08\x89\x0c\xb0\xb2\x08\x89\x08\x89\x0c\xb0"
  "\xb3\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\xb5\x0d"
  "\x08\x8a\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\xbb\x08\x89\x08\x89\x0c\xb0\xb3"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\xbb\x08\x89\x08"
  "\x89\x0c\xb0\xb3\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\xbb\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\xb3"
  "\x0d\x08\x8a\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\xb3\x08"
  "\x89\x08\x89\x0c\xb0\xb3\x08\x89\x08\x89\x0c\xb0\xb3\x08\x89\x08"
  "\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08"
  "\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08"
  "\x89\x0c\xb0\xb4\x08\x89\x08\x89\x0c\xb0\xb1\x0d\x08\x8a\x08\x89"
  "\x0c\xb0\xb5\x0d\x08\x8a\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89"
  "\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89"
  "\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0"
  "\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08"
  "\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08"
  "\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c"
  "\xb0\xb4\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x0c\xb0\x0d"
  "\x08\x89\x08\x89\x0c\xb0\x0d\x08\x89\x08\x89\x17\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x65\x64\x2d\x66\x66\x69\x2e\x69\x6e\x66\x06\x79\x73\x74\x65"
  "\x70\x08\x72\x75\x6e\x74\x69\x6d\x65\x08\x73\x74\x65\x70\x70\x65"
  "\x72\x06\x78\x65\x76\x61\x6c\x14\x65\x78\x74\x65\x6e\x64\x65\x64"
  "\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c\x09\x78\x31\x31\x67"
  "\x72\x61\x70\x68\x0b\x78\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x07"
  "\x77\x74\x74\x72\x65\x65\x08\x77\x74\x2d\x74\x72\x65\x65\x07\x77"
  "\x72\x6b\x64\x69\x72\x12\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x05\x77\x69\x6e\x64\x0c\x73\x74\x61"
  "\x74\x65\x2d\x73\x70\x61\x63\x65\x06\x77\x68\x65\x72\x65\x16\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x69\x6e\x73\x70\x65"
  "\x63\x74\x6f\x72\x08\x76\x65\x72\x73\x69\x6f\x6e\x07\x76\x65\x63"
  "\x74\x6f\x72\x07\x76\x65\x63\x74\x6f\x72\x06\x75\x74\x61\x62\x73"
  "\x11\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x61\x62\x6c\x65"
  "\x73\x07\x75\x73\x72\x69\x6e\x74\x0f\x75\x73\x65\x72\x2d\x69\x6e"
  "\x74\x65\x72\x66\x61\x63\x65\x07\x75\x72\x74\x72\x61\x70\x0f\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x04\x75\x72"
  "\x6c\x04\x75\x72\x69\x06\x75\x70\x72\x6f\x63\x0a\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x07\x75\x6e\x78\x70\x74\x68\x09\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x05\x75\x6e\x69\x78\x07\x75\x6e\x78\x70\x72"
  "\x6d\x0e\x6f\x73\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x07"
  "\x75\x6e\x78\x64\x69\x72\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x06\x75\x6e\x73\x79\x6e\x0b\x75\x6e\x73\x79\x6e\x74\x61\x78\x65"
  "\x72\x07\x75\x6e\x70\x61\x72\x73\x09\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x08\x75\x6e\x69\x63\x6f\x64\x65\x08\x75\x6e\x69\x63\x6f\x64"
  "\x65\x07\x75\x65\x72\x72\x6f\x72\x11\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x65\x72\x72\x6f\x72\x73\x07\x75\x65\x6e\x76\x69\x72"
  "\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x06\x75\x64\x61"
  "\x74\x61\x0f\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x64\x61\x74"
  "\x61\x08\x74\x76\x65\x63\x74\x6f\x72\x0e\x74\x61\x67\x67\x65\x64"
  "\x2d\x76\x65\x63\x74\x6f\x72\x06\x74\x74\x79\x69\x6f\x11\x63\x6f"
  "\x6e\x73\x6f\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x08\x74"
  "\x73\x63\x72\x69\x70\x74\x0b\x74\x72\x61\x6e\x73\x63\x72\x69\x70"
  "\x74\x07\x74\x68\x72\x65\x61\x64\x07\x74\x68\x72\x65\x61\x64\x07"
  "\x73\x79\x73\x74\x65\x6d\x07\x73\x79\x73\x74\x65\x6d\x07\x73\x79"
  "\x73\x6d\x61\x63\x0e\x73\x79\x73\x74\x65\x6d\x2d\x6d\x61\x63\x72"
  "\x6f\x73\x07\x73\x79\x73\x63\x6c\x6b\x0d\x73\x79\x73\x74\x65\x6d"
  "\x2d\x63\x6c\x6f\x63\x6b\x12\x73\x79\x6e\x74\x61\x78\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x73\x07\x73\x79\x6e\x74\x61\x78\x0b"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x73\x0d\x73\x79\x6e\x74\x61"
  "\x78\x2d\x72\x75\x6c\x65\x73\x0d\x73\x79\x6e\x74\x61\x78\x2d\x72"
  "\x75\x6c\x65\x73\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6f\x75\x74\x70"
  "\x75\x74\x07\x6f\x75\x74\x70\x75\x74\x0d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x69\x74\x65\x6d\x73\x06\x69\x74\x65\x6d\x73\x13\x73\x79\x6e"
  "\x74\x61\x78\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0f"
  "\x73\x79\x6e\x74\x61\x78\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x08\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x13\x73\x79\x6e\x74\x61\x78\x2d\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x0c\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x73\x13\x73\x79\x6e\x74\x61\x78\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x0c\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x10\x73\x79\x6e\x74\x61\x78\x2d\x63\x6c\x61\x73"
  "\x73\x69\x66\x79\x09\x63\x6c\x61\x73\x73\x69\x66\x79\x0d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x63\x68\x65\x63\x6b\x06\x63\x68\x65\x63\x6b"
  "\x07\x73\x79\x6e\x74\x61\x78\x0a\x74\x6f\x70\x2d\x6c\x65\x76\x65"
  "\x6c\x09\x73\x79\x6e\x63\x70\x72\x6f\x63\x17\x73\x79\x6e\x63\x68"
  "\x72\x6f\x6e\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x07\x73\x79\x6d\x62\x6f\x6c\x07\x73\x79\x6d\x62\x6f\x6c\x06"
  "\x73\x77\x61\x6e\x6b\x06\x73\x77\x61\x6e\x6b\x11\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x11\x73\x74\x72"
  "\x75\x63\x74\x75\x72\x65\x2d\x70\x61\x72\x73\x65\x72\x09\x73\x74"
  "\x72\x69\x6e\x67\x69\x6f\x10\x73\x74\x72\x69\x6e\x67\x2d\x69\x2f"
  "\x6f\x2d\x70\x6f\x72\x74\x07\x73\x74\x72\x69\x6e\x67\x07\x73\x74"
  "\x72\x69\x6e\x67\x07\x73\x74\x72\x65\x61\x6d\x07\x73\x74\x72\x65"
  "\x61\x6d\x09\x73\x74\x61\x72\x62\x61\x73\x65\x12\x73\x74\x61\x72"
  "\x62\x61\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x07\x73\x6f"
  "\x63\x6b\x65\x74\x07\x73\x6f\x63\x6b\x65\x74\x06\x73\x66\x69\x6c"
  "\x65\x10\x73\x69\x6d\x70\x6c\x65\x2d\x66\x69\x6c\x65\x2d\x6f\x70"
  "\x73\x06\x73\x64\x61\x74\x61\x0b\x73\x63\x6f\x64\x65\x2d\x64\x61"
  "\x74\x61\x06\x73\x63\x6f\x6d\x62\x11\x73\x63\x6f\x64\x65\x2d\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x6f\x72\x06\x73\x63\x6f\x64\x65\x06"
  "\x73\x63\x6f\x64\x65\x05\x73\x63\x61\x6e\x0b\x73\x63\x6f\x64\x65"
  "\x2d\x73\x63\x61\x6e\x07\x73\x61\x76\x72\x65\x73\x0d\x73\x61\x76"
  "\x65\x2f\x72\x65\x73\x74\x6f\x72\x65\x07\x72\x67\x78\x63\x6d\x70"
  "\x1c\x72\x65\x67\x75\x6c\x61\x72\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x10\x72\x66\x63"
  "\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x10\x72\x66\x63"
  "\x32\x38\x32\x32\x2d\x68\x65\x61\x64\x65\x72\x73\x05\x72\x65\x78"
  "\x70\x05\x72\x65\x78\x70\x04\x72\x65\x70\x04\x72\x65\x70\x08\x72"
  "\x65\x67\x73\x65\x78\x70\x14\x72\x65\x67\x75\x6c\x61\x72\x2d\x73"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x07\x72\x65\x67\x65\x78"
  "\x70\x13\x72\x65\x67\x75\x6c\x61\x72\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x08\x72\x65\x63\x73\x6c\x6f\x74\x13\x72\x65\x63"
  "\x6f\x72\x64\x2d\x73\x6c\x6f\x74\x2d\x61\x63\x63\x65\x73\x73\x07"
  "\x72\x65\x63\x6f\x72\x64\x07\x72\x65\x63\x6f\x72\x64\x07\x72\x62"
  "\x74\x72\x65\x65\x08\x72\x62\x2d\x74\x72\x65\x65\x07\x72\x61\x6e"
  "\x64\x6f\x6d\x0e\x72\x61\x6e\x64\x6f\x6d\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x06\x71\x75\x65\x75\x65\x0d\x73\x69\x6d\x70\x6c\x65\x2d\x71"
  "\x75\x65\x75\x65\x06\x71\x73\x6f\x72\x74\x0b\x71\x75\x69\x63\x6b"
  "\x2d\x73\x6f\x72\x74\x07\x70\x72\x6f\x70\x32\x64\x0c\x32\x64\x2d"
  "\x70\x72\x6f\x70\x65\x72\x74\x79\x07\x70\x72\x6f\x70\x31\x64\x0c"
  "\x31\x64\x2d\x70\x72\x6f\x70\x65\x72\x74\x79\x08\x70\x72\x6f\x63"
  "\x65\x73\x73\x0b\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x07\x70"
  "\x72\x67\x63\x6f\x70\x0f\x70\x72\x6f\x67\x72\x61\x6d\x2d\x63\x6f"
  "\x70\x69\x65\x72\x03\x70\x70\x0f\x70\x72\x65\x74\x74\x79\x2d\x70"
  "\x72\x69\x6e\x74\x65\x72\x05\x70\x6f\x72\x74\x05\x70\x6f\x72\x74"
  "\x07\x70\x6f\x70\x6c\x61\x74\x0b\x70\x6f\x70\x75\x6c\x61\x74\x69"
  "\x6f\x6e\x06\x70\x67\x73\x71\x6c\x0b\x70\x6f\x73\x74\x67\x72\x65"
  "\x73\x71\x6c\x07\x70\x61\x74\x68\x6e\x6d\x07\x70\x61\x72\x74\x61"
  "\x62\x0d\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x0e\x70"
  "\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x0e\x70\x61\x72"
  "\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x06\x70\x61\x72\x73\x65"
  "\x07\x70\x61\x72\x73\x65\x72\x07\x70\x61\x63\x6b\x61\x67\x08\x70"
  "\x61\x63\x6b\x61\x67\x65\x07\x6f\x75\x74\x70\x75\x74\x0c\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x08\x6f\x73\x32\x77\x69\x6e"
  "\x70\x16\x6f\x73\x32\x2d\x77\x69\x6e\x64\x6f\x77\x2d\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x73\x07\x6f\x73\x32\x70\x72\x6d\x09\x6f"
  "\x73\x32\x67\x72\x61\x70\x68\x0d\x6f\x73\x32\x2d\x67\x72\x61\x70"
  "\x68\x69\x63\x73\x07\x6f\x73\x32\x64\x69\x72\x09\x6f\x73\x32\x63"
  "\x74\x79\x70\x65\x07\x6f\x72\x64\x76\x65\x63\x0f\x6f\x72\x64\x65"
  "\x72\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x07\x6f\x70\x74\x69\x6f"
  "\x6e\x08\x6f\x70\x74\x69\x6f\x6e\x73\x07\x6e\x75\x6d\x70\x61\x72"
  "\x0e\x6e\x75\x6d\x62\x65\x72\x2d\x70\x61\x72\x73\x65\x72\x07\x6e"
  "\x75\x6d\x69\x6e\x74\x07\x6e\x75\x6d\x62\x65\x72\x0a\x69\x6e\x74"
  "\x65\x72\x66\x61\x63\x65\x06\x6e\x74\x70\x72\x6d\x06\x6e\x74\x64"
  "\x69\x72\x06\x6d\x73\x6f\x72\x74\x0b\x6d\x65\x72\x67\x65\x2d\x73"
  "\x6f\x72\x74\x0b\x6d\x69\x74\x2d\x73\x79\x6e\x74\x61\x78\x04\x6d"
  "\x69\x74\x0b\x6d\x69\x74\x2d\x6d\x61\x63\x72\x6f\x73\x0b\x6d\x69"
  "\x74\x2d\x6d\x61\x63\x72\x6f\x73\x0b\x6d\x69\x6d\x65\x2d\x63\x6f"
  "\x64\x65\x63\x0b\x6d\x69\x6d\x65\x2d\x63\x6f\x64\x65\x63\x05\x6c"
  "\x6f\x61\x64\x05\x6c\x6f\x61\x64\x05\x6c\x69\x73\x74\x05\x6c\x69"
  "\x73\x74\x07\x6c\x61\x6d\x62\x64\x78\x13\x61\x6c\x74\x65\x72\x6e"
  "\x61\x74\x69\x76\x65\x2d\x6c\x61\x6d\x62\x64\x61\x0c\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x6c\x69\x73\x74\x0c\x6c\x61\x6d\x62\x64\x61\x2d"
  "\x6c\x69\x73\x74\x07\x6c\x61\x6d\x62\x64\x61\x13\x6c\x61\x6d\x62"
  "\x64\x61\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x69\x6f\x6e\x09\x6b"
  "\x72\x79\x70\x74\x64\x75\x6d\x06\x6b\x72\x79\x70\x74\x06\x6b\x72"
  "\x79\x70\x74\x03\x69\x6f\x0d\x70\x72\x69\x6d\x69\x74\x69\x76\x65"
  "\x2d\x69\x6f\x07\x69\x6e\x74\x72\x70\x74\x12\x69\x6e\x74\x65\x72"
  "\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x06\x69\x6e\x70"
  "\x75\x74\x0b\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x07\x69\x6e"
  "\x66\x75\x74\x6c\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e"
  "\x66\x6f\x07\x69\x6e\x66\x73\x74\x72\x07\x69\x6c\x6c\x64\x65\x66"
  "\x14\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x73\x07\x68\x74\x74\x70\x69\x6f\x09\x68\x74\x74\x70"
  "\x2d\x69\x2f\x6f\x0c\x68\x74\x74\x70\x2d\x73\x79\x6e\x74\x61\x78"
  "\x0c\x68\x74\x74\x70\x2d\x73\x79\x6e\x74\x61\x78\x0c\x68\x74\x74"
  "\x70\x2d\x63\x6c\x69\x65\x6e\x74\x0c\x68\x74\x74\x70\x2d\x63\x6c"
  "\x69\x65\x6e\x74\x10\x68\x74\x6d\x6c\x2d\x66\x6f\x72\x6d\x2d\x63"
  "\x6f\x64\x65\x63\x10\x68\x74\x6d\x6c\x2d\x66\x6f\x72\x6d\x2d\x63"
  "\x6f\x64\x65\x63\x07\x68\x69\x73\x74\x72\x79\x08\x68\x69\x73\x74"
  "\x6f\x72\x79\x07\x68\x61\x73\x68\x74\x62\x0b\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x05\x68\x61\x73\x68\x05\x68\x61\x73\x68\x09"
  "\x67\x72\x61\x70\x68\x69\x63\x73\x09\x67\x72\x61\x70\x68\x69\x63"
  "\x73\x07\x67\x6c\x6f\x62\x61\x6c\x15\x6d\x69\x73\x63\x65\x6c\x6c"
  "\x61\x6e\x65\x6f\x75\x73\x2d\x67\x6c\x6f\x62\x61\x6c\x07\x67\x65"
  "\x6e\x74\x61\x67\x12\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x07\x67\x65\x6e\x73\x79\x6d\x07\x67\x65"
  "\x6e\x73\x79\x6d\x08\x67\x65\x6e\x6d\x75\x6c\x74\x0c\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x78\x65\x72\x06\x67\x65\x6e\x69\x6f\x11\x67"
  "\x65\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x08"
  "\x67\x65\x6e\x65\x72\x69\x63\x08\x67\x65\x6e\x65\x71\x68\x74\x09"
  "\x67\x65\x6e\x63\x61\x63\x68\x65\x05\x67\x64\x62\x6d\x05\x67\x64"
  "\x62\x6d\x07\x67\x64\x61\x74\x61\x62\x10\x67\x6c\x6f\x62\x61\x6c"
  "\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x07\x67\x63\x73\x74\x61\x74"
  "\x0e\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x73\x07\x67"
  "\x63\x6e\x6f\x74\x65\x10\x67\x63\x2d\x6e\x6f\x74\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x08\x67\x63\x66\x69\x6e\x61\x6c\x0d\x67\x63"
  "\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x07\x67\x63\x64\x65\x6d"
  "\x6e\x0b\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x73\x03\x67\x63\x12"
  "\x67\x61\x72\x62\x61\x67\x65\x2d\x63\x6f\x6c\x6c\x65\x63\x74\x6f"
  "\x72\x07\x66\x72\x61\x6d\x65\x78\x0f\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x69\x6e\x66\x6f\x07\x66\x6f\x72\x6d\x61\x74\x07\x66"
  "\x6f\x72\x6d\x61\x74\x07\x66\x69\x78\x61\x72\x74\x12\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x07\x66"
  "\x69\x6c\x65\x69\x6f\x0e\x66\x69\x6c\x65\x2d\x69\x2f\x6f\x2d\x70"
  "\x6f\x72\x74\x04\x66\x66\x69\x04\x66\x66\x69\x07\x65\x76\x65\x6e"
  "\x74\x73\x12\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62"
  "\x75\x74\x6f\x72\x06\x65\x72\x72\x6f\x72\x0e\x65\x72\x72\x6f\x72"
  "\x2d\x68\x61\x6e\x64\x6c\x65\x72\x07\x65\x71\x75\x61\x6c\x73\x09"
  "\x65\x71\x75\x61\x6c\x69\x74\x79\x06\x65\x6d\x61\x63\x73\x10\x65"
  "\x6d\x61\x63\x73\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x08\x64"
  "\x72\x61\x67\x6f\x6e\x34\x07\x64\x6f\x73\x70\x74\x68\x04\x64\x6f"
  "\x73\x07\x64\x65\x66\x73\x74\x72\x0a\x64\x65\x66\x73\x74\x72\x75"
  "\x63\x74\x06\x64\x65\x62\x75\x67\x09\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x07\x64\x62\x67\x75\x74\x6c\x13\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x2d\x75\x74\x69\x6c\x69\x74\x69\x65\x73\x07\x64\x62\x67\x63"
  "\x6d\x64\x16\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x63\x6f\x6d\x6d"
  "\x61\x6e\x64\x2d\x6c\x6f\x6f\x70\x07\x64\x61\x74\x69\x6d\x65\x0a"
  "\x64\x61\x74\x65\x2f\x74\x69\x6d\x65\x07\x63\x72\x79\x70\x74\x6f"
  "\x07\x63\x72\x79\x70\x74\x6f\x07\x63\x70\x72\x65\x73\x73\x09\x63"
  "\x6f\x6d\x70\x72\x65\x73\x73\x07\x63\x70\x6f\x69\x6e\x74\x0e\x63"
  "\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x07\x63\x6f\x6e"
  "\x74\x69\x6e\x0d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e"
  "\x07\x63\x6f\x6e\x70\x61\x72\x14\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x70\x61\x72\x73\x65\x72\x07\x63\x6f\x64\x77"
  "\x6c\x6b\x0d\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x07"
  "\x63\x68\x72\x73\x79\x6e\x0c\x63\x68\x61\x72\x2d\x73\x79\x6e\x74"
  "\x61\x78\x07\x63\x68\x72\x73\x65\x74\x0e\x63\x68\x61\x72\x61\x63"
  "\x74\x65\x72\x2d\x73\x65\x74\x05\x63\x68\x61\x72\x0a\x63\x68\x61"
  "\x72\x61\x63\x74\x65\x72\x05\x62\x6f\x6f\x74\x11\x62\x6f\x6f\x74"
  "\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x06\x62\x6f\x6f"
  "\x6c\x65\x08\x62\x6f\x6f\x6c\x65\x61\x6e\x09\x62\x6c\x6f\x77\x66"
  "\x69\x73\x68\x09\x62\x6c\x6f\x77\x66\x69\x73\x68\x07\x62\x69\x74"
  "\x73\x74\x72\x0b\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x06\x61"
  "\x72\x69\x74\x68\x08\x61\x70\x72\x6f\x70\x6f\x73\x08\x61\x70\x72"
  "\x6f\x70\x6f\x73\x06\x61\x70\x70\x6c\x79\x06\x61\x70\x70\x6c\x79"
  "\x07\x61\x64\x76\x69\x63\x65\x07\x61\x64\x76\x69\x63\x65\xa7\x01"
  "\x03\x29\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x66\x69\x6e\x64\x2d\x66\x69\x6c\x65\x2d\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x02\x02\x06\x80\x80\x04"
  "\x01\x04\x81\x81\x02\x05\x0c";

SCHEME_OBJECT *
ed_ffi_so_data_196d44e7d9a15f93 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ed_ffi_so_data_196d44e7d9a15f93 [0]))), (sizeof (prog_ed_ffi_so_data_196d44e7d9a15f93)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_6]));
}

DECLARE_COMPILED_DATA_NS ("ed-ffi.so", ed_ffi_so_data_196d44e7d9a15f93)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ed-ffi.so", "a431ec44c9755c47")
