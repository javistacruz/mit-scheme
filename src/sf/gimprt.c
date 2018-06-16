/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:05-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_5 3
#define LABEL_4 5
#define LABEL_7 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define ENVIRONMENT_LABEL_3 25
#define DEBUGGING_LABEL_2 24
#define OBJECT_3 23
#define OBJECT_2 22
#define OBJECT_1 21
#define OBJECT_0 20
#define FREE_REFERENCE_2 17
#define FREE_REFERENCE_1 18
#define FREE_REFERENCE_0 19
#define FREE_REFERENCES_LABEL_0 16
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
gimprt_so_53c13fdd97bede2e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5);
      goto label_4;

    case 1:
      current_block = (Rpc - LABEL_4);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

int
decl_gimprt_so_53c13fdd97bede2e (void)
{
  return (0);
}

DECLARE_COMPILED_CODE ("gimprt.so", 7, decl_gimprt_so_53c13fdd97bede2e, gimprt_so_53c13fdd97bede2e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gimprt_so_data_53c13fdd97bede2e [251] =
  "\x1a\x01\x1b\x1d\x0c\x0d\x0d\xc3\x0d\x0d\x0d\x0d\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x50\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73"
  "\x66\x2f\x2e\x2f\x67\x69\x6d\x70\x72\x74\x2e\x69\x6e\x66\x10\x73"
  "\x63\x6f\x64\x65\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x3f\x12\x73"
  "\x63\x6f\x64\x65\x2d\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x12\x73\x63\x6f\x64\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x3f\x0c\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3f\x0c"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x0a\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x3f\x04\x07\x10\x80\x80\x04\x06\x0e\x81\x81\x02"
  "\x05\x0c\x81\x87\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x85\x02\x0f\x1a";

SCHEME_OBJECT *
gimprt_so_data_53c13fdd97bede2e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gimprt_so_data_53c13fdd97bede2e [0]))), (sizeof (prog_gimprt_so_data_53c13fdd97bede2e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("gimprt.so", gimprt_so_data_53c13fdd97bede2e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gimprt.so", "050b18147832f1cb")
