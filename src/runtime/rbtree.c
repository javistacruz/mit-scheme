/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto tree_root_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tree_root_3)
DEFLABEL (tree_root_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto tree_key_P_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tree_key_P_3)
DEFLABEL (tree_key_P_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto tree_key_P_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tree_key_P_3)
DEFLABEL (tree_key_P_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define OBJECT_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto set_tree_rootB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_tree_rootB_3)
DEFLABEL (set_tree_rootB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_4_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define ENVIRONMENT_LABEL_5_3 17
#define DEBUGGING_LABEL_5_2 16
#define OBJECT_5_3 15
#define OBJECT_5_2 14
#define OBJECT_5_1 13
#define OBJECT_5_0 12
#define FREE_REFERENCE_5_0 11
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto rb_treeP_4;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_treeP_10)
DEFLABEL (rb_treeP_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
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
  Rvl = (current_block [OBJECT_5_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_5_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_11 11
#define LABEL_6_13 13
#define LABEL_6_14 15
#define LABEL_6_12 17
#define LABEL_6_10 19
#define LABEL_6_8 21
#define LABEL_6_6 23
#define ENVIRONMENT_LABEL_6_3 37
#define DEBUGGING_LABEL_6_2 36
#define OBJECT_6_2 35
#define OBJECT_6_1 34
#define OBJECT_6_0 33
#define EXECUTE_CACHE_6_15 25
#define FREE_REFERENCE_6_4 28
#define FREE_REFERENCE_6_3 29
#define FREE_REFERENCE_6_2 30
#define FREE_REFERENCE_6_1 31
#define FREE_REFERENCE_6_0 32
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  double Dbl9;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  double Dbl7;
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
      goto make_rb_tree_12;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto lambda_10;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_11;

    case 8:
      current_block = (Rpc - LABEL_6_10);
      goto lambda_4;

    case 9:
      current_block = (Rpc - LABEL_6_8);
      goto lambda_5;

    case 10:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_rb_tree_20)
DEFLABEL (make_rb_tree_12)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_44;
  Wrd6 = Wrd10;

DEFLABEL (label_43)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_42;
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_41;
  Wrd14 = Wrd18;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == (Wrd14.Obj))
    goto label_39;
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_38;
  Wrd22 = Wrd26;

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_27;
  Wrd29 = Wrd28;
  goto label_26;

DEFLABEL (label_27)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));

DEFLABEL (label_26)
DEFLABEL (label_36)
  (Rsp [0]) = (Wrd29.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_35;
  Wrd31 = Wrd35;

DEFLABEL (label_34)
  (Wrd37.Obj) = (Rsp [1]);
  if ((Wrd37.Obj) == (Wrd31.Obj))
    goto label_33;
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_4]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_32;
  Wrd39 = Wrd43;

DEFLABEL (label_31)
  (Wrd45.Obj) = (Rsp [1]);
  if ((Wrd45.Obj) == (Wrd39.Obj))
    goto label_29;
  Wrd46 = Wrd45;
  goto label_28;

DEFLABEL (label_29)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));

DEFLABEL (label_28)
DEFLABEL (label_30)
  (Rsp [1]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_13])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  goto label_30;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_11])), (Wrd32.pObj));

DEFLABEL (label_17)
  (Wrd31.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_9])), (Wrd23.pObj));

DEFLABEL (label_16)
  (Wrd22.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_7])), (Wrd15.pObj));

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  goto label_36;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd7.pObj));

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_6_14);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_46)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_45;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl7 < Dbl9)
    goto label_48;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_47)
DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_6_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd7.Lng) < (Wrd9.Lng))
    goto label_51;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (label_51)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_50)
DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_23)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_6_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 6)
    goto label_54;

DEFLABEL (label_53)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_54)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 6))
    goto label_53;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd14.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd12.Obj));
  if (Dbl7 == Dbl9)
    goto label_56;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_55;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_55)
DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_24)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_6_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (Wrd7.Obj))
    goto label_59;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_58;

DEFLABEL (label_59)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_58)
DEFLABEL (label_60)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_25)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (Wrd7.Obj))
    goto label_62;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_61;

DEFLABEL (label_62)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_61)
DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_1 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto guarantee_rb_tree_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_rb_tree_4)
DEFLABEL (guarantee_rb_tree_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
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
rbtree_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto node_key_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_key_3)
DEFLABEL (node_key_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto node_datum_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_datum_3)
DEFLABEL (node_datum_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto node_up_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_up_3)
DEFLABEL (node_up_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto node_left_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_left_3)
DEFLABEL (node_left_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto node_right_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_right_3)
DEFLABEL (node_right_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto node_color_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_color_3)
DEFLABEL (node_color_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define OBJECT_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto set_node_keyB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_keyB_3)
DEFLABEL (set_node_keyB_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto set_node_datumB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_datumB_3)
DEFLABEL (set_node_datumB_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto set_node_upB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_upB_3)
DEFLABEL (set_node_upB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto set_node_leftB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_leftB_3)
DEFLABEL (set_node_leftB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto set_node_rightB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_rightB_3)
DEFLABEL (set_node_rightB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto set_node_colorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_colorB_3)
DEFLABEL (set_node_colorB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_3 15
#define OBJECT_20_2 14
#define OBJECT_20_1 13
#define OBJECT_20_0 12
#define FREE_REFERENCE_20_0 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nodeP_10)
DEFLABEL (nodeP_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
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
  Rvl = (current_block [OBJECT_20_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_20_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
rbtree_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto b__d_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (b__d_3)
DEFLABEL (b__d_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_21_1]);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_21_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
rbtree_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__d_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__d_4)
DEFLABEL (Z__d_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_6;
  Rvl = (Wrd5.Obj);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_22_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 9
#define DEBUGGING_LABEL_23_2 8
#define OBJECT_23_3 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_23_4);
      goto get_link__1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_link__4)
DEFLABEL (get_link__1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_23_0]))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_23_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_6)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_5;
  Rvl = ((Wrd15.pObj) [6]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd20.Obj) = (current_block [OBJECT_23_1]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_5;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_5;
  Rvl = ((Wrd28.pObj) [5]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 10
#define DEBUGGING_LABEL_24_2 9
#define OBJECT_24_4 8
#define OBJECT_24_3 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_24_4);
      goto set_link_B_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_link_B_4)
DEFLABEL (set_link_B_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_24_0]))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_24_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 3);

DEFLABEL (label_6)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_5;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [6]) = (Wrd11.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_24_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_24_1]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_5;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_5;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [5]) = (Wrd25.Obj);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 9
#define DEBUGGING_LABEL_25_2 8
#define OBJECT_25_3 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_25_4);
      goto get_link__1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_link__4)
DEFLABEL (get_link__1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_25_0]))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_25_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_6)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_5;
  Rvl = ((Wrd15.pObj) [6]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd20.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_5;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_5;
  Rvl = ((Wrd28.pObj) [5]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 10
#define DEBUGGING_LABEL_26_2 9
#define OBJECT_26_4 8
#define OBJECT_26_3 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_26_4);
      goto set_link_B_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_link_B_4)
DEFLABEL (set_link_B_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (current_block [OBJECT_26_0]))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_26_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_4]), 3);

DEFLABEL (label_6)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_5;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [6]) = (Wrd11.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_26_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_5;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_5;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [5]) = (Wrd25.Obj);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_6 5
#define LABEL_27_7 7
#define LABEL_27_8 9
#define LABEL_27_9 11
#define LABEL_27_4 13
#define LABEL_27_10 15
#define LABEL_27_11 17
#define LABEL_27_12 19
#define LABEL_27_13 21
#define LABEL_27_14 23
#define LABEL_27_15 25
#define LABEL_27_16 27
#define LABEL_27_17 29
#define LABEL_27_18 31
#define LABEL_27_19 33
#define LABEL_27_20 35
#define LABEL_27_21 37
#define ENVIRONMENT_LABEL_27_3 48
#define DEBUGGING_LABEL_27_2 47
#define OBJECT_27_8 46
#define OBJECT_27_7 45
#define OBJECT_27_6 44
#define OBJECT_27_5 43
#define OBJECT_27_4 42
#define OBJECT_27_3 41
#define OBJECT_27_2 40
#define OBJECT_27_1 39
#define OBJECT_27_0 38
#define FREE_REFERENCES_LABEL_27_0 38
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd118;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd131;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd148;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd111;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd173;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd188;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd105;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd205;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd220;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd190;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd236;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd231;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd251;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd79;
  machine_word Wrd268;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd254;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd258;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd65;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd279;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd297;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd283;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd291;
  machine_word Wrd290;
  machine_word Wrd314;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd300;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd308;
  machine_word Wrd307;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd331;
  machine_word Wrd328;
  machine_word Wrd327;
  machine_word Wrd316;
  machine_word Wrd324;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd348;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd333;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd343;
  machine_word Wrd342;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd87;
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
      current_block = (Rpc - LABEL_27_5);
      goto continuation_12;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_27_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_27_4);
      goto rotate_B_20;

    case 6:
      current_block = (Rpc - LABEL_27_10);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_27_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_27_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_27_13);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_27_14);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_27_15);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_27_16);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_27_17);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_27_18);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_27_19);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_27_20);
      goto label_27;

    case 17:
      current_block = (Rpc - LABEL_27_21);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rotate_B_35)
DEFLABEL (rotate_B_20)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_27_0]))
    goto label_73;
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_72;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_72;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_70)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  if ((Wrd34.Obj) == (current_block [OBJECT_27_4]))
    goto label_67;
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_66;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd44.Lng))))
    goto label_66;
  (Wrd36.Obj) = ((Wrd42.pObj) [6]);

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_64)
  (Wrd53.Obj) = (Rsp [5]);
  if ((Wrd53.Obj) == (current_block [OBJECT_27_0]))
    goto label_62;
  (Wrd290.Obj) = (Rsp [4]);
  (Wrd291.uLng) = (OBJECT_TYPE (Wrd290.Obj));
  if (! ((Wrd291.uLng) == 62))
    goto label_61;
  (Wrd287.pObj) = (OBJECT_ADDRESS (Wrd290.Obj));
  (Wrd288.Obj) = ((Wrd287.pObj) [0]);
  (Wrd289.Lng) = (FIXNUM_TO_LONG (Wrd288.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd289.Lng))))
    goto label_61;
  (Wrd283.Obj) = (Rsp [0]);
  ((Wrd287.pObj) [6]) = (Wrd283.Obj);

DEFLABEL (label_60)
  (Wrd54.Obj) = (Rsp [0]);
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd56.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd58.Obj);
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd279.uLng) == 62)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_37)
  (Wrd275.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd276.Obj) = ((Wrd275.pObj) [0]);
  (Wrd277.Lng) = (FIXNUM_TO_LONG (Wrd276.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd277.Lng))))
    goto label_36;
  ((Wrd275.pObj) [4]) = (Wrd58.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_58)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 62))
    goto label_57;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_57;
  (Wrd65.Obj) = ((Wrd69.pObj) [4]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_56)
  (Wrd261.Obj) = (Rsp [2]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if (! ((Wrd262.uLng) == 62))
    goto label_55;
  (Wrd258.pObj) = (OBJECT_ADDRESS (Wrd261.Obj));
  (Wrd259.Obj) = ((Wrd258.pObj) [0]);
  (Wrd260.Lng) = (FIXNUM_TO_LONG (Wrd259.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd260.Lng))))
    goto label_55;
  (Wrd254.Obj) = (Rsp [0]);
  ((Wrd258.pObj) [4]) = (Wrd254.Obj);

DEFLABEL (label_54)
  (Wrd79.Obj) = (Rsp [0]);
  if ((Wrd79.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd85.Obj) = (Rsp [6]);
  if ((Wrd85.Obj) == (current_block [OBJECT_27_4]))
    goto label_51;
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd97.uLng) == 62))
    goto label_49;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd95.Lng))))
    goto label_49;
  (Wrd87.Obj) = ((Wrd93.pObj) [6]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_47)
  (Wrd103.Obj) = (Rsp [4]);
  if ((Wrd103.Obj) == (Wrd87.Obj))
    goto label_45;
  (Wrd105.Obj) = (Rsp [5]);
  if ((Wrd105.Obj) == (current_block [OBJECT_27_0]))
    goto label_44;
  (Wrd106.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd107.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd108.Obj);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd173.uLng) == 62))
    goto label_36;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (Wrd171.Lng) = (FIXNUM_TO_LONG (Wrd170.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd171.Lng))))
    goto label_36;
  ((Wrd169.pObj) [6]) = (Wrd108.Obj);

DEFLABEL (label_43)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_42)
  (Wrd111.Obj) = (Rsp [3]);
  if ((Wrd111.Obj) == (current_block [OBJECT_27_4]))
    goto label_40;
  (Wrd138.Obj) = (Rsp [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 62))
    goto label_39;
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd136.Obj) = ((Wrd135.pObj) [0]);
  (Wrd137.Lng) = (FIXNUM_TO_LONG (Wrd136.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd137.Lng))))
    goto label_39;
  (Wrd131.Obj) = (Rsp [2]);
  ((Wrd135.pObj) [6]) = (Wrd131.Obj);

DEFLABEL (label_38)
  (Wrd112.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd112.Obj);
  (Wrd113.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd113.Obj);
  (Wrd114.Obj) = (current_block [OBJECT_27_6]);
  (Rsp [2]) = (Wrd114.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd126.Obj) = (Rsp [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 62))
    goto label_36;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd125.Lng))))
    goto label_36;
  (Wrd118.Obj) = (Rsp [2]);
  ((Wrd123.pObj) [4]) = (Wrd118.Obj);
  Rvl = (current_block [OBJECT_27_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd140.Obj) = (Rsp [0]);
  (Wrd141.Obj) = (current_block [OBJECT_27_3]);
  (Wrd142.Obj) = (Rsp [2]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_26)
  goto label_38;

DEFLABEL (label_40)
  (Wrd155.Obj) = (Rsp [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if (! ((Wrd156.uLng) == 62))
    goto label_41;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd154.Lng))))
    goto label_41;
  (Wrd148.Obj) = (Rsp [2]);
  ((Wrd152.pObj) [5]) = (Wrd148.Obj);
  goto label_38;

DEFLABEL (label_41)
  (Wrd157.Obj) = (Rsp [0]);
  (Wrd158.Obj) = (current_block [OBJECT_27_1]);
  (Wrd159.Obj) = (Rsp [2]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_20]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_27)
  goto label_38;

DEFLABEL (label_44)
  (Wrd174.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd174.Obj);
  (Wrd175.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd175.Obj);
  (Wrd176.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd176.Obj);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd188.uLng) == 62))
    goto label_36;
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd185.Obj) = ((Wrd184.pObj) [0]);
  (Wrd186.Lng) = (FIXNUM_TO_LONG (Wrd185.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd186.Lng))))
    goto label_36;
  ((Wrd184.pObj) [5]) = (Wrd176.Obj);
  goto label_43;

DEFLABEL (label_45)
  (Wrd190.Obj) = (Rsp [5]);
  if ((Wrd190.Obj) == (current_block [OBJECT_27_4]))
    goto label_46;
  (Wrd191.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd192.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd192.Obj);
  (Wrd193.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd193.Obj);
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd205.uLng) == 62))
    goto label_36;
  (Wrd201.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd202.Obj) = ((Wrd201.pObj) [0]);
  (Wrd203.Lng) = (FIXNUM_TO_LONG (Wrd202.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd203.Lng))))
    goto label_36;
  ((Wrd201.pObj) [6]) = (Wrd193.Obj);
  goto label_43;

DEFLABEL (label_46)
  (Wrd206.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd206.Obj);
  (Wrd207.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd207.Obj);
  (Wrd208.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd208.Obj);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd207.Obj));
  if (! ((Wrd220.uLng) == 62))
    goto label_36;
  (Wrd216.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd217.Obj) = ((Wrd216.pObj) [0]);
  (Wrd218.Lng) = (FIXNUM_TO_LONG (Wrd217.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd218.Lng))))
    goto label_36;
  ((Wrd216.pObj) [5]) = (Wrd208.Obj);
  goto label_43;

DEFLABEL (label_49)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.Obj) = (current_block [OBJECT_27_3]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_25)
DEFLABEL (label_50)
  (Wrd87.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd231.uLng) == 62))
    goto label_52;
  (Wrd227.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd228.Obj) = ((Wrd227.pObj) [0]);
  (Wrd229.Lng) = (FIXNUM_TO_LONG (Wrd228.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd229.Lng))))
    goto label_52;
  (Wrd87.Obj) = ((Wrd227.pObj) [5]);
  goto label_48;

DEFLABEL (label_52)
  (Wrd232.Obj) = (Rsp [1]);
  (Wrd233.Obj) = (current_block [OBJECT_27_1]);
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd232.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_28)
  goto label_50;

DEFLABEL (label_53)
  (Wrd237.Obj) = (current_block [OBJECT_27_7]);
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd238.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd238.Obj);
  (Wrd239.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd239.Obj);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd238.Obj));
  if (! ((Wrd251.uLng) == 62))
    goto label_36;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd238.Obj));
  (Wrd248.Obj) = ((Wrd247.pObj) [0]);
  (Wrd249.Lng) = (FIXNUM_TO_LONG (Wrd248.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd249.Lng))))
    goto label_36;
  ((Wrd247.pObj) [2]) = (Wrd239.Obj);
  goto label_43;

DEFLABEL (label_55)
  (Wrd263.Obj) = (Rsp [2]);
  (Wrd264.Obj) = (current_block [OBJECT_27_6]);
  (Wrd265.Obj) = (Rsp [0]);
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd268.Obj);
  (* (--Rsp)) = (Wrd265.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_29)
  goto label_54;

DEFLABEL (label_57)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.Obj) = (current_block [OBJECT_27_6]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  goto label_58;

DEFLABEL (label_61)
  (Wrd292.Obj) = (Rsp [4]);
  (Wrd293.Obj) = (current_block [OBJECT_27_3]);
  (Wrd294.Obj) = (Rsp [0]);
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd294.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd292.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_30)
  goto label_60;

DEFLABEL (label_62)
  (Wrd307.Obj) = (Rsp [4]);
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd307.Obj));
  if (! ((Wrd308.uLng) == 62))
    goto label_63;
  (Wrd304.pObj) = (OBJECT_ADDRESS (Wrd307.Obj));
  (Wrd305.Obj) = ((Wrd304.pObj) [0]);
  (Wrd306.Lng) = (FIXNUM_TO_LONG (Wrd305.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd306.Lng))))
    goto label_63;
  (Wrd300.Obj) = (Rsp [0]);
  ((Wrd304.pObj) [5]) = (Wrd300.Obj);
  goto label_60;

DEFLABEL (label_63)
  (Wrd309.Obj) = (Rsp [4]);
  (Wrd310.Obj) = (current_block [OBJECT_27_1]);
  (Wrd311.Obj) = (Rsp [0]);
  (Wrd314.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd314.Obj);
  (* (--Rsp)) = (Wrd311.Obj);
  (* (--Rsp)) = (Wrd310.Obj);
  (* (--Rsp)) = (Wrd309.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_5]), 3);

DEFLABEL (label_31)
  goto label_60;

DEFLABEL (label_66)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (current_block [OBJECT_27_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_23)
  (Wrd36.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd325.Obj) = (Rsp [2]);
  (Wrd326.uLng) = (OBJECT_TYPE (Wrd325.Obj));
  if (! ((Wrd326.uLng) == 62))
    goto label_69;
  (Wrd322.pObj) = (OBJECT_ADDRESS (Wrd325.Obj));
  (Wrd323.Obj) = ((Wrd322.pObj) [0]);
  (Wrd324.Lng) = (FIXNUM_TO_LONG (Wrd323.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd324.Lng))))
    goto label_69;
  (Wrd316.Obj) = ((Wrd322.pObj) [5]);

DEFLABEL (label_68)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd316.Obj);
  goto label_64;

DEFLABEL (label_69)
  (Wrd327.Obj) = (Rsp [2]);
  (Wrd328.Obj) = (current_block [OBJECT_27_1]);
  (Wrd331.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd331.Obj);
  (* (--Rsp)) = (Wrd328.Obj);
  (* (--Rsp)) = (Wrd327.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_32)
  (Wrd316.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_27_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_22)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd342.Obj) = (Rsp [2]);
  (Wrd343.uLng) = (OBJECT_TYPE (Wrd342.Obj));
  if (! ((Wrd343.uLng) == 62))
    goto label_75;
  (Wrd339.pObj) = (OBJECT_ADDRESS (Wrd342.Obj));
  (Wrd340.Obj) = ((Wrd339.pObj) [0]);
  (Wrd341.Lng) = (FIXNUM_TO_LONG (Wrd340.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd341.Lng))))
    goto label_75;
  (Wrd333.Obj) = ((Wrd339.pObj) [5]);

DEFLABEL (label_74)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd333.Obj);
  goto label_70;

DEFLABEL (label_75)
  (Wrd344.Obj) = (Rsp [2]);
  (Wrd345.Obj) = (current_block [OBJECT_27_1]);
  (Wrd348.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd348.Obj);
  (* (--Rsp)) = (Wrd345.Obj);
  (* (--Rsp)) = (Wrd344.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_33)
  (Wrd333.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd87.Obj) = Rvl;
  goto label_47;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_6);
  goto label_42;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_27_8);
  goto label_58;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_9);
  (* (--Rsp)) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 10
#define DEBUGGING_LABEL_28_2 9
#define OBJECT_28_1 8
#define OBJECT_28_0 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto rotate_B_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rotate_B_5)
DEFLABEL (rotate_B_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (current_block [OBJECT_28_0]);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_7;
  Wrd7 = Wrd5;
  goto label_6;

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_28_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_5 7
#define LABEL_29_9 9
#define LABEL_29_10 11
#define LABEL_29_11 13
#define LABEL_29_12 15
#define LABEL_29_16 17
#define LABEL_29_15 19
#define LABEL_29_18 21
#define LABEL_29_13 23
#define LABEL_29_20 25
#define LABEL_29_17 27
#define LABEL_29_21 29
#define LABEL_29_22 31
#define LABEL_29_19 33
#define LABEL_29_23 35
#define LABEL_29_24 37
#define LABEL_29_25 39
#define LABEL_29_26 41
#define LABEL_29_27 43
#define LABEL_29_28 45
#define LABEL_29_30 47
#define ENVIRONMENT_LABEL_29_3 75
#define DEBUGGING_LABEL_29_2 74
#define OBJECT_29_14 73
#define OBJECT_29_13 72
#define OBJECT_29_12 71
#define OBJECT_29_11 70
#define OBJECT_29_10 69
#define OBJECT_29_9 68
#define OBJECT_29_8 67
#define OBJECT_29_7 66
#define OBJECT_29_6 65
#define OBJECT_29_5 64
#define OBJECT_29_4 63
#define OBJECT_29_3 62
#define OBJECT_29_2 61
#define OBJECT_29_1 60
#define OBJECT_29_0 59
#define EXECUTE_CACHE_29_29 49
#define EXECUTE_CACHE_29_14 51
#define EXECUTE_CACHE_29_8 53
#define EXECUTE_CACHE_29_6 55
#define FREE_REFERENCE_29_0 58
#define FREE_REFERENCES_LABEL_29_0 48
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd44;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd24;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
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
  machine_word Wrd16;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
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
      goto rb_tree_insertB_25;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto loop_22;

    case 7:
      current_block = (Rpc - LABEL_29_16);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_29_18);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_29_20);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_29_21);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_29_22);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_29_19);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_29_23);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_29_24);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_29_25);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_29_26);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_29_27);
      goto label_35;

    case 21:
      current_block = (Rpc - LABEL_29_28);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_29_30);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_insertB_41)
DEFLABEL (rb_tree_insertB_25)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);

DEFLABEL (label_49)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_48;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_48;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_47)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_46;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_46;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_45)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_44;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_44;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_43)
  goto loop_22;

DEFLABEL (label_44)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.Obj) = (current_block [OBJECT_29_5]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_29_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_29_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (loop_42)
DEFLABEL (loop_22)
  INTERRUPT_CHECK (26, LABEL_29_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_61;
  Wrd8 = Wrd12;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_19);
  (* (--Rsp)) = Rvl;
  (Wrd91.Obj) = (Rsp [1]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 62))
    goto label_59;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd90.Lng))))
    goto label_59;
  (Wrd84.Obj) = (Rsp [3]);
  ((Wrd88.pObj) [4]) = (Wrd84.Obj);

DEFLABEL (label_58)
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_29_11]))
    goto label_54;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_53;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng))))
    goto label_53;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd37.pObj) [6]) = (Wrd33.Obj);

DEFLABEL (label_52)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_51;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd22.Lng))))
    goto label_51;
  (Wrd16.Obj) = (current_block [OBJECT_29_13]);
  ((Wrd20.pObj) [7]) = (Wrd16.Obj);

DEFLABEL (label_50)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_29]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_8]), 1);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_30);
  Rvl = (current_block [OBJECT_29_6]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_29_14]);
  (Wrd27.Obj) = (current_block [OBJECT_29_13]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_35)
  goto label_50;

DEFLABEL (label_53)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (current_block [OBJECT_29_10]);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_36)
  goto label_52;

DEFLABEL (label_54)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_55;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd56.Lng))))
    goto label_55;
  (Wrd50.Obj) = (Rsp [1]);
  ((Wrd54.pObj) [5]) = (Wrd50.Obj);
  goto label_52;

DEFLABEL (label_55)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (current_block [OBJECT_29_12]);
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_37)
  goto label_52;

DEFLABEL (label_56)
  (Wrd74.Obj) = (Rsp [7]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 62))
    goto label_57;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd73.Lng))))
    goto label_57;
  (Wrd67.Obj) = (Rsp [1]);
  ((Wrd71.pObj) [2]) = (Wrd67.Obj);
  goto label_52;

DEFLABEL (label_57)
  (Wrd76.Obj) = (Rsp [7]);
  (Wrd77.Obj) = (current_block [OBJECT_29_5]);
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_38)
  goto label_52;

DEFLABEL (label_59)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (current_block [OBJECT_29_2]);
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_39)
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_20])), (Wrd9.pObj));

DEFLABEL (label_32)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_74;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_74;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_73)
  (Wrd26.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_4]);
  (Rsp [6]) = (Wrd8.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_7]), 3);

DEFLABEL (label_64)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_63;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_29_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_72;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_72;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_71)
  (Wrd42.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29_11]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_67;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_67;
  (Wrd9.Obj) = ((Wrd15.pObj) [5]);

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_22;

DEFLABEL (label_67)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_29_12]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_33)
  (Wrd9.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_29_9]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_70;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_70;
  (Wrd27.Obj) = ((Wrd33.pObj) [6]);

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd27.Obj);
  goto loop_22;

DEFLABEL (label_70)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (current_block [OBJECT_29_10]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_34)
  (Wrd27.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_29_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_29_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_10 13
#define LABEL_30_11 15
#define LABEL_30_12 17
#define LABEL_30_13 19
#define LABEL_30_14 21
#define LABEL_30_15 23
#define LABEL_30_16 25
#define LABEL_30_17 27
#define LABEL_30_18 29
#define LABEL_30_19 31
#define LABEL_30_20 33
#define LABEL_30_21 35
#define LABEL_30_22 37
#define LABEL_30_23 39
#define LABEL_30_24 41
#define LABEL_30_25 43
#define LABEL_30_27 45
#define LABEL_30_28 47
#define LABEL_30_29 49
#define LABEL_30_30 51
#define LABEL_30_31 53
#define LABEL_30_5 55
#define LABEL_30_32 57
#define ENVIRONMENT_LABEL_30_3 74
#define DEBUGGING_LABEL_30_2 73
#define OBJECT_30_11 72
#define OBJECT_30_10 71
#define OBJECT_30_9 70
#define OBJECT_30_8 69
#define OBJECT_30_7 68
#define OBJECT_30_6 67
#define OBJECT_30_5 66
#define OBJECT_30_4 65
#define OBJECT_30_3 64
#define OBJECT_30_2 63
#define OBJECT_30_1 62
#define OBJECT_30_0 61
#define EXECUTE_CACHE_30_26 59
#define FREE_REFERENCES_LABEL_30_0 58
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd213;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd235;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd241;
  machine_word Wrd212;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd197;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd264;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd250;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd258;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd181;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd191;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd286;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd279;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd281;
  machine_word Wrd280;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd318;
  machine_word Wrd315;
  machine_word Wrd314;
  machine_word Wrd303;
  machine_word Wrd311;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd313;
  machine_word Wrd312;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd321;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd327;
  machine_word Wrd302;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd287;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd350;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd336;
  machine_word Wrd342;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd367;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd353;
  machine_word Wrd359;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd361;
  machine_word Wrd360;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd140;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd150;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd125;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd132;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd108;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd397;
  machine_word Wrd394;
  machine_word Wrd385;
  machine_word Wrd391;
  machine_word Wrd390;
  machine_word Wrd389;
  machine_word Wrd392;
  machine_word Wrd383;
  machine_word Wrd380;
  machine_word Wrd379;
  machine_word Wrd368;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd107;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd398;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
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
  machine_word Wrd163;
  machine_word Wrd180;
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
      goto insert_fixupB_40;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto loop_37;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_30_12);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_30_13);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_30_14);
      goto label_62;

    case 10:
      current_block = (Rpc - LABEL_30_15);
      goto label_63;

    case 11:
      current_block = (Rpc - LABEL_30_16);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_30_17);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_30_18);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_30_19);
      goto label_61;

    case 15:
      current_block = (Rpc - LABEL_30_20);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_30_21);
      goto label_57;

    case 17:
      current_block = (Rpc - LABEL_30_22);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_30_23);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_30_24);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_30_25);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_30_27);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_30_28);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_30_29);
      goto label_52;

    case 24:
      current_block = (Rpc - LABEL_30_30);
      goto label_54;

    case 25:
      current_block = (Rpc - LABEL_30_31);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 27:
      current_block = (Rpc - LABEL_30_32);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insert_fixupB_65)
DEFLABEL (insert_fixupB_40)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_37;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);

DEFLABEL (label_71)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_70;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_70;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd21.Obj) = (current_block [OBJECT_30_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_30_8]);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_68;

DEFLABEL (label_67)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_68)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd33.Lng))))
    goto label_67;
  ((Wrd31.pObj) [7]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_30_11]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (loop_66)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_30_9);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_129;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd44.Lng))))
    goto label_129;
  (Wrd38.Obj) = ((Wrd42.pObj) [4]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_128)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_127;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd62.Lng))))
    goto label_127;
  (Wrd54.Obj) = ((Wrd60.pObj) [7]);

DEFLABEL (label_126)
  if ((Wrd54.Obj) == (current_block [OBJECT_30_3]))
    goto label_73;

DEFLABEL (label_72)
  Rsp = (& (Rsp [3]));
  goto label_71;

DEFLABEL (label_73)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 62))
    goto label_125;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd80.Lng))))
    goto label_125;
  (Wrd72.Obj) = ((Wrd78.pObj) [4]);

DEFLABEL (label_124)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd95.uLng) == 62))
    goto label_123;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd94.Lng))))
    goto label_123;
  (Wrd88.Obj) = ((Wrd92.pObj) [5]);

DEFLABEL (label_122)
  (Wrd101.Obj) = (Rsp [0]);
  if ((Wrd101.Obj) == (Wrd88.Obj))
    goto label_75;
  (Wrd102.Obj) = (current_block [OBJECT_30_6]);
  (* (--Rsp)) = (Wrd102.Obj);
  goto label_74;

DEFLABEL (label_75)
  (Wrd398.Obj) = (current_block [OBJECT_30_5]);
  (* (--Rsp)) = (Wrd398.Obj);

DEFLABEL (label_74)
DEFLABEL (label_121)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd107.Obj) = (Rsp [1]);
  if ((Wrd107.Obj) == (current_block [OBJECT_30_6]))
    goto label_116;
  (Wrd117.Obj) = (Rsp [2]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 62))
    goto label_115;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd116.Lng))))
    goto label_115;
  (Wrd108.Obj) = ((Wrd114.pObj) [4]);

DEFLABEL (label_114)
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd132.uLng) == 62))
    goto label_113;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd131.Lng))))
    goto label_113;
  (Wrd125.Obj) = ((Wrd129.pObj) [6]);

DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd125.Obj);

DEFLABEL (label_111)
  (Wrd138.Obj) = (Rsp [0]);
  if ((Wrd138.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd150.uLng) == 62))
    goto label_110;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd148.Lng))))
    goto label_110;
  (Wrd140.Obj) = ((Wrd146.pObj) [7]);

DEFLABEL (label_109)
  if ((Wrd140.Obj) == (current_block [OBJECT_30_3]))
    goto label_98;

DEFLABEL (label_97)
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd161.Obj) = (Rsp [2]);
  if ((Wrd161.Obj) == (current_block [OBJECT_30_6]))
    goto label_95;
  (Wrd172.Obj) = (Rsp [3]);
  (Wrd173.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if (! ((Wrd173.uLng) == 62))
    goto label_93;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd172.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (Wrd171.Lng) = (FIXNUM_TO_LONG (Wrd170.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd171.Lng))))
    goto label_93;
  (Wrd163.Obj) = ((Wrd169.pObj) [6]);

DEFLABEL (label_92)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_91)
  (Wrd179.Obj) = (Rsp [3]);
  if (! ((Wrd179.Obj) == (Wrd163.Obj)))
    goto label_90;
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (Wrd268.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd268.Obj);
  (Wrd269.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd269.Obj);
  (Wrd270.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd270.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_26]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (Wrd180.Obj) = (Rsp [2]);

DEFLABEL (label_89)
  (Rsp [0]) = (Wrd180.Obj);
  (Wrd191.uLng) = (OBJECT_TYPE (Wrd180.Obj));
  if (! ((Wrd191.uLng) == 62))
    goto label_88;
  (Wrd187.pObj) = (OBJECT_ADDRESS (Wrd180.Obj));
  (Wrd188.Obj) = ((Wrd187.pObj) [0]);
  (Wrd189.Lng) = (FIXNUM_TO_LONG (Wrd188.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd189.Lng))))
    goto label_88;
  (Wrd181.Obj) = ((Wrd187.pObj) [4]);

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd181.Obj);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd258.uLng) == 62))
    goto label_86;
  (Wrd254.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd255.Obj) = ((Wrd254.pObj) [0]);
  (Wrd256.Lng) = (FIXNUM_TO_LONG (Wrd255.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd256.Lng))))
    goto label_86;
  (Wrd250.Obj) = (current_block [OBJECT_30_8]);
  ((Wrd254.pObj) [7]) = (Wrd250.Obj);

DEFLABEL (label_85)
  (Wrd206.Obj) = (Rsp [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if (! ((Wrd207.uLng) == 62))
    goto label_84;
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd206.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (Wrd205.Lng) = (FIXNUM_TO_LONG (Wrd204.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd205.Lng))))
    goto label_84;
  (Wrd197.Obj) = ((Wrd203.pObj) [4]);

DEFLABEL (label_83)
  (Wrd241.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if (! ((Wrd241.uLng) == 62))
    goto label_82;
  (Wrd238.pObj) = (OBJECT_ADDRESS (Wrd197.Obj));
  (Wrd239.Obj) = ((Wrd238.pObj) [0]);
  (Wrd240.Lng) = (FIXNUM_TO_LONG (Wrd239.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd240.Lng))))
    goto label_82;
  (Wrd235.Obj) = (current_block [OBJECT_30_3]);
  ((Wrd238.pObj) [7]) = (Wrd235.Obj);

DEFLABEL (label_81)
  (Wrd222.Obj) = (Rsp [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd223.uLng) == 62))
    goto label_80;
  (Wrd219.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd220.Obj) = ((Wrd219.pObj) [0]);
  (Wrd221.Lng) = (FIXNUM_TO_LONG (Wrd220.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd221.Lng))))
    goto label_80;
  (Wrd213.Obj) = ((Wrd219.pObj) [4]);

DEFLABEL (label_79)
  (Rsp [2]) = (Wrd213.Obj);
  (Wrd229.Obj) = (current_block [OBJECT_30_5]);
  (Wrd230.Obj) = (Rsp [1]);
  if ((Wrd229.Obj) == (Wrd230.Obj))
    goto label_77;
  Wrd231 = Wrd229;
  goto label_76;

DEFLABEL (label_77)
  (Wrd231.Obj) = (current_block [OBJECT_30_6]);

DEFLABEL (label_76)
DEFLABEL (label_78)
  (Rsp [3]) = (Wrd231.Obj);
  (Wrd232.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd232.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_26]));

DEFLABEL (label_80)
  (Wrd224.Obj) = (Rsp [0]);
  (Wrd225.Obj) = (current_block [OBJECT_30_0]);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd224.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_53)
  (Wrd213.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd243.Obj) = (current_block [OBJECT_30_2]);
  (Wrd244.Obj) = (current_block [OBJECT_30_3]);
  (Wrd247.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd247.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_54)
  goto label_81;

DEFLABEL (label_84)
  (Wrd208.Obj) = (Rsp [0]);
  (Wrd209.Obj) = (current_block [OBJECT_30_0]);
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_52)
  (Wrd197.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd259.Obj) = (Rsp [0]);
  (Wrd260.Obj) = (current_block [OBJECT_30_2]);
  (Wrd261.Obj) = (current_block [OBJECT_30_8]);
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_28]))));
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd260.Obj);
  (* (--Rsp)) = (Wrd259.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_55)
  goto label_85;

DEFLABEL (label_88)
  (Wrd192.Obj) = (Rsp [0]);
  (Wrd193.Obj) = (current_block [OBJECT_30_0]);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_51)
  (Wrd181.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  Wrd180 = Wrd179;
  goto label_89;

DEFLABEL (label_93)
  (Wrd174.Obj) = (Rsp [3]);
  (Wrd175.Obj) = (current_block [OBJECT_30_7]);
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_50)
DEFLABEL (label_94)
  (Wrd163.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd280.Obj) = (Rsp [3]);
  (Wrd281.uLng) = (OBJECT_TYPE (Wrd280.Obj));
  if (! ((Wrd281.uLng) == 62))
    goto label_96;
  (Wrd277.pObj) = (OBJECT_ADDRESS (Wrd280.Obj));
  (Wrd278.Obj) = ((Wrd277.pObj) [0]);
  (Wrd279.Lng) = (FIXNUM_TO_LONG (Wrd278.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd279.Lng))))
    goto label_96;
  (Wrd163.Obj) = ((Wrd277.pObj) [5]);
  goto label_92;

DEFLABEL (label_96)
  (Wrd282.Obj) = (Rsp [3]);
  (Wrd283.Obj) = (current_block [OBJECT_30_4]);
  (Wrd286.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd286.Obj);
  (* (--Rsp)) = (Wrd283.Obj);
  (* (--Rsp)) = (Wrd282.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_56)
  goto label_94;

DEFLABEL (label_98)
  (Wrd360.Obj) = (Rsp [2]);
  (Wrd361.uLng) = (OBJECT_TYPE (Wrd360.Obj));
  if (! ((Wrd361.uLng) == 62))
    goto label_108;
  (Wrd357.pObj) = (OBJECT_ADDRESS (Wrd360.Obj));
  (Wrd358.Obj) = ((Wrd357.pObj) [0]);
  (Wrd359.Lng) = (FIXNUM_TO_LONG (Wrd358.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd359.Lng))))
    goto label_108;
  (Wrd353.Obj) = (current_block [OBJECT_30_8]);
  ((Wrd357.pObj) [7]) = (Wrd353.Obj);

DEFLABEL (label_107)
  (Wrd343.Obj) = (Rsp [0]);
  (Wrd344.uLng) = (OBJECT_TYPE (Wrd343.Obj));
  if (! ((Wrd344.uLng) == 62))
    goto label_106;
  (Wrd340.pObj) = (OBJECT_ADDRESS (Wrd343.Obj));
  (Wrd341.Obj) = ((Wrd340.pObj) [0]);
  (Wrd342.Lng) = (FIXNUM_TO_LONG (Wrd341.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd342.Lng))))
    goto label_106;
  (Wrd336.Obj) = (current_block [OBJECT_30_8]);
  ((Wrd340.pObj) [7]) = (Wrd336.Obj);

DEFLABEL (label_105)
  (Wrd296.Obj) = (Rsp [2]);
  (Wrd297.uLng) = (OBJECT_TYPE (Wrd296.Obj));
  if (! ((Wrd297.uLng) == 62))
    goto label_104;
  (Wrd293.pObj) = (OBJECT_ADDRESS (Wrd296.Obj));
  (Wrd294.Obj) = ((Wrd293.pObj) [0]);
  (Wrd295.Lng) = (FIXNUM_TO_LONG (Wrd294.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd295.Lng))))
    goto label_104;
  (Wrd287.Obj) = ((Wrd293.pObj) [4]);

DEFLABEL (label_103)
  (Wrd327.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if (! ((Wrd327.uLng) == 62))
    goto label_102;
  (Wrd324.pObj) = (OBJECT_ADDRESS (Wrd287.Obj));
  (Wrd325.Obj) = ((Wrd324.pObj) [0]);
  (Wrd326.Lng) = (FIXNUM_TO_LONG (Wrd325.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd326.Lng))))
    goto label_102;
  (Wrd321.Obj) = (current_block [OBJECT_30_3]);
  ((Wrd324.pObj) [7]) = (Wrd321.Obj);

DEFLABEL (label_101)
  (Wrd312.Obj) = (Rsp [2]);
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd312.Obj));
  if (! ((Wrd313.uLng) == 62))
    goto label_100;
  (Wrd309.pObj) = (OBJECT_ADDRESS (Wrd312.Obj));
  (Wrd310.Obj) = ((Wrd309.pObj) [0]);
  (Wrd311.Lng) = (FIXNUM_TO_LONG (Wrd310.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd311.Lng))))
    goto label_100;
  (Wrd303.Obj) = ((Wrd309.pObj) [4]);

DEFLABEL (label_99)
  (Rsp [3]) = (Wrd303.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_37;

DEFLABEL (label_100)
  (Wrd314.Obj) = (Rsp [2]);
  (Wrd315.Obj) = (current_block [OBJECT_30_0]);
  (Wrd318.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd318.Obj);
  (* (--Rsp)) = (Wrd315.Obj);
  (* (--Rsp)) = (Wrd314.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_58)
  (Wrd303.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd329.Obj) = (current_block [OBJECT_30_2]);
  (Wrd330.Obj) = (current_block [OBJECT_30_3]);
  (Wrd333.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd333.Obj);
  (* (--Rsp)) = (Wrd330.Obj);
  (* (--Rsp)) = (Wrd329.Obj);
  (* (--Rsp)) = (Wrd287.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_59)
  goto label_101;

DEFLABEL (label_104)
  (Wrd298.Obj) = (Rsp [2]);
  (Wrd299.Obj) = (current_block [OBJECT_30_0]);
  (Wrd302.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd302.Obj);
  (* (--Rsp)) = (Wrd299.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_57)
  (Wrd287.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd345.Obj) = (Rsp [0]);
  (Wrd346.Obj) = (current_block [OBJECT_30_2]);
  (Wrd347.Obj) = (current_block [OBJECT_30_8]);
  (Wrd350.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd350.Obj);
  (* (--Rsp)) = (Wrd347.Obj);
  (* (--Rsp)) = (Wrd346.Obj);
  (* (--Rsp)) = (Wrd345.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_60)
  goto label_105;

DEFLABEL (label_108)
  (Wrd362.Obj) = (Rsp [2]);
  (Wrd363.Obj) = (current_block [OBJECT_30_2]);
  (Wrd364.Obj) = (current_block [OBJECT_30_8]);
  (Wrd367.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd367.Obj);
  (* (--Rsp)) = (Wrd364.Obj);
  (* (--Rsp)) = (Wrd363.Obj);
  (* (--Rsp)) = (Wrd362.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_9]), 3);

DEFLABEL (label_61)
  goto label_107;

DEFLABEL (label_110)
  (Wrd151.Obj) = (Rsp [0]);
  (Wrd152.Obj) = (current_block [OBJECT_30_2]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_49)
  (Wrd140.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_113)
  (Wrd134.Obj) = (current_block [OBJECT_30_7]);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_48)
  (Wrd125.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd119.Obj) = (Rsp [2]);
  (Wrd120.Obj) = (current_block [OBJECT_30_0]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_47)
  (Wrd108.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  (Wrd377.Obj) = (Rsp [2]);
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if (! ((Wrd378.uLng) == 62))
    goto label_120;
  (Wrd374.pObj) = (OBJECT_ADDRESS (Wrd377.Obj));
  (Wrd375.Obj) = ((Wrd374.pObj) [0]);
  (Wrd376.Lng) = (FIXNUM_TO_LONG (Wrd375.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd376.Lng))))
    goto label_120;
  (Wrd368.Obj) = ((Wrd374.pObj) [4]);

DEFLABEL (label_119)
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd368.Obj));
  if (! ((Wrd392.uLng) == 62))
    goto label_118;
  (Wrd389.pObj) = (OBJECT_ADDRESS (Wrd368.Obj));
  (Wrd390.Obj) = ((Wrd389.pObj) [0]);
  (Wrd391.Lng) = (FIXNUM_TO_LONG (Wrd390.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd391.Lng))))
    goto label_118;
  (Wrd385.Obj) = ((Wrd389.pObj) [5]);

DEFLABEL (label_117)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd385.Obj);
  goto label_111;

DEFLABEL (label_118)
  (Wrd394.Obj) = (current_block [OBJECT_30_4]);
  (Wrd397.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd397.Obj);
  (* (--Rsp)) = (Wrd394.Obj);
  (* (--Rsp)) = (Wrd368.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_63)
  (Wrd385.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd379.Obj) = (Rsp [2]);
  (Wrd380.Obj) = (current_block [OBJECT_30_0]);
  (Wrd383.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd383.Obj);
  (* (--Rsp)) = (Wrd380.Obj);
  (* (--Rsp)) = (Wrd379.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_62)
  (Wrd368.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_123)
  (Wrd97.Obj) = (current_block [OBJECT_30_4]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_46)
  (Wrd88.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (current_block [OBJECT_30_0]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_45)
  (Wrd72.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (current_block [OBJECT_30_2]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_44)
  (Wrd54.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (current_block [OBJECT_30_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd163.Obj) = Rvl;
  goto label_91;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  goto label_111;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_9 9
#define LABEL_31_10 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define LABEL_31_8 17
#define LABEL_31_14 19
#define ENVIRONMENT_LABEL_31_3 29
#define DEBUGGING_LABEL_31_2 28
#define OBJECT_31_2 27
#define OBJECT_31_1 26
#define OBJECT_31_0 25
#define EXECUTE_CACHE_31_13 21
#define EXECUTE_CACHE_31_6 23
#define FREE_REFERENCES_LABEL_31_0 20
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_31_4);
      goto alist__rb_tree_13;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto do_loop_10;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_31_14);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alist__rb_tree_21)
DEFLABEL (alist__rb_tree_13)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_10;

DEFLABEL (do_loop_22)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_31_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_31_0])))
    goto label_23;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_32)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_31;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_30)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_29;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_28)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_26)
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_10;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_17)
  (Wrd26.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_7 9
#define LABEL_32_8 11
#define ENVIRONMENT_LABEL_32_3 17
#define DEBUGGING_LABEL_32_2 16
#define OBJECT_32_1 15
#define OBJECT_32_0 14
#define FREE_REFERENCE_32_0 13
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_32_4);
      goto without_interrupts_4;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (without_interrupts_8)
DEFLABEL (without_interrupts_4)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_8);
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_7 5
#define LABEL_33_5 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define LABEL_33_14 17
#define LABEL_33_13 19
#define LABEL_33_16 21
#define LABEL_33_15 23
#define LABEL_33_18 25
#define LABEL_33_19 27
#define ENVIRONMENT_LABEL_33_3 45
#define DEBUGGING_LABEL_33_2 44
#define OBJECT_33_8 43
#define OBJECT_33_7 42
#define OBJECT_33_6 41
#define OBJECT_33_5 40
#define OBJECT_33_4 39
#define OBJECT_33_3 38
#define OBJECT_33_2 37
#define OBJECT_33_1 36
#define OBJECT_33_0 35
#define EXECUTE_CACHE_33_17 29
#define EXECUTE_CACHE_33_8 31
#define EXECUTE_CACHE_33_6 33
#define FREE_REFERENCES_LABEL_33_0 28
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
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
  machine_word Wrd16;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_33_4);
      goto rb_tree_deleteB_15;

    case 1:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_33_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_33_15);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_33_18);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_33_19);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_deleteB_25)
DEFLABEL (rb_tree_deleteB_15)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_30;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_30;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_29)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_28;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_28;
  (Wrd41.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_27)
  goto loop_12;

DEFLABEL (label_28)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (current_block [OBJECT_33_5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_33_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_33_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (loop_26)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_33_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = (current_block [OBJECT_33_6]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_44;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_44;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_43)
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_42;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_42;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_41)
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_12;

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_33_8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_40;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_40;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_12;

DEFLABEL (label_40)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_33_7]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_33_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_33_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_7 7
#define LABEL_34_8 9
#define LABEL_34_9 11
#define LABEL_34_10 13
#define LABEL_34_11 15
#define LABEL_34_12 17
#define LABEL_34_13 19
#define LABEL_34_5 21
#define LABEL_34_14 23
#define LABEL_34_15 25
#define LABEL_34_16 27
#define LABEL_34_17 29
#define LABEL_34_18 31
#define LABEL_34_19 33
#define LABEL_34_20 35
#define LABEL_34_21 37
#define LABEL_34_22 39
#define LABEL_34_23 41
#define LABEL_34_25 43
#define ENVIRONMENT_LABEL_34_3 63
#define DEBUGGING_LABEL_34_2 62
#define OBJECT_34_10 61
#define OBJECT_34_9 60
#define OBJECT_34_8 59
#define OBJECT_34_7 58
#define OBJECT_34_6 57
#define OBJECT_34_5 56
#define OBJECT_34_4 55
#define OBJECT_34_3 54
#define OBJECT_34_2 53
#define OBJECT_34_1 52
#define OBJECT_34_0 51
#define EXECUTE_CACHE_34_26 45
#define EXECUTE_CACHE_34_24 47
#define FREE_REFERENCE_34_0 50
#define FREE_REFERENCES_LABEL_34_0 44
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd73;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd117;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd134;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd54;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd151;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd52;
  machine_word Wrd169;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd179;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd182;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd214;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd10;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd249;
  machine_word Wrd265;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd259;
  machine_word Wrd258;
  machine_word Wrd247;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd232;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd238;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd281;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd231;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd216;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd226;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_34_4);
      goto delete_nodeB_25;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_34_11);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_34_14);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_34_15);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_34_16);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_34_17);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_34_18);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_34_19);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_34_20);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_34_21);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_34_22);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_34_23);
      goto label_31;

    case 20:
      current_block = (Rpc - LABEL_34_25);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_nodeB_43)
DEFLABEL (delete_nodeB_25)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_81;
  Wrd8 = Wrd12;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd208.Obj) = (Rsp [3]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if (! ((Wrd209.uLng) == 62))
    goto label_79;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd208.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [0]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd207.Lng))))
    goto label_79;
  (Wrd10.Obj) = ((Wrd205.pObj) [5]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_78)
  (Wrd194.Obj) = (Rsp [3]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd195.uLng) == 62))
    goto label_77;
  (Wrd191.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd192.Obj) = ((Wrd191.pObj) [0]);
  (Wrd193.Lng) = (FIXNUM_TO_LONG (Wrd192.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd193.Lng))))
    goto label_77;
  (Wrd182.Obj) = ((Wrd191.pObj) [6]);
  if ((Wrd182.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_75)
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (Wrd187.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd187.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_26]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  (Wrd226.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd226.uLng) == 62))
    goto label_74;
  (Wrd222.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd223.Obj) = ((Wrd222.pObj) [0]);
  (Wrd224.Lng) = (FIXNUM_TO_LONG (Wrd223.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd224.Lng))))
    goto label_74;
  (Wrd216.Obj) = ((Wrd222.pObj) [2]);

DEFLABEL (label_73)
  (Wrd274.Obj) = (Rsp [4]);
  (Wrd275.uLng) = (OBJECT_TYPE (Wrd274.Obj));
  if (! ((Wrd275.uLng) == 62))
    goto label_72;
  (Wrd271.pObj) = (OBJECT_ADDRESS (Wrd274.Obj));
  (Wrd272.Obj) = ((Wrd271.pObj) [0]);
  (Wrd273.Lng) = (FIXNUM_TO_LONG (Wrd272.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd273.Lng))))
    goto label_72;
  ((Wrd271.pObj) [2]) = (Wrd216.Obj);

DEFLABEL (label_71)
  (Wrd241.Obj) = (Rsp [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if (! ((Wrd242.uLng) == 62))
    goto label_70;
  (Wrd238.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd239.Obj) = ((Wrd238.pObj) [0]);
  (Wrd240.Lng) = (FIXNUM_TO_LONG (Wrd239.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd240.Lng))))
    goto label_70;
  (Wrd232.Obj) = ((Wrd238.pObj) [3]);

DEFLABEL (label_69)
  (Wrd258.Obj) = (Rsp [4]);
  (Wrd259.uLng) = (OBJECT_TYPE (Wrd258.Obj));
  if (! ((Wrd259.uLng) == 62))
    goto label_68;
  (Wrd255.pObj) = (OBJECT_ADDRESS (Wrd258.Obj));
  (Wrd256.Obj) = ((Wrd255.pObj) [0]);
  (Wrd257.Lng) = (FIXNUM_TO_LONG (Wrd256.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd257.Lng))))
    goto label_68;
  ((Wrd255.pObj) [3]) = (Wrd232.Obj);

DEFLABEL (label_67)
  (Wrd249.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd249.Obj);

DEFLABEL (label_66)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_65;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_65;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_64)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_63;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd40.Lng))))
    goto label_63;
  (Wrd34.Obj) = ((Wrd38.pObj) [5]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_62)
  (Wrd48.Obj) = (Rsp [0]);
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_58)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd159.uLng) == 62))
    goto label_57;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd156.Obj) = ((Wrd155.pObj) [0]);
  (Wrd157.Lng) = (FIXNUM_TO_LONG (Wrd156.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd157.Lng))))
    goto label_57;
  (Wrd151.Obj) = (Rsp [1]);
  ((Wrd155.pObj) [4]) = (Wrd151.Obj);

DEFLABEL (label_56)
  (Wrd54.Obj) = (Rsp [1]);
  if ((Wrd54.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_53;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd64.Lng))))
    goto label_53;
  (Wrd56.Obj) = ((Wrd62.pObj) [5]);

DEFLABEL (label_52)
  (Wrd72.Obj) = (Rsp [2]);
  if ((Wrd72.Obj) == (Wrd56.Obj))
    goto label_50;
  (Wrd107.Obj) = (Rsp [1]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 62))
    goto label_49;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd106.Lng))))
    goto label_49;
  (Wrd100.Obj) = (Rsp [0]);
  ((Wrd104.pObj) [6]) = (Wrd100.Obj);

DEFLABEL (label_48)
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 62))
    goto label_47;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd81.Lng))))
    goto label_47;
  (Wrd73.Obj) = ((Wrd79.pObj) [7]);

DEFLABEL (label_46)
  if (! ((Wrd73.Obj) == (current_block [OBJECT_34_9])))
    goto label_44;
  (Wrd95.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [5]);
  (Rsp [0]) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_24]));

DEFLABEL (label_44)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_45)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_25]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_0]), 1);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_34_25);
  Rvl = (current_block [OBJECT_34_10]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd84.Obj) = (Rsp [2]);
  (Wrd85.Obj) = (current_block [OBJECT_34_8]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_23]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_31)
  (Wrd73.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.Obj) = (current_block [OBJECT_34_6]);
  (Wrd111.Obj) = (Rsp [0]);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_32)
  goto label_48;

DEFLABEL (label_50)
  (Wrd124.Obj) = (Rsp [1]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 62))
    goto label_51;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd123.Lng))))
    goto label_51;
  (Wrd117.Obj) = (Rsp [0]);
  ((Wrd121.pObj) [5]) = (Wrd117.Obj);
  goto label_48;

DEFLABEL (label_51)
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.Obj) = (current_block [OBJECT_34_5]);
  (Wrd128.Obj) = (Rsp [0]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_33)
  goto label_48;

DEFLABEL (label_53)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_34_5]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_30)
  (Wrd56.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd141.Obj) = (Rsp [5]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_55;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd140.Lng))))
    goto label_55;
  (Wrd134.Obj) = (Rsp [0]);
  ((Wrd138.pObj) [2]) = (Wrd134.Obj);
  goto label_48;

DEFLABEL (label_55)
  (Wrd143.Obj) = (Rsp [5]);
  (Wrd144.Obj) = (current_block [OBJECT_34_1]);
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_34)
  goto label_48;

DEFLABEL (label_57)
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.Obj) = (current_block [OBJECT_34_7]);
  (Wrd162.Obj) = (Rsp [1]);
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_18]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_35)
  goto label_56;

DEFLABEL (label_59)
  (Wrd166.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd167.Obj) = (current_block [OBJECT_34_6]);
  (Rsp [1]) = (Wrd167.Obj);
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if ((Wrd179.uLng) == 62)
    goto label_61;

DEFLABEL (label_60)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_61)
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (Wrd177.Lng) = (FIXNUM_TO_LONG (Wrd176.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd177.Lng))))
    goto label_60;
  (Wrd169.Obj) = ((Wrd175.pObj) [6]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd169.Obj);
  goto label_58;

DEFLABEL (label_63)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_34_5]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_34_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_68)
  (Wrd260.Obj) = (Rsp [4]);
  (Wrd261.Obj) = (current_block [OBJECT_34_4]);
  (Wrd265.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd265.Obj);
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd260.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_40)
  goto label_67;

DEFLABEL (label_70)
  (Wrd243.Obj) = (Rsp [0]);
  (Wrd244.Obj) = (current_block [OBJECT_34_4]);
  (Wrd247.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd247.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  (* (--Rsp)) = (Wrd243.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_39)
  (Wrd232.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd276.Obj) = (Rsp [4]);
  (Wrd277.Obj) = (current_block [OBJECT_34_1]);
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd277.Obj);
  (* (--Rsp)) = (Wrd276.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 3);

DEFLABEL (label_41)
  goto label_71;

DEFLABEL (label_74)
  (Wrd227.Obj) = (Rsp [0]);
  (Wrd228.Obj) = (current_block [OBJECT_34_1]);
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd231.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_38)
  (Wrd216.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_66;

DEFLABEL (label_77)
  (Wrd196.Obj) = (Rsp [3]);
  (Wrd197.Obj) = (current_block [OBJECT_34_6]);
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd200.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd196.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_75;

DEFLABEL (label_79)
  (Wrd210.Obj) = (Rsp [3]);
  (Wrd211.Obj) = (current_block [OBJECT_34_5]);
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd214.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_80;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_13);
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define LABEL_35_8 11
#define LABEL_35_9 13
#define LABEL_35_10 15
#define LABEL_35_11 17
#define LABEL_35_12 19
#define LABEL_35_13 21
#define LABEL_35_14 23
#define LABEL_35_15 25
#define LABEL_35_16 27
#define LABEL_35_17 29
#define LABEL_35_18 31
#define LABEL_35_19 33
#define LABEL_35_20 35
#define LABEL_35_21 37
#define LABEL_35_22 39
#define LABEL_35_23 41
#define LABEL_35_24 43
#define LABEL_35_25 45
#define LABEL_35_26 47
#define LABEL_35_27 49
#define LABEL_35_30 51
#define LABEL_35_28 53
#define LABEL_35_31 55
#define LABEL_35_32 57
#define LABEL_35_33 59
#define LABEL_35_34 61
#define LABEL_35_35 63
#define LABEL_35_36 65
#define LABEL_35_37 67
#define LABEL_35_38 69
#define LABEL_35_39 71
#define LABEL_35_40 73
#define LABEL_35_41 75
#define LABEL_35_42 77
#define ENVIRONMENT_LABEL_35_3 96
#define DEBUGGING_LABEL_35_2 95
#define OBJECT_35_13 94
#define OBJECT_35_12 93
#define OBJECT_35_11 92
#define OBJECT_35_10 91
#define OBJECT_35_9 90
#define OBJECT_35_8 89
#define OBJECT_35_7 88
#define OBJECT_35_6 87
#define OBJECT_35_5 86
#define OBJECT_35_4 85
#define OBJECT_35_3 84
#define OBJECT_35_2 83
#define OBJECT_35_1 82
#define OBJECT_35_0 81
#define EXECUTE_CACHE_35_29 79
#define FREE_REFERENCES_LABEL_35_0 78
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd25;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd11;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd181;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd184;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd217;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd227;
  machine_word Wrd216;
  machine_word Wrd250;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd236;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd156;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd138;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd252;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd258;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd129;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd112;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd285;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd270;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd290;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd308;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd294;
  machine_word Wrd300;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd325;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd311;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd342;
  machine_word Wrd339;
  machine_word Wrd338;
  machine_word Wrd327;
  machine_word Wrd335;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd337;
  machine_word Wrd336;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd343;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd359;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd361;
  machine_word Wrd360;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd344;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd370;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd376;
  machine_word Wrd380;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd384;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd390;
  machine_word Wrd394;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd366;
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
      goto delete_fixupB_48;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_31;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_26;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto loop_46;

    case 7:
      current_block = (Rpc - LABEL_35_11);
      goto label_50;

    case 8:
      current_block = (Rpc - LABEL_35_12);
      goto label_51;

    case 9:
      current_block = (Rpc - LABEL_35_13);
      goto label_66;

    case 10:
      current_block = (Rpc - LABEL_35_14);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_35_15);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_35_16);
      goto label_65;

    case 13:
      current_block = (Rpc - LABEL_35_17);
      goto label_64;

    case 14:
      current_block = (Rpc - LABEL_35_18);
      goto label_63;

    case 15:
      current_block = (Rpc - LABEL_35_19);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_35_20);
      goto label_55;

    case 17:
      current_block = (Rpc - LABEL_35_21);
      goto label_62;

    case 18:
      current_block = (Rpc - LABEL_35_22);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_35_23);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_35_24);
      goto label_61;

    case 21:
      current_block = (Rpc - LABEL_35_25);
      goto label_60;

    case 22:
      current_block = (Rpc - LABEL_35_26);
      goto label_59;

    case 23:
      current_block = (Rpc - LABEL_35_27);
      goto label_58;

    case 24:
      current_block = (Rpc - LABEL_35_30);
      goto continuation_40;

    case 25:
      current_block = (Rpc - LABEL_35_28);
      goto continuation_38;

    case 26:
      current_block = (Rpc - LABEL_35_31);
      goto label_68;

    case 27:
      current_block = (Rpc - LABEL_35_32);
      goto label_67;

    case 28:
      current_block = (Rpc - LABEL_35_33);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_35_34);
      goto lambda_24;

    case 30:
      current_block = (Rpc - LABEL_35_35);
      goto label_69;

    case 31:
      current_block = (Rpc - LABEL_35_36);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_35_37);
      goto label_73;

    case 33:
      current_block = (Rpc - LABEL_35_38);
      goto label_72;

    case 34:
      current_block = (Rpc - LABEL_35_39);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_35_40);
      goto label_71;

    case 36:
      current_block = (Rpc - LABEL_35_41);
      goto continuation_22;

    case 37:
      current_block = (Rpc - LABEL_35_42);
      goto label_75;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_fixupB_77)
DEFLABEL (delete_fixupB_48)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_46;

DEFLABEL (loop_78)
DEFLABEL (loop_46)
  INTERRUPT_CHECK (26, LABEL_35_10);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_134;
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_139;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_139;
  (Wrd9.Obj) = ((Wrd15.pObj) [7]);

DEFLABEL (label_138)
  if ((Wrd9.Obj) == (current_block [OBJECT_35_5]))
    goto label_134;

DEFLABEL (label_133)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_132;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd34.Lng))))
    goto label_132;
  (Wrd26.Obj) = ((Wrd32.pObj) [5]);

DEFLABEL (label_131)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (Wrd26.Obj))
    goto label_81;
  (Wrd43.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_80;

DEFLABEL (label_81)
  (Wrd343.Obj) = (current_block [OBJECT_35_9]);
  (* (--Rsp)) = (Wrd343.Obj);

DEFLABEL (label_80)
DEFLABEL (label_130)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  if ((Wrd51.Obj) == (current_block [OBJECT_35_0]))
    goto label_127;
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_126;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd61.Lng))))
    goto label_126;
  (Wrd53.Obj) = ((Wrd59.pObj) [6]);

DEFLABEL (label_125)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_124)
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 62))
    goto label_123;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd77.Lng))))
    goto label_123;
  (Wrd69.Obj) = ((Wrd75.pObj) [7]);

DEFLABEL (label_122)
  if ((Wrd69.Obj) == (current_block [OBJECT_35_5]))
    goto label_117;
  (Wrd87.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_116)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  if ((Wrd92.Obj) == (current_block [OBJECT_35_0]))
    goto label_113;
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_112;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd102.Lng))))
    goto label_112;
  (Wrd94.Obj) = ((Wrd100.pObj) [6]);

DEFLABEL (label_111)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_110)
  (Wrd110.Obj) = (Rsp [0]);
  if ((Wrd110.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd122.uLng) == 62))
    goto label_108;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd120.Lng))))
    goto label_108;
  (Wrd112.Obj) = ((Wrd118.pObj) [7]);

DEFLABEL (label_107)
  if ((Wrd112.Obj) == (current_block [OBJECT_35_5]))
    goto label_83;
  (Wrd129.Obj) = (current_block [OBJECT_35_11]);
  goto label_82;

DEFLABEL (label_83)
  (Wrd129.Obj) = (current_block [OBJECT_35_10]);

DEFLABEL (label_82)
DEFLABEL (label_106)
  Rsp = (& (Rsp [1]));
  if ((Wrd129.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto lambda_24;

DEFLABEL (label_84)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd136.Obj) = (Rsp [2]);
  if ((Wrd136.Obj) == (current_block [OBJECT_35_9]))
    goto label_103;
  (Wrd147.Obj) = (Rsp [1]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 62))
    goto label_102;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd146.Lng))))
    goto label_102;
  (Wrd138.Obj) = ((Wrd144.pObj) [6]);

DEFLABEL (label_101)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd138.Obj);

DEFLABEL (label_100)
  (Wrd154.Obj) = (Rsp [0]);
  if ((Wrd154.Obj) == ((SCHEME_OBJECT) 0))
    goto label_93;
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd166.uLng) == 62))
    goto label_99;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd164.Lng))))
    goto label_99;
  (Wrd156.Obj) = ((Wrd162.pObj) [7]);

DEFLABEL (label_98)
  (Wrd172.Obj) = (current_block [OBJECT_35_7]);
  if ((Wrd172.Obj) == (Wrd156.Obj))
    goto label_93;
  (Wrd208.Obj) = (Rsp [0]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if (! ((Wrd209.uLng) == 62))
    goto label_92;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd208.Obj));
  (Wrd206.Obj) = ((Wrd205.pObj) [0]);
  (Wrd207.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd207.Lng))))
    goto label_92;
  ((Wrd205.pObj) [7]) = (Wrd172.Obj);

DEFLABEL (label_91)
  (Wrd191.Obj) = (Rsp [1]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd192.uLng) == 62))
    goto label_90;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd189.Obj) = ((Wrd188.pObj) [0]);
  (Wrd190.Lng) = (FIXNUM_TO_LONG (Wrd189.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd190.Lng))))
    goto label_90;
  (Wrd184.Obj) = (current_block [OBJECT_35_5]);
  ((Wrd188.pObj) [7]) = (Wrd184.Obj);

DEFLABEL (label_89)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_28]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (Wrd176.Obj) = (current_block [OBJECT_35_9]);
  (Wrd177.Obj) = (Rsp [3]);
  if ((Wrd176.Obj) == (Wrd177.Obj))
    goto label_86;
  (* (--Rsp)) = (Wrd176.Obj);
  goto label_85;

DEFLABEL (label_86)
  (Wrd181.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd181.Obj);

DEFLABEL (label_85)
DEFLABEL (label_88)
  (Wrd179.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd179.Obj);

DEFLABEL (label_87)
  (Wrd180.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd180.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_29]));

DEFLABEL (label_90)
  (Wrd193.Obj) = (Rsp [1]);
  (Wrd194.Obj) = (current_block [OBJECT_35_4]);
  (Wrd195.Obj) = (current_block [OBJECT_35_5]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_27]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_58)
  goto label_89;

DEFLABEL (label_92)
  (Wrd210.Obj) = (Rsp [0]);
  (Wrd211.Obj) = (current_block [OBJECT_35_4]);
  (Wrd212.Obj) = (current_block [OBJECT_35_7]);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_26]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_59)
  goto label_91;

DEFLABEL (label_93)
  (Wrd243.Obj) = (Rsp [1]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd244.uLng) == 62))
    goto label_97;
  (Wrd240.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd241.Obj) = ((Wrd240.pObj) [0]);
  (Wrd242.Lng) = (FIXNUM_TO_LONG (Wrd241.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd242.Lng))))
    goto label_97;
  (Wrd236.Obj) = (current_block [OBJECT_35_5]);
  ((Wrd240.pObj) [7]) = (Wrd236.Obj);

DEFLABEL (label_96)
  (Wrd216.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd216.Obj);
  (Wrd227.uLng) = (OBJECT_TYPE (Wrd216.Obj));
  if (! ((Wrd227.uLng) == 62))
    goto label_95;
  (Wrd223.pObj) = (OBJECT_ADDRESS (Wrd216.Obj));
  (Wrd224.Obj) = ((Wrd223.pObj) [0]);
  (Wrd225.Lng) = (FIXNUM_TO_LONG (Wrd224.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd225.Lng))))
    goto label_95;
  (Wrd217.Obj) = ((Wrd223.pObj) [4]);

DEFLABEL (label_94)
  (Rsp [4]) = (Wrd217.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_46;

DEFLABEL (label_95)
  (Wrd228.Obj) = (Rsp [4]);
  (Wrd229.Obj) = (current_block [OBJECT_35_12]);
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_25]))));
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd229.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_60)
  (Wrd217.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd245.Obj) = (Rsp [1]);
  (Wrd246.Obj) = (current_block [OBJECT_35_4]);
  (Wrd247.Obj) = (current_block [OBJECT_35_5]);
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd247.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd245.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_61)
  goto label_96;

DEFLABEL (label_99)
  (Wrd167.Obj) = (Rsp [0]);
  (Wrd168.Obj) = (current_block [OBJECT_35_4]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_23]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_57)
  (Wrd156.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_102)
  (Wrd149.Obj) = (Rsp [1]);
  (Wrd150.Obj) = (current_block [OBJECT_35_2]);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_22]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_56)
  (Wrd138.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd261.Obj) = (Rsp [1]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if (! ((Wrd262.uLng) == 62))
    goto label_105;
  (Wrd258.pObj) = (OBJECT_ADDRESS (Wrd261.Obj));
  (Wrd259.Obj) = ((Wrd258.pObj) [0]);
  (Wrd260.Lng) = (FIXNUM_TO_LONG (Wrd259.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd260.Lng))))
    goto label_105;
  (Wrd252.Obj) = ((Wrd258.pObj) [5]);

DEFLABEL (label_104)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd252.Obj);
  goto label_100;

DEFLABEL (label_105)
  (Wrd263.Obj) = (Rsp [1]);
  (Wrd264.Obj) = (current_block [OBJECT_35_1]);
  (Wrd267.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd267.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_62)
  (Wrd252.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_108)
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.Obj) = (current_block [OBJECT_35_4]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_20]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_55)
  (Wrd112.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  Rsp = (& (Rsp [1]));
  goto label_84;

DEFLABEL (label_112)
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.Obj) = (current_block [OBJECT_35_2]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_54)
  (Wrd94.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_113)
  (Wrd279.Obj) = (Rsp [1]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if (! ((Wrd280.uLng) == 62))
    goto label_115;
  (Wrd276.pObj) = (OBJECT_ADDRESS (Wrd279.Obj));
  (Wrd277.Obj) = ((Wrd276.pObj) [0]);
  (Wrd278.Lng) = (FIXNUM_TO_LONG (Wrd277.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd278.Lng))))
    goto label_115;
  (Wrd270.Obj) = ((Wrd276.pObj) [5]);

DEFLABEL (label_114)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd270.Obj);
  goto label_110;

DEFLABEL (label_115)
  (Wrd281.Obj) = (Rsp [1]);
  (Wrd282.Obj) = (current_block [OBJECT_35_1]);
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd282.Obj);
  (* (--Rsp)) = (Wrd281.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_63)
  (Wrd270.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd318.Obj) = (Rsp [0]);
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd318.Obj));
  if (! ((Wrd319.uLng) == 62))
    goto label_121;
  (Wrd315.pObj) = (OBJECT_ADDRESS (Wrd318.Obj));
  (Wrd316.Obj) = ((Wrd315.pObj) [0]);
  (Wrd317.Lng) = (FIXNUM_TO_LONG (Wrd316.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd317.Lng))))
    goto label_121;
  (Wrd311.Obj) = (current_block [OBJECT_35_7]);
  ((Wrd315.pObj) [7]) = (Wrd311.Obj);

DEFLABEL (label_120)
  (Wrd301.Obj) = (Rsp [4]);
  (Wrd302.uLng) = (OBJECT_TYPE (Wrd301.Obj));
  if (! ((Wrd302.uLng) == 62))
    goto label_119;
  (Wrd298.pObj) = (OBJECT_ADDRESS (Wrd301.Obj));
  (Wrd299.Obj) = ((Wrd298.pObj) [0]);
  (Wrd300.Lng) = (FIXNUM_TO_LONG (Wrd299.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd300.Lng))))
    goto label_119;
  (Wrd294.Obj) = (current_block [OBJECT_35_5]);
  ((Wrd298.pObj) [7]) = (Wrd294.Obj);

DEFLABEL (label_118)
  (Wrd288.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd288.Obj);
  (Wrd289.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd289.Obj);
  (Wrd290.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd290.Obj);
  goto label_87;

DEFLABEL (label_119)
  (Wrd303.Obj) = (Rsp [4]);
  (Wrd304.Obj) = (current_block [OBJECT_35_4]);
  (Wrd305.Obj) = (current_block [OBJECT_35_5]);
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd304.Obj);
  (* (--Rsp)) = (Wrd303.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_64)
  goto label_118;

DEFLABEL (label_121)
  (Wrd320.Obj) = (Rsp [0]);
  (Wrd321.Obj) = (current_block [OBJECT_35_4]);
  (Wrd322.Obj) = (current_block [OBJECT_35_7]);
  (Wrd325.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd325.Obj);
  (* (--Rsp)) = (Wrd322.Obj);
  (* (--Rsp)) = (Wrd321.Obj);
  (* (--Rsp)) = (Wrd320.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_65)
  goto label_120;

DEFLABEL (label_123)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (current_block [OBJECT_35_4]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_53)
  (Wrd69.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_126)
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.Obj) = (current_block [OBJECT_35_2]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_52)
  (Wrd53.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_127)
  (Wrd336.Obj) = (Rsp [4]);
  (Wrd337.uLng) = (OBJECT_TYPE (Wrd336.Obj));
  if (! ((Wrd337.uLng) == 62))
    goto label_129;
  (Wrd333.pObj) = (OBJECT_ADDRESS (Wrd336.Obj));
  (Wrd334.Obj) = ((Wrd333.pObj) [0]);
  (Wrd335.Lng) = (FIXNUM_TO_LONG (Wrd334.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd335.Lng))))
    goto label_129;
  (Wrd327.Obj) = ((Wrd333.pObj) [5]);

DEFLABEL (label_128)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd327.Obj);
  goto label_124;

DEFLABEL (label_129)
  (Wrd338.Obj) = (Rsp [4]);
  (Wrd339.Obj) = (current_block [OBJECT_35_1]);
  (Wrd342.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd342.Obj);
  (* (--Rsp)) = (Wrd339.Obj);
  (* (--Rsp)) = (Wrd338.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_66)
  (Wrd327.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_132)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_35_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_51)
  (Wrd26.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd344.Obj) = (Rsp [0]);
  if (! ((Wrd344.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_135;
  Rvl = (current_block [OBJECT_35_6]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_135)
  (Rsp [2]) = (Wrd344.Obj);
  (Wrd347.Obj) = (current_block [OBJECT_35_4]);
  (Rsp [3]) = (Wrd347.Obj);
  (Wrd348.Obj) = (current_block [OBJECT_35_7]);
  (Rsp [4]) = (Wrd348.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd360.Obj) = (Rsp [0]);
  (Wrd361.uLng) = (OBJECT_TYPE (Wrd360.Obj));
  if ((Wrd361.uLng) == 62)
    goto label_137;

DEFLABEL (label_136)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_137)
  (Wrd357.pObj) = (OBJECT_ADDRESS (Wrd360.Obj));
  (Wrd358.Obj) = ((Wrd357.pObj) [0]);
  (Wrd359.Lng) = (FIXNUM_TO_LONG (Wrd358.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd359.Lng))))
    goto label_136;
  ((Wrd357.pObj) [7]) = (Wrd348.Obj);
  Rvl = (current_block [OBJECT_35_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_139)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_35_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_50)
  (Wrd9.Obj) = Rvl;
  goto label_138;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_35_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_35_0]))
    goto label_144;
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_142;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_142;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_141)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_140)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_24;

DEFLABEL (label_142)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Obj) = (current_block [OBJECT_35_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_32]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_67)
DEFLABEL (label_143)
  (Wrd11.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd37.Obj) = (Rsp [5]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_145;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd36.Lng))))
    goto label_145;
  (Wrd11.Obj) = ((Wrd34.pObj) [5]);
  goto label_141;

DEFLABEL (label_145)
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.Obj) = (current_block [OBJECT_35_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_68)
  goto label_143;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35_6);
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd366.Obj) = (Rsp [2]);
  if ((Wrd366.Obj) == (current_block [OBJECT_35_0]))
    goto label_148;
  (Wrd367.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd367.Obj);
  (Wrd368.Obj) = (current_block [OBJECT_35_2]);
  (Rsp [1]) = (Wrd368.Obj);
  (Wrd380.uLng) = (OBJECT_TYPE (Wrd367.Obj));
  if ((Wrd380.uLng) == 62)
    goto label_147;

DEFLABEL (label_146)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_147)
  (Wrd376.pObj) = (OBJECT_ADDRESS (Wrd367.Obj));
  (Wrd377.Obj) = ((Wrd376.pObj) [0]);
  (Wrd378.Lng) = (FIXNUM_TO_LONG (Wrd377.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd378.Lng))))
    goto label_146;
  (Wrd370.Obj) = ((Wrd376.pObj) [6]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd370.Obj);
  goto label_116;

DEFLABEL (label_148)
  (Wrd381.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd381.Obj);
  (Wrd382.Obj) = (current_block [OBJECT_35_1]);
  (Rsp [1]) = (Wrd382.Obj);
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd381.Obj));
  if (! ((Wrd394.uLng) == 62))
    goto label_146;
  (Wrd390.pObj) = (OBJECT_ADDRESS (Wrd381.Obj));
  (Wrd391.Obj) = ((Wrd390.pObj) [0]);
  (Wrd392.Lng) = (FIXNUM_TO_LONG (Wrd391.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd392.Lng))))
    goto label_146;
  (Wrd384.Obj) = ((Wrd390.pObj) [5]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd384.Obj);
  goto label_116;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_35_30);
  (Wrd11.Obj) = Rvl;
  goto label_140;

DEFLABEL (lambda_79)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_35_34);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_166;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_166;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_165)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 62))
    goto label_164;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd103.Lng))))
    goto label_164;
  ((Wrd101.pObj) [7]) = (Wrd5.Obj);

DEFLABEL (label_163)
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 62))
    goto label_162;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd87.Lng))))
    goto label_162;
  (Wrd81.Obj) = (current_block [OBJECT_35_7]);
  ((Wrd85.pObj) [7]) = (Wrd81.Obj);

DEFLABEL (label_161)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  if ((Wrd25.Obj) == (current_block [OBJECT_35_0]))
    goto label_159;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_157;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_157;
  (Wrd27.Obj) = ((Wrd33.pObj) [6]);

DEFLABEL (label_156)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_155)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_154;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd55.Lng))))
    goto label_154;
  (Wrd50.Obj) = (current_block [OBJECT_35_7]);
  ((Wrd53.pObj) [7]) = (Wrd50.Obj);

DEFLABEL (label_153)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_41]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_29]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_35_41);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_152;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_152;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_151)
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_35_4]);
  (Rsp [5]) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_35_7]);
  (Rsp [6]) = (Wrd22.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 62)
    goto label_150;

DEFLABEL (label_149)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_150)
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd33.Lng))))
    goto label_149;
  ((Wrd31.pObj) [7]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_35_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_152)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_35_13]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_42]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_75)
  (Wrd5.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd58.Obj) = (current_block [OBJECT_35_4]);
  (Wrd59.Obj) = (current_block [OBJECT_35_7]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_40]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_71)
  goto label_153;

DEFLABEL (label_157)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_35_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_39]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_70)
DEFLABEL (label_158)
  (Wrd27.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 62))
    goto label_160;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd71.Lng))))
    goto label_160;
  (Wrd27.Obj) = ((Wrd69.pObj) [5]);
  goto label_156;

DEFLABEL (label_160)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_35_1]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_38]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_72)
  goto label_158;

DEFLABEL (label_162)
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd91.Obj) = (current_block [OBJECT_35_4]);
  (Wrd92.Obj) = (current_block [OBJECT_35_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_37]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_73)
  goto label_161;

DEFLABEL (label_164)
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (current_block [OBJECT_35_4]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_36]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 3);

DEFLABEL (label_74)
  goto label_163;

DEFLABEL (label_166)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_35_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  goto label_165;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35_33);
  (Wrd27.Obj) = Rvl;
  goto label_155;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_7 5
#define LABEL_36_5 7
#define LABEL_36_9 9
#define LABEL_36_10 11
#define LABEL_36_11 13
#define LABEL_36_12 15
#define LABEL_36_14 17
#define LABEL_36_13 19
#define LABEL_36_16 21
#define LABEL_36_15 23
#define LABEL_36_17 25
#define LABEL_36_18 27
#define ENVIRONMENT_LABEL_36_3 42
#define DEBUGGING_LABEL_36_2 41
#define OBJECT_36_7 40
#define OBJECT_36_6 39
#define OBJECT_36_5 38
#define OBJECT_36_4 37
#define OBJECT_36_3 36
#define OBJECT_36_2 35
#define OBJECT_36_1 34
#define OBJECT_36_0 33
#define EXECUTE_CACHE_36_8 29
#define EXECUTE_CACHE_36_6 31
#define FREE_REFERENCES_LABEL_36_0 28
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
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
  machine_word Wrd16;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_36_4);
      goto rb_tree_lookup_15;

    case 1:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_36_12);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_36_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_36_16);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_36_15);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_36_17);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_36_18);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_lookup_25)
DEFLABEL (rb_tree_lookup_15)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_30;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_30;
  (Wrd25.Obj) = ((Wrd29.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_29)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_28;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_28;
  (Wrd41.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_27)
  goto loop_12;

DEFLABEL (label_28)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (current_block [OBJECT_36_5]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_36_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_36_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (loop_26)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_36_12);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = (Rsp [5]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_46;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_46;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_45)
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_36_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36_4]);
  (Rsp [5]) = (Wrd8.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_36)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_35;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_44;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_44;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_43)
  (Wrd41.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_36_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_39;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_39;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_12;

DEFLABEL (label_39)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_36_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_42;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_12;

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_36_6]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_36_5]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_36_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define LABEL_37_10 9
#define LABEL_37_11 11
#define LABEL_37_9 13
#define LABEL_37_14 15
#define LABEL_37_13 17
#define LABEL_37_15 19
#define LABEL_37_16 21
#define LABEL_37_18 23
#define LABEL_37_19 25
#define LABEL_37_17 27
#define LABEL_37_21 29
#define LABEL_37_22 31
#define LABEL_37_23 33
#define LABEL_37_25 35
#define LABEL_37_24 37
#define LABEL_37_26 39
#define LABEL_37_28 41
#define LABEL_37_27 43
#define LABEL_37_29 45
#define ENVIRONMENT_LABEL_37_3 66
#define DEBUGGING_LABEL_37_2 65
#define OBJECT_37_9 64
#define OBJECT_37_8 63
#define OBJECT_37_7 62
#define OBJECT_37_6 61
#define OBJECT_37_5 60
#define OBJECT_37_4 59
#define OBJECT_37_3 58
#define OBJECT_37_2 57
#define OBJECT_37_1 56
#define OBJECT_37_0 55
#define EXECUTE_CACHE_37_20 47
#define EXECUTE_CACHE_37_12 49
#define EXECUTE_CACHE_37_8 51
#define EXECUTE_CACHE_37_6 53
#define FREE_REFERENCES_LABEL_37_0 46
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd62;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd82;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_37_4);
      goto rb_tree_copy_25;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_37_10);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_37_14);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_37_15);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_37_16);
      goto loop_21;

    case 10:
      current_block = (Rpc - LABEL_37_18);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_37_19);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_37_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_37_21);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_37_22);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_37_23);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_37_25);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_37_24);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_37_26);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_37_28);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_37_27);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_37_29);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_copy_41)
DEFLABEL (rb_tree_copy_25)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);

DEFLABEL (label_51)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_50;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_50;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_49)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_48;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_48;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_46;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_45)
  goto loop_21;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_44;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_44;
  ((Wrd13.pObj) [2]) = Rvl;

DEFLABEL (label_43)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_37_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_30)
  goto label_43;

DEFLABEL (label_46)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_37_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_37_4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_37_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (loop_42)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_37_16);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_70;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_70;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_69)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_68;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_68;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_17);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_65)
  (Wrd80.Obj) = (Rsp [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_64;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd79.Lng))))
    goto label_64;
  ((Wrd77.pObj) [7]) = (Wrd5.Obj);

DEFLABEL (label_63)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 62))
    goto label_62;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd59.Lng))))
    goto label_62;
  (Wrd53.Obj) = (Rsp [2]);
  ((Wrd57.pObj) [4]) = (Wrd53.Obj);

DEFLABEL (label_61)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_24]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_60;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_60;
  (Wrd33.Obj) = ((Wrd37.pObj) [5]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_59)
  goto loop_21;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_37_24);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = Rvl;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_58;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd41.Lng))))
    goto label_58;
  ((Wrd39.pObj) [5]) = Rvl;

DEFLABEL (label_57)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_56;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_56;
  (Wrd16.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_55)
  goto loop_21;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_37_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_54;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_54;
  ((Wrd14.pObj) [6]) = Rvl;

DEFLABEL (label_53)
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_54)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_37_9]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_39)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  goto label_53;

DEFLABEL (label_56)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.Obj) = (current_block [OBJECT_37_9]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_28]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_37)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (current_block [OBJECT_37_8]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_26]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_38)
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  goto label_57;

DEFLABEL (label_60)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.Obj) = (current_block [OBJECT_37_8]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_34)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_37_2]);
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_23]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_35)
  (Wrd62.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd62.Obj));
  goto label_61;

DEFLABEL (label_64)
  (Wrd86.Obj) = (Rsp [0]);
  (Wrd87.Obj) = (current_block [OBJECT_37_7]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_36)
  (Wrd82.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd82.Obj));
  goto label_63;

DEFLABEL (label_66)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_37_7]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_33)
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_37_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_37_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_7 5
#define LABEL_38_5 7
#define LABEL_38_9 9
#define LABEL_38_10 11
#define LABEL_38_13 13
#define LABEL_38_11 15
#define LABEL_38_12 17
#define LABEL_38_15 19
#define LABEL_38_14 21
#define ENVIRONMENT_LABEL_38_3 37
#define DEBUGGING_LABEL_38_2 36
#define OBJECT_38_6 35
#define OBJECT_38_5 34
#define OBJECT_38_4 33
#define OBJECT_38_3 32
#define OBJECT_38_2 31
#define OBJECT_38_1 30
#define OBJECT_38_0 29
#define EXECUTE_CACHE_38_16 23
#define EXECUTE_CACHE_38_8 25
#define EXECUTE_CACHE_38_6 27
#define FREE_REFERENCES_LABEL_38_0 22
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_38_4);
      goto rb_tree_height_11;

    case 1:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_38_13);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_38_15);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_height_17)
DEFLABEL (rb_tree_height_11)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_38_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_20;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_9;

DEFLABEL (label_20)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_38_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 2);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_38_10);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (current_block [OBJECT_38_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_28;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_28;
  (Wrd15.Obj) = ((Wrd19.pObj) [6]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_27)
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  goto loop_9;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_11);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_24)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd11.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd9.Lng)))
    goto label_23;
  Rvl = (LONG_TO_FIXNUM (Wrd9.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_38_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_38_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_7 5
#define LABEL_39_5 7
#define LABEL_39_9 9
#define LABEL_39_10 11
#define LABEL_39_12 13
#define LABEL_39_11 15
#define LABEL_39_14 17
#define LABEL_39_13 19
#define LABEL_39_15 21
#define ENVIRONMENT_LABEL_39_3 35
#define DEBUGGING_LABEL_39_2 34
#define OBJECT_39_6 33
#define OBJECT_39_5 32
#define OBJECT_39_4 31
#define OBJECT_39_3 30
#define OBJECT_39_2 29
#define OBJECT_39_1 28
#define OBJECT_39_0 27
#define EXECUTE_CACHE_39_8 23
#define EXECUTE_CACHE_39_6 25
#define FREE_REFERENCES_LABEL_39_0 22
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_39_4);
      goto rb_tree_size_11;

    case 1:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_39_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_39_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_39_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_39_13);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_39_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_size_18)
DEFLABEL (rb_tree_size_11)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_7);

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_9;

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_39_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_19)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_39_10);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rvl = (current_block [OBJECT_39_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_31;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_31;
  (Wrd12.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_30)
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  goto loop_9;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_13);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_27;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_27;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_27;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd20.uLng) == 26)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_25)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_24;
  Rvl = (LONG_TO_FIXNUM (Wrd21.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_39_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_39_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_7 5
#define LABEL_40_5 7
#define LABEL_40_9 9
#define ENVIRONMENT_LABEL_40_3 21
#define DEBUGGING_LABEL_40_2 20
#define OBJECT_40_4 19
#define OBJECT_40_3 18
#define OBJECT_40_2 17
#define OBJECT_40_1 16
#define OBJECT_40_0 15
#define EXECUTE_CACHE_40_8 11
#define EXECUTE_CACHE_40_6 13
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_40_4);
      goto rb_tree_emptyP_3;

    case 1:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_emptyP_7)
DEFLABEL (rb_tree_emptyP_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_40_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);

DEFLABEL (label_13)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_12;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_12;
  (Wrd9.Obj) = ((Wrd18.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_40_4]);

DEFLABEL (label_8)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_40_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_7 5
#define LABEL_41_5 7
#define LABEL_41_10 9
#define LABEL_41_9 11
#define LABEL_41_11 13
#define LABEL_41_12 15
#define LABEL_41_13 17
#define LABEL_41_15 19
#define LABEL_41_16 21
#define LABEL_41_18 23
#define LABEL_41_19 25
#define LABEL_41_17 27
#define LABEL_41_21 29
#define LABEL_41_22 31
#define LABEL_41_20 33
#define LABEL_41_23 35
#define LABEL_41_25 37
#define ENVIRONMENT_LABEL_41_3 54
#define DEBUGGING_LABEL_41_2 53
#define OBJECT_41_5 52
#define OBJECT_41_4 51
#define OBJECT_41_3 50
#define OBJECT_41_2 49
#define OBJECT_41_1 48
#define OBJECT_41_0 47
#define EXECUTE_CACHE_41_24 39
#define EXECUTE_CACHE_41_14 41
#define EXECUTE_CACHE_41_8 43
#define EXECUTE_CACHE_41_6 45
#define FREE_REFERENCES_LABEL_41_0 38
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd47;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto rb_tree_equalP_21;

    case 1:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_41_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_41_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_41_16);
      goto loop_18;

    case 10:
      current_block = (Rpc - LABEL_41_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_41_19);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_41_21);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_41_22);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_41_20);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_41_23);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_41_25);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_equalP_30)
DEFLABEL (rb_tree_equalP_21)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_10);

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_36;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_36;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_35)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_34;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd31.Lng))))
    goto label_34;
  (Wrd23.Obj) = ((Wrd29.pObj) [3]);

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (Wrd23.Obj))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (* (--Rsp)) = Rvl;
  goto loop_18;

DEFLABEL (label_34)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (current_block [OBJECT_41_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_24)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_41_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_7);
  goto label_38;

DEFLABEL (loop_31)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_41_16);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_49;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_49;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_48)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_47;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd36.Lng))))
    goto label_47;
  (Wrd30.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_46)
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_41_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_45;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_45;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_44)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_43;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_43;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_42)
  (Wrd42.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_41_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_41_23);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_24]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_41_25);
  (Rsp [1]) = Rvl;
  goto loop_18;

DEFLABEL (label_43)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_41_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_41_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_21]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_41_5]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_41_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd47.Obj) = (Rsp [1]);
  if (! ((Wrd47.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_50;
  Rvl = (current_block [OBJECT_41_4]);
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_7 5
#define LABEL_42_5 7
#define LABEL_42_9 9
#define LABEL_42_11 11
#define LABEL_42_12 13
#define LABEL_42_13 15
#define LABEL_42_15 17
#define LABEL_42_16 19
#define LABEL_42_17 21
#define LABEL_42_18 23
#define LABEL_42_19 25
#define ENVIRONMENT_LABEL_42_3 43
#define DEBUGGING_LABEL_42_2 42
#define OBJECT_42_6 41
#define OBJECT_42_5 40
#define OBJECT_42_4 39
#define OBJECT_42_3 38
#define OBJECT_42_2 37
#define OBJECT_42_1 36
#define OBJECT_42_0 35
#define EXECUTE_CACHE_42_14 27
#define EXECUTE_CACHE_42_10 29
#define EXECUTE_CACHE_42_8 31
#define EXECUTE_CACHE_42_6 33
#define FREE_REFERENCES_LABEL_42_0 26
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_42_4);
      goto rb_tree__alist_21;

    case 1:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_42_12);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto loop_17;

    case 8:
      current_block = (Rpc - LABEL_42_16);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_42_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_42_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree__alist_29)
DEFLABEL (rb_tree__alist_21)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = (current_block [OBJECT_42_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_33;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_32)
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_42_2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_13);
  (* (--Rsp)) = Rvl;
  goto loop_17;

DEFLABEL (label_33)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_42_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (label_24)
  (Wrd24.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_42_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_42_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  goto label_36;

DEFLABEL (loop_30)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_42_15);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_44;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_44;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_43)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_42;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_41)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_42_2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_40;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  ((Wrd52.pObj) [1]) = (Wrd45.Obj);

DEFLABEL (label_39)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_42_19);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_17;

DEFLABEL (label_40)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_6]), 2);

DEFLABEL (label_27)
  goto label_39;

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_42_5]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (label_26)
  (Wrd23.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_42_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_7 5
#define LABEL_43_5 7
#define LABEL_43_9 9
#define LABEL_43_11 11
#define LABEL_43_12 13
#define LABEL_43_14 15
#define LABEL_43_15 17
#define LABEL_43_16 19
#define LABEL_43_17 21
#define ENVIRONMENT_LABEL_43_3 38
#define DEBUGGING_LABEL_43_2 37
#define OBJECT_43_5 36
#define OBJECT_43_4 35
#define OBJECT_43_3 34
#define OBJECT_43_2 33
#define OBJECT_43_1 32
#define OBJECT_43_0 31
#define EXECUTE_CACHE_43_13 23
#define EXECUTE_CACHE_43_10 25
#define EXECUTE_CACHE_43_8 27
#define EXECUTE_CACHE_43_6 29
#define FREE_REFERENCES_LABEL_43_0 22
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_43_4);
      goto rb_tree_key_list_17;

    case 1:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_43_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_43_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_43_14);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_43_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_43_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_43_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_key_list_23)
DEFLABEL (rb_tree_key_list_17)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_43_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_27;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_26)
  (Wrd27.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_43_12);
  (* (--Rsp)) = Rvl;
  goto loop_13;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_43_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 2);

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_43_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  goto label_28;

DEFLABEL (loop_24)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_43_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_33)
  (Wrd26.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_32;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd32.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_17);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_32)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 2);

DEFLABEL (label_21)
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_43_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 2);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_7 5
#define LABEL_44_5 7
#define LABEL_44_9 9
#define LABEL_44_11 11
#define LABEL_44_12 13
#define LABEL_44_14 15
#define LABEL_44_15 17
#define LABEL_44_16 19
#define LABEL_44_17 21
#define ENVIRONMENT_LABEL_44_3 38
#define DEBUGGING_LABEL_44_2 37
#define OBJECT_44_5 36
#define OBJECT_44_4 35
#define OBJECT_44_3 34
#define OBJECT_44_2 33
#define OBJECT_44_1 32
#define OBJECT_44_0 31
#define EXECUTE_CACHE_44_13 23
#define EXECUTE_CACHE_44_10 25
#define EXECUTE_CACHE_44_8 27
#define EXECUTE_CACHE_44_6 29
#define FREE_REFERENCES_LABEL_44_0 22
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_4);
      goto rb_tree_datum_list_17;

    case 1:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_44_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_44_14);
      goto loop_13;

    case 7:
      current_block = (Rpc - LABEL_44_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_44_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_44_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_datum_list_23)
DEFLABEL (rb_tree_datum_list_17)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_44_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_27;
  (Wrd8.Obj) = ((Wrd14.pObj) [3]);

DEFLABEL (label_26)
  (Wrd27.Obj) = (current_block [OBJECT_44_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_12);
  (* (--Rsp)) = Rvl;
  goto loop_13;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_44_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_44_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_7);
  goto label_28;

DEFLABEL (loop_24)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_44_14);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_34;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_33)
  (Wrd26.Obj) = (current_block [OBJECT_44_2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_32;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  ((Wrd32.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_17);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_32)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_5]), 2);

DEFLABEL (label_21)
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_44_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_7 5
#define LABEL_45_5 7
#define LABEL_45_9 9
#define ENVIRONMENT_LABEL_45_3 22
#define DEBUGGING_LABEL_45_2 21
#define OBJECT_45_3 20
#define OBJECT_45_2 19
#define OBJECT_45_1 18
#define OBJECT_45_0 17
#define EXECUTE_CACHE_45_10 11
#define EXECUTE_CACHE_45_8 13
#define EXECUTE_CACHE_45_6 15
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_4);
      goto rb_tree_min_4;

    case 1:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_min_7)
DEFLABEL (rb_tree_min_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_45_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_7 5
#define LABEL_46_5 7
#define LABEL_46_9 9
#define ENVIRONMENT_LABEL_46_3 22
#define DEBUGGING_LABEL_46_2 21
#define OBJECT_46_3 20
#define OBJECT_46_2 19
#define OBJECT_46_1 18
#define OBJECT_46_0 17
#define EXECUTE_CACHE_46_10 11
#define EXECUTE_CACHE_46_8 13
#define EXECUTE_CACHE_46_6 15
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_46_4);
      goto rb_tree_min_datum_4;

    case 1:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_min_datum_7)
DEFLABEL (rb_tree_min_datum_4)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_46_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_7 5
#define LABEL_47_5 7
#define LABEL_47_9 9
#define LABEL_47_11 11
#define LABEL_47_12 13
#define ENVIRONMENT_LABEL_47_3 27
#define DEBUGGING_LABEL_47_2 26
#define OBJECT_47_4 25
#define OBJECT_47_3 24
#define OBJECT_47_2 23
#define OBJECT_47_1 22
#define OBJECT_47_0 21
#define EXECUTE_CACHE_47_10 15
#define EXECUTE_CACHE_47_8 17
#define EXECUTE_CACHE_47_6 19
#define FREE_REFERENCES_LABEL_47_0 14
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_4);
      goto rb_tree_min_pair_6;

    case 1:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_47_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_min_pair_11)
DEFLABEL (rb_tree_min_pair_6)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_13)
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_47_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_47_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_7 5
#define LABEL_48_5 7
#define LABEL_48_9 9
#define LABEL_48_11 11
#define LABEL_48_12 13
#define ENVIRONMENT_LABEL_48_3 28
#define DEBUGGING_LABEL_48_2 27
#define OBJECT_48_3 26
#define OBJECT_48_2 25
#define OBJECT_48_1 24
#define OBJECT_48_0 23
#define EXECUTE_CACHE_48_13 15
#define EXECUTE_CACHE_48_10 17
#define EXECUTE_CACHE_48_8 19
#define EXECUTE_CACHE_48_6 21
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto rb_tree_delete_minB_7;

    case 1:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_48_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_minB_11)
DEFLABEL (rb_tree_delete_minB_7)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_48_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_3]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_7 5
#define LABEL_49_5 7
#define LABEL_49_9 9
#define LABEL_49_11 11
#define LABEL_49_12 13
#define ENVIRONMENT_LABEL_49_3 28
#define DEBUGGING_LABEL_49_2 27
#define OBJECT_49_3 26
#define OBJECT_49_2 25
#define OBJECT_49_1 24
#define OBJECT_49_0 23
#define EXECUTE_CACHE_49_13 15
#define EXECUTE_CACHE_49_10 17
#define EXECUTE_CACHE_49_8 19
#define EXECUTE_CACHE_49_6 21
#define FREE_REFERENCES_LABEL_49_0 14
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_49_4);
      goto rb_tree_delete_min_datumB_7;

    case 1:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_min_datumB_11)
DEFLABEL (rb_tree_delete_min_datumB_7)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_49_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_3]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_7 5
#define LABEL_50_5 7
#define LABEL_50_9 9
#define LABEL_50_11 11
#define LABEL_50_12 13
#define LABEL_50_13 15
#define ENVIRONMENT_LABEL_50_3 31
#define DEBUGGING_LABEL_50_2 30
#define OBJECT_50_4 29
#define OBJECT_50_3 28
#define OBJECT_50_2 27
#define OBJECT_50_1 26
#define OBJECT_50_0 25
#define EXECUTE_CACHE_50_14 17
#define EXECUTE_CACHE_50_10 19
#define EXECUTE_CACHE_50_8 21
#define EXECUTE_CACHE_50_6 23
#define FREE_REFERENCES_LABEL_50_0 16
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto rb_tree_delete_min_pairB_9;

    case 1:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_50_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_50_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_min_pairB_14)
DEFLABEL (rb_tree_delete_min_pairB_9)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_17;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_16)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_50_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_12)
  (Wrd23.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_50_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_7 5
#define LABEL_51_5 7
#define LABEL_51_9 9
#define ENVIRONMENT_LABEL_51_3 22
#define DEBUGGING_LABEL_51_2 21
#define OBJECT_51_3 20
#define OBJECT_51_2 19
#define OBJECT_51_1 18
#define OBJECT_51_0 17
#define EXECUTE_CACHE_51_10 11
#define EXECUTE_CACHE_51_8 13
#define EXECUTE_CACHE_51_6 15
#define FREE_REFERENCES_LABEL_51_0 10
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_51_4);
      goto rb_tree_max_4;

    case 1:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_51_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_max_7)
DEFLABEL (rb_tree_max_4)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_51_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_3]), 2);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_7 5
#define LABEL_52_5 7
#define LABEL_52_9 9
#define ENVIRONMENT_LABEL_52_3 22
#define DEBUGGING_LABEL_52_2 21
#define OBJECT_52_3 20
#define OBJECT_52_2 19
#define OBJECT_52_1 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_10 11
#define EXECUTE_CACHE_52_8 13
#define EXECUTE_CACHE_52_6 15
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_52_4);
      goto rb_tree_max_datum_4;

    case 1:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_52_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_max_datum_7)
DEFLABEL (rb_tree_max_datum_4)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_52_2]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_3]), 2);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_7);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_7 5
#define LABEL_53_5 7
#define LABEL_53_9 9
#define LABEL_53_11 11
#define LABEL_53_12 13
#define ENVIRONMENT_LABEL_53_3 27
#define DEBUGGING_LABEL_53_2 26
#define OBJECT_53_4 25
#define OBJECT_53_3 24
#define OBJECT_53_2 23
#define OBJECT_53_1 22
#define OBJECT_53_0 21
#define EXECUTE_CACHE_53_10 15
#define EXECUTE_CACHE_53_8 17
#define EXECUTE_CACHE_53_6 19
#define FREE_REFERENCES_LABEL_53_0 14
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_53_4);
      goto rb_tree_max_pair_6;

    case 1:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_max_pair_11)
DEFLABEL (rb_tree_max_pair_6)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_16;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_14;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_14;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_13)
  (Wrd40.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_53_4]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 2);

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_53_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_7);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_7 5
#define LABEL_54_5 7
#define LABEL_54_9 9
#define LABEL_54_11 11
#define LABEL_54_12 13
#define ENVIRONMENT_LABEL_54_3 28
#define DEBUGGING_LABEL_54_2 27
#define OBJECT_54_3 26
#define OBJECT_54_2 25
#define OBJECT_54_1 24
#define OBJECT_54_0 23
#define EXECUTE_CACHE_54_13 15
#define EXECUTE_CACHE_54_10 17
#define EXECUTE_CACHE_54_8 19
#define EXECUTE_CACHE_54_6 21
#define FREE_REFERENCES_LABEL_54_0 14
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_54_4);
      goto rb_tree_delete_maxB_7;

    case 1:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_54_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_54_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_maxB_11)
DEFLABEL (rb_tree_delete_maxB_7)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_54_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_7);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_7 5
#define LABEL_55_5 7
#define LABEL_55_9 9
#define LABEL_55_11 11
#define LABEL_55_12 13
#define ENVIRONMENT_LABEL_55_3 28
#define DEBUGGING_LABEL_55_2 27
#define OBJECT_55_3 26
#define OBJECT_55_2 25
#define OBJECT_55_1 24
#define OBJECT_55_0 23
#define EXECUTE_CACHE_55_13 15
#define EXECUTE_CACHE_55_10 17
#define EXECUTE_CACHE_55_8 19
#define EXECUTE_CACHE_55_6 21
#define FREE_REFERENCES_LABEL_55_0 14
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_55_4);
      goto rb_tree_delete_max_datumB_7;

    case 1:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_55_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_55_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_max_datumB_11)
DEFLABEL (rb_tree_delete_max_datumB_7)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_55_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_7 5
#define LABEL_56_5 7
#define LABEL_56_9 9
#define LABEL_56_11 11
#define LABEL_56_12 13
#define LABEL_56_13 15
#define ENVIRONMENT_LABEL_56_3 31
#define DEBUGGING_LABEL_56_2 30
#define OBJECT_56_4 29
#define OBJECT_56_3 28
#define OBJECT_56_2 27
#define OBJECT_56_1 26
#define OBJECT_56_0 25
#define EXECUTE_CACHE_56_14 17
#define EXECUTE_CACHE_56_10 19
#define EXECUTE_CACHE_56_8 21
#define EXECUTE_CACHE_56_6 23
#define FREE_REFERENCES_LABEL_56_0 16
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_56_4);
      goto rb_tree_delete_max_pairB_9;

    case 1:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_56_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_56_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_56_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rb_tree_delete_max_pairB_14)
DEFLABEL (rb_tree_delete_max_pairB_9)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 62))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_17;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_16)
  (Wrd39.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_56_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_56_4]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 2);

DEFLABEL (label_12)
  (Wrd23.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_56_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_56_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_56_7);
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_8 11
#define LABEL_57_9 13
#define ENVIRONMENT_LABEL_57_3 18
#define DEBUGGING_LABEL_57_2 17
#define OBJECT_57_2 16
#define OBJECT_57_1 15
#define OBJECT_57_0 14
#define FREE_REFERENCES_LABEL_57_0 14
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto min_node_7;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_57_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_57_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (min_node_14)
DEFLABEL (min_node_7)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_20;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd30.pObj) [2]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_5;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_57_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_57_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (loop_15)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_57_7);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_25;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd30.pObj) [5]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_24;
  (Wrd11.Obj) = ((Wrd17.pObj) [5]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_5;

DEFLABEL (label_24)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_57_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_57_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define LABEL_58_8 11
#define LABEL_58_9 13
#define ENVIRONMENT_LABEL_58_3 18
#define DEBUGGING_LABEL_58_2 17
#define OBJECT_58_2 16
#define OBJECT_58_1 15
#define OBJECT_58_0 14
#define FREE_REFERENCES_LABEL_58_0 14
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      goto max_node_7;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_58_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_58_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (max_node_14)
DEFLABEL (max_node_7)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_20;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd30.pObj) [2]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_5;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_58_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_58_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (loop_15)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_58_7);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_25;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd30.pObj) [6]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_24;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_24;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_5;

DEFLABEL (label_24)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_58_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_58_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_9 13
#define LABEL_59_10 15
#define LABEL_59_11 17
#define LABEL_59_12 19
#define ENVIRONMENT_LABEL_59_3 25
#define DEBUGGING_LABEL_59_2 24
#define OBJECT_59_3 23
#define OBJECT_59_2 22
#define OBJECT_59_1 21
#define OBJECT_59_0 20
#define FREE_REFERENCES_LABEL_59_0 20
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
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
      goto next_node_14;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_59_10);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_59_11);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_59_12);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_node_23)
DEFLABEL (next_node_14)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_30;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd30.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd28.pObj) [6]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;

DEFLABEL (label_26)
  goto loop_6;

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_29;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_12;

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_59_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_59_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

DEFLABEL (loop_24)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_59_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_36;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_36;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_35)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_34;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_34;
  (Wrd23.Obj) = ((Wrd29.pObj) [6]);

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [1]);
  if (! ((Wrd39.Obj) == (Wrd23.Obj)))
    goto label_31;
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_34)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_59_0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_59_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_59_10);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_41;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd30.pObj) [5]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_40;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_40;
  (Wrd11.Obj) = ((Wrd17.pObj) [5]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd11.Obj);
  goto loop_12;

DEFLABEL (label_40)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_59_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_59_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define ENVIRONMENT_LABEL_60_3 12
#define DEBUGGING_LABEL_60_2 11
#define OBJECT_60_2 10
#define OBJECT_60_1 9
#define OBJECT_60_0 8
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rbtree_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_60_4);
      goto node_pair_2;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_pair_7)
DEFLABEL (node_pair_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_8)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_60_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_60_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
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
#define LABEL_31 47
#define LABEL_32 49
#define ENVIRONMENT_LABEL_3 83
#define DEBUGGING_LABEL_2 82
#define PURIFICATION_ROOT 81
#define OBJECT_20 80
#define OBJECT_19 79
#define OBJECT_18 78
#define OBJECT_17 77
#define OBJECT_16 76
#define OBJECT_15 75
#define OBJECT_14 74
#define OBJECT_13 73
#define OBJECT_12 72
#define OBJECT_11 71
#define OBJECT_10 70
#define OBJECT_9 69
#define OBJECT_8 68
#define OBJECT_7 67
#define OBJECT_6 66
#define OBJECT_5 65
#define OBJECT_4 64
#define OBJECT_3 63
#define OBJECT_2 62
#define OBJECT_1 61
#define OBJECT_0 60
#define FREE_REFERENCE_1 51
#define FREE_REFERENCE_0 52
#define GLOBAL_EXECUTE_CACHE_12 54
#define GLOBAL_EXECUTE_CACHE_10 56
#define GLOBAL_EXECUTE_CACHE_6 58
#define FREE_REFERENCES_LABEL_0 50
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rbtree_so_b754de401c2d8521 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd20;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto make_tree_37;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_34;

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
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto make_node_38;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_29;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_28;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto expression_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_31)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_41)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_40)
  {
    static const short sections [] =
      {
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
	1,
	1,
	1,
	1,
	1,
	1,
	2,
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
	0,
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
	0,
	1,
	2,
	1,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 60)
      goto label_39;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_39)
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
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_49;
  Wrd11 = Wrd15;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_5)
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
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
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
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

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
    goto label_45;
  Wrd11 = Wrd15;

DEFLABEL (label_44)
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
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

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
    goto label_43;
  Wrd11 = Wrd15;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (make_tree_37)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (make_tree_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (make_node_38)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (make_node_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rbtree_so_b754de401c2d8521 [60] =
  {
    { "rbtree_so_code_1", 1, rbtree_so_code_1 },
    { "rbtree_so_code_2", 1, rbtree_so_code_2 },
    { "rbtree_so_code_3", 1, rbtree_so_code_3 },
    { "rbtree_so_code_4", 1, rbtree_so_code_4 },
    { "rbtree_so_code_5", 4, rbtree_so_code_5 },
    { "rbtree_so_code_6", 11, rbtree_so_code_6 },
    { "rbtree_so_code_7", 2, rbtree_so_code_7 },
    { "rbtree_so_code_8", 1, rbtree_so_code_8 },
    { "rbtree_so_code_9", 1, rbtree_so_code_9 },
    { "rbtree_so_code_10", 1, rbtree_so_code_10 },
    { "rbtree_so_code_11", 1, rbtree_so_code_11 },
    { "rbtree_so_code_12", 1, rbtree_so_code_12 },
    { "rbtree_so_code_13", 1, rbtree_so_code_13 },
    { "rbtree_so_code_14", 1, rbtree_so_code_14 },
    { "rbtree_so_code_15", 1, rbtree_so_code_15 },
    { "rbtree_so_code_16", 1, rbtree_so_code_16 },
    { "rbtree_so_code_17", 1, rbtree_so_code_17 },
    { "rbtree_so_code_18", 1, rbtree_so_code_18 },
    { "rbtree_so_code_19", 1, rbtree_so_code_19 },
    { "rbtree_so_code_20", 4, rbtree_so_code_20 },
    { "rbtree_so_code_21", 1, rbtree_so_code_21 },
    { "rbtree_so_code_22", 1, rbtree_so_code_22 },
    { "rbtree_so_code_23", 1, rbtree_so_code_23 },
    { "rbtree_so_code_24", 1, rbtree_so_code_24 },
    { "rbtree_so_code_25", 1, rbtree_so_code_25 },
    { "rbtree_so_code_26", 1, rbtree_so_code_26 },
    { "rbtree_so_code_27", 18, rbtree_so_code_27 },
    { "rbtree_so_code_28", 1, rbtree_so_code_28 },
    { "rbtree_so_code_29", 23, rbtree_so_code_29 },
    { "rbtree_so_code_30", 28, rbtree_so_code_30 },
    { "rbtree_so_code_31", 9, rbtree_so_code_31 },
    { "rbtree_so_code_32", 5, rbtree_so_code_32 },
    { "rbtree_so_code_33", 13, rbtree_so_code_33 },
    { "rbtree_so_code_34", 21, rbtree_so_code_34 },
    { "rbtree_so_code_35", 38, rbtree_so_code_35 },
    { "rbtree_so_code_36", 13, rbtree_so_code_36 },
    { "rbtree_so_code_37", 22, rbtree_so_code_37 },
    { "rbtree_so_code_38", 10, rbtree_so_code_38 },
    { "rbtree_so_code_39", 10, rbtree_so_code_39 },
    { "rbtree_so_code_40", 4, rbtree_so_code_40 },
    { "rbtree_so_code_41", 18, rbtree_so_code_41 },
    { "rbtree_so_code_42", 12, rbtree_so_code_42 },
    { "rbtree_so_code_43", 10, rbtree_so_code_43 },
    { "rbtree_so_code_44", 10, rbtree_so_code_44 },
    { "rbtree_so_code_45", 4, rbtree_so_code_45 },
    { "rbtree_so_code_46", 4, rbtree_so_code_46 },
    { "rbtree_so_code_47", 6, rbtree_so_code_47 },
    { "rbtree_so_code_48", 6, rbtree_so_code_48 },
    { "rbtree_so_code_49", 6, rbtree_so_code_49 },
    { "rbtree_so_code_50", 7, rbtree_so_code_50 },
    { "rbtree_so_code_51", 4, rbtree_so_code_51 },
    { "rbtree_so_code_52", 4, rbtree_so_code_52 },
    { "rbtree_so_code_53", 6, rbtree_so_code_53 },
    { "rbtree_so_code_54", 6, rbtree_so_code_54 },
    { "rbtree_so_code_55", 6, rbtree_so_code_55 },
    { "rbtree_so_code_56", 7, rbtree_so_code_56 },
    { "rbtree_so_code_57", 6, rbtree_so_code_57 },
    { "rbtree_so_code_58", 6, rbtree_so_code_58 },
    { "rbtree_so_code_59", 9, rbtree_so_code_59 },
    { "rbtree_so_code_60", 3, rbtree_so_code_60 }
  };

int
decl_rbtree_so_b754de401c2d8521 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rbtree_so_b754de401c2d8521);
  return (0);
}

DECLARE_COMPILED_CODE ("rbtree.so", 24, decl_rbtree_so_b754de401c2d8521, rbtree_so_b754de401c2d8521)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rbtree_so_data_b754de401c2d8521 [6527] =
  "\x86\x01\x64\xba\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xc3\xbd\x1d\x81\x22\x29\x21\x9f\x2b\xbe\x1d\xb0\x85\x88"
  "\x07\xb1\x80\xc1\xbf\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\xc2\x07\x0d\x0d\x0d\x0d\x0d"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0c\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb5\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb5\x1d"
  "\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb5\x1d\x83\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb5\x1d\x84\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xb5\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb1\x80\xb7\x0e\xbf\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x85\x84\x1b\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1d"
  "\x85\x84\x1b\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x84"
  "\x1b\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x1d\x85\x84\x1b"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x81\x83\xb5\x1b\x85"
  "\xb1\x84\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\x0d\x1c\x84\x1b\x85\x1b\xc1\x1c\xb5\x1d\x81\x82\xb1\x83\x1b\x0d"
  "\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x81\xb5\x0d\x1c\x85\x1b\x1b\x84\x1b\x86"
  "\xb1\x83\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\xc1\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x85"
  "\x1d\x81\x82\xb1\x83\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x86\x83\x85\x84\x82\xb5\xb1\x81\x1b\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x83\x06\x07\x1b\xb5\x1b\x1d"
  "\x1b\x86\xb1\x85\x84\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x85\x81"
  "\x82\xb1\x83\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x84\x86"
  "\xb5\x81\x82\xb1\x83\x1b\x0d\xbd\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x84\x85\x80\xb1\x81\x1b\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x84\x85\x80\xb1\x81\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x81\x1b\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x81\x07\xb1\x82\x1b\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x81\xb1\x82\x08\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xb1\x81\x08\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb1\x82\x08\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\xb1\x82\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x81\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x1b\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x1b\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x1b\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x1b\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x84\xb1\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x85\xb1\x81\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x83"
  "\xb1\x85\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x17\xb8\x88\xb0\xb7\xb1\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb5\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x0d\x1c\x0c\x0d\x0d\x0d\x1b\x1b\x0d\x08\x8d\x1b\x0d\x1b"
  "\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x1b\x0d\x0d\x0d\x0d\x9b\xb6"
  "\x2a\xb4\x2a\xb3\x2a\xb2\x2a\x9b\xc3\x0d\x1c\x0c\x0d\x0d\x0d\x08"
  "\x8a\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72\x62\x74\x72\x65\x65"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x19\x04\x83\x04\x03\x02\x1a\x04\x83\x04"
  "\x03\x02\x1b\x04\x83\x04\x03\x02\x0d\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x73\x65\x74\x21\x02\x1c\x04\x84\x06\x03\x02\x0f\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67"
  "\x2e\x31\x09\x02\x20\x0a\x81\x85\x02\x1f\x08\x81\x83\x02\x1e\x06"
  "\x81\x83\x02\x1d\x04\x83\x04\x09\x12\x0a\x02\x0e\x66\x6c\x6f\x6e"
  "\x75\x6d\x2d\x65\x71\x75\x61\x6c\x3f\x0d\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x6c\x65\x73\x73\x3f\x04\x65\x71\x3f\x06\x66\x69\x78\x3a\x3d"
  "\x06\x66\x6c\x6f\x3a\x3d\x06\x66\x69\x78\x3a\x3c\x06\x66\x6c\x6f"
  "\x3a\x3c\x06\x04\x0a\x6d\x61\x6b\x65\x2d\x74\x72\x65\x65\x0b\x02"
  "\x2b\x18\x84\x06\x2a\x16\x84\x06\x29\x14\x84\x06\x28\x12\x84\x06"
  "\x27\x10\x84\x06\x26\x0e\x81\x85\x02\x25\x0c\x81\x85\x02\x24\x0a"
  "\x81\x85\x02\x23\x08\x81\x85\x02\x22\x06\x81\x85\x02\x21\x04\x84"
  "\x06\x17\x26\x0c\x02\x08\x02\x0f\x72\x65\x64\x2f\x62\x6c\x61\x63"
  "\x6b\x20\x74\x72\x65\x65\x0d\x03\x09\x72\x62\x2d\x74\x72\x65\x65"
  "\x3f\x0e\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0f\x03\x2d"
  "\x06\x81\x85\x02\x2c\x04\x84\x06\x05\x0f\x10\x02\x09\x2e\x04\x83"
  "\x04\x03\x11\x02\x0a\x2f\x04\x83\x04\x03\x12\x02\x0b\x30\x04\x83"
  "\x04\x03\x13\x02\x0c\x31\x04\x83\x04\x03\x14\x02\x0d\x32\x04\x83"
  "\x04\x03\x15\x02\x0e\x33\x04\x83\x04\x03\x16\x02\x0f\x02\x34\x04"
  "\x84\x06\x03\x17\x02\x10\x02\x35\x04\x84\x06\x03\x18\x02\x11\x02"
  "\x36\x04\x84\x06\x03\x19\x02\x12\x02\x37\x04\x84\x06\x03\x1a\x02"
  "\x13\x02\x38\x04\x84\x06\x03\x1b\x02\x14\x02\x39\x04\x84\x06\x03"
  "\x1c\x02\x15\x07\x2e\x74\x61\x67\x2e\x32\x02\x3d\x0a\x81\x85\x02"
  "\x3c\x08\x81\x83\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x09\x12"
  "\x1d\x02\x16\x05\x6c\x65\x66\x74\x1e\x06\x72\x69\x67\x68\x74\x1f"
  "\x3e\x04\x83\x04\x03\x20\x02\x17\x1f\x1e\x3f\x04\x83\x04\x03\x21"
  "\x02\x18\x1e\x40\x04\x84\x06\x03\x0a\x22\x02\x19\x02\x1e\x41\x04"
  "\x85\x08\x03\x0b\x23\x02\x1a\x1f\x42\x04\x84\x06\x03\x0a\x24\x02"
  "\x1b\x02\x1f\x43\x04\x85\x08\x03\x0b\x25\x02\x1c\x02\x1e\x1f\x55"
  "\x26\x81\x89\x02\x54\x24\x81\x89\x02\x53\x22\x81\x85\x02\x52\x20"
  "\x81\x85\x02\x51\x1e\x81\x83\x02\x50\x1c\x81\x8b\x02\x4f\x1a\x81"
  "\x83\x02\x4e\x18\x81\x83\x02\x4d\x16\x81\x8d\x02\x4c\x14\x81\x8d"
  "\x02\x4b\x12\x81\x89\x02\x4a\x10\x81\x89\x02\x49\x0e\x85\x08\x48"
  "\x0c\x81\x87\x02\x47\x0a\x81\x89\x02\x46\x08\x81\x8b\x02\x45\x06"
  "\x81\x89\x02\x44\x04\x81\x83\x02\x25\x31\x26\x02\x1d\x1f\x1e\x05"
  "\x09\x72\x6f\x74\x61\x74\x65\x2b\x21\x27\x02\x56\x04\x85\x08\x03"
  "\x0b\x28\x02\x1e\x04\x72\x65\x64\x29\x1e\x1f\x17\x73\x65\x74\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65"
  "\x73\x21\x2a\x02\x0d\x10\x72\x62\x2d\x74\x72\x65\x65\x2f\x69\x6e"
  "\x73\x65\x72\x74\x21\x2b\x15\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x2d\x6d\x61\x73\x6b\x2f\x67\x63\x2d\x6f\x6b\x2c\x02\x03\x0e\x05"
  "\x0f\x04\x0a\x6d\x61\x6b\x65\x2d\x6e\x6f\x64\x65\x2d\x04\x0e\x69"
  "\x6e\x73\x65\x72\x74\x2d\x66\x69\x78\x75\x70\x21\x2e\x05\x6d\x30"
  "\x81\x95\x02\x6c\x2e\x81\x95\x02\x6b\x2c\x81\x95\x02\x6a\x2a\x81"
  "\x95\x02\x69\x28\x81\x95\x02\x68\x26\x81\x95\x02\x67\x24\x81\x95"
  "\x02\x66\x22\x81\x93\x02\x65\x20\x81\x91\x02\x64\x1e\x81\x91\x02"
  "\x63\x1c\x81\x91\x02\x62\x1a\x81\x95\x02\x61\x18\x81\x91\x02\x60"
  "\x16\x81\x93\x02\x5f\x14\x81\x91\x02\x5e\x12\x81\x93\x02\x5d\x10"
  "\x81\x91\x02\x5c\x0e\x81\x8f\x02\x5b\x0c\x81\x89\x02\x5a\x0a\x81"
  "\x87\x02\x59\x08\x81\x87\x02\x58\x06\x81\x87\x02\x57\x04\x85\x08"
  "\x2f\x4c\x2f\x02\x1f\x02\x06\x62\x6c\x61\x63\x6b\x30\x1f\x1e\x29"
  "\x05\x27\x02\x89\x01\x3a\x81\x85\x02\x88\x01\x38\x81\x85\x02\x87"
  "\x01\x36\x81\x89\x02\x86\x01\x34\x81\x89\x02\x85\x01\x32\x81\x89"
  "\x02\x84\x01\x30\x81\x89\x02\x83\x01\x2e\x81\x89\x02\x82\x01\x2c"
  "\x81\x8b\x02\x81\x01\x2a\x81\x8b\x02\x80\x01\x28\x81\x89\x02\x7f"
  "\x26\x81\x89\x02\x7e\x24\x81\x89\x02\x7d\x22\x81\x89\x02\x7c\x20"
  "\x81\x89\x02\x7b\x1e\x81\x89\x02\x7a\x1c\x81\x89\x02\x79\x1a\x81"
  "\x89\x02\x78\x18\x81\x89\x02\x77\x16\x81\x89\x02\x76\x14\x81\x85"
  "\x02\x75\x12\x81\x85\x02\x74\x10\x81\x85\x02\x73\x0e\x81\x83\x02"
  "\x72\x0c\x81\x83\x02\x71\x0a\x81\x87\x02\x70\x08\x81\x89\x02\x6f"
  "\x06\x81\x89\x02\x6e\x04\x84\x06\x39\x4b\x31\x02\x20\x04\x63\x64"
  "\x72\x04\x63\x61\x72\x04\x0d\x6d\x61\x6b\x65\x2d\x72\x62\x2d\x74"
  "\x72\x65\x65\x32\x05\x2b\x03\x92\x01\x14\x81\x8b\x02\x91\x01\x12"
  "\x81\x8b\x02\x90\x01\x10\x81\x8f\x02\x8f\x01\x0e\x81\x8f\x02\x8e"
  "\x01\x0c\x81\x8d\x02\x8d\x01\x0a\x81\x8d\x02\x8c\x01\x08\x81\x8b"
  "\x02\x8b\x01\x06\x81\x87\x02\x8a\x01\x04\x85\x08\x13\x1e\x33\x02"
  "\x21\x02\x2a\x2c\x02\x97\x01\x0c\x81\x85\x02\x96\x01\x0a\x81\x85"
  "\x02\x95\x01\x08\x81\x83\x02\x94\x01\x06\x81\x85\x02\x93\x01\x04"
  "\x83\x04\x0b\x12\x34\x02\x22\x02\x0d\x10\x72\x62\x2d\x74\x72\x65"
  "\x65\x2f\x64\x65\x6c\x65\x74\x65\x21\x35\x03\x0e\x05\x0f\x04\x0d"
  "\x64\x65\x6c\x65\x74\x65\x2d\x6e\x6f\x64\x65\x21\x36\x04\xa4\x01"
  "\x1c\x81\x8b\x02\xa3\x01\x1a\x81\x8b\x02\xa2\x01\x18\x81\x8b\x02"
  "\xa1\x01\x16\x81\x8d\x02\xa0\x01\x14\x81\x8b\x02\x9f\x01\x12\x81"
  "\x8d\x02\x9e\x01\x10\x81\x8b\x02\x9d\x01\x0e\x81\x89\x02\x9c\x01"
  "\x0c\x81\x87\x02\x9b\x01\x0a\x81\x85\x02\x9a\x01\x08\x81\x85\x02"
  "\x99\x01\x06\x81\x85\x02\x98\x01\x04\x84\x06\x1b\x2e\x37\x02\x23"
  "\x02\x30\x2a\x2c\x02\x05\x0e\x64\x65\x6c\x65\x74\x65\x2d\x66\x69"
  "\x78\x75\x70\x21\x2c\x03\x0a\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65"
  "\x2a\x03\xb9\x01\x2c\x81\x87\x02\xb8\x01\x2a\x81\x87\x02\xb7\x01"
  "\x28\x81\x87\x02\xb6\x01\x26\x81\x87\x02\xb5\x01\x24\x81\x87\x02"
  "\xb4\x01\x22\x81\x87\x02\xb3\x01\x20\x81\x87\x02\xb2\x01\x1e\x81"
  "\x87\x02\xb1\x01\x1c\x81\x83\x02\xb0\x01\x1a\x81\x89\x02\xaf\x01"
  "\x18\x81\x89\x02\xae\x01\x16\x81\x85\x02\xad\x01\x14\x81\x87\x02"
  "\xac\x01\x12\x81\x85\x02\xab\x01\x10\x81\x8b\x02\xaa\x01\x0e\x81"
  "\x8b\x02\xa9\x01\x0c\x81\x8b\x02\xa8\x01\x0a\x81\x8b\x02\xa7\x01"
  "\x08\x81\x89\x02\xa6\x01\x06\x81\x87\x02\xa5\x01\x04\x84\x06\x2b"
  "\x40\x38\x02\x24\x1e\x30\x02\x29\x1f\x05\x27\x02\xdf\x01\x4e\x81"
  "\x8f\x02\xde\x01\x4c\x81\x8f\x02\xdd\x01\x4a\x81\x8f\x02\xdc\x01"
  "\x48\x81\x91\x02\xdb\x01\x46\x81\x91\x02\xda\x01\x44\x81\x8f\x02"
  "\xd9\x01\x42\x81\x8f\x02\xd8\x01\x40\x81\x8f\x02\xd7\x01\x3e\x81"
  "\x8f\x02\xd6\x01\x3c\x81\x8f\x02\xd5\x01\x3a\x81\x93\x02\xd4\x01"
  "\x38\x81\x93\x02\xd3\x01\x36\x81\x91\x02\xd2\x01\x34\x81\x91\x02"
  "\xd1\x01\x32\x81\x91\x02\xd0\x01\x30\x81\x91\x02\xcf\x01\x2e\x81"
  "\x91\x02\xce\x01\x2c\x81\x91\x02\xcd\x01\x2a\x81\x91\x02\xcc\x01"
  "\x28\x81\x91\x02\xcb\x01\x26\x81\x91\x02\xca\x01\x24\x81\x91\x02"
  "\xc9\x01\x22\x81\x91\x02\xc8\x01\x20\x81\x91\x02\xc7\x01\x1e\x81"
  "\x83\x02\xc6\x01\x1c\x81\x83\x02\xc5\x01\x1a\x81\x83\x02\xc4\x01"
  "\x18\x81\x91\x02\xc3\x01\x16\x81\x91\x02\xc2\x01\x14\x81\x8b\x02"
  "\xc1\x01\x12\x81\x8b\x02\xc0\x01\x10\x81\x8b\x02\xbf\x01\x0e\x81"
  "\x8d\x02\xbe\x01\x0c\x81\x8f\x02\xbd\x01\x0a\x81\x8f\x02\xbc\x01"
  "\x08\x81\x8f\x02\xbb\x01\x06\x81\x83\x02\xba\x01\x04\x85\x08\x4d"
  "\x61\x30\x02\x25\x0d\x0f\x72\x62\x2d\x74\x72\x65\x65\x2f\x6c\x6f"
  "\x6f\x6b\x75\x70\x29\x03\x0e\x05\x0f\x03\xec\x01\x1c\x81\x8d\x02"
  "\xeb\x01\x1a\x81\x8d\x02\xea\x01\x18\x81\x8d\x02\xe9\x01\x16\x81"
  "\x8f\x02\xe8\x01\x14\x81\x8d\x02\xe7\x01\x12\x81\x8f\x02\xe6\x01"
  "\x10\x81\x8d\x02\xe5\x01\x0e\x81\x8b\x02\xe4\x01\x0c\x81\x89\x02"
  "\xe3\x01\x0a\x81\x87\x02\xe2\x01\x08\x81\x87\x02\xe1\x01\x06\x81"
  "\x87\x02\xe0\x01\x04\x85\x08\x1b\x2b\x39\x02\x26\x0d\x0d\x72\x62"
  "\x2d\x74\x72\x65\x65\x2f\x63\x6f\x70\x79\x03\x0e\x05\x0f\x04\x32"
  "\x04\x2d\x05\x82\x02\x2e\xfd\xff\x03\x81\x02\x2c\xfd\xff\x03\x80"
  "\x02\x2a\xfd\xff\x03\xff\x01\x28\xfd\xff\x03\xfe\x01\x26\xfd\xff"
  "\x03\xfd\x01\x24\xfd\xff\x03\xfc\x01\x22\xfd\xff\x03\xfb\x01\x20"
  "\xfd\xff\x03\xfa\x01\x1e\xfd\xff\x03\xf9\x01\x1c\x81\x85\x02\xf8"
  "\x01\x1a\x81\x89\x02\xf7\x01\x18\x81\x87\x02\xf6\x01\x16\x81\x85"
  "\x02\xf5\x01\x14\x81\x85\x02\xf4\x01\x12\x81\x85\x02\xf3\x01\x10"
  "\x81\x89\x02\xf2\x01\x0e\x81\x83\x02\xf1\x01\x0c\x81\x87\x02\xf0"
  "\x01\x0a\x81\x85\x02\xef\x01\x08\x81\x83\x02\xee\x01\x06\x81\x83"
  "\x02\xed\x01\x04\x83\x04\x2d\x43\x3a\x02\x27\x0d\x0f\x72\x62\x2d"
  "\x74\x72\x65\x65\x2f\x68\x65\x69\x67\x68\x74\x3b\x03\x0e\x05\x0f"
  "\x04\x04\x6d\x61\x78\x04\x8c\x02\x16\x81\x87\x02\x8b\x02\x14\x81"
  "\x89\x02\x8a\x02\x12\x81\x85\x02\x89\x02\x10\x81\x83\x02\x88\x02"
  "\x0e\x81\x87\x02\x87\x02\x0c\x81\x83\x02\x86\x02\x0a\x81\x83\x02"
  "\x85\x02\x08\x81\x83\x02\x84\x02\x06\x81\x83\x02\x83\x02\x04\x83"
  "\x04\x15\x26\x3c\x02\x28\x0d\x0d\x72\x62\x2d\x74\x72\x65\x65\x2f"
  "\x73\x69\x7a\x65\x3d\x03\x0e\x05\x0f\x03\x96\x02\x16\x81\x83\x02"
  "\x95\x02\x14\x81\x85\x02\x94\x02\x12\x81\x87\x02\x93\x02\x10\x81"
  "\x83\x02\x92\x02\x0e\x81\x85\x02\x91\x02\x0c\x81\x83\x02\x90\x02"
  "\x0a\x81\x83\x02\x8f\x02\x08\x81\x83\x02\x8e\x02\x06\x81\x83\x02"
  "\x8d\x02\x04\x83\x04\x15\x24\x3e\x02\x29\x0d\x0f\x72\x62\x2d\x74"
  "\x72\x65\x65\x2f\x65\x6d\x70\x74\x79\x3f\x3f\x03\x0e\x05\x0f\x03"
  "\x9a\x02\x0a\x81\x83\x02\x99\x02\x08\x81\x83\x02\x98\x02\x06\x81"
  "\x83\x02\x97\x02\x04\x83\x04\x09\x16\x40\x02\x2a\x0d\x0f\x72\x62"
  "\x2d\x74\x72\x65\x65\x2f\x65\x71\x75\x61\x6c\x3f\x41\x03\x0e\x05"
  "\x0f\x03\x09\x6d\x69\x6e\x2d\x6e\x6f\x64\x65\x42\x03\x2a\x05\xac"
  "\x02\x26\x81\x8d\x02\xab\x02\x24\x81\x8d\x02\xaa\x02\x22\x81\x8d"
  "\x02\xa9\x02\x20\x81\x91\x02\xa8\x02\x1e\x81\x8f\x02\xa7\x02\x1c"
  "\x81\x8d\x02\xa6\x02\x1a\x81\x91\x02\xa5\x02\x18\x81\x8f\x02\xa4"
  "\x02\x16\x81\x8d\x02\xa3\x02\x14\x81\x8b\x02\xa2\x02\x12\x81\x89"
  "\x02\xa1\x02\x10\x81\x89\x02\xa0\x02\x0e\x81\x87\x02\x9f\x02\x0c"
  "\x81\x87\x02\x9e\x02\x0a\x81\x87\x02\x9d\x02\x08\x81\x87\x02\x9c"
  "\x02\x06\x81\x87\x02\x9b\x02\x04\x85\x08\x25\x37\x43\x02\x2b\x09"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x44\x0d\x0f\x72\x62\x2d\x74\x72"
  "\x65\x65\x2d\x3e\x61\x6c\x69\x73\x74\x45\x03\x0e\x05\x0f\x03\x42"
  "\x03\x2a\x05\xb8\x02\x1a\x81\x8b\x02\xb7\x02\x18\x81\x8b\x02\xb6"
  "\x02\x16\x81\x8b\x02\xb5\x02\x14\x81\x89\x02\xb4\x02\x12\x81\x89"
  "\x02\xb3\x02\x10\x81\x87\x02\xb2\x02\x0e\x81\x85\x02\xb1\x02\x0c"
  "\x81\x83\x02\xb0\x02\x0a\x81\x83\x02\xaf\x02\x08\x81\x83\x02\xae"
  "\x02\x06\x81\x83\x02\xad\x02\x04\x83\x04\x19\x2c\x46\x02\x2c\x44"
  "\x0d\x11\x72\x62\x2d\x74\x72\x65\x65\x2f\x6b\x65\x79\x2d\x6c\x69"
  "\x73\x74\x47\x03\x0e\x05\x0f\x03\x42\x03\x2a\x05\xc2\x02\x16\x81"
  "\x8b\x02\xc1\x02\x14\x81\x8b\x02\xc0\x02\x12\x81\x89\x02\xbf\x02"
  "\x10\x81\x89\x02\xbe\x02\x0e\x81\x87\x02\xbd\x02\x0c\x81\x83\x02"
  "\xbc\x02\x0a\x81\x83\x02\xbb\x02\x08\x81\x83\x02\xba\x02\x06\x81"
  "\x83\x02\xb9\x02\x04\x83\x04\x15\x27\x48\x02\x2d\x44\x0d\x13\x72"
  "\x62\x2d\x74\x72\x65\x65\x2f\x64\x61\x74\x75\x6d\x2d\x6c\x69\x73"
  "\x74\x44\x03\x0e\x05\x0f\x03\x42\x03\x2a\x05\xcc\x02\x16\x81\x8b"
  "\x02\xcb\x02\x14\x81\x8b\x02\xca\x02\x12\x81\x89\x02\xc9\x02\x10"
  "\x81\x89\x02\xc8\x02\x0e\x81\x87\x02\xc7\x02\x0c\x81\x83\x02\xc6"
  "\x02\x0a\x81\x83\x02\xc5\x02\x08\x81\x83\x02\xc4\x02\x06\x81\x83"
  "\x02\xc3\x02\x04\x83\x04\x15\x27\x49\x02\x2e\x0d\x0c\x72\x62\x2d"
  "\x74\x72\x65\x65\x2f\x6d\x69\x6e\x4a\x03\x0e\x05\x0f\x03\x42\x04"
  "\xd0\x02\x0a\x81\x85\x02\xcf\x02\x08\x81\x85\x02\xce\x02\x06\x81"
  "\x85\x02\xcd\x02\x04\x84\x06\x09\x17\x4b\x02\x2f\x0d\x12\x72\x62"
  "\x2d\x74\x72\x65\x65\x2f\x6d\x69\x6e\x2d\x64\x61\x74\x75\x6d\x4c"
  "\x03\x0e\x05\x0f\x03\x42\x04\xd4\x02\x0a\x81\x85\x02\xd3\x02\x08"
  "\x81\x85\x02\xd2\x02\x06\x81\x85\x02\xd1\x02\x04\x84\x06\x09\x17"
  "\x4d\x02\x30\x0d\x11\x72\x62\x2d\x74\x72\x65\x65\x2f\x6d\x69\x6e"
  "\x2d\x70\x61\x69\x72\x4e\x03\x0e\x05\x0f\x03\x42\x04\xda\x02\x0e"
  "\x81\x85\x02\xd9\x02\x0c\x81\x83\x02\xd8\x02\x0a\x81\x83\x02\xd7"
  "\x02\x08\x81\x83\x02\xd6\x02\x06\x81\x83\x02\xd5\x02\x04\x83\x04"
  "\x0d\x1c\x4f\x02\x31\x0d\x14\x72\x62\x2d\x74\x72\x65\x65\x2f\x64"
  "\x65\x6c\x65\x74\x65\x2d\x6d\x69\x6e\x21\x50\x03\x0e\x05\x0f\x03"
  "\x42\x04\x36\x05\xe0\x02\x0e\x81\x89\x02\xdf\x02\x0c\x81\x87\x02"
  "\xde\x02\x0a\x81\x85\x02\xdd\x02\x08\x81\x85\x02\xdc\x02\x06\x81"
  "\x85\x02\xdb\x02\x04\x84\x06\x0d\x1d\x51\x02\x32\x0d\x1a\x72\x62"
  "\x2d\x74\x72\x65\x65\x2f\x64\x65\x6c\x65\x74\x65\x2d\x6d\x69\x6e"
  "\x2d\x64\x61\x74\x75\x6d\x21\x52\x03\x0e\x05\x0f\x03\x42\x04\x36"
  "\x05\xe6\x02\x0e\x81\x89\x02\xe5\x02\x0c\x81\x87\x02\xe4\x02\x0a"
  "\x81\x85\x02\xe3\x02\x08\x81\x85\x02\xe2\x02\x06\x81\x85\x02\xe1"
  "\x02\x04\x84\x06\x0d\x1d\x53\x02\x33\x0d\x19\x72\x62\x2d\x74\x72"
  "\x65\x65\x2f\x64\x65\x6c\x65\x74\x65\x2d\x6d\x69\x6e\x2d\x70\x61"
  "\x69\x72\x21\x54\x03\x0e\x05\x0f\x03\x42\x04\x36\x05\xed\x02\x10"
  "\x81\x87\x02\xec\x02\x0e\x81\x87\x02\xeb\x02\x0c\x81\x85\x02\xea"
  "\x02\x0a\x81\x83\x02\xe9\x02\x08\x81\x83\x02\xe8\x02\x06\x81\x83"
  "\x02\xe7\x02\x04\x83\x04\x0f\x20\x55\x02\x34\x0d\x0c\x72\x62\x2d"
  "\x74\x72\x65\x65\x2f\x6d\x61\x78\x56\x03\x0e\x05\x0f\x03\x09\x6d"
  "\x61\x78\x2d\x6e\x6f\x64\x65\x57\x04\xf1\x02\x0a\x81\x85\x02\xf0"
  "\x02\x08\x81\x85\x02\xef\x02\x06\x81\x85\x02\xee\x02\x04\x84\x06"
  "\x09\x17\x58\x02\x35\x0d\x12\x72\x62\x2d\x74\x72\x65\x65\x2f\x6d"
  "\x61\x78\x2d\x64\x61\x74\x75\x6d\x59\x03\x0e\x05\x0f\x03\x57\x04"
  "\xf5\x02\x0a\x81\x85\x02\xf4\x02\x08\x81\x85\x02\xf3\x02\x06\x81"
  "\x85\x02\xf2\x02\x04\x84\x06\x09\x17\x5a\x02\x36\x0d\x11\x72\x62"
  "\x2d\x74\x72\x65\x65\x2f\x6d\x61\x78\x2d\x70\x61\x69\x72\x5b\x03"
  "\x0e\x05\x0f\x03\x57\x04\xfb\x02\x0e\x81\x85\x02\xfa\x02\x0c\x81"
  "\x83\x02\xf9\x02\x0a\x81\x83\x02\xf8\x02\x08\x81\x83\x02\xf7\x02"
  "\x06\x81\x83\x02\xf6\x02\x04\x83\x04\x0d\x1c\x5c\x02\x37\x0d\x14"
  "\x72\x62\x2d\x74\x72\x65\x65\x2f\x64\x65\x6c\x65\x74\x65\x2d\x6d"
  "\x61\x78\x21\x5d\x03\x0e\x05\x0f\x03\x57\x04\x36\x05\x81\x03\x0e"
  "\x81\x89\x02\x80\x03\x0c\x81\x87\x02\xff\x02\x0a\x81\x85\x02\xfe"
  "\x02\x08\x81\x85\x02\xfd\x02\x06\x81\x85\x02\xfc\x02\x04\x84\x06"
  "\x0d\x1d\x5e\x02\x38\x0d\x1a\x72\x62\x2d\x74\x72\x65\x65\x2f\x64"
  "\x65\x6c\x65\x74\x65\x2d\x6d\x61\x78\x2d\x64\x61\x74\x75\x6d\x21"
  "\x5f\x03\x0e\x05\x0f\x03\x57\x04\x36\x05\x87\x03\x0e\x81\x89\x02"
  "\x86\x03\x0c\x81\x87\x02\x85\x03\x0a\x81\x85\x02\x84\x03\x08\x81"
  "\x85\x02\x83\x03\x06\x81\x85\x02\x82\x03\x04\x84\x06\x0d\x1d\x60"
  "\x02\x39\x0d\x19\x72\x62\x2d\x74\x72\x65\x65\x2f\x64\x65\x6c\x65"
  "\x74\x65\x2d\x6d\x61\x78\x2d\x70\x61\x69\x72\x21\x0d\x03\x0e\x05"
  "\x0f\x03\x57\x04\x36\x05\x8e\x03\x10\x81\x87\x02\x8d\x03\x0e\x81"
  "\x87\x02\x8c\x03\x0c\x81\x85\x02\x8b\x03\x0a\x81\x83\x02\x8a\x03"
  "\x08\x81\x83\x02\x89\x03\x06\x81\x83\x02\x88\x03\x04\x83\x04\x0f"
  "\x20\x0f\x02\x3a\x94\x03\x0e\x81\x83\x02\x93\x03\x0c\x81\x83\x02"
  "\x92\x03\x0a\x81\x83\x02\x91\x03\x08\x81\x83\x02\x90\x03\x06\x81"
  "\x83\x02\x8f\x03\x04\x83\x04\x0d\x13\x61\x02\x3b\x9a\x03\x0e\x81"
  "\x83\x02\x99\x03\x0c\x81\x83\x02\x98\x03\x0a\x81\x83\x02\x97\x03"
  "\x08\x81\x83\x02\x96\x03\x06\x81\x83\x02\x95\x03\x04\x83\x04\x0d"
  "\x13\x62\x02\x3c\xa3\x03\x14\x81\x83\x02\xa2\x03\x12\x81\x83\x02"
  "\xa1\x03\x10\x81\x83\x02\xa0\x03\x0e\x81\x85\x02\x9f\x03\x0c\x81"
  "\x83\x02\x9e\x03\x0a\x81\x83\x02\x9d\x03\x08\x81\x83\x02\x9c\x03"
  "\x06\x81\x83\x02\x9b\x03\x04\x83\x04\x13\x1a\x63\x02\x3d\xa6\x03"
  "\x08\x81\x85\x02\xa5\x03\x06\x81\x83\x02\xa4\x03\x04\x83\x04\x07"
  "\x0d\x3d\x04\x63\x04\x62\x04\x61\x04\x0f\x04\x60\x04\x5e\x04\x5c"
  "\x04\x5a\x04\x58\x04\x55\x04\x53\x04\x51\x04\x4f\x04\x4d\x04\x4b"
  "\x04\x49\x04\x48\x04\x46\x04\x43\x04\x40\x04\x3e\x04\x3c\x04\x3a"
  "\x04\x39\x04\x30\x04\x38\x04\x37\x04\x34\x04\x33\x04\x31\x04\x2f"
  "\x04\x28\x04\x26\x0e\x25\x04\x24\x04\x23\x04\x22\x04\x21\x04\x20"
  "\x04\x1d\x04\x2a\x0a\x6e\x6f\x64\x65\x2d\x70\x61\x69\x72\x2a\x57"
  "\x42\x0d\x5f\x5d\x5b\x59\x56\x54\x52\x50\x4e\x4c\x4a\x44\x47\x45"
  "\x41\x3f\x3d\x3b\x29\x2c\x36\x35\x13\x77\x69\x74\x68\x6f\x75\x74"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x0f\x61\x6c\x69\x73"
  "\x74\x2d\x3e\x72\x62\x2d\x74\x72\x65\x65\x2e\x2b\x09\x72\x6f\x74"
  "\x61\x74\x65\x2d\x21\x27\x0b\x73\x65\x74\x2d\x6c\x69\x6e\x6b\x2d"
  "\x21\x0a\x67\x65\x74\x2d\x6c\x69\x6e\x6b\x2d\x0b\x73\x65\x74\x2d"
  "\x6c\x69\x6e\x6b\x2b\x21\x0a\x67\x65\x74\x2d\x6c\x69\x6e\x6b\x2b"
  "\x03\x2d\x64\x05\x62\x2d\x3e\x64\x06\x6e\x6f\x64\x65\x3f\x2a\x2d"
  "\x10\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x63\x6f\x6c\x6f\x72\x21"
  "\x10\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x72\x69\x67\x68\x74\x21"
  "\x0f\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x6c\x65\x66\x74\x21\x0d"
  "\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2d\x75\x70\x21\x10\x73\x65\x74"
  "\x2d\x6e\x6f\x64\x65\x2d\x64\x61\x74\x75\x6d\x21\x0e\x73\x65\x74"
  "\x2d\x6e\x6f\x64\x65\x2d\x6b\x65\x79\x21\x0b\x6e\x6f\x64\x65\x2d"
  "\x63\x6f\x6c\x6f\x72\x0b\x6e\x6f\x64\x65\x2d\x72\x69\x67\x68\x74"
  "\x0a\x6e\x6f\x64\x65\x2d\x6c\x65\x66\x74\x08\x6e\x6f\x64\x65\x2d"
  "\x75\x70\x0b\x6e\x6f\x64\x65\x2d\x64\x61\x74\x75\x6d\x09\x6e\x6f"
  "\x64\x65\x2d\x6b\x65\x79\x0d\x1c\x04\x1b\x04\x1a\x04\x19\x04\x18"
  "\x04\x17\x04\x16\x04\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x0d"
  "\x09\x72\x74\x64\x3a\x6e\x6f\x64\x65\x63\x05\x6e\x6f\x64\x65\x04"
  "\x6b\x65\x79\x06\x64\x61\x74\x75\x6d\x03\x75\x70\x1e\x1f\x06\x63"
  "\x6f\x6c\x6f\x72\x09\x12\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x72\x62\x2d\x74\x72\x65\x65\x32\x0e\x10\x04\x0c\x04\x0a\x04\x0b"
  "\x0f\x73\x65\x74\x2d\x74\x72\x65\x65\x2d\x72\x6f\x6f\x74\x21\x0b"
  "\x74\x72\x65\x65\x2d\x6b\x65\x79\x3c\x3f\x0b\x74\x72\x65\x65\x2d"
  "\x6b\x65\x79\x3d\x3f\x0a\x74\x72\x65\x65\x2d\x72\x6f\x6f\x74\x04"
  "\x04\x04\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x09\x72\x74\x64\x3a\x74\x72\x65\x65\x62\x05\x74"
  "\x72\x65\x65\x05\x72\x6f\x6f\x74\x06\x6b\x65\x79\x3d\x3f\x06\x6b"
  "\x65\x79\x3c\x3f\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x04\x62\x63\x03\x18\x32\x80\x80\x04\x17\x30\x81\x81\x02\x16"
  "\x2e\x81\x81\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x87\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x31\x54";

SCHEME_OBJECT *
rbtree_so_data_b754de401c2d8521 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rbtree_so_data_b754de401c2d8521 [0]))), (sizeof (prog_rbtree_so_data_b754de401c2d8521)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("rbtree.so", rbtree_so_data_b754de401c2d8521)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rbtree.so", "3e42444eee8590dc")
