/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:10-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_8 13
#define ENVIRONMENT_LABEL_1_3 26
#define DEBUGGING_LABEL_1_2 25
#define OBJECT_1_3 24
#define OBJECT_1_2 23
#define OBJECT_1_1 22
#define OBJECT_1_0 21
#define EXECUTE_CACHE_1_12 15
#define EXECUTE_CACHE_1_11 17
#define EXECUTE_CACHE_1_7 19
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
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
      current_block = (Rpc - LABEL_1_4);
      goto snode_deleteB_6;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode_deleteB_13)
DEFLABEL (snode_deleteB_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_17;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_17;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_16)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_15;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd50.Lng))))
    goto label_15;
  (Wrd44.Obj) = ((Wrd48.pObj) [6]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_15)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_1_2]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_1_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_20;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd66.Lng))))
    goto label_20;
  (Wrd58.Obj) = ((Wrd64.pObj) [6]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd58.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_20)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Obj) = (current_block [OBJECT_1_2]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_11)
  (Wrd58.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define EXECUTE_CACHE_2_9 11
#define EXECUTE_CACHE_2_7 13
#define FREE_REFERENCE_2_0 16
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto edge_insert_snodeB_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edge_insert_snodeB_8)
DEFLABEL (edge_insert_snodeB_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_8 9
#define ENVIRONMENT_LABEL_3_3 20
#define DEBUGGING_LABEL_3_2 19
#define OBJECT_3_1 18
#define OBJECT_3_0 17
#define EXECUTE_CACHE_3_9 11
#define EXECUTE_CACHE_3_7 13
#define FREE_REFERENCE_3_0 16
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_3_4);
      goto node_insert_snodeB_2;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_insert_snodeB_7)
DEFLABEL (node_insert_snodeB_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_8])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_3_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto node_disconnect_on_rightB_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_disconnect_on_rightB_5)
DEFLABEL (node_disconnect_on_rightB_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 14
#define DEBUGGING_LABEL_5_2 13
#define EXECUTE_CACHE_5_8 7
#define EXECUTE_CACHE_5_7 9
#define EXECUTE_CACHE_5_6 11
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto node_disconnect_on_leftB_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_disconnect_on_leftB_4)
DEFLABEL (node_disconnect_on_leftB_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto snode_disconnect_on_leftB_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode_disconnect_on_leftB_6)
DEFLABEL (snode_disconnect_on_leftB_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 18
#define DEBUGGING_LABEL_7_2 17
#define OBJECT_7_3 16
#define OBJECT_7_2 15
#define OBJECT_7_1 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto pnode_disconnect_on_leftB_5;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pnode_disconnect_on_leftB_10)
DEFLABEL (pnode_disconnect_on_leftB_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_14;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd35.Lng))))
    goto label_14;
  (Wrd27.Obj) = ((Wrd33.pObj) [8]);

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd27.Obj);
  if (! ((Wrd27.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = (current_block [OBJECT_7_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_7_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 14
#define DEBUGGING_LABEL_8_2 13
#define EXECUTE_CACHE_8_8 7
#define EXECUTE_CACHE_8_7 9
#define EXECUTE_CACHE_8_6 11
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto node_replaceB_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_replaceB_4)
DEFLABEL (node_replaceB_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_6 5
#define LABEL_9_5 7
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define OBJECT_9_1 14
#define OBJECT_9_0 13
#define EXECUTE_CACHE_9_8 9
#define EXECUTE_CACHE_9_7 11
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_9_4);
      goto snode_replaceB_2;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode_replaceB_6)
DEFLABEL (snode_replaceB_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_8;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_9_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto pnode_replaceB_2;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pnode_replaceB_6)
DEFLABEL (pnode_replaceB_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_8;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_10_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define OBJECT_11_1 10
#define OBJECT_11_0 9
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto node_replace_on_rightB_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_replace_on_rightB_5)
DEFLABEL (node_replace_on_rightB_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_8 7
#define EXECUTE_CACHE_12_7 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto node_replace_on_leftB_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_replace_on_leftB_4)
DEFLABEL (node_replace_on_leftB_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_2 15
#define OBJECT_13_1 14
#define OBJECT_13_0 13
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCE_13_0 12
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_13_4);
      goto snode_replace_on_leftB_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (snode_replace_on_leftB_7)
DEFLABEL (snode_replace_on_leftB_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (current_block [OBJECT_13_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_10;
  Wrd25 = Wrd29;

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd26.pObj));

DEFLABEL (label_5)
  (Wrd25.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_10 13
#define ENVIRONMENT_LABEL_14_3 25
#define DEBUGGING_LABEL_14_2 24
#define OBJECT_14_3 23
#define OBJECT_14_2 22
#define OBJECT_14_1 21
#define OBJECT_14_0 20
#define EXECUTE_CACHE_14_9 15
#define FREE_REFERENCE_14_1 18
#define FREE_REFERENCE_14_0 19
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto pnode_replace_on_leftB_5;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pnode_replace_on_leftB_12)
DEFLABEL (pnode_replace_on_leftB_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_14;
  Wrd29 = Wrd33;

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_10])), (Wrd30.pObj));

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_21)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_20;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd44.Lng))))
    goto label_20;
  (Wrd38.Obj) = ((Wrd42.pObj) [8]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_19)
  (Wrd52.Obj) = (Rsp [0]);
  if (! ((Wrd52.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd54.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_18;
  Wrd56 = Wrd60;

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd57.pObj));

DEFLABEL (label_10)
  (Wrd56.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_14_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_14_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_5);
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define OBJECT_15_1 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto node_previous_0P_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_0P_5)
DEFLABEL (node_previous_0P_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 20
#define DEBUGGING_LABEL_16_2 19
#define OBJECT_16_5 18
#define OBJECT_16_4 17
#define OBJECT_16_3 16
#define OBJECT_16_2 15
#define OBJECT_16_1 14
#define OBJECT_16_0 13
#define EXECUTE_CACHE_16_8 11
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_16_4);
      goto edges_0P_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edges_0P_10)
DEFLABEL (edges_0P_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_19;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_17)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_16;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_16;
  (Wrd17.Obj) = ((Wrd32.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd37.Obj) = (current_block [OBJECT_16_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_16_1]);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto node_previous_0P_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_0P_5)
DEFLABEL (node_previous_0P_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define ENVIRONMENT_LABEL_18_3 20
#define DEBUGGING_LABEL_18_2 19
#define OBJECT_18_5 18
#define OBJECT_18_4 17
#define OBJECT_18_3 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 11
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_18_4);
      goto edges_0P_4;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edges_0P_10)
DEFLABEL (edges_0P_4)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_18_0]))
    goto label_19;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_17)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_16;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_16;
  (Wrd17.Obj) = ((Wrd32.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_18_5]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_4]), 1);

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd37.Obj) = (current_block [OBJECT_18_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_12;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define OBJECT_19_1 10
#define OBJECT_19_0 9
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto node_previous_1P_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_1P_5)
DEFLABEL (node_previous_1P_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define ENVIRONMENT_LABEL_20_3 23
#define DEBUGGING_LABEL_20_2 22
#define OBJECT_20_4 21
#define OBJECT_20_3 20
#define OBJECT_20_2 19
#define OBJECT_20_1 18
#define OBJECT_20_0 17
#define FREE_REFERENCE_20_1 15
#define FREE_REFERENCE_20_0 16
#define FREE_REFERENCES_LABEL_20_0 14
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd17;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_20_4);
      goto edges_1P_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edges_1P_13)
DEFLABEL (edges_1P_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_20_0])))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_25)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_24;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_24;
  (Wrd17.Obj) = ((Wrd42.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_19;
  Wrd34 = Wrd38;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 1);

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_8])), (Wrd35.pObj));

DEFLABEL (label_10)
  (Wrd34.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_23;
  Wrd19 = Wrd23;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_17;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd47.Obj) = (current_block [OBJECT_20_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_20;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define OBJECT_21_1 10
#define OBJECT_21_0 9
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto node_previous_1P_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_1P_5)
DEFLABEL (node_previous_1P_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define ENVIRONMENT_LABEL_22_3 23
#define DEBUGGING_LABEL_22_2 22
#define OBJECT_22_4 21
#define OBJECT_22_3 20
#define OBJECT_22_2 19
#define OBJECT_22_1 18
#define OBJECT_22_0 17
#define FREE_REFERENCE_22_1 15
#define FREE_REFERENCE_22_0 16
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd17;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_22_4);
      goto edges_1P_5;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edges_1P_13)
DEFLABEL (edges_1P_5)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_22_0])))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_26;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_25)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_24;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_24;
  (Wrd17.Obj) = ((Wrd42.pObj) [1]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_19;
  Wrd34 = Wrd38;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_17)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 1);

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd35.pObj));

DEFLABEL (label_10)
  (Wrd34.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_23;
  Wrd19 = Wrd23;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_17;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_7])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd47.Obj) = (current_block [OBJECT_22_2]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_20;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define OBJECT_23_1 10
#define OBJECT_23_0 9
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto node_previous_first_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_previous_first_5)
DEFLABEL (node_previous_first_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_23_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 22
#define DEBUGGING_LABEL_24_2 21
#define OBJECT_24_5 20
#define OBJECT_24_4 19
#define OBJECT_24_3 18
#define OBJECT_24_2 17
#define OBJECT_24_1 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_9 11
#define EXECUTE_CACHE_24_5 13
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd43;
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
      goto edges_first_node_5;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (edges_first_node_11)
DEFLABEL (edges_first_node_5)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_24_0])))
    goto label_12;
  (Wrd43.Obj) = (current_block [OBJECT_24_1]);
  (Rsp [0]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

DEFLABEL (label_12)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_19;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_18)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd17.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_15;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (label_15)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 1);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (current_block [OBJECT_24_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 1);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define TAG_25_7 2
#define LABEL_25_9 9
#define ENVIRONMENT_LABEL_25_3 18
#define DEBUGGING_LABEL_25_2 17
#define OBJECT_25_3 16
#define OBJECT_25_2 15
#define OBJECT_25_1 14
#define OBJECT_25_0 13
#define EXECUTE_CACHE_25_8 11
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_25_4);
      goto for_each_previous_node_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_previous_node_9)
DEFLABEL (for_each_previous_node_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_6])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_25_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Rsp [1]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_25_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 9
#define DEBUGGING_LABEL_26_2 8
#define OBJECT_26_3 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_26_4);
      goto cfg_node_tag_noopB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_node_tag_noopB_3)
DEFLABEL (cfg_node_tag_noopB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 3);

DEFLABEL (label_5)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_4;
  ((Wrd16.pObj) [8]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_26_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto cfg_node_tag_noopP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_node_tag_noopP_3)
DEFLABEL (cfg_node_tag_noopP_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 11
#define DEBUGGING_LABEL_28_2 10
#define OBJECT_28_3 9
#define OBJECT_28_2 8
#define OBJECT_28_1 7
#define OBJECT_28_0 6
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_28_4);
      goto cfg_node_noopP_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cfg_node_noopP_5)
DEFLABEL (cfg_node_noopP_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_28_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define ENVIRONMENT_LABEL_29_3 17
#define DEBUGGING_LABEL_29_2 16
#define OBJECT_29_0 15
#define FREE_REFERENCE_29_1 11
#define FREE_REFERENCE_29_0 12
#define FREE_ASSIGNMENT_29_0 14
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_29_4);
      goto make_noop_node_3;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_noop_node_9)
DEFLABEL (make_noop_node_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = (& (Rhp [-8]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_14;
  Wrd25 = Wrd29;

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd35.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd43.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_7])), (Wrd35.pObj), (Wrd31.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd26.pObj));

DEFLABEL (label_6)
  (Wrd25.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_7 5
#define TAG_30_8 1
#define LABEL_30_5 7
#define TAG_30_6 2
#define LABEL_30_11 9
#define LABEL_30_12 11
#define LABEL_30_13 13
#define LABEL_30_10 15
#define LABEL_30_15 17
#define LABEL_30_16 19
#define LABEL_30_14 21
#define ENVIRONMENT_LABEL_30_3 35
#define DEBUGGING_LABEL_30_2 34
#define OBJECT_30_1 33
#define OBJECT_30_0 32
#define EXECUTE_CACHE_30_17 23
#define EXECUTE_CACHE_30_9 25
#define FREE_REFERENCE_30_1 28
#define FREE_REFERENCE_30_0 29
#define FREE_ASSIGNMENT_30_0 31
#define FREE_REFERENCES_LABEL_30_0 22
#define NUMBER_OF_LINKER_SECTIONS_30_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_30_4);
      goto cleanup_noop_nodes_12;

    case 1:
      current_block = (Rpc - LABEL_30_7);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto swapB_21;

    case 3:
      current_block = (Rpc - LABEL_30_11);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_30_12);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_30_16);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_30_14);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cleanup_noop_nodes_20)
DEFLABEL (cleanup_noop_nodes_12)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_30_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_24;
  Wrd15 = Wrd19;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_16])), (Wrd16.pObj));

DEFLABEL (label_18)
  (Wrd15.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_15])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (swapB_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_30_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_30_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_30_11])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 20
#define DEBUGGING_LABEL_31_2 19
#define OBJECT_31_0 18
#define EXECUTE_CACHE_31_8 11
#define FREE_REFERENCE_31_1 14
#define FREE_REFERENCE_31_0 15
#define FREE_ASSIGNMENT_31_0 17
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_31_4);
      goto make_false_pcfg_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_false_pcfg_10)
DEFLABEL (make_false_pcfg_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_31_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = (& (Rhp [-8]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_15;
  Wrd25 = Wrd29;

DEFLABEL (label_14)
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd35.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_11)
  (Wrd48.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (label_13)
  if ((Wrd43.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_7])), (Wrd35.pObj), (Wrd31.Obj));

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd26.pObj));

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define ENVIRONMENT_LABEL_32_3 20
#define DEBUGGING_LABEL_32_2 19
#define OBJECT_32_0 18
#define EXECUTE_CACHE_32_8 11
#define FREE_REFERENCE_32_1 14
#define FREE_REFERENCE_32_0 15
#define FREE_ASSIGNMENT_32_0 17
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cfg2_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_32_4);
      goto make_true_pcfg_4;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_true_pcfg_10)
DEFLABEL (make_true_pcfg_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_32_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd13.pObj) = (& (Rhp [-8]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_15;
  Wrd25 = Wrd29;

DEFLABEL (label_14)
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd35.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_11)
  (Wrd48.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (label_13)
  if ((Wrd43.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_7])), (Wrd35.pObj), (Wrd31.Obj));

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd26.pObj));

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_5])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_11 11
#define LABEL_10 13
#define LABEL_12 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_20 19
#define LABEL_15 21
#define TAG_16 9
#define LABEL_21 23
#define LABEL_17 25
#define LABEL_18 27
#define TAG_19 12
#define LABEL_29 29
#define LABEL_24 31
#define TAG_25 14
#define LABEL_22 33
#define TAG_23 15
#define LABEL_27 35
#define TAG_28 16
#define LABEL_30 37
#define LABEL_31 39
#define LABEL_32 41
#define ENVIRONMENT_LABEL_3 74
#define DEBUGGING_LABEL_2 73
#define PURIFICATION_ROOT 72
#define OBJECT_19 71
#define OBJECT_18 70
#define OBJECT_17 69
#define OBJECT_16 68
#define OBJECT_15 67
#define OBJECT_14 66
#define OBJECT_13 65
#define OBJECT_12 64
#define OBJECT_11 63
#define OBJECT_10 62
#define OBJECT_9 61
#define OBJECT_8 60
#define OBJECT_7 59
#define OBJECT_6 58
#define OBJECT_5 57
#define OBJECT_4 56
#define OBJECT_3 55
#define OBJECT_2 54
#define OBJECT_1 53
#define OBJECT_0 52
#define EXECUTE_CACHE_26 43
#define EXECUTE_CACHE_9 45
#define FREE_REFERENCE_0 48
#define GLOBAL_EXECUTE_CACHE_5 50
#define FREE_REFERENCES_LABEL_0 42
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
cfg2_so_cd3782f82b758e0f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_8);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto with_new_node_marks_37;

    case 8:
      current_block = (Rpc - LABEL_20);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto make_generation_38;

    case 10:
      current_block = (Rpc - LABEL_21);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_26;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto node_markedP_39;

    case 13:
      current_block = (Rpc - LABEL_29);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto lambda_41;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto swapB_40;

    case 16:
      current_block = (Rpc - LABEL_27);
      goto node_markB_42;

    case 17:
      current_block = (Rpc - LABEL_30);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_31);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_32);
      goto expression_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_31)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_45)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_44)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	3,
	2,
	0,
	0,
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
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 32)
      goto label_43;
    blocks = (current_block [OBJECT_19]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_43)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_49;
  Wrd13 = Wrd17;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 62))
    goto label_47;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_47;
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  ((Wrd15.pObj) [8]) = (Wrd11.Obj);

DEFLABEL (label_46)
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  ((Wrd18.pObj) [2]) = (Wrd24.Obj);
  ((Wrd18.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  ((Wrd16.pObj) [0]) = (Wrd10.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd22 = Wrd21;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11]), 3);

DEFLABEL (label_47)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_6]);
  (Wrd22.Obj) = (current_block [OBJECT_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (label_33)
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd14.pObj));

DEFLABEL (label_32)
  (Wrd13.Obj) = Rvl;
  goto label_48;

DEFLABEL (with_new_node_marks_37)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (with_new_node_marks_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd58.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22])));
  Rhp += 2;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-1]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd55.pObj)));
  (Rsp [1]) = (Wrd56.Obj);
  Wrd50 = Wrd58;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  ((Wrd50.pObj) [2]) = (Wrd53.Obj);
  ((Wrd50.pObj) [3]) = (Wrd56.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd42 = Wrd41;
  (Wrd43.Obj) = (Rsp [3]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Rsp [3]) = (Wrd59.Obj);
  (Rsp [2]) = (Wrd40.Obj);
  (Rsp [1]) = (Wrd59.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (make_generation_38)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (make_generation_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_52;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd25.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd25.Lng)))
    goto label_52;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));

DEFLABEL (label_51)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd35.pObj) [0]) = (Wrd18.Obj);
  (Wrd37.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd37.Obj);
  goto label_50;

DEFLABEL (label_52)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_34)
  (Wrd18.Obj) = Rvl;
  goto label_51;

DEFLABEL (node_markedP_39)
  CLOSURE_HEADER (LABEL_18);

DEFLABEL (node_markedP_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_57;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_57;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_56)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  if ((Wrd5.Obj) == (Wrd26.Obj))
    goto label_54;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_53;

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_5]);

DEFLABEL (label_53)
DEFLABEL (label_55)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_15]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 2);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_24);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_40)
  CLOSURE_HEADER (LABEL_22);

DEFLABEL (swapB_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd8.pObj) [0]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [0]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  ((Wrd34.pObj) [0]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (node_markB_42)
  CLOSURE_HEADER (LABEL_27);

DEFLABEL (node_markB_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18]), 3);

DEFLABEL (label_59)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_58;
  ((Wrd20.pObj) [2]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_17]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_cfg2_so_cd3782f82b758e0f [32] =
  {
    { "cfg2_so_code_1", 6, cfg2_so_code_1 },
    { "cfg2_so_code_2", 4, cfg2_so_code_2 },
    { "cfg2_so_code_3", 4, cfg2_so_code_3 },
    { "cfg2_so_code_4", 2, cfg2_so_code_4 },
    { "cfg2_so_code_5", 2, cfg2_so_code_5 },
    { "cfg2_so_code_6", 2, cfg2_so_code_6 },
    { "cfg2_so_code_7", 4, cfg2_so_code_7 },
    { "cfg2_so_code_8", 2, cfg2_so_code_8 },
    { "cfg2_so_code_9", 3, cfg2_so_code_9 },
    { "cfg2_so_code_10", 3, cfg2_so_code_10 },
    { "cfg2_so_code_11", 2, cfg2_so_code_11 },
    { "cfg2_so_code_12", 2, cfg2_so_code_12 },
    { "cfg2_so_code_13", 3, cfg2_so_code_13 },
    { "cfg2_so_code_14", 6, cfg2_so_code_14 },
    { "cfg2_so_code_15", 2, cfg2_so_code_15 },
    { "cfg2_so_code_16", 4, cfg2_so_code_16 },
    { "cfg2_so_code_17", 2, cfg2_so_code_17 },
    { "cfg2_so_code_18", 4, cfg2_so_code_18 },
    { "cfg2_so_code_19", 2, cfg2_so_code_19 },
    { "cfg2_so_code_20", 6, cfg2_so_code_20 },
    { "cfg2_so_code_21", 2, cfg2_so_code_21 },
    { "cfg2_so_code_22", 6, cfg2_so_code_22 },
    { "cfg2_so_code_23", 2, cfg2_so_code_23 },
    { "cfg2_so_code_24", 4, cfg2_so_code_24 },
    { "cfg2_so_code_25", 4, cfg2_so_code_25 },
    { "cfg2_so_code_26", 1, cfg2_so_code_26 },
    { "cfg2_so_code_27", 1, cfg2_so_code_27 },
    { "cfg2_so_code_28", 2, cfg2_so_code_28 },
    { "cfg2_so_code_29", 4, cfg2_so_code_29 },
    { "cfg2_so_code_30", 10, cfg2_so_code_30 },
    { "cfg2_so_code_31", 4, cfg2_so_code_31 },
    { "cfg2_so_code_32", 4, cfg2_so_code_32 }
  };

int
decl_cfg2_so_cd3782f82b758e0f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cfg2_so_cd3782f82b758e0f);
  return (0);
}

DECLARE_COMPILED_CODE ("cfg2.so", 20, decl_cfg2_so_cd3782f82b758e0f, cfg2_so_cd3782f82b758e0f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cfg2_so_data_cd3782f82b758e0f [3111] =
  "\x4b\x34\x95\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x82\x85\xc2\xb9"
  "\x86\x28\x0d\xba\x28\x0d\xbb\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\xb1\x82"
  "\x0d\xbd\x24\x28\x0d\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\xb1\x85\xb5\x24\x28\xb3\x28"
  "\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0"
  "\x84\x88\xb1\x85\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d"
  "\xb0\x85\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\xb1\x86\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\xb1\x86"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x28\xb3\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x85"
  "\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x85\x28\xb3\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbb\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x86\xb5\x24\x28\x0d\xbd"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x02\xb1\x86\x0d\x0d\x24\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\xb1\x85\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\xb1\x80\xc1\x1c\x07\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb1\x80"
  "\x1b\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x80\x1b\x08\x1b\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\xb1\x80\x1b\x08\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xb1\x80\x1b\x0c\x08\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x80"
  "\xb1\x85\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x07\x02\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\xb1\x80\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x0d\x1c\x25\x0d\x1c\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x25\x1b\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x1b\x25\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x25"
  "\x1b\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb8\x17\x1c\x88\x1b\xc3\x1d\xb1\x81\x0d\x1c\x0d\xb9\x80\xc3"
  "\x0d\x1c\xc3\x1b\x1b\x02\x07\x1b\xb1\x1b\x0d\x0d\x0d\x1b\x0d\x9f"
  "\x1e\x1e\x1e\xb0\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x9f\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x0d\x1b\x1b\x0d\x0d"
  "\x1b\x1b\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a\xb6\x2a\xb7"
  "\x2a\xb4\x2a\x17\x28\x0d\x26\x0d\x24\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2f\x62\x61\x73\x65\x2f\x63\x66\x67\x32\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x03\x18\x65\x64\x67\x65\x73\x2d\x64\x69\x73\x63\x6f\x6e\x6e"
  "\x65\x63\x74\x2d\x72\x69\x67\x68\x74\x21\x04\x15\x65\x64\x67\x65"
  "\x73\x2d\x72\x65\x70\x6c\x61\x63\x65\x2d\x72\x69\x67\x68\x74\x21"
  "\x03\x11\x65\x64\x67\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63"
  "\x74\x21\x04\x1a\x0e\x81\x85\x02\x19\x0c\x81\x89\x02\x18\x0a\x81"
  "\x87\x02\x17\x08\x81\x85\x02\x16\x06\x81\x83\x02\x15\x04\x83\x04"
  "\x0d\x1b\x02\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65"
  "\x78\x74\x2d\x65\x64\x67\x65\x21\x02\x04\x14\x65\x64\x67\x65\x2d"
  "\x72\x65\x70\x6c\x61\x63\x65\x2d\x72\x69\x67\x68\x74\x21\x05\x0d"
  "\x63\x72\x65\x61\x74\x65\x2d\x65\x64\x67\x65\x21\x03\x1e\x0a\x81"
  "\x87\x02\x1d\x08\x81\x87\x02\x1c\x06\x81\x85\x02\x1b\x04\x84\x06"
  "\x09\x15\x02\x02\x04\x05\x03\x22\x0a\x81\x87\x02\x21\x08\x81\x85"
  "\x02\x20\x06\x81\x89\x02\x1f\x04\x84\x06\x09\x15\x02\x03\x02\x24"
  "\x06\x81\x83\x02\x23\x04\x83\x04\x05\x0d\x02\x03\x07\x73\x6e\x6f"
  "\x64\x65\x3f\x09\x03\x1a\x70\x6e\x6f\x64\x65\x2d\x64\x69\x73\x63"
  "\x6f\x6e\x6e\x65\x63\x74\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x0a"
  "\x03\x1a\x73\x6e\x6f\x64\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x0b\x04\x26\x06\x81"
  "\x83\x02\x25\x04\x83\x04\x05\x0f\x0c\x02\x02\x03\x16\x65\x64\x67"
  "\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x6c\x65\x66"
  "\x74\x21\x0d\x02\x28\x06\x81\x83\x02\x27\x04\x83\x04\x05\x0e\x0e"
  "\x02\x08\x02\x08\x03\x0d\x02\x2c\x0a\x81\x83\x02\x2b\x08\x81\x85"
  "\x02\x2a\x06\x83\x04\x29\x04\x81\x83\x02\x09\x13\x0d\x02\x09\x03"
  "\x09\x04\x0f\x70\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63\x65"
  "\x21\x0f\x04\x0f\x73\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63"
  "\x65\x21\x10\x04\x2e\x06\x81\x85\x02\x2d\x04\x84\x06\x05\x0f\x11"
  "\x02\x0a\x04\x04\x17\x73\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61"
  "\x63\x65\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x12\x03\x31\x08\x81"
  "\x85\x02\x30\x06\x81\x89\x02\x2f\x04\x84\x06\x07\x11\x13\x02\x0b"
  "\x04\x04\x17\x70\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63\x65"
  "\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x14\x03\x34\x08\x81\x85\x02"
  "\x33\x06\x81\x89\x02\x32\x04\x84\x06\x07\x11\x15\x02\x0c\x04\x02"
  "\x36\x06\x81\x85\x02\x35\x04\x84\x06\x05\x0d\x02\x0d\x03\x09\x04"
  "\x14\x04\x12\x04\x38\x06\x81\x85\x02\x37\x04\x84\x06\x05\x0f\x09"
  "\x02\x0e\x02\x02\x05\x13\x65\x64\x67\x65\x2d\x72\x65\x70\x6c\x61"
  "\x63\x65\x2d\x6c\x65\x66\x74\x21\x02\x3b\x08\x81\x87\x02\x3a\x06"
  "\x81\x85\x02\x39\x04\x84\x06\x07\x12\x16\x02\x0f\x02\x08\x1c\x73"
  "\x65\x74\x2d\x70\x6e\x6f\x64\x65\x2d\x61\x6c\x74\x65\x72\x6e\x61"
  "\x74\x69\x76\x65\x2d\x65\x64\x67\x65\x21\x1b\x73\x65\x74\x2d\x70"
  "\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x2d"
  "\x65\x64\x67\x65\x21\x03\x05\x02\x41\x0e\x81\x87\x02\x40\x0c\x81"
  "\x87\x02\x3f\x0a\x81\x85\x02\x3e\x08\x81\x87\x02\x3d\x06\x84\x06"
  "\x3c\x04\x81\x85\x02\x0d\x1a\x02\x10\x03\x09\x65\x64\x67\x65\x73"
  "\x3d\x30\x3f\x17\x02\x43\x06\x81\x83\x02\x42\x04\x83\x04\x05\x0d"
  "\x18\x02\x11\x04\x63\x64\x72\x19\x04\x63\x61\x72\x1a\x03\x17\x02"
  "\x47\x0a\x81\x83\x02\x46\x08\x81\x83\x02\x45\x06\x81\x83\x02\x44"
  "\x04\x83\x04\x09\x15\x1b\x02\x12\x03\x09\x65\x64\x67\x65\x73\x3e"
  "\x30\x3f\x1c\x02\x49\x06\x81\x83\x02\x48\x04\x83\x04\x05\x0d\x1d"
  "\x02\x13\x19\x1a\x03\x1c\x02\x4d\x0a\x81\x83\x02\x4c\x08\x81\x83"
  "\x02\x4b\x06\x81\x83\x02\x4a\x04\x83\x04\x09\x15\x1e\x02\x14\x03"
  "\x09\x65\x64\x67\x65\x73\x3d\x31\x3f\x1f\x02\x4f\x06\x81\x83\x02"
  "\x4e\x04\x83\x04\x05\x0d\x20\x02\x15\x19\x1a\x1f\x17\x03\x55\x0e"
  "\x81\x85\x02\x54\x0c\x81\x83\x02\x53\x0a\x81\x83\x02\x52\x08\x81"
  "\x83\x02\x51\x06\x81\x83\x02\x50\x04\x83\x04\x0d\x18\x21\x02\x16"
  "\x03\x09\x65\x64\x67\x65\x73\x3e\x31\x3f\x22\x02\x57\x06\x81\x83"
  "\x02\x56\x04\x83\x04\x05\x0d\x23\x02\x17\x19\x1a\x22\x1c\x03\x5d"
  "\x0e\x81\x85\x02\x5c\x0c\x81\x83\x02\x5b\x0a\x81\x83\x02\x5a\x08"
  "\x81\x83\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x0d\x18\x24\x02"
  "\x18\x03\x11\x65\x64\x67\x65\x73\x2d\x66\x69\x72\x73\x74\x2d\x6e"
  "\x6f\x64\x65\x25\x02\x5f\x06\x81\x83\x02\x5e\x04\x83\x04\x05\x0d"
  "\x26\x02\x19\x19\x1a\x0e\x4e\x6f\x20\x66\x69\x72\x73\x74\x20\x68"
  "\x6f\x6f\x6b\x03\x06\x65\x72\x72\x6f\x72\x03\x25\x03\x63\x0a\x81"
  "\x85\x02\x62\x08\x81\x83\x02\x61\x06\x81\x83\x02\x60\x04\x83\x04"
  "\x09\x17\x1a\x02\x1a\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x19\x02\x67\x0a\x81\x85\x02\x66\x08\x81\x85\x02\x65\x06\x81\x85"
  "\x02\x64\x04\x84\x06\x09\x13\x27\x02\x1b\x0d\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x21\x28\x02\x08\x68\x04\x83\x04\x03\x0a"
  "\x29\x02\x1c\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x2a"
  "\x08\x69\x04\x83\x04\x03\x2b\x02\x1d\x2a\x08\x6b\x06\x81\x83\x02"
  "\x6a\x04\x83\x04\x05\x0c\x2a\x02\x1e\x0d\x2a\x6e\x6f\x6f\x70\x2d"
  "\x6e\x6f\x64\x65\x73\x2a\x2c\x02\x0e\x6e\x6f\x6f\x70\x2d\x6e\x6f"
  "\x64\x65\x2d\x74\x61\x67\x2d\x2c\x03\x6f\x0a\x81\x83\x02\x6e\x08"
  "\x81\x83\x02\x6d\x06\x81\x81\x02\x6c\x04\x82\x02\x09\x12\x2e\x02"
  "\x1f\x02\x2c\x02\x2c\x0e\x73\x6e\x6f\x64\x65\x2d\x64\x65\x6c\x65"
  "\x74\x65\x21\x2f\x03\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x30\x04\x19\x03\x79\x16\x81"
  "\x83\x02\x78\x14\x81\x87\x02\x77\x12\x81\x85\x02\x76\x10\x81\x83"
  "\x02\x75\x0e\x81\x83\x02\x74\x0c\x81\x85\x02\x73\x0a\x81\x83\x02"
  "\x72\x08\x81\x83\x02\x71\x06\x81\x83\x02\x70\x04\x83\x04\x15\x24"
  "\x19\x02\x20\x2c\x02\x2d\x2c\x03\x03\x12\x73\x6e\x6f\x64\x65\x2d"
  "\x3e\x70\x63\x66\x67\x2d\x66\x61\x6c\x73\x65\x02\x7d\x0a\x81\x83"
  "\x02\x7c\x08\x81\x83\x02\x7b\x06\x81\x81\x02\x7a\x04\x82\x02\x09"
  "\x15\x31\x02\x21\x2c\x02\x2d\x2c\x03\x03\x11\x73\x6e\x6f\x64\x65"
  "\x2d\x3e\x70\x63\x66\x67\x2d\x74\x72\x75\x65\x02\x81\x01\x0a\x81"
  "\x83\x02\x80\x01\x08\x81\x83\x02\x7f\x06\x81\x81\x02\x7e\x04\x82"
  "\x02\x09\x15\x21\x32\x32\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65"
  "\x74\x21\x02\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x32\x0d"
  "\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x13\x6c\x65\x78"
  "\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14"
  "\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61"
  "\x72\x6b\x73\x33\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x2d\x28\x08\x32\x33\x0f\x6d\x61\x6b\x65\x2d"
  "\x74\x72\x75\x65\x2d\x70\x63\x66\x67\x10\x6d\x61\x6b\x65\x2d\x66"
  "\x61\x6c\x73\x65\x2d\x70\x63\x66\x67\x13\x63\x6c\x65\x61\x6e\x75"
  "\x70\x2d\x6e\x6f\x6f\x70\x2d\x6e\x6f\x64\x65\x73\x2c\x0f\x6d\x61"
  "\x6b\x65\x2d\x6e\x6f\x6f\x70\x2d\x6e\x6f\x64\x65\x04\x31\x04\x19"
  "\x04\x2e\x04\x05\x6e\x6f\x6f\x70\x0f\x63\x66\x67\x2d\x6e\x6f\x64"
  "\x65\x2f\x6e\x6f\x6f\x70\x3f\x13\x63\x66\x67\x2d\x6e\x6f\x64\x65"
  "\x2d\x74\x61\x67\x2f\x6e\x6f\x6f\x70\x3f\x13\x63\x66\x67\x2d\x6e"
  "\x6f\x64\x65\x2d\x74\x61\x67\x2f\x6e\x6f\x6f\x70\x21\x17\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x2d"
  "\x6e\x6f\x64\x65\x25\x14\x6e\x6f\x64\x65\x2d\x70\x72\x65\x76\x69"
  "\x6f\x75\x73\x2d\x66\x69\x72\x73\x74\x22\x11\x6e\x6f\x64\x65\x2d"
  "\x70\x72\x65\x76\x69\x6f\x75\x73\x3e\x31\x3f\x1f\x11\x6e\x6f\x64"
  "\x65\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x3d\x31\x3f\x1c\x11\x6e"
  "\x6f\x64\x65\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x3e\x30\x3f\x17"
  "\x11\x6e\x6f\x64\x65\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x3d\x30"
  "\x3f\x14\x12\x16\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63\x65"
  "\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x17\x6e\x6f\x64\x65\x2d\x72"
  "\x65\x70\x6c\x61\x63\x65\x2d\x6f\x6e\x2d\x72\x69\x67\x68\x74\x21"
  "\x0f\x10\x0e\x6e\x6f\x64\x65\x2d\x72\x65\x70\x6c\x61\x63\x65\x21"
  "\x0a\x0b\x19\x6e\x6f\x64\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x2d\x6f\x6e\x2d\x6c\x65\x66\x74\x21\x1a\x6e\x6f\x64\x65"
  "\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74\x2d\x6f\x6e\x2d\x72"
  "\x69\x67\x68\x74\x21\x13\x6e\x6f\x64\x65\x2d\x69\x6e\x73\x65\x72"
  "\x74\x2d\x73\x6e\x6f\x64\x65\x21\x13\x65\x64\x67\x65\x2d\x69\x6e"
  "\x73\x65\x72\x74\x2d\x73\x6e\x6f\x64\x65\x21\x2f\x1d\x2a\x04\x2b"
  "\x04\x29\x04\x27\x04\x1a\x04\x26\x04\x24\x04\x23\x04\x21\x04\x20"
  "\x04\x1e\x04\x1d\x04\x1b\x04\x18\x04\x06\x16\x04\x09\x04\x04\x15"
  "\x04\x13\x04\x11\x04\x0d\x06\x0e\x04\x0c\x04\x04\x04\x04\x04\x1d"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x0a\x73\x6e\x6f\x64\x65\x2d\x74\x61\x67\x02\x05\x10\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x05\x30"
  "\x03\x14\x2a\x80\x80\x04\x13\x28\x81\x81\x02\x12\x26\x81\x81\x02"
  "\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e"
  "\x1e\x81\x85\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x87\x02\x0b\x18"
  "\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81"
  "\x85\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x87"
  "\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81\x8b\x02"
  "\x01\x04\x81\x83\x02\x29\x4b";

SCHEME_OBJECT *
cfg2_so_data_cd3782f82b758e0f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cfg2_so_data_cd3782f82b758e0f [0]))), (sizeof (prog_cfg2_so_data_cd3782f82b758e0f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("cfg2.so", cfg2_so_data_cd3782f82b758e0f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cfg2.so", "4bed83c6eb19ba2f")
