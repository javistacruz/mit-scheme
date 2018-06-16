/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_11 9
#define LABEL_1_8 11
#define LABEL_1_14 13
#define LABEL_1_10 15
#define LABEL_1_13 17
#define LABEL_1_16 19
#define ENVIRONMENT_LABEL_1_3 33
#define DEBUGGING_LABEL_1_2 32
#define OBJECT_1_2 31
#define OBJECT_1_1 30
#define OBJECT_1_0 29
#define EXECUTE_CACHE_1_15 21
#define EXECUTE_CACHE_1_12 23
#define EXECUTE_CACHE_1_9 25
#define EXECUTE_CACHE_1_7 27
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto connectivity_analysis_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_7;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (connectivity_analysis_13)
DEFLABEL (connectivity_analysis_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_1_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_1_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define LABEL_2_6 9
#define ENVIRONMENT_LABEL_2_3 23
#define DEBUGGING_LABEL_2_2 22
#define OBJECT_2_4 21
#define OBJECT_2_3 20
#define OBJECT_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_10 11
#define EXECUTE_CACHE_2_9 13
#define EXECUTE_CACHE_2_7 15
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_2_4);
      goto walk_node_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_10)
DEFLABEL (walk_node_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (label_11)
  (Wrd23.Obj) = (Rsp [2]);
  if (! ((Wrd23.Obj) == (Wrd21.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_14;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_14;
  (Wrd25.Obj) = ((Wrd31.pObj) [2]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_14)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_2_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_8)
  (Wrd25.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_5 13
#define OBJECT_3_4 12
#define OBJECT_3_3 11
#define OBJECT_3_2 10
#define OBJECT_3_1 9
#define OBJECT_3_0 8
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      goto color_nodeB_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (color_nodeB_8)
DEFLABEL (color_nodeB_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_14;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_14;
  (Wrd42.Obj) = (Rsp [1]);
  ((Wrd46.pObj) [3]) = (Wrd42.Obj);

DEFLABEL (label_13)
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_12;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_12;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_11)
  (Wrd25.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_3_2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 3);

DEFLABEL (label_10)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd37.Lng))))
    goto label_9;
  ((Wrd35.pObj) [2]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_3_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_3_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_3_0]);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 3);

DEFLABEL (label_6)
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_10 7
#define LABEL_4_6 9
#define TAG_4_7 3
#define LABEL_4_9 11
#define ENVIRONMENT_LABEL_4_3 24
#define DEBUGGING_LABEL_4_2 23
#define OBJECT_4_5 22
#define OBJECT_4_4 21
#define OBJECT_4_3 20
#define OBJECT_4_2 19
#define OBJECT_4_1 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_8 15
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto recolor_nodesB_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_10);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recolor_nodesB_8)
DEFLABEL (recolor_nodesB_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_13;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_12)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 3);

DEFLABEL (label_11)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  ((Wrd15.pObj) [2]) = Rvl;
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_4_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_4_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 3);

DEFLABEL (label_15)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_14;
  ((Wrd18.pObj) [3]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_10 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define LABEL_5_14 19
#define LABEL_5_16 21
#define LABEL_5_17 23
#define LABEL_5_18 25
#define LABEL_5_19 27
#define LABEL_5_20 29
#define LABEL_5_21 31
#define LABEL_5_23 33
#define LABEL_5_24 35
#define LABEL_5_27 37
#define LABEL_5_25 39
#define LABEL_5_31 41
#define LABEL_5_26 43
#define LABEL_5_22 45
#define LABEL_5_33 47
#define LABEL_5_35 49
#define LABEL_5_9 51
#define LABEL_5_36 53
#define LABEL_5_37 55
#define LABEL_5_30 57
#define LABEL_5_34 59
#define ENVIRONMENT_LABEL_5_3 96
#define DEBUGGING_LABEL_5_2 95
#define OBJECT_5_11 94
#define OBJECT_5_10 93
#define OBJECT_5_9 92
#define OBJECT_5_8 91
#define OBJECT_5_7 90
#define OBJECT_5_6 89
#define OBJECT_5_5 88
#define OBJECT_5_4 87
#define OBJECT_5_3 86
#define OBJECT_5_2 85
#define OBJECT_5_1 84
#define OBJECT_5_0 83
#define EXECUTE_CACHE_5_38 61
#define EXECUTE_CACHE_5_32 63
#define EXECUTE_CACHE_5_29 65
#define EXECUTE_CACHE_5_28 67
#define EXECUTE_CACHE_5_15 69
#define EXECUTE_CACHE_5_11 71
#define FREE_REFERENCE_5_8 74
#define FREE_REFERENCE_5_7 75
#define FREE_REFERENCE_5_6 76
#define FREE_REFERENCE_5_5 77
#define FREE_REFERENCE_5_4 78
#define FREE_REFERENCE_5_3 79
#define FREE_REFERENCE_5_2 80
#define FREE_REFERENCE_5_1 81
#define FREE_REFERENCE_5_0 82
#define FREE_REFERENCES_LABEL_5_0 60
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd85;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd97;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd116;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd113;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd152;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd214;
  machine_word Wrd208;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd192;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd178;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd175;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd171;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd130;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_5_4);
      goto walk_next_33;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_51;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_49;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_5_17);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_5_18);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_5_19);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_5_20);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_5_21);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_5_23);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_5_24);
      goto label_43;

    case 17:
      current_block = (Rpc - LABEL_5_27);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_5_31);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_5_26);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_5_33);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_5_35);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_22;

    case 25:
      current_block = (Rpc - LABEL_5_36);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_5_37);
      goto label_54;

    case 27:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_13;

    case 28:
      current_block = (Rpc - LABEL_5_34);
      goto continuation_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_57)
DEFLABEL (walk_next_33)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_106;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_106;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_105)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_104;
  Wrd22 = Wrd26;

DEFLABEL (label_103)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_78;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_77;
  Wrd30 = Wrd34;

DEFLABEL (label_76)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_64;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_75;
  Wrd38 = Wrd42;

DEFLABEL (label_74)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_64;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_73;
  Wrd46 = Wrd50;

DEFLABEL (label_72)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_64;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_71;
  Wrd54 = Wrd58;

DEFLABEL (label_70)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_64;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_69;
  Wrd62 = Wrd66;

DEFLABEL (label_68)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_64;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_6]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_67;
  Wrd70 = Wrd74;

DEFLABEL (label_66)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd70.Obj))
    goto label_64;
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_7]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_63;
  Wrd78 = Wrd82;

DEFLABEL (label_62)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_58;
  (Wrd85.Obj) = (current_block [OBJECT_5_11]);
  (Rsp [1]) = (Wrd85.Obj);
  (Rsp [2]) = (Wrd84.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (label_58)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd104.Obj) = (Rsp [4]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_60;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd103.Lng))))
    goto label_60;
  (Wrd97.Obj) = ((Wrd101.pObj) [7]);
  (* (--Rsp)) = (Wrd97.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (label_60)
  (Wrd106.Obj) = (Rsp [4]);
  (Wrd107.Obj) = (current_block [OBJECT_5_10]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_44)
DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_24])), (Wrd79.pObj));

DEFLABEL (label_43)
  (Wrd78.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd124.uLng) == 10))
    goto label_65;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd121.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd122.Lng))))
    goto label_65;
  (Wrd116.Obj) = ((Wrd120.pObj) [7]);
  (* (--Rsp)) = (Wrd116.Obj);
  goto label_59;

DEFLABEL (label_65)
  (Wrd125.Obj) = (Rsp [2]);
  (Wrd126.Obj) = (current_block [OBJECT_5_10]);
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  goto label_61;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_21])), (Wrd71.pObj));

DEFLABEL (label_42)
  (Wrd70.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_20])), (Wrd63.pObj));

DEFLABEL (label_41)
  (Wrd62.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_19])), (Wrd55.pObj));

DEFLABEL (label_40)
  (Wrd54.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_18])), (Wrd47.pObj));

DEFLABEL (label_39)
  (Wrd46.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd39.pObj));

DEFLABEL (label_38)
  (Wrd38.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_16])), (Wrd31.pObj));

DEFLABEL (label_37)
  (Wrd30.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd139.Obj) = (Rsp [1]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd140.uLng) == 10))
    goto label_102;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd138.Lng))))
    goto label_102;
  (Wrd130.Obj) = ((Wrd136.pObj) [8]);

DEFLABEL (label_101)
  (Rsp [0]) = (Wrd130.Obj);
  if ((Wrd130.Obj) == (current_block [OBJECT_5_3]))
    goto label_83;
  if ((Wrd130.Obj) == (current_block [OBJECT_5_8]))
    goto label_79;
  Rvl = (current_block [OBJECT_5_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd161.Obj) = (Rsp [1]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 10))
    goto label_82;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd160.Lng))))
    goto label_82;
  (Wrd152.Obj) = ((Wrd158.pObj) [10]);

DEFLABEL (label_81)
  (Rsp [1]) = (Wrd152.Obj);

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_82)
  (Wrd163.Obj) = (Rsp [1]);
  (Wrd164.Obj) = (current_block [OBJECT_5_5]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_47)
  (Wrd152.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd222.Obj) = (Rsp [1]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd223.uLng) == 10))
    goto label_100;
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (Wrd221.Lng) = (FIXNUM_TO_LONG (Wrd220.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd221.Lng))))
    goto label_100;
  (Wrd171.Obj) = ((Wrd219.pObj) [13]);
  if ((Wrd171.Obj) == ((SCHEME_OBJECT) 0))
    goto label_89;

DEFLABEL (label_88)
  (Wrd201.Obj) = (Rsp [1]);
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd201.Obj));
  if (! ((Wrd202.uLng) == 10))
    goto label_87;
  (Wrd198.pObj) = (OBJECT_ADDRESS (Wrd201.Obj));
  (Wrd199.Obj) = ((Wrd198.pObj) [0]);
  (Wrd200.Lng) = (FIXNUM_TO_LONG (Wrd199.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd200.Lng))))
    goto label_87;
  (Wrd192.Obj) = ((Wrd198.pObj) [11]);

DEFLABEL (label_86)
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd210.uLng) == 1))
    goto label_85;
  (Wrd209.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd208.Obj) = ((Wrd209.pObj) [0]);

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd208.Obj);
  goto label_80;

DEFLABEL (label_85)
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_7]), 1);

DEFLABEL (label_50)
  (Wrd208.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.Obj) = (current_block [OBJECT_5_6]);
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_49)
  (Wrd192.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (Wrd185.Obj) = (Rsp [2]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 10))
    goto label_99;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd183.Obj) = ((Wrd182.pObj) [0]);
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd183.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd184.Lng))))
    goto label_99;
  (Wrd178.Obj) = ((Wrd182.pObj) [10]);
  (* (--Rsp)) = (Wrd178.Obj);

DEFLABEL (label_98)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_91;

DEFLABEL (label_90)
  Rvl = (current_block [OBJECT_5_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_97;
  Wrd8 = Wrd12;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_95;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_95;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_94)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd30.Obj)))
    goto label_90;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_93;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd50.Lng))))
    goto label_93;
  (Wrd44.Obj) = ((Wrd48.pObj) [11]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_34);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (label_93)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_5_6]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_54)
  (Wrd14.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_36])), (Wrd9.pObj));

DEFLABEL (label_53)
  (Wrd8.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd187.Obj) = (Rsp [2]);
  (Wrd188.Obj) = (current_block [OBJECT_5_5]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  (Wrd224.Obj) = (Rsp [1]);
  (Wrd225.Obj) = (current_block [OBJECT_5_4]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  goto label_88;

DEFLABEL (label_102)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.Obj) = (current_block [OBJECT_5_2]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_46)
  (Wrd130.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_108;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_108;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_107)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_30);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (label_108)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_5_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_7 9
#define ENVIRONMENT_LABEL_6_3 21
#define DEBUGGING_LABEL_6_2 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_10 11
#define EXECUTE_CACHE_6_9 13
#define EXECUTE_CACHE_6_6 15
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
conect_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_6_4);
      goto walk_continuation_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_continuation_8)
DEFLABEL (walk_continuation_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_11;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  (Wrd12.Obj) = ((Wrd16.pObj) [11]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_6_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
conect_so_84e1a933c917a69d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
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

static const struct liarc_code_S arr_decl_conect_so_84e1a933c917a69d [6] =
  {
    { "conect_so_code_1", 9, conect_so_code_1 },
    { "conect_so_code_2", 4, conect_so_code_2 },
    { "conect_so_code_3", 3, conect_so_code_3 },
    { "conect_so_code_4", 5, conect_so_code_4 },
    { "conect_so_code_5", 29, conect_so_code_5 },
    { "conect_so_code_6", 4, conect_so_code_6 }
  };

int
decl_conect_so_84e1a933c917a69d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_conect_so_84e1a933c917a69d);
  return (0);
}

DECLARE_COMPILED_CODE ("conect.so", 3, decl_conect_so_84e1a933c917a69d, conect_so_84e1a933c917a69d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_conect_so_data_84e1a933c917a69d [1194] =
  "\x68\x0f\xa6\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\xc2\xb9\x84"
  "\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x82\x88\xc2\xbe\x81\x1d\xb1\x82\x28\x0d\xbf\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xc3\x1c\x1d\xb6\x81\xc3\x1c\x82\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x1b\x1b\x1d\x82"
  "\xb6\x81\x28\xb2\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x86\x1d\x0d\xc1\x02\x02"
  "\x02\x0d\x02\xb1\x80\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28"
  "\x0d\x1c\x28\x0d\xbe\x28\xb3\x28\x0d\x28\xb4\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x86\x88"
  "\xb1\x02\x1d\x28\x1b\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x9d\xbb\x88\xb3\x1b\x2a\xb2\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb5\x2a\x9d\xb6\x1b\x1b\xb7\xb4\x0d\x9d\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x63\x6f\x6e\x65\x63\x74"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x02\x14\x6d\x61\x6b\x65\x2d\x73\x75\x62"
  "\x67\x72\x61\x70\x68\x2d\x63\x6f\x6c\x6f\x72\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74"
  "\x2d\x6e\x6f\x64\x65\x04\x0a\x77\x61\x6c\x6b\x2d\x6e\x6f\x64\x65"
  "\x05\x0c\x14\x81\x85\x02\x0b\x12\x81\x83\x02\x0a\x10\x81\x89\x02"
  "\x09\x0e\x81\x85\x02\x08\x0c\x83\x04\x07\x0a\x81\x8b\x02\x06\x08"
  "\x81\x87\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06\x13\x22\x02\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x02\x04\x0c\x63\x6f"
  "\x6c\x6f\x72\x2d\x6e\x6f\x64\x65\x21\x04\x0f\x72\x65\x63\x6f\x6c"
  "\x6f\x72\x2d\x6e\x6f\x64\x65\x73\x21\x09\x04\x0a\x77\x61\x6c\x6b"
  "\x2d\x6e\x65\x78\x74\x0a\x04\x10\x0a\x81\x87\x02\x0f\x08\x81\x87"
  "\x02\x0e\x06\x81\x85\x02\x0d\x04\x84\x06\x09\x18\x0b\x02\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0c\x02\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0d\x13\x08\x81\x87\x02\x12"
  "\x06\x81\x85\x02\x11\x04\x84\x06\x07\x10\x0e\x02\x0c\x0d\x02\x04"
  "\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x03\x18\x0c\x81\x87\x02\x17"
  "\x0a\x81\x85\x02\x16\x08\x81\x89\x02\x15\x06\x81\x85\x02\x14\x04"
  "\x84\x06\x0b\x19\x0d\x02\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e"
  "\x6f\x64\x65\x20\x74\x79\x70\x65\x3a\x02\x07\x72\x65\x74\x75\x72"
  "\x6e\x04\x63\x61\x72\x0b\x0a\x0d\x0c\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x08\x10\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x61\x67\x13\x76\x69\x72\x74\x75\x61\x6c\x2d\x72\x65"
  "\x74\x75\x72\x6e\x2d\x74\x61\x67\x08\x70\x6f\x70\x2d\x74\x61\x67"
  "\x0f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x61\x67\x0f"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74\x61\x67\x0c\x66"
  "\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x14\x73\x74\x61\x63\x6b"
  "\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x2d\x74\x61\x67\x0e\x74"
  "\x72\x75\x65\x2d\x74\x65\x73\x74\x2d\x74\x61\x67\x0e\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0a\x03\x13\x72\x76\x61"
  "\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x0c"
  "\x04\x12\x77\x61\x6c\x6b\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x03\x04\x06\x65\x72\x72\x6f\x72\x04\x03\x17\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69\x6e\x65\x2d\x63"
  "\x6f\x64\x65\x3f\x07\x35\x3c\x81\x87\x02\x34\x3a\x81\x87\x02\x33"
  "\x38\x81\x89\x02\x32\x36\x81\x87\x02\x31\x34\x81\x87\x02\x30\x32"
  "\x81\x89\x02\x2f\x30\x81\x87\x02\x2e\x2e\x81\x87\x02\x2d\x2c\x81"
  "\x8b\x02\x2c\x2a\x81\x89\x02\x2b\x28\x81\x87\x02\x2a\x26\x81\x8d"
  "\x02\x29\x24\x81\x87\x02\x28\x22\x81\x89\x02\x27\x20\x81\x87\x02"
  "\x26\x1e\x81\x87\x02\x25\x1c\x81\x87\x02\x24\x1a\x81\x87\x02\x23"
  "\x18\x81\x87\x02\x22\x16\x81\x87\x02\x21\x14\x81\x87\x02\x20\x12"
  "\x81\x87\x02\x1f\x10\x81\x87\x02\x1e\x0e\x81\x89\x02\x1d\x0c\x81"
  "\x87\x02\x1c\x0a\x81\x87\x02\x1b\x08\x81\x87\x02\x1a\x06\x81\x85"
  "\x02\x19\x04\x84\x06\x3b\x61\x02\x0b\x02\x03\x0c\x03\x04\x04\x39"
  "\x0a\x81\x87\x02\x38\x08\x81\x89\x02\x37\x06\x81\x85\x02\x36\x04"
  "\x84\x06\x09\x16\x0c\x0c\x04\x04\x0d\x04\x0e\x04\x0b\x04\x04\x0a"
  "\x09\x16\x63\x6f\x6e\x6e\x65\x63\x74\x69\x76\x69\x74\x79\x2d\x61"
  "\x6e\x61\x6c\x79\x73\x69\x73\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06"
  "\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
conect_so_data_84e1a933c917a69d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_conect_so_data_84e1a933c917a69d [0]))), (sizeof (prog_conect_so_data_84e1a933c917a69d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("conect.so", conect_so_data_84e1a933c917a69d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("conect.so", "e7ce3414403d0f05")
