/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_scfg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_scfg_3)
DEFLABEL (make_scfg_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (current_block [OBJECT_1_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 11
#define DEBUGGING_LABEL_2_2 10
#define OBJECT_2_0 9
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto make_scfg__1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_scfg__4)
DEFLABEL (make_scfg__1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_pcfg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_pcfg_3)
DEFLABEL (make_pcfg_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
cfg3_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cfg_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_tag_3)
DEFLABEL (cfg_tag_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
cfg3_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto cfg_entry_node_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_entry_node_3)
DEFLABEL (cfg_entry_node_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto scfg_next_hooks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_next_hooks_3)
DEFLABEL (scfg_next_hooks_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto pcfg_consequent_hooks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_consequent_hooks_3)
DEFLABEL (pcfg_consequent_hooks_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto pcfg_alternative_hooks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_alternative_hooks_3)
DEFLABEL (pcfg_alternative_hooks_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto make_null_cfg_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_null_cfg_3)
DEFLABEL (make_null_cfg_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define OBJECT_10_1 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto cfg_entry_edge_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_entry_edge_5)
DEFLABEL (cfg_entry_edge_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_7;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_7;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_10_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto snode__scfg_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode__scfg_4)
DEFLABEL (snode__scfg_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto node__scfg_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node__scfg_5)
DEFLABEL (node__scfg_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd20.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd21.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 15
#define DEBUGGING_LABEL_13_2 14
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCE_13_1 12
#define FREE_REFERENCE_13_0 13
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto pnode__pcfg_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pnode__pcfg_5)
DEFLABEL (pnode__pcfg_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_14_4);
      goto node__pcfg_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node__pcfg_7)
DEFLABEL (node__pcfg_4)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd29.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd30.Obj) = (current_block [OBJECT_14_1]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd25.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_1 9
#define OBJECT_15_0 8
#define FREE_REFERENCE_15_0 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_15_4);
      goto snode__pcfg_false_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode__pcfg_false_6)
DEFLABEL (snode__pcfg_false_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd26.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd27.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_1 9
#define OBJECT_16_0 8
#define FREE_REFERENCE_16_0 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_16_4);
      goto snode__pcfg_true_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode__pcfg_true_6)
DEFLABEL (snode__pcfg_true_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd27.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd28.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define OBJECT_17_4 14
#define OBJECT_17_3 13
#define OBJECT_17_2 12
#define OBJECT_17_1 11
#define OBJECT_17_0 10
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
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
      current_block = (Rpc - LABEL_17_4);
      goto pcfg_invert_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_invert_9)
DEFLABEL (pcfg_invert_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_13;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_13;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_12)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_11;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_11;
  (Wrd37.Obj) = ((Wrd43.pObj) [2]);

DEFLABEL (label_10)
  (Wrd53.Obj) = (* (Rsp++));
  (Wrd54.Obj) = (* (Rsp++));
  (Wrd61.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd62.Obj) = (current_block [OBJECT_17_4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd57.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd57.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_17_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_7)
  (Wrd37.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_17_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define ENVIRONMENT_LABEL_18_3 16
#define DEBUGGING_LABEL_18_2 15
#define OBJECT_18_2 14
#define OBJECT_18_1 13
#define OBJECT_18_0 12
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto hook_P_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hook_P_12)
DEFLABEL (hook_P_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_21;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_20)
  (Wrd23.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd23.Obj))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_18)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_17;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_16)
  (Wrd44.Obj) = (* (Rsp++));
  if (! ((Wrd35.Obj) == (Wrd44.Obj)))
    goto label_14;
  Rvl = (current_block [OBJECT_18_2]);
  goto label_13;

DEFLABEL (label_17)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_10)
  (Wrd35.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 6
#define DEBUGGING_LABEL_19_2 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto make_null_hooks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_null_hooks_3)
DEFLABEL (make_null_hooks_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  Rvl = (current_block [OBJECT_19_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_6 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_9 15
#define LABEL_20_12 17
#define ENVIRONMENT_LABEL_20_3 25
#define DEBUGGING_LABEL_20_2 24
#define OBJECT_20_2 23
#define OBJECT_20_1 22
#define OBJECT_20_0 21
#define EXECUTE_CACHE_20_8 19
#define FREE_REFERENCES_LABEL_20_0 18
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_20_4);
      goto hooks_union_10;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_20_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hooks_union_17)
DEFLABEL (hooks_union_10)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_8;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_20_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20_0])))
    goto label_19;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  Rvl = ((Wrd29.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_28;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_8;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_26;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_25)
  Rdl = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_23)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_15)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 1);

DEFLABEL (label_14)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_12)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define TAG_21_6 1
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_8 7
#define EXECUTE_CACHE_21_7 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_21_4);
      goto hooks_connectB_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hooks_connectB_4)
DEFLABEL (hooks_connectB_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_21_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 14
#define DEBUGGING_LABEL_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_7 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_22_4);
      goto hook_connectB_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hook_connectB_7)
DEFLABEL (hook_connectB_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_23_4);
      goto scfg_simpleP_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_simpleP_7)
DEFLABEL (scfg_simpleP_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_23_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_6 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 20
#define DEBUGGING_LABEL_24_2 19
#define OBJECT_24_3 18
#define OBJECT_24_2 17
#define OBJECT_24_1 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_8 13
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_24_4);
      goto pcfg_simpleP_5;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_simpleP_11)
DEFLABEL (pcfg_simpleP_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_16;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_16;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_15)
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_24_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_24_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 15
#define DEBUGGING_LABEL_25_2 14
#define OBJECT_25_3 13
#define OBJECT_25_2 12
#define OBJECT_25_1 11
#define OBJECT_25_0 10
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
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
      goto cfg_branch_simpleP_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_branch_simpleP_11)
DEFLABEL (cfg_branch_simpleP_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_25_0]))
    goto label_13;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_19)
  if ((Wrd7.Obj) == (current_block [OBJECT_25_0]))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_18;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_17)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_16;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [0]);
  if (! ((Wrd36.Obj) == (Wrd28.Obj)))
    goto label_13;
  Rvl = (current_block [OBJECT_25_3]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 16
#define DEBUGGING_LABEL_26_2 15
#define OBJECT_26_3 14
#define OBJECT_26_2 13
#define OBJECT_26_1 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_26_4);
      goto scfg_nullP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_nullP_9)
DEFLABEL (scfg_nullP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  (Wrd44.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_10)
DEFLABEL (label_17)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_16;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_16;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_14;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_14;
  (Wrd28.Obj) = ((Wrd34.pObj) [3]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (label_14)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_26_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_7)
  (Wrd28.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_26_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define ENVIRONMENT_LABEL_27_3 19
#define DEBUGGING_LABEL_27_2 18
#define OBJECT_27_4 17
#define OBJECT_27_3 16
#define OBJECT_27_2 15
#define OBJECT_27_1 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_8 11
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_27_4);
      goto pcfg_trueP_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_trueP_10)
DEFLABEL (pcfg_trueP_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_27_2]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_14)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_13;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_13;
  (Wrd40.Obj) = ((Wrd46.pObj) [3]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_13)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_27_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_8)
  (Wrd40.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_27_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define ENVIRONMENT_LABEL_28_3 19
#define DEBUGGING_LABEL_28_2 18
#define OBJECT_28_4 17
#define OBJECT_28_3 16
#define OBJECT_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_8 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_28_4);
      goto pcfg_falseP_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_falseP_10)
DEFLABEL (pcfg_falseP_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_16)
  if ((Wrd5.Obj) == (current_block [OBJECT_28_2]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_14)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_13;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_13;
  (Wrd40.Obj) = ((Wrd46.pObj) [4]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (label_13)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_28_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_8)
  (Wrd40.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_28_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_3 14
#define OBJECT_29_2 13
#define OBJECT_29_1 12
#define OBJECT_29_0 11
#define EXECUTE_CACHE_29_6 9
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_29_4);
      goto cfg_branch_nullP_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_branch_nullP_6)
DEFLABEL (cfg_branch_nullP_2)
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
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_11;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_29_2]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_8)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd33.Lng))))
    goto label_7;
  Rvl = ((Wrd31.pObj) [8]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_29_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_8 7
#define LABEL_30_7 9
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_2 17
#define OBJECT_30_1 16
#define OBJECT_30_0 15
#define EXECUTE_CACHE_30_9 11
#define EXECUTE_CACHE_30_6 13
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto scfg_node__nodeB_3;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_node__nodeB_7)
DEFLABEL (scfg_node__nodeB_3)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_12;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_12;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd5.Obj) = (current_block [OBJECT_30_2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 10)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_10)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_9;
  Rvl = ((Wrd13.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_30_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_4 5
#define LABEL_31_7 7
#define LABEL_31_9 9
#define LABEL_31_12 11
#define LABEL_31_11 13
#define LABEL_31_15 15
#define LABEL_31_14 17
#define ENVIRONMENT_LABEL_31_3 33
#define DEBUGGING_LABEL_31_2 32
#define OBJECT_31_4 31
#define OBJECT_31_3 30
#define OBJECT_31_2 29
#define OBJECT_31_1 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_13 19
#define EXECUTE_CACHE_31_10 21
#define EXECUTE_CACHE_31_8 23
#define EXECUTE_CACHE_31_6 25
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_31_4);
      goto pcfg_node__nodeB_7;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_31_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_31_15);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_node__nodeB_12)
DEFLABEL (pcfg_node__nodeB_7)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_20;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_20;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_4]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_16)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_31_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_31_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 15
#define DEBUGGING_LABEL_32_2 14
#define OBJECT_32_2 13
#define OBJECT_32_1 12
#define OBJECT_32_0 11
#define EXECUTE_CACHE_32_7 9
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_32_4);
      goto scfg_next_connectB_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_next_connectB_7)
DEFLABEL (scfg_next_connectB_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_32_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define ENVIRONMENT_LABEL_33_3 15
#define DEBUGGING_LABEL_33_2 14
#define OBJECT_33_2 13
#define OBJECT_33_1 12
#define OBJECT_33_0 11
#define EXECUTE_CACHE_33_7 9
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_33_4);
      goto pcfg_consequent_connectB_2;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_consequent_connectB_7)
DEFLABEL (pcfg_consequent_connectB_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_33_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_33_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define ENVIRONMENT_LABEL_34_3 15
#define DEBUGGING_LABEL_34_2 14
#define OBJECT_34_2 13
#define OBJECT_34_1 12
#define OBJECT_34_0 11
#define EXECUTE_CACHE_34_7 9
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_34_4);
      goto pcfg_alternative_connectB_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pcfg_alternative_connectB_7)
DEFLABEL (pcfg_alternative_connectB_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_34_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_9 9
#define LABEL_35_10 11
#define LABEL_35_8 13
#define LABEL_35_12 15
#define LABEL_35_13 17
#define ENVIRONMENT_LABEL_35_3 28
#define DEBUGGING_LABEL_35_2 27
#define OBJECT_35_3 26
#define OBJECT_35_2 25
#define OBJECT_35_1 24
#define OBJECT_35_0 23
#define EXECUTE_CACHE_35_11 19
#define EXECUTE_CACHE_35_6 21
#define FREE_REFERENCES_LABEL_35_0 18
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
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
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto scfg_scfg__scfgB_7;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_35_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_35_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_scfg__scfgB_14)
DEFLABEL (scfg_scfg__scfgB_7)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_24;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_24;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_22;
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_17)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd44.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd45.Obj) = (current_block [OBJECT_35_3]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd40.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd40.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_35_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_35_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_35_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_35_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define EXECUTE_CACHE_36_5 5
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg3_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto scfg_appendB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scfg_appendB_3)
DEFLABEL (scfg_appendB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_10 11
#define LABEL_9 13
#define LABEL_12 15
#define LABEL_11 17
#define LABEL_14 19
#define LABEL_13 21
#define LABEL_15 23
#define LABEL_18 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define LABEL_26 43
#define LABEL_31 45
#define LABEL_27 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_36 55
#define LABEL_37 57
#define LABEL_28 59
#define LABEL_29 61
#define LABEL_41 63
#define LABEL_30 65
#define LABEL_42 67
#define LABEL_32 69
#define LABEL_46 71
#define LABEL_39 73
#define LABEL_50 75
#define LABEL_40 77
#define LABEL_51 79
#define LABEL_43 81
#define TAG_44 39
#define LABEL_45 83
#define LABEL_54 85
#define LABEL_55 87
#define LABEL_47 89
#define LABEL_48 91
#define LABEL_58 93
#define LABEL_49 95
#define LABEL_59 97
#define LABEL_53 99
#define LABEL_64 101
#define LABEL_65 103
#define LABEL_66 105
#define LABEL_67 107
#define LABEL_69 109
#define LABEL_70 111
#define LABEL_56 113
#define LABEL_74 115
#define LABEL_57 117
#define LABEL_75 119
#define LABEL_60 121
#define TAG_61 59
#define LABEL_62 123
#define LABEL_79 125
#define LABEL_80 127
#define LABEL_68 129
#define LABEL_81 131
#define LABEL_82 133
#define LABEL_83 135
#define LABEL_84 137
#define LABEL_86 139
#define LABEL_72 141
#define LABEL_88 143
#define LABEL_73 145
#define LABEL_89 147
#define LABEL_76 149
#define LABEL_93 151
#define LABEL_94 153
#define LABEL_77 155
#define LABEL_96 157
#define LABEL_97 159
#define LABEL_98 161
#define LABEL_99 163
#define LABEL_85 165
#define LABEL_87 167
#define LABEL_100 169
#define LABEL_90 171
#define TAG_91 84
#define LABEL_92 173
#define LABEL_103 175
#define LABEL_104 177
#define LABEL_105 179
#define LABEL_95 181
#define LABEL_106 183
#define LABEL_107 185
#define LABEL_108 187
#define LABEL_101 189
#define LABEL_110 191
#define LABEL_111 193
#define LABEL_112 195
#define LABEL_102 197
#define LABEL_114 199
#define LABEL_115 201
#define LABEL_117 203
#define LABEL_118 205
#define LABEL_109 207
#define LABEL_122 209
#define LABEL_123 211
#define LABEL_124 213
#define LABEL_125 215
#define LABEL_113 217
#define LABEL_126 219
#define LABEL_119 221
#define TAG_120 109
#define LABEL_127 223
#define LABEL_121 225
#define LABEL_131 227
#define LABEL_116 229
#define LABEL_128 231
#define TAG_129 114
#define LABEL_130 233
#define LABEL_132 235
#define LABEL_133 237
#define LABEL_135 239
#define LABEL_138 241
#define LABEL_136 243
#define LABEL_139 245
#define LABEL_137 247
#define LABEL_140 249
#define LABEL_141 251
#define LABEL_142 253
#define LABEL_143 255
#define LABEL_144 257
#define ENVIRONMENT_LABEL_3 328
#define DEBUGGING_LABEL_2 327
#define PURIFICATION_ROOT 326
#define OBJECT_40 325
#define OBJECT_39 324
#define OBJECT_38 323
#define OBJECT_37 322
#define OBJECT_36 321
#define OBJECT_35 320
#define OBJECT_34 319
#define OBJECT_33 318
#define OBJECT_32 317
#define OBJECT_31 316
#define OBJECT_30 315
#define OBJECT_29 314
#define OBJECT_28 313
#define OBJECT_27 312
#define OBJECT_26 311
#define OBJECT_25 310
#define OBJECT_24 309
#define OBJECT_23 308
#define OBJECT_22 307
#define OBJECT_21 306
#define OBJECT_20 305
#define OBJECT_19 304
#define OBJECT_18 303
#define OBJECT_17 302
#define OBJECT_16 301
#define OBJECT_15 300
#define OBJECT_14 299
#define OBJECT_13 298
#define OBJECT_12 297
#define OBJECT_11 296
#define OBJECT_10 295
#define OBJECT_9 294
#define OBJECT_8 293
#define OBJECT_7 292
#define OBJECT_6 291
#define OBJECT_5 290
#define OBJECT_4 289
#define OBJECT_3 288
#define OBJECT_2 287
#define OBJECT_1 286
#define OBJECT_0 285
#define EXECUTE_CACHE_134 259
#define EXECUTE_CACHE_78 261
#define EXECUTE_CACHE_71 263
#define EXECUTE_CACHE_63 265
#define EXECUTE_CACHE_52 267
#define EXECUTE_CACHE_38 269
#define EXECUTE_CACHE_19 271
#define FREE_REFERENCE_7 274
#define FREE_REFERENCE_6 275
#define FREE_REFERENCE_5 276
#define FREE_REFERENCE_4 277
#define FREE_REFERENCE_3 278
#define FREE_REFERENCE_2 279
#define FREE_REFERENCE_1 280
#define FREE_REFERENCE_0 281
#define GLOBAL_EXECUTE_CACHE_5 283
#define FREE_REFERENCES_LABEL_0 258
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cfg3_so_22b89a2dffd80cc7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd67;
  machine_word Wrd29;
  machine_word Wrd77;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd28;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd20;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7);
      goto label_129;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_130;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto label_131;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto label_132;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto label_133;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_134;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_43;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto scfg___scfgB_28;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_44;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto label_135;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_13;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto label_136;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto label_140;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto find_non_null_33;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto label_137;

    case 28:
      current_block = (Rpc - LABEL_28);
      goto continuation_45;

    case 29:
      current_block = (Rpc - LABEL_29);
      goto continuation_47;

    case 30:
      current_block = (Rpc - LABEL_41);
      goto label_138;

    case 31:
      current_block = (Rpc - LABEL_30);
      goto continuation_46;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto scfg_pcfg__cfgB_67;

    case 33:
      current_block = (Rpc - LABEL_32);
      goto continuation_16;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto label_139;

    case 35:
      current_block = (Rpc - LABEL_39);
      goto continuation_69;

    case 36:
      current_block = (Rpc - LABEL_50);
      goto label_141;

    case 37:
      current_block = (Rpc - LABEL_40);
      goto continuation_48;

    case 38:
      current_block = (Rpc - LABEL_51);
      goto continuation_49;

    case 39:
      current_block = (Rpc - LABEL_43);
      goto lambda_190;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_23;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto label_142;

    case 42:
      current_block = (Rpc - LABEL_55);
      goto label_143;

    case 43:
      current_block = (Rpc - LABEL_47);
      goto continuation_70;

    case 44:
      current_block = (Rpc - LABEL_48);
      goto continuation_72;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto label_144;

    case 46:
      current_block = (Rpc - LABEL_49);
      goto continuation_71;

    case 47:
      current_block = (Rpc - LABEL_59);
      goto pcfg_scfg__cfgB_87;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_50;

    case 49:
      current_block = (Rpc - LABEL_64);
      goto label_145;

    case 50:
      current_block = (Rpc - LABEL_65);
      goto label_146;

    case 51:
      current_block = (Rpc - LABEL_66);
      goto label_147;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto loop_41;

    case 53:
      current_block = (Rpc - LABEL_69);
      goto label_148;

    case 54:
      current_block = (Rpc - LABEL_70);
      goto label_149;

    case 55:
      current_block = (Rpc - LABEL_56);
      goto continuation_94;

    case 56:
      current_block = (Rpc - LABEL_74);
      goto label_150;

    case 57:
      current_block = (Rpc - LABEL_57);
      goto continuation_73;

    case 58:
      current_block = (Rpc - LABEL_75);
      goto continuation_74;

    case 59:
      current_block = (Rpc - LABEL_60);
      goto lambda_192;

    case 60:
      current_block = (Rpc - LABEL_62);
      goto continuation_51;

    case 61:
      current_block = (Rpc - LABEL_79);
      goto label_151;

    case 62:
      current_block = (Rpc - LABEL_80);
      goto label_152;

    case 63:
      current_block = (Rpc - LABEL_68);
      goto continuation_36;

    case 64:
      current_block = (Rpc - LABEL_81);
      goto label_155;

    case 65:
      current_block = (Rpc - LABEL_82);
      goto label_156;

    case 66:
      current_block = (Rpc - LABEL_83);
      goto label_157;

    case 67:
      current_block = (Rpc - LABEL_84);
      goto label_153;

    case 68:
      current_block = (Rpc - LABEL_86);
      goto label_154;

    case 69:
      current_block = (Rpc - LABEL_72);
      goto continuation_96;

    case 70:
      current_block = (Rpc - LABEL_88);
      goto label_158;

    case 71:
      current_block = (Rpc - LABEL_73);
      goto continuation_95;

    case 72:
      current_block = (Rpc - LABEL_89);
      goto pcfg_pcfg__cfgB_115;

    case 73:
      current_block = (Rpc - LABEL_76);
      goto continuation_75;

    case 74:
      current_block = (Rpc - LABEL_93);
      goto label_159;

    case 75:
      current_block = (Rpc - LABEL_94);
      goto label_160;

    case 76:
      current_block = (Rpc - LABEL_77);
      goto continuation_52;

    case 77:
      current_block = (Rpc - LABEL_96);
      goto label_163;

    case 78:
      current_block = (Rpc - LABEL_97);
      goto label_164;

    case 79:
      current_block = (Rpc - LABEL_98);
      goto label_161;

    case 80:
      current_block = (Rpc - LABEL_99);
      goto label_162;

    case 81:
      current_block = (Rpc - LABEL_85);
      goto continuation_40;

    case 82:
      current_block = (Rpc - LABEL_87);
      goto continuation_97;

    case 83:
      current_block = (Rpc - LABEL_100);
      goto continuation_98;

    case 84:
      current_block = (Rpc - LABEL_90);
      goto lambda_195;

    case 85:
      current_block = (Rpc - LABEL_92);
      goto continuation_76;

    case 86:
      current_block = (Rpc - LABEL_103);
      goto label_167;

    case 87:
      current_block = (Rpc - LABEL_104);
      goto label_165;

    case 88:
      current_block = (Rpc - LABEL_105);
      goto label_166;

    case 89:
      current_block = (Rpc - LABEL_95);
      goto continuation_55;

    case 90:
      current_block = (Rpc - LABEL_106);
      goto label_168;

    case 91:
      current_block = (Rpc - LABEL_107);
      goto label_169;

    case 92:
      current_block = (Rpc - LABEL_108);
      goto label_170;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_99;

    case 94:
      current_block = (Rpc - LABEL_110);
      goto label_171;

    case 95:
      current_block = (Rpc - LABEL_111);
      goto label_172;

    case 96:
      current_block = (Rpc - LABEL_112);
      goto label_173;

    case 97:
      current_block = (Rpc - LABEL_102);
      goto continuation_79;

    case 98:
      current_block = (Rpc - LABEL_114);
      goto label_174;

    case 99:
      current_block = (Rpc - LABEL_115);
      goto continuation_89;

    case 100:
      current_block = (Rpc - LABEL_117);
      goto label_180;

    case 101:
      current_block = (Rpc - LABEL_118);
      goto connectB_92;

    case 102:
      current_block = (Rpc - LABEL_109);
      goto continuation_100;

    case 103:
      current_block = (Rpc - LABEL_122);
      goto label_178;

    case 104:
      current_block = (Rpc - LABEL_123);
      goto label_175;

    case 105:
      current_block = (Rpc - LABEL_124);
      goto label_176;

    case 106:
      current_block = (Rpc - LABEL_125);
      goto label_177;

    case 107:
      current_block = (Rpc - LABEL_113);
      goto continuation_81;

    case 108:
      current_block = (Rpc - LABEL_126);
      goto label_179;

    case 109:
      current_block = (Rpc - LABEL_119);
      goto lambda_197;

    case 110:
      current_block = (Rpc - LABEL_127);
      goto label_181;

    case 111:
      current_block = (Rpc - LABEL_121);
      goto consequent_select_124;

    case 112:
      current_block = (Rpc - LABEL_131);
      goto connectB_123;

    case 113:
      current_block = (Rpc - LABEL_116);
      goto continuation_91;

    case 114:
      current_block = (Rpc - LABEL_128);
      goto lambda_198;

    case 115:
      current_block = (Rpc - LABEL_130);
      goto alternative_select_125;

    case 116:
      current_block = (Rpc - LABEL_132);
      goto continuation_117;

    case 117:
      current_block = (Rpc - LABEL_133);
      goto continuation_104;

    case 118:
      current_block = (Rpc - LABEL_135);
      goto continuation_118;

    case 119:
      current_block = (Rpc - LABEL_138);
      goto label_182;

    case 120:
      current_block = (Rpc - LABEL_136);
      goto continuation_105;

    case 121:
      current_block = (Rpc - LABEL_139);
      goto label_183;

    case 122:
      current_block = (Rpc - LABEL_137);
      goto continuation_120;

    case 123:
      current_block = (Rpc - LABEL_140);
      goto label_184;

    case 124:
      current_block = (Rpc - LABEL_141);
      goto label_185;

    case 125:
      current_block = (Rpc - LABEL_142);
      goto label_203;

    case 126:
      current_block = (Rpc - LABEL_143);
      goto label_204;

    case 127:
      current_block = (Rpc - LABEL_144);
      goto expression_128;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_128)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_143])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_204)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_203)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	0,
	2,
	0,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 36)
      goto label_202;
    blocks = (current_block [OBJECT_40]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_142])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_202)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_220;
  Wrd8 = Wrd12;

DEFLABEL (label_219)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_218;
  Wrd8 = Wrd12;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_216;
  Wrd8 = Wrd12;

DEFLABEL (label_215)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_214;
  Wrd8 = Wrd12;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_212;
  Wrd11 = Wrd15;

DEFLABEL (label_211)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_210;
  Wrd8 = Wrd12;

DEFLABEL (label_209)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_208;
  Wrd14 = Wrd18;

DEFLABEL (label_207)
  (* (--Rsp)) = (Wrd14.Obj);
  goto scfg_pcfg__cfgB_67;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_206;
  Wrd8 = Wrd12;

DEFLABEL (label_205)
  (* (--Rsp)) = (Wrd8.Obj);
  goto scfg_pcfg__cfgB_67;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_206)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd9.pObj));

DEFLABEL (label_138)
  (Wrd8.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd15.pObj));

DEFLABEL (label_135)
  (Wrd14.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_134)
  (Wrd8.Obj) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_133)
  (Wrd11.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd9.pObj));

DEFLABEL (label_132)
  (Wrd8.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd9.pObj));

DEFLABEL (label_131)
  (Wrd8.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_130)
  (Wrd8.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_129)
  (Wrd8.Obj) = Rvl;
  goto label_219;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_224;
  Wrd14 = Wrd18;

DEFLABEL (label_223)
  (* (--Rsp)) = (Wrd14.Obj);
  goto pcfg_scfg__cfgB_87;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_222;
  Wrd8 = Wrd12;

DEFLABEL (label_221)
  (* (--Rsp)) = (Wrd8.Obj);
  goto pcfg_scfg__cfgB_87;

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd9.pObj));

DEFLABEL (label_144)
  (Wrd8.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd15.pObj));

DEFLABEL (label_141)
  (Wrd14.Obj) = Rvl;
  goto label_223;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_228;
  Wrd11 = Wrd15;

DEFLABEL (label_227)
  (* (--Rsp)) = (Wrd11.Obj);
  goto pcfg_pcfg__cfgB_115;

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_226;
  Wrd10 = Wrd14;

DEFLABEL (label_225)
  (* (--Rsp)) = (Wrd10.Obj);
  goto pcfg_pcfg__cfgB_115;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_87);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_226)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd11.pObj));

DEFLABEL (label_158)
  (Wrd10.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_228)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd12.pObj));

DEFLABEL (label_150)
  (Wrd11.Obj) = Rvl;
  goto label_227;

DEFLABEL (scfg___scfgB_187)
DEFLABEL (scfg___scfgB_28)
  INTERRUPT_CHECK (26, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto find_non_null_33;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27);
  (Rsp [0]) = Rvl;
  if (! (Rvl == (current_block [OBJECT_20])))
    goto label_229;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_229)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 1))
    goto label_239;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_238)
  goto find_non_null_33;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_20]))
    goto label_236;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_235;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_234)
  goto find_non_null_33;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_233;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_232)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_231;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_230)
  goto loop_41;

DEFLABEL (label_231)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_143)
  (* (--Rsp)) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_142)
  (* (--Rsp)) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_139)
  (* (--Rsp)) = Rvl;
  goto label_234;

DEFLABEL (label_236)
  Rsp = (& (Rsp [1]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_237;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  Rvl = ((Wrd21.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_237)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_239)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_136)
  (* (--Rsp)) = Rvl;
  goto label_238;

DEFLABEL (find_non_null_188)
DEFLABEL (find_non_null_33)
  INTERRUPT_CHECK (26, LABEL_36);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20])))
    goto label_241;

DEFLABEL (label_240)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_241)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_245;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_244)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_240;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_243;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_242)
  (Rsp [0]) = (Wrd23.Obj);
  goto find_non_null_33;

DEFLABEL (label_243)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_140)
  (Wrd23.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_244;

DEFLABEL (scfg_pcfg__cfgB_189)
DEFLABEL (scfg_pcfg__cfgB_67)
  INTERRUPT_CHECK (26, LABEL_42);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_190)
  CLOSURE_HEADER (LABEL_43);

DEFLABEL (lambda_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_274;

DEFLABEL (label_273)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_53);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_266;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_62);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_261;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_77);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_250;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_249;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_249;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_248)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_247;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_247;
  (Wrd26.Obj) = ((Wrd32.pObj) [3]);

DEFLABEL (label_246)
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_247)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_32]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_162)
  (Wrd26.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_161)
  (Wrd10.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_250)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_260;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_260;
  (Wrd48.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_259)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 10))
    goto label_258;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd70.Lng))))
    goto label_258;
  (Wrd64.Obj) = ((Wrd68.pObj) [3]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_257)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_256;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_256;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_255)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_254;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_254;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_253)
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_252;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_252;
  (Wrd40.Obj) = ((Wrd46.pObj) [4]);

DEFLABEL (label_251)
  (Rsp [3]) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_252)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_33]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_170)
  (Wrd40.Obj) = Rvl;
  goto label_251;

DEFLABEL (label_254)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_32]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_169)
  (Wrd24.Obj) = Rvl;
  goto label_253;

DEFLABEL (label_256)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_30]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_168)
  (Wrd8.Obj) = Rvl;
  goto label_255;

DEFLABEL (label_258)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.Obj) = (current_block [OBJECT_32]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_164)
  (* (--Rsp)) = Rvl;
  goto label_257;

DEFLABEL (label_260)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.Obj) = (current_block [OBJECT_30]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_163)
  (* (--Rsp)) = Rvl;
  goto label_259;

DEFLABEL (label_261)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_265;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_265;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_264)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_20]);
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_263;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_263;
  (Wrd27.Obj) = ((Wrd33.pObj) [3]);

DEFLABEL (label_262)
  (Rsp [2]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_263)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_32]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_152)
  (Wrd27.Obj) = Rvl;
  goto label_262;

DEFLABEL (label_265)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_151)
  (Wrd10.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_266)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_272;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_272;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_271)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_270;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_270;
  (Wrd26.Obj) = ((Wrd32.pObj) [3]);

DEFLABEL (label_269)
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_268;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_268;
  (Wrd42.Obj) = ((Wrd48.pObj) [4]);

DEFLABEL (label_267)
  (Rsp [3]) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_268)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_33]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_147)
  (Wrd42.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_270)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_32]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_146)
  (Wrd26.Obj) = Rvl;
  goto label_269;

DEFLABEL (label_272)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_145)
  (Wrd10.Obj) = Rvl;
  goto label_271;

DEFLABEL (label_274)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_51);
  goto label_273;

DEFLABEL (pcfg_scfg__cfgB_191)
DEFLABEL (pcfg_scfg__cfgB_87)
  INTERRUPT_CHECK (26, LABEL_59);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_193)
DEFLABEL (loop_41)
  INTERRUPT_CHECK (26, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_289;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_289;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_288)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_287;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_287;
  (Wrd26.Obj) = ((Wrd30.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_286)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_20]))
    goto label_279;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_278;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_277)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_276;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_275)
  goto find_non_null_33;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_85);
  (Rsp [2]) = Rvl;
  goto loop_41;

DEFLABEL (label_276)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 1);

DEFLABEL (label_154)
  (* (--Rsp)) = Rvl;
  goto label_275;

DEFLABEL (label_278)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_153)
  (Wrd8.Obj) = Rvl;
  goto label_277;

DEFLABEL (label_279)
  (Wrd30.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_285;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_285;
  (Wrd32.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_284)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_283;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_282)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_281;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd59.Lng))))
    goto label_281;
  (Wrd53.Obj) = ((Wrd57.pObj) [2]);

DEFLABEL (label_280)
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd74.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd69.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd69.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_281)
  (Wrd62.Obj) = (current_block [OBJECT_30]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_157)
  (Wrd53.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 1);

DEFLABEL (label_156)
  (Wrd44.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  (Wrd40.Obj) = (current_block [OBJECT_32]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_155)
  (* (--Rsp)) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_32]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_149)
  (* (--Rsp)) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_30]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_148)
  (* (--Rsp)) = Rvl;
  goto label_288;

DEFLABEL (lambda_192)
  CLOSURE_HEADER (LABEL_60);

DEFLABEL (lambda_86)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_307;

DEFLABEL (label_306)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_76);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_301;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_92);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_294;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_293;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_293;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_292)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_291;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_291;
  (Wrd27.Obj) = ((Wrd33.pObj) [3]);

DEFLABEL (label_290)
  (Rsp [3]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_291)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_32]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_166)
  (Wrd27.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_293)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_165)
  (Wrd10.Obj) = Rvl;
  goto label_292;

DEFLABEL (label_294)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_300;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd55.Lng))))
    goto label_300;
  (Wrd49.Obj) = ((Wrd53.pObj) [3]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_299)
  goto connectB_92;

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_102);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_298;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_298;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_297)
  goto connectB_92;

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_113);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_296;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_296;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_295)
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_296)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_30]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_179)
  (Wrd9.Obj) = Rvl;
  goto label_295;

DEFLABEL (label_298)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_33]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_174)
  (* (--Rsp)) = Rvl;
  goto label_297;

DEFLABEL (label_300)
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.Obj) = (current_block [OBJECT_32]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_167)
  (* (--Rsp)) = Rvl;
  goto label_299;

DEFLABEL (label_301)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_305;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_305;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_304)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_20]);
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_303;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_303;
  (Wrd27.Obj) = ((Wrd33.pObj) [3]);

DEFLABEL (label_302)
  (Rsp [2]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_303)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_32]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_160)
  (Wrd27.Obj) = Rvl;
  goto label_302;

DEFLABEL (label_305)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_159)
  (Wrd10.Obj) = Rvl;
  goto label_304;

DEFLABEL (label_307)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_75);
  goto label_306;

DEFLABEL (pcfg_pcfg__cfgB_194)
DEFLABEL (pcfg_pcfg__cfgB_115)
  INTERRUPT_CHECK (26, LABEL_89);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_90])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_195)
  CLOSURE_HEADER (LABEL_90);

DEFLABEL (lambda_114)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_325;

DEFLABEL (label_324)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_101);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_317;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_109);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_314;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_313;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_313;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_312)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_311;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_311;
  (Wrd26.Obj) = ((Wrd32.pObj) [3]);

DEFLABEL (label_310)
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_309;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_309;
  (Wrd42.Obj) = ((Wrd48.pObj) [4]);

DEFLABEL (label_308)
  (Rsp [3]) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_309)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_33]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_177)
  (Wrd42.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_311)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_32]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_176)
  (Wrd26.Obj) = Rvl;
  goto label_310;

DEFLABEL (label_313)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_175)
  (Wrd10.Obj) = Rvl;
  goto label_312;

DEFLABEL (label_314)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_120);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_119])));
  Rhp += 3;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  Wrd65 = Wrd60;
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [2]);
  ((Wrd65.pObj) [2]) = (Wrd68.Obj);
  (Wrd64.Obj) = (Rsp [3]);
  ((Wrd65.pObj) [3]) = (Wrd64.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  ((Wrd65.pObj) [4]) = (Wrd62.Obj);
  (Rsp [3]) = (Wrd59.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (Rsp [3]) = (Wrd70.Obj);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_316;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd80.Lng))))
    goto label_316;
  (Wrd72.Obj) = ((Wrd78.pObj) [3]);

DEFLABEL (label_315)
  (Rsp [1]) = (Wrd72.Obj);
  (Wrd88.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd88.Obj);
  goto connectB_123;

DEFLABEL (label_316)
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.Obj) = (current_block [OBJECT_32]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_178)
  (Wrd72.Obj) = Rvl;
  goto label_315;

DEFLABEL (label_317)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_323;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_323;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_322)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_321;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_321;
  (Wrd26.Obj) = ((Wrd32.pObj) [4]);

DEFLABEL (label_320)
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_319;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_319;
  (Wrd42.Obj) = ((Wrd48.pObj) [3]);

DEFLABEL (label_318)
  (Rsp [2]) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_319)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_32]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_173)
  (Wrd42.Obj) = Rvl;
  goto label_318;

DEFLABEL (label_321)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_33]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_172)
  (Wrd26.Obj) = Rvl;
  goto label_320;

DEFLABEL (label_323)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_30]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_171)
  (Wrd10.Obj) = Rvl;
  goto label_322;

DEFLABEL (label_325)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_100);
  goto label_324;

DEFLABEL (connectB_196)
DEFLABEL (connectB_92)
  INTERRUPT_CHECK (26, LABEL_118);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20])))
    goto label_327;

DEFLABEL (label_326)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_327)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_115);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_326;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_331;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_331;
  (Wrd20.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_330)
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_329;

DEFLABEL (label_328)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_329)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_328;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_331)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_30]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_180)
  (* (--Rsp)) = Rvl;
  goto label_330;

DEFLABEL (lambda_197)
  CLOSURE_HEADER (LABEL_119);

DEFLABEL (lambda_107)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_333;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_333;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_332)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_129);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_128])));
  Rhp += 4;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd40 = Wrd31;
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  ((Wrd40.pObj) [2]) = (Wrd43.Obj);
  (Wrd39.Obj) = ((Wrd42.pObj) [4]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  ((Wrd40.pObj) [4]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd40.pObj) [5]) = (Wrd33.Obj);
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd44.Obj) = ((Wrd42.pObj) [3]);
  (Rsp [1]) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (Rsp [2]) = (Wrd47.Obj);
  goto connectB_123;

DEFLABEL (label_333)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_33]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_181)
  (* (--Rsp)) = Rvl;
  goto label_332;

DEFLABEL (consequent_select_199)
DEFLABEL (consequent_select_124)
  INTERRUPT_CHECK (26, LABEL_121);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd7.Obj);
  goto pop_return;

DEFLABEL (connectB_200)
DEFLABEL (connectB_123)
  INTERRUPT_CHECK (26, LABEL_131);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_20]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_344;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_342;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_132);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_334;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_334)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_135);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_335;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_335)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_341;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_341;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_340)
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_339;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_339;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_338)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_337;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_337;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_336)
  (Wrd37.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd37.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_337)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_33]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_185)
  (Wrd21.Obj) = Rvl;
  goto label_336;

DEFLABEL (label_339)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_32]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_184)
  (Wrd5.Obj) = Rvl;
  goto label_338;

DEFLABEL (label_341)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_30]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_182)
  (* (--Rsp)) = Rvl;
  goto label_340;

DEFLABEL (label_342)
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd5.Obj);

DEFLABEL (label_343)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_344)
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  goto label_343;

DEFLABEL (lambda_198)
  CLOSURE_HEADER (LABEL_128);

DEFLABEL (lambda_106)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_133);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_134]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_136);
  (Rsp [3]) = Rvl;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_346;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_346;
  (Wrd6.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_345)
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_346)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [3]);
  (Wrd26.Obj) = (current_block [OBJECT_30]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_183)
  (Wrd6.Obj) = Rvl;
  goto label_345;

DEFLABEL (alternative_select_201)
DEFLABEL (alternative_select_125)
  INTERRUPT_CHECK (26, LABEL_130);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20]);
  (Rsp [1]) = (Wrd6.Obj);
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cfg3_so_22b89a2dffd80cc7 [36] =
  {
    { "cfg3_so_code_1", 1, cfg3_so_code_1 },
    { "cfg3_so_code_2", 2, cfg3_so_code_2 },
    { "cfg3_so_code_3", 1, cfg3_so_code_3 },
    { "cfg3_so_code_4", 1, cfg3_so_code_4 },
    { "cfg3_so_code_5", 1, cfg3_so_code_5 },
    { "cfg3_so_code_6", 1, cfg3_so_code_6 },
    { "cfg3_so_code_7", 1, cfg3_so_code_7 },
    { "cfg3_so_code_8", 1, cfg3_so_code_8 },
    { "cfg3_so_code_9", 1, cfg3_so_code_9 },
    { "cfg3_so_code_10", 2, cfg3_so_code_10 },
    { "cfg3_so_code_11", 2, cfg3_so_code_11 },
    { "cfg3_so_code_12", 1, cfg3_so_code_12 },
    { "cfg3_so_code_13", 3, cfg3_so_code_13 },
    { "cfg3_so_code_14", 1, cfg3_so_code_14 },
    { "cfg3_so_code_15", 2, cfg3_so_code_15 },
    { "cfg3_so_code_16", 2, cfg3_so_code_16 },
    { "cfg3_so_code_17", 4, cfg3_so_code_17 },
    { "cfg3_so_code_18", 5, cfg3_so_code_18 },
    { "cfg3_so_code_19", 1, cfg3_so_code_19 },
    { "cfg3_so_code_20", 8, cfg3_so_code_20 },
    { "cfg3_so_code_21", 2, cfg3_so_code_21 },
    { "cfg3_so_code_22", 3, cfg3_so_code_22 },
    { "cfg3_so_code_23", 3, cfg3_so_code_23 },
    { "cfg3_so_code_24", 5, cfg3_so_code_24 },
    { "cfg3_so_code_25", 4, cfg3_so_code_25 },
    { "cfg3_so_code_26", 3, cfg3_so_code_26 },
    { "cfg3_so_code_27", 4, cfg3_so_code_27 },
    { "cfg3_so_code_28", 4, cfg3_so_code_28 },
    { "cfg3_so_code_29", 3, cfg3_so_code_29 },
    { "cfg3_so_code_30", 4, cfg3_so_code_30 },
    { "cfg3_so_code_31", 8, cfg3_so_code_31 },
    { "cfg3_so_code_32", 3, cfg3_so_code_32 },
    { "cfg3_so_code_33", 3, cfg3_so_code_33 },
    { "cfg3_so_code_34", 3, cfg3_so_code_34 },
    { "cfg3_so_code_35", 8, cfg3_so_code_35 },
    { "cfg3_so_code_36", 1, cfg3_so_code_36 }
  };

int
decl_cfg3_so_22b89a2dffd80cc7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cfg3_so_22b89a2dffd80cc7);
  return (0);
}

DECLARE_COMPILED_CODE ("cfg3.so", 128, decl_cfg3_so_22b89a2dffd80cc7, cfg3_so_22b89a2dffd80cc7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cfg3_so_data_22b89a2dffd80cc7 [4029] =
  "\xc9\x02\x38\xef\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x22"
  "\x29\x21\x9d\x2b\xba\x1d\xb0\x82\x88\xb1\x28\x0d\xbb\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x0d\xbd\x22\x29\x21\x9d"
  "\x2b\xbe\x1d\xb0\x84\x88\xc2\xbf\x80\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x85\x88\xb7\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\xb7"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb7\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb7\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xb7\x81\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x08\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x08\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x81\x82\xb7\x83\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd"
  "\x1d\xb0\x02\x88\x07\xc1\x1c\xc1\x1c\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb7\x81\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x82\xb7\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x08\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb7\x81\x07"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\x81\x08\xb7\x83\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x81\x08\xb7\x82\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x02\xb7\x80\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb7\x82\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x83\xb7\x82\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb7\x82\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb7"
  "\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\xb7\x83\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\xb7\x81\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\xb8\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x17\x1c\x88\x1b\x0c\x0d\x1c\x0d\x1c\xb1\x0c\x0d\xb9\x83\x82"
  "\xb7\x81\x0d\xbf\x1b\x1b\x99\x0c\x0d\x1c\xc3\x0d\x1c\xb1\xb7\x99"
  "\x1b\x1b\x08\x1b\x1b\x99\x1e\x1e\x99\xb0\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\xb3\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d"
  "\x1b\x0d\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d"
  "\x1b\x0d\x0d\x9f\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9f\xc3\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x0d"
  "\x1c\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6"
  "\x2a\xb4\x2a\xb2\x2a\x17\x28\x0d\x26\x0d\x0d\x0d\x0d\x1b\x0d\x1b"
  "\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb3"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
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
  "\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61"
  "\x73\x65\x2f\x63\x66\x67\x33\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x0a\x73\x6e\x6f\x64\x65\x2d\x63\x66\x67\x81\x01\x04\x84\x06"
  "\x03\x02\x04\x0c\x68\x6f\x6f\x6b\x73\x2d\x75\x6e\x69\x6f\x6e\x02"
  "\x83\x01\x06\x81\x87\x02\x82\x01\x04\x85\x08\x05\x0c\x02\x0a\x70"
  "\x6e\x6f\x64\x65\x2d\x63\x66\x67\x84\x01\x04\x85\x08\x03\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x85\x01\x04\x83\x04\x03"
  "\x09\x02\x86\x01\x04\x83\x04\x03\x0a\x02\x87\x01\x04\x83\x04\x03"
  "\x0b\x02\x08\x88\x01\x04\x83\x04\x03\x0c\x02\x09\x89\x01\x04\x83"
  "\x04\x03\x0d\x02\x0a\x8a\x01\x04\x82\x02\x03\x0e\x02\x0b\x05\x0d"
  "\x63\x72\x65\x61\x74\x65\x2d\x65\x64\x67\x65\x21\x0f\x02\x8c\x01"
  "\x06\x81\x87\x02\x8b\x01\x04\x83\x04\x05\x0d\x10\x02\x0c\x15\x73"
  "\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64"
  "\x67\x65\x21\x11\x02\x04\x0b\x6e\x6f\x64\x65\x2d\x3e\x73\x63\x66"
  "\x67\x12\x02\x8e\x01\x06\x81\x85\x02\x8d\x01\x04\x83\x04\x05\x0d"
  "\x13\x02\x0d\x8f\x01\x04\x84\x06\x03\x14\x02\x0e\x1b\x73\x65\x74"
  "\x2d\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e"
  "\x74\x2d\x65\x64\x67\x65\x21\x1c\x73\x65\x74\x2d\x70\x6e\x6f\x64"
  "\x65\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x2d\x65\x64"
  "\x67\x65\x21\x03\x05\x0b\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66\x67"
  "\x15\x02\x92\x01\x08\x81\x87\x02\x91\x01\x06\x81\x83\x02\x90\x01"
  "\x04\x83\x04\x07\x10\x16\x02\x0f\x93\x01\x04\x85\x08\x03\x17\x02"
  "\x10\x11\x02\x95\x01\x06\x81\x83\x02\x94\x01\x04\x83\x04\x05\x0c"
  "\x18\x02\x11\x11\x02\x97\x01\x06\x81\x83\x02\x96\x01\x04\x83\x04"
  "\x05\x0c\x11\x02\x12\x9b\x01\x0a\x81\x87\x02\x9a\x01\x08\x81\x85"
  "\x02\x99\x01\x06\x81\x83\x02\x98\x01\x04\x83\x04\x09\x11\x02\x13"
  "\x04\x63\x64\x72\x19\x04\x63\x61\x72\x1a\xa0\x01\x0c\x81\x87\x02"
  "\x9f\x01\x0a\x81\x85\x02\x9e\x01\x08\x81\x87\x02\x9d\x01\x06\x81"
  "\x85\x02\x9c\x01\x04\x84\x06\x0b\x11\x1b\x02\x14\xa1\x01\x04\x82"
  "\x02\x03\x1c\x02\x15\x19\x1a\x04\x0d\x68\x6f\x6f\x6b\x2d\x6d\x65"
  "\x6d\x62\x65\x72\x3f\x1d\x02\xa9\x01\x12\xfd\xff\x03\xa8\x01\x10"
  "\xfd\xff\x03\xa7\x01\x0e\xfd\xff\x03\xa6\x01\x0c\xfd\xff\x03\xa5"
  "\x01\x0a\xfd\xff\x03\xa4\x01\x08\xfd\xff\x03\xa3\x01\x06\xff\xff"
  "\x03\xa2\x01\x04\x84\x06\x11\x1a\x1e\x02\x16\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x04\x0e\x68\x6f\x6f\x6b\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x21\x1f\x03\xab\x01\x06\x81\x85\x02\xaa\x01\x04\x84"
  "\x06\x05\x0d\x20\x02\x17\x19\x1a\x05\x0f\x02\xae\x01\x08\x81\x87"
  "\x02\xad\x01\x06\x81\x85\x02\xac\x01\x04\x84\x06\x07\x0f\x0f\x02"
  "\x18\x04\x13\x63\x66\x67\x2d\x62\x72\x61\x6e\x63\x68\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x3f\x21\x02\xb1\x01\x08\x81\x85\x02\xb0\x01\x06"
  "\x81\x83\x02\xaf\x01\x04\x83\x04\x07\x10\x22\x02\x19\x04\x21\x02"
  "\xb6\x01\x0c\x81\x85\x02\xb5\x01\x0a\x81\x85\x02\xb4\x01\x08\x81"
  "\x87\x02\xb3\x01\x06\x81\x83\x02\xb2\x01\x04\x83\x04\x0b\x15\x23"
  "\x02\x1a\x1a\x19\xba\x01\x0a\x81\x85\x02\xb9\x01\x08\x81\x85\x02"
  "\xb8\x01\x06\x81\x85\x02\xb7\x01\x04\x84\x06\x09\x10\x24\x02\x1b"
  "\x04\x11\x63\x66\x67\x2d\x62\x72\x61\x6e\x63\x68\x2d\x6e\x75\x6c"
  "\x6c\x3f\x25\x02\xbd\x01\x08\x81\x85\x02\xbc\x01\x06\x81\x85\x02"
  "\xbb\x01\x04\x83\x04\x07\x11\x26\x02\x1c\x04\x25\x02\xc1\x01\x0a"
  "\x81\x85\x02\xc0\x01\x08\x81\x83\x02\xbf\x01\x06\x81\x83\x02\xbe"
  "\x01\x04\x83\x04\x09\x14\x27\x02\x1d\x04\x25\x02\xc5\x01\x0a\x81"
  "\x85\x02\xc4\x01\x08\x81\x83\x02\xc3\x01\x06\x81\x83\x02\xc2\x01"
  "\x04\x83\x04\x09\x14\x28\x02\x1e\x0c\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x72\x65\x66\x08\x04\x21\x02\xc8\x01\x08\x81\x85\x02\xc7\x01"
  "\x06\x81\x85\x02\xc6\x01\x04\x84\x06\x07\x11\x29\x02\x1f\x03\x0b"
  "\x73\x63\x66\x67\x2d\x6e\x75\x6c\x6c\x3f\x2a\x04\x0f\x68\x6f\x6f"
  "\x6b\x73\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x21\x2b\x03\xcc\x01\x0a"
  "\x81\x85\x02\xcb\x01\x08\x81\x89\x02\xca\x01\x06\x81\x85\x02\xc9"
  "\x01\x04\x84\x06\x09\x14\x2c\x02\x20\x2c\x50\x43\x46\x47\x2a\x4e"
  "\x4f\x44\x45\x2d\x3e\x4e\x4f\x44\x45\x21\x3a\x20\x43\x61\x6e\x27"
  "\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x20\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x03\x06\x65\x72\x72\x6f\x72\x2d\x03\x0b\x70"
  "\x63\x66\x67\x2d\x74\x72\x75\x65\x3f\x2e\x03\x0c\x70\x63\x66\x67"
  "\x2d\x66\x61\x6c\x73\x65\x3f\x2f\x04\x2b\x05\xd4\x01\x12\x81\x87"
  "\x02\xd3\x01\x10\x81\x8b\x02\xd2\x01\x0e\x81\x87\x02\xd1\x01\x0c"
  "\x81\x8b\x02\xd0\x01\x0a\x81\x87\x02\xcf\x01\x08\x81\x87\x02\xce"
  "\x01\x06\x85\x08\xcd\x01\x04\x81\x87\x02\x11\x22\x30\x02\x21\x04"
  "\x2b\x02\xd7\x01\x08\x81\x85\x02\xd6\x01\x06\x81\x85\x02\xd5\x01"
  "\x04\x84\x06\x07\x10\x31\x02\x22\x04\x2b\x02\xda\x01\x08\x81\x85"
  "\x02\xd9\x01\x06\x81\x85\x02\xd8\x01\x04\x84\x06\x07\x10\x32\x02"
  "\x23\x04\x2b\x02\xdd\x01\x08\x81\x85\x02\xdc\x01\x06\x81\x85\x02"
  "\xdb\x01\x04\x84\x06\x07\x10\x33\x02\x24\x03\x2a\x04\x2b\x03\xe5"
  "\x01\x12\x81\x87\x02\xe4\x01\x10\x81\x85\x02\xe3\x01\x0e\x81\x85"
  "\x02\xe2\x01\x0c\x81\x89\x02\xe1\x01\x0a\x81\x87\x02\xe0\x01\x08"
  "\x81\x85\x02\xdf\x01\x06\x81\x85\x02\xde\x01\x04\x84\x06\x11\x1d"
  "\x34\x02\x25\x03\x0d\x73\x63\x66\x67\x2a\x2d\x3e\x73\x63\x66\x67"
  "\x21\x02\xe6\x01\x04\xff\x03\x03\x35\x25\x36\x36\x2b\x50\x43\x46"
  "\x47\x2a\x50\x43\x46\x47\x2d\x3e\x43\x46\x47\x21\x3a\x20\x43\x61"
  "\x6e\x27\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x20\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\x11\x70\x63\x66\x67\x2a\x70\x63\x66"
  "\x67\x2d\x3e\x70\x63\x66\x67\x21\x36\x11\x70\x63\x66\x67\x2a\x70"
  "\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x37\x2b\x50\x43\x46\x47"
  "\x2a\x53\x43\x46\x47\x2d\x3e\x43\x46\x47\x21\x3a\x20\x43\x61\x6e"
  "\x27\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x20\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x11\x70\x63\x66\x67\x2a\x73\x63\x66\x67"
  "\x2d\x3e\x73\x63\x66\x67\x21\x11\x70\x63\x66\x67\x2a\x73\x63\x66"
  "\x67\x2d\x3e\x70\x63\x66\x67\x21\x37\x36\x2b\x53\x43\x46\x47\x2a"
  "\x50\x43\x46\x47\x2d\x3e\x43\x46\x47\x21\x3a\x20\x43\x61\x6e\x27"
  "\x74\x20\x68\x61\x76\x65\x20\x6e\x75\x6c\x6c\x20\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x11\x73\x63\x66\x67\x2a\x70\x63\x66\x67\x2d"
  "\x3e\x73\x63\x66\x67\x21\x37\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x11\x73\x63\x66\x67\x2a"
  "\x70\x63\x66\x67\x2d\x3e\x70\x63\x66\x67\x21\x36\x1a\x19\x37\x36"
  "\x0d\x73\x63\x66\x67\x2d\x61\x70\x70\x65\x6e\x64\x21\x11\x73\x63"
  "\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x1a\x70"
  "\x63\x66\x67\x2d\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x2d"
  "\x63\x6f\x6e\x6e\x65\x63\x74\x21\x19\x70\x63\x66\x67\x2d\x63\x6f"
  "\x6e\x73\x65\x71\x75\x65\x6e\x74\x2d\x63\x6f\x6e\x6e\x65\x63\x74"
  "\x21\x13\x73\x63\x66\x67\x2d\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x21\x11\x70\x63\x66\x67\x2a\x6e\x6f\x64\x65\x2d\x3e"
  "\x6e\x6f\x64\x65\x21\x11\x73\x63\x66\x67\x2a\x6e\x6f\x64\x65\x2d"
  "\x3e\x6e\x6f\x64\x65\x21\x25\x2f\x2e\x2a\x21\x0d\x70\x63\x66\x67"
  "\x2d\x73\x69\x6d\x70\x6c\x65\x3f\x0d\x73\x63\x66\x67\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x3f\x1f\x2b\x12\x35\x04\x34\x04\x33\x04\x32\x04"
  "\x31\x04\x30\x06\x2c\x04\x29\x04\x28\x04\x27\x04\x26\x04\x24\x04"
  "\x23\x04\x22\x04\x0f\x04\x20\x04\x1e\x04\x12\x0c\x68\x6f\x6f\x6b"
  "\x73\x2d\x6e\x75\x6c\x6c\x3f\x1d\x10\x6d\x61\x6b\x65\x2d\x6e\x75"
  "\x6c\x6c\x2d\x68\x6f\x6f\x6b\x73\x1c\x04\x07\x68\x6f\x6f\x6b\x3d"
  "\x3f\x37\x1b\x04\x0d\x68\x6f\x6f\x6b\x2d\x63\x6f\x6e\x6e\x65\x63"
  "\x74\x0a\x68\x6f\x6f\x6b\x2d\x6e\x6f\x64\x65\x0a\x6d\x61\x6b\x65"
  "\x2d\x68\x6f\x6f\x6b\x0c\x70\x63\x66\x67\x2d\x69\x6e\x76\x65\x72"
  "\x74\x11\x73\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66\x67\x2d\x74\x72"
  "\x75\x65\x12\x73\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66\x67\x2d\x66"
  "\x61\x6c\x73\x65\x15\x0c\x70\x6e\x6f\x64\x65\x2d\x3e\x70\x63\x66"
  "\x67\x12\x0c\x73\x6e\x6f\x64\x65\x2d\x3e\x73\x63\x66\x67\x0f\x63"
  "\x66\x67\x2d\x65\x6e\x74\x72\x79\x2d\x65\x64\x67\x65\x04\x11\x04"
  "\x18\x04\x17\x04\x16\x04\x14\x04\x13\x04\x10\x04\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0a\x63\x66"
  "\x67\x2d\x6e\x75\x6c\x6c\x3f\x0e\x6d\x61\x6b\x65\x2d\x6e\x75\x6c"
  "\x6c\x2d\x63\x66\x67\x17\x70\x63\x66\x67\x2d\x61\x6c\x74\x65\x72"
  "\x6e\x61\x74\x69\x76\x65\x2d\x68\x6f\x6f\x6b\x73\x16\x70\x63\x66"
  "\x67\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x2d\x68\x6f\x6f"
  "\x6b\x73\x10\x73\x63\x66\x67\x2d\x6e\x65\x78\x74\x2d\x68\x6f\x6f"
  "\x6b\x73\x0f\x63\x66\x67\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64"
  "\x65\x08\x63\x66\x67\x2d\x74\x61\x67\x0a\x6d\x61\x6b\x65\x2d\x70"
  "\x63\x66\x67\x36\x0b\x6d\x61\x6b\x65\x2d\x73\x63\x66\x67\x2a\x35"
  "\x0a\x6d\x61\x6b\x65\x2d\x73\x63\x66\x67\x0a\x0e\x04\x0d\x04\x0c"
  "\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x0a\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x07\x66\x61"
  "\x6c\x73\x65\x3f\x05\x63\x6f\x6e\x73\x04\x63\x61\x72\x04\x63\x64"
  "\x72\x37\x06\x6e\x75\x6c\x6c\x3f\x36\x35\x09\x03\x11\x6d\x65\x6d"
  "\x62\x65\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x2a\x03"
  "\x2d\x03\x2e\x04\x2b\x03\x2f\x04\x08\x80\x01\x82\x02\x80\x80\x04"
  "\x7f\x80\x02\x81\x81\x02\x7e\xfe\x01\x81\x81\x02\x7d\xfc\x01\x81"
  "\x89\x02\x7c\xfa\x01\x81\x89\x02\x7b\xf8\x01\x81\x89\x02\x7a\xf6"
  "\x01\x81\x89\x02\x79\xf4\x01\x81\x89\x02\x78\xf2\x01\x81\x8b\x02"
  "\x77\xf0\x01\x81\x89\x02\x76\xee\x01\x81\x89\x02\x75\xec\x01\x81"
  "\x89\x02\x74\xea\x01\x84\x06\x73\xe8\x01\x81\x87\x02\x72\xe6\x01"
  "\x81\x85\x02\x71\xe4\x01\x81\x89\x02\x70\xe2\x01\x84\x06\x6f\xe0"
  "\x01\x81\x87\x02\x6e\xde\x01\x81\x87\x02\x6d\xdc\x01\x81\x89\x02"
  "\x6c\xda\x01\x81\x89\x02\x6b\xd8\x01\x81\x89\x02\x6a\xd6\x01\x81"
  "\x89\x02\x69\xd4\x01\x81\x89\x02\x68\xd2\x01\x81\x8b\x02\x67\xd0"
  "\x01\x81\x89\x02\x66\xce\x01\x81\x85\x02\x65\xcc\x01\x81\x87\x02"
  "\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x8d\x02\x62\xc6\x01\x81"
  "\x89\x02\x61\xc4\x01\x81\x89\x02\x60\xc2\x01\x81\x89\x02\x5f\xc0"
  "\x01\x81\x89\x02\x5e\xbe\x01\x81\x89\x02\x5d\xbc\x01\x81\x89\x02"
  "\x5c\xba\x01\x81\x89\x02\x5b\xb8\x01\x81\x89\x02\x5a\xb6\x01\x81"
  "\x87\x02\x59\xb4\x01\x81\x89\x02\x58\xb2\x01\x81\x89\x02\x57\xb0"
  "\x01\x81\x8d\x02\x56\xae\x01\x81\x89\x02\x55\xac\x01\x81\x89\x02"
  "\x54\xaa\x01\x81\x89\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01\x81"
  "\x8b\x02\x51\xa4\x01\x81\x89\x02\x50\xa2\x01\x81\x89\x02\x4f\xa0"
  "\x01\x81\x8b\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x87\x02"
  "\x4c\x9a\x01\x81\x89\x02\x4b\x98\x01\x81\x89\x02\x4a\x96\x01\x81"
  "\x89\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x85\x02\x47\x90"
  "\x01\x81\x89\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x8d\x02"
  "\x44\x8a\x01\x81\x8b\x02\x43\x88\x01\x81\x87\x02\x42\x86\x01\x81"
  "\x87\x02\x41\x84\x01\x81\x85\x02\x40\x82\x01\x81\x8b\x02\x3f\x80"
  "\x01\x81\x89\x02\x3e\x7e\x81\x89\x02\x3d\x7c\x81\x87\x02\x3c\x7a"
  "\x81\x89\x02\x3b\x78\x81\x89\x02\x3a\x76\x81\x81\x02\x39\x74\x81"
  "\x87\x02\x38\x72\x81\x83\x02\x37\x70\x81\x8f\x02\x36\x6e\x81\x8d"
  "\x02\x35\x6c\x81\x8b\x02\x34\x6a\x81\x89\x02\x33\x68\x81\x89\x02"
  "\x32\x66\x81\x89\x02\x31\x64\x81\x87\x02\x30\x62\x81\x83\x02\x2f"
  "\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x81\x02\x2c\x5a"
  "\x81\x83\x02\x2b\x58\x81\x89\x02\x2a\x56\x81\x87\x02\x29\x54\x81"
  "\x85\x02\x28\x52\x81\x87\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x81"
  "\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x87\x02"
  "\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02\x1f"
  "\x40\x81\x83\x02\x1e\x3e\x81\x81\x02\x1d\x3c\x81\x83\x02\x1c\x3a"
  "\x81\x85\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81"
  "\x83\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x85"
  "\x02\x15\x2c\x81\x83\x02\x14\x2a\x83\x04\x13\x28\x81\x83\x02\x12"
  "\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20"
  "\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81"
  "\x87\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85"
  "\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81\x83\x02"
  "\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83\x02\x02"
  "\x06\x81\x85\x02\x01\x04\x81\x83\x02\x81\x02\xc9\x02";

SCHEME_OBJECT *
cfg3_so_data_22b89a2dffd80cc7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cfg3_so_data_22b89a2dffd80cc7 [0]))), (sizeof (prog_cfg3_so_data_22b89a2dffd80cc7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_144]));
}

DECLARE_COMPILED_DATA_NS ("cfg3.so", cfg3_so_data_22b89a2dffd80cc7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cfg3.so", "b0b0f44dba7b2597")
