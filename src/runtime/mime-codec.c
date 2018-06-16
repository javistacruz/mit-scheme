/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:42-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define TAG_1_8 2
#define LABEL_1_9 9
#define TAG_1_10 3
#define LABEL_1_12 11
#define LABEL_1_14 13
#define LABEL_1_15 15
#define LABEL_1_18 17
#define LABEL_1_19 19
#define LABEL_1_20 21
#define LABEL_1_22 23
#define ENVIRONMENT_LABEL_1_3 42
#define DEBUGGING_LABEL_1_2 41
#define OBJECT_1_5 40
#define OBJECT_1_4 39
#define OBJECT_1_3 38
#define OBJECT_1_2 37
#define OBJECT_1_1 36
#define OBJECT_1_0 35
#define EXECUTE_CACHE_1_21 25
#define EXECUTE_CACHE_1_17 27
#define EXECUTE_CACHE_1_16 29
#define EXECUTE_CACHE_1_13 31
#define EXECUTE_CACHE_1_11 33
#define FREE_REFERENCES_LABEL_1_0 24
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      goto make_decoding_port_type_20;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_24;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_25;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_26;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decoding_port_type_23)
DEFLABEL (make_decoding_port_type_20)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Rsp [0]) = (Wrd51.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_19);
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_27;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (label_27)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) - (Wrd9.Lng));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = (current_block [OBJECT_2_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto qp_encoding_context_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_context_port_3)
DEFLABEL (qp_encoding_context_port_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto qp_encoding_context_textP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_context_textP_3)
DEFLABEL (qp_encoding_context_textP_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto qp_encoding_context_pending_lwsp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_context_pending_lwsp_3)
DEFLABEL (qp_encoding_context_pending_lwsp_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto qp_encoding_context_column_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_context_column_3)
DEFLABEL (qp_encoding_context_column_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto qp_encoding_context_pending_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_context_pending_output_3)
DEFLABEL (qp_encoding_context_pending_output_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto set_qp_encoding_context_pending_lwspB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_qp_encoding_context_pending_lwspB_3)
DEFLABEL (set_qp_encoding_context_pending_lwspB_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto set_qp_encoding_context_columnB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_qp_encoding_context_columnB_3)
DEFLABEL (set_qp_encoding_context_columnB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto set_qp_encoding_context_pending_outputB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_qp_encoding_context_pending_outputB_3)
DEFLABEL (set_qp_encoding_context_pending_outputB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_3 15
#define OBJECT_11_2 14
#define OBJECT_11_1 13
#define OBJECT_11_0 12
#define FREE_REFERENCE_11_0 11
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto qp_encoding_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_encoding_contextP_10)
DEFLABEL (qp_encoding_contextP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
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
  Rvl = (current_block [OBJECT_11_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_11_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto encode_quoted_printable_finalize_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_quoted_printable_finalize_4)
DEFLABEL (encode_quoted_printable_finalize_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_10 11
#define ENVIRONMENT_LABEL_13_3 23
#define DEBUGGING_LABEL_13_2 22
#define OBJECT_13_4 21
#define OBJECT_13_3 20
#define OBJECT_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_9 13
#define EXECUTE_CACHE_13_6 15
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto encode_quoted_printable_update_8;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_quoted_printable_update_12)
DEFLABEL (encode_quoted_printable_update_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd18.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto loop_6;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_13_2]);
  (Rsp [4]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_13_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_14;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_13_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_13_2]);
  (Rsp [5]) = (Wrd19.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_13 13
#define LABEL_14_15 15
#define LABEL_14_12 17
#define LABEL_14_18 19
#define ENVIRONMENT_LABEL_14_3 43
#define DEBUGGING_LABEL_14_2 42
#define OBJECT_14_6 41
#define OBJECT_14_5 40
#define OBJECT_14_4 39
#define OBJECT_14_3 38
#define OBJECT_14_2 37
#define OBJECT_14_1 36
#define OBJECT_14_0 35
#define EXECUTE_CACHE_14_17 21
#define EXECUTE_CACHE_14_16 23
#define EXECUTE_CACHE_14_14 25
#define EXECUTE_CACHE_14_11 27
#define EXECUTE_CACHE_14_10 29
#define EXECUTE_CACHE_14_6 31
#define FREE_REFERENCE_14_0 34
#define FREE_REFERENCES_LABEL_14_0 20
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_14_4);
      goto encode_qp_17;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_qp_22)
DEFLABEL (encode_qp_17)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd10.Lng) < (Wrd12.Lng))
    goto label_25;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_24;

DEFLABEL (label_25)
  (Wrd14.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
DEFLABEL (label_26)
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_15;

DEFLABEL (loop_23)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_28;
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == (current_block [OBJECT_14_2]))
    goto label_27;
  Rvl = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd13.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd13.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_39;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_39;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_39;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_38)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) + 1L);
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd7.Obj) = (Rsp [6]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_4]))
    goto label_31;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd10.Lng) < (Wrd12.Lng))
    goto label_29;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_15);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_29)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_31)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd24.Lng) < (Wrd26.Lng))
    goto label_30;
  (Wrd27.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_14_5]);
  (Rsp [5]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd29.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 62)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 3);

DEFLABEL (label_33)
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_32;
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [4]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_37;
  Wrd48 = Wrd52;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_18);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_35)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_13])), (Wrd49.pObj));

DEFLABEL (label_20)
  (Wrd48.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_4 19
#define OBJECT_15_3 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 11
#define EXECUTE_CACHE_15_7 13
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd45;
  machine_word Wrd23;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_15_4);
      goto encode_qp_pending_lwsp_5;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_qp_pending_lwsp_11)
DEFLABEL (encode_qp_pending_lwsp_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_15_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd23.Obj) = (Rsp [2]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_15;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_15;
  ((Wrd34.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (label_15)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_15_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 3);

DEFLABEL (label_8)
  goto label_14;

DEFLABEL (label_16)
  (Wrd45.Obj) = (Rsp [3]);
  if ((Wrd45.Obj) == (current_block [OBJECT_15_2]))
    goto label_12;
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_18;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd58.Lng))))
    goto label_18;
  ((Wrd56.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
  (Wrd47.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd48.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (label_18)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_15_0]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 3);

DEFLABEL (label_9)
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_11 11
#define LABEL_16_12 13
#define LABEL_16_14 15
#define LABEL_16_9 17
#define LABEL_16_16 19
#define ENVIRONMENT_LABEL_16_3 37
#define DEBUGGING_LABEL_16_2 36
#define OBJECT_16_6 35
#define OBJECT_16_5 34
#define OBJECT_16_4 33
#define OBJECT_16_3 32
#define OBJECT_16_2 31
#define OBJECT_16_1 30
#define OBJECT_16_0 29
#define EXECUTE_CACHE_16_15 21
#define EXECUTE_CACHE_16_13 23
#define EXECUTE_CACHE_16_10 25
#define EXECUTE_CACHE_16_6 27
#define FREE_REFERENCES_LABEL_16_0 20
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd43;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_16_4);
      goto write_qp_clear_11;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_16_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_qp_clear_17)
DEFLABEL (write_qp_clear_11)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_29;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_29;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_28)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! ((Wrd38.Lng) < 75L))
    goto label_20;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 3);

DEFLABEL (label_19)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_18;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd14.Obj);
  Rvl = (current_block [OBJECT_16_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 62))
    goto label_27;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_27;
  (Wrd43.Obj) = ((Wrd57.pObj) [3]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd49.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16_14);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_16_4]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 3);

DEFLABEL (label_22)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_16);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_6]), 3);

DEFLABEL (label_26)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_25;
  ((Wrd16.pObj) [5]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_16_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_16_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (label_29)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_16_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define LABEL_17_8 9
#define LABEL_17_9 11
#define LABEL_17_10 13
#define LABEL_17_11 15
#define LABEL_17_12 17
#define LABEL_17_13 19
#define LABEL_17_14 21
#define LABEL_17_18 23
#define LABEL_17_15 25
#define LABEL_17_20 27
#define LABEL_17_21 29
#define LABEL_17_22 31
#define ENVIRONMENT_LABEL_17_3 54
#define DEBUGGING_LABEL_17_2 53
#define OBJECT_17_9 52
#define OBJECT_17_8 51
#define OBJECT_17_7 50
#define OBJECT_17_6 49
#define OBJECT_17_5 48
#define OBJECT_17_4 47
#define OBJECT_17_3 46
#define OBJECT_17_2 45
#define OBJECT_17_1 44
#define OBJECT_17_0 43
#define EXECUTE_CACHE_17_19 33
#define EXECUTE_CACHE_17_17 35
#define EXECUTE_CACHE_17_16 37
#define EXECUTE_CACHE_17_6 39
#define FREE_REFERENCE_17_0 42
#define FREE_REFERENCES_LABEL_17_0 32
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd110;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd101;
  machine_word Wrd84;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_17_4);
      goto write_qp_encoded_19;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_17_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_17_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_17_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_17_13);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_17_14);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_17_20);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_17_22);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_qp_encoded_30)
DEFLABEL (write_qp_encoded_19)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_53;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_52)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_51;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd23.Lng))))
    goto label_51;
  (Wrd17.Obj) = ((Wrd21.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_50)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_49;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd39.Lng))))
    goto label_49;
  (Wrd33.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_48)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_47;
  Wrd48 = Wrd52;

DEFLABEL (label_46)
  Wrd47 = Wrd48;
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd59.Lng) = ((Wrd56.Lng) & 15L);
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_45;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_45;
  Wrd67 = Wrd59;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [1]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd70.Lng))))
    goto label_45;
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd54.Obj));
  (Wrd63.pChr) = (& ((Wrd68.pChr) [(Wrd61.Lng)]));
  (Wrd64.uLng) = ((unsigned long) (((unsigned char *) (Wrd63.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd65.Obj) = (MAKE_OBJECT (2, (Wrd64.uLng)));
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_44)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_43;
  Wrd78 = Wrd82;

DEFLABEL (label_42)
  Wrd77 = Wrd78;
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd89.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd86.Lng)), 4)));
  (Wrd84.Obj) = (LONG_TO_FIXNUM (Wrd89.Lng));
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd101.uLng) == 30))
    goto label_41;
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd96.uLng) == 26))
    goto label_41;
  Wrd97 = Wrd89;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [1]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) (Wrd97.Lng)) < ((unsigned long) (Wrd100.Lng))))
    goto label_41;
  (Wrd91.uLng) = (OBJECT_DATUM (Wrd84.Obj));
  (Wrd93.pChr) = (& ((Wrd98.pChr) [(Wrd91.Lng)]));
  (Wrd94.uLng) = ((unsigned long) (((unsigned char *) (Wrd93.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd95.Obj) = (MAKE_OBJECT (2, (Wrd94.uLng)));
  (* (--Rsp)) = (Wrd95.Obj);

DEFLABEL (label_40)
  (Wrd107.Obj) = (Rsp [3]);
  if (! ((Wrd107.Obj) == (current_block [OBJECT_17_5])))
    goto label_33;
  (Wrd122.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd122.Obj);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd126.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd127.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd127.Obj);
  (Wrd128.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd128.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_17_7]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 3);

DEFLABEL (label_32)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_31;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if ((Wrd110.Lng) > 73L)
    goto label_39;

DEFLABEL (label_38)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd117.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_37;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_36)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd26.Lng) = ((Wrd23.Lng) + 3L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [6]) = (Wrd22.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [5]) = (Wrd27.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 62)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_9]), 3);

DEFLABEL (label_35)
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd38.Lng))))
    goto label_34;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd36.pObj) [5]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_17_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_17_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_28)
  (Wrd6.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd121.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_7);
  goto label_38;

DEFLABEL (label_41)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_13])), (Wrd79.pObj));

DEFLABEL (label_26)
  (Wrd78.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_12]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_11])), (Wrd49.pObj));

DEFLABEL (label_24)
  (Wrd48.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_17_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_17_1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_8 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define OBJECT_18_6 21
#define OBJECT_18_5 20
#define OBJECT_18_4 19
#define OBJECT_18_3 18
#define OBJECT_18_2 17
#define OBJECT_18_1 16
#define OBJECT_18_0 15
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto write_qp_hard_break_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_qp_hard_break_7)
DEFLABEL (write_qp_hard_break_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (Wrd5.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_6]), 3);

DEFLABEL (label_9)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  ((Wrd16.pObj) [5]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_18_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_18_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_4 5
#define LABEL_19_6 7
#define LABEL_19_9 9
#define LABEL_19_8 11
#define LABEL_19_11 13
#define LABEL_19_12 15
#define LABEL_19_13 17
#define ENVIRONMENT_LABEL_19_3 31
#define DEBUGGING_LABEL_19_2 30
#define OBJECT_19_6 29
#define OBJECT_19_5 28
#define OBJECT_19_4 27
#define OBJECT_19_3 26
#define OBJECT_19_2 25
#define OBJECT_19_1 24
#define OBJECT_19_0 23
#define EXECUTE_CACHE_19_10 19
#define EXECUTE_CACHE_19_7 21
#define FREE_REFERENCES_LABEL_19_0 18
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd23;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_19_4);
      goto write_qp_pending_output_9;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_19_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_qp_pending_output_17)
DEFLABEL (write_qp_pending_output_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = (current_block [OBJECT_19_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd23.Obj) = (Rsp [2]);
  if (! ((Wrd23.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);

DEFLABEL (label_29)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_28;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_28;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_27)
  (Wrd44.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_26;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd60.Lng))))
    goto label_26;
  ((Wrd58.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_24;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_22;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_22;
  (Wrd16.Obj) = ((Wrd22.pObj) [5]);

DEFLABEL (label_21)
  (Wrd32.Obj) = (* (Rsp++));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd36.Lng) = ((Wrd34.Lng) + (Wrd35.Lng));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_19_6]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd51.uLng) == 62)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_20)
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd49.Lng))))
    goto label_19;
  ((Wrd47.pObj) [5]) = (Wrd33.Obj);
  Rvl = (current_block [OBJECT_19_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_19_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_14)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_5]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (current_block [OBJECT_19_0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_15)
  goto label_25;

DEFLABEL (label_28)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_19_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 23
#define DEBUGGING_LABEL_20_2 22
#define OBJECT_20_6 21
#define OBJECT_20_5 20
#define OBJECT_20_4 19
#define OBJECT_20_3 18
#define OBJECT_20_2 17
#define OBJECT_20_1 16
#define OBJECT_20_0 15
#define EXECUTE_CACHE_20_9 11
#define EXECUTE_CACHE_20_8 13
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_20_4);
      goto write_qp_soft_break_4;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_qp_soft_break_8)
DEFLABEL (write_qp_soft_break_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_10;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_10;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_9)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (label_10)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_20_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_20_4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 3);

DEFLABEL (label_12)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  ((Wrd16.pObj) [5]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_20_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto qp_decoding_context_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_decoding_context_port_3)
DEFLABEL (qp_decoding_context_port_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto qp_decoding_context_textP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_decoding_context_textP_3)
DEFLABEL (qp_decoding_context_textP_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto qp_decoding_context_pending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_decoding_context_pending_3)
DEFLABEL (qp_decoding_context_pending_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto set_qp_decoding_context_pendingB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_qp_decoding_context_pendingB_3)
DEFLABEL (set_qp_decoding_context_pendingB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_3 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCE_25_0 11
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto qp_decoding_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (qp_decoding_contextP_10)
DEFLABEL (qp_decoding_contextP_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
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
  Rvl = (current_block [OBJECT_25_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_25_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 11
#define DEBUGGING_LABEL_26_2 10
#define OBJECT_26_2 9
#define OBJECT_26_1 8
#define OBJECT_26_0 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_26_4);
      goto decode_quoted_printable_finalize_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_quoted_printable_finalize_3)
DEFLABEL (decode_quoted_printable_finalize_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_2]);
  (Rsp [4]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define ENVIRONMENT_LABEL_27_3 23
#define DEBUGGING_LABEL_27_2 22
#define OBJECT_27_2 21
#define OBJECT_27_1 20
#define OBJECT_27_0 19
#define EXECUTE_CACHE_27_11 13
#define EXECUTE_CACHE_27_8 15
#define EXECUTE_CACHE_27_7 17
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_27_4);
      goto decode_quoted_printable_update_8;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_quoted_printable_update_11)
DEFLABEL (decode_quoted_printable_update_8)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_12)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd17.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_27_1]);
  (Rsp [5]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define EXECUTE_CACHE_28_9 11
#define EXECUTE_CACHE_28_6 13
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto call_with_decode_quoted_printable_output_port_5;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_decode_quoted_printable_output_port_8)
DEFLABEL (call_with_decode_quoted_printable_output_port_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define EXECUTE_CACHE_29_8 9
#define EXECUTE_CACHE_29_6 11
#define FREE_REFERENCE_29_0 14
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto make_decode_quoted_printable_port_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decode_quoted_printable_port_5)
DEFLABEL (make_decode_quoted_printable_port_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_7])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_12 13
#define LABEL_30_14 15
#define LABEL_30_10 17
#define LABEL_30_17 19
#define LABEL_30_13 21
#define LABEL_30_25 23
#define LABEL_30_26 25
#define LABEL_30_28 27
#define LABEL_30_29 29
#define LABEL_30_30 31
#define LABEL_30_31 33
#define LABEL_30_32 35
#define LABEL_30_33 37
#define LABEL_30_36 39
#define LABEL_30_19 41
#define LABEL_30_16 43
#define LABEL_30_23 45
#define LABEL_30_37 47
#define LABEL_30_22 49
#define LABEL_30_38 51
#define LABEL_30_39 53
#define LABEL_30_40 55
#define LABEL_30_34 57
#define LABEL_30_27 59
#define LABEL_30_44 61
#define LABEL_30_41 63
#define LABEL_30_45 65
#define ENVIRONMENT_LABEL_30_3 103
#define DEBUGGING_LABEL_30_2 102
#define OBJECT_30_11 101
#define OBJECT_30_10 100
#define OBJECT_30_9 99
#define OBJECT_30_8 98
#define OBJECT_30_7 97
#define OBJECT_30_6 96
#define OBJECT_30_5 95
#define OBJECT_30_4 94
#define OBJECT_30_3 93
#define OBJECT_30_2 92
#define OBJECT_30_1 91
#define OBJECT_30_0 90
#define EXECUTE_CACHE_30_43 67
#define EXECUTE_CACHE_30_42 69
#define EXECUTE_CACHE_30_35 71
#define EXECUTE_CACHE_30_24 73
#define EXECUTE_CACHE_30_21 75
#define EXECUTE_CACHE_30_20 77
#define EXECUTE_CACHE_30_18 79
#define EXECUTE_CACHE_30_15 81
#define EXECUTE_CACHE_30_11 83
#define EXECUTE_CACHE_30_6 85
#define FREE_REFERENCE_30_1 88
#define FREE_REFERENCE_30_0 89
#define FREE_REFERENCES_LABEL_30_0 66
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd21;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd108;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd116;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd89;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd149;
  machine_word Wrd145;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd119;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd44;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_30_4);
      goto decode_qp_51;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_53;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto label_54;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto label_55;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto loop_21;

    case 6:
      current_block = (Rpc - LABEL_30_14);
      goto label_56;

    case 7:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_30_17);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_25;

    case 11:
      current_block = (Rpc - LABEL_30_26);
      goto handle_equals_37;

    case 12:
      current_block = (Rpc - LABEL_30_28);
      goto label_63;

    case 13:
      current_block = (Rpc - LABEL_30_29);
      goto label_64;

    case 14:
      current_block = (Rpc - LABEL_30_30);
      goto label_59;

    case 15:
      current_block = (Rpc - LABEL_30_31);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_30_32);
      goto label_61;

    case 17:
      current_block = (Rpc - LABEL_30_33);
      goto label_62;

    case 18:
      current_block = (Rpc - LABEL_30_36);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_30_16);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_30_23);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_30_37);
      goto label_65;

    case 23:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_14;

    case 24:
      current_block = (Rpc - LABEL_30_38);
      goto finish_49;

    case 25:
      current_block = (Rpc - LABEL_30_39);
      goto label_66;

    case 26:
      current_block = (Rpc - LABEL_30_40);
      goto label_67;

    case 27:
      current_block = (Rpc - LABEL_30_34);
      goto continuation_30;

    case 28:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_36;

    case 29:
      current_block = (Rpc - LABEL_30_44);
      goto continuation_41;

    case 30:
      current_block = (Rpc - LABEL_30_41);
      goto continuation_47;

    case 31:
      current_block = (Rpc - LABEL_30_45);
      goto continuation_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_qp_69)
DEFLABEL (decode_qp_51)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_85;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_85;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_84)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_83;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_83;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_82)
  (Wrd37.Obj) = (Rsp [0]);
  if (! ((Wrd37.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_74;

DEFLABEL (label_73)
  (Wrd43.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd43.Obj);
  goto loop_21;

DEFLABEL (label_74)
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! ((Wrd40.Lng) < (Wrd42.Lng)))
    goto label_73;
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_81;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_81;
  ((Wrd55.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd7.Obj);
  goto handle_equals_37;

DEFLABEL (label_75)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 2)
    goto label_77;
  if ((Wrd9.uLng) == 30)
    goto label_76;
  (Wrd12.Obj) = (current_block [OBJECT_30_6]);
  (Rsp [6]) = (Wrd12.Obj);
  (Rsp [7]) = (Wrd8.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_21]));

DEFLABEL (label_76)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_19);
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_21;

DEFLABEL (label_77)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_79;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_79;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_79;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd32.pChr) = (& ((Wrd40.pChr) [(Wrd29.Lng)]));
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (2, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_78)
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_16);
  (Rsp [0]) = Rvl;
  goto loop_21;

DEFLABEL (label_79)
  (Wrd45.Obj) = (Rsp [6]);
  (Wrd46.Obj) = (Rsp [7]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.Obj) = (current_block [OBJECT_30_2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_55)
  goto label_80;

DEFLABEL (label_83)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_30_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (loop_70)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_30_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_90;
  Wrd8 = Wrd12;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_87;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_87)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_86)
DEFLABEL (label_88)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_14])), (Wrd9.pObj));

DEFLABEL (label_56)
  (Wrd8.Obj) = Rvl;
  goto label_89;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_23);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_93;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_93;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_93;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_92)
  if ((Wrd5.Obj) == (current_block [OBJECT_30_4]))
    goto label_91;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd31.Lng) + 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_21;

DEFLABEL (label_91)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd36.Lng) + 1L);
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  goto handle_equals_37;

DEFLABEL (label_93)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (label_65)
  (Wrd5.Obj) = Rvl;
  goto label_92;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_22);
  Rsp = (& (Rsp [2]));
  goto finish_49;

DEFLABEL (handle_equals_71)
DEFLABEL (handle_equals_37)
  INTERRUPT_CHECK (26, LABEL_30_26);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd9.Lng) < (Wrd11.Lng))
    goto label_108;
  if ((Wrd7.Lng) < (Wrd11.Lng))
    goto label_96;
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_95;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd25.Lng))))
    goto label_95;
  (Wrd19.Obj) = (current_block [OBJECT_30_4]);
  ((Wrd23.pObj) [4]) = (Wrd19.Obj);

DEFLABEL (label_94)
  Rsp = (& (Rsp [1]));
  goto finish_49;

DEFLABEL (label_95)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Obj) = (current_block [OBJECT_30_2]);
  (Wrd30.Obj) = (current_block [OBJECT_30_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_58)
  goto label_94;

DEFLABEL (label_96)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 30))
    goto label_107;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_107;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd7.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_107;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd6.Obj));
  (Wrd42.pChr) = (& ((Wrd50.pChr) [(Wrd39.Lng)]));
  (Wrd43.uLng) = ((unsigned long) (((unsigned char *) (Wrd42.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd44.Obj) = (MAKE_OBJECT (2, (Wrd43.uLng)));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_106)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 2))
    goto label_105;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd65.Obj) = (MAKE_OBJECT (26, (Wrd64.uLng)));
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_104)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_103;
  Wrd71 = Wrd75;

DEFLABEL (label_102)
  Wrd70 = Wrd71;
  (Wrd77.Obj) = (* (Rsp++));
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd89.uLng) == 30))
    goto label_101;
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd84.uLng) == 26))
    goto label_101;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) (Wrd85.Lng)) < ((unsigned long) (Wrd88.Lng))))
    goto label_101;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd77.Obj));
  (Wrd82.pChr) = (& ((Wrd86.pChr) [(Wrd80.Lng)]));
  (Wrd83.uLng) = ((unsigned long) (((unsigned char *) (Wrd82.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd78.Obj) = (MAKE_OBJECT (26, (Wrd83.uLng)));

DEFLABEL (label_100)
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if ((Wrd95.Lng) < 16L)
    goto label_97;
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_34]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd102.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd102.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30_34);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (label_97)
  (Wrd103.Obj) = (current_block [OBJECT_30_2]);
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd104.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd116.uLng) == 62)
    goto label_99;

DEFLABEL (label_98)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_99)
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd114.Lng))))
    goto label_98;
  (Wrd108.Obj) = (Rsp [2]);
  ((Wrd112.pObj) [4]) = (Wrd108.Obj);
  Rsp = (& (Rsp [4]));
  goto label_94;

DEFLABEL (label_101)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_8]), 2);

DEFLABEL (label_62)
  (Wrd78.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_32])), (Wrd72.pObj));

DEFLABEL (label_61)
  (Wrd71.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_7]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd55.Obj) = (Rsp [5]);
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (Wrd124.Lng) = ((Wrd7.Lng) + 2L);
  (Wrd125.Obj) = (LONG_TO_FIXNUM (Wrd124.Lng));
  (* (--Rsp)) = (Wrd125.Obj);
  Wrd126 = Wrd5;
  (Wrd143.Obj) = (Rsp [6]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 30))
    goto label_112;
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd137.uLng) == 26))
    goto label_112;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [1]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) (Wrd9.Lng)) < ((unsigned long) (Wrd142.Lng))))
    goto label_112;
  (Wrd131.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd134.pChr) = (& ((Wrd140.pChr) [(Wrd131.Lng)]));
  (Wrd135.uLng) = ((unsigned long) (((unsigned char *) (Wrd134.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd136.Obj) = (MAKE_OBJECT (2, (Wrd135.uLng)));
  (* (--Rsp)) = (Wrd136.Obj);

DEFLABEL (label_111)
  (Wrd166.Obj) = (Rsp [7]);
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd167.uLng) == 30))
    goto label_110;
  (Wrd158.Obj) = (Rsp [3]);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd158.Obj));
  if (! ((Wrd159.uLng) == 26))
    goto label_110;
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd164.Obj) = ((Wrd163.pObj) [1]);
  (Wrd165.Lng) = (FIXNUM_TO_LONG (Wrd164.Obj));
  if (! (((unsigned long) (Wrd161.Lng)) < ((unsigned long) (Wrd165.Lng))))
    goto label_110;
  (Wrd152.uLng) = (OBJECT_DATUM (Wrd158.Obj));
  (Wrd155.pChr) = (& ((Wrd163.pChr) [(Wrd152.Lng)]));
  (Wrd156.uLng) = ((unsigned long) (((unsigned char *) (Wrd155.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd157.Obj) = (MAKE_OBJECT (2, (Wrd156.uLng)));
  (* (--Rsp)) = (Wrd157.Obj);

DEFLABEL (label_109)
  (Wrd173.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd173.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_30_27);
  (Rsp [0]) = Rvl;
  goto loop_21;

DEFLABEL (label_110)
  (Wrd168.Obj) = (Rsp [7]);
  (Wrd169.Obj) = (Rsp [3]);
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd145.Obj) = (Rsp [6]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_5]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_25);
  goto label_94;

DEFLABEL (finish_72)
DEFLABEL (finish_49)
  INTERRUPT_CHECK (26, LABEL_30_38);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_124;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_124;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_123)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_122;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd52.Lng))))
    goto label_122;
  ((Wrd50.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_121)
  (Wrd21.Obj) = (Rsp [7]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_30_9])))
    goto label_115;
  (Wrd36.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_42]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_30_41);
  (Rsp [7]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_30_2]);
  (Rsp [6]) = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_114;

DEFLABEL (label_113)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_114)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_113;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_30_11]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_119;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_30_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  (Wrd7.Obj) = (Rsp [7]);
  if ((Wrd7.Obj) == (current_block [OBJECT_30_10]))
    goto label_116;
  (Wrd9.Obj) = (current_block [OBJECT_30_4]);
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd10.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (label_116)
  Rvl = (current_block [OBJECT_30_11]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 2))
    goto label_118;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_45]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_30_45);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_35]));

DEFLABEL (label_118)
  if ((Wrd15.uLng) == 30)
    goto label_116;
  (Wrd18.Obj) = (current_block [OBJECT_30_6]);
  (Rsp [6]) = (Wrd18.Obj);
  (Rsp [7]) = (Wrd14.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_21]));

DEFLABEL (label_119)
  if ((Wrd21.Obj) == (current_block [OBJECT_30_10]))
    goto label_120;
  Rvl = (current_block [OBJECT_30_11]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_120)
  (Wrd34.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd34.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (label_122)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (current_block [OBJECT_30_2]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 3);

DEFLABEL (label_67)
  goto label_121;

DEFLABEL (label_124)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_30_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_39]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_123;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_7 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define ENVIRONMENT_LABEL_31_3 23
#define DEBUGGING_LABEL_31_2 22
#define OBJECT_31_2 21
#define OBJECT_31_1 20
#define OBJECT_31_0 19
#define EXECUTE_CACHE_31_11 13
#define EXECUTE_CACHE_31_10 15
#define EXECUTE_CACHE_31_5 17
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_31_4);
      goto decode_qp_pending_string_8;

    case 1:
      current_block = (Rpc - LABEL_31_7);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_qp_pending_string_12)
DEFLABEL (decode_qp_pending_string_8)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_13;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (Rsp [0]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_5]));

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_16;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_15)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd29.Lng) - (Wrd31.Lng));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd35.Lng) = ((Wrd33.Lng) + (Wrd32.Lng));
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_10)
  (Wrd16.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_32_4);
      goto char_lwspP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_lwspP_4)
DEFLABEL (char_lwspP_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_32_0]))
    goto label_6;
  if ((Wrd6.Obj) == (current_block [OBJECT_32_1]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_32_2]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define ENVIRONMENT_LABEL_33_3 15
#define DEBUGGING_LABEL_33_2 14
#define OBJECT_33_0 13
#define EXECUTE_CACHE_33_8 11
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_33_4);
      goto skip_lwsp_backwards_8;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (skip_lwsp_backwards_12)
DEFLABEL (skip_lwsp_backwards_8)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_33_6);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Lng) = ((Wrd8.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_17;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_17;
  Wrd26 = Wrd17;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_17;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd22.pChr) = (& ((Wrd28.pChr) [(Wrd19.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd24.Obj) = (MAKE_OBJECT (2, (Wrd23.uLng)));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) - 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_5 3
#define LABEL_34_4 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_9 13
#define LABEL_34_10 15
#define LABEL_34_11 17
#define LABEL_34_12 19
#define LABEL_34_15 21
#define LABEL_34_13 23
#define LABEL_34_16 25
#define ENVIRONMENT_LABEL_34_3 38
#define DEBUGGING_LABEL_34_2 37
#define OBJECT_34_5 36
#define OBJECT_34_4 35
#define OBJECT_34_3 34
#define OBJECT_34_2 33
#define OBJECT_34_1 32
#define OBJECT_34_0 31
#define EXECUTE_CACHE_34_14 27
#define FREE_REFERENCE_34_0 30
#define FREE_REFERENCES_LABEL_34_0 26
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd122;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_34_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_34_4);
      goto decode_qp_hex_16;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_34_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_34_10);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_34_11);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_34_12);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_34_15);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_qp_hex_26)
DEFLABEL (decode_qp_hex_16)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_44;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_43)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 2))
    goto label_42;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_41)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_40;
  Wrd35 = Wrd39;

DEFLABEL (label_39)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd53.uLng) == 30))
    goto label_38;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_38;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd49.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_38;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd45.pChr) = (& ((Wrd50.pChr) [(Wrd43.Lng)]));
  (Wrd46.uLng) = ((unsigned long) (((unsigned char *) (Wrd45.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd47.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_37)
  (Wrd59.Obj) = (Rsp [4]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 2))
    goto label_36;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  (Wrd64.Obj) = (MAKE_OBJECT (26, (Wrd63.uLng)));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_35)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_34;
  Wrd70 = Wrd74;

DEFLABEL (label_33)
  Wrd69 = Wrd70;
  (Wrd76.Obj) = (* (Rsp++));
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd88.uLng) == 30))
    goto label_32;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_32;
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [1]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd84.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_32;
  (Wrd78.uLng) = (OBJECT_DATUM (Wrd76.Obj));
  (Wrd80.pChr) = (& ((Wrd85.pChr) [(Wrd78.Lng)]));
  (Wrd81.uLng) = ((unsigned long) (((unsigned char *) (Wrd80.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd82.Obj) = (MAKE_OBJECT (26, (Wrd81.uLng)));
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_31)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd97.Lng) = 16L;
  if ((Wrd95.Lng) < (Wrd97.Lng))
    goto label_30;

DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
  (Wrd100.Obj) = (Rsp [0]);
  if ((Wrd100.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_34_15);
  Rvl = (Rsp [5]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (current_block [OBJECT_34_5]);
  (* (--Rsp)) = (Wrd111.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) - 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd8.Lng));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! ((Wrd113.Lng) < (Wrd97.Lng)))
    goto label_29;
  (Wrd123.Lng) = (LEFT_SHIFT ((Wrd95.Lng), 4));
  (Wrd126.Lng) = ((Wrd123.Lng) | (Wrd113.Lng));
  (Wrd122.Obj) = (LONG_TO_FIXNUM (Wrd126.Lng));
  (Rsp [1]) = (Wrd122.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_4]), 1);

DEFLABEL (label_32)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_11])), (Wrd71.pObj));

DEFLABEL (label_23)
  (Wrd70.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_8])), (Wrd36.pObj));

DEFLABEL (label_20)
  (Wrd35.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define OBJECT_35_2 14
#define OBJECT_35_1 13
#define OBJECT_35_0 12
#define FREE_REFERENCE_35_0 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_35_4);
      goto char_hex_digitP_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_hex_digitP_8)
DEFLABEL (char_hex_digitP_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_17;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  Wrd15 = Wrd16;
  (Wrd22.Obj) = (* (Rsp++));
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_13;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_13;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd30.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_13;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd27.pChr) = (& ((Wrd31.pChr) [(Wrd25.Lng)]));
  (Wrd28.uLng) = ((unsigned long) (((unsigned char *) (Wrd27.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd23.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));

DEFLABEL (label_12)
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd41.Lng) < 16L)
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_35_2]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define ENVIRONMENT_LABEL_36_3 13
#define DEBUGGING_LABEL_36_2 12
#define OBJECT_36_1 11
#define OBJECT_36_0 10
#define FREE_REFERENCE_36_0 9
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_36_4);
      goto char__hex_digit_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__hex_digit_6)
DEFLABEL (char__hex_digit_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 2))
    goto label_10;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 30)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_8)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_7;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_7;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd27.pChr) = (& ((Wrd35.pChr) [(Wrd24.Lng)]));
  (Wrd28.uLng) = ((unsigned long) (((unsigned char *) (Wrd27.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (26, (Wrd28.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_4)
  (Wrd13.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 10
#define DEBUGGING_LABEL_37_2 9
#define OBJECT_37_0 8
#define FREE_REFERENCE_37_0 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_37_4);
      goto hex_digit__char_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hex_digit__char_4)
DEFLABEL (hex_digit__char_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd29.uLng) == 30)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

DEFLABEL (label_6)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_5;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_5;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd17.pChr) = (& ((Wrd25.pChr) [(Wrd14.Lng)]));
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd17.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd18.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 6
#define DEBUGGING_LABEL_39_2 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  Rvl = (current_block [OBJECT_39_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 7
#define DEBUGGING_LABEL_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto base64_encoding_context_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_encoding_context_port_3)
DEFLABEL (base64_encoding_context_port_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

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

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 7
#define DEBUGGING_LABEL_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto base64_encoding_context_textP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_encoding_context_textP_3)
DEFLABEL (base64_encoding_context_textP_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 7
#define DEBUGGING_LABEL_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto base64_encoding_context_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_encoding_context_buffer_3)
DEFLABEL (base64_encoding_context_buffer_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 7
#define DEBUGGING_LABEL_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto base64_encoding_context_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_encoding_context_index_3)
DEFLABEL (base64_encoding_context_index_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 8
#define DEBUGGING_LABEL_44_2 7
#define OBJECT_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto set_base64_encoding_context_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_base64_encoding_context_indexB_3)
DEFLABEL (set_base64_encoding_context_indexB_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_44_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define ENVIRONMENT_LABEL_45_3 17
#define DEBUGGING_LABEL_45_2 16
#define OBJECT_45_3 15
#define OBJECT_45_2 14
#define OBJECT_45_1 13
#define OBJECT_45_0 12
#define FREE_REFERENCE_45_0 11
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto base64_encoding_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_encoding_contextP_10)
DEFLABEL (base64_encoding_contextP_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
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
  Rvl = (current_block [OBJECT_45_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_45_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define EXECUTE_CACHE_46_5 5
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto encode_base64_finalize_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_base64_finalize_3)
DEFLABEL (encode_base64_finalize_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_8 9
#define LABEL_47_10 11
#define LABEL_47_11 13
#define ENVIRONMENT_LABEL_47_3 25
#define DEBUGGING_LABEL_47_2 24
#define OBJECT_47_4 23
#define OBJECT_47_3 22
#define OBJECT_47_2 21
#define OBJECT_47_1 20
#define OBJECT_47_0 19
#define EXECUTE_CACHE_47_9 15
#define EXECUTE_CACHE_47_6 17
#define FREE_REFERENCES_LABEL_47_0 14
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_47_4);
      goto encode_base64_update_9;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_base64_update_13)
DEFLABEL (encode_base64_update_9)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_7;

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_47_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_47_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_47_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_8 11
#define LABEL_48_11 13
#define LABEL_48_13 15
#define LABEL_48_10 17
#define ENVIRONMENT_LABEL_48_3 32
#define DEBUGGING_LABEL_48_2 31
#define OBJECT_48_5 30
#define OBJECT_48_4 29
#define OBJECT_48_3 28
#define OBJECT_48_2 27
#define OBJECT_48_1 26
#define OBJECT_48_0 25
#define EXECUTE_CACHE_48_14 19
#define EXECUTE_CACHE_48_12 21
#define EXECUTE_CACHE_48_9 23
#define FREE_REFERENCES_LABEL_48_0 18
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_48_4);
      goto encode_base64_17;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto loop_14;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_48_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_base64_23)
DEFLABEL (encode_base64_17)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_14;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_48_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_24)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_48_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_27;
  Rvl = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_33;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_33;
  (Wrd13.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_32)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd35.Lng) = (48L - (Wrd34.Lng));
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd39.Lng) = ((Wrd37.Lng) + (Wrd35.Lng));
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (* (--Rsp)) = Rvl;
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_31;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_31;
  ((Wrd17.pObj) [5]) = Rvl;

DEFLABEL (label_30)
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_48_5])))
    goto label_28;
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_48_2]);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_4]), 3);

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_33)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_48_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_10);
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_9 11
#define LABEL_49_11 13
#define LABEL_49_12 15
#define LABEL_49_15 17
#define LABEL_49_18 19
#define LABEL_49_19 21
#define LABEL_49_20 23
#define LABEL_49_8 25
#define LABEL_49_22 27
#define LABEL_49_17 29
#define LABEL_49_21 31
#define LABEL_49_25 33
#define LABEL_49_26 35
#define LABEL_49_27 37
#define LABEL_49_14 39
#define LABEL_49_16 41
#define LABEL_49_10 43
#define LABEL_49_13 45
#define LABEL_49_24 47
#define LABEL_49_29 49
#define LABEL_49_30 51
#define LABEL_49_31 53
#define ENVIRONMENT_LABEL_49_3 73
#define DEBUGGING_LABEL_49_2 72
#define OBJECT_49_10 71
#define OBJECT_49_9 70
#define OBJECT_49_8 69
#define OBJECT_49_7 68
#define OBJECT_49_6 67
#define OBJECT_49_5 66
#define OBJECT_49_4 65
#define OBJECT_49_3 64
#define OBJECT_49_2 63
#define OBJECT_49_1 62
#define OBJECT_49_0 61
#define EXECUTE_CACHE_49_28 55
#define EXECUTE_CACHE_49_23 57
#define FREE_REFERENCE_49_0 60
#define FREE_REFERENCES_LABEL_49_0 54
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd114;
  machine_word Wrd205;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd176;
  machine_word Wrd172;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd153;
  machine_word Wrd156;
  machine_word Wrd152;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_49_4);
      goto write_base64_line_56;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_58;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_59;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto label_60;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto loop_51;

    case 5:
      current_block = (Rpc - LABEL_49_11);
      goto label_65;

    case 6:
      current_block = (Rpc - LABEL_49_12);
      goto label_66;

    case 7:
      current_block = (Rpc - LABEL_49_15);
      goto label_64;

    case 8:
      current_block = (Rpc - LABEL_49_18);
      goto label_61;

    case 9:
      current_block = (Rpc - LABEL_49_19);
      goto label_62;

    case 10:
      current_block = (Rpc - LABEL_49_20);
      goto label_63;

    case 11:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_49_22);
      goto continuation_54;

    case 13:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_37;

    case 14:
      current_block = (Rpc - LABEL_49_21);
      goto continuation_39;

    case 15:
      current_block = (Rpc - LABEL_49_25);
      goto lambda_6;

    case 16:
      current_block = (Rpc - LABEL_49_26);
      goto label_67;

    case 17:
      current_block = (Rpc - LABEL_49_27);
      goto label_68;

    case 18:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_49_16);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_49_24);
      goto continuation_43;

    case 23:
      current_block = (Rpc - LABEL_49_29);
      goto continuation_19;

    case 24:
      current_block = (Rpc - LABEL_49_30);
      goto continuation_29;

    case 25:
      current_block = (Rpc - LABEL_49_31);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_base64_line_70)
DEFLABEL (write_base64_line_56)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_79;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_79;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_78)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_77;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_77;
  (Wrd23.Obj) = ((Wrd27.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_76)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_75;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_75;
  (Wrd39.Obj) = ((Wrd43.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_74)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) > 0)
    goto label_73;
  Rvl = (current_block [OBJECT_49_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_49_4]);
  (* (--Rsp)) = (Wrd60.Obj);
  goto loop_51;

DEFLABEL (label_75)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_49_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_49_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_49_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_8);

DEFLABEL (label_82)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_23]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_49_22);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_49_4]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_81;

DEFLABEL (label_80)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_8]), 3);

DEFLABEL (label_81)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_80;
  ((Wrd16.pObj) [5]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_49_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (loop_71)
DEFLABEL (loop_51)
  INTERRUPT_CHECK (26, LABEL_49_9);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) - (Wrd12.Lng));
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  Wrd16 = Wrd13;
  if ((Wrd16.Lng) < 3L)
    goto label_90;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Lng) = ((Wrd12.Lng) + 2L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_89;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_89;
  Wrd36 = Wrd27;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_89;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd32.pChr) = (& ((Wrd38.pChr) [(Wrd29.Lng)]));
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_88)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd51.Lng) = ((Wrd50.Lng) + 1L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd51.Lng));
  (Wrd65.Obj) = (Rsp [5]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 30))
    goto label_87;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_87;
  Wrd60 = Wrd51;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd64.Lng))))
    goto label_87;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd48.Obj));
  (Wrd56.pChr) = (& ((Wrd62.pChr) [(Wrd53.Lng)]));
  (Wrd57.uLng) = ((unsigned long) (((unsigned char *) (Wrd56.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd58.Obj) = (MAKE_OBJECT (26, (Wrd57.uLng)));
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_86)
  (Wrd88.Obj) = (Rsp [6]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 30))
    goto label_85;
  (Wrd80.Obj) = (Rsp [4]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_85;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [1]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_85;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd77.pChr) = (& ((Wrd85.pChr) [(Wrd74.Lng)]));
  (Wrd78.uLng) = ((unsigned long) (((unsigned char *) (Wrd77.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd79.Obj) = (MAKE_OBJECT (26, (Wrd78.uLng)));
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_84)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_21]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.pObj) = (& (Rsp [8]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd100.Obj);

DEFLABEL (label_83)
  (Wrd206.Obj) = (Rsp [2]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  (Wrd210.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd207.Lng)), 2)));
  (Wrd211.Obj) = (LONG_TO_FIXNUM (Wrd210.Lng));
  (* (--Rsp)) = (Wrd211.Obj);
  goto lambda_6;

DEFLABEL (label_85)
  (Wrd90.Obj) = (Rsp [6]);
  (Wrd91.Obj) = (Rsp [4]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_20]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd67.Obj) = (Rsp [5]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  if ((Wrd14.Obj) == (current_block [OBJECT_49_6]))
    goto label_94;
  if ((Wrd14.Obj) == (current_block [OBJECT_49_0]))
    goto label_91;
  Rsp = (& (Rsp [3]));
  goto label_82;

DEFLABEL (label_91)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd131.Obj) = (Rsp [4]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 30))
    goto label_93;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_93;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd129.Obj) = ((Wrd128.pObj) [1]);
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd130.Lng))))
    goto label_93;
  (Wrd117.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd120.pChr) = (& ((Wrd128.pChr) [(Wrd117.Lng)]));
  (Wrd121.uLng) = ((unsigned long) (((unsigned char *) (Wrd120.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd122.Obj) = (MAKE_OBJECT (26, (Wrd121.uLng)));
  (* (--Rsp)) = (Wrd122.Obj);

DEFLABEL (label_92)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd141.pObj) = (& (Rsp [6]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd141.pObj)));
  (* (--Rsp)) = (Wrd143.Obj);
  goto label_83;

DEFLABEL (label_93)
  (Wrd133.Obj) = (Rsp [4]);
  (Wrd134.Obj) = (Rsp [2]);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_94)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd156.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd153.Obj) = (LONG_TO_FIXNUM (Wrd156.Lng));
  (Wrd170.Obj) = (Rsp [4]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 30))
    goto label_98;
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd164.uLng) == 26))
    goto label_98;
  Wrd165 = Wrd156;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [1]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) (Wrd165.Lng)) < ((unsigned long) (Wrd169.Lng))))
    goto label_98;
  (Wrd158.uLng) = (OBJECT_DATUM (Wrd153.Obj));
  (Wrd161.pChr) = (& ((Wrd167.pChr) [(Wrd158.Lng)]));
  (Wrd162.uLng) = ((unsigned long) (((unsigned char *) (Wrd161.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd163.Obj) = (MAKE_OBJECT (26, (Wrd162.uLng)));
  (* (--Rsp)) = (Wrd163.Obj);

DEFLABEL (label_97)
  (Wrd193.Obj) = (Rsp [5]);
  (Wrd194.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if (! ((Wrd194.uLng) == 30))
    goto label_96;
  (Wrd185.Obj) = (Rsp [3]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 26))
    goto label_96;
  (Wrd188.Lng) = (FIXNUM_TO_LONG (Wrd185.Obj));
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd193.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [1]);
  (Wrd192.Lng) = (FIXNUM_TO_LONG (Wrd191.Obj));
  if (! (((unsigned long) (Wrd188.Lng)) < ((unsigned long) (Wrd192.Lng))))
    goto label_96;
  (Wrd179.uLng) = (OBJECT_DATUM (Wrd185.Obj));
  (Wrd182.pChr) = (& ((Wrd190.pChr) [(Wrd179.Lng)]));
  (Wrd183.uLng) = ((unsigned long) (((unsigned char *) (Wrd182.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd184.Obj) = (MAKE_OBJECT (26, (Wrd183.uLng)));
  (* (--Rsp)) = (Wrd184.Obj);

DEFLABEL (label_95)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd203.pObj) = (& (Rsp [7]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd203.pObj)));
  (* (--Rsp)) = (Wrd205.Obj);
  goto label_83;

DEFLABEL (label_96)
  (Wrd195.Obj) = (Rsp [5]);
  (Wrd196.Obj) = (Rsp [3]);
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd172.Obj) = (Rsp [4]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_7]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_49_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [8]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Lng) = (LEFT_SHIFT ((Wrd13.Lng), 4));
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd19.Lng)), 4)));
  Wrd23 = Wrd16;
  (Wrd25.Lng) = ((Wrd23.Lng) | (Wrd22.Lng));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_6;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_49_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [8]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Lng) = (LEFT_SHIFT ((Wrd13.Lng), 2));
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd19.Lng)), 6)));
  Wrd23 = Wrd16;
  (Wrd25.Lng) = ((Wrd23.Lng) | (Wrd22.Lng));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_6;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_49_31);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.pObj) = (& (Rsp [7]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_49_17);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + 3L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_51;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_49_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = (LEFT_SHIFT ((Wrd6.Lng), 4));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rsp [6]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  goto lambda_6;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_49_29);
  (Wrd5.Obj) = (current_block [OBJECT_49_10]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_28]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_49_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [7]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Lng) = (LEFT_SHIFT ((Wrd13.Lng), 4));
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd19.Lng)), 4)));
  Wrd23 = Wrd16;
  (Wrd25.Lng) = ((Wrd23.Lng) | (Wrd22.Lng));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_6;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_49_30);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 2));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rsp [6]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd14.Obj);
  goto lambda_6;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (Wrd5.Obj) = (current_block [OBJECT_49_10]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_28]));

DEFLABEL (lambda_72)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_49_25);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_102;
  Wrd6 = Wrd10;

DEFLABEL (label_101)
  Wrd5 = Wrd6;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) & 63L);
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd29.uLng) == 30))
    goto label_100;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_100;
  Wrd25 = Wrd17;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_100;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd22.pChr) = (& ((Wrd26.pChr) [(Wrd20.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (2, (Wrd23.uLng)));

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [2]);
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_28]));

DEFLABEL (label_100)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_27]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_9]), 2);

DEFLABEL (label_68)
  (Wrd18.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_26])), (Wrd7.pObj));

DEFLABEL (label_67)
  (Wrd6.Obj) = Rvl;
  goto label_101;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 7
#define DEBUGGING_LABEL_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_50_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 6
#define DEBUGGING_LABEL_51_2 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  Rvl = (current_block [OBJECT_51_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 6
#define DEBUGGING_LABEL_52_2 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  Rvl = (current_block [OBJECT_52_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 7
#define DEBUGGING_LABEL_53_2 6
#define OBJECT_53_1 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_53_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto base64_decoding_context_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_port_3)
DEFLABEL (base64_decoding_context_port_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

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

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 7
#define DEBUGGING_LABEL_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto base64_decoding_context_textP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_textP_3)
DEFLABEL (base64_decoding_context_textP_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto base64_decoding_context_input_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_input_buffer_3)
DEFLABEL (base64_decoding_context_input_buffer_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto base64_decoding_context_input_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_input_index_3)
DEFLABEL (base64_decoding_context_input_index_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 7
#define DEBUGGING_LABEL_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto base64_decoding_context_input_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_input_state_3)
DEFLABEL (base64_decoding_context_input_state_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto base64_decoding_context_output_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_output_buffer_3)
DEFLABEL (base64_decoding_context_output_buffer_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 7
#define DEBUGGING_LABEL_60_2 6
#define OBJECT_60_1 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto base64_decoding_context_pending_returnP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_context_pending_returnP_3)
DEFLABEL (base64_decoding_context_pending_returnP_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 8
#define DEBUGGING_LABEL_61_2 7
#define OBJECT_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto set_base64_decoding_context_input_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_base64_decoding_context_input_indexB_3)
DEFLABEL (set_base64_decoding_context_input_indexB_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_61_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 8
#define DEBUGGING_LABEL_62_2 7
#define OBJECT_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto set_base64_decoding_context_input_stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_base64_decoding_context_input_stateB_3)
DEFLABEL (set_base64_decoding_context_input_stateB_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_62_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 8
#define DEBUGGING_LABEL_63_2 7
#define OBJECT_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto set_base64_decoding_context_pending_returnPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_base64_decoding_context_pending_returnPB_3)
DEFLABEL (set_base64_decoding_context_pending_returnPB_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_63_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_7 9
#define ENVIRONMENT_LABEL_64_3 17
#define DEBUGGING_LABEL_64_2 16
#define OBJECT_64_3 15
#define OBJECT_64_2 14
#define OBJECT_64_1 13
#define OBJECT_64_0 12
#define FREE_REFERENCE_64_0 11
#define FREE_REFERENCES_LABEL_64_0 10
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto base64_decoding_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_64_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (base64_decoding_contextP_10)
DEFLABEL (base64_decoding_contextP_4)
  INTERRUPT_CHECK (26, LABEL_64_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
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
  Rvl = (current_block [OBJECT_64_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_64_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_5 3
#define LABEL_65_4 5
#define LABEL_65_6 7
#define LABEL_65_8 9
#define LABEL_65_9 11
#define ENVIRONMENT_LABEL_65_3 25
#define DEBUGGING_LABEL_65_2 24
#define OBJECT_65_6 23
#define OBJECT_65_5 22
#define OBJECT_65_4 21
#define OBJECT_65_3 20
#define OBJECT_65_2 19
#define OBJECT_65_1 18
#define OBJECT_65_0 17
#define EXECUTE_CACHE_65_10 13
#define EXECUTE_CACHE_65_7 15
#define FREE_REFERENCES_LABEL_65_0 12
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_65_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_65_4);
      goto decode_base64_finalize_5;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_65_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_base64_finalize_11)
DEFLABEL (decode_base64_finalize_5)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_18)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd21.Lng) > 0))
    goto label_17;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_5);

DEFLABEL (label_17)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_16;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd50.Lng))))
    goto label_16;
  (Wrd24.Obj) = ((Wrd48.pObj) [8]);
  if (! ((Wrd24.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_65_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd28.Obj) = (current_block [OBJECT_65_5]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_15;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_15;
  (Wrd29.Obj) = ((Wrd35.pObj) [2]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_15)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_65_6]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (current_block [OBJECT_65_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define LABEL_66_8 11
#define LABEL_66_9 13
#define LABEL_66_10 15
#define LABEL_66_11 17
#define LABEL_66_12 19
#define LABEL_66_13 21
#define LABEL_66_14 23
#define LABEL_66_17 25
#define LABEL_66_18 27
#define LABEL_66_19 29
#define LABEL_66_15 31
#define ENVIRONMENT_LABEL_66_3 54
#define DEBUGGING_LABEL_66_2 53
#define OBJECT_66_15 52
#define OBJECT_66_14 51
#define OBJECT_66_13 50
#define OBJECT_66_12 49
#define OBJECT_66_11 48
#define OBJECT_66_10 47
#define OBJECT_66_9 46
#define OBJECT_66_8 45
#define OBJECT_66_7 44
#define OBJECT_66_6 43
#define OBJECT_66_5 42
#define OBJECT_66_4 41
#define OBJECT_66_3 40
#define OBJECT_66_2 39
#define OBJECT_66_1 38
#define OBJECT_66_0 37
#define EXECUTE_CACHE_66_16 33
#define FREE_REFERENCE_66_0 36
#define FREE_REFERENCES_LABEL_66_0 32
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_66_4);
      goto decode_base64_update_29;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_66_8);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_66_9);
      goto loop_26;

    case 6:
      current_block = (Rpc - LABEL_66_10);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_66_11);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_66_12);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_66_13);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_66_14);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_66_17);
      goto lambda_7;

    case 12:
      current_block = (Rpc - LABEL_66_18);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_66_19);
      goto lambda_13;

    case 14:
      current_block = (Rpc - LABEL_66_15);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_base64_update_42)
DEFLABEL (decode_base64_update_29)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_53)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_66_2])))
    goto label_46;
  Rvl = (current_block [OBJECT_66_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_52;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_52;
  (Wrd24.Obj) = ((Wrd28.pObj) [4]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_51)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_50;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_50;
  (Wrd40.Obj) = ((Wrd44.pObj) [6]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_49)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_48;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_48;
  (Wrd56.Obj) = ((Wrd60.pObj) [5]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_47)
  (Wrd70.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto loop_26;

DEFLABEL (label_48)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.Obj) = (current_block [OBJECT_66_5]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (current_block [OBJECT_66_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_66_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (loop_43)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_66_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_55;
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (label_55)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_68;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_68;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_68;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pChr) = (& ((Wrd23.pChr) [(Wrd12.Lng)]));
  (Wrd16.uLng) = ((unsigned long) (((unsigned char *) (Wrd15.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (2, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_67)
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd33.Obj) == (current_block [OBJECT_66_7]))
    goto label_57;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd36.uLng) == 2))
    goto label_66;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd40.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_65)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_64;
  Wrd46 = Wrd50;

DEFLABEL (label_63)
  Wrd45 = Wrd46;
  (Wrd52.Obj) = (* (Rsp++));
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd64.uLng) == 30))
    goto label_62;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_62;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [1]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_62;
  (Wrd55.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd57.pChr) = (& ((Wrd61.pChr) [(Wrd55.Lng)]));
  (Wrd58.uLng) = ((unsigned long) (((unsigned char *) (Wrd57.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd53.Obj) = (MAKE_OBJECT (26, (Wrd58.uLng)));

DEFLABEL (label_61)
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd70.Lng) < 64L)
    goto label_57;
  (Wrd73.Obj) = (Rsp [3]);
  if ((Wrd73.Obj) == (current_block [OBJECT_66_11]))
    goto label_56;
  (Wrd75.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd75.Obj);
  goto lambda_13;

DEFLABEL (label_56)
  (Wrd76.Obj) = (current_block [OBJECT_66_2]);
  (Rsp [0]) = (Wrd76.Obj);
  goto lambda_7;

DEFLABEL (label_57)
  (Wrd106.Obj) = (Rsp [4]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 30))
    goto label_60;
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_60;
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [1]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) (Wrd101.Lng)) < ((unsigned long) (Wrd105.Lng))))
    goto label_60;
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 2))
    goto label_60;
  (Wrd90.uLng) = (OBJECT_DATUM (Wrd98.Obj));
  (Wrd93.pChr) = (& ((Wrd103.pChr) [(Wrd90.Lng)]));
  ((Wrd93.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd96.Obj)));

DEFLABEL (label_59)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! ((Wrd78.Lng) < 3L))
    goto label_58;
  (Wrd87.Lng) = ((Wrd78.Lng) + 1L);
  (Wrd88.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd88.Obj);
  goto lambda_13;

DEFLABEL (label_58)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_66_15);
  (Wrd5.Obj) = (current_block [OBJECT_66_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_13;

DEFLABEL (label_60)
  (Wrd108.Obj) = (Rsp [4]);
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.Obj) = (Rsp [0]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_10]), 3);

DEFLABEL (label_39)
  goto label_59;

DEFLABEL (label_62)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_9]), 2);

DEFLABEL (label_38)
  (Wrd53.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_12])), (Wrd47.pObj));

DEFLABEL (label_37)
  (Wrd46.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_8]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_6]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (lambda_44)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_66_17);
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_72;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_72;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [5]) = (Wrd24.Obj);

DEFLABEL (label_71)
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [7]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [8]) = (Wrd7.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_12]), 3);

DEFLABEL (label_70)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_69;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [6]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_66_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (current_block [OBJECT_66_5]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_12]), 3);

DEFLABEL (label_40)
  goto label_71;

DEFLABEL (lambda_45)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_66_19);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  if ((Wrd10.Obj) == (current_block [OBJECT_66_13]))
    goto label_74;
  (Wrd12.Obj) = (current_block [OBJECT_66_14]);
  goto label_73;

DEFLABEL (label_74)
  (Wrd12.Obj) = (current_block [OBJECT_66_11]);

DEFLABEL (label_73)
DEFLABEL (label_75)
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define LABEL_67_8 9
#define ENVIRONMENT_LABEL_67_3 16
#define DEBUGGING_LABEL_67_2 15
#define EXECUTE_CACHE_67_9 11
#define EXECUTE_CACHE_67_6 13
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto call_with_decode_base64_output_port_5;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_decode_base64_output_port_8)
DEFLABEL (call_with_decode_base64_output_port_5)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_7 7
#define ENVIRONMENT_LABEL_68_3 16
#define DEBUGGING_LABEL_68_2 15
#define EXECUTE_CACHE_68_8 9
#define EXECUTE_CACHE_68_6 11
#define FREE_REFERENCE_68_0 14
#define FREE_REFERENCES_LABEL_68_0 8
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_68_4);
      goto make_decode_base64_port_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decode_base64_port_5)
DEFLABEL (make_decode_base64_port_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_7])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_8 11
#define LABEL_69_10 13
#define LABEL_69_12 15
#define LABEL_69_13 17
#define LABEL_69_14 19
#define LABEL_69_19 21
#define LABEL_69_17 23
#define LABEL_69_15 25
#define ENVIRONMENT_LABEL_69_3 49
#define DEBUGGING_LABEL_69_2 48
#define OBJECT_69_12 47
#define OBJECT_69_11 46
#define OBJECT_69_10 45
#define OBJECT_69_9 44
#define OBJECT_69_8 43
#define OBJECT_69_7 42
#define OBJECT_69_6 41
#define OBJECT_69_5 40
#define OBJECT_69_4 39
#define OBJECT_69_3 38
#define OBJECT_69_2 37
#define OBJECT_69_1 36
#define OBJECT_69_0 35
#define EXECUTE_CACHE_69_18 27
#define EXECUTE_CACHE_69_16 29
#define EXECUTE_CACHE_69_11 31
#define EXECUTE_CACHE_69_9 33
#define FREE_REFERENCES_LABEL_69_0 26
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_69_4);
      goto decode_base64_quantum_22;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_69_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_69_10);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_69_12);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_69_13);
      goto loop_18;

    case 8:
      current_block = (Rpc - LABEL_69_14);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_69_19);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_69_17);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_69_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_base64_quantum_31)
DEFLABEL (decode_base64_quantum_22)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_43;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_43;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_41;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd29.Lng))))
    goto label_41;
  (Wrd23.Obj) = ((Wrd27.pObj) [7]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_40)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_39;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd45.Lng))))
    goto label_39;
  (Wrd39.Obj) = ((Wrd43.pObj) [4]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_38)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_69_8);
  (* (--Rsp)) = Rvl;
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_37;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd34.pObj) [3]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;

DEFLABEL (label_33)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_69_5]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_11]));

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_36;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_36;
  (Wrd16.Obj) = ((Wrd20.pObj) [8]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_69_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto loop_18;

DEFLABEL (label_36)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (current_block [OBJECT_69_6]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (current_block [OBJECT_69_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_39)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_69_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_69_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (loop_32)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_69_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_46;
  (Wrd9.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_69_6]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_12]), 3);

DEFLABEL (label_45)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_44;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [8]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_69_11]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 30))
    goto label_51;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_51;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_51;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd31.pChr) = (& ((Wrd39.pChr) [(Wrd28.Lng)]));
  (Wrd32.uLng) = ((unsigned long) (((unsigned char *) (Wrd31.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd33.Obj) = (MAKE_OBJECT (2, (Wrd32.uLng)));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_50)
  (Wrd49.Obj) = (Rsp [2]);
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd51.Obj) = (Rsp [0]);
  if ((Wrd51.Obj) == (current_block [OBJECT_69_10]))
    goto label_47;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_69_8]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_69_19);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_47)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_17]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_69_17);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_48)
  (Wrd62.Obj) = (Rsp [0]);
  if (! ((Wrd62.Obj) == (current_block [OBJECT_69_8])))
    goto label_49;
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd72.Lng) = ((Wrd71.Lng) + 1L);
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));
  (Rsp [1]) = (Wrd69.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_69_9]);
  (Rsp [2]) = (Wrd73.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_49)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_15]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_69_15);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_51)
  (Wrd44.Obj) = (Rsp [4]);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_7]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_7 7
#define LABEL_70_8 9
#define LABEL_70_9 11
#define LABEL_70_10 13
#define LABEL_70_13 15
#define LABEL_70_12 17
#define LABEL_70_15 19
#define LABEL_70_11 21
#define LABEL_70_14 23
#define LABEL_70_16 25
#define LABEL_70_17 27
#define LABEL_70_18 29
#define ENVIRONMENT_LABEL_70_3 41
#define DEBUGGING_LABEL_70_2 40
#define OBJECT_70_6 39
#define OBJECT_70_5 38
#define OBJECT_70_4 37
#define OBJECT_70_3 36
#define OBJECT_70_2 35
#define OBJECT_70_1 34
#define OBJECT_70_0 33
#define EXECUTE_CACHE_70_6 31
#define FREE_REFERENCES_LABEL_70_0 30
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_70_4);
      goto decode_base64_quantum_1_38;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_70_8);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_26;

    case 7:
      current_block = (Rpc - LABEL_70_12);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_70_15);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_70_14);
      goto continuation_24;

    case 11:
      current_block = (Rpc - LABEL_70_16);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_70_17);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_70_18);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_base64_quantum_1_48)
DEFLABEL (decode_base64_quantum_1_38)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_67;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_67;
  (Wrd9.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(3 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd9.uLng)));

DEFLABEL (label_66)
  if ((Wrd5.Obj) == (current_block [OBJECT_70_4]))
    goto label_55;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_70_14);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 6));
  (Wrd11.Obj) = (* (Rsp++));
  Wrd13 = Wrd10;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Lng) = ((Wrd13.Lng) + (Wrd14.Lng));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.Lng) = (LEFT_SHIFT ((Wrd18.Lng), 18));
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd27.Lng) = (LEFT_SHIFT ((Wrd24.Lng), 12));
  Wrd29 = Wrd21;
  (Wrd33.Lng) = ((Wrd29.Lng) + (Wrd27.Lng));
  (Wrd35.Lng) = ((Wrd33.Lng) + (Wrd15.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd38.Lng)), 16)));
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 30))
    goto label_54;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [1]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd103.Lng))))
    goto label_54;
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_54;
  ((Wrd101.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd36.uLng));

DEFLABEL (label_53)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd47.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd44.Lng)), 8)));
  (Wrd52.Lng) = ((Wrd47.Lng) & 255L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 30))
    goto label_52;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd86.Lng))))
    goto label_52;
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_52;
  ((Wrd84.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd48.uLng));

DEFLABEL (label_51)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd58.Lng) = ((Wrd57.Lng) & 255L);
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_50;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_50;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_50;
  ((Wrd67.pChr) [(2 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd53.uLng));

DEFLABEL (label_49)
  Rvl = (current_block [OBJECT_70_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_70_5]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_18]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_44)
  goto label_49;

DEFLABEL (label_52)
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.Obj) = (current_block [OBJECT_70_0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_17]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_45)
  goto label_51;

DEFLABEL (label_54)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.Obj) = (current_block [OBJECT_70_1]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_46)
  goto label_53;

DEFLABEL (label_55)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_65;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_65;
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd37.pChr)) [(2 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd29.Obj) = (MAKE_OBJECT (2, (Wrd33.uLng)));

DEFLABEL (label_64)
  if ((Wrd29.Obj) == (current_block [OBJECT_70_4]))
    goto label_61;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_12);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd9.Lng)), 2)));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd18.Lng) = (LEFT_SHIFT ((Wrd15.Lng), 10));
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd24.Lng) = (LEFT_SHIFT ((Wrd21.Lng), 4));
  Wrd26 = Wrd18;
  (Wrd29.Lng) = ((Wrd26.Lng) + (Wrd24.Lng));
  (Wrd31.Lng) = ((Wrd29.Lng) + (Wrd12.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  Wrd35 = Wrd31;
  (Wrd38.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd35.Lng)), 8)));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_60;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_60;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_60;
  ((Wrd67.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd33.uLng));

DEFLABEL (label_59)
  (Wrd39.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) & 255L);
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd60.uLng) == 30)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_57)
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd58.Lng))))
    goto label_56;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_56;
  ((Wrd56.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd41.uLng));
  Rsp = (& (Rsp [4]));

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_70_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd72.Obj) = (Rsp [5]);
  (Wrd73.Obj) = (current_block [OBJECT_70_1]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_43)
  goto label_59;

DEFLABEL (label_61)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd61.Lng) = (LEFT_SHIFT ((Wrd58.Lng), 2));
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd67.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd64.Lng)), 4)));
  Wrd69 = Wrd61;
  (Wrd71.Lng) = ((Wrd69.Lng) + (Wrd67.Lng));
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 30))
    goto label_63;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [1]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd82.Lng))))
    goto label_63;
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_63;
  ((Wrd80.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd68.uLng));

DEFLABEL (label_62)
  Rvl = (current_block [OBJECT_70_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_70_1]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_6]), 3);

DEFLABEL (label_42)
  goto label_62;

DEFLABEL (label_65)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_70_5]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 2);

DEFLABEL (label_41)
  (Wrd29.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_70_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 2);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_70_11);
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_5 3
#define LABEL_71_4 5
#define LABEL_71_6 7
#define LABEL_71_7 9
#define LABEL_71_8 11
#define ENVIRONMENT_LABEL_71_3 20
#define DEBUGGING_LABEL_71_2 19
#define OBJECT_71_1 18
#define OBJECT_71_0 17
#define EXECUTE_CACHE_71_9 13
#define FREE_REFERENCE_71_0 16
#define FREE_REFERENCES_LABEL_71_0 12
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_71_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_71_4);
      goto decode_base64_char_5;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_71_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_base64_char_11)
DEFLABEL (decode_base64_char_5)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_19;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_19;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_19;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_18)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_17;
  Wrd29 = Wrd33;

DEFLABEL (label_16)
  Wrd28 = Wrd29;
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd47.uLng) == 30))
    goto label_15;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_15;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_15;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd40.pChr) = (& ((Wrd44.pChr) [(Wrd38.Lng)]));
  (Wrd41.uLng) = ((unsigned long) (((unsigned char *) (Wrd40.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd36.Obj) = (MAKE_OBJECT (26, (Wrd41.uLng)));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd36.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) > 64L)
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_71_1]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_71_5);
  goto label_12;

DEFLABEL (label_15)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 2);

DEFLABEL (label_9)
  (Wrd36.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_7])), (Wrd30.pObj));

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 6
#define DEBUGGING_LABEL_72_2 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  Rvl = (current_block [OBJECT_72_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 6
#define DEBUGGING_LABEL_73_2 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  Rvl = (current_block [OBJECT_73_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 7
#define DEBUGGING_LABEL_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 6
#define DEBUGGING_LABEL_75_2 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  Rvl = (current_block [OBJECT_75_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 7
#define DEBUGGING_LABEL_76_2 6
#define OBJECT_76_1 5
#define OBJECT_76_0 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_76_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 7
#define DEBUGGING_LABEL_77_2 6
#define OBJECT_77_1 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto binhex40_decoding_context_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_port_3)
DEFLABEL (binhex40_decoding_context_port_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

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

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 7
#define DEBUGGING_LABEL_78_2 6
#define OBJECT_78_1 5
#define OBJECT_78_0 4
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto binhex40_decoding_context_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_state_3)
DEFLABEL (binhex40_decoding_context_state_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto binhex40_decoding_context_line_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_line_buffer_3)
DEFLABEL (binhex40_decoding_context_line_buffer_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define ENVIRONMENT_LABEL_80_3 7
#define DEBUGGING_LABEL_80_2 6
#define OBJECT_80_1 5
#define OBJECT_80_0 4
#define FREE_REFERENCES_LABEL_80_0 4
#define NUMBER_OF_LINKER_SECTIONS_80_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto binhex40_decoding_context_input_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_input_buffer_3)
DEFLABEL (binhex40_decoding_context_input_buffer_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_80_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 7
#define DEBUGGING_LABEL_81_2 6
#define OBJECT_81_1 5
#define OBJECT_81_0 4
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto binhex40_decoding_context_input_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_input_index_3)
DEFLABEL (binhex40_decoding_context_input_index_0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 7
#define DEBUGGING_LABEL_82_2 6
#define OBJECT_82_1 5
#define OBJECT_82_0 4
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto binhex40_decoding_context_output_buffer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_context_output_buffer_3)
DEFLABEL (binhex40_decoding_context_output_buffer_0)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 8
#define DEBUGGING_LABEL_83_2 7
#define OBJECT_83_2 6
#define OBJECT_83_1 5
#define OBJECT_83_0 4
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto set_binhex40_decoding_context_stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decoding_context_stateB_3)
DEFLABEL (set_binhex40_decoding_context_stateB_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_83_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_83_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 8
#define DEBUGGING_LABEL_84_2 7
#define OBJECT_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto set_binhex40_decoding_context_line_bufferB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decoding_context_line_bufferB_3)
DEFLABEL (set_binhex40_decoding_context_line_bufferB_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_84_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 8
#define DEBUGGING_LABEL_85_2 7
#define OBJECT_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto set_binhex40_decoding_context_input_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decoding_context_input_indexB_3)
DEFLABEL (set_binhex40_decoding_context_input_indexB_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_85_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_7 9
#define ENVIRONMENT_LABEL_86_3 17
#define DEBUGGING_LABEL_86_2 16
#define OBJECT_86_3 15
#define OBJECT_86_2 14
#define OBJECT_86_1 13
#define OBJECT_86_0 12
#define FREE_REFERENCE_86_0 11
#define FREE_REFERENCES_LABEL_86_0 10
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto binhex40_decoding_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_86_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decoding_contextP_10)
DEFLABEL (binhex40_decoding_contextP_4)
  INTERRUPT_CHECK (26, LABEL_86_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
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
  Rvl = (current_block [OBJECT_86_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_86_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_6 7
#define ENVIRONMENT_LABEL_87_3 16
#define DEBUGGING_LABEL_87_2 15
#define EXECUTE_CACHE_87_9 9
#define EXECUTE_CACHE_87_8 11
#define EXECUTE_CACHE_87_7 13
#define FREE_REFERENCES_LABEL_87_0 8
#define NUMBER_OF_LINKER_SECTIONS_87_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_87_4);
      goto decode_binhex40_initialize_2;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_87_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_initialize_5)
DEFLABEL (decode_binhex40_initialize_2)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define ENVIRONMENT_LABEL_88_3 23
#define DEBUGGING_LABEL_88_2 22
#define OBJECT_88_6 21
#define OBJECT_88_5 20
#define OBJECT_88_4 19
#define OBJECT_88_3 18
#define OBJECT_88_2 17
#define OBJECT_88_1 16
#define OBJECT_88_0 15
#define EXECUTE_CACHE_88_9 9
#define EXECUTE_CACHE_88_8 11
#define EXECUTE_CACHE_88_7 13
#define FREE_REFERENCES_LABEL_88_0 8
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_88_4);
      goto decode_binhex40_update_7;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_update_12)
DEFLABEL (decode_binhex40_update_7)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd37.Obj) = (Rsp [0]);
  if (! ((Wrd37.Obj) == (current_block [OBJECT_88_2])))
    goto label_13;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (label_13)
  if (! ((Wrd37.Obj) == (current_block [OBJECT_88_3])))
    goto label_14;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (label_14)
  if ((Wrd37.Obj) == (current_block [OBJECT_88_4]))
    goto label_15;
  (Wrd43.Obj) = (current_block [OBJECT_88_6]);
  (Rsp [4]) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd44.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_88_5]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_88_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_88_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_8 9
#define ENVIRONMENT_LABEL_89_3 27
#define DEBUGGING_LABEL_89_2 26
#define OBJECT_89_8 25
#define OBJECT_89_7 24
#define OBJECT_89_6 23
#define OBJECT_89_5 22
#define OBJECT_89_4 21
#define OBJECT_89_3 20
#define OBJECT_89_2 19
#define OBJECT_89_1 18
#define OBJECT_89_0 17
#define EXECUTE_CACHE_89_9 11
#define EXECUTE_CACHE_89_10 13
#define EXECUTE_CACHE_89_7 15
#define FREE_REFERENCES_LABEL_89_0 10
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_89_4);
      goto decode_binhex40_finalize_8;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_89_8);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_finalize_14)
DEFLABEL (decode_binhex40_finalize_8)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == (current_block [OBJECT_89_2]))
    goto label_20;
  if ((Wrd37.Obj) == (current_block [OBJECT_89_4]))
    goto label_18;
  if ((Wrd37.Obj) == (current_block [OBJECT_89_6]))
    goto label_15;
  (Wrd43.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_89_8]);
  (Rsp [1]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (label_15)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_17;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_17;
  (Wrd46.Obj) = ((Wrd52.pObj) [2]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_9]));

DEFLABEL (label_17)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (current_block [OBJECT_89_7]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_12)
  (Wrd46.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd63.Obj) = (current_block [OBJECT_89_5]);
  (Rsp [2]) = (Wrd63.Obj);

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (label_20)
  (Wrd65.Obj) = (current_block [OBJECT_89_3]);
  (Rsp [2]) = (Wrd65.Obj);
  goto label_19;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_89_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_89_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_7 7
#define LABEL_90_8 9
#define ENVIRONMENT_LABEL_90_3 16
#define DEBUGGING_LABEL_90_2 15
#define EXECUTE_CACHE_90_9 11
#define EXECUTE_CACHE_90_6 13
#define FREE_REFERENCES_LABEL_90_0 10
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto call_with_decode_binhex40_output_port_5;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_decode_binhex40_output_port_8)
DEFLABEL (call_with_decode_binhex40_output_port_5)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_7 7
#define ENVIRONMENT_LABEL_91_3 16
#define DEBUGGING_LABEL_91_2 15
#define EXECUTE_CACHE_91_8 9
#define EXECUTE_CACHE_91_6 11
#define FREE_REFERENCE_91_0 14
#define FREE_REFERENCES_LABEL_91_0 8
#define NUMBER_OF_LINKER_SECTIONS_91_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_91_4);
      goto make_decode_binhex40_port_1;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_91_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decode_binhex40_port_5)
DEFLABEL (make_decode_binhex40_port_1)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_7])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_9 7
#define LABEL_92_6 9
#define LABEL_92_11 11
#define LABEL_92_8 13
#define LABEL_92_13 15
#define LABEL_92_14 17
#define LABEL_92_15 19
#define LABEL_92_17 21
#define ENVIRONMENT_LABEL_92_3 44
#define DEBUGGING_LABEL_92_2 43
#define OBJECT_92_7 42
#define OBJECT_92_6 41
#define OBJECT_92_5 40
#define OBJECT_92_4 39
#define OBJECT_92_3 38
#define OBJECT_92_2 37
#define OBJECT_92_1 36
#define OBJECT_92_0 35
#define EXECUTE_CACHE_92_18 23
#define EXECUTE_CACHE_92_16 25
#define EXECUTE_CACHE_92_12 27
#define EXECUTE_CACHE_92_10 29
#define EXECUTE_CACHE_92_7 31
#define FREE_REFERENCE_92_0 34
#define FREE_REFERENCES_LABEL_92_0 22
#define NUMBER_OF_LINKER_SECTIONS_92_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd53;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_92_4);
      goto decode_binhex40_seeking_comment_12;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_92_9);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_92_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_92_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_92_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_92_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_92_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_92_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_92_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_seeking_comment_20)
DEFLABEL (decode_binhex40_seeking_comment_12)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_31;
  Wrd9 = Wrd13;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_92_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_26;
  (Wrd32.Obj) = (current_block [OBJECT_92_4]);
  ((Wrd36.pObj) [3]) = (Wrd32.Obj);

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_24;
  ((Wrd19.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_92_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_15);
  (Rsp [4]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_22;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_21)
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_18]));

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_7]), 1);

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_92_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_26)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_92_5]);
  (Wrd43.Obj) = (current_block [OBJECT_92_4]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 3);

DEFLABEL (label_17)
  goto label_25;

DEFLABEL (label_27)
  (Wrd47.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_92_0]);
  (Rsp [4]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd49.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 62)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 3);

DEFLABEL (label_29)
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd60.Lng))))
    goto label_28;
  (Wrd53.Obj) = (Rsp [2]);
  ((Wrd58.pObj) [4]) = (Wrd53.Obj);
  Rvl = (current_block [OBJECT_92_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_9])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_92_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define LABEL_93_7 9
#define LABEL_93_8 11
#define LABEL_93_9 13
#define LABEL_93_10 15
#define LABEL_93_11 17
#define LABEL_93_12 19
#define LABEL_93_13 21
#define LABEL_93_14 23
#define LABEL_93_15 25
#define ENVIRONMENT_LABEL_93_3 45
#define DEBUGGING_LABEL_93_2 44
#define OBJECT_93_12 43
#define OBJECT_93_11 42
#define OBJECT_93_10 41
#define OBJECT_93_9 40
#define OBJECT_93_8 39
#define OBJECT_93_7 38
#define OBJECT_93_6 37
#define OBJECT_93_5 36
#define OBJECT_93_4 35
#define OBJECT_93_3 34
#define OBJECT_93_2 33
#define OBJECT_93_1 32
#define OBJECT_93_0 31
#define EXECUTE_CACHE_93_16 27
#define FREE_REFERENCE_93_0 30
#define FREE_REFERENCES_LABEL_93_0 26
#define NUMBER_OF_LINKER_SECTIONS_93_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd93;
  machine_word Wrd156;
  machine_word Wrd101;
  machine_word Wrd104;
  machine_word Wrd107;
  machine_word Wrd103;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd155;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd165;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd167;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd35;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_93_4);
      goto decode_binhex40_decoding_21;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_93_8);
      goto loop_18;

    case 5:
      current_block = (Rpc - LABEL_93_9);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_93_10);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_93_11);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_93_12);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_93_13);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_93_14);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_93_15);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_decoding_32)
DEFLABEL (decode_binhex40_decoding_21)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_35;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd29.Lng))))
    goto label_35;
  (Wrd23.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_34)
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto loop_18;

DEFLABEL (label_35)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_93_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_93_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (loop_33)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_93_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_41;
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_93_2]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_11]), 3);

DEFLABEL (label_39)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_38;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [6]) = (Wrd15.Obj);

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_93_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd28.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 30))
    goto label_60;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_60;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_60;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd35.pChr) = (& ((Wrd43.pChr) [(Wrd32.Lng)]));
  (Wrd36.uLng) = ((unsigned long) (((unsigned char *) (Wrd35.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd37.Obj) = (MAKE_OBJECT (2, (Wrd36.uLng)));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_59)
  (Wrd53.Obj) = (Rsp [0]);
  if ((Wrd53.Obj) == (current_block [OBJECT_93_4]))
    goto label_54;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd56.uLng) == 2))
    goto label_53;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd60.Obj) = (MAKE_OBJECT (26, (Wrd59.uLng)));
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_52)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93_0]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_51;
  Wrd66 = Wrd70;

DEFLABEL (label_50)
  Wrd65 = Wrd66;
  (Wrd72.Obj) = (* (Rsp++));
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd84.uLng) == 30))
    goto label_49;
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_49;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [1]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) (Wrd80.Lng)) < ((unsigned long) (Wrd83.Lng))))
    goto label_49;
  (Wrd75.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd77.pChr) = (& ((Wrd81.pChr) [(Wrd75.Lng)]));
  (Wrd78.uLng) = ((unsigned long) (((unsigned char *) (Wrd77.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd73.Obj) = (MAKE_OBJECT (26, (Wrd78.uLng)));

DEFLABEL (label_48)
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if ((Wrd90.Lng) < 64L)
    goto label_43;
  (Wrd93.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd93.Obj);

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));
  goto loop_18;

DEFLABEL (label_43)
  (Wrd126.Obj) = (Rsp [4]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 30))
    goto label_47;
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_47;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [1]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) (Wrd121.Lng)) < ((unsigned long) (Wrd125.Lng))))
    goto label_47;
  (Wrd116.Obj) = (Rsp [0]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 2))
    goto label_47;
  (Wrd110.uLng) = (OBJECT_DATUM (Wrd118.Obj));
  (Wrd113.pChr) = (& ((Wrd123.pChr) [(Wrd110.Lng)]));
  ((Wrd113.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd116.Obj)));

DEFLABEL (label_46)
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if ((Wrd96.Lng) < 3L)
    goto label_45;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_15]))));
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_44)
  (Wrd156.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd156.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_16]));

DEFLABEL (label_45)
  (Wrd103.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd103.Obj);
  (Wrd107.Lng) = ((Wrd96.Lng) + 1L);
  (Wrd104.Obj) = (LONG_TO_FIXNUM (Wrd107.Lng));
  (Rsp [3]) = (Wrd104.Obj);
  goto label_42;

DEFLABEL (label_47)
  (Wrd128.Obj) = (Rsp [4]);
  (Wrd129.Obj) = (Rsp [3]);
  (Wrd130.Obj) = (Rsp [0]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_14]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_5]), 3);

DEFLABEL (label_29)
  goto label_46;

DEFLABEL (label_49)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_13]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_9]), 2);

DEFLABEL (label_28)
  (Wrd73.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93_12])), (Wrd67.pObj));

DEFLABEL (label_27)
  (Wrd66.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_8]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd134.Obj) = (Rsp [3]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if ((Wrd135.Lng) > 0)
    goto label_56;

DEFLABEL (label_55)
  (Wrd136.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd136.Obj);
  (Wrd137.Obj) = (current_block [OBJECT_93_6]);
  (Rsp [7]) = (Wrd137.Obj);
  (Wrd138.Obj) = (current_block [OBJECT_93_7]);
  (Rsp [8]) = (Wrd138.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd150.Obj) = (Rsp [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 62))
    goto label_38;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [0]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd149.Lng))))
    goto label_38;
  ((Wrd147.pObj) [3]) = (Wrd138.Obj);
  goto label_40;

DEFLABEL (label_56)
  (Wrd174.Obj) = (Rsp [4]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if (! ((Wrd175.uLng) == 30))
    goto label_58;
  (Wrd167.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd167.uLng) == 26))
    goto label_58;
  (Wrd171.pObj) = (OBJECT_ADDRESS (Wrd174.Obj));
  (Wrd172.Obj) = ((Wrd171.pObj) [1]);
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd172.Obj));
  if (! (((unsigned long) (Wrd135.Lng)) < ((unsigned long) (Wrd173.Lng))))
    goto label_58;
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd165.uLng) == 2))
    goto label_58;
  (Wrd158.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd161.pChr) = (& ((Wrd171.pChr) [(Wrd158.Lng)]));
  ((Wrd161.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd53.Obj)));

DEFLABEL (label_57)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd155.Obj);
  goto label_44;

DEFLABEL (label_58)
  (Wrd176.Obj) = (Rsp [4]);
  (Wrd177.Obj) = (Rsp [3]);
  (Wrd178.Obj) = (Rsp [0]);
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_5]), 3);

DEFLABEL (label_30)
  goto label_57;

DEFLABEL (label_60)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_93_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_93_12]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_18;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_93_7);
  goto label_55;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_7 9
#define LABEL_94_8 11
#define ENVIRONMENT_LABEL_94_3 23
#define DEBUGGING_LABEL_94_2 22
#define OBJECT_94_4 21
#define OBJECT_94_3 20
#define OBJECT_94_2 19
#define OBJECT_94_1 18
#define OBJECT_94_0 17
#define EXECUTE_CACHE_94_10 13
#define EXECUTE_CACHE_94_9 15
#define FREE_REFERENCES_LABEL_94_0 12
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_94_4);
      goto decode_binhex40_quantum_5;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_94_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_quantum_11)
DEFLABEL (decode_binhex40_quantum_5)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_15;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_15;
  (Wrd23.Obj) = ((Wrd27.pObj) [5]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_14)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_13;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_13;
  (Wrd37.Obj) = ((Wrd43.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_94_8);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_94_4]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (label_13)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_94_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_9)
  (Wrd37.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_94_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_94_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_8 9
#define LABEL_95_9 11
#define LABEL_95_10 13
#define LABEL_95_13 15
#define LABEL_95_12 17
#define LABEL_95_15 19
#define LABEL_95_11 21
#define LABEL_95_14 23
#define LABEL_95_16 25
#define LABEL_95_17 27
#define LABEL_95_18 29
#define ENVIRONMENT_LABEL_95_3 41
#define DEBUGGING_LABEL_95_2 40
#define OBJECT_95_6 39
#define OBJECT_95_5 38
#define OBJECT_95_4 37
#define OBJECT_95_3 36
#define OBJECT_95_2 35
#define OBJECT_95_1 34
#define OBJECT_95_0 33
#define EXECUTE_CACHE_95_6 31
#define FREE_REFERENCES_LABEL_95_0 30
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_95_4);
      goto decode_binhex40_quantum_1_38;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_95_8);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_95_9);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_95_10);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_95_12);
      goto continuation_25;

    case 8:
      current_block = (Rpc - LABEL_95_15);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_95_11);
      goto continuation_28;

    case 10:
      current_block = (Rpc - LABEL_95_14);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_95_16);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_95_17);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_95_18);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_quantum_1_48)
DEFLABEL (decode_binhex40_quantum_1_38)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_67;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_67;
  (Wrd9.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(2 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd9.uLng)));

DEFLABEL (label_66)
  if ((Wrd5.Obj) == (current_block [OBJECT_95_4]))
    goto label_63;
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 30))
    goto label_62;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_62;
  (Wrd28.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(3 + (ADDRESS_UNITS_PER_OBJECT * 2))]));
  (Wrd24.Obj) = (MAKE_OBJECT (2, (Wrd28.uLng)));

DEFLABEL (label_61)
  if ((Wrd24.Obj) == (current_block [OBJECT_95_4]))
    goto label_55;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_95_6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_95_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_95_14);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 6));
  (Wrd11.Obj) = (* (Rsp++));
  Wrd13 = Wrd10;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.Lng) = ((Wrd13.Lng) + (Wrd14.Lng));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd21.Lng) = (LEFT_SHIFT ((Wrd18.Lng), 18));
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd27.Lng) = (LEFT_SHIFT ((Wrd24.Lng), 12));
  Wrd29 = Wrd21;
  (Wrd33.Lng) = ((Wrd29.Lng) + (Wrd27.Lng));
  (Wrd35.Lng) = ((Wrd33.Lng) + (Wrd15.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd38.Lng)), 16)));
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 30))
    goto label_54;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [1]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd103.Lng))))
    goto label_54;
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_54;
  ((Wrd101.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd36.uLng));

DEFLABEL (label_53)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd47.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd44.Lng)), 8)));
  (Wrd52.Lng) = ((Wrd47.Lng) & 255L);
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 30))
    goto label_52;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [1]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd86.Lng))))
    goto label_52;
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_52;
  ((Wrd84.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd48.uLng));

DEFLABEL (label_51)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd58.Lng) = ((Wrd57.Lng) & 255L);
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_50;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_50;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_50;
  ((Wrd67.pChr) [(2 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd53.uLng));

DEFLABEL (label_49)
  Rvl = (current_block [OBJECT_95_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_95_2]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_18]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_44)
  goto label_49;

DEFLABEL (label_52)
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.Obj) = (current_block [OBJECT_95_0]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_17]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_45)
  goto label_51;

DEFLABEL (label_54)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.Obj) = (current_block [OBJECT_95_1]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_16]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_46)
  goto label_53;

DEFLABEL (label_55)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_95_2]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_95_12);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd9.Lng)), 2)));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd18.Lng) = (LEFT_SHIFT ((Wrd15.Lng), 10));
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd24.Lng) = (LEFT_SHIFT ((Wrd21.Lng), 4));
  Wrd26 = Wrd18;
  (Wrd29.Lng) = ((Wrd26.Lng) + (Wrd24.Lng));
  (Wrd31.Lng) = ((Wrd29.Lng) + (Wrd12.Lng));
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  Wrd35 = Wrd31;
  (Wrd38.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd35.Lng)), 8)));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_60;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_60;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_60;
  ((Wrd67.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd33.uLng));

DEFLABEL (label_59)
  (Wrd39.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) & 255L);
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd60.uLng) == 30)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_57)
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd58.Lng))))
    goto label_56;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_56;
  ((Wrd56.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd41.uLng));
  Rsp = (& (Rsp [4]));

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_95_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd72.Obj) = (Rsp [5]);
  (Wrd73.Obj) = (current_block [OBJECT_95_1]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_43)
  goto label_59;

DEFLABEL (label_62)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_95_6]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_3]), 2);

DEFLABEL (label_41)
  (Wrd24.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_63)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd61.Lng) = (LEFT_SHIFT ((Wrd58.Lng), 2));
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd67.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd64.Lng)), 4)));
  Wrd69 = Wrd61;
  (Wrd71.Lng) = ((Wrd69.Lng) + (Wrd67.Lng));
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 30))
    goto label_65;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [1]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd82.Lng))))
    goto label_65;
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_65;
  ((Wrd80.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd68.uLng));

DEFLABEL (label_64)
  Rvl = (current_block [OBJECT_95_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_95_1]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_5]), 3);

DEFLABEL (label_42)
  goto label_64;

DEFLABEL (label_67)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_95_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_3]), 2);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_95_11);
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_5 3
#define LABEL_96_4 5
#define LABEL_96_6 7
#define LABEL_96_7 9
#define LABEL_96_8 11
#define LABEL_96_9 13
#define ENVIRONMENT_LABEL_96_3 23
#define DEBUGGING_LABEL_96_2 22
#define OBJECT_96_2 21
#define OBJECT_96_1 20
#define OBJECT_96_0 19
#define EXECUTE_CACHE_96_10 15
#define FREE_REFERENCE_96_0 18
#define FREE_REFERENCES_LABEL_96_0 14
#define NUMBER_OF_LINKER_SECTIONS_96_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_96_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_96_4);
      goto decode_binhex40_char_6;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_96_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_96_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_96_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_binhex40_char_13)
DEFLABEL (decode_binhex40_char_6)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_23;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_23;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_23;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pChr) = (& ((Wrd18.pChr) [(Wrd7.Lng)]));
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd10.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_22)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_21;
  Wrd29 = Wrd33;

DEFLABEL (label_20)
  Wrd28 = Wrd29;
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd47.uLng) == 30))
    goto label_19;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_19;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_19;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd39.pChr) = (& ((Wrd44.pChr) [(Wrd37.Lng)]));
  (Wrd40.uLng) = ((unsigned long) (((unsigned char *) (Wrd39.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd41.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_18)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd54.Lng) > 64L)
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 30))
    goto label_17;
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_17;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [1]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) (Wrd73.Lng)) < ((unsigned long) (Wrd77.Lng))))
    goto label_17;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd70.Obj));
  (Wrd67.pChr) = (& ((Wrd75.pChr) [(Wrd64.Lng)]));
  (Wrd68.uLng) = ((unsigned long) (((unsigned char *) (Wrd67.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd69.Obj) = (MAKE_OBJECT (2, (Wrd68.uLng)));
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_16)
  (Wrd85.Obj) = (current_block [OBJECT_96_2]);
  (* (--Rsp)) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_96_5);
  goto label_14;

DEFLABEL (label_17)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_0]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_7])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_0]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_6 7
#define ENVIRONMENT_LABEL_97_3 16
#define DEBUGGING_LABEL_97_2 15
#define EXECUTE_CACHE_97_8 9
#define EXECUTE_CACHE_97_7 11
#define FREE_REFERENCE_97_0 14
#define FREE_REFERENCES_LABEL_97_0 8
#define NUMBER_OF_LINKER_SECTIONS_97_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_97_4);
      goto make_binhex40_run_length_decoding_port_1;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_97_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_binhex40_run_length_decoding_port_5)
DEFLABEL (make_binhex40_run_length_decoding_port_1)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_10 7
#define LABEL_98_11 9
#define LABEL_98_14 11
#define LABEL_98_15 13
#define LABEL_98_8 15
#define LABEL_98_16 17
#define LABEL_98_17 19
#define LABEL_98_18 21
#define LABEL_98_19 23
#define LABEL_98_7 25
#define LABEL_98_12 27
#define ENVIRONMENT_LABEL_98_3 45
#define DEBUGGING_LABEL_98_2 44
#define OBJECT_98_8 43
#define OBJECT_98_7 42
#define OBJECT_98_6 41
#define OBJECT_98_5 40
#define OBJECT_98_4 39
#define OBJECT_98_3 38
#define OBJECT_98_2 37
#define OBJECT_98_1 36
#define OBJECT_98_0 35
#define EXECUTE_CACHE_98_13 29
#define EXECUTE_CACHE_98_9 31
#define EXECUTE_CACHE_98_6 33
#define FREE_REFERENCES_LABEL_98_0 28
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd115;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd116;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd43;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd41;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd174;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_98_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_98_10);
      goto continuation_18;

    case 3:
      current_block = (Rpc - LABEL_98_11);
      goto do_loop_16;

    case 4:
      current_block = (Rpc - LABEL_98_14);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_98_15);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_98_8);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_98_16);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_98_17);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_98_18);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_98_19);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_98_7);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_98_12);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_29)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_98_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_8);
  (* (--Rsp)) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_50;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_50;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_48;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_48;
  (Wrd25.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_47)
  (Wrd144.Obj) = (Rsp [2]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 62))
    goto label_46;
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [0]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd143.Lng))))
    goto label_46;
  (Wrd41.Obj) = ((Wrd141.pObj) [4]);
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_14]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [6]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 2))
    goto label_41;
  (Wrd89.uLng) = (OBJECT_DATUM (Wrd85.Obj));
  (Wrd90.Obj) = (MAKE_OBJECT (26, (Wrd89.uLng)));
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_40)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.Obj) = (current_block [OBJECT_98_7]);
  if ((Wrd95.Obj) == (Wrd96.Obj))
    goto label_37;
  (Wrd97.Obj) = (Rsp [3]);
  if ((Wrd97.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  (* (--Rsp)) = (Wrd96.Obj);
  goto do_loop_16;

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  (Wrd101.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd101.Obj);
  (Wrd102.Obj) = (current_block [OBJECT_98_3]);
  (Rsp [1]) = (Wrd102.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd115.uLng) == 62)
    goto label_33;

DEFLABEL (label_32)
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_8]), 3);

DEFLABEL (label_33)
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd113.Lng))))
    goto label_32;
  ((Wrd111.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_98_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd116.Obj) = (Rsp [3]);
  if ((Wrd116.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_10]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_98_10);

DEFLABEL (label_39)
  (Wrd123.Obj) = (current_block [OBJECT_98_0]);
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (current_block [OBJECT_98_4]);
  (Rsp [2]) = (Wrd125.Obj);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd137.uLng) == 62))
    goto label_32;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd135.Lng))))
    goto label_32;
  ((Wrd133.pObj) [3]) = (Wrd125.Obj);

DEFLABEL (label_38)
  Rsp = (& (Rsp [4]));
  goto label_36;

DEFLABEL (label_41)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_19]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_6]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd43.Obj) = (Rsp [5]);
  if ((Wrd43.Obj) == (current_block [OBJECT_98_4]))
    goto label_45;
  (Wrd45.Obj) = (Rsp [1]);
  if ((Wrd45.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_98_15);

DEFLABEL (label_44)
  (Wrd52.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_98_0]);
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_32;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd64.Lng))))
    goto label_32;
  ((Wrd62.pObj) [3]) = (Wrd54.Obj);
  goto label_35;

DEFLABEL (label_45)
  (Wrd67.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_98_3]);
  (Rsp [1]) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_98_5]);
  (Rsp [2]) = (Wrd69.Obj);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_32;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd79.Lng))))
    goto label_32;
  ((Wrd77.pObj) [4]) = (Wrd69.Obj);
  goto label_35;

DEFLABEL (label_46)
  (Wrd146.Obj) = (Rsp [2]);
  (Wrd147.Obj) = (current_block [OBJECT_98_3]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_18]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_42;

DEFLABEL (label_48)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_98_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_98_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_98_14);
  goto label_36;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_98_7);
  goto label_34;

DEFLABEL (do_loop_30)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_98_11);
  (Wrd152.Obj) = (Rsp [0]);
  (Wrd153.Obj) = (Rsp [1]);
  if ((Wrd152.Obj) == (Wrd153.Obj))
    goto label_51;
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_12]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (Wrd157.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd158.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd158.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_98_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_16;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (Wrd160.Obj) = (current_block [OBJECT_98_0]);
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd161.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd161.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd174.uLng) == 62))
    goto label_32;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [0]);
  (Wrd172.Lng) = (FIXNUM_TO_LONG (Wrd171.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd172.Lng))))
    goto label_32;
  ((Wrd170.pObj) [3]) = ((SCHEME_OBJECT) 0);
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_7 5
#define LABEL_99_8 7
#define LABEL_99_9 9
#define LABEL_99_10 11
#define LABEL_99_5 13
#define LABEL_99_11 15
#define LABEL_99_12 17
#define LABEL_99_13 19
#define ENVIRONMENT_LABEL_99_3 34
#define DEBUGGING_LABEL_99_2 33
#define OBJECT_99_5 32
#define OBJECT_99_4 31
#define OBJECT_99_3 30
#define OBJECT_99_2 29
#define OBJECT_99_1 28
#define OBJECT_99_0 27
#define EXECUTE_CACHE_99_15 21
#define EXECUTE_CACHE_99_14 23
#define EXECUTE_CACHE_99_6 25
#define FREE_REFERENCES_LABEL_99_0 20
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd47;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
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
      current_block = (Rpc - LABEL_99_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_99_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_99_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_99_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_99_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_99_11);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_99_12);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_99_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 62))
    goto label_28;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_28;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_27)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_26;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_26;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_25)
  (Wrd38.Obj) = (Rsp [1]);
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_99_9);
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_24;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd78.Lng))))
    goto label_24;
  ((Wrd76.pObj) [3]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_22;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_22;
  (Wrd47.Obj) = ((Wrd59.pObj) [4]);
  if (! ((Wrd47.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  (Wrd49.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_14]));

DEFLABEL (label_20)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_99_5]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_99_7);
  (Wrd96.Obj) = (Rsp [2]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 62))
    goto label_21;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd95.Lng))))
    goto label_21;
  ((Wrd93.pObj) [4]) = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_21)
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.Obj) = (current_block [OBJECT_99_0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 3);

DEFLABEL (label_16)
  goto label_19;

DEFLABEL (label_22)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (current_block [OBJECT_99_0]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_13]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_3]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (label_24)
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.Obj) = (current_block [OBJECT_99_2]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_10]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 3);

DEFLABEL (label_15)
  goto label_23;

DEFLABEL (label_26)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_99_4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_99_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_3]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 7
#define DEBUGGING_LABEL_100_2 6
#define OBJECT_100_1 5
#define OBJECT_100_0 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto binhex40_rld_state_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_rld_state_port_3)
DEFLABEL (binhex40_rld_state_port_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_100_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 2);

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

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 7
#define DEBUGGING_LABEL_101_2 6
#define OBJECT_101_1 5
#define OBJECT_101_0 4
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto binhex40_rld_state_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_rld_state_char_3)
DEFLABEL (binhex40_rld_state_char_0)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_101_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 7
#define DEBUGGING_LABEL_102_2 6
#define OBJECT_102_1 5
#define OBJECT_102_0 4
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_102_4);
      goto binhex40_rld_state_marker_seenP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_rld_state_marker_seenP_3)
DEFLABEL (binhex40_rld_state_marker_seenP_0)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_102_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define ENVIRONMENT_LABEL_103_3 8
#define DEBUGGING_LABEL_103_2 7
#define OBJECT_103_2 6
#define OBJECT_103_1 5
#define OBJECT_103_0 4
#define FREE_REFERENCES_LABEL_103_0 4
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_103_4);
      goto set_binhex40_rld_state_charB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_rld_state_charB_3)
DEFLABEL (set_binhex40_rld_state_charB_0)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_103_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_103_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define ENVIRONMENT_LABEL_104_3 8
#define DEBUGGING_LABEL_104_2 7
#define OBJECT_104_2 6
#define OBJECT_104_1 5
#define OBJECT_104_0 4
#define FREE_REFERENCES_LABEL_104_0 4
#define NUMBER_OF_LINKER_SECTIONS_104_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_104_4);
      goto set_binhex40_rld_state_marker_seenPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_rld_state_marker_seenPB_3)
DEFLABEL (set_binhex40_rld_state_marker_seenPB_0)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_104_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_104_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_5 5
#define LABEL_105_6 7
#define LABEL_105_7 9
#define ENVIRONMENT_LABEL_105_3 17
#define DEBUGGING_LABEL_105_2 16
#define OBJECT_105_3 15
#define OBJECT_105_2 14
#define OBJECT_105_1 13
#define OBJECT_105_0 12
#define FREE_REFERENCE_105_0 11
#define FREE_REFERENCES_LABEL_105_0 10
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_105_4);
      goto binhex40_rld_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_105_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_105_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_105_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_rld_stateP_10)
DEFLABEL (binhex40_rld_stateP_4)
  INTERRUPT_CHECK (26, LABEL_105_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_0]));
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
  Rvl = (current_block [OBJECT_105_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_105_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define LABEL_106_6 7
#define ENVIRONMENT_LABEL_106_3 16
#define DEBUGGING_LABEL_106_2 15
#define EXECUTE_CACHE_106_8 9
#define EXECUTE_CACHE_106_7 11
#define FREE_REFERENCE_106_0 14
#define FREE_REFERENCES_LABEL_106_0 8
#define NUMBER_OF_LINKER_SECTIONS_106_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_106_4);
      goto make_binhex40_deconstructing_port_1;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_106_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_binhex40_deconstructing_port_5)
DEFLABEL (make_binhex40_deconstructing_port_1)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_106_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_8 7
#define LABEL_107_10 9
#define LABEL_107_7 11
#define ENVIRONMENT_LABEL_107_3 34
#define DEBUGGING_LABEL_107_2 33
#define OBJECT_107_7 32
#define OBJECT_107_6 31
#define OBJECT_107_5 30
#define OBJECT_107_4 29
#define OBJECT_107_3 28
#define OBJECT_107_2 27
#define OBJECT_107_1 26
#define OBJECT_107_0 25
#define EXECUTE_CACHE_107_14 13
#define EXECUTE_CACHE_107_13 15
#define EXECUTE_CACHE_107_12 17
#define EXECUTE_CACHE_107_11 19
#define EXECUTE_CACHE_107_9 21
#define EXECUTE_CACHE_107_6 23
#define FREE_REFERENCES_LABEL_107_0 12
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_107_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_107_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_107_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_107_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_107_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_107_8);
  (Wrd7.Obj) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_20;
  (Wrd9.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_107_2])))
    goto label_14;
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_11]));

DEFLABEL (label_14)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_107_3])))
    goto label_15;
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_12]));

DEFLABEL (label_15)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_107_4])))
    goto label_16;
  (Wrd31.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_13]));

DEFLABEL (label_16)
  if ((Wrd21.Obj) == (current_block [OBJECT_107_5]))
    goto label_17;
  (Wrd29.Obj) = (current_block [OBJECT_107_6]);
  (Rsp [0]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_107_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd17.Obj) = (current_block [OBJECT_107_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_107_7);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_7 7
#define ENVIRONMENT_LABEL_108_3 19
#define DEBUGGING_LABEL_108_2 18
#define OBJECT_108_4 17
#define OBJECT_108_3 16
#define OBJECT_108_2 15
#define OBJECT_108_1 14
#define OBJECT_108_0 13
#define EXECUTE_CACHE_108_8 9
#define EXECUTE_CACHE_108_6 11
#define FREE_REFERENCES_LABEL_108_0 8
#define NUMBER_OF_LINKER_SECTIONS_108_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_108_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_108_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_108_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd10.pObj) [3]);

DEFLABEL (label_9)
  if ((Wrd6.Obj) == (current_block [OBJECT_108_2]))
    goto label_8;
  (Wrd20.Obj) = (current_block [OBJECT_108_4]);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_8]));

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_108_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_108_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define LABEL_109_7 7
#define LABEL_109_9 9
#define LABEL_109_10 11
#define LABEL_109_11 13
#define LABEL_109_12 15
#define LABEL_109_14 17
#define LABEL_109_13 19
#define LABEL_109_16 21
#define LABEL_109_17 23
#define LABEL_109_8 25
#define LABEL_109_18 27
#define ENVIRONMENT_LABEL_109_3 48
#define DEBUGGING_LABEL_109_2 47
#define OBJECT_109_13 46
#define OBJECT_109_12 45
#define OBJECT_109_11 44
#define OBJECT_109_10 43
#define OBJECT_109_9 42
#define OBJECT_109_8 41
#define OBJECT_109_7 40
#define OBJECT_109_6 39
#define OBJECT_109_5 38
#define OBJECT_109_4 37
#define OBJECT_109_3 36
#define OBJECT_109_2 35
#define OBJECT_109_1 34
#define OBJECT_109_0 33
#define EXECUTE_CACHE_109_15 29
#define EXECUTE_CACHE_109_6 31
#define FREE_REFERENCES_LABEL_109_0 28
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd5;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd82;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd77;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd123;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_109_4);
      goto binhex40_decon_reading_header_21;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_109_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_109_9);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_109_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_109_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_109_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_109_14);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_109_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_109_16);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_109_17);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_109_8);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_109_18);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_reading_header_33)
DEFLABEL (binhex40_decon_reading_header_21)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_58)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_109_2]))
    goto label_51;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_50;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_50;
  (Wrd25.Obj) = ((Wrd29.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_49)
  (Wrd110.Obj) = (Rsp [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 30))
    goto label_48;
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 26))
    goto label_48;
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [1]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) (Wrd105.Lng)) < ((unsigned long) (Wrd109.Lng))))
    goto label_48;
  (Wrd100.Obj) = (Rsp [4]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 2))
    goto label_48;
  (Wrd94.uLng) = (OBJECT_DATUM (Wrd102.Obj));
  (Wrd97.pChr) = (& ((Wrd107.pChr) [(Wrd94.Lng)]));
  ((Wrd97.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd100.Obj)));

DEFLABEL (label_47)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) + 1L);
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 30))
    goto label_46;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd43.Obj) = (MAKE_OBJECT (26, (Wrd47.uLng)));

DEFLABEL (label_45)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd55.Lng) < (Wrd56.Lng))
    goto label_42;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 30))
    goto label_41;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [1]);
  (Wrd60.Obj) = (MAKE_OBJECT (26, (Wrd64.uLng)));

DEFLABEL (label_40)
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd74.Lng) = ((Wrd71.Lng) - 10L);
  (Wrd75.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_109_13);
  (Wrd5.Obj) = Rvl;
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_39;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_39;
  ((Wrd44.pObj) [6]) = Rvl;

DEFLABEL (label_38)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_37;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_37;
  (Wrd24.Obj) = (current_block [OBJECT_109_2]);
  ((Wrd28.pObj) [5]) = (Wrd24.Obj);

DEFLABEL (label_36)
  (Wrd6.Obj) = (current_block [OBJECT_109_11]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_109_12]);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_35)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_34;
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_109_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (current_block [OBJECT_109_0]);
  (Wrd35.Obj) = (current_block [OBJECT_109_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_29)
  goto label_36;

DEFLABEL (label_39)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_109_10]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_16]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_30)
  goto label_38;

DEFLABEL (label_41)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_14]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_7]), 1);

DEFLABEL (label_26)
  (Wrd60.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd77.Obj) = (current_block [OBJECT_109_0]);
  (Rsp [4]) = (Wrd77.Obj);
  (Rsp [5]) = (Wrd54.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 62)
    goto label_44;

DEFLABEL (label_43)
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_44)
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd89.Lng))))
    goto label_43;
  (Wrd82.Obj) = (Rsp [2]);
  ((Wrd87.pObj) [5]) = (Wrd82.Obj);
  Rvl = (current_block [OBJECT_109_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_12]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_7]), 1);

DEFLABEL (label_25)
  (Wrd43.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd113.Obj) = (Rsp [1]);
  (Wrd114.Obj) = (Rsp [4]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_11]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_6]), 3);

DEFLABEL (label_27)
  goto label_47;

DEFLABEL (label_50)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_109_5]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_8]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd121.Obj) = (Rsp [4]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 2))
    goto label_57;
  (Wrd126.uLng) = (OBJECT_DATUM (Wrd121.Obj));
  (Wrd123.Obj) = (MAKE_OBJECT (26, (Wrd126.uLng)));

DEFLABEL (label_56)
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  (Wrd134.Lng) = ((Wrd133.Lng) + 22L);
  (Wrd135.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_4]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_109_8);
  (Wrd5.Obj) = Rvl;
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_55;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_55;
  ((Wrd27.pObj) [4]) = Rvl;

DEFLABEL (label_54)
  (Wrd6.Obj) = (current_block [OBJECT_109_0]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_109_13]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_53)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  ((Wrd16.pObj) [5]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_109_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_109_5]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_9]), 3);

DEFLABEL (label_31)
  goto label_54;

DEFLABEL (label_57)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_9]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_3]), 1);

DEFLABEL (label_28)
  (Wrd123.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_109_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_5 5
#define LABEL_110_8 7
#define LABEL_110_7 9
#define LABEL_110_10 11
#define LABEL_110_11 13
#define LABEL_110_12 15
#define LABEL_110_13 17
#define LABEL_110_14 19
#define LABEL_110_16 21
#define LABEL_110_17 23
#define LABEL_110_15 25
#define LABEL_110_19 27
#define LABEL_110_20 29
#define ENVIRONMENT_LABEL_110_3 49
#define DEBUGGING_LABEL_110_2 48
#define OBJECT_110_10 47
#define OBJECT_110_9 46
#define OBJECT_110_8 45
#define OBJECT_110_7 44
#define OBJECT_110_6 43
#define OBJECT_110_5 42
#define OBJECT_110_4 41
#define OBJECT_110_3 40
#define OBJECT_110_2 39
#define OBJECT_110_1 38
#define OBJECT_110_0 37
#define EXECUTE_CACHE_110_18 31
#define EXECUTE_CACHE_110_9 33
#define EXECUTE_CACHE_110_6 35
#define FREE_REFERENCES_LABEL_110_0 30
#define NUMBER_OF_LINKER_SECTIONS_110_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd112;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd59;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_110_4);
      goto binhex40_decon_copying_data_17;

    case 1:
      current_block = (Rpc - LABEL_110_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_110_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_110_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_110_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_110_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_110_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_110_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_110_14);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_110_16);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_110_17);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_110_15);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_110_19);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_110_20);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_copying_data_30)
DEFLABEL (binhex40_decon_copying_data_17)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_110_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_49;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_49;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_48)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_110_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_46)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_45;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd26.Lng) = ((Wrd27.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_45;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_44)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_43;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng))))
    goto label_43;
  (Wrd29.Obj) = ((Wrd35.pObj) [6]);

DEFLABEL (label_42)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_41;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_41;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if ((Wrd124.Lng) < (Wrd125.Lng))
    goto label_38;

DEFLABEL (label_37)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 62))
    goto label_36;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd98.Lng))))
    goto label_36;
  (Wrd92.Obj) = (current_block [OBJECT_110_4]);
  ((Wrd96.pObj) [5]) = (Wrd92.Obj);

DEFLABEL (label_35)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_34;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd65.Lng))))
    goto label_34;
  (Wrd59.Obj) = ((Wrd63.pObj) [4]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_33)
  (Wrd73.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd80.uLng) == 30))
    goto label_32;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [1]);
  (Wrd74.Obj) = (MAKE_OBJECT (26, (Wrd78.uLng)));

DEFLABEL (label_31)
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd89.Lng) = ((Wrd86.Lng) - 6L);
  (Wrd85.Obj) = (LONG_TO_FIXNUM (Wrd89.Lng));
  (Rsp [1]) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_110_18]));

DEFLABEL (label_32)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_17]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_7]), 1);

DEFLABEL (label_25)
  (Wrd74.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.Obj) = (current_block [OBJECT_110_6]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_16]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.Obj) = (current_block [OBJECT_110_2]);
  (Wrd103.Obj) = (current_block [OBJECT_110_4]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_14]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_5]), 3);

DEFLABEL (label_26)
  goto label_35;

DEFLABEL (label_38)
  (Wrd107.Obj) = (current_block [OBJECT_110_2]);
  (Rsp [2]) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd108.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if ((Wrd121.uLng) == 62)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_5]), 3);

DEFLABEL (label_40)
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd119.Lng))))
    goto label_39;
  (Wrd112.Obj) = (Rsp [2]);
  ((Wrd117.pObj) [5]) = (Wrd112.Obj);
  Rvl = (current_block [OBJECT_110_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_13]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (label_43)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_110_3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_12]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_22)
  (Wrd29.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_110_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_110_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_110_15);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_55;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd14.Lng) + 4L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_55;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_54)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_53;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd40.Lng))))
    goto label_53;
  ((Wrd38.pObj) [6]) = (Wrd11.Obj);

DEFLABEL (label_52)
  (Wrd17.Obj) = (current_block [OBJECT_110_9]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_110_10]);
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 62)
    goto label_51;

DEFLABEL (label_50)
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_5]), 3);

DEFLABEL (label_51)
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_50;
  ((Wrd27.pObj) [3]) = (Wrd18.Obj);
  Rvl = (current_block [OBJECT_110_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_110_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_20]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_5]), 3);

DEFLABEL (label_28)
  goto label_52;

DEFLABEL (label_55)
  (Wrd7.Obj) = (current_block [OBJECT_110_2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define LABEL_111_7 7
#define LABEL_111_8 9
#define LABEL_111_9 11
#define LABEL_111_10 13
#define LABEL_111_11 15
#define ENVIRONMENT_LABEL_111_3 27
#define DEBUGGING_LABEL_111_2 26
#define OBJECT_111_6 25
#define OBJECT_111_5 24
#define OBJECT_111_4 23
#define OBJECT_111_3 22
#define OBJECT_111_2 21
#define OBJECT_111_1 20
#define OBJECT_111_0 19
#define EXECUTE_CACHE_111_6 17
#define FREE_REFERENCES_LABEL_111_0 16
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd48;
  machine_word Wrd47;
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
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_111_4);
      goto binhex40_decon_skipping_tail_8;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_111_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_111_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_111_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_111_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_111_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_skipping_tail_16)
DEFLABEL (binhex40_decon_skipping_tail_8)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_111_5);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 62))
    goto label_29;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_29;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_28)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_27;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_26)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_25;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd84.Lng))))
    goto label_25;
  (Wrd78.Obj) = (Rsp [0]);
  ((Wrd82.pObj) [5]) = (Wrd78.Obj);

DEFLABEL (label_24)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng))))
    goto label_23;
  (Wrd30.Obj) = ((Wrd36.pObj) [6]);

DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_21;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_21;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! ((Wrd74.Lng) < (Wrd75.Lng)))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_111_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_111_4]);
  (Rsp [1]) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_111_5]);
  (Rsp [2]) = (Wrd57.Obj);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd70.uLng) == 62)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_2]), 3);

DEFLABEL (label_20)
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd68.Lng))))
    goto label_19;
  ((Wrd66.pObj) [3]) = (Wrd57.Obj);
  Rvl = (current_block [OBJECT_111_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_111_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_10]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd87.Obj) = (Rsp [1]);
  (Wrd88.Obj) = (current_block [OBJECT_111_0]);
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_9]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_2]), 3);

DEFLABEL (label_14)
  goto label_24;

DEFLABEL (label_27)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_111_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 2);

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define ENVIRONMENT_LABEL_112_3 6
#define DEBUGGING_LABEL_112_2 5
#define OBJECT_112_0 4
#define FREE_REFERENCES_LABEL_112_0 4
#define NUMBER_OF_LINKER_SECTIONS_112_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_112_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_112_4);
  Rvl = (current_block [OBJECT_112_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define ENVIRONMENT_LABEL_113_3 6
#define DEBUGGING_LABEL_113_2 5
#define OBJECT_113_0 4
#define FREE_REFERENCES_LABEL_113_0 4
#define NUMBER_OF_LINKER_SECTIONS_113_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_113_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_113_4);
  Rvl = (current_block [OBJECT_113_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define ENVIRONMENT_LABEL_114_3 7
#define DEBUGGING_LABEL_114_2 6
#define OBJECT_114_1 5
#define OBJECT_114_0 4
#define FREE_REFERENCES_LABEL_114_0 4
#define NUMBER_OF_LINKER_SECTIONS_114_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_114_4);
      goto binhex40_decon_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_port_3)
DEFLABEL (binhex40_decon_port_0)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_114_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 2);

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

#define LABEL_115_4 3
#define ENVIRONMENT_LABEL_115_3 7
#define DEBUGGING_LABEL_115_2 6
#define OBJECT_115_1 5
#define OBJECT_115_0 4
#define FREE_REFERENCES_LABEL_115_0 4
#define NUMBER_OF_LINKER_SECTIONS_115_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_115_4);
      goto binhex40_decon_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_state_3)
DEFLABEL (binhex40_decon_state_0)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_115_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define ENVIRONMENT_LABEL_116_3 7
#define DEBUGGING_LABEL_116_2 6
#define OBJECT_116_1 5
#define OBJECT_116_0 4
#define FREE_REFERENCES_LABEL_116_0 4
#define NUMBER_OF_LINKER_SECTIONS_116_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_116_4);
      goto binhex40_decon_header_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_header_3)
DEFLABEL (binhex40_decon_header_0)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_116_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_4 3
#define ENVIRONMENT_LABEL_117_3 7
#define DEBUGGING_LABEL_117_2 6
#define OBJECT_117_1 5
#define OBJECT_117_0 4
#define FREE_REFERENCES_LABEL_117_0 4
#define NUMBER_OF_LINKER_SECTIONS_117_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_117_4);
      goto binhex40_decon_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_index_3)
DEFLABEL (binhex40_decon_index_0)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_117_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_117_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define ENVIRONMENT_LABEL_118_3 7
#define DEBUGGING_LABEL_118_2 6
#define OBJECT_118_1 5
#define OBJECT_118_0 4
#define FREE_REFERENCES_LABEL_118_0 4
#define NUMBER_OF_LINKER_SECTIONS_118_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_118_4);
      goto binhex40_decon_data_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_decon_data_length_3)
DEFLABEL (binhex40_decon_data_length_0)
  INTERRUPT_CHECK (26, LABEL_118_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_118_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define ENVIRONMENT_LABEL_119_3 8
#define DEBUGGING_LABEL_119_2 7
#define OBJECT_119_2 6
#define OBJECT_119_1 5
#define OBJECT_119_0 4
#define FREE_REFERENCES_LABEL_119_0 4
#define NUMBER_OF_LINKER_SECTIONS_119_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_119_4);
      goto set_binhex40_decon_stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decon_stateB_3)
DEFLABEL (set_binhex40_decon_stateB_0)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_119_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_119_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_4 3
#define ENVIRONMENT_LABEL_120_3 8
#define DEBUGGING_LABEL_120_2 7
#define OBJECT_120_2 6
#define OBJECT_120_1 5
#define OBJECT_120_0 4
#define FREE_REFERENCES_LABEL_120_0 4
#define NUMBER_OF_LINKER_SECTIONS_120_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_120_4);
      goto set_binhex40_decon_headerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decon_headerB_3)
DEFLABEL (set_binhex40_decon_headerB_0)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_120_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_120_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_120_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_121_4 3
#define ENVIRONMENT_LABEL_121_3 8
#define DEBUGGING_LABEL_121_2 7
#define OBJECT_121_2 6
#define OBJECT_121_1 5
#define OBJECT_121_0 4
#define FREE_REFERENCES_LABEL_121_0 4
#define NUMBER_OF_LINKER_SECTIONS_121_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_121_4);
      goto set_binhex40_decon_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decon_indexB_3)
DEFLABEL (set_binhex40_decon_indexB_0)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_121_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_121_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_121_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_122_4 3
#define ENVIRONMENT_LABEL_122_3 8
#define DEBUGGING_LABEL_122_2 7
#define OBJECT_122_2 6
#define OBJECT_122_1 5
#define OBJECT_122_0 4
#define FREE_REFERENCES_LABEL_122_0 4
#define NUMBER_OF_LINKER_SECTIONS_122_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_122_4);
      goto set_binhex40_decon_data_lengthB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_binhex40_decon_data_lengthB_3)
DEFLABEL (set_binhex40_decon_data_lengthB_0)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_122_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_122_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_122_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_123_4 3
#define LABEL_123_5 5
#define LABEL_123_6 7
#define LABEL_123_7 9
#define ENVIRONMENT_LABEL_123_3 17
#define DEBUGGING_LABEL_123_2 16
#define OBJECT_123_3 15
#define OBJECT_123_2 14
#define OBJECT_123_1 13
#define OBJECT_123_0 12
#define FREE_REFERENCE_123_0 11
#define FREE_REFERENCES_LABEL_123_0 10
#define NUMBER_OF_LINKER_SECTIONS_123_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_123_4);
      goto binhex40_deconP_4;

    case 1:
      current_block = (Rpc - LABEL_123_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_123_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_123_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_deconP_10)
DEFLABEL (binhex40_deconP_4)
  INTERRUPT_CHECK (26, LABEL_123_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
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
  Rvl = (current_block [OBJECT_123_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_123_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_124_4 3
#define LABEL_124_5 5
#define LABEL_124_6 7
#define LABEL_124_7 9
#define LABEL_124_8 11
#define LABEL_124_9 13
#define LABEL_124_10 15
#define LABEL_124_11 17
#define LABEL_124_12 19
#define LABEL_124_13 21
#define ENVIRONMENT_LABEL_124_3 27
#define DEBUGGING_LABEL_124_2 26
#define OBJECT_124_3 25
#define OBJECT_124_2 24
#define OBJECT_124_1 23
#define OBJECT_124_0 22
#define FREE_REFERENCES_LABEL_124_0 22
#define NUMBER_OF_LINKER_SECTIONS_124_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_124 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd156;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd127;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd138;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd120;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_124_4);
      goto binhex40_4byte_12;

    case 1:
      current_block = (Rpc - LABEL_124_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_124_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_124_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_124_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_124_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_124_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_124_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_124_12);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_124_13);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (binhex40_4byte_24)
DEFLABEL (binhex40_4byte_12)
  INTERRUPT_CHECK (26, LABEL_124_4);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + 3L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_44;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_44;
  Wrd19 = Wrd10;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_44;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pChr) = (& ((Wrd21.pChr) [(Wrd12.Lng)]));
  (Wrd16.uLng) = ((unsigned long) (((unsigned char *) (Wrd15.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_43)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd36.Lng) = ((Wrd33.Lng) + 2L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 30))
    goto label_42;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_42;
  Wrd45 = Wrd36;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd45.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_42;
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd42.pChr) = (& ((Wrd47.pChr) [(Wrd39.Lng)]));
  (Wrd43.uLng) = ((unsigned long) (((unsigned char *) (Wrd42.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd37.Obj) = (MAKE_OBJECT (26, (Wrd43.uLng)));

DEFLABEL (label_41)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_40;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (multiply_with_overflow ((Wrd65.Lng), 256, (& (Wrd64.Lng))))
    goto label_40;
  (Wrd62.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));

DEFLABEL (label_39)
  (Wrd68.Obj) = (* (Rsp++));
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_38;
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_38;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  (Wrd76.Lng) = ((Wrd77.Lng) + (Wrd78.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd76.Lng)))
    goto label_38;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_37)
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = ((Wrd82.Lng) + 1L);
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 30))
    goto label_36;
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd91.uLng) == 26))
    goto label_36;
  Wrd92 = Wrd83;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [1]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) (Wrd92.Lng)) < ((unsigned long) (Wrd96.Lng))))
    goto label_36;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd89.pChr) = (& ((Wrd94.pChr) [(Wrd86.Lng)]));
  (Wrd90.uLng) = ((unsigned long) (((unsigned char *) (Wrd89.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd84.Obj) = (MAKE_OBJECT (26, (Wrd90.uLng)));

DEFLABEL (label_35)
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_34;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (multiply_with_overflow ((Wrd112.Lng), 65536, (& (Wrd111.Lng))))
    goto label_34;
  (Wrd109.Obj) = (LONG_TO_FIXNUM (Wrd111.Lng));

DEFLABEL (label_33)
  (Wrd115.Obj) = (* (Rsp++));
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd121.uLng) == 26))
    goto label_32;
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd122.uLng) == 26))
    goto label_32;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd123.Lng) = ((Wrd124.Lng) + (Wrd125.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd123.Lng)))
    goto label_32;
  (Wrd126.Obj) = (LONG_TO_FIXNUM (Wrd123.Lng));
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_31)
  (Wrd143.Obj) = (Rsp [1]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 30))
    goto label_30;
  (Wrd135.Obj) = (Rsp [2]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 26))
    goto label_30;
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [1]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) (Wrd138.Lng)) < ((unsigned long) (Wrd142.Lng))))
    goto label_30;
  (Wrd130.uLng) = (OBJECT_DATUM (Wrd135.Obj));
  (Wrd133.pChr) = (& ((Wrd140.pChr) [(Wrd130.Lng)]));
  (Wrd134.uLng) = ((unsigned long) (((unsigned char *) (Wrd133.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd127.Obj) = (MAKE_OBJECT (26, (Wrd134.uLng)));

DEFLABEL (label_29)
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd156.uLng) == 26))
    goto label_28;
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (multiply_with_overflow ((Wrd158.Lng), 16777216, (& (Wrd157.Lng))))
    goto label_28;
  (Wrd155.Obj) = (LONG_TO_FIXNUM (Wrd157.Lng));

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd155.Obj);
  (Wrd161.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd161.Obj);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if ((Wrd164.uLng) == 26)
    goto label_26;

DEFLABEL (label_25)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd166.uLng) == 26))
    goto label_25;
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  (Wrd171.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  (Wrd167.Lng) = ((Wrd169.Lng) + (Wrd171.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd167.Lng)))
    goto label_25;
  Rvl = (LONG_TO_FIXNUM (Wrd167.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd151.Obj) = (current_block [OBJECT_124_3]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_13]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_22)
  (Wrd155.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd145.Obj) = (Rsp [1]);
  (Wrd146.Obj) = (Rsp [2]);
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_12]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 2);

DEFLABEL (label_21)
  (Wrd127.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_11]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd105.Obj) = (current_block [OBJECT_124_2]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_10]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_19)
  (Wrd109.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_9]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 2);

DEFLABEL (label_18)
  (Wrd84.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_8]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd58.Obj) = (current_block [OBJECT_124_1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_7]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (Wrd62.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_6]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 2);

DEFLABEL (label_15)
  (Wrd37.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_125_4 3
#define LABEL_125_5 5
#define LABEL_125_6 7
#define LABEL_125_20 9
#define TAG_125_21 3
#define LABEL_125_25 11
#define LABEL_125_18 13
#define TAG_125_19 5
#define LABEL_125_26 15
#define LABEL_125_16 17
#define TAG_125_17 7
#define LABEL_125_14 19
#define TAG_125_15 8
#define LABEL_125_32 21
#define LABEL_125_12 23
#define TAG_125_13 10
#define LABEL_125_36 25
#define LABEL_125_10 27
#define TAG_125_11 12
#define LABEL_125_8 29
#define TAG_125_9 13
#define LABEL_125_23 31
#define LABEL_125_41 33
#define LABEL_125_42 35
#define LABEL_125_43 37
#define LABEL_125_46 39
#define LABEL_125_47 41
#define LABEL_125_37 43
#define LABEL_125_35 45
#define LABEL_125_34 47
#define LABEL_125_29 49
#define LABEL_125_48 51
#define LABEL_125_31 53
#define LABEL_125_49 55
#define LABEL_125_40 57
#define LABEL_125_50 59
#define LABEL_125_44 61
#define LABEL_125_53 63
#define ENVIRONMENT_LABEL_125_3 115
#define DEBUGGING_LABEL_125_2 114
#define OBJECT_125_22 113
#define OBJECT_125_21 112
#define OBJECT_125_20 111
#define OBJECT_125_19 110
#define OBJECT_125_18 109
#define OBJECT_125_17 108
#define OBJECT_125_16 107
#define OBJECT_125_15 106
#define OBJECT_125_14 105
#define OBJECT_125_13 104
#define OBJECT_125_12 103
#define OBJECT_125_11 102
#define OBJECT_125_10 101
#define OBJECT_125_9 100
#define OBJECT_125_8 99
#define OBJECT_125_7 98
#define OBJECT_125_6 97
#define OBJECT_125_5 96
#define OBJECT_125_4 95
#define OBJECT_125_3 94
#define OBJECT_125_2 93
#define OBJECT_125_1 92
#define OBJECT_125_0 91
#define EXECUTE_CACHE_125_54 65
#define EXECUTE_CACHE_125_52 67
#define EXECUTE_CACHE_125_51 69
#define EXECUTE_CACHE_125_45 71
#define EXECUTE_CACHE_125_39 73
#define EXECUTE_CACHE_125_38 75
#define EXECUTE_CACHE_125_33 77
#define EXECUTE_CACHE_125_30 79
#define EXECUTE_CACHE_125_28 81
#define EXECUTE_CACHE_125_27 83
#define EXECUTE_CACHE_125_24 85
#define EXECUTE_CACHE_125_22 87
#define EXECUTE_CACHE_125_7 89
#define FREE_REFERENCES_LABEL_125_0 64
#define NUMBER_OF_LINKER_SECTIONS_125_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_125 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_125_4);
      goto decode_uue_initialize_72;

    case 1:
      current_block = (Rpc - LABEL_125_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_125_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_125_20);
      goto update_86;

    case 4:
      current_block = (Rpc - LABEL_125_25);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_125_18);
      goto process_line_19;

    case 6:
      current_block = (Rpc - LABEL_125_26);
      goto label_74;

    case 7:
      current_block = (Rpc - LABEL_125_16);
      goto process_begin_line_24;

    case 8:
      current_block = (Rpc - LABEL_125_14);
      goto process_normal_line_55;

    case 9:
      current_block = (Rpc - LABEL_125_32);
      goto label_75;

    case 10:
      current_block = (Rpc - LABEL_125_12);
      goto process_zero_line_63;

    case 11:
      current_block = (Rpc - LABEL_125_36);
      goto label_76;

    case 12:
      current_block = (Rpc - LABEL_125_10);
      goto process_end_line_68;

    case 13:
      current_block = (Rpc - LABEL_125_8);
      goto finalize_80;

    case 14:
      current_block = (Rpc - LABEL_125_23);
      goto continuation_4;

    case 15:
      current_block = (Rpc - LABEL_125_41);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_125_42);
      goto continuation_65;

    case 17:
      current_block = (Rpc - LABEL_125_43);
      goto per_quantum_46;

    case 18:
      current_block = (Rpc - LABEL_125_46);
      goto continuation_36;

    case 19:
      current_block = (Rpc - LABEL_125_47);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_125_37);
      goto continuation_64;

    case 21:
      current_block = (Rpc - LABEL_125_35);
      goto continuation_57;

    case 22:
      current_block = (Rpc - LABEL_125_34);
      goto continuation_58;

    case 23:
      current_block = (Rpc - LABEL_125_29);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_125_48);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_125_31);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_125_49);
      goto label_77;

    case 27:
      current_block = (Rpc - LABEL_125_40);
      goto continuation_5;

    case 28:
      current_block = (Rpc - LABEL_125_50);
      goto continuation_6;

    case 29:
      current_block = (Rpc - LABEL_125_44);
      goto continuation_40;

    case 30:
      current_block = (Rpc - LABEL_125_53);
      goto continuation_43;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_uue_initialize_79)
DEFLABEL (decode_uue_initialize_72)
  INTERRUPT_CHECK (26, LABEL_125_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_125_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_125_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_125_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_8])));
  Rhp += 1;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_10])));
  Rhp += 1;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_12])));
  Rhp += 1;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_14])));
  Rhp += 3;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd61.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_16])));
  Rhp += 1;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd61.pObj)));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_18])));
  Rhp += 5;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd57.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_20])));
  Rhp += 3;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd57.pObj)));
  (* (--Rsp)) = (Wrd58.Obj);
  Wrd19 = Wrd57;
  ((Wrd19.pObj) [2]) = (Wrd60.Obj);
  ((Wrd19.pObj) [3]) = Rvl;
  ((Wrd19.pObj) [4]) = (Wrd7.Obj);
  Wrd34 = Wrd59;
  ((Wrd34.pObj) [2]) = (Wrd68.Obj);
  ((Wrd34.pObj) [3]) = (Wrd66.Obj);
  ((Wrd34.pObj) [4]) = (Wrd64.Obj);
  ((Wrd34.pObj) [5]) = (Wrd62.Obj);
  ((Wrd34.pObj) [6]) = (Wrd7.Obj);
  ((Wrd61.pObj) [2]) = (Wrd7.Obj);
  Wrd46 = Wrd63;
  (Wrd47.Obj) = (Rsp [10]);
  ((Wrd46.pObj) [2]) = (Wrd47.Obj);
  (Wrd44.Obj) = (Rsp [9]);
  ((Wrd46.pObj) [3]) = (Wrd44.Obj);
  ((Wrd46.pObj) [4]) = (Wrd7.Obj);
  ((Wrd65.pObj) [2]) = (Wrd7.Obj);
  ((Wrd67.pObj) [2]) = (Wrd7.Obj);
  ((Wrd69.pObj) [2]) = (Wrd7.Obj);
  (Rsp [10]) = (Wrd58.Obj);
  (Rsp [11]) = (Wrd70.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_22]));

DEFLABEL (update_86)
  CLOSURE_HEADER (LABEL_125_20);

DEFLABEL (update_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == (current_block [OBJECT_125_4])))
    goto label_89;

DEFLABEL (label_88)
  Rvl = (current_block [OBJECT_125_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! ((Wrd12.Lng) < (Wrd14.Lng)))
    goto label_88;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_125_5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_125_23);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_90;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [3]);
  (Rsp [4]) = (Wrd19.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_39]));

DEFLABEL (label_90)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_39]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_125_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_51]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_125_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto process_line_19;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_125_41);

DEFLABEL (label_91)
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd21.Lng) + 1L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto update_10;

DEFLABEL (process_line_85)
DEFLABEL (process_line_19)
  INTERRUPT_CHECK (26, LABEL_125_18);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_98;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_97)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 0)
    goto label_96;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_125_12]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_125_25);

DEFLABEL (label_96)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [6]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);
  if (! ((Wrd25.Obj) == (current_block [OBJECT_125_3])))
    goto label_92;
  (Wrd53.Obj) = ((Wrd22.pObj) [5]);
  (Rsp [1]) = (Wrd53.Obj);
  Rsp = (& (Rsp [1]));
  goto process_begin_line_24;

DEFLABEL (label_92)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_125_8])))
    goto label_93;
  (Wrd49.Obj) = ((Wrd22.pObj) [4]);
  (Rsp [1]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  goto process_normal_line_55;

DEFLABEL (label_93)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_125_9])))
    goto label_94;
  (Wrd45.Obj) = ((Wrd22.pObj) [3]);
  (Rsp [1]) = (Wrd45.Obj);
  Rsp = (& (Rsp [1]));
  goto process_zero_line_63;

DEFLABEL (label_94)
  if ((Wrd25.Obj) == (current_block [OBJECT_125_10]))
    goto label_95;
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_125_11]);
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_27]));

DEFLABEL (label_95)
  (Wrd41.Obj) = ((Wrd22.pObj) [2]);
  (Rsp [1]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  goto process_end_line_68;

DEFLABEL (label_98)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_26]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_7]), 1);

DEFLABEL (label_74)
  (Wrd5.Obj) = Rvl;
  goto label_97;

DEFLABEL (process_begin_line_84)
DEFLABEL (process_begin_line_24)
  INTERRUPT_CHECK (26, LABEL_125_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_30]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_125_29);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_47]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_125_20]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_27]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_125_47);

DEFLABEL (label_100)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_125_8]);
  ((Wrd10.pObj) [0]) = (Wrd16.Obj);

DEFLABEL (label_99)
  Rsp = (& (Rsp [4]));
  goto label_91;

DEFLABEL (process_normal_line_83)
DEFLABEL (process_normal_line_55)
  INTERRUPT_CHECK (26, LABEL_125_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_109;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_109;
  (Wrd11.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd12.Obj) = (MAKE_OBJECT (2, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_33]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_125_31);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd6.Lng) < 0))
    goto label_105;

DEFLABEL (label_104)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_48]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_125_21]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_27]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_125_48);

DEFLABEL (label_103)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_46]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_125_22]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_125_14]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto per_quantum_46;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_125_46);

DEFLABEL (label_102)
  (Wrd62.Obj) = (Rsp [0]);
  if ((Wrd62.Obj) == (current_block [OBJECT_125_14]))
    goto label_101;
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! ((Wrd65.Lng) < 45L))
    goto label_99;
  Rsp = (& (Rsp [1]));
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [4]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_125_9]);
  ((Wrd72.pObj) [0]) = (Wrd78.Obj);
  goto label_99;

DEFLABEL (label_101)
  Rsp = (& (Rsp [1]));
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [4]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd89.Obj) = (current_block [OBJECT_125_10]);
  ((Wrd83.pObj) [0]) = (Wrd89.Obj);
  goto label_99;

DEFLABEL (label_105)
  if ((Wrd6.Lng) > 45L)
    goto label_104;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_107;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_106)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Lng) = ((Wrd23.Lng) - 1L);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd32.Lng) = ((Wrd27.Lng) + 2L);
  (Wrd37.Lng) = (FIXNUM_QUOTIENT ((Wrd32.Lng), 3L));
  (Wrd40.Lng) = (LEFT_SHIFT ((Wrd37.Lng), 2));
  Wrd41 = Wrd24;
  if ((Wrd41.Lng) < (Wrd40.Lng))
    goto label_104;
  goto label_103;

DEFLABEL (label_107)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_49]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_7]), 1);

DEFLABEL (label_77)
  (Wrd11.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_125_14]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_32]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_15]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (process_zero_line_82)
DEFLABEL (process_zero_line_63)
  INTERRUPT_CHECK (26, LABEL_125_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_113;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_113;
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_33]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_125_35);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_125_14]))
    goto label_110;
  (Wrd42.Obj) = (current_block [OBJECT_125_19]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_27]));

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_111)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_125_10]);
  ((Wrd32.pObj) [0]) = (Wrd38.Obj);
  goto label_99;

DEFLABEL (label_113)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_125_14]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_36]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_125_15]), 2);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_125_34);
  goto label_111;

DEFLABEL (process_end_line_81)
DEFLABEL (process_end_line_68)
  INTERRUPT_CHECK (26, LABEL_125_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_38]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_125_37);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_114;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_42]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_125_18]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_27]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_125_42);

DEFLABEL (label_114)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_125_4]);
  ((Wrd49.pObj) [0]) = (Wrd55.Obj);
  goto label_99;

DEFLABEL (finalize_80)
  CLOSURE_HEADER (LABEL_125_8);

DEFLABEL (finalize_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_125_4]))
    goto label_115;
  (Wrd11.Obj) = (current_block [OBJECT_125_17]);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_28]));

DEFLABEL (label_115)
  Rvl = (current_block [OBJECT_125_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (per_quantum_87)
DEFLABEL (per_quantum_46)
  INTERRUPT_CHECK (26, LABEL_125_43);
  (Wrd91.Obj) = (Rsp [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  (Wrd93.Obj) = (Rsp [3]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! ((Wrd92.Lng) < (Wrd94.Lng)))
    goto label_117;
  (Wrd100.Lng) = ((Wrd92.Lng) + 3L);
  (Wrd101.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_44]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (Rsp [6]);
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [3]);
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd109.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd109.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_45]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_125_44);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_116;
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_125_14]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd8.Lng) - (Wrd26.Lng));
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd28.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [3]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_52]));

DEFLABEL (label_116)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_53]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_54]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_125_53);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd11.Lng) = ((Wrd8.Lng) + 4L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto per_quantum_46;

DEFLABEL (label_117)
  Rsp = (& (Rsp [3]));
  goto label_102;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_126_4 3
#define LABEL_126_5 5
#define ENVIRONMENT_LABEL_126_3 10
#define DEBUGGING_LABEL_126_2 9
#define EXECUTE_CACHE_126_6 7
#define FREE_REFERENCES_LABEL_126_0 6
#define NUMBER_OF_LINKER_SECTIONS_126_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_126 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_126_4);
      goto decode_uue_update_1;

    case 1:
      current_block = (Rpc - LABEL_126_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_uue_update_4)
DEFLABEL (decode_uue_update_1)
  INTERRUPT_CHECK (26, LABEL_126_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_126_5);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_127_4 3
#define LABEL_127_5 5
#define ENVIRONMENT_LABEL_127_3 10
#define DEBUGGING_LABEL_127_2 9
#define EXECUTE_CACHE_127_6 7
#define FREE_REFERENCES_LABEL_127_0 6
#define NUMBER_OF_LINKER_SECTIONS_127_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_127 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_127_4);
      goto decode_uue_finalize_1;

    case 1:
      current_block = (Rpc - LABEL_127_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_uue_finalize_4)
DEFLABEL (decode_uue_finalize_1)
  INTERRUPT_CHECK (26, LABEL_127_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_127_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_127_5);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_128_4 3
#define LABEL_128_5 5
#define LABEL_128_6 7
#define ENVIRONMENT_LABEL_128_3 12
#define DEBUGGING_LABEL_128_2 11
#define OBJECT_128_2 10
#define OBJECT_128_1 9
#define OBJECT_128_0 8
#define FREE_REFERENCES_LABEL_128_0 8
#define NUMBER_OF_LINKER_SECTIONS_128_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_128 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_128_4);
      goto make_line_buffer_3;

    case 1:
      current_block = (Rpc - LABEL_128_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_128_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_line_buffer_7)
DEFLABEL (make_line_buffer_3)
  INTERRUPT_CHECK (26, LABEL_128_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_128_5);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 30))
    goto label_9;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.uLng) = (OBJECT_DATUM (current_block [OBJECT_128_1]));
  ((Wrd14.pObj) [1]) = (Wrd16.Obj);

DEFLABEL (label_8)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.Obj) = (current_block [OBJECT_128_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_128_2]), 2);

DEFLABEL (label_5)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_129_4 3
#define LABEL_129_5 5
#define LABEL_129_6 7
#define LABEL_129_10 9
#define LABEL_129_11 11
#define LABEL_129_8 13
#define LABEL_129_7 15
#define LABEL_129_12 17
#define LABEL_129_14 19
#define LABEL_129_15 21
#define ENVIRONMENT_LABEL_129_3 34
#define DEBUGGING_LABEL_129_2 33
#define OBJECT_129_5 32
#define OBJECT_129_4 31
#define OBJECT_129_3 30
#define OBJECT_129_2 29
#define OBJECT_129_1 28
#define OBJECT_129_0 27
#define EXECUTE_CACHE_129_13 23
#define EXECUTE_CACHE_129_9 25
#define FREE_REFERENCES_LABEL_129_0 22
#define NUMBER_OF_LINKER_SECTIONS_129_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_129 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_129_4);
      goto add_to_line_buffer_21;

    case 1:
      current_block = (Rpc - LABEL_129_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_129_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_129_10);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_129_11);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_129_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_129_7);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_129_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_129_14);
      goto loop_15;

    case 9:
      current_block = (Rpc - LABEL_129_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_line_buffer_28)
DEFLABEL (add_to_line_buffer_21)
  INTERRUPT_CHECK (26, LABEL_129_4);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_38;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_37)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd30.Lng) - (Wrd32.Lng));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd37.Lng) = ((Wrd35.Lng) + (Wrd33.Lng));
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_129_8);
  (* (--Rsp)) = Rvl;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! ((Wrd20.Lng) < (Wrd22.Lng)))
    goto label_30;
  (Wrd36.Lng) = (LEFT_SHIFT ((Wrd20.Lng), 1));
  (Wrd37.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (* (--Rsp)) = (Wrd37.Obj);
  goto loop_15;

DEFLABEL (label_30)
  (Wrd23.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd27.uLng) == 30)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_2]), 2);

DEFLABEL (label_32)
  if (! (INDEX_FIXNUM_P (Wrd21.Obj)))
    goto label_31;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  ((Wrd29.pObj) [1]) = (Wrd31.Obj);

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_35)
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_34;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_33)
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_13]));

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_0]), 1);

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_129_7);
  goto label_35;

DEFLABEL (loop_29)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_129_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_41;
  (Wrd18.Lng) = (LEFT_SHIFT ((Wrd6.Lng), 1));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [0]) = (Wrd13.Obj);
  goto loop_15;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_4]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_129_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_129_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_129_10);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 30))
    goto label_44;
  (Wrd47.Obj) = (Rsp [2]);
  if (! (INDEX_FIXNUM_P (Wrd47.Obj)))
    goto label_44;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  ((Wrd51.pObj) [1]) = (Wrd53.Obj);

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [9]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 1)
    goto label_42;
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_3]), 2);

DEFLABEL (label_42)
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [1]) = (Wrd43.Obj);
  goto label_36;

DEFLABEL (label_44)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_129_2]), 2);

DEFLABEL (label_26)
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_130_4 3
#define LABEL_130_6 5
#define LABEL_130_5 7
#define LABEL_130_7 9
#define LABEL_130_8 11
#define LABEL_130_9 13
#define ENVIRONMENT_LABEL_130_3 21
#define DEBUGGING_LABEL_130_2 20
#define OBJECT_130_5 19
#define OBJECT_130_4 18
#define OBJECT_130_3 17
#define OBJECT_130_2 16
#define OBJECT_130_1 15
#define OBJECT_130_0 14
#define FREE_REFERENCES_LABEL_130_0 14
#define NUMBER_OF_LINKER_SECTIONS_130_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_130 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_130_4);
      goto line_buffer_contents_6;

    case 1:
      current_block = (Rpc - LABEL_130_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_130_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_130_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_130_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_130_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (line_buffer_contents_13)
DEFLABEL (line_buffer_contents_6)
  INTERRUPT_CHECK (26, LABEL_130_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_130_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 30))
    goto label_17;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd31.uLng) = (OBJECT_DATUM (current_block [OBJECT_130_3]));
  ((Wrd29.pObj) [1]) = (Wrd31.Obj);

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_15;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [1]) = (Wrd18.Obj);

DEFLABEL (label_14)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_5]), 2);

DEFLABEL (label_10)
  goto label_14;

DEFLABEL (label_17)
  (Wrd33.Obj) = (current_block [OBJECT_130_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_4]), 2);

DEFLABEL (label_11)
  goto label_16;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_130_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_131_4 3
#define LABEL_131_6 5
#define LABEL_131_5 7
#define LABEL_131_9 9
#define LABEL_131_8 11
#define LABEL_131_11 13
#define LABEL_131_10 15
#define LABEL_131_13 17
#define LABEL_131_12 19
#define LABEL_131_14 21
#define LABEL_131_15 23
#define ENVIRONMENT_LABEL_131_3 34
#define DEBUGGING_LABEL_131_2 33
#define OBJECT_131_5 32
#define OBJECT_131_4 31
#define OBJECT_131_3 30
#define OBJECT_131_2 29
#define OBJECT_131_1 28
#define OBJECT_131_0 27
#define EXECUTE_CACHE_131_7 25
#define FREE_REFERENCES_LABEL_131_0 24
#define NUMBER_OF_LINKER_SECTIONS_131_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_131 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd12;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_131_4);
      goto uudecode_quantum_24;

    case 1:
      current_block = (Rpc - LABEL_131_6);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_131_5);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_131_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_131_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_131_11);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_131_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_131_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_131_12);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_131_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_131_15);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uudecode_quantum_33)
DEFLABEL (uudecode_quantum_24)
  INTERRUPT_CHECK (26, LABEL_131_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) + 3L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_47;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_47;
  Wrd22 = Wrd13;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_47;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd18.pChr) = (& ((Wrd24.pChr) [(Wrd15.Lng)]));
  (Wrd19.uLng) = ((unsigned long) (((unsigned char *) (Wrd18.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd20.Obj) = (MAKE_OBJECT (2, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_131_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) + 2L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_45;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_45;
  Wrd22 = Wrd13;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_45;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd18.pChr) = (& ((Wrd24.pChr) [(Wrd15.Lng)]));
  (Wrd19.uLng) = ((unsigned long) (((unsigned char *) (Wrd18.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd20.Obj) = (MAKE_OBJECT (2, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_131_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_43;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_43;
  Wrd20 = Wrd11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_43;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pChr) = (& ((Wrd22.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (2, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_131_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_41;
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_41;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_41;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_131_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_131_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = (LEFT_SHIFT ((Wrd7.Lng), 2));
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd13.Lng)), 4)));
  Wrd18 = Wrd10;
  (Wrd20.Lng) = ((Wrd18.Lng) | (Wrd16.Lng));
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (Wrd102.Obj) = (Rsp [6]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 30))
    goto label_39;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd101.Lng))))
    goto label_39;
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd95.uLng) == 26))
    goto label_39;
  ((Wrd99.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd17.uLng));

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd28.Lng) = ((Wrd23.Lng) & 15L);
  (Wrd31.Lng) = (LEFT_SHIFT ((Wrd28.Lng), 4));
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd34.Lng)), 2)));
  Wrd39 = Wrd31;
  (Wrd41.Lng) = ((Wrd39.Lng) | (Wrd37.Lng));
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Wrd85.Obj) = (Rsp [6]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 30))
    goto label_37;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [1]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd84.Lng))))
    goto label_37;
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd78.uLng) == 26))
    goto label_37;
  ((Wrd82.pChr) [(1 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd38.uLng));

DEFLABEL (label_36)
  (Wrd42.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_131_4]);
  (Rsp [5]) = (Wrd43.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd51.Lng) = ((Wrd46.Lng) & 3L);
  (Wrd56.Lng) = (LEFT_SHIFT ((Wrd51.Lng), 6));
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd56.Lng) | (Wrd58.Lng));
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (Rsp [6]) = (Wrd55.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 30)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_2]), 3);

DEFLABEL (label_35)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd72.Lng))))
    goto label_34;
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_34;
  ((Wrd70.pChr) [(2 + (ADDRESS_UNITS_PER_OBJECT * 2))]) = ((char) (Wrd65.uLng));
  Rvl = (current_block [OBJECT_131_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd87.Obj) = (Rsp [6]);
  (Wrd88.Obj) = (current_block [OBJECT_131_3]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_15]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_2]), 3);

DEFLABEL (label_30)
  goto label_36;

DEFLABEL (label_39)
  (Wrd104.Obj) = (Rsp [6]);
  (Wrd105.Obj) = (current_block [OBJECT_131_1]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_14]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_2]), 3);

DEFLABEL (label_31)
  goto label_38;

DEFLABEL (label_41)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_0]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_0]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_0]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_131_0]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_132_5 3
#define LABEL_132_4 5
#define LABEL_132_6 7
#define ENVIRONMENT_LABEL_132_3 14
#define DEBUGGING_LABEL_132_2 13
#define OBJECT_132_1 12
#define OBJECT_132_0 11
#define EXECUTE_CACHE_132_7 9
#define FREE_REFERENCES_LABEL_132_0 8
#define NUMBER_OF_LINKER_SECTIONS_132_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_132 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_132_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_132_4);
      goto uudecode_char_6;

    case 2:
      current_block = (Rpc - LABEL_132_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uudecode_char_10)
DEFLABEL (uudecode_char_6)
  INTERRUPT_CHECK (26, LABEL_132_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_15;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! ((Wrd16.Lng) < 32L))
    goto label_13;

DEFLABEL (label_12)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_132_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_132_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_132_5);

DEFLABEL (label_11)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd35.Lng) = ((Wrd30.Lng) - 32L);
  (Wrd38.Lng) = ((Wrd35.Lng) & 63L);
  Rvl = (LONG_TO_FIXNUM (Wrd38.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd16.Lng) < 128L)
    goto label_11;
  goto label_12;

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_132_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_133_4 3
#define LABEL_133_5 5
#define LABEL_133_7 7
#define LABEL_133_8 9
#define ENVIRONMENT_LABEL_133_3 16
#define DEBUGGING_LABEL_133_2 15
#define EXECUTE_CACHE_133_9 11
#define EXECUTE_CACHE_133_6 13
#define FREE_REFERENCES_LABEL_133_0 10
#define NUMBER_OF_LINKER_SECTIONS_133_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_133 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_133_4);
      goto call_with_decode_uue_output_port_5;

    case 1:
      current_block = (Rpc - LABEL_133_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_133_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_133_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_decode_uue_output_port_8)
DEFLABEL (call_with_decode_uue_output_port_5)
  INTERRUPT_CHECK (26, LABEL_133_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_133_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_133_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_133_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_134_4 3
#define LABEL_134_5 5
#define LABEL_134_7 7
#define ENVIRONMENT_LABEL_134_3 16
#define DEBUGGING_LABEL_134_2 15
#define EXECUTE_CACHE_134_8 9
#define EXECUTE_CACHE_134_6 11
#define FREE_REFERENCE_134_0 14
#define FREE_REFERENCES_LABEL_134_0 8
#define NUMBER_OF_LINKER_SECTIONS_134_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mime_codec_so_code_134 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_134_4);
      goto make_decode_uue_port_1;

    case 1:
      current_block = (Rpc - LABEL_134_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_134_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_decode_uue_port_5)
DEFLABEL (make_decode_uue_port_1)
  INTERRUPT_CHECK (26, LABEL_134_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_134_5);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_134_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134_7])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_23 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_29 37
#define LABEL_25 39
#define TAG_26 18
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_30 45
#define LABEL_33 47
#define LABEL_34 49
#define LABEL_31 51
#define LABEL_32 53
#define LABEL_36 55
#define LABEL_37 57
#define LABEL_38 59
#define LABEL_39 61
#define LABEL_40 63
#define LABEL_42 65
#define LABEL_44 67
#define LABEL_45 69
#define LABEL_47 71
#define LABEL_49 73
#define LABEL_51 75
#define LABEL_54 77
#define LABEL_56 79
#define LABEL_57 81
#define LABEL_58 83
#define LABEL_55 85
#define LABEL_59 87
#define LABEL_60 89
#define LABEL_61 91
#define LABEL_62 93
#define LABEL_66 95
#define LABEL_63 97
#define LABEL_64 99
#define LABEL_65 101
#define LABEL_67 103
#define LABEL_72 105
#define LABEL_68 107
#define TAG_69 52
#define LABEL_74 109
#define LABEL_70 111
#define LABEL_71 113
#define LABEL_73 115
#define LABEL_76 117
#define LABEL_77 119
#define LABEL_81 121
#define LABEL_78 123
#define LABEL_79 125
#define LABEL_80 127
#define LABEL_82 129
#define LABEL_87 131
#define LABEL_83 133
#define TAG_84 65
#define LABEL_89 135
#define LABEL_85 137
#define LABEL_86 139
#define LABEL_88 141
#define LABEL_92 143
#define LABEL_90 145
#define LABEL_95 147
#define LABEL_96 149
#define LABEL_91 151
#define LABEL_98 153
#define LABEL_93 155
#define LABEL_94 157
#define LABEL_97 159
#define LABEL_99 161
#define LABEL_100 163
#define LABEL_101 165
#define LABEL_102 167
#define LABEL_104 169
#define LABEL_103 171
#define LABEL_105 173
#define LABEL_107 175
#define LABEL_108 177
#define LABEL_106 179
#define LABEL_109 181
#define LABEL_110 183
#define LABEL_111 185
#define LABEL_112 187
#define LABEL_115 189
#define LABEL_113 191
#define LABEL_119 193
#define LABEL_120 195
#define LABEL_114 197
#define LABEL_117 199
#define LABEL_118 201
#define LABEL_122 203
#define LABEL_128 205
#define LABEL_123 207
#define LABEL_124 209
#define TAG_125 103
#define LABEL_126 211
#define LABEL_127 213
#define LABEL_129 215
#define LABEL_134 217
#define LABEL_130 219
#define TAG_131 108
#define LABEL_136 221
#define LABEL_132 223
#define LABEL_133 225
#define LABEL_135 227
#define LABEL_139 229
#define LABEL_137 231
#define LABEL_142 233
#define LABEL_143 235
#define LABEL_138 237
#define LABEL_145 239
#define LABEL_140 241
#define LABEL_141 243
#define LABEL_144 245
#define LABEL_146 247
#define LABEL_147 249
#define LABEL_148 251
#define LABEL_149 253
#define LABEL_151 255
#define LABEL_152 257
#define LABEL_153 259
#define LABEL_154 261
#define LABEL_150 263
#define LABEL_155 265
#define LABEL_156 267
#define LABEL_158 269
#define LABEL_162 271
#define LABEL_159 273
#define LABEL_160 275
#define LABEL_161 277
#define LABEL_163 279
#define LABEL_168 281
#define LABEL_164 283
#define TAG_165 140
#define LABEL_166 285
#define LABEL_167 287
#define LABEL_169 289
#define LABEL_170 291
#define LABEL_171 293
#define LABEL_172 295
#define LABEL_173 297
#define LABEL_177 299
#define LABEL_174 301
#define LABEL_175 303
#define LABEL_176 305
#define LABEL_178 307
#define LABEL_183 309
#define LABEL_179 311
#define TAG_180 154
#define LABEL_185 313
#define LABEL_181 315
#define LABEL_182 317
#define LABEL_184 319
#define LABEL_186 321
#define LABEL_187 323
#define LABEL_192 325
#define LABEL_188 327
#define LABEL_190 329
#define LABEL_196 331
#define LABEL_191 333
#define LABEL_194 335
#define LABEL_200 337
#define LABEL_195 339
#define LABEL_198 341
#define LABEL_204 343
#define LABEL_199 345
#define LABEL_202 347
#define LABEL_203 349
#define LABEL_205 351
#define LABEL_207 353
#define LABEL_208 355
#define LABEL_206 357
#define LABEL_209 359
#define LABEL_210 361
#define LABEL_211 363
#define ENVIRONMENT_LABEL_3 589
#define DEBUGGING_LABEL_2 588
#define PURIFICATION_ROOT 587
#define OBJECT_160 586
#define OBJECT_159 585
#define OBJECT_158 584
#define OBJECT_157 583
#define OBJECT_156 582
#define OBJECT_155 581
#define OBJECT_154 580
#define OBJECT_153 579
#define OBJECT_152 578
#define OBJECT_151 577
#define OBJECT_150 576
#define OBJECT_149 575
#define OBJECT_148 574
#define OBJECT_147 573
#define OBJECT_146 572
#define OBJECT_145 571
#define OBJECT_144 570
#define OBJECT_143 569
#define OBJECT_142 568
#define OBJECT_141 567
#define OBJECT_140 566
#define OBJECT_139 565
#define OBJECT_138 564
#define OBJECT_137 563
#define OBJECT_136 562
#define OBJECT_135 561
#define OBJECT_134 560
#define OBJECT_133 559
#define OBJECT_132 558
#define OBJECT_131 557
#define OBJECT_130 556
#define OBJECT_129 555
#define OBJECT_128 554
#define OBJECT_127 553
#define OBJECT_126 552
#define OBJECT_125 551
#define OBJECT_124 550
#define OBJECT_123 549
#define OBJECT_122 548
#define OBJECT_121 547
#define OBJECT_120 546
#define OBJECT_119 545
#define OBJECT_118 544
#define OBJECT_117 543
#define OBJECT_116 542
#define OBJECT_115 541
#define OBJECT_114 540
#define OBJECT_113 539
#define OBJECT_112 538
#define OBJECT_111 537
#define OBJECT_110 536
#define OBJECT_109 535
#define OBJECT_108 534
#define OBJECT_107 533
#define OBJECT_106 532
#define OBJECT_105 531
#define OBJECT_104 530
#define OBJECT_103 529
#define OBJECT_102 528
#define OBJECT_101 527
#define OBJECT_100 526
#define OBJECT_99 525
#define OBJECT_98 524
#define OBJECT_97 523
#define OBJECT_96 522
#define OBJECT_95 521
#define OBJECT_94 520
#define OBJECT_93 519
#define OBJECT_92 518
#define OBJECT_91 517
#define OBJECT_90 516
#define OBJECT_89 515
#define OBJECT_88 514
#define OBJECT_87 513
#define OBJECT_86 512
#define OBJECT_85 511
#define OBJECT_84 510
#define OBJECT_83 509
#define OBJECT_82 508
#define OBJECT_81 507
#define OBJECT_80 506
#define OBJECT_79 505
#define OBJECT_78 504
#define OBJECT_77 503
#define OBJECT_76 502
#define OBJECT_75 501
#define OBJECT_74 500
#define OBJECT_73 499
#define OBJECT_72 498
#define OBJECT_71 497
#define OBJECT_70 496
#define OBJECT_69 495
#define OBJECT_68 494
#define OBJECT_67 493
#define OBJECT_66 492
#define OBJECT_65 491
#define OBJECT_64 490
#define OBJECT_63 489
#define OBJECT_62 488
#define OBJECT_61 487
#define OBJECT_60 486
#define OBJECT_59 485
#define OBJECT_58 484
#define OBJECT_57 483
#define OBJECT_56 482
#define OBJECT_55 481
#define OBJECT_54 480
#define OBJECT_53 479
#define OBJECT_52 478
#define OBJECT_51 477
#define OBJECT_50 476
#define OBJECT_49 475
#define OBJECT_48 474
#define OBJECT_47 473
#define OBJECT_46 472
#define OBJECT_45 471
#define OBJECT_44 470
#define OBJECT_43 469
#define OBJECT_42 468
#define OBJECT_41 467
#define OBJECT_40 466
#define OBJECT_39 465
#define OBJECT_38 464
#define OBJECT_37 463
#define OBJECT_36 462
#define OBJECT_35 461
#define OBJECT_34 460
#define OBJECT_33 459
#define OBJECT_32 458
#define OBJECT_31 457
#define OBJECT_30 456
#define OBJECT_29 455
#define OBJECT_28 454
#define OBJECT_27 453
#define OBJECT_26 452
#define OBJECT_25 451
#define OBJECT_24 450
#define OBJECT_23 449
#define OBJECT_22 448
#define OBJECT_21 447
#define OBJECT_20 446
#define OBJECT_19 445
#define OBJECT_18 444
#define OBJECT_17 443
#define OBJECT_16 442
#define OBJECT_15 441
#define OBJECT_14 440
#define OBJECT_13 439
#define OBJECT_12 438
#define OBJECT_11 437
#define OBJECT_10 436
#define OBJECT_9 435
#define OBJECT_8 434
#define OBJECT_7 433
#define OBJECT_6 432
#define OBJECT_5 431
#define OBJECT_4 430
#define OBJECT_3 429
#define OBJECT_2 428
#define OBJECT_1 427
#define OBJECT_0 426
#define EXECUTE_CACHE_201 365
#define EXECUTE_CACHE_197 367
#define EXECUTE_CACHE_193 369
#define EXECUTE_CACHE_189 371
#define EXECUTE_CACHE_157 373
#define EXECUTE_CACHE_121 375
#define EXECUTE_CACHE_116 377
#define EXECUTE_CACHE_53 379
#define EXECUTE_CACHE_52 381
#define EXECUTE_CACHE_50 383
#define EXECUTE_CACHE_48 385
#define EXECUTE_CACHE_43 387
#define EXECUTE_CACHE_46 389
#define EXECUTE_CACHE_41 391
#define EXECUTE_CACHE_35 393
#define FREE_REFERENCE_20 396
#define FREE_REFERENCE_19 397
#define FREE_REFERENCE_18 398
#define FREE_REFERENCE_17 399
#define FREE_REFERENCE_16 400
#define FREE_REFERENCE_15 401
#define FREE_REFERENCE_14 402
#define FREE_REFERENCE_13 403
#define FREE_REFERENCE_12 404
#define FREE_REFERENCE_11 405
#define FREE_REFERENCE_10 406
#define FREE_REFERENCE_9 407
#define FREE_REFERENCE_8 408
#define FREE_REFERENCE_7 409
#define FREE_REFERENCE_6 410
#define FREE_REFERENCE_5 411
#define FREE_REFERENCE_4 412
#define FREE_REFERENCE_3 413
#define FREE_REFERENCE_2 414
#define FREE_REFERENCE_1 415
#define FREE_REFERENCE_0 416
#define GLOBAL_EXECUTE_CACHE_75 418
#define GLOBAL_EXECUTE_CACHE_11 420
#define GLOBAL_EXECUTE_CACHE_10 422
#define GLOBAL_EXECUTE_CACHE_6 424
#define FREE_REFERENCES_LABEL_0 364
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
mime_codec_so_69483be14b75686e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd36;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
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
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_219;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_220;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto encode_quoted_printable_initialize_263;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_221;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_26;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_222;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto decode_quoted_printable_initialize_264;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_29;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_28;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_30;

    case 22:
      current_block = (Rpc - LABEL_33);
      goto label_223;

    case 23:
      current_block = (Rpc - LABEL_34);
      goto label_224;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_32;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_31;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_33;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto continuation_40;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto continuation_39;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto continuation_38;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_37;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_44);
      goto continuation_36;

    case 33:
      current_block = (Rpc - LABEL_45);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_47);
      goto continuation_43;

    case 35:
      current_block = (Rpc - LABEL_49);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_51);
      goto continuation_42;

    case 37:
      current_block = (Rpc - LABEL_54);
      goto continuation_45;

    case 38:
      current_block = (Rpc - LABEL_56);
      goto continuation_50;

    case 39:
      current_block = (Rpc - LABEL_57);
      goto do_range_54;

    case 40:
      current_block = (Rpc - LABEL_58);
      goto label_225;

    case 41:
      current_block = (Rpc - LABEL_55);
      goto continuation_46;

    case 42:
      current_block = (Rpc - LABEL_59);
      goto continuation_47;

    case 43:
      current_block = (Rpc - LABEL_60);
      goto continuation_48;

    case 44:
      current_block = (Rpc - LABEL_61);
      goto continuation_49;

    case 45:
      current_block = (Rpc - LABEL_62);
      goto continuation_63;

    case 46:
      current_block = (Rpc - LABEL_66);
      goto label_226;

    case 47:
      current_block = (Rpc - LABEL_63);
      goto continuation_62;

    case 48:
      current_block = (Rpc - LABEL_64);
      goto continuation_69;

    case 49:
      current_block = (Rpc - LABEL_65);
      goto continuation_64;

    case 50:
      current_block = (Rpc - LABEL_67);
      goto continuation_70;

    case 51:
      current_block = (Rpc - LABEL_72);
      goto label_227;

    case 52:
      current_block = (Rpc - LABEL_68);
      goto encode_base64_initialize_266;

    case 53:
      current_block = (Rpc - LABEL_74);
      goto label_228;

    case 54:
      current_block = (Rpc - LABEL_70);
      goto continuation_72;

    case 55:
      current_block = (Rpc - LABEL_71);
      goto continuation_71;

    case 56:
      current_block = (Rpc - LABEL_73);
      goto continuation_66;

    case 57:
      current_block = (Rpc - LABEL_76);
      goto continuation_73;

    case 58:
      current_block = (Rpc - LABEL_77);
      goto continuation_82;

    case 59:
      current_block = (Rpc - LABEL_81);
      goto label_229;

    case 60:
      current_block = (Rpc - LABEL_78);
      goto continuation_81;

    case 61:
      current_block = (Rpc - LABEL_79);
      goto continuation_90;

    case 62:
      current_block = (Rpc - LABEL_80);
      goto continuation_83;

    case 63:
      current_block = (Rpc - LABEL_82);
      goto continuation_91;

    case 64:
      current_block = (Rpc - LABEL_87);
      goto label_230;

    case 65:
      current_block = (Rpc - LABEL_83);
      goto decode_base64_initialize_267;

    case 66:
      current_block = (Rpc - LABEL_89);
      goto label_231;

    case 67:
      current_block = (Rpc - LABEL_85);
      goto continuation_93;

    case 68:
      current_block = (Rpc - LABEL_86);
      goto continuation_92;

    case 69:
      current_block = (Rpc - LABEL_88);
      goto continuation_86;

    case 70:
      current_block = (Rpc - LABEL_92);
      goto label_232;

    case 71:
      current_block = (Rpc - LABEL_90);
      goto continuation_94;

    case 72:
      current_block = (Rpc - LABEL_95);
      goto label_233;

    case 73:
      current_block = (Rpc - LABEL_96);
      goto label_234;

    case 74:
      current_block = (Rpc - LABEL_91);
      goto continuation_87;

    case 75:
      current_block = (Rpc - LABEL_98);
      goto label_235;

    case 76:
      current_block = (Rpc - LABEL_93);
      goto continuation_96;

    case 77:
      current_block = (Rpc - LABEL_94);
      goto continuation_95;

    case 78:
      current_block = (Rpc - LABEL_97);
      goto continuation_85;

    case 79:
      current_block = (Rpc - LABEL_99);
      goto continuation_97;

    case 80:
      current_block = (Rpc - LABEL_100);
      goto continuation_99;

    case 81:
      current_block = (Rpc - LABEL_101);
      goto continuation_98;

    case 82:
      current_block = (Rpc - LABEL_102);
      goto continuation_101;

    case 83:
      current_block = (Rpc - LABEL_104);
      goto do_range_112;

    case 84:
      current_block = (Rpc - LABEL_103);
      goto continuation_102;

    case 85:
      current_block = (Rpc - LABEL_105);
      goto continuation_108;

    case 86:
      current_block = (Rpc - LABEL_107);
      goto do_char_114;

    case 87:
      current_block = (Rpc - LABEL_108);
      goto label_236;

    case 88:
      current_block = (Rpc - LABEL_106);
      goto continuation_103;

    case 89:
      current_block = (Rpc - LABEL_109);
      goto continuation_104;

    case 90:
      current_block = (Rpc - LABEL_110);
      goto continuation_105;

    case 91:
      current_block = (Rpc - LABEL_111);
      goto continuation_106;

    case 92:
      current_block = (Rpc - LABEL_112);
      goto continuation_107;

    case 93:
      current_block = (Rpc - LABEL_115);
      goto label_237;

    case 94:
      current_block = (Rpc - LABEL_113);
      goto continuation_117;

    case 95:
      current_block = (Rpc - LABEL_119);
      goto label_238;

    case 96:
      current_block = (Rpc - LABEL_120);
      goto label_239;

    case 97:
      current_block = (Rpc - LABEL_114);
      goto continuation_116;

    case 98:
      current_block = (Rpc - LABEL_117);
      goto continuation_122;

    case 99:
      current_block = (Rpc - LABEL_118);
      goto continuation_118;

    case 100:
      current_block = (Rpc - LABEL_122);
      goto continuation_130;

    case 101:
      current_block = (Rpc - LABEL_128);
      goto label_240;

    case 102:
      current_block = (Rpc - LABEL_123);
      goto continuation_129;

    case 103:
      current_block = (Rpc - LABEL_124);
      goto lambda_270;

    case 104:
      current_block = (Rpc - LABEL_126);
      goto continuation_138;

    case 105:
      current_block = (Rpc - LABEL_127);
      goto continuation_131;

    case 106:
      current_block = (Rpc - LABEL_129);
      goto continuation_139;

    case 107:
      current_block = (Rpc - LABEL_134);
      goto label_241;

    case 108:
      current_block = (Rpc - LABEL_130);
      goto make_binhex40_decoding_context_271;

    case 109:
      current_block = (Rpc - LABEL_136);
      goto label_242;

    case 110:
      current_block = (Rpc - LABEL_132);
      goto continuation_141;

    case 111:
      current_block = (Rpc - LABEL_133);
      goto continuation_140;

    case 112:
      current_block = (Rpc - LABEL_135);
      goto continuation_134;

    case 113:
      current_block = (Rpc - LABEL_139);
      goto label_243;

    case 114:
      current_block = (Rpc - LABEL_137);
      goto continuation_142;

    case 115:
      current_block = (Rpc - LABEL_142);
      goto label_244;

    case 116:
      current_block = (Rpc - LABEL_143);
      goto label_245;

    case 117:
      current_block = (Rpc - LABEL_138);
      goto continuation_135;

    case 118:
      current_block = (Rpc - LABEL_145);
      goto label_246;

    case 119:
      current_block = (Rpc - LABEL_140);
      goto continuation_144;

    case 120:
      current_block = (Rpc - LABEL_141);
      goto continuation_143;

    case 121:
      current_block = (Rpc - LABEL_144);
      goto continuation_133;

    case 122:
      current_block = (Rpc - LABEL_146);
      goto continuation_145;

    case 123:
      current_block = (Rpc - LABEL_147);
      goto continuation_147;

    case 124:
      current_block = (Rpc - LABEL_148);
      goto continuation_146;

    case 125:
      current_block = (Rpc - LABEL_149);
      goto do_loop_154;

    case 126:
      current_block = (Rpc - LABEL_151);
      goto label_247;

    case 127:
      current_block = (Rpc - LABEL_152);
      goto label_248;

    case 128:
      current_block = (Rpc - LABEL_153);
      goto label_249;

    case 129:
      current_block = (Rpc - LABEL_154);
      goto label_250;

    case 130:
      current_block = (Rpc - LABEL_150);
      goto continuation_156;

    case 131:
      current_block = (Rpc - LABEL_155);
      goto continuation_164;

    case 132:
      current_block = (Rpc - LABEL_156);
      goto continuation_163;

    case 133:
      current_block = (Rpc - LABEL_158);
      goto continuation_169;

    case 134:
      current_block = (Rpc - LABEL_162);
      goto label_251;

    case 135:
      current_block = (Rpc - LABEL_159);
      goto continuation_168;

    case 136:
      current_block = (Rpc - LABEL_160);
      goto continuation_174;

    case 137:
      current_block = (Rpc - LABEL_161);
      goto continuation_170;

    case 138:
      current_block = (Rpc - LABEL_163);
      goto continuation_175;

    case 139:
      current_block = (Rpc - LABEL_168);
      goto label_252;

    case 140:
      current_block = (Rpc - LABEL_164);
      goto make_binhex40_rld_state_273;

    case 141:
      current_block = (Rpc - LABEL_166);
      goto continuation_177;

    case 142:
      current_block = (Rpc - LABEL_167);
      goto continuation_176;

    case 143:
      current_block = (Rpc - LABEL_169);
      goto continuation_178;

    case 144:
      current_block = (Rpc - LABEL_170);
      goto continuation_186;

    case 145:
      current_block = (Rpc - LABEL_171);
      goto continuation_185;

    case 146:
      current_block = (Rpc - LABEL_172);
      goto continuation_187;

    case 147:
      current_block = (Rpc - LABEL_173);
      goto continuation_194;

    case 148:
      current_block = (Rpc - LABEL_177);
      goto label_253;

    case 149:
      current_block = (Rpc - LABEL_174);
      goto continuation_193;

    case 150:
      current_block = (Rpc - LABEL_175);
      goto continuation_200;

    case 151:
      current_block = (Rpc - LABEL_176);
      goto continuation_195;

    case 152:
      current_block = (Rpc - LABEL_178);
      goto continuation_201;

    case 153:
      current_block = (Rpc - LABEL_183);
      goto label_254;

    case 154:
      current_block = (Rpc - LABEL_179);
      goto make_binhex40_decon_274;

    case 155:
      current_block = (Rpc - LABEL_185);
      goto label_255;

    case 156:
      current_block = (Rpc - LABEL_181);
      goto continuation_203;

    case 157:
      current_block = (Rpc - LABEL_182);
      goto continuation_202;

    case 158:
      current_block = (Rpc - LABEL_184);
      goto continuation_197;

    case 159:
      current_block = (Rpc - LABEL_186);
      goto continuation_204;

    case 160:
      current_block = (Rpc - LABEL_187);
      goto continuation_206;

    case 161:
      current_block = (Rpc - LABEL_192);
      goto label_256;

    case 162:
      current_block = (Rpc - LABEL_188);
      goto continuation_205;

    case 163:
      current_block = (Rpc - LABEL_190);
      goto continuation_208;

    case 164:
      current_block = (Rpc - LABEL_196);
      goto label_257;

    case 165:
      current_block = (Rpc - LABEL_191);
      goto continuation_207;

    case 166:
      current_block = (Rpc - LABEL_194);
      goto continuation_210;

    case 167:
      current_block = (Rpc - LABEL_200);
      goto label_258;

    case 168:
      current_block = (Rpc - LABEL_195);
      goto continuation_209;

    case 169:
      current_block = (Rpc - LABEL_198);
      goto continuation_212;

    case 170:
      current_block = (Rpc - LABEL_204);
      goto label_259;

    case 171:
      current_block = (Rpc - LABEL_199);
      goto continuation_211;

    case 172:
      current_block = (Rpc - LABEL_202);
      goto continuation_214;

    case 173:
      current_block = (Rpc - LABEL_203);
      goto continuation_213;

    case 174:
      current_block = (Rpc - LABEL_205);
      goto continuation_215;

    case 175:
      current_block = (Rpc - LABEL_207);
      goto label_260;

    case 176:
      current_block = (Rpc - LABEL_208);
      goto label_261;

    case 177:
      current_block = (Rpc - LABEL_206);
      goto continuation_216;

    case 178:
      current_block = (Rpc - LABEL_209);
      goto label_276;

    case 179:
      current_block = (Rpc - LABEL_210);
      goto label_277;

    case 180:
      current_block = (Rpc - LABEL_211);
      goto expression_218;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_218)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_210])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_277)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_276)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	1,
	1,
	0,
	1,
	0,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	1,
	0,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 134)
      goto label_275;
    blocks = (current_block [OBJECT_160]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_209])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_275)
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
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_315;
  Wrd11 = Wrd15;

DEFLABEL (label_314)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_313;
  Wrd11 = Wrd15;

DEFLABEL (label_312)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_311;
  Wrd11 = Wrd15;

DEFLABEL (label_310)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_309;
  Wrd11 = Wrd15;

DEFLABEL (label_308)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_307;
  Wrd11 = Wrd15;

DEFLABEL (label_306)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_305;
  Wrd17 = Wrd21;

DEFLABEL (label_304)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33]), 1);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_54;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_54;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_54;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_61);
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_50]);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_303;
  Wrd11 = Wrd15;

DEFLABEL (label_302)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_301;
  Wrd11 = Wrd15;

DEFLABEL (label_300)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_62]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_63]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_64]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_65]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_299;
  Wrd11 = Wrd15;

DEFLABEL (label_298)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_84);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_297;
  Wrd11 = Wrd15;

DEFLABEL (label_296)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_295;
  Wrd11 = Wrd15;

DEFLABEL (label_294)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_293;
  Wrd17 = Wrd21;

DEFLABEL (label_292)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_94);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33]), 1);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_100);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_112;

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_112;

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_range_112;

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto do_char_114;

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto do_char_114;

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_112);
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_291;
  Wrd14 = Wrd18;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_289;
  Wrd11 = Wrd15;

DEFLABEL (label_288)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_287;
  Wrd18 = Wrd22;

DEFLABEL (label_286)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x2fd, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_124])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_94]);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_95]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_96]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_97]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_98]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_285;
  Wrd11 = Wrd15;

DEFLABEL (label_284)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_131);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_130])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_283;
  Wrd11 = Wrd15;

DEFLABEL (label_282)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_281;
  Wrd11 = Wrd15;

DEFLABEL (label_280)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_279;
  Wrd17 = Wrd21;

DEFLABEL (label_278)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_141);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_148]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_148);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_154;

DEFLABEL (label_279)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_143])), (Wrd18.pObj));

DEFLABEL (label_245)
  (Wrd17.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_142])), (Wrd12.pObj));

DEFLABEL (label_244)
  (Wrd11.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_134])), (Wrd12.pObj));

DEFLABEL (label_241)
  (Wrd11.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_128])), (Wrd12.pObj));

DEFLABEL (label_240)
  (Wrd11.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_120])), (Wrd19.pObj));

DEFLABEL (label_239)
  (Wrd18.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_119])), (Wrd12.pObj));

DEFLABEL (label_238)
  (Wrd11.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd15.pObj));

DEFLABEL (label_237)
  (Wrd14.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd18.pObj));

DEFLABEL (label_234)
  (Wrd17.Obj) = Rvl;
  goto label_292;

DEFLABEL (label_295)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd12.pObj));

DEFLABEL (label_233)
  (Wrd11.Obj) = Rvl;
  goto label_294;

DEFLABEL (label_297)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd12.pObj));

DEFLABEL (label_230)
  (Wrd11.Obj) = Rvl;
  goto label_296;

DEFLABEL (label_299)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd12.pObj));

DEFLABEL (label_229)
  (Wrd11.Obj) = Rvl;
  goto label_298;

DEFLABEL (label_301)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd12.pObj));

DEFLABEL (label_227)
  (Wrd11.Obj) = Rvl;
  goto label_300;

DEFLABEL (label_303)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd12.pObj));

DEFLABEL (label_226)
  (Wrd11.Obj) = Rvl;
  goto label_302;

DEFLABEL (label_305)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd18.pObj));

DEFLABEL (label_224)
  (Wrd17.Obj) = Rvl;
  goto label_304;

DEFLABEL (label_307)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd12.pObj));

DEFLABEL (label_223)
  (Wrd11.Obj) = Rvl;
  goto label_306;

DEFLABEL (label_309)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_222)
  (Wrd11.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_311)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_221)
  (Wrd11.Obj) = Rvl;
  goto label_310;

DEFLABEL (label_313)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_220)
  (Wrd11.Obj) = Rvl;
  goto label_312;

DEFLABEL (label_315)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_219)
  (Wrd11.Obj) = Rvl;
  goto label_314;

DEFLABEL (encode_quoted_printable_initialize_263)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (encode_quoted_printable_initialize_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (decode_quoted_printable_initialize_264)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (decode_quoted_printable_initialize_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (do_range_265)
DEFLABEL (do_range_54)
  INTERRUPT_CHECK (26, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd68.Obj) = (Rsp [6]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_321;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_321;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [1]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) (Wrd61.Lng)) < ((unsigned long) (Wrd67.Lng))))
    goto label_321;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_321;
  (Wrd49.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd54.pChr) = (& ((Wrd65.pChr) [(Wrd49.Lng)]));
  ((Wrd54.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd8.uLng));

DEFLABEL (label_320)
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd47.uLng) == 30)
    goto label_317;

DEFLABEL (label_316)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 3);

DEFLABEL (label_317)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_316;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_316;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_316;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd34.pChr) = (& ((Wrd43.pChr) [(Wrd31.Lng)]));
  ((Wrd34.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd13.uLng));
  Rsp = (& (Rsp [4]));

DEFLABEL (label_319)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd17.Lng) < (Wrd19.Lng))
    goto label_318;
  Rvl = (current_block [OBJECT_44]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_318)
  (Wrd25.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd28.Lng) + 1L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (Rsp [2]) = (Wrd26.Obj);
  goto do_range_54;

DEFLABEL (label_321)
  (Wrd73.Obj) = (Rsp [6]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [0]);
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 3);

DEFLABEL (label_225)
  goto label_320;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_56);
  goto label_319;

DEFLABEL (encode_base64_initialize_266)
  CLOSURE_HEADER (LABEL_68);

DEFLABEL (encode_base64_initialize_67)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_323;
  Wrd9 = Wrd13;

DEFLABEL (label_322)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_323)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd10.pObj));

DEFLABEL (label_228)
  (Wrd9.Obj) = Rvl;
  goto label_322;

DEFLABEL (decode_base64_initialize_267)
  CLOSURE_HEADER (LABEL_83);

DEFLABEL (decode_base64_initialize_88)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_329;
  Wrd9 = Wrd13;

DEFLABEL (label_328)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_88);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_327;
  Wrd9 = Wrd13;

DEFLABEL (label_326)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_325;
  Wrd9 = Wrd13;

DEFLABEL (label_324)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd10.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_325)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd10.pObj));

DEFLABEL (label_235)
  (Wrd9.Obj) = Rvl;
  goto label_324;

DEFLABEL (label_327)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd10.pObj));

DEFLABEL (label_232)
  (Wrd9.Obj) = Rvl;
  goto label_326;

DEFLABEL (label_329)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd10.pObj));

DEFLABEL (label_231)
  (Wrd9.Obj) = Rvl;
  goto label_328;

DEFLABEL (do_range_268)
DEFLABEL (do_range_112)
  INTERRUPT_CHECK (26, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto do_char_114;

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_330;
  Rvl = (current_block [OBJECT_44]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_330)
  (Wrd14.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (Rsp [2]) = (Wrd15.Obj);
  goto do_range_112;

DEFLABEL (do_char_269)
DEFLABEL (do_char_114)
  INTERRUPT_CHECK (26, LABEL_107);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 30))
    goto label_334;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_334;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_334;
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_334;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd39.Obj));
  (Wrd35.pChr) = (& ((Wrd46.pChr) [(Wrd30.Lng)]));
  ((Wrd35.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd37.uLng));

DEFLABEL (label_333)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd28.uLng) == 30)
    goto label_332;

DEFLABEL (label_331)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 3);

DEFLABEL (label_332)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_331;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_331;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_331;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd14.pChr) = (& ((Wrd24.pChr) [(Wrd11.Lng)]));
  ((Wrd14.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd5.uLng));
  Rvl = (current_block [OBJECT_44]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_334)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [0]);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 3);

DEFLABEL (label_236)
  goto label_333;

DEFLABEL (lambda_270)
  CLOSURE_HEADER (LABEL_124);

DEFLABEL (lambda_120)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (make_binhex40_decoding_context_271)
  CLOSURE_HEADER (LABEL_130);

DEFLABEL (make_binhex40_decoding_context_136)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_340;
  Wrd9 = Wrd13;

DEFLABEL (label_339)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_338;
  Wrd9 = Wrd13;

DEFLABEL (label_337)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_138);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_336;
  Wrd9 = Wrd13;

DEFLABEL (label_335)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_144);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd16.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_114]);
  (Wrd13.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_336)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_145])), (Wrd10.pObj));

DEFLABEL (label_246)
  (Wrd9.Obj) = Rvl;
  goto label_335;

DEFLABEL (label_338)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_139])), (Wrd10.pObj));

DEFLABEL (label_243)
  (Wrd9.Obj) = Rvl;
  goto label_337;

DEFLABEL (label_340)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_136])), (Wrd10.pObj));

DEFLABEL (label_242)
  (Wrd9.Obj) = Rvl;
  goto label_339;

DEFLABEL (do_loop_272)
DEFLABEL (do_loop_154)
  INTERRUPT_CHECK (26, LABEL_149);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_80])))
    goto label_361;
  Rsp = (& (Rsp [1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_119]);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_120]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_121]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_122]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_157]));

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_156);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_155);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_159);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_360;
  Wrd11 = Wrd15;

DEFLABEL (label_359)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_161);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_165);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_164])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_358;
  Wrd11 = Wrd15;

DEFLABEL (label_357)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_167);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_177)
  INTERRUPT_CHECK (27, LABEL_166);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_169);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_170]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_133]);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_120]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_134]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_122]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_157]));

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_171);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_170);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_138]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_139]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_193)
  INTERRUPT_CHECK (27, LABEL_174);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_194)
  INTERRUPT_CHECK (27, LABEL_173);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_356;
  Wrd11 = Wrd15;

DEFLABEL (label_355)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_195)
  INTERRUPT_CHECK (27, LABEL_176);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_180);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_179])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_175);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_178);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_354;
  Wrd11 = Wrd15;

DEFLABEL (label_353)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_182);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_203)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_186);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_188]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_189]));

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_188);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_352;
  Wrd12 = Wrd16;

DEFLABEL (label_351)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_193]));

DEFLABEL (continuation_207)
  INTERRUPT_CHECK (27, LABEL_191);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_208)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_350;
  Wrd11 = Wrd15;

DEFLABEL (label_349)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_197]));

DEFLABEL (continuation_209)
  INTERRUPT_CHECK (27, LABEL_195);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_210)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_198]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_348;
  Wrd12 = Wrd16;

DEFLABEL (label_347)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_201]));

DEFLABEL (continuation_211)
  INTERRUPT_CHECK (27, LABEL_199);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_212)
  INTERRUPT_CHECK (27, LABEL_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_203]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_346;
  Wrd12 = Wrd16;

DEFLABEL (label_345)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_201]));

DEFLABEL (continuation_213)
  INTERRUPT_CHECK (27, LABEL_203);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_214)
  INTERRUPT_CHECK (27, LABEL_202);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_205]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_215)
  INTERRUPT_CHECK (27, LABEL_205);
  (Wrd5.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_206]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_344;
  Wrd10 = Wrd14;

DEFLABEL (label_343)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_342;
  Wrd16 = Wrd20;

DEFLABEL (label_341)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_216)
  INTERRUPT_CHECK (27, LABEL_206);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (label_342)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_208])), (Wrd17.pObj));

DEFLABEL (label_261)
  (Wrd16.Obj) = Rvl;
  goto label_341;

DEFLABEL (label_344)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_207])), (Wrd11.pObj));

DEFLABEL (label_260)
  (Wrd10.Obj) = Rvl;
  goto label_343;

DEFLABEL (label_346)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_204])), (Wrd13.pObj));

DEFLABEL (label_259)
  (Wrd12.Obj) = Rvl;
  goto label_345;

DEFLABEL (label_348)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_200])), (Wrd13.pObj));

DEFLABEL (label_258)
  (Wrd12.Obj) = Rvl;
  goto label_347;

DEFLABEL (label_350)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_196])), (Wrd12.pObj));

DEFLABEL (label_257)
  (Wrd11.Obj) = Rvl;
  goto label_349;

DEFLABEL (label_352)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_192])), (Wrd13.pObj));

DEFLABEL (label_256)
  (Wrd12.Obj) = Rvl;
  goto label_351;

DEFLABEL (label_354)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_183])), (Wrd12.pObj));

DEFLABEL (label_254)
  (Wrd11.Obj) = Rvl;
  goto label_353;

DEFLABEL (label_356)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_177])), (Wrd12.pObj));

DEFLABEL (label_253)
  (Wrd11.Obj) = Rvl;
  goto label_355;

DEFLABEL (label_358)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_168])), (Wrd12.pObj));

DEFLABEL (label_252)
  (Wrd11.Obj) = Rvl;
  goto label_357;

DEFLABEL (label_360)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_162])), (Wrd12.pObj));

DEFLABEL (label_251)
  (Wrd11.Obj) = Rvl;
  goto label_359;

DEFLABEL (label_361)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_369;
  Wrd8 = Wrd12;

DEFLABEL (label_368)
  Wrd7 = Wrd8;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_367;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_367;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_367;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd18.pChr) = (& ((Wrd25.pChr) [(Wrd16.Lng)]));
  (Wrd19.uLng) = ((unsigned long) (((unsigned char *) (Wrd18.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_366)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_365;
  Wrd35 = Wrd39;

DEFLABEL (label_364)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd57.uLng) == 30))
    goto label_363;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_363;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_363;
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_363;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd48.pChr) = (& ((Wrd54.pChr) [(Wrd46.Lng)]));
  ((Wrd48.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd50.uLng));

DEFLABEL (label_362)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd44.Lng) + 1L);
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));
  (Rsp [0]) = (Wrd42.Obj);
  goto do_loop_154;

DEFLABEL (label_363)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 3);

DEFLABEL (label_250)
  goto label_362;

DEFLABEL (label_365)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_153])), (Wrd36.pObj));

DEFLABEL (label_249)
  (Wrd35.Obj) = Rvl;
  goto label_364;

DEFLABEL (label_367)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118]), 2);

DEFLABEL (label_248)
  (* (--Rsp)) = Rvl;
  goto label_366;

DEFLABEL (label_369)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_151])), (Wrd9.pObj));

DEFLABEL (label_247)
  (Wrd8.Obj) = Rvl;
  goto label_368;

DEFLABEL (make_binhex40_rld_state_273)
  CLOSURE_HEADER (LABEL_164);

DEFLABEL (make_binhex40_rld_state_172)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_binhex40_decon_274)
  CLOSURE_HEADER (LABEL_179);

DEFLABEL (make_binhex40_decon_198)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_371;
  Wrd9 = Wrd13;

DEFLABEL (label_370)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_75]));

DEFLABEL (continuation_197)
  INTERRUPT_CHECK (27, LABEL_184);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_371)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_185])), (Wrd10.pObj));

DEFLABEL (label_255)
  (Wrd9.Obj) = Rvl;
  goto label_370;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_mime_codec_so_69483be14b75686e [134] =
  {
    { "mime_codec_so_code_1", 11, mime_codec_so_code_1 },
    { "mime_codec_so_code_2", 1, mime_codec_so_code_2 },
    { "mime_codec_so_code_3", 1, mime_codec_so_code_3 },
    { "mime_codec_so_code_4", 1, mime_codec_so_code_4 },
    { "mime_codec_so_code_5", 1, mime_codec_so_code_5 },
    { "mime_codec_so_code_6", 1, mime_codec_so_code_6 },
    { "mime_codec_so_code_7", 1, mime_codec_so_code_7 },
    { "mime_codec_so_code_8", 1, mime_codec_so_code_8 },
    { "mime_codec_so_code_9", 1, mime_codec_so_code_9 },
    { "mime_codec_so_code_10", 1, mime_codec_so_code_10 },
    { "mime_codec_so_code_11", 4, mime_codec_so_code_11 },
    { "mime_codec_so_code_12", 2, mime_codec_so_code_12 },
    { "mime_codec_so_code_13", 5, mime_codec_so_code_13 },
    { "mime_codec_so_code_14", 9, mime_codec_so_code_14 },
    { "mime_codec_so_code_15", 4, mime_codec_so_code_15 },
    { "mime_codec_so_code_16", 9, mime_codec_so_code_16 },
    { "mime_codec_so_code_17", 15, mime_codec_so_code_17 },
    { "mime_codec_so_code_18", 4, mime_codec_so_code_18 },
    { "mime_codec_so_code_19", 8, mime_codec_so_code_19 },
    { "mime_codec_so_code_20", 4, mime_codec_so_code_20 },
    { "mime_codec_so_code_21", 1, mime_codec_so_code_21 },
    { "mime_codec_so_code_22", 1, mime_codec_so_code_22 },
    { "mime_codec_so_code_23", 1, mime_codec_so_code_23 },
    { "mime_codec_so_code_24", 1, mime_codec_so_code_24 },
    { "mime_codec_so_code_25", 4, mime_codec_so_code_25 },
    { "mime_codec_so_code_26", 1, mime_codec_so_code_26 },
    { "mime_codec_so_code_27", 5, mime_codec_so_code_27 },
    { "mime_codec_so_code_28", 4, mime_codec_so_code_28 },
    { "mime_codec_so_code_29", 3, mime_codec_so_code_29 },
    { "mime_codec_so_code_30", 32, mime_codec_so_code_30 },
    { "mime_codec_so_code_31", 5, mime_codec_so_code_31 },
    { "mime_codec_so_code_32", 1, mime_codec_so_code_32 },
    { "mime_codec_so_code_33", 4, mime_codec_so_code_33 },
    { "mime_codec_so_code_34", 12, mime_codec_so_code_34 },
    { "mime_codec_so_code_35", 4, mime_codec_so_code_35 },
    { "mime_codec_so_code_36", 3, mime_codec_so_code_36 },
    { "mime_codec_so_code_37", 2, mime_codec_so_code_37 },
    { "mime_codec_so_code_38", 1, mime_codec_so_code_38 },
    { "mime_codec_so_code_39", 1, mime_codec_so_code_39 },
    { "mime_codec_so_code_40", 1, mime_codec_so_code_40 },
    { "mime_codec_so_code_41", 1, mime_codec_so_code_41 },
    { "mime_codec_so_code_42", 1, mime_codec_so_code_42 },
    { "mime_codec_so_code_43", 1, mime_codec_so_code_43 },
    { "mime_codec_so_code_44", 1, mime_codec_so_code_44 },
    { "mime_codec_so_code_45", 4, mime_codec_so_code_45 },
    { "mime_codec_so_code_46", 1, mime_codec_so_code_46 },
    { "mime_codec_so_code_47", 6, mime_codec_so_code_47 },
    { "mime_codec_so_code_48", 8, mime_codec_so_code_48 },
    { "mime_codec_so_code_49", 26, mime_codec_so_code_49 },
    { "mime_codec_so_code_50", 1, mime_codec_so_code_50 },
    { "mime_codec_so_code_51", 1, mime_codec_so_code_51 },
    { "mime_codec_so_code_52", 1, mime_codec_so_code_52 },
    { "mime_codec_so_code_53", 1, mime_codec_so_code_53 },
    { "mime_codec_so_code_54", 1, mime_codec_so_code_54 },
    { "mime_codec_so_code_55", 1, mime_codec_so_code_55 },
    { "mime_codec_so_code_56", 1, mime_codec_so_code_56 },
    { "mime_codec_so_code_57", 1, mime_codec_so_code_57 },
    { "mime_codec_so_code_58", 1, mime_codec_so_code_58 },
    { "mime_codec_so_code_59", 1, mime_codec_so_code_59 },
    { "mime_codec_so_code_60", 1, mime_codec_so_code_60 },
    { "mime_codec_so_code_61", 1, mime_codec_so_code_61 },
    { "mime_codec_so_code_62", 1, mime_codec_so_code_62 },
    { "mime_codec_so_code_63", 1, mime_codec_so_code_63 },
    { "mime_codec_so_code_64", 4, mime_codec_so_code_64 },
    { "mime_codec_so_code_65", 5, mime_codec_so_code_65 },
    { "mime_codec_so_code_66", 15, mime_codec_so_code_66 },
    { "mime_codec_so_code_67", 4, mime_codec_so_code_67 },
    { "mime_codec_so_code_68", 3, mime_codec_so_code_68 },
    { "mime_codec_so_code_69", 12, mime_codec_so_code_69 },
    { "mime_codec_so_code_70", 14, mime_codec_so_code_70 },
    { "mime_codec_so_code_71", 5, mime_codec_so_code_71 },
    { "mime_codec_so_code_72", 1, mime_codec_so_code_72 },
    { "mime_codec_so_code_73", 1, mime_codec_so_code_73 },
    { "mime_codec_so_code_74", 1, mime_codec_so_code_74 },
    { "mime_codec_so_code_75", 1, mime_codec_so_code_75 },
    { "mime_codec_so_code_76", 1, mime_codec_so_code_76 },
    { "mime_codec_so_code_77", 1, mime_codec_so_code_77 },
    { "mime_codec_so_code_78", 1, mime_codec_so_code_78 },
    { "mime_codec_so_code_79", 1, mime_codec_so_code_79 },
    { "mime_codec_so_code_80", 1, mime_codec_so_code_80 },
    { "mime_codec_so_code_81", 1, mime_codec_so_code_81 },
    { "mime_codec_so_code_82", 1, mime_codec_so_code_82 },
    { "mime_codec_so_code_83", 1, mime_codec_so_code_83 },
    { "mime_codec_so_code_84", 1, mime_codec_so_code_84 },
    { "mime_codec_so_code_85", 1, mime_codec_so_code_85 },
    { "mime_codec_so_code_86", 4, mime_codec_so_code_86 },
    { "mime_codec_so_code_87", 3, mime_codec_so_code_87 },
    { "mime_codec_so_code_88", 3, mime_codec_so_code_88 },
    { "mime_codec_so_code_89", 4, mime_codec_so_code_89 },
    { "mime_codec_so_code_90", 4, mime_codec_so_code_90 },
    { "mime_codec_so_code_91", 3, mime_codec_so_code_91 },
    { "mime_codec_so_code_92", 10, mime_codec_so_code_92 },
    { "mime_codec_so_code_93", 12, mime_codec_so_code_93 },
    { "mime_codec_so_code_94", 5, mime_codec_so_code_94 },
    { "mime_codec_so_code_95", 14, mime_codec_so_code_95 },
    { "mime_codec_so_code_96", 6, mime_codec_so_code_96 },
    { "mime_codec_so_code_97", 3, mime_codec_so_code_97 },
    { "mime_codec_so_code_98", 13, mime_codec_so_code_98 },
    { "mime_codec_so_code_99", 9, mime_codec_so_code_99 },
    { "mime_codec_so_code_100", 1, mime_codec_so_code_100 },
    { "mime_codec_so_code_101", 1, mime_codec_so_code_101 },
    { "mime_codec_so_code_102", 1, mime_codec_so_code_102 },
    { "mime_codec_so_code_103", 1, mime_codec_so_code_103 },
    { "mime_codec_so_code_104", 1, mime_codec_so_code_104 },
    { "mime_codec_so_code_105", 4, mime_codec_so_code_105 },
    { "mime_codec_so_code_106", 3, mime_codec_so_code_106 },
    { "mime_codec_so_code_107", 5, mime_codec_so_code_107 },
    { "mime_codec_so_code_108", 3, mime_codec_so_code_108 },
    { "mime_codec_so_code_109", 13, mime_codec_so_code_109 },
    { "mime_codec_so_code_110", 14, mime_codec_so_code_110 },
    { "mime_codec_so_code_111", 7, mime_codec_so_code_111 },
    { "mime_codec_so_code_112", 1, mime_codec_so_code_112 },
    { "mime_codec_so_code_113", 1, mime_codec_so_code_113 },
    { "mime_codec_so_code_114", 1, mime_codec_so_code_114 },
    { "mime_codec_so_code_115", 1, mime_codec_so_code_115 },
    { "mime_codec_so_code_116", 1, mime_codec_so_code_116 },
    { "mime_codec_so_code_117", 1, mime_codec_so_code_117 },
    { "mime_codec_so_code_118", 1, mime_codec_so_code_118 },
    { "mime_codec_so_code_119", 1, mime_codec_so_code_119 },
    { "mime_codec_so_code_120", 1, mime_codec_so_code_120 },
    { "mime_codec_so_code_121", 1, mime_codec_so_code_121 },
    { "mime_codec_so_code_122", 1, mime_codec_so_code_122 },
    { "mime_codec_so_code_123", 4, mime_codec_so_code_123 },
    { "mime_codec_so_code_124", 10, mime_codec_so_code_124 },
    { "mime_codec_so_code_125", 31, mime_codec_so_code_125 },
    { "mime_codec_so_code_126", 2, mime_codec_so_code_126 },
    { "mime_codec_so_code_127", 2, mime_codec_so_code_127 },
    { "mime_codec_so_code_128", 3, mime_codec_so_code_128 },
    { "mime_codec_so_code_129", 10, mime_codec_so_code_129 },
    { "mime_codec_so_code_130", 6, mime_codec_so_code_130 },
    { "mime_codec_so_code_131", 11, mime_codec_so_code_131 },
    { "mime_codec_so_code_132", 3, mime_codec_so_code_132 },
    { "mime_codec_so_code_133", 4, mime_codec_so_code_133 },
    { "mime_codec_so_code_134", 3, mime_codec_so_code_134 }
  };

int
decl_mime_codec_so_69483be14b75686e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_mime_codec_so_69483be14b75686e);
  return (0);
}

DECLARE_COMPILED_CODE ("mime-codec.so", 181, decl_mime_codec_so_69483be14b75686e, mime_codec_so_69483be14b75686e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_mime_codec_so_data_69483be14b75686e [16897] =
  "\xce\x04\xd4\x01\x8c\x21\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x81"
  "\x0d\xb9\x0d\xba\x0d\xbb\x08\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\xbe"
  "\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x83\x88\xc2"
  "\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x84\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x85\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x86\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x83"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x0f\x0d\x1c\x1b\x82\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x83\x1b\x1d\x1b\xc2\x1c\x07\x0d\x1c\x24\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x1b\x83\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x85\x82\x81\x1b\x84\x28\x1b\x28\xb3\x28\x0d\x1c"
  "\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85"
  "\x0f\x02\x1b\x81\x1b\x84\xc1\x1c\x0d\x1c\x24\x28\x1b\x28\xb7\x28"
  "\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x1b\x1d\x80\x84\x1b\x81"
  "\x07\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\xc1\x1c\x1b\x81\x1d\x1b\x85\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x80"
  "\x84\x0f\x1b\x81\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\x80\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x0f\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x1b\xc2\x1c\x1b\x0c\x1b\x0f\x1b\x83\x1b\x81\x1b\x0d\x1c\x24\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\xb2\x28"
  "\xb3\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\xc1\x1c\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0f"
  "\x0f\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f"
  "\xc1\x1b\x1b\x1b\x81\x1b\x24\x28\xb3\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x80\x0f\x1b\x82\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x1b\x1d\x84\x1b\x83\x28\x0d"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x1b\x1b"
  "\x1b\x82\x1d\x80\x83\x84\x1b\x81\x0d\x1c\x24\x28\x1b\x28\xb3\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0f\x1d"
  "\x02\x0c\x1b\x84\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x0d\x0f\x1b"
  "\x1b\xc3\x1c\x1b\x1b\x0f\x1b\x84\x83\x1d\x0d\x1c\x1b\x85\x0d\x1c"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x0f\x07\x0f\x1b\x02\x80"
  "\x82\x83\x86\x1b\x81\x28\x0d\x1c\x28\xb2\x28\xb3\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1c\x82\x0f\x1b\x83\x80\x81\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1d\x0d\x1c\x0d\x1c\x1b\x1b\x82\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x81\x1b\x0c\x1b\x0c\x1b\x1b\x82\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80"
  "\x82\x1b\x1b\x1d\x1b\x83\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x1b\x1d\x1b\x1b\x1b\x82\x1b\x0f\x1b\x85\x1b\x84\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x81\x84\x1b\x86\x28\x0d\x1c\x28\xb2"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\x1b\x0f\x1b\x82\x80\x81\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x07\x0f\x83\x81\x1b\x82\x28\xb5"
  "\x28\xb6\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x81\x1b\x82\x1b\x83\x28\xb6\x28"
  "\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0c\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x1b\x82\x28\xb5\x28\xb6\x28\x0d\xbd\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x1b\x1b\x82\x28\xb6\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\x1b\x82\x85\x1b\x1d\x1b\x1b\x83\x1b\x1b\x80\x1b\x84\x28\xb6\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x1d\x1b\x83\x1b\x80\x85\x84\x1b\x81"
  "\x28\xb6\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x82\x85\x1b"
  "\x1b\x84\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x02\x1b\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0c\x0c\x0c\x0c\x0c\x0c\x1b"
  "\x80\x0c\x0c\x0c\x0d\x0d\x0d\x1b\x1d\x0f\x1b\x0d\x02\x1b\x83\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x80\x1b\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\xc2\x1c\x1b\x1b\xc1\x1c"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x80\x1b\x1b\xc1\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x81\x1b\x80"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8"
  "\x88\xb0\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x9e\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\xb2\x0d\x1c\x0d\x0d"
  "\x1c\x1b\x0d\x1c\x1b\x1b\x08\x89\x1b\x0d\x1c\x0d\x1c\x1b\x1b\x0d"
  "\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0c\x0d\x1c\x0d"
  "\x1c\x0d\x0d\x1c\x0d\x08\x8c\x1b\x2a\x1b\x2a\x1b\x1b\x1b\xb5\x9a"
  "\xb6\x2a\x1b\x2a\x1b\x2a\x9a\x1b\x2a\x1b\x2a\x1b\x1b\x0d\x0d\x9a"
  "\x1b\x2a\x0f\x1b\x2a\x9a\x1b\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x0d\x1c\x1b\x0c\x1b\x0d\x0d\x08"
  "\x8a\xb1\x1b\x2a\xb3\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x1b\x0d\x1c"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x9e\x0c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x0c\x1b\x2a\x9e\x82\x1b\x1b\x0d\x0d\x1c\x1b\x1b\x0d\x9d\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x84\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x1b\x0c\x1b\x1b"
  "\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x08\x8d\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x0d\x1c\x0d\x0d\x08\x89\x0d\x1b\x1b\x02\x02\x02\x02"
  "\x02\x02\x02\x02\x02\x1b\x1b\x1b\x1b\x1b\x1b\x9c\x1e\x1e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9c\x86\x1b\x1b\x0d\x0d\x1c\x0d\x1c\x0d\x9c\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x85\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0c\x1b"
  "\x0d\x1c\x1b\x1b\x0d\x1b\x0d\x08\x8e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x1b\x1b\x0d\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9c\x83\x0d\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9c\x0d\x1c\x0c\x1b\x1b\x0d\x1b\x08\x8b\x1b"
  "\x2a\x1b\x2a\x1b\xc3\x1b\x02\x02\x1d\x1b\x02\x02\x02\x02\x02\x02"
  "\x0f\x02\x02\x1b\x02\x0f\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x9f"
  "\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9f\x0f"
  "\x0f\x1b\x1b\x1b\x99\x1b\x2a\x1b\x2a\x99\x1b\x1b\x0d\x0d\x1c\x0d"
  "\x1c\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x1b\x0d"
  "\x0d\x0d\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x1c\x0c"
  "\x1b\x1b\x0d\x08\x8a\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x80\xc3\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9f\x0d\x1c\x0d\x1c\x99\x1b\x2a\x0c\x1b\x1b\x0d\x0d\x0d"
  "\x08\x8c\x1b\x2a\x08\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x26\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb4\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6d\x69\x6d"
  "\x65\x2d\x63\x6f\x64\x65\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x0d\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70\x75\x74\x10\x77"
  "\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x0b\x77"
  "\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x04\x0f\x6d\x61\x6b\x65\x2d"
  "\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x03\x15\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x38\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\x03"
  "\x0b\x70\x6f\x72\x74\x2f\x73\x74\x61\x74\x65\x06\x27\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x70\x6f\x72\x74\x2d\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x3a\x77\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x03\x07\x73\x74\x72\x69\x6e\x67\x06\xc0\x01\x18\x81"
  "\x8f\x02\xbf\x01\x16\x81\x8d\x02\xbe\x01\x14\x81\x87\x02\xbd\x01"
  "\x12\x81\x85\x02\xbc\x01\x10\x81\x93\x02\xbb\x01\x0e\x81\x8b\x02"
  "\xba\x01\x0c\x81\x87\x02\xb9\x01\x0a\x81\x85\x02\xb8\x01\x08\x81"
  "\x8b\x02\xb7\x01\x06\x81\x87\x02\xb6\x01\x04\x84\x06\x17\x2b\x09"
  "\x02\xc1\x01\x04\x82\x02\x03\x0a\x02\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x0b\xc2\x01\x04\x83\x04\x03\x0c\x02\x0b\xc3"
  "\x01\x04\x83\x04\x03\x0d\x02\x0b\xc4\x01\x04\x83\x04\x03\x0e\x02"
  "\x0b\xc5\x01\x04\x83\x04\x03\x0f\x02\x08\x0b\xc6\x01\x04\x83\x04"
  "\x03\x10\x02\x09\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74"
  "\x21\x11\x02\xc7\x01\x04\x84\x06\x03\x12\x02\x0a\x11\x02\xc8\x01"
  "\x04\x84\x06\x03\x13\x02\x0b\x11\x02\xc9\x01\x04\x84\x06\x03\x14"
  "\x02\x0c\x0b\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x15\x07\x2e\x74\x61\x67\x2e\x31\x16\x02\xcd\x01\x0a\x81"
  "\x85\x02\xcc\x01\x08\x81\x83\x02\xcb\x01\x06\x81\x83\x02\xca\x01"
  "\x04\x83\x04\x09\x12\x17\x02\x0d\x0a\x69\x6e\x70\x75\x74\x2d\x65"
  "\x6e\x64\x18\x05\x17\x65\x6e\x63\x6f\x64\x65\x2d\x71\x70\x2d\x70"
  "\x65\x6e\x64\x69\x6e\x67\x2d\x6c\x77\x73\x70\x19\x04\x18\x77\x72"
  "\x69\x74\x65\x2d\x71\x70\x2d\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6f"
  "\x75\x74\x70\x75\x74\x1a\x03\xcf\x01\x06\x81\x83\x02\xce\x01\x04"
  "\x83\x04\x05\x0f\x1b\x02\x0e\x09\x6c\x69\x6e\x65\x2d\x65\x6e\x64"
  "\x1c\x01\x0b\x08\x70\x61\x72\x74\x69\x61\x6c\x1d\x0b\x07\x0a\x65"
  "\x6e\x63\x6f\x64\x65\x2d\x71\x70\x1e\x06\x19\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63"
  "\x68\x61\x72\x1f\x03\xd4\x01\x0c\x81\x8d\x02\xd3\x01\x0a\x81\x8b"
  "\x02\xd2\x01\x08\x81\x8b\x02\xd1\x01\x06\x81\x89\x02\xd0\x01\x04"
  "\x86\x0a\x0b\x18\x20\x02\x0f\x11\x1d\x02\x1c\x0b\x73\x74\x72\x69"
  "\x6e\x67\x2d\x72\x65\x66\x21\x14\x63\x68\x61\x72\x2d\x73\x65\x74"
  "\x3a\x71\x70\x2d\x65\x6e\x63\x6f\x64\x65\x64\x22\x02\x05\x19\x03"
  "\x0b\x63\x68\x61\x72\x2d\x6c\x77\x73\x70\x3f\x23\x03\x14\x77\x72"
  "\x69\x74\x65\x2d\x71\x70\x2d\x68\x61\x72\x64\x2d\x62\x72\x65\x61"
  "\x6b\x24\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d"
  "\x62\x65\x72\x3f\x04\x0f\x77\x72\x69\x74\x65\x2d\x71\x70\x2d\x63"
  "\x6c\x65\x61\x72\x25\x04\x11\x77\x72\x69\x74\x65\x2d\x71\x70\x2d"
  "\x65\x6e\x63\x6f\x64\x65\x64\x26\x07\xdd\x01\x14\x81\x8f\x02\xdc"
  "\x01\x12\x81\x8f\x02\xdb\x01\x10\x81\x8f\x02\xda\x01\x0e\x81\x93"
  "\x02\xd9\x01\x0c\x81\x8f\x02\xd8\x01\x0a\x81\x8d\x02\xd7\x01\x08"
  "\x81\x8d\x02\xd6\x01\x06\x81\x8b\x02\xd5\x01\x04\x87\x0c\x13\x2c"
  "\x27\x02\x10\x11\x02\x1d\x0b\x04\x26\x04\x25\x03\xe1\x01\x0a\x81"
  "\x89\x02\xe0\x01\x08\x81\x89\x02\xdf\x01\x06\x81\x87\x02\xde\x01"
  "\x04\x85\x08\x09\x16\x28\x02\x11\x11\x02\x0b\x04\x1a\x04\x03\x14"
  "\x77\x72\x69\x74\x65\x2d\x71\x70\x2d\x73\x6f\x66\x74\x2d\x62\x72"
  "\x65\x61\x6b\x29\x03\x05\xea\x01\x14\x81\x89\x02\xe9\x01\x12\x81"
  "\x89\x02\xe8\x01\x10\x81\x89\x02\xe7\x01\x0e\x81\x89\x02\xe6\x01"
  "\x0c\x81\x89\x02\xe5\x01\x0a\x81\x87\x02\xe4\x01\x08\x81\x85\x02"
  "\xe3\x01\x06\x81\x85\x02\xe2\x01\x04\x84\x06\x13\x26\x2a\x02\x12"
  "\x11\x02\x01\x3e\x4a\x21\x0b\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e"
  "\x74\x65\x67\x65\x72\x2b\x10\x68\x65\x78\x2d\x64\x69\x67\x69\x74"
  "\x2d\x74\x61\x62\x6c\x65\x2c\x02\x04\x1a\x05\x03\x29\x04\x05\xf9"
  "\x01\x20\x81\x8f\x02\xf8\x01\x1e\x81\x8f\x02\xf7\x01\x1c\x81\x8f"
  "\x02\xf6\x01\x1a\x81\x8f\x02\xf5\x01\x18\x81\x8f\x02\xf4\x01\x16"
  "\x81\x8d\x02\xf3\x01\x14\x81\x8d\x02\xf2\x01\x12\x81\x8b\x02\xf1"
  "\x01\x10\x81\x8b\x02\xf0\x01\x0e\x81\x89\x02\xef\x01\x0c\x81\x87"
  "\x02\xee\x01\x0a\x81\x85\x02\xed\x01\x08\x81\x85\x02\xec\x01\x06"
  "\x81\x8f\x02\xeb\x01\x04\x84\x06\x1f\x37\x02\x13\x11\x02\x0b\x04"
  "\x1a\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x2d\x03\xfd\x01\x0a\x81"
  "\x83\x02\xfc\x01\x08\x81\x85\x02\xfb\x01\x06\x81\x83\x02\xfa\x01"
  "\x04\x83\x04\x09\x18\x2e\x02\x14\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x2f\x11\x02\x0b\x03\x29\x04\x0d\x77\x72"
  "\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x30\x03\x85\x02\x12\x81"
  "\x89\x02\x84\x02\x10\x81\x87\x02\x83\x02\x0e\x81\x87\x02\x82\x02"
  "\x0c\x81\x87\x02\x81\x02\x0a\x81\x89\x02\x80\x02\x08\x81\x85\x02"
  "\xff\x01\x06\x84\x06\xfe\x01\x04\x81\x87\x02\x11\x20\x31\x02\x15"
  "\x11\x02\x01\x3e\x0b\x04\x03\x2d\x03\x89\x02\x0a\x81\x83\x02\x88"
  "\x02\x08\x81\x83\x02\x87\x02\x06\x81\x85\x02\x86\x02\x04\x83\x04"
  "\x09\x18\x32\x02\x16\x0b\x8a\x02\x04\x83\x04\x03\x33\x02\x17\x0b"
  "\x8b\x02\x04\x83\x04\x03\x34\x02\x18\x0b\x8c\x02\x04\x83\x04\x03"
  "\x35\x02\x19\x11\x02\x8d\x02\x04\x84\x06\x03\x36\x02\x1a\x0b\x15"
  "\x07\x2e\x74\x61\x67\x2e\x32\x37\x02\x91\x02\x0a\x81\x85\x02\x90"
  "\x02\x08\x81\x83\x02\x8f\x02\x06\x81\x83\x02\x8e\x02\x04\x83\x04"
  "\x09\x12\x38\x02\x1b\x18\x01\x07\x0a\x64\x65\x63\x6f\x64\x65\x2d"
  "\x71\x70\x18\x02\x92\x02\x04\x83\x04\x03\x0c\x39\x02\x1c\x1c\x1d"
  "\x01\x0b\x06\x1f\x07\x18\x05\x14\x73\x6b\x69\x70\x2d\x6c\x77\x73"
  "\x70\x2d\x62\x61\x63\x6b\x77\x61\x72\x64\x73\x3a\x04\x97\x02\x0c"
  "\x81\x91\x02\x96\x02\x0a\x81\x8d\x02\x95\x02\x08\x81\x8b\x02\x94"
  "\x02\x06\x81\x8b\x02\x93\x02\x04\x86\x0a\x0b\x18\x3b\x02\x1d\x04"
  "\x22\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6f\x64\x65\x2d\x71\x75\x6f"
  "\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x2d\x70\x6f"
  "\x72\x74\x3c\x03\x12\x63\x6c\x6f\x73\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x3d\x03\x9b\x02\x0a\x81\x8b\x02\x9a\x02"
  "\x08\x81\x89\x02\x99\x02\x06\x81\x87\x02\x98\x02\x04\x85\x08\x09"
  "\x11\x3e\x02\x1e\x22\x64\x65\x63\x6f\x64\x65\x2d\x71\x75\x6f\x74"
  "\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x2d\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\x3f\x02\x04\x23\x64\x65\x63\x6f\x64\x65"
  "\x2d\x71\x75\x6f\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c"
  "\x65\x3a\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x40\x04\x0a\x6d"
  "\x61\x6b\x65\x2d\x70\x6f\x72\x74\x41\x03\x9e\x02\x08\x81\x85\x02"
  "\x9d\x02\x06\x81\x85\x02\x9c\x02\x04\x84\x06\x07\x11\x42\x02\x1f"
  "\x02\x1c\x1d\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65"
  "\x66\x1d\x2b\x17\x49\x6c\x6c\x65\x67\x61\x6c\x20\x50\x45\x4e\x44"
  "\x49\x4e\x47\x20\x76\x61\x6c\x75\x65\x3a\x21\x01\x3e\x11\x0b\x22"
  "\x0f\x68\x65\x78\x2d\x63\x68\x61\x72\x2d\x74\x61\x62\x6c\x65\x1c"
  "\x03\x05\x3a\x04\x05\x65\x71\x76\x3f\x06\x20\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63"
  "\x68\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x06\x0e\x64\x65\x63\x6f"
  "\x64\x65\x2d\x71\x70\x2d\x68\x65\x78\x43\x04\x30\x04\x06\x65\x72"
  "\x72\x6f\x72\x44\x06\x04\x06\x19\x64\x65\x63\x6f\x64\x65\x2d\x71"
  "\x70\x2d\x70\x65\x6e\x64\x69\x6e\x67\x2d\x73\x74\x72\x69\x6e\x67"
  "\x45\x03\x2d\x0b\xbe\x02\x42\x81\x91\x02\xbd\x02\x40\x81\x91\x02"
  "\xbc\x02\x3e\x81\x91\x02\xbb\x02\x3c\x81\x91\x02\xba\x02\x3a\x81"
  "\x83\x02\xb9\x02\x38\x81\x91\x02\xb8\x02\x36\x81\x8f\x02\xb7\x02"
  "\x34\x81\x8f\x02\xb6\x02\x32\x81\x93\x02\xb5\x02\x30\x81\x93\x02"
  "\xb4\x02\x2e\x81\x93\x02\xb3\x02\x2c\x81\x91\x02\xb2\x02\x2a\x81"
  "\x91\x02\xb1\x02\x28\x81\x91\x02\xb0\x02\x26\x81\x83\x02\xaf\x02"
  "\x24\x81\x85\x02\xae\x02\x22\x81\x83\x02\xad\x02\x20\x81\x93\x02"
  "\xac\x02\x1e\x81\x97\x02\xab\x02\x1c\x81\x95\x02\xaa\x02\x1a\x81"
  "\x91\x02\xa9\x02\x18\x81\x91\x02\xa8\x02\x16\x81\x91\x02\xa7\x02"
  "\x14\x81\x95\x02\xa6\x02\x12\x81\x91\x02\xa5\x02\x10\x81\x93\x02"
  "\xa4\x02\x0e\x81\x91\x02\xa3\x02\x0c\x81\x91\x02\xa2\x02\x0a\x81"
  "\x8f\x02\xa1\x02\x08\x81\x8d\x02\xa0\x02\x06\x81\x8b\x02\x9f\x02"
  "\x04\x87\x0c\x41\x68\x46\x02\x20\x10\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x65\x47\x2f\x05\x0a\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x48\x05\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6d"
  "\x6f\x76\x65\x21\x07\x10\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x6f\x76\x65\x21\x49\x04\xc3\x02\x0c\x81\x8d\x02\xc2\x02\x0a"
  "\x81\x8b\x02\xc1\x02\x08\x81\x89\x02\xc0\x02\x06\x81\x8b\x02\xbf"
  "\x02\x04\x86\x0a\x0b\x18\x4a\x02\x21\x01\x0a\x01\x21\xc4\x02\x04"
  "\x83\x04\x03\x4b\x02\x22\x21\x03\x23\x02\xc8\x02\x0a\x81\x8b\x02"
  "\xc7\x02\x08\x81\x89\x02\xc6\x02\x06\x81\x89\x02\xc5\x02\x04\x85"
  "\x08\x09\x10\x4c\x02\x23\x01\x3e\x0e\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x3e\x63\x68\x61\x72\x1d\x2b\x0b\x1c\x02\x04\x02\xd4\x02\x1a"
  "\x81\x8d\x02\xd3\x02\x18\x81\x8d\x02\xd2\x02\x16\x81\x8d\x02\xd1"
  "\x02\x14\x81\x8f\x02\xd0\x02\x12\x81\x91\x02\xcf\x02\x10\x81\x8f"
  "\x02\xce\x02\x0e\x81\x8d\x02\xcd\x02\x0c\x81\x8f\x02\xcc\x02\x0a"
  "\x81\x8d\x02\xcb\x02\x08\x81\x89\x02\xca\x02\x06\x86\x0a\xc9\x02"
  "\x04\x81\x8b\x02\x19\x27\x4d\x02\x24\x1d\x2b\x1c\x02\xd8\x02\x0a"
  "\x81\x83\x02\xd7\x02\x08\x81\x85\x02\xd6\x02\x06\x81\x83\x02\xd5"
  "\x02\x04\x83\x04\x09\x11\x4e\x02\x25\x1d\x2b\x1c\x02\xdb\x02\x08"
  "\x81\x85\x02\xda\x02\x06\x81\x83\x02\xd9\x02\x04\x83\x04\x07\x0e"
  "\x4f\x02\x26\x21\x2c\x02\xdd\x02\x06\x81\x83\x02\xdc\x02\x04\x83"
  "\x04\x05\x0b\x50\x02\x27\x47\x31\xde\x02\x04\x82\x02\x03\x51\x02"
  "\x28\xdf\x02\x04\x82\x02\x03\x52\x02\x29\x0b\xe0\x02\x04\x83\x04"
  "\x03\x53\x02\x2a\x0b\xe1\x02\x04\x83\x04\x03\x54\x02\x2b\x0b\xe2"
  "\x02\x04\x83\x04\x03\x55\x02\x2c\x0b\xe3\x02\x04\x83\x04\x03\x56"
  "\x02\x2d\x11\x02\xe4\x02\x04\x84\x06\x03\x57\x02\x2e\x0b\x15\x07"
  "\x2e\x74\x61\x67\x2e\x33\x58\x02\xe8\x02\x0a\x81\x85\x02\xe7\x02"
  "\x08\x81\x83\x02\xe6\x02\x06\x81\x83\x02\xe5\x02\x04\x83\x04\x09"
  "\x12\x59\x02\x2f\x03\x12\x77\x72\x69\x74\x65\x2d\x62\x61\x73\x65"
  "\x36\x34\x2d\x6c\x69\x6e\x65\x5a\x02\xe9\x02\x04\x83\x04\x03\x5b"
  "\x02\x30\x03\x0d\x0a\x01\x0b\x0b\x06\x0e\x65\x6e\x63\x6f\x64\x65"
  "\x2d\x62\x61\x73\x65\x36\x34\x5c\x06\x1f\x03\xef\x02\x0e\x81\x8d"
  "\x02\xee\x02\x0c\x81\x8d\x02\xed\x02\x0a\x81\x8b\x02\xec\x02\x08"
  "\x81\x8b\x02\xeb\x02\x06\x81\x89\x02\xea\x02\x04\x86\x0a\x0d\x1a"
  "\x5d\x02\x31\x31\x11\x02\x0b\x04\x08\x66\x69\x78\x3a\x6d\x69\x6e"
  "\x07\x49\x03\x5a\x04\xf7\x02\x12\x81\x91\x02\xf6\x02\x10\x81\x83"
  "\x02\xf5\x02\x0e\x81\x93\x02\xf4\x02\x0c\x81\x8f\x02\xf3\x02\x0a"
  "\x81\x8d\x02\xf2\x02\x08\x81\x8d\x02\xf1\x02\x06\x81\x89\x02\xf0"
  "\x02\x04\x86\x0a\x11\x21\x5e\x02\x32\x01\x3e\x21\x11\x1d\x02\x0b"
  "\x13\x62\x61\x73\x65\x36\x34\x2d\x64\x69\x67\x69\x74\x2d\x74\x61"
  "\x62\x6c\x65\x5f\x02\x03\x2d\x04\x03\x91\x03\x36\x81\x87\x02\x90"
  "\x03\x34\x81\x85\x02\x8f\x03\x32\x81\x85\x02\x8e\x03\x30\x81\x87"
  "\x02\x8d\x03\x2e\x81\x85\x02\x8c\x03\x2c\x81\x85\x02\x8b\x03\x2a"
  "\x81\x83\x02\x8a\x03\x28\x81\x85\x02\x89\x03\x26\x81\x85\x02\x88"
  "\x03\x24\x81\x85\x02\x87\x03\x22\x81\x85\x02\x86\x03\x20\x81\x87"
  "\x02\x85\x03\x1e\x81\x85\x02\x84\x03\x1c\x81\x89\x02\x83\x03\x1a"
  "\x81\x89\x02\x82\x03\x18\x81\x8b\x02\x81\x03\x16\x81\x89\x02\x80"
  "\x03\x14\x81\x87\x02\xff\x02\x12\x81\x87\x02\xfe\x02\x10\x81\x89"
  "\x02\xfd\x02\x0e\x81\x87\x02\xfc\x02\x0c\x81\x83\x02\xfb\x02\x0a"
  "\x81\x87\x02\xfa\x02\x08\x81\x85\x02\xf9\x02\x06\x81\x83\x02\xf8"
  "\x02\x04\x83\x04\x35\x4a\x60\x02\x33\x47\x92\x03\x04\x82\x02\x03"
  "\x61\x02\x34\x93\x03\x04\x82\x02\x03\x62\x02\x35\x0b\x6c\x69\x6e"
  "\x65\x2d\x73\x74\x61\x72\x74\x63\x94\x03\x04\x82\x02\x03\x64\x02"
  "\x36\x47\x95\x03\x04\x82\x02\x03\x65\x02\x37\x0b\x96\x03\x04\x83"
  "\x04\x03\x66\x02\x38\x0b\x97\x03\x04\x83\x04\x03\x67\x02\x39\x0b"
  "\x98\x03\x04\x83\x04\x03\x68\x02\x3a\x0b\x99\x03\x04\x83\x04\x03"
  "\x69\x02\x3b\x0b\x9a\x03\x04\x83\x04\x03\x6a\x02\x3c\x0b\x9b\x03"
  "\x04\x83\x04\x03\x6b\x02\x3d\x0b\x08\x9c\x03\x04\x83\x04\x03\x6c"
  "\x02\x3e\x11\x02\x9d\x03\x04\x84\x06\x03\x6d\x02\x3f\x11\x02\x9e"
  "\x03\x04\x84\x06\x03\x6e\x02\x40\x11\x02\x08\x9f\x03\x04\x84\x06"
  "\x03\x6f\x02\x41\x0b\x15\x07\x2e\x74\x61\x67\x2e\x34\x70\x02\xa3"
  "\x03\x0a\x81\x85\x02\xa2\x03\x08\x81\x83\x02\xa1\x03\x06\x81\x83"
  "\x02\xa0\x03\x04\x83\x04\x09\x12\x71\x02\x42\x01\x0e\x02\x08\x2c"
  "\x42\x41\x53\x45\x36\x34\x20\x69\x6e\x70\x75\x74\x20\x6c\x65\x6e"
  "\x67\x74\x68\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x20\x6f\x66\x20\x34\x2e\x0b\x03\x14\x65\x72"
  "\x72\x6f\x72\x3a\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36"
  "\x34\x72\x04\x03\xa8\x03\x0c\x81\x85\x02\xa7\x03\x0a\x81\x83\x02"
  "\xa6\x03\x08\x81\x83\x02\xa5\x03\x06\x83\x04\xa4\x03\x04\x81\x83"
  "\x02\x0b\x1a\x73\x02\x43\x08\x69\x6e\x2d\x6c\x69\x6e\x65\x01\x0b"
  "\x11\x63\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x63\x1d"
  "\x2b\x01\x3e\x21\x02\x09\x66\x69\x6e\x69\x73\x68\x65\x64\x74\x0b"
  "\x12\x62\x61\x73\x65\x36\x34\x2d\x63\x68\x61\x72\x2d\x74\x61\x62"
  "\x6c\x65\x75\x02\x03\x16\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73"
  "\x65\x36\x34\x2d\x71\x75\x61\x6e\x74\x75\x6d\x76\x02\xb7\x03\x20"
  "\x81\x93\x02\xb6\x03\x1e\x81\x95\x02\xb5\x03\x1c\x81\x93\x02\xb4"
  "\x03\x1a\x81\x93\x02\xb3\x03\x18\x81\x93\x02\xb2\x03\x16\x81\x93"
  "\x02\xb1\x03\x14\x81\x95\x02\xb0\x03\x12\x81\x93\x02\xaf\x03\x10"
  "\x81\x91\x02\xae\x03\x0e\x81\x91\x02\xad\x03\x0c\x81\x8d\x02\xac"
  "\x03\x0a\x81\x8b\x02\xab\x03\x08\x81\x89\x02\xaa\x03\x06\x81\x89"
  "\x02\xa9\x03\x04\x86\x0a\x1f\x37\x77\x02\x44\x04\x18\x6d\x61\x6b"
  "\x65\x2d\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x2d"
  "\x70\x6f\x72\x74\x78\x03\x3d\x03\xbb\x03\x0a\x81\x8b\x02\xba\x03"
  "\x08\x81\x89\x02\xb9\x03\x06\x81\x87\x02\xb8\x03\x04\x85\x08\x09"
  "\x11\x79\x02\x45\x18\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65"
  "\x36\x34\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x7a\x02\x04\x19"
  "\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x3a\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x7b\x04\x41\x03\xbe\x03\x08\x81"
  "\x85\x02\xbd\x03\x06\x81\x85\x02\xbc\x03\x04\x84\x06\x07\x11\x7c"
  "\x02\x46\x11\x02\x01\x0b\x01\x0e\x21\x08\x0b\x04\x18\x64\x65\x63"
  "\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x2d\x71\x75\x61\x6e\x74"
  "\x75\x6d\x2d\x31\x7d\x06\x04\x03\x2d\x05\xca\x03\x1a\x81\x91\x02"
  "\xc9\x03\x18\x81\x91\x02\xc8\x03\x16\x81\x91\x02\xc7\x03\x14\x81"
  "\x8f\x02\xc6\x03\x12\x81\x8f\x02\xc5\x03\x10\x81\x8b\x02\xc4\x03"
  "\x0e\x81\x8b\x02\xc3\x03\x0c\x81\x89\x02\xc2\x03\x0a\x81\x87\x02"
  "\xc1\x03\x08\x81\x85\x02\xc0\x03\x06\x81\x83\x02\xbf\x03\x04\x83"
  "\x04\x19\x32\x2d\x02\x47\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62"
  "\x2d\x73\x65\x74\x21\x7e\x01\x3e\x21\x04\x13\x64\x65\x63\x6f\x64"
  "\x65\x2d\x62\x61\x73\x65\x36\x34\x2d\x63\x68\x61\x72\x7f\x02\xd8"
  "\x03\x1e\x81\x87\x02\xd7\x03\x1c\x81\x87\x02\xd6\x03\x1a\x81\x87"
  "\x02\xd5\x03\x18\x81\x8b\x02\xd4\x03\x16\x81\x89\x02\xd3\x03\x14"
  "\x81\x83\x02\xd2\x03\x12\x81\x8b\x02\xd1\x03\x10\x81\x89\x02\xd0"
  "\x03\x0e\x81\x89\x02\xcf\x03\x0c\x81\x89\x02\xce\x03\x0a\x81\x89"
  "\x02\xcd\x03\x08\x81\x87\x02\xcc\x03\x06\x81\x85\x02\xcb\x03\x04"
  "\x84\x06\x1d\x2a\x80\x01\x02\x48\x1f\x4d\x69\x73\x70\x6c\x61\x63"
  "\x65\x64\x20\x23\x5c\x3d\x20\x69\x6e\x20\x42\x41\x53\x45\x36\x34"
  "\x20\x69\x6e\x70\x75\x74\x2e\x1d\x75\x02\x03\x72\x02\xdd\x03\x0c"
  "\x81\x85\x02\xdc\x03\x0a\x81\x87\x02\xdb\x03\x08\x81\x85\x02\xda"
  "\x03\x06\x84\x06\xd9\x03\x04\x81\x83\x02\x0b\x15\x81\x01\x02\x49"
  "\x10\x73\x65\x65\x6b\x69\x6e\x67\x2d\x63\x6f\x6d\x6d\x65\x6e\x74"
  "\x82\x01\xde\x03\x04\x82\x02\x03\x83\x01\x02\x4a\x01\x84\x01\xdf"
  "\x03\x04\x82\x02\x03\x85\x01\x02\x4b\x47\xe0\x03\x04\x82\x02\x03"
  "\x86\x01\x02\x4c\xe1\x03\x04\x82\x02\x03\x87\x01\x02\x4d\x47\xe2"
  "\x03\x04\x82\x02\x03\x88\x01\x02\x4e\x0b\xe3\x03\x04\x83\x04\x03"
  "\x89\x01\x02\x4f\x0b\xe4\x03\x04\x83\x04\x03\x8a\x01\x02\x50\x0b"
  "\xe5\x03\x04\x83\x04\x03\x8b\x01\x02\x51\x0b\xe6\x03\x04\x83\x04"
  "\x03\x8c\x01\x02\x52\x0b\xe7\x03\x04\x83\x04\x03\x8d\x01\x02\x53"
  "\x0b\xe8\x03\x04\x83\x04\x03\x8e\x01\x02\x54\x11\x02\xe9\x03\x04"
  "\x84\x06\x03\x8f\x01\x02\x55\x11\x02\xea\x03\x04\x84\x06\x03\x90"
  "\x01\x02\x56\x11\x02\xeb\x03\x04\x84\x06\x03\x91\x01\x02\x57\x0b"
  "\x15\x07\x2e\x74\x61\x67\x2e\x35\x92\x01\x02\xef\x03\x0a\x81\x85"
  "\x02\xee\x03\x08\x81\x83\x02\xed\x03\x06\x81\x83\x02\xec\x03\x04"
  "\x83\x04\x09\x12\x93\x01\x02\x58\x03\x22\x6d\x61\x6b\x65\x2d\x62"
  "\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x73\x74\x72"
  "\x75\x63\x74\x69\x6e\x67\x2d\x70\x6f\x72\x74\x94\x01\x03\x1f\x6d"
  "\x61\x6b\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x95\x01\x03"
  "\x27\x6d\x61\x6b\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x72"
  "\x75\x6e\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x64\x65\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x70\x6f\x72\x74\x96\x01\x04\xf2\x03\x08\x81\x87\x02"
  "\xf1\x03\x06\x81\x85\x02\xf0\x03\x04\x84\x06\x07\x11\x97\x01\x02"
  "\x59\x17\x49\x6c\x6c\x65\x67\x61\x6c\x20\x64\x65\x63\x6f\x64\x65"
  "\x72\x20\x73\x74\x61\x74\x65\x3a\x02\x09\x69\x67\x6e\x6f\x72\x69"
  "\x6e\x67\x98\x01\x09\x64\x65\x63\x6f\x64\x69\x6e\x67\x99\x01\x82"
  "\x01\x0b\x06\x20\x64\x65\x63\x6f\x64\x65\x2d\x62\x69\x6e\x68\x65"
  "\x78\x34\x30\x2d\x73\x65\x65\x6b\x69\x6e\x67\x2d\x63\x6f\x6d\x6d"
  "\x65\x6e\x74\x9a\x01\x06\x19\x64\x65\x63\x6f\x64\x65\x2d\x62\x69"
  "\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x9b"
  "\x01\x04\x44\x04\xf5\x03\x08\x81\x8b\x02\xf4\x03\x06\x81\x89\x02"
  "\xf3\x03\x04\x86\x0a\x07\x18\x9c\x01\x02\x5a\x17\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x64\x65\x63\x6f\x64\x65\x72\x20\x73\x74\x61\x74"
  "\x65\x3a\x98\x01\x2a\x4d\x69\x73\x73\x69\x6e\x67\x20\x42\x69\x6e"
  "\x48\x65\x78\x20\x34\x2e\x30\x20\x74\x65\x72\x6d\x69\x6e\x61\x74"
  "\x69\x6e\x67\x20\x63\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x99\x01"
  "\x29\x4d\x69\x73\x73\x69\x6e\x67\x20\x42\x69\x6e\x48\x65\x78\x20"
  "\x34\x2e\x30\x20\x69\x6e\x69\x74\x69\x61\x6c\x20\x63\x6f\x6d\x6d"
  "\x65\x6e\x74\x20\x6c\x69\x6e\x65\x2e\x82\x01\x0b\x03\x44\x04\x44"
  "\x03\x3d\x04\xf9\x03\x0a\x81\x87\x02\xf8\x03\x08\x81\x85\x02\xf7"
  "\x03\x06\x81\x83\x02\xf6\x03\x04\x83\x04\x09\x1c\x82\x01\x02\x5b"
  "\x04\x1a\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6f\x64\x65\x2d\x62\x69"
  "\x6e\x68\x65\x78\x34\x30\x2d\x70\x6f\x72\x74\x9d\x01\x03\x3d\x03"
  "\xfd\x03\x0a\x81\x8b\x02\xfc\x03\x08\x81\x89\x02\xfb\x03\x06\x81"
  "\x87\x02\xfa\x03\x04\x85\x08\x09\x11\x9e\x01\x02\x5c\x1a\x64\x65"
  "\x63\x6f\x64\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x70\x6f"
  "\x72\x74\x2d\x74\x79\x70\x65\x9f\x01\x02\x04\x1b\x64\x65\x63\x6f"
  "\x64\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x3a\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\xa0\x01\x04\x41\x03\x80\x04\x08\x81\x85"
  "\x02\xff\x03\x06\x81\x85\x02\xfe\x03\x04\x84\x06\x07\x11\xa1\x01"
  "\x02\x5d\x2f\x99\x01\x11\x02\x0b\x17\x62\x69\x6e\x68\x65\x78\x34"
  "\x30\x2d\x68\x65\x61\x64\x65\x72\x2d\x72\x65\x67\x65\x78\x70\x99"
  "\x01\x02\x05\x48\x04\x10\x72\x65\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x61\x74\x63\x68\x48\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x04\x13\x72\x65\x2d\x6d\x61\x74\x63\x68\x2d"
  "\x65\x6e\x64\x2d\x69\x6e\x64\x65\x78\x06\x17\x64\x65\x63\x6f\x64"
  "\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x3a\x75\x70\x64\x61\x74"
  "\x65\xa2\x01\x06\x8a\x04\x16\x81\x8d\x02\x89\x04\x14\x81\x8d\x02"
  "\x88\x04\x12\x81\x8d\x02\x87\x04\x10\x81\x8d\x02\x86\x04\x0e\x81"
  "\x8b\x02\x85\x04\x0c\x81\x8d\x02\x84\x04\x0a\x81\x8b\x02\x83\x04"
  "\x08\x81\x8f\x02\x82\x04\x06\x81\x89\x02\x81\x04\x04\x86\x0a\x15"
  "\x2d\xa3\x01\x02\x5e\x11\x02\x1d\x2b\x98\x01\x63\x01\x3b\x21\x0b"
  "\x14\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x63\x68\x61\x72\x2d\x74"
  "\x61\x62\x6c\x65\x98\x01\x02\x03\x18\x64\x65\x63\x6f\x64\x65\x2d"
  "\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x71\x75\x61\x6e\x74\x75\x6d"
  "\xa4\x01\x02\x96\x04\x1a\x81\x93\x02\x95\x04\x18\x81\x93\x02\x94"
  "\x04\x16\x81\x93\x02\x93\x04\x14\x81\x95\x02\x92\x04\x12\x81\x93"
  "\x02\x91\x04\x10\x81\x93\x02\x90\x04\x0e\x81\x91\x02\x8f\x04\x0c"
  "\x81\x8f\x02\x8e\x04\x0a\x81\x93\x02\x8d\x04\x08\x81\x8b\x02\x8c"
  "\x04\x06\x81\x89\x02\x8b\x04\x04\x86\x0a\x19\x2e\xa5\x01\x02\x5f"
  "\x0b\x04\x1a\x64\x65\x63\x6f\x64\x65\x2d\x62\x69\x6e\x68\x65\x78"
  "\x34\x30\x2d\x71\x75\x61\x6e\x74\x75\x6d\x2d\x31\xa6\x01\x06\x03"
  "\x9b\x04\x0c\x81\x89\x02\x9a\x04\x0a\x81\x87\x02\x99\x04\x08\x81"
  "\x85\x02\x98\x04\x06\x81\x83\x02\x97\x04\x04\x83\x04\x0b\x18\xa7"
  "\x01\x02\x60\x7e\x01\x3b\x21\x04\x15\x64\x65\x63\x6f\x64\x65\x2d"
  "\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x63\x68\x61\x72\xa8\x01\x02"
  "\xa9\x04\x1e\x81\x87\x02\xa8\x04\x1c\x81\x87\x02\xa7\x04\x1a\x81"
  "\x87\x02\xa6\x04\x18\x81\x8b\x02\xa5\x04\x16\x81\x89\x02\xa4\x04"
  "\x14\x81\x83\x02\xa3\x04\x12\x81\x8b\x02\xa2\x04\x10\x81\x89\x02"
  "\xa1\x04\x0e\x81\x89\x02\xa0\x04\x0c\x81\x89\x02\x9f\x04\x0a\x81"
  "\x89\x02\x9e\x04\x08\x81\x87\x02\x9d\x04\x06\x81\x85\x02\x9c\x04"
  "\x04\x84\x06\x1d\x2a\xa9\x01\x02\x61\x2e\x49\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x63\x68\x61\x72\x61\x63\x74\x65\x72\x20\x69\x6e\x20\x42"
  "\x69\x6e\x48\x65\x78\x20\x34\x2e\x30\x20\x69\x6e\x70\x75\x74\x20"
  "\x73\x74\x72\x65\x61\x6d\x3a\x21\x1d\x98\x01\x02\x04\x44\x02\xaf"
  "\x04\x0e\x81\x89\x02\xae\x04\x0c\x81\x85\x02\xad\x04\x0a\x81\x87"
  "\x02\xac\x04\x08\x81\x85\x02\xab\x04\x06\x84\x06\xaa\x04\x04\x81"
  "\x87\x02\x0d\x18\xaa\x01\x02\x62\x27\x62\x69\x6e\x68\x65\x78\x34"
  "\x30\x2d\x72\x75\x6e\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x64\x65\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\xab"
  "\x01\x02\x03\x18\x6d\x61\x6b\x65\x2d\x62\x69\x6e\x68\x65\x78\x34"
  "\x30\x2d\x72\x6c\x64\x2d\x73\x74\x61\x74\x65\xac\x01\x04\x41\x03"
  "\xb2\x04\x08\x81\x85\x02\xb1\x04\x06\x81\x83\x02\xb0\x04\x04\x83"
  "\x04\x07\x11\xad\x01\x02\x63\x11\x2b\x01\x91\x01\x0b\x03\x03\x04"
  "\x04\xbf\x04\x1c\x81\x85\x02\xbe\x04\x1a\x81\x85\x02\xbd\x04\x18"
  "\x81\x89\x02\xbc\x04\x16\x81\x87\x02\xbb\x04\x14\x81\x85\x02\xba"
  "\x04\x12\x81\x83\x02\xb9\x04\x10\x81\x87\x02\xb8\x04\x0e\x81\x87"
  "\x02\xb7\x04\x0c\x81\x87\x02\xb6\x04\x0a\x81\x85\x02\xb5\x04\x08"
  "\x81\x83\x02\xb4\x04\x06\x81\x85\x02\xb3\x04\x04\x84\x06\x1b\x2e"
  "\xae\x01\x02\x64\x01\x91\x01\x0b\x11\x03\x03\x3d\x04\x04\xc8\x04"
  "\x14\x81\x87\x02\xc7\x04\x12\x81\x85\x02\xc6\x04\x10\x81\x83\x02"
  "\xc5\x04\x0e\x81\x83\x02\xc4\x04\x0c\x81\x87\x02\xc3\x04\x0a\x81"
  "\x87\x02\xc2\x04\x08\x81\x87\x02\xc1\x04\x06\x81\x87\x02\xc0\x04"
  "\x04\x83\x04\x13\x23\xaf\x01\x02\x65\x0b\xc9\x04\x04\x83\x04\x03"
  "\xb0\x01\x02\x66\x0b\xca\x04\x04\x83\x04\x03\xb1\x01\x02\x67\x0b"
  "\xcb\x04\x04\x83\x04\x03\xb2\x01\x02\x68\x11\x02\xcc\x04\x04\x84"
  "\x06\x03\xb3\x01\x02\x69\x11\x02\xcd\x04\x04\x84\x06\x03\xb4\x01"
  "\x02\x6a\x0b\x15\x07\x2e\x74\x61\x67\x2e\x36\xb5\x01\x02\xd1\x04"
  "\x0a\x81\x85\x02\xd0\x04\x08\x81\x83\x02\xcf\x04\x06\x81\x83\x02"
  "\xce\x04\x04\x83\x04\x09\x12\xb6\x01\x02\x6b\x22\x62\x69\x6e\x68"
  "\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x73\x74\x72\x75\x63\x74"
  "\x69\x6e\x67\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\xb7\x01\x02"
  "\x03\x14\x6d\x61\x6b\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d"
  "\x64\x65\x63\x6f\x6e\xb8\x01\x04\x41\x03\xd4\x04\x08\x81\x85\x02"
  "\xd3\x04\x06\x81\x83\x02\xd2\x04\x04\x83\x04\x07\x11\xb9\x01\x02"
  "\x6c\x2b\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73\x74\x61\x74\x65\x20"
  "\x69\x6e\x20\x42\x69\x6e\x48\x65\x78\x20\x34\x2e\x30\x20\x64\x65"
  "\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x2e\x74\x0e\x73\x6b"
  "\x69\x70\x70\x69\x6e\x67\x2d\x74\x61\x69\x6c\xba\x01\x0d\x63\x6f"
  "\x70\x79\x69\x6e\x67\x2d\x64\x61\x74\x61\xbb\x01\x0f\x72\x65\x61"
  "\x64\x69\x6e\x67\x2d\x68\x65\x61\x64\x65\x72\xbc\x01\x0b\x03\x03"
  "\x04\x1e\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e"
  "\x2d\x72\x65\x61\x64\x69\x6e\x67\x2d\x68\x65\x61\x64\x65\x72\x04"
  "\x1c\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2d"
  "\x63\x6f\x70\x79\x69\x6e\x67\x2d\x64\x61\x74\x61\xbd\x01\x03\x1d"
  "\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2d\x73"
  "\x6b\x69\x70\x70\x69\x6e\x67\x2d\x74\x61\x69\x6c\xbe\x01\x03\x44"
  "\x07\xd9\x04\x0c\x81\x85\x02\xd8\x04\x0a\x81\x87\x02\xd7\x04\x08"
  "\x81\x87\x02\xd6\x04\x06\x81\x85\x02\xd5\x04\x04\x84\x06\x0b\x23"
  "\xbf\x01\x02\x6d\x24\x50\x72\x65\x6d\x61\x74\x75\x72\x65\x20\x45"
  "\x4f\x46\x20\x69\x6e\x20\x42\x69\x6e\x48\x65\x78\x20\x34\x2e\x30"
  "\x20\x73\x74\x72\x65\x61\x6d\x2e\x02\x74\x0b\x03\x03\x44\x03\xdc"
  "\x04\x08\x81\x83\x02\xdb\x04\x06\x81\x83\x02\xda\x04\x04\x83\x04"
  "\x07\x14\xc0\x01\x02\x6e\xbb\x01\x11\x02\x2f\x63\x47\x2b\x0b\x03"
  "\x04\x0f\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x34\x62\x79\x74\x65"
  "\xbb\x01\x03\xe9\x04\x1c\x81\x89\x02\xe8\x04\x1a\x81\x89\x02\xe7"
  "\x04\x18\x81\x8d\x02\xe6\x04\x16\x81\x8d\x02\xe5\x04\x14\x81\x8d"
  "\x02\xe4\x04\x12\x81\x8f\x02\xe3\x04\x10\x81\x8d\x02\xe2\x04\x0e"
  "\x81\x8b\x02\xe1\x04\x0c\x81\x89\x02\xe0\x04\x0a\x81\x8b\x02\xdf"
  "\x04\x08\x81\x87\x02\xde\x04\x06\x81\x85\x02\xdd\x04\x04\x84\x06"
  "\x1b\x31\x63\x02\x6f\xba\x01\x02\x2f\x11\x0b\x03\x04\x04\xbb\x01"
  "\x04\xf7\x04\x1e\x81\x89\x02\xf6\x04\x1c\x81\x89\x02\xf5\x04\x1a"
  "\x81\x89\x02\xf4\x04\x18\x81\x85\x02\xf3\x04\x16\x81\x8b\x02\xf2"
  "\x04\x14\x81\x89\x02\xf1\x04\x12\x81\x89\x02\xf0\x04\x10\x81\x89"
  "\x02\xef\x04\x0e\x81\x87\x02\xee\x04\x0c\x81\x87\x02\xed\x04\x0a"
  "\x81\x87\x02\xec\x04\x08\x81\x89\x02\xeb\x04\x06\x81\x85\x02\xea"
  "\x04\x04\x84\x06\x1d\x32\xba\x01\x02\x70\x02\x74\x11\x0b\x03\x02"
  "\xfe\x04\x10\x81\x85\x02\xfd\x04\x0e\x81\x85\x02\xfc\x04\x0c\x81"
  "\x85\x02\xfb\x04\x0a\x81\x83\x02\xfa\x04\x08\x81\x83\x02\xf9\x04"
  "\x06\x81\x83\x02\xf8\x04\x04\x83\x04\x0f\x1c\x02\x71\xbc\x01\xff"
  "\x04\x04\x82\x02\x03\xbc\x01\x02\x72\x80\x05\x04\x82\x02\x03\xc1"
  "\x01\x02\x73\x0b\x81\x05\x04\x83\x04\x03\xc2\x01\x02\x74\x0b\x82"
  "\x05\x04\x83\x04\x03\xc3\x01\x02\x75\x0b\x83\x05\x04\x83\x04\x03"
  "\xc4\x01\x02\x76\x0b\x84\x05\x04\x83\x04\x03\xc5\x01\x02\x77\x0b"
  "\x85\x05\x04\x83\x04\x03\xc6\x01\x02\x78\x11\x02\x86\x05\x04\x84"
  "\x06\x03\xc7\x01\x02\x79\x11\x02\x87\x05\x04\x84\x06\x03\xc8\x01"
  "\x02\x7a\x11\x02\x88\x05\x04\x84\x06\x03\xc9\x01\x02\x7b\x11\x02"
  "\x89\x05\x04\x84\x06\x03\x11\x02\x7c\x0b\x15\x07\x2e\x74\x61\x67"
  "\x2e\x37\x15\x02\x8d\x05\x0a\x81\x85\x02\x8c\x05\x08\x81\x83\x02"
  "\x8b\x05\x06\x81\x83\x02\x8a\x05\x04\x83\x04\x09\x12\x0b\x02\x7d"
  "\x81\x80\x80\x08\x81\x80\x04\x81\x02\x1d\x97\x05\x16\x81\x87\x02"
  "\x96\x05\x14\x81\x87\x02\x95\x05\x12\x81\x85\x02\x94\x05\x10\x81"
  "\x87\x02\x93\x05\x0e\x81\x87\x02\x92\x05\x0c\x81\x85\x02\x91\x05"
  "\x0a\x81\x87\x02\x90\x05\x08\x81\x87\x02\x8f\x05\x06\x81\x85\x02"
  "\x8e\x05\x04\x84\x06\x15\x1c\xca\x01\x02\x7e\x17\x4d\x61\x6c\x66"
  "\x6f\x72\x6d\x65\x64\x20\x6c\x69\x6e\x65\x20\x6c\x65\x6e\x67\x74"
  "\x68\x3a\x18\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x22\x62\x65"
  "\x67\x69\x6e\x22\x20\x6c\x69\x6e\x65\x3a\x1b\x45\x78\x70\x65\x63"
  "\x74\x65\x64\x20\x7a\x65\x72\x6f\x2d\x6c\x65\x6e\x67\x74\x68\x20"
  "\x6c\x69\x6e\x65\x3a\x16\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20"
  "\x22\x65\x6e\x64\x22\x20\x6c\x69\x6e\x65\x3a\x24\x43\x61\x6e\x27"
  "\x74\x20\x66\x69\x6e\x61\x6c\x69\x7a\x65\x20\x75\x6e\x66\x69\x6e"
  "\x69\x73\x68\x65\x64\x20\x64\x65\x63\x6f\x64\x69\x6e\x67\x2e\x04"
  "\x65\x6e\x64\x21\x14\x5e\x62\x65\x67\x69\x6e\x20\x2b\x5b\x30\x2d"
  "\x37\x5d\x2b\x20\x2b\x2e\x2b\x24\x18\x45\x6d\x70\x74\x79\x20\x6c"
  "\x69\x6e\x65\x20\x6e\x6f\x74\x20\x61\x6c\x6c\x6f\x77\x65\x64\x2e"
  "\x23\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73\x74\x61\x74\x65\x20\x69"
  "\x6e\x20\x75\x75\x65\x6e\x63\x6f\x64\x65\x20\x64\x65\x63\x6f\x64"
  "\x65\x72\x3a\x04\x65\x6e\x64\x05\x7a\x65\x72\x6f\x07\x6e\x6f\x72"
  "\x6d\x61\x6c\x2f\x02\x01\x0b\x74\x06\x62\x65\x67\x69\x6e\x81\x02"
  "\x47\x03\x11\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x65\x2d\x62\x75\x66"
  "\x66\x65\x72\x74\x04\x12\x6d\x61\x6b\x65\x2d\x75\x75\x64\x65\x63"
  "\x6f\x64\x65\x2d\x63\x74\x78\xcb\x01\x06\x1f\x04\x44\x03\x44\x04"
  "\x48\x03\x0e\x75\x75\x64\x65\x63\x6f\x64\x65\x2d\x63\x68\x61\x72"
  "\x48\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x06\x13\x61\x64\x64"
  "\x2d\x74\x6f\x2d\x6c\x69\x6e\x65\x2d\x62\x75\x66\x66\x65\x72\x1f"
  "\x05\x11\x75\x75\x64\x65\x63\x6f\x64\x65\x2d\x71\x75\x61\x6e\x74"
  "\x75\x6d\xcc\x01\x03\x15\x6c\x69\x6e\x65\x2d\x62\x75\x66\x66\x65"
  "\x72\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\xcd\x01\x06\x04\x30\x0e"
  "\xb6\x05\x40\x81\x87\x02\xb5\x05\x3e\x81\x87\x02\xb4\x05\x3c\x81"
  "\x8d\x02\xb3\x05\x3a\x81\x8b\x02\xb2\x05\x38\x81\x87\x02\xb1\x05"
  "\x36\x81\x85\x02\xb0\x05\x34\x81\x87\x02\xaf\x05\x32\x81\x85\x02"
  "\xae\x05\x30\x81\x85\x02\xad\x05\x2e\x81\x87\x02\xac\x05\x2c\x81"
  "\x85\x02\xab\x05\x2a\x81\x85\x02\xaa\x05\x28\x81\x87\x02\xa9\x05"
  "\x26\x81\x85\x02\xa8\x05\x24\x81\x85\x02\xa7\x05\x22\x81\x8b\x02"
  "\xa6\x05\x20\x81\x89\x02\xa5\x05\x1e\x81\x83\x02\xa4\x05\x1c\x81"
  "\x85\x02\xa3\x05\x1a\x81\x89\x02\xa2\x05\x18\x81\x85\x02\xa1\x05"
  "\x16\x81\x87\x02\xa0\x05\x14\x81\x85\x02\x9f\x05\x12\x81\x85\x02"
  "\x9e\x05\x10\x81\x85\x02\x9d\x05\x0e\x81\x85\x02\x9c\x05\x0c\x81"
  "\x85\x02\x9b\x05\x0a\x81\x89\x02\x9a\x05\x08\x81\x87\x02\x99\x05"
  "\x06\x81\x85\x02\x98\x05\x04\x84\x06\x3f\x74\x30\x02\x7f\x03\x14"
  "\x75\x75\x64\x65\x63\x6f\x64\x65\x2d\x63\x74\x78\x2d\x75\x70\x64"
  "\x61\x74\x65\x02\xb8\x05\x06\x81\x89\x02\xb7\x05\x04\x86\x0a\x05"
  "\x0b\xce\x01\x02\x80\x01\x03\x16\x75\x75\x64\x65\x63\x6f\x64\x65"
  "\x2d\x63\x74\x78\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\xcf\x01\x02"
  "\xba\x05\x06\x81\x83\x02\xb9\x05\x04\x83\x04\x05\x0b\xd0\x01\x02"
  "\x81\x01\x13\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x21\xd1\x01\x47\xbd\x05\x08\x81\x85\x02\xbc\x05"
  "\x06\x81\x83\x02\xbb\x05\x04\x83\x04\x07\x0d\xd2\x01\x02\x82\x01"
  "\x47\x09\x73\x65\x74\x2d\x63\x64\x72\x21\xd3\x01\xd1\x01\x2f\x04"
  "\x63\x64\x72\x2f\x03\x16\x73\x74\x72\x69\x6e\x67\x2d\x6d\x61\x78"
  "\x69\x6d\x75\x6d\x2d\x6c\x65\x6e\x67\x74\x68\x07\x49\x03\xc7\x05"
  "\x16\x81\x87\x02\xc6\x05\x14\x81\x87\x02\xc5\x05\x12\x81\x8d\x02"
  "\xc4\x05\x10\x81\x8d\x02\xc3\x05\x0e\x81\x91\x02\xc2\x05\x0c\x81"
  "\x87\x02\xc1\x05\x0a\x81\x87\x02\xc0\x05\x08\x81\x8b\x02\xbf\x05"
  "\x06\x81\x89\x02\xbe\x05\x04\x86\x0a\x15\x23\x49\x02\x83\x01\xd3"
  "\x01\xd1\x01\x2f\x47\x04\x63\x61\x72\xcd\x05\x0e\x81\x87\x02\xcc"
  "\x05\x0c\x81\x87\x02\xcb\x05\x0a\x81\x85\x02\xca\x05\x08\x81\x83"
  "\x02\xc9\x05\x06\x81\x85\x02\xc8\x05\x04\x83\x04\x0d\x16\xd3\x01"
  "\x02\x84\x01\x02\x7e\x21\x03\x48\x02\xd8\x05\x18\x81\x8f\x02\xd7"
  "\x05\x16\x81\x8f\x02\xd6\x05\x14\x81\x8d\x02\xd5\x05\x12\x81\x8f"
  "\x02\xd4\x05\x10\x81\x8b\x02\xd3\x05\x0e\x81\x8d\x02\xd2\x05\x0c"
  "\x81\x89\x02\xd1\x05\x0a\x81\x8b\x02\xd0\x05\x08\x81\x87\x02\xcf"
  "\x05\x06\x81\x89\x02\xce\x05\x04\x85\x08\x17\x23\xd1\x01\x02\x85"
  "\x01\x17\x49\x6c\x6c\x65\x67\x61\x6c\x20\x75\x75\x65\x6e\x63\x6f"
  "\x64\x65\x20\x63\x68\x61\x72\x3a\x2b\x04\x44\x02\xdb\x05\x08\x81"
  "\x83\x02\xda\x05\x06\x83\x04\xd9\x05\x04\x81\x85\x02\x07\x0f\x44"
  "\x02\x86\x01\x04\x15\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6f\x64\x65"
  "\x2d\x75\x75\x65\x2d\x70\x6f\x72\x74\x2f\x03\x3d\x03\xdf\x05\x0a"
  "\x81\x8b\x02\xde\x05\x08\x81\x89\x02\xdd\x05\x06\x81\x87\x02\xdc"
  "\x05\x04\x85\x08\x09\x11\x3d\x02\x87\x01\x15\x64\x65\x63\x6f\x64"
  "\x65\x2d\x75\x75\x65\x2d\x70\x6f\x72\x74\x2d\x74\x79\x70\x65\x2b"
  "\x02\x04\x16\x64\x65\x63\x6f\x64\x65\x2d\x75\x75\x65\x3a\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x21\x04\x41\x03\xe2\x05\x08\x81"
  "\x85\x02\xe1\x05\x06\x81\x85\x02\xe0\x05\x04\x84\x06\x07\x11\x41"
  "\x87\x01\x2b\xcf\x01\x2f\x21\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x64\x65\x63\x6f\x64\x65\x2d\x75\x75\x65\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x48\xcc\x01\xcd\x01\x1f\x74\x41\x04"
  "\x3d\x04\x44\x06\xd1\x01\x04\xd3\x01\x04\x49\x04\xd2\x01\x04\x09"
  "\x66\x69\x6e\x61\x6c\x69\x7a\x65\xd3\x01\x0e\x75\x75\x64\x65\x63"
  "\x6f\x64\x65\x2d\x63\x74\x78\x3f\x07\x75\x70\x64\x61\x74\x65\xd2"
  "\x01\xcb\x01\x0f\x3c\x75\x75\x64\x65\x63\x6f\x64\x65\x2d\x63\x74"
  "\x78\x3e\xd1\x01\xd2\x01\xd3\x01\x15\x14\x64\x65\x63\x6f\x64\x65"
  "\x2d\x75\x75\x65\x3a\x66\x69\x6e\x61\x6c\x69\x7a\x65\xd3\x01\x12"
  "\x64\x65\x63\x6f\x64\x65\x2d\x75\x75\x65\x3a\x75\x70\x64\x61\x74"
  "\x65\xd2\x01\x21\xbb\x01\x10\x62\x69\x6e\x68\x65\x78\x34\x30\x2d"
  "\x64\x65\x63\x6f\x6e\x3f\xd0\x01\x04\xce\x01\x04\x30\x04\xca\x01"
  "\x04\x0b\x04\xb8\x01\x20\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78"
  "\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x64\x61\x74\x61\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x21\x1a\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78"
  "\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x69\x6e\x64\x65\x78\x21\x1b"
  "\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63"
  "\x6f\x6e\x2f\x68\x65\x61\x64\x65\x72\x21\x1a\x73\x65\x74\x2d\x62"
  "\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x73\x74"
  "\x61\x74\x65\x21\x1b\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65"
  "\x63\x6f\x6e\x2f\x64\x61\x74\x61\x2d\x6c\x65\x6e\x67\x74\x68\x15"
  "\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x69"
  "\x6e\x64\x65\x78\x16\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65"
  "\x63\x6f\x6e\x2f\x68\x65\x61\x64\x65\x72\x15\x62\x69\x6e\x68\x65"
  "\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x73\x74\x61\x74\x65\x14"
  "\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x6e\x2f\x70"
  "\x6f\x72\x74\x0a\x11\x04\xc9\x01\x04\xc8\x01\x04\xc7\x01\x04\xc6"
  "\x01\x04\xc5\x01\x04\xc4\x01\x04\xc3\x01\x04\xc2\x01\x04\x0a\x13"
  "\x72\x74\x64\x3a\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63"
  "\x6f\x6e\xd0\x01\x0f\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65"
  "\x63\x6f\x6e\x05\x70\x6f\x72\x74\xcf\x01\x06\x73\x74\x61\x74\x65"
  "\xce\x01\x07\x68\x65\x61\x64\x65\x72\x06\x69\x6e\x64\x65\x78\xcd"
  "\x01\x0c\x64\x61\x74\x61\x2d\x6c\x65\x6e\x67\x74\x68\xbc\x01\x04"
  "\xc1\x01\x04\xb7\x01\xbe\x01\xbd\x01\x04\xba\x01\x04\x63\x04\xc0"
  "\x01\x04\xbf\x01\x04\xb5\x01\x94\x01\x14\x62\x69\x6e\x68\x65\x78"
  "\x34\x30\x2d\x72\x6c\x64\x2d\x6d\x61\x72\x6b\x65\x72\x14\x62\x69"
  "\x6e\x68\x65\x78\x34\x30\x2d\x72\x6c\x64\x2d\x73\x74\x61\x74\x65"
  "\x3f\xb9\x01\x04\x01\x91\x01\xb6\x01\x04\xac\x01\x25\x73\x65\x74"
  "\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x72\x6c\x64\x2d\x73\x74"
  "\x61\x74\x65\x2f\x6d\x61\x72\x6b\x65\x72\x2d\x73\x65\x65\x6e\x3f"
  "\x21\x1d\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x72"
  "\x6c\x64\x2d\x73\x74\x61\x74\x65\x2f\x63\x68\x61\x72\x21\x20\x62"
  "\x69\x6e\x68\x65\x78\x34\x30\x2d\x72\x6c\x64\x2d\x73\x74\x61\x74"
  "\x65\x2f\x6d\x61\x72\x6b\x65\x72\x2d\x73\x65\x65\x6e\x3f\x18\x62"
  "\x69\x6e\x68\x65\x78\x34\x30\x2d\x72\x6c\x64\x2d\x73\x74\x61\x74"
  "\x65\x2f\x63\x68\x61\x72\x18\x62\x69\x6e\x68\x65\x78\x34\x30\x2d"
  "\x72\x6c\x64\x2d\x73\x74\x61\x74\x65\x2f\x70\x6f\x72\x74\xb4\x01"
  "\x04\xb3\x01\x04\xb2\x01\x04\xb1\x01\x04\xb0\x01\x04\x17\x72\x74"
  "\x64\x3a\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x72\x6c\x64\x2d\x73"
  "\x74\x61\x74\x65\xcc\x01\xab\x01\x13\x62\x69\x6e\x68\x65\x78\x34"
  "\x30\x2d\x72\x6c\x64\x2d\x73\x74\x61\x74\x65\xcf\x01\x05\x63\x68"
  "\x61\x72\x0d\x6d\x61\x72\x6b\x65\x72\x2d\x73\x65\x65\x6e\x3f\xaf"
  "\x01\x04\xae\x01\x04\x1d\x96\x01\xad\x01\x04\x98\x01\x84\x01\x9f"
  "\x01\x15\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x69\x67\x69\x74"
  "\x2d\x74\x61\x62\x6c\x65\xcb\x01\xa8\x01\xa6\x01\xa4\x01\x9b\x01"
  "\x99\x01\x9a\x01\x41\x21\x22\x23\x24\x25\x26\x27\x28\x29\x2a\x2b"
  "\x2c\x2d\x30\x31\x32\x33\x34\x35\x36\x38\x39\x40\x41\x42\x43\x44"
  "\x45\x46\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x50\x51\x52\x53\x54\x55"
  "\x56\x58\x59\x5a\x5b\x60\x61\x62\x63\x64\x65\x66\x68\x69\x6a\x6b"
  "\x6c\x6d\x70\x71\x72\xaa\x01\x06\xa9\x01\x04\xa7\x01\x04\xa5\x01"
  "\x04\x3e\x5b\x0d\x0a\x09\x20\x5d\x2a\x28\x54\x68\x69\x73\x20\x66"
  "\x69\x6c\x65\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x63\x6f\x6e\x76"
  "\x65\x72\x74\x65\x64\x20\x77\x69\x74\x68\x20\x42\x69\x6e\x48\x65"
  "\x78\x2e\x2a\x5b\x0d\x0a\x5d\x5b\x0d\x0a\x09\x20\x5d\x2a\x3a\xa3"
  "\x01\x04\x92\x01\x9d\x01\x26\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68"
  "\x2d\x64\x65\x63\x6f\x64\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x19\x64\x65\x63"
  "\x6f\x64\x65\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x3a\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\xca\x01\xa2\x01\xa0\x01\x1b\x62\x69\x6e\x68"
  "\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x3f\xa1\x01\x04\x9e\x01\x04\x82\x01\x04\x9c"
  "\x01\x04\x97\x01\x04\x93\x01\x04\x95\x01\x2b\x73\x65\x74\x2d\x62"
  "\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69\x6e\x70\x75\x74\x2d\x69"
  "\x6e\x64\x65\x78\x21\x2b\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78"
  "\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x2f\x6c\x69\x6e\x65\x2d\x62\x75\x66\x66\x65\x72\x21"
  "\x25\x73\x65\x74\x2d\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65"
  "\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x73"
  "\x74\x61\x74\x65\x21\x28\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64"
  "\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f"
  "\x6f\x75\x74\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x26\x62\x69"
  "\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69\x6e\x70\x75\x74\x2d\x69\x6e"
  "\x64\x65\x78\x27\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69\x6e"
  "\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x26\x62\x69\x6e\x68\x65"
  "\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x6c\x69\x6e\x65\x2d\x62\x75\x66\x66\x65\x72"
  "\x20\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x73\x74\x61\x74\x65"
  "\x1f\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x6f\x72\x74\x0a"
  "\x91\x01\x04\x90\x01\x04\x8f\x01\x04\x8e\x01\x04\x8d\x01\x04\x8c"
  "\x01\x04\x8b\x01\x04\x8a\x01\x04\x89\x01\x04\x0a\x1e\x72\x74\x64"
  "\x3a\x62\x69\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\xc9\x01\x72\x1a\x62\x69"
  "\x6e\x68\x65\x78\x34\x30\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\xcf\x01\xce\x01\x0c\x6c\x69\x6e\x65"
  "\x2d\x62\x75\x66\x66\x65\x72\x0d\x69\x6e\x70\x75\x74\x2d\x62\x75"
  "\x66\x66\x65\x72\xce\x01\x0c\x69\x6e\x70\x75\x74\x2d\x69\x6e\x64"
  "\x65\x78\xc8\x01\x0e\x6f\x75\x74\x70\x75\x74\x2d\x62\x75\x66\x66"
  "\x65\x72\xc7\x01\x83\x01\x04\x85\x01\x04\x86\x01\x04\x87\x01\x04"
  "\x88\x01\x04\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34"
  "\xc6\x01\x08\x6d\x65\x73\x73\x61\x67\x65\x0a\x69\x72\x72\x69\x74"
  "\x61\x6e\x74\x73\x0e\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65"
  "\x36\x34\x5f\x75\x30\x40\x2c\x3f\x35\x7b\x1b\x5b\x41\x7a\x5f\x75"
  "\x7f\x7d\x76\x81\x01\x06\x80\x01\x04\x2d\x04\x70\x78\x24\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x64\x65\x63\x6f\x64\x65\x2d\x62"
  "\x61\x73\x65\x36\x34\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x15\x64\x65\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x3a"
  "\x75\x70\x64\x61\x74\x65\xc5\x01\x17\x64\x65\x63\x6f\x64\x65\x2d"
  "\x62\x61\x73\x65\x36\x34\x3a\x66\x69\x6e\x61\x6c\x69\x7a\x65\xc4"
  "\x01\x19\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e"
  "\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x7c\x04\x79\x04\x77\x04"
  "\x73\x06\x71\x04\x7b\x2d\x73\x65\x74\x2d\x62\x61\x73\x65\x36\x34"
  "\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x72\x65\x74\x75\x72\x6e"
  "\x3f\x21\x29\x73\x65\x74\x2d\x62\x61\x73\x65\x36\x34\x2d\x64\x65"
  "\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69"
  "\x6e\x70\x75\x74\x2d\x73\x74\x61\x74\x65\x21\x29\x73\x65\x74\x2d"
  "\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69\x6e\x70\x75\x74\x2d\x69\x6e"
  "\x64\x65\x78\x21\x28\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f"
  "\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x65\x6e"
  "\x64\x69\x6e\x67\x2d\x72\x65\x74\x75\x72\x6e\x3f\x26\x62\x61\x73"
  "\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x62\x75\x66\x66"
  "\x65\x72\x24\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69\x6e\x70\x75\x74"
  "\x2d\x73\x74\x61\x74\x65\x24\x62\x61\x73\x65\x36\x34\x2d\x64\x65"
  "\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x69"
  "\x6e\x70\x75\x74\x2d\x69\x6e\x64\x65\x78\x25\x62\x61\x73\x65\x36"
  "\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\x2f\x69\x6e\x70\x75\x74\x2d\x62\x75\x66\x66\x65\x72\x1e"
  "\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x74\x65\x78\x74\x3f\x1d\x62\x61"
  "\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x2f\x70\x6f\x72\x74\x0b\x6f\x04\x6e\x04\x6d"
  "\x04\x6c\x04\x6b\x04\x6a\x04\x69\x04\x68\x04\x67\x04\x66\x04\x0b"
  "\x1c\x72\x74\x64\x3a\x62\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f"
  "\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\xc3\x01\x18\x62"
  "\x61\x73\x65\x36\x34\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\xcf\x01\x06\x74\x65\x78\x74\x3f\xc2\x01"
  "\xce\x01\xc8\x01\x0c\x69\x6e\x70\x75\x74\x2d\x73\x74\x61\x74\x65"
  "\xc7\x01\x10\x70\x65\x6e\x64\x69\x6e\x67\x2d\x72\x65\x74\x75\x72"
  "\x6e\x3f\x61\x04\x62\x04\x64\x04\x65\x04\x58\x5a\x5c\x15\x65\x6e"
  "\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x3a\x75\x70\x64\x61"
  "\x74\x65\x17\x65\x6e\x63\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34"
  "\x3a\x66\x69\x6e\x61\x6c\x69\x7a\x65\x19\x62\x61\x73\x65\x36\x34"
  "\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x3f\x60\x04\x5e\x04\x5d\x04\x5b\x04\x59\x04\x19\x65\x6e\x63"
  "\x6f\x64\x65\x2d\x62\x61\x73\x65\x36\x34\x3a\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x23\x73\x65\x74\x2d\x62\x61\x73\x65\x36\x34"
  "\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x2f\x69\x6e\x64\x65\x78\x21\x1e\x62\x61\x73\x65\x36\x34\x2d"
  "\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x69\x6e\x64\x65\x78\x1f\x62\x61\x73\x65\x36\x34\x2d\x65\x6e"
  "\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62"
  "\x75\x66\x66\x65\x72\x1e\x62\x61\x73\x65\x36\x34\x2d\x65\x6e\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x74\x65"
  "\x78\x74\x3f\x1d\x62\x61\x73\x65\x36\x34\x2d\x65\x6e\x63\x6f\x64"
  "\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x6f\x72\x74"
  "\x57\x04\x56\x04\x55\x04\x54\x04\x53\x04\x1c\x72\x74\x64\x3a\x62"
  "\x61\x73\x65\x36\x34\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\xce\x01\x18\x62\x61\x73\x65\x36\x34\x2d"
  "\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\xcf\x01\xc2\x01\x07\x62\x75\x66\x66\x65\x72\xcd\x01\x51\x04\x52"
  "\x04\x2c\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x1c\x42\x47\x02\x7e\x62\x67\x0b\x31\x3a\x81"
  "\x02\x01\x80\x02\x22\x80\x01\x47\x11\x01\x3e\x22\x2c\x1c\x10\x68"
  "\x65\x78\x2d\x64\x69\x67\x69\x74\x2d\x3e\x63\x68\x61\x72\x10\x63"
  "\x68\x61\x72\x2d\x3e\x68\x65\x78\x2d\x64\x69\x67\x69\x74\x10\x63"
  "\x68\x61\x72\x2d\x68\x65\x78\x2d\x64\x69\x67\x69\x74\x3f\x43\x3a"
  "\x23\x50\x04\x4f\x04\x4e\x04\x4d\x06\x4c\x04\x4b\x04\x01\x21\x01"
  "\x0a\x3f\x45\x18\x4a\x04\x46\x04\x37\x3c\x2e\x63\x61\x6c\x6c\x2d"
  "\x77\x69\x74\x68\x2d\x64\x65\x63\x6f\x64\x65\x2d\x71\x75\x6f\x74"
  "\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x1f\x64\x65\x63\x6f\x64\x65\x2d"
  "\x71\x75\x6f\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65"
  "\x3a\x75\x70\x64\x61\x74\x65\xcd\x01\x21\x64\x65\x63\x6f\x64\x65"
  "\x2d\x71\x75\x6f\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c"
  "\x65\x3a\x66\x69\x6e\x61\x6c\x69\x7a\x65\xc8\x01\x15\x71\x70\x2d"
  "\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x3f\x42\x04\x3e\x04\x3b\x04\x39\x04\x38\x04\x40\x21\x73\x65\x74"
  "\x2d\x71\x70\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x21\x1c\x71\x70"
  "\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x1a\x71\x70\x2d\x64\x65\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x74\x65"
  "\x78\x74\x3f\x19\x71\x70\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x6f\x72\x74\x36\x04\x35\x04"
  "\x34\x04\x33\x04\x18\x72\x74\x64\x3a\x71\x70\x2d\x64\x65\x63\x6f"
  "\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\xc7\x01\x14\x71"
  "\x70\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65"
  "\x78\x74\xcf\x01\xc2\x01\x08\x70\x65\x6e\x64\x69\x6e\x67\x16\x29"
  "\x1a\x24\x26\x25\x19\x1e\x1f\x65\x6e\x63\x6f\x64\x65\x2d\x71\x75"
  "\x6f\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x3a\x75"
  "\x70\x64\x61\x74\x65\x21\x65\x6e\x63\x6f\x64\x65\x2d\x71\x75\x6f"
  "\x74\x65\x64\x2d\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x3a\x66\x69"
  "\x6e\x61\x6c\x69\x7a\x65\x15\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69"
  "\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x0b\x32\x04\x31\x06"
  "\x2e\x04\x04\x2a\x04\x28\x04\x27\x04\x20\x04\x1b\x04\x17\x04\x0b"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x23\x65\x6e\x63\x6f\x64\x65\x2d\x71\x75\x6f\x74\x65\x64\x2d"
  "\x70\x72\x69\x6e\x74\x61\x62\x6c\x65\x3a\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x28\x73\x65\x74\x2d\x71\x70\x2d\x65\x6e\x63\x6f"
  "\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x70\x65\x6e"
  "\x64\x69\x6e\x67\x2d\x6f\x75\x74\x70\x75\x74\x21\x20\x73\x65\x74"
  "\x2d\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x63\x6f\x6c\x75\x6d\x6e\x21\x26\x73\x65\x74"
  "\x2d\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6c\x77\x73"
  "\x70\x21\x23\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6f"
  "\x75\x74\x70\x75\x74\x1b\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e"
  "\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x63\x6f\x6c\x75\x6d\x6e"
  "\x21\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x2f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6c\x77\x73"
  "\x70\x1a\x71\x70\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x2f\x74\x65\x78\x74\x3f\x19\x71\x70\x2d\x65"
  "\x6e\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f"
  "\x70\x6f\x72\x74\x14\x04\x13\x04\x12\x04\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x0c\x04\x18\x72\x74\x64\x3a\x71\x70\x2d\x65\x6e\x63\x6f"
  "\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\xc1\x01\x18\x6d"
  "\x61\x6b\x65\x2d\x64\x65\x63\x6f\x64\x69\x6e\x67\x2d\x70\x6f\x72"
  "\x74\x2d\x74\x79\x70\x65\xc0\x01\x09\x04\x14\x71\x70\x2d\x65\x6e"
  "\x63\x6f\x64\x69\x6e\x67\x2d\x63\x6f\x6e\x74\x65\x78\x74\xcf\x01"
  "\xc2\x01\x0d\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6c\x77\x73\x70\x07"
  "\x63\x6f\x6c\x75\x6d\x6e\x0f\x70\x65\x6e\x64\x69\x6e\x67\x2d\x6f"
  "\x75\x74\x70\x75\x74\x0a\x04\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\xcf\x01\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\xc1\x01\xc7\x01\xc8"
  "\x01\xcd\x01\xce\x01\xc3\x01\xc4\x01\xc5\x01\x1c\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x65\x72\x72\x6f\x72\x17\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\xc6\x01"
  "\xc9\x01\xca\x01\xa2\x01\xcb\x01\x98\x01\xcc\x01\xd0\x01\xd1\x01"
  "\xd3\x01\xd2\x01\x16\x04\xc0\x01\x04\x09\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\xd3\x01\x03\xd3\x01\x03\x10\x63\x68\x61\x72\x2d\x73\x65"
  "\x74\x2d\x69\x6e\x76\x65\x72\x74\x04\x0f\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x04\x16\x61\x73\x63\x69\x69\x2d"
  "\x72\x61\x6e\x67\x65\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x04"
  "\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x14\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63"
  "\x65\x06\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72\x04\x04\xcf\x01\x04"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63"
  "\x63\x65\x73\x73\x6f\x72\x10\xb5\x01\xec\x02\x80\x80\x04\xb4\x01"
  "\xea\x02\x81\x81\x02\xb3\x01\xe8\x02\x81\x81\x02\xb2\x01\xe6\x02"
  "\x81\x87\x02\xb1\x01\xe4\x02\x81\x8b\x02\xb0\x01\xe2\x02\x81\x89"
  "\x02\xaf\x01\xe0\x02\x81\x83\x02\xae\x01\xde\x02\x81\x85\x02\xad"
  "\x01\xdc\x02\x81\x83\x02\xac\x01\xda\x02\x81\x85\x02\xab\x01\xd8"
  "\x02\x81\x89\x02\xaa\x01\xd6\x02\x81\x83\x02\xa9\x01\xd4\x02\x81"
  "\x85\x02\xa8\x01\xd2\x02\x81\x89\x02\xa7\x01\xd0\x02\x81\x83\x02"
  "\xa6\x01\xce\x02\x81\x85\x02\xa5\x01\xcc\x02\x81\x87\x02\xa4\x01"
  "\xca\x02\x81\x83\x02\xa3\x01\xc8\x02\x81\x85\x02\xa2\x01\xc6\x02"
  "\x81\x89\x02\xa1\x01\xc4\x02\x81\x83\x02\xa0\x01\xc2\x02\x81\x83"
  "\x02\x9f\x01\xc0\x02\x81\x85\x02\x9e\x01\xbe\x02\x81\x85\x02\x9d"
  "\x01\xbc\x02\x81\x83\x02\x9c\x01\xba\x02\x81\x89\x02\x9b\x01\xb8"
  "\x02\x81\x85\x02\x9a\x01\xb6\x02\x81\x87\x02\x99\x01\xb4\x02\x81"
  "\x83\x02\x98\x01\xb2\x02\x81\x85\x02\x97\x01\xb0\x02\x81\x83\x02"
  "\x96\x01\xae\x02\x81\x85\x02\x95\x01\xac\x02\x81\x87\x02\x94\x01"
  "\xaa\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x83\x02\x92\x01\xa6\x02"
  "\x81\x85\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x83"
  "\x02\x8f\x01\xa0\x02\x81\x85\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d"
  "\x01\x9c\x02\x81\x85\x02\x8c\x01\x9a\x02\x81\x87\x02\x8b\x01\x98"
  "\x02\x81\x83\x02\x8a\x01\x96\x02\x81\x85\x02\x89\x01\x94\x02\x81"
  "\x83\x02\x88\x01\x92\x02\x81\x85\x02\x87\x01\x90\x02\x81\x87\x02"
  "\x86\x01\x8e\x02\x81\x83\x02\x85\x01\x8c\x02\x81\x85\x02\x84\x01"
  "\x8a\x02\x81\x83\x02\x83\x01\x88\x02\x81\x83\x02\x82\x01\x86\x02"
  "\x81\x85\x02\x81\x01\x84\x02\x81\x87\x02\x80\x01\x82\x02\x81\x85"
  "\x02\x7f\x80\x02\x81\x85\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01"
  "\x81\x85\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x83\x02\x7a"
  "\xf6\x01\x81\x89\x02\x79\xf4\x01\x81\x85\x02\x78\xf2\x01\x81\x83"
  "\x02\x77\xf0\x01\x81\x8d\x02\x76\xee\x01\x81\x87\x02\x75\xec\x01"
  "\x81\x89\x02\x74\xea\x01\x81\x87\x02\x73\xe8\x01\x81\x83\x02\x72"
  "\xe6\x01\x81\x8b\x02\x71\xe4\x01\x81\x85\x02\x70\xe2\x01\x81\x85"
  "\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x89\x02\x6d\xdc\x01"
  "\x81\x85\x02\x6c\xda\x01\x81\x87\x02\x6b\xd8\x01\x81\x83\x02\x6a"
  "\xd6\x01\x81\x85\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x87"
  "\x02\x67\xd0\x01\x81\x85\x02\x66\xce\x01\x81\x87\x02\x65\xcc\x01"
  "\x81\x83\x02\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x83\x02\x62"
  "\xc6\x01\x81\x85\x02\x61\xc4\x01\x81\x8b\x02\x60\xc2\x01\x81\x87"
  "\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x8b\x02\x5d\xbc\x01"
  "\x81\x87\x02\x5c\xba\x01\x81\x87\x02\x5b\xb8\x01\x81\x87\x02\x5a"
  "\xb6\x01\x81\x87\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81\x87"
  "\x02\x57\xb0\x01\x81\x87\x02\x56\xae\x01\x81\x89\x02\x55\xac\x01"
  "\x81\x87\x02\x54\xaa\x01\x81\x89\x02\x53\xa8\x01\x81\x87\x02\x52"
  "\xa6\x01\x81\x85\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x83"
  "\x02\x4f\xa0\x01\x81\x8b\x02\x4e\x9e\x01\x81\x85\x02\x4d\x9c\x01"
  "\x81\x83\x02\x4c\x9a\x01\x81\x8f\x02\x4b\x98\x01\x81\x89\x02\x4a"
  "\x96\x01\x81\x89\x02\x49\x94\x01\x81\x87\x02\x48\x92\x01\x81\x83"
  "\x02\x47\x90\x01\x81\x8d\x02\x46\x8e\x01\x81\x87\x02\x45\x8c\x01"
  "\x81\x85\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x8b\x02\x42"
  "\x86\x01\x81\x87\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01\x81\x83"
  "\x02\x3f\x80\x01\x81\x85\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x85"
  "\x02\x3c\x7a\x81\x87\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02"
  "\x39\x74\x81\x87\x02\x38\x72\x81\x85\x02\x37\x70\x81\x83\x02\x36"
  "\x6e\x81\x8b\x02\x35\x6c\x81\x87\x02\x34\x6a\x81\x87\x02\x33\x68"
  "\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81\x83\x02\x30\x62\x81"
  "\x85\x02\x2f\x60\x81\x87\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x87"
  "\x02\x2c\x5a\x81\x87\x02\x2b\x58\x81\x87\x02\x2a\x56\x81\x87\x02"
  "\x29\x54\x81\x85\x02\x28\x52\x81\x89\x02\x27\x50\x81\x89\x02\x26"
  "\x4e\x81\x87\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x8f\x02\x23\x48"
  "\x81\x83\x02\x22\x46\x81\x8d\x02\x21\x44\x81\x8b\x02\x20\x42\x81"
  "\x83\x02\x1f\x40\x81\x89\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x85"
  "\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x85\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x89\x02\x17\x30\x81\x87\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x87\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\xeb\x02\xce"
  "\x04";

SCHEME_OBJECT *
mime_codec_so_data_69483be14b75686e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_mime_codec_so_data_69483be14b75686e [0]))), (sizeof (prog_mime_codec_so_data_69483be14b75686e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_211]));
}

DECLARE_COMPILED_DATA_NS ("mime-codec.so", mime_codec_so_data_69483be14b75686e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("mime-codec.so", "4083eb9e1dc60528")
