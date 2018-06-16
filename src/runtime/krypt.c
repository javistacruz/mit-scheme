/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

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
krypt_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto krypt_key_state_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (krypt_key_state_table_3)
DEFLABEL (krypt_key_state_table_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
krypt_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto krypt_key_index_i_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (krypt_key_index_i_3)
DEFLABEL (krypt_key_index_i_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
krypt_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto krypt_key_index_j_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (krypt_key_index_j_3)
DEFLABEL (krypt_key_index_j_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto set_krypt_key_state_tableB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_krypt_key_state_tableB_3)
DEFLABEL (set_krypt_key_state_tableB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto set_krypt_key_index_iB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_krypt_key_index_iB_3)
DEFLABEL (set_krypt_key_index_iB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto set_krypt_key_index_jB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_krypt_key_index_jB_3)
DEFLABEL (set_krypt_key_index_jB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define ENVIRONMENT_LABEL_8_3 17
#define DEBUGGING_LABEL_8_2 16
#define OBJECT_8_3 15
#define OBJECT_8_2 14
#define OBJECT_8_1 13
#define OBJECT_8_0 12
#define FREE_REFERENCE_8_0 11
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto krypt_keyP_4;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (krypt_keyP_10)
DEFLABEL (krypt_keyP_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
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
  Rvl = (current_block [OBJECT_8_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_8_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_7 19
#define OBJECT_9_6 18
#define OBJECT_9_5 17
#define OBJECT_9_4 16
#define OBJECT_9_3 15
#define OBJECT_9_2 14
#define OBJECT_9_1 13
#define OBJECT_9_0 12
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd74;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
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
      goto rcm_keyinit_8;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rcm_keyinit_14)
DEFLABEL (rcm_keyinit_8)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 256L)
    goto label_20;
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_19;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_19;
  (Wrd27.Obj) = (current_block [OBJECT_9_0]);
  ((Wrd31.pObj) [3]) = (Wrd27.Obj);

DEFLABEL (label_18)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_6]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 3);

DEFLABEL (label_17)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_16;
  ((Wrd20.pObj) [4]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_9_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_9_4]);
  (Wrd38.Obj) = (current_block [OBJECT_9_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 3);

DEFLABEL (label_10)
  goto label_18;

DEFLABEL (label_20)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_24;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_24;
  (Wrd42.Obj) = ((Wrd48.pObj) [2]);

DEFLABEL (label_23)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_22;
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_22;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) (Wrd70.Lng)) < ((unsigned long) (Wrd73.Lng))))
    goto label_22;
  (Wrd63.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd65.pObj) = (& ((Wrd71.pObj) [(Wrd63.Lng)]));
  ((Wrd65.pObj) [1]) = (Wrd67.Obj);

DEFLABEL (label_21)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd60.Lng) + 1L);
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  (Rsp [0]) = (Wrd58.Obj);
  goto loop_6;

DEFLABEL (label_22)
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 3);

DEFLABEL (label_12)
  goto label_21;

DEFLABEL (label_24)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_9_1]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_11)
  (Wrd42.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define LABEL_10_8 11
#define LABEL_10_9 13
#define LABEL_10_10 15
#define LABEL_10_11 17
#define LABEL_10_12 19
#define LABEL_10_13 21
#define ENVIRONMENT_LABEL_10_3 31
#define DEBUGGING_LABEL_10_2 30
#define OBJECT_10_7 29
#define OBJECT_10_6 28
#define OBJECT_10_5 27
#define OBJECT_10_4 26
#define OBJECT_10_3 25
#define OBJECT_10_2 24
#define OBJECT_10_1 23
#define OBJECT_10_0 22
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd135;
  machine_word Wrd131;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd176;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd110;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto rcm_key_23;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto loop_20;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_10_11);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_10_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rcm_key_34)
DEFLABEL (rcm_key_23)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_36)
  (Wrd16.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_20;

DEFLABEL (label_37)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (loop_35)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_10_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) < 256L)
    goto label_38;
  Rvl = (current_block [OBJECT_10_7]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_52;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_52;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_51)
  (Wrd43.Obj) = (Rsp [6]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_50;
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_50;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_50;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd32.pChr) = (& ((Wrd40.pChr) [(Wrd29.Lng)]));
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd32.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_49)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_48;
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_48;
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) (Wrd59.Lng)) < ((unsigned long) (Wrd63.Lng))))
    goto label_48;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd55.pObj) = (& ((Wrd61.pObj) [(Wrd52.Lng)]));
  (Wrd50.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_47)
  (Wrd71.Obj) = (* (Rsp++));
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  (Wrd75.Lng) = ((Wrd73.Lng) + (Wrd74.Lng));
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd81.Lng) = ((Wrd78.Lng) + 1L);
  (Wrd84.Lng) = ((Wrd81.Lng) + (Wrd75.Lng));
  {
    long temp = ((Wrd84.Lng) & 255L);
    (Wrd87.Lng) = (((Wrd84.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  (Wrd88.Obj) = (LONG_TO_FIXNUM (Wrd87.Lng));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 10))
    goto label_46;
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 26))
    goto label_46;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) (Wrd98.Lng)) < ((unsigned long) (Wrd102.Lng))))
    goto label_46;
  (Wrd90.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd93.pObj) = (& ((Wrd100.pObj) [(Wrd90.Lng)]));
  (Wrd94.Obj) = ((Wrd93.pObj) [1]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_45)
  (Wrd124.Obj) = (Rsp [2]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 10))
    goto label_44;
  (Wrd116.Obj) = (Rsp [1]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 26))
    goto label_44;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) (Wrd119.Lng)) < ((unsigned long) (Wrd123.Lng))))
    goto label_44;
  (Wrd112.uLng) = (OBJECT_DATUM (Wrd116.Obj));
  (Wrd115.pObj) = (& ((Wrd121.pObj) [(Wrd112.Lng)]));
  (Wrd110.Obj) = ((Wrd115.pObj) [1]);

DEFLABEL (label_43)
  (Wrd181.Obj) = (Rsp [2]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd182.uLng) == 10))
    goto label_42;
  (Wrd173.Obj) = (Rsp [3]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 26))
    goto label_42;
  (Wrd176.Lng) = (FIXNUM_TO_LONG (Wrd173.Obj));
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [0]);
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  if (! (((unsigned long) (Wrd176.Lng)) < ((unsigned long) (Wrd180.Lng))))
    goto label_42;
  (Wrd169.uLng) = (OBJECT_DATUM (Wrd173.Obj));
  (Wrd172.pObj) = (& ((Wrd178.pObj) [(Wrd169.Lng)]));
  ((Wrd172.pObj) [1]) = (Wrd110.Obj);

DEFLABEL (label_41)
  (Wrd160.Obj) = (Rsp [2]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 10))
    goto label_40;
  (Wrd152.Obj) = (Rsp [1]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if (! ((Wrd153.uLng) == 26))
    goto label_40;
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if (! (((unsigned long) (Wrd155.Lng)) < ((unsigned long) (Wrd159.Lng))))
    goto label_40;
  (Wrd147.uLng) = (OBJECT_DATUM (Wrd152.Obj));
  (Wrd150.pObj) = (& ((Wrd157.pObj) [(Wrd147.Lng)]));
  (Wrd151.Obj) = (Rsp [0]);
  ((Wrd150.pObj) [1]) = (Wrd151.Obj);

DEFLABEL (label_39)
  (Wrd132.Obj) = (Rsp [3]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd134.Lng) = ((Wrd133.Lng) + 1L);
  (Wrd131.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));
  (Rsp [3]) = (Wrd131.Obj);
  (Wrd135.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd135.Obj);
  (Wrd137.Obj) = (Rsp [5]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  (Wrd141.Lng) = ((Wrd138.Lng) + 1L);
  (Wrd142.Obj) = (Rsp [6]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  (Wrd144.Lng) = (FIXNUM_REMAINDER ((Wrd141.Lng), (Wrd143.Lng)));
  (Wrd140.Obj) = (LONG_TO_FIXNUM (Wrd144.Lng));
  (Rsp [5]) = (Wrd140.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_20;

DEFLABEL (label_40)
  (Wrd162.Obj) = (Rsp [2]);
  (Wrd163.Obj) = (Rsp [1]);
  (Wrd164.Obj) = (Rsp [0]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 3);

DEFLABEL (label_31)
  goto label_39;

DEFLABEL (label_42)
  (Wrd183.Obj) = (Rsp [2]);
  (Wrd184.Obj) = (Rsp [3]);
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 3);

DEFLABEL (label_32)
  goto label_41;

DEFLABEL (label_44)
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.Obj) = (Rsp [1]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_30)
  (Wrd110.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 2);

DEFLABEL (label_28)
  (Wrd50.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd45.Obj) = (Rsp [6]);
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_10_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 5
#define DEBUGGING_LABEL_11_2 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_11_4);
      goto inc_mod_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (inc_mod_3)
DEFLABEL (inc_mod_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = (FIXNUM_REMAINDER ((Wrd7.Lng), (Wrd9.Lng)));
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 9
#define DEBUGGING_LABEL_12_2 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto rcm_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rcm_3)
DEFLABEL (rcm_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_14 23
#define LABEL_13_15 25
#define LABEL_13_16 27
#define LABEL_13_17 29
#define LABEL_13_18 31
#define LABEL_13_19 33
#define ENVIRONMENT_LABEL_13_3 45
#define DEBUGGING_LABEL_13_2 44
#define OBJECT_13_9 43
#define OBJECT_13_8 42
#define OBJECT_13_7 41
#define OBJECT_13_6 40
#define OBJECT_13_5 39
#define OBJECT_13_4 38
#define OBJECT_13_3 37
#define OBJECT_13_2 36
#define OBJECT_13_1 35
#define OBJECT_13_0 34
#define FREE_REFERENCES_LABEL_13_0 34
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd226;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd254;
  machine_word Wrd250;
  machine_word Wrd249;
  machine_word Wrd237;
  machine_word Wrd234;
  machine_word Wrd238;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd242;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd222;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd198;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd209;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd197;
  machine_word Wrd193;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd175;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd166;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd146;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd276;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd264;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd297;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd289;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd285;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd291;
  machine_word Wrd290;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_13_4);
      goto rcm_iter_32;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto loop_29;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_38;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_13_15);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_13_16);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_13_17);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_13_18);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_13_19);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rcm_iter_49)
DEFLABEL (rcm_iter_32)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_56;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_56;
  (Wrd13.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_55)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_54;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_54;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_53)
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_52;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_52;
  (Wrd45.Obj) = ((Wrd49.pObj) [3]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_51)
  (Wrd59.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd61.Obj);
  goto loop_29;

DEFLABEL (label_52)
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.Obj) = (current_block [OBJECT_13_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_13_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_13_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (loop_50)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_13_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_61;
  (Wrd35.Obj) = (Rsp [7]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_60;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_60;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [3]) = (Wrd28.Obj);

DEFLABEL (label_59)
  (Wrd9.Obj) = (Rsp [7]);
  (Rsp [8]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_2]);
  (Rsp [9]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [10]) = (Wrd11.Obj);
  Rsp = (& (Rsp [8]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_58;

DEFLABEL (label_57)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_8]), 3);

DEFLABEL (label_58)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_57;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_13_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd37.Obj) = (Rsp [7]);
  (Wrd38.Obj) = (current_block [OBJECT_13_3]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_8]), 3);

DEFLABEL (label_37)
  goto label_59;

DEFLABEL (label_61)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd47.Lng) = ((Wrd45.Lng) + 1L);
  {
    long temp = ((Wrd47.Lng) & 255L);
    (Wrd50.Lng) = (((Wrd47.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd66.Obj) = (Rsp [6]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_81;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_81;
  Wrd61 = Wrd50;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) (Wrd61.Lng)) < ((unsigned long) (Wrd65.Lng))))
    goto label_81;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd57.pObj) = (& ((Wrd63.pObj) [(Wrd54.Lng)]));
  (Wrd52.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_80)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd78.Lng) = ((Wrd75.Lng) + (Wrd76.Lng));
  {
    long temp = ((Wrd78.Lng) & 255L);
    (Wrd81.Lng) = (((Wrd78.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd97.Obj) = (Rsp [7]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_79;
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_79;
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) (Wrd92.Lng)) < ((unsigned long) (Wrd96.Lng))))
    goto label_79;
  (Wrd84.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd87.pObj) = (& ((Wrd94.pObj) [(Wrd84.Lng)]));
  (Wrd88.Obj) = ((Wrd87.pObj) [1]);
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_78)
  (Wrd118.Obj) = (Rsp [8]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_77;
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 26))
    goto label_77;
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) (Wrd113.Lng)) < ((unsigned long) (Wrd117.Lng))))
    goto label_77;
  (Wrd106.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  (Wrd109.pObj) = (& ((Wrd115.pObj) [(Wrd106.Lng)]));
  (Wrd104.Obj) = ((Wrd109.pObj) [1]);

DEFLABEL (label_76)
  (Wrd290.Obj) = (Rsp [8]);
  (Wrd291.uLng) = (OBJECT_TYPE (Wrd290.Obj));
  if (! ((Wrd291.uLng) == 10))
    goto label_75;
  (Wrd282.Obj) = (Rsp [2]);
  (Wrd283.uLng) = (OBJECT_TYPE (Wrd282.Obj));
  if (! ((Wrd283.uLng) == 26))
    goto label_75;
  (Wrd285.Lng) = (FIXNUM_TO_LONG (Wrd282.Obj));
  (Wrd287.pObj) = (OBJECT_ADDRESS (Wrd290.Obj));
  (Wrd288.Obj) = ((Wrd287.pObj) [0]);
  (Wrd289.Lng) = (FIXNUM_TO_LONG (Wrd288.Obj));
  if (! (((unsigned long) (Wrd285.Lng)) < ((unsigned long) (Wrd289.Lng))))
    goto label_75;
  (Wrd278.uLng) = (OBJECT_DATUM (Wrd282.Obj));
  (Wrd281.pObj) = (& ((Wrd287.pObj) [(Wrd278.Lng)]));
  ((Wrd281.pObj) [1]) = (Wrd104.Obj);

DEFLABEL (label_74)
  (Wrd269.Obj) = (Rsp [8]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if (! ((Wrd270.uLng) == 10))
    goto label_73;
  (Wrd261.Obj) = (Rsp [1]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if (! ((Wrd262.uLng) == 26))
    goto label_73;
  (Wrd264.Lng) = (FIXNUM_TO_LONG (Wrd261.Obj));
  (Wrd266.pObj) = (OBJECT_ADDRESS (Wrd269.Obj));
  (Wrd267.Obj) = ((Wrd266.pObj) [0]);
  (Wrd268.Lng) = (FIXNUM_TO_LONG (Wrd267.Obj));
  if (! (((unsigned long) (Wrd264.Lng)) < ((unsigned long) (Wrd268.Lng))))
    goto label_73;
  (Wrd256.uLng) = (OBJECT_DATUM (Wrd261.Obj));
  (Wrd259.pObj) = (& ((Wrd266.pObj) [(Wrd256.Lng)]));
  (Wrd260.Obj) = (Rsp [0]);
  ((Wrd259.pObj) [1]) = (Wrd260.Obj);

DEFLABEL (label_72)
  (Wrd139.Obj) = (Rsp [8]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if (! ((Wrd140.uLng) == 10))
    goto label_71;
  (Wrd131.Obj) = (Rsp [1]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 26))
    goto label_71;
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd131.Obj));
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) (Wrd134.Lng)) < ((unsigned long) (Wrd138.Lng))))
    goto label_71;
  (Wrd126.uLng) = (OBJECT_DATUM (Wrd131.Obj));
  (Wrd129.pObj) = (& ((Wrd136.pObj) [(Wrd126.Lng)]));
  (Wrd130.Obj) = ((Wrd129.pObj) [1]);
  (* (--Rsp)) = (Wrd130.Obj);

DEFLABEL (label_70)
  (Wrd160.Obj) = (Rsp [9]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 10))
    goto label_69;
  (Wrd152.Obj) = (Rsp [3]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if (! ((Wrd153.uLng) == 26))
    goto label_69;
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.Lng) = (FIXNUM_TO_LONG (Wrd158.Obj));
  if (! (((unsigned long) (Wrd155.Lng)) < ((unsigned long) (Wrd159.Lng))))
    goto label_69;
  (Wrd148.uLng) = (OBJECT_DATUM (Wrd152.Obj));
  (Wrd151.pObj) = (& ((Wrd157.pObj) [(Wrd148.Lng)]));
  (Wrd146.Obj) = ((Wrd151.pObj) [1]);

DEFLABEL (label_68)
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  (Wrd169.Lng) = ((Wrd168.Lng) + 1L);
  (Wrd170.Obj) = (* (Rsp++));
  Wrd172 = Wrd169;
  (Wrd173.Lng) = (FIXNUM_TO_LONG (Wrd170.Obj));
  (Wrd176.Lng) = ((Wrd172.Lng) + (Wrd173.Lng));
  {
    long temp = ((Wrd176.Lng) & 255L);
    (Wrd179.Lng) = (((Wrd176.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  (Wrd175.Obj) = (LONG_TO_FIXNUM (Wrd179.Lng));
  (Wrd191.Obj) = (Rsp [8]);
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd191.Obj));
  if (! ((Wrd192.uLng) == 10))
    goto label_67;
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd185.uLng) == 26))
    goto label_67;
  Wrd186 = Wrd179;
  (Wrd188.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd189.Obj) = ((Wrd188.pObj) [0]);
  (Wrd190.Lng) = (FIXNUM_TO_LONG (Wrd189.Obj));
  if (! (((unsigned long) (Wrd186.Lng)) < ((unsigned long) (Wrd190.Lng))))
    goto label_67;
  (Wrd180.uLng) = (OBJECT_DATUM (Wrd175.Obj));
  (Wrd183.pObj) = (& ((Wrd188.pObj) [(Wrd180.Lng)]));
  (Wrd184.Obj) = ((Wrd183.pObj) [1]);
  (* (--Rsp)) = (Wrd184.Obj);

DEFLABEL (label_66)
  (Wrd214.Obj) = (Rsp [13]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 30))
    goto label_65;
  (Wrd206.Obj) = (Rsp [4]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if (! ((Wrd207.uLng) == 26))
    goto label_65;
  (Wrd209.Lng) = (FIXNUM_TO_LONG (Wrd206.Obj));
  (Wrd211.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd212.Obj) = ((Wrd211.pObj) [1]);
  (Wrd213.Lng) = (FIXNUM_TO_LONG (Wrd212.Obj));
  if (! (((unsigned long) (Wrd209.Lng)) < ((unsigned long) (Wrd213.Lng))))
    goto label_65;
  (Wrd201.uLng) = (OBJECT_DATUM (Wrd206.Obj));
  (Wrd204.pChr) = (& ((Wrd211.pChr) [(Wrd201.Lng)]));
  (Wrd205.uLng) = ((unsigned long) (((unsigned char *) (Wrd204.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd198.Obj) = (MAKE_OBJECT (26, (Wrd205.uLng)));

DEFLABEL (label_64)
  (Wrd221.Obj) = (* (Rsp++));
  (Wrd223.Lng) = (FIXNUM_TO_LONG (Wrd198.Obj));
  (Wrd224.Lng) = (FIXNUM_TO_LONG (Wrd221.Obj));
  (Wrd225.Lng) = ((Wrd223.Lng) ^ (Wrd224.Lng));
  (Wrd222.Obj) = (LONG_TO_FIXNUM (Wrd225.Lng));
  (Wrd247.Obj) = (Rsp [12]);
  (Wrd248.uLng) = (OBJECT_TYPE (Wrd247.Obj));
  if (! ((Wrd248.uLng) == 30))
    goto label_63;
  (Wrd239.Obj) = (Rsp [3]);
  (Wrd240.uLng) = (OBJECT_TYPE (Wrd239.Obj));
  if (! ((Wrd240.uLng) == 26))
    goto label_63;
  (Wrd242.Lng) = (FIXNUM_TO_LONG (Wrd239.Obj));
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd247.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [1]);
  (Wrd246.Lng) = (FIXNUM_TO_LONG (Wrd245.Obj));
  if (! (((unsigned long) (Wrd242.Lng)) < ((unsigned long) (Wrd246.Lng))))
    goto label_63;
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd238.uLng) == 26))
    goto label_63;
  (Wrd234.uLng) = (OBJECT_DATUM (Wrd239.Obj));
  (Wrd237.pChr) = (& ((Wrd244.pChr) [(Wrd234.Lng)]));
  ((Wrd237.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd222.uLng));

DEFLABEL (label_62)
  (Wrd227.Obj) = (Rsp [3]);
  (Wrd228.Lng) = (FIXNUM_TO_LONG (Wrd227.Obj));
  (Wrd229.Lng) = ((Wrd228.Lng) + 1L);
  (Wrd226.Obj) = (LONG_TO_FIXNUM (Wrd229.Lng));
  (Rsp [3]) = (Wrd226.Obj);
  (Wrd230.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd230.Obj);
  (Wrd231.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd231.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_29;

DEFLABEL (label_63)
  (Wrd249.Obj) = (Rsp [12]);
  (Wrd250.Obj) = (Rsp [3]);
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd254.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  (* (--Rsp)) = (Wrd249.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_7]), 3);

DEFLABEL (label_45)
  goto label_62;

DEFLABEL (label_65)
  (Wrd216.Obj) = (Rsp [13]);
  (Wrd217.Obj) = (Rsp [4]);
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_6]), 2);

DEFLABEL (label_44)
  (Wrd198.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd193.Obj) = (Rsp [8]);
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd193.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd162.Obj) = (Rsp [9]);
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_42)
  (Wrd146.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd141.Obj) = (Rsp [8]);
  (Wrd142.Obj) = (Rsp [1]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd271.Obj) = (Rsp [8]);
  (Wrd272.Obj) = (Rsp [1]);
  (Wrd273.Obj) = (Rsp [0]);
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd273.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 3);

DEFLABEL (label_46)
  goto label_72;

DEFLABEL (label_75)
  (Wrd292.Obj) = (Rsp [8]);
  (Wrd293.Obj) = (Rsp [2]);
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  (* (--Rsp)) = (Wrd292.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 3);

DEFLABEL (label_47)
  goto label_74;

DEFLABEL (label_77)
  (Wrd120.Obj) = (Rsp [8]);
  (Wrd121.Obj) = (Rsp [1]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_40)
  (Wrd104.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd99.Obj) = (Rsp [7]);
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd68.Obj) = (Rsp [6]);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (label_38)
  (Wrd52.Obj) = Rvl;
  goto label_80;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_7 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_11 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_17 19
#define LABEL_14_18 21
#define LABEL_14_19 23
#define LABEL_14_21 25
#define LABEL_14_22 27
#define LABEL_14_23 29
#define LABEL_14_26 31
#define LABEL_14_28 33
#define LABEL_14_29 35
#define LABEL_14_30 37
#define LABEL_14_32 39
#define LABEL_14_33 41
#define LABEL_14_34 43
#define ENVIRONMENT_LABEL_14_3 77
#define DEBUGGING_LABEL_14_2 76
#define OBJECT_14_6 75
#define OBJECT_14_5 74
#define OBJECT_14_4 73
#define OBJECT_14_3 72
#define OBJECT_14_2 71
#define OBJECT_14_1 70
#define OBJECT_14_0 69
#define EXECUTE_CACHE_14_36 45
#define EXECUTE_CACHE_14_35 47
#define EXECUTE_CACHE_14_31 49
#define EXECUTE_CACHE_14_27 51
#define EXECUTE_CACHE_14_24 53
#define EXECUTE_CACHE_14_20 55
#define EXECUTE_CACHE_14_16 57
#define EXECUTE_CACHE_14_25 59
#define EXECUTE_CACHE_14_15 61
#define EXECUTE_CACHE_14_14 63
#define EXECUTE_CACHE_14_10 65
#define EXECUTE_CACHE_14_6 67
#define FREE_REFERENCES_LABEL_14_0 44
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
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
      goto get_krypt_time_string_21;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_17;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_14_19);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_14_22);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_14_23);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_14_26);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_14_28);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_14_29);
      goto label_24;

    case 17:
      current_block = (Rpc - LABEL_14_30);
      goto continuation_1;

    case 18:
      current_block = (Rpc - LABEL_14_32);
      goto label_25;

    case 19:
      current_block = (Rpc - LABEL_14_33);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_14_34);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_krypt_time_string_27)
DEFLABEL (get_krypt_time_string_21)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_26);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_33;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_33;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_32)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_31;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd21.Obj) = (current_block [OBJECT_14_4]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_31;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd10.Obj));
  (Wrd17.pObj) = (& ((Wrd22.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_30)
  (Wrd30.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_30]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_30);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_29;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Obj) = (current_block [OBJECT_14_6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd6.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.pObj) = (& ((Wrd14.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_34]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_35]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_14_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_14_33);
  (Rsp [12]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_36]));

DEFLABEL (label_29)
  (Wrd17.Obj) = (current_block [OBJECT_14_6]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd25.Obj) = (current_block [OBJECT_14_4]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 10
#define DEBUGGING_LABEL_15_2 9
#define OBJECT_15_0 8
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
krypt_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd16;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_15_4);
      goto update_checksum_9;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_checksum_13)
DEFLABEL (update_checksum_9)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd6.Lng) + (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_15;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  {
    long temp = ((Wrd11.Lng) & 255L);
    (Wrd14.Lng) = (((Wrd11.Lng) >= 0) ? temp : (temp == 0) ? 0 : (temp | (LEFT_SHIFT ((-1L), 8))));
  }
  Rvl = (LONG_TO_FIXNUM (Wrd14.Lng));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_17;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_17;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_17;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd22.pChr) = (& ((Wrd29.pChr) [(Wrd19.Lng)]));
  (Wrd23.uLng) = ((unsigned long) (((unsigned char *) (Wrd22.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd43.Lng) = ((Wrd41.Lng) + (Wrd42.Lng));
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Rsp [0]) = (Wrd44.Obj);
  goto loop_6;

DEFLABEL (label_17)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 2);

DEFLABEL (label_11)
  (Wrd16.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_10 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_12 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_22 29
#define LABEL_27 31
#define LABEL_28 33
#define TAG_29 15
#define LABEL_25 35
#define TAG_26 16
#define LABEL_33 37
#define LABEL_37 39
#define LABEL_40 41
#define LABEL_23 43
#define TAG_24 20
#define LABEL_30 45
#define TAG_31 21
#define LABEL_32 47
#define LABEL_43 49
#define LABEL_47 51
#define LABEL_48 53
#define LABEL_49 55
#define LABEL_44 57
#define LABEL_52 59
#define LABEL_54 61
#define LABEL_45 63
#define LABEL_55 65
#define LABEL_38 67
#define LABEL_59 69
#define LABEL_50 71
#define LABEL_53 73
#define LABEL_64 75
#define LABEL_34 77
#define LABEL_35 79
#define LABEL_57 81
#define TAG_58 39
#define LABEL_60 83
#define LABEL_62 85
#define LABEL_65 87
#define LABEL_70 89
#define LABEL_74 91
#define LABEL_72 93
#define LABEL_75 95
#define LABEL_76 97
#define LABEL_78 99
#define LABEL_79 101
#define LABEL_80 103
#define LABEL_81 105
#define LABEL_82 107
#define LABEL_84 109
#define LABEL_85 111
#define LABEL_92 113
#define LABEL_94 115
#define LABEL_97 117
#define LABEL_86 119
#define LABEL_88 121
#define LABEL_102 123
#define LABEL_103 125
#define LABEL_104 127
#define LABEL_89 129
#define LABEL_90 131
#define LABEL_91 133
#define LABEL_98 135
#define LABEL_95 137
#define LABEL_99 139
#define LABEL_101 141
#define LABEL_105 143
#define LABEL_108 145
#define LABEL_109 147
#define LABEL_111 149
#define LABEL_110 151
#define LABEL_112 153
#define LABEL_114 155
#define LABEL_115 157
#define LABEL_113 159
#define LABEL_116 161
#define LABEL_117 163
#define LABEL_118 165
#define LABEL_119 167
#define LABEL_120 169
#define LABEL_121 171
#define LABEL_122 173
#define LABEL_123 175
#define LABEL_124 177
#define ENVIRONMENT_LABEL_3 277
#define DEBUGGING_LABEL_2 276
#define PURIFICATION_ROOT 275
#define OBJECT_36 274
#define OBJECT_35 273
#define OBJECT_34 272
#define OBJECT_33 271
#define OBJECT_32 270
#define OBJECT_31 269
#define OBJECT_30 268
#define OBJECT_29 267
#define OBJECT_28 266
#define OBJECT_27 265
#define OBJECT_26 264
#define OBJECT_25 263
#define OBJECT_24 262
#define OBJECT_23 261
#define OBJECT_22 260
#define OBJECT_21 259
#define OBJECT_20 258
#define OBJECT_19 257
#define OBJECT_18 256
#define OBJECT_17 255
#define OBJECT_16 254
#define OBJECT_15 253
#define OBJECT_14 252
#define OBJECT_13 251
#define OBJECT_12 250
#define OBJECT_11 249
#define OBJECT_10 248
#define OBJECT_9 247
#define OBJECT_8 246
#define OBJECT_7 245
#define OBJECT_6 244
#define OBJECT_5 243
#define OBJECT_4 242
#define OBJECT_3 241
#define OBJECT_2 240
#define OBJECT_1 239
#define OBJECT_0 238
#define EXECUTE_CACHE_107 179
#define EXECUTE_CACHE_106 181
#define EXECUTE_CACHE_100 183
#define EXECUTE_CACHE_96 185
#define EXECUTE_CACHE_93 187
#define EXECUTE_CACHE_87 189
#define EXECUTE_CACHE_83 191
#define EXECUTE_CACHE_77 193
#define EXECUTE_CACHE_73 195
#define EXECUTE_CACHE_71 197
#define EXECUTE_CACHE_69 199
#define EXECUTE_CACHE_68 201
#define EXECUTE_CACHE_67 203
#define EXECUTE_CACHE_66 205
#define EXECUTE_CACHE_63 207
#define EXECUTE_CACHE_61 209
#define EXECUTE_CACHE_56 211
#define EXECUTE_CACHE_51 213
#define EXECUTE_CACHE_46 215
#define EXECUTE_CACHE_42 217
#define EXECUTE_CACHE_41 219
#define EXECUTE_CACHE_39 221
#define EXECUTE_CACHE_36 223
#define FREE_REFERENCE_2 226
#define FREE_REFERENCE_1 227
#define FREE_REFERENCE_0 228
#define GLOBAL_EXECUTE_CACHE_21 230
#define GLOBAL_EXECUTE_CACHE_13 232
#define GLOBAL_EXECUTE_CACHE_11 234
#define GLOBAL_EXECUTE_CACHE_7 236
#define FREE_REFERENCES_LABEL_0 178
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
krypt_so_8a5fe8ca99e1db2e (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd21;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_10);
      goto label_138;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_139;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_krypt_key_160;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_140;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_27);
      goto continuation_70;

    case 15:
      current_block = (Rpc - LABEL_28);
      goto lambda_163;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto check_key_120;

    case 17:
      current_block = (Rpc - LABEL_33);
      goto continuation_128;

    case 18:
      current_block = (Rpc - LABEL_37);
      goto continuation_122;

    case 19:
      current_block = (Rpc - LABEL_40);
      goto continuation_123;

    case 20:
      current_block = (Rpc - LABEL_23);
      goto initialize_key_134;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto lambda_164;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_43);
      goto continuation_71;

    case 24:
      current_block = (Rpc - LABEL_47);
      goto label_141;

    case 25:
      current_block = (Rpc - LABEL_48);
      goto label_142;

    case 26:
      current_block = (Rpc - LABEL_49);
      goto label_143;

    case 27:
      current_block = (Rpc - LABEL_44);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_52);
      goto label_144;

    case 29:
      current_block = (Rpc - LABEL_54);
      goto label_145;

    case 30:
      current_block = (Rpc - LABEL_45);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_55);
      goto label_146;

    case 32:
      current_block = (Rpc - LABEL_38);
      goto lambda_127;

    case 33:
      current_block = (Rpc - LABEL_59);
      goto label_147;

    case 34:
      current_block = (Rpc - LABEL_50);
      goto continuation_74;

    case 35:
      current_block = (Rpc - LABEL_53);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_64);
      goto label_148;

    case 37:
      current_block = (Rpc - LABEL_34);
      goto continuation_130;

    case 38:
      current_block = (Rpc - LABEL_35);
      goto continuation_129;

    case 39:
      current_block = (Rpc - LABEL_57);
      goto lambda_166;

    case 40:
      current_block = (Rpc - LABEL_60);
      goto lambda_126;

    case 41:
      current_block = (Rpc - LABEL_62);
      goto continuation_76;

    case 42:
      current_block = (Rpc - LABEL_65);
      goto continuation_26;

    case 43:
      current_block = (Rpc - LABEL_70);
      goto continuation_78;

    case 44:
      current_block = (Rpc - LABEL_74);
      goto label_149;

    case 45:
      current_block = (Rpc - LABEL_72);
      goto continuation_27;

    case 46:
      current_block = (Rpc - LABEL_75);
      goto continuation_81;

    case 47:
      current_block = (Rpc - LABEL_76);
      goto continuation_28;

    case 48:
      current_block = (Rpc - LABEL_78);
      goto continuation_82;

    case 49:
      current_block = (Rpc - LABEL_79);
      goto continuation_29;

    case 50:
      current_block = (Rpc - LABEL_80);
      goto continuation_83;

    case 51:
      current_block = (Rpc - LABEL_81);
      goto continuation_31;

    case 52:
      current_block = (Rpc - LABEL_82);
      goto continuation_30;

    case 53:
      current_block = (Rpc - LABEL_84);
      goto continuation_84;

    case 54:
      current_block = (Rpc - LABEL_85);
      goto continuation_39;

    case 55:
      current_block = (Rpc - LABEL_92);
      goto label_150;

    case 56:
      current_block = (Rpc - LABEL_94);
      goto loop_50;

    case 57:
      current_block = (Rpc - LABEL_97);
      goto label_151;

    case 58:
      current_block = (Rpc - LABEL_86);
      goto continuation_32;

    case 59:
      current_block = (Rpc - LABEL_88);
      goto continuation_85;

    case 60:
      current_block = (Rpc - LABEL_102);
      goto continuation_57;

    case 61:
      current_block = (Rpc - LABEL_103);
      goto label_153;

    case 62:
      current_block = (Rpc - LABEL_104);
      goto label_154;

    case 63:
      current_block = (Rpc - LABEL_89);
      goto continuation_55;

    case 64:
      current_block = (Rpc - LABEL_90);
      goto continuation_54;

    case 65:
      current_block = (Rpc - LABEL_91);
      goto continuation_53;

    case 66:
      current_block = (Rpc - LABEL_98);
      goto continuation_45;

    case 67:
      current_block = (Rpc - LABEL_95);
      goto continuation_47;

    case 68:
      current_block = (Rpc - LABEL_99);
      goto continuation_33;

    case 69:
      current_block = (Rpc - LABEL_101);
      goto continuation_86;

    case 70:
      current_block = (Rpc - LABEL_105);
      goto continuation_56;

    case 71:
      current_block = (Rpc - LABEL_108);
      goto continuation_48;

    case 72:
      current_block = (Rpc - LABEL_109);
      goto continuation_34;

    case 73:
      current_block = (Rpc - LABEL_111);
      goto label_152;

    case 74:
      current_block = (Rpc - LABEL_110);
      goto continuation_87;

    case 75:
      current_block = (Rpc - LABEL_112);
      goto loop_102;

    case 76:
      current_block = (Rpc - LABEL_114);
      goto label_155;

    case 77:
      current_block = (Rpc - LABEL_115);
      goto continuation_94;

    case 78:
      current_block = (Rpc - LABEL_113);
      goto continuation_99;

    case 79:
      current_block = (Rpc - LABEL_116);
      goto continuation_95;

    case 80:
      current_block = (Rpc - LABEL_117);
      goto continuation_100;

    case 81:
      current_block = (Rpc - LABEL_118);
      goto continuation_104;

    case 82:
      current_block = (Rpc - LABEL_119);
      goto label_156;

    case 83:
      current_block = (Rpc - LABEL_120);
      goto label_157;

    case 84:
      current_block = (Rpc - LABEL_121);
      goto label_158;

    case 85:
      current_block = (Rpc - LABEL_122);
      goto label_171;

    case 86:
      current_block = (Rpc - LABEL_123);
      goto label_172;

    case 87:
      current_block = (Rpc - LABEL_124);
      goto expression_137;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_137)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_123])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_172)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_171)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	0,
	1,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
      goto label_170;
    blocks = (current_block [OBJECT_36]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_122])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_170)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_176;
  Wrd11 = Wrd15;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_174;
  Wrd11 = Wrd15;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd22 = Wrd27;
  ((Wrd22.pObj) [2]) = (Wrd30.Obj);
  ((Wrd22.pObj) [3]) = (Wrd7.Obj);
  ((Wrd29.pObj) [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18]);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x305, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_17]), 3);

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_139)
  (Wrd11.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_138)
  (Wrd11.Obj) = Rvl;
  goto label_175;

DEFLABEL (make_krypt_key_160)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_krypt_key_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_178;
  Wrd9 = Wrd13;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd8.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_140)
  (Wrd9.Obj) = Rvl;
  goto label_177;

DEFLABEL (lambda_163)
  CLOSURE_HEADER (LABEL_28);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto check_key_120;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_188;
  Wrd5 = Wrd9;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_186;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_185)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_184;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));

DEFLABEL (label_183)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd34.Lng) = ((Wrd32.Lng) + (Wrd33.Lng));
  (Wrd38.Lng) = ((Wrd34.Lng) + 6L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26]), 1);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_182;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_181)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) - 256L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_82);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_180;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_179)
  (Wrd17.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (Rsp [9]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd24.Lng) = ((Wrd21.Lng) + 5L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (Rsp [4]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100]));

DEFLABEL (label_180)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_152)
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_148)
  (Wrd5.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_145)
  (Wrd19.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_144)
  (* (--Rsp)) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd6.pObj));

DEFLABEL (label_146)
  (Wrd5.Obj) = Rvl;
  goto label_187;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 5L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  goto loop_50;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_197;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = (0 - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_197;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_196)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_90);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_105);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 30))
    goto label_195;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_194)
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) - 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_193;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_193;
  (Wrd26.uLng) = ((unsigned long) (((unsigned char *) (Wrd30.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd26.uLng)));

DEFLABEL (label_192)
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 30)
    goto label_190;

DEFLABEL (label_189)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 3);

DEFLABEL (label_190)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_189;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_189;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd49.uLng) == 2))
    goto label_189;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd45.pChr) = (& ((Wrd55.pChr) [(Wrd42.Lng)]));
  ((Wrd45.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd22.Obj)));
  Rsp = (& (Rsp [4]));

DEFLABEL (label_191)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_193)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_22]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30]), 2);

DEFLABEL (label_154)
  (Wrd22.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_153)
  (Wrd7.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd15.Obj) = (current_block [OBJECT_22]);
  (Wrd17.Obj) = (Rsp [9]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_150)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_89);
  goto label_191;

DEFLABEL (check_key_162)
DEFLABEL (check_key_120)
  INTERRUPT_CHECK (26, LABEL_25);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto initialize_key_134;

DEFLABEL (initialize_key_161)
DEFLABEL (initialize_key_134)
  INTERRUPT_CHECK (26, LABEL_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_15])))
    goto label_204;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_37);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_203;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_198;
  (Wrd49.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_34);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67]));

DEFLABEL (label_198)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_202)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_201)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [0]) = (Wrd36.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_200)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_199;
  Rvl = (current_block [OBJECT_21]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_199)
  (Wrd20.Obj) = (current_block [OBJECT_20]);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (label_203)
  Rsp = (& (Rsp [1]));
  goto label_202;

DEFLABEL (label_204)
  Rsp = (& (Rsp [1]));
  goto label_200;

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (lambda_164)
  CLOSURE_HEADER (LABEL_30);

DEFLABEL (lambda_118)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto check_key_120;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_214;
  Wrd6 = Wrd10;

DEFLABEL (label_213)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 30))
    goto label_212;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_211)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_210;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) + 25L);
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_210;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_209)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 5L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd12.Lng) = ((Wrd9.Lng) + 5L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 30))
    goto label_208;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_207)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) - 256L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_88);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_110);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_205;
  (Wrd7.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_102;

DEFLABEL (label_205)
  (Wrd8.Obj) = (Rsp [11]);
  if ((Wrd8.Obj) == (current_block [OBJECT_32]))
    goto label_206;
  (Rsp [12]) = (Wrd8.Obj);
  Rsp = (& (Rsp [12]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_206)
  (Wrd12.Obj) = (current_block [OBJECT_33]);
  (Rsp [12]) = (Wrd12.Obj);
  Rsp = (& (Rsp [12]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (label_208)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_149)
  (Wrd5.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd22.Obj) = (current_block [OBJECT_25]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_143)
  (* (--Rsp)) = Rvl;
  goto label_209;

DEFLABEL (label_212)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_142)
  (Wrd12.Obj) = Rvl;
  goto label_211;

DEFLABEL (label_214)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd7.pObj));

DEFLABEL (label_141)
  (Wrd6.Obj) = Rvl;
  goto label_213;

DEFLABEL (lambda_165)
DEFLABEL (lambda_127)
  INTERRUPT_CHECK (26, LABEL_38);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_216;
  Wrd10 = Wrd14;

DEFLABEL (label_215)
  (Wrd19.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (label_216)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd11.pObj));

DEFLABEL (label_147)
  (Wrd10.Obj) = Rvl;
  goto label_215;

DEFLABEL (lambda_166)
  CLOSURE_HEADER (LABEL_57);

DEFLABEL (lambda_125)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_167)
DEFLABEL (lambda_126)
  INTERRUPT_CHECK (26, LABEL_60);
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (loop_168)
DEFLABEL (loop_50)
  INTERRUPT_CHECK (26, LABEL_94);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_217;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd42.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [11]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd6.Obj) = (Rsp [7]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + 256L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_50;

DEFLABEL (label_217)
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 30))
    goto label_219;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_218)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd26.Lng) = ((Wrd24.Lng) - (Wrd23.Lng));
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd33.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [12]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd6.Obj) = (Rsp [8]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd8.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (label_219)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_151)
  (Wrd9.Obj) = Rvl;
  goto label_218;

DEFLABEL (loop_169)
DEFLABEL (loop_102)
  INTERRUPT_CHECK (26, LABEL_112);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) < (Wrd8.Lng)))
    goto label_220;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd36.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) + 256L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_102;

DEFLABEL (label_220)
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 30))
    goto label_230;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_229)
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_116);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_228;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd45.Lng) == 0)
    goto label_223;

DEFLABEL (label_222)
  (Wrd12.Obj) = (Rsp [12]);
  if ((Wrd12.Obj) == (current_block [OBJECT_32]))
    goto label_221;
  (Rsp [11]) = (Wrd12.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [12]) = (Wrd15.Obj);
  Rsp = (& (Rsp [11]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_221)
  (Wrd17.Obj) = (current_block [OBJECT_34]);
  (Rsp [12]) = (Wrd17.Obj);
  Rsp = (& (Rsp [12]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42]));

DEFLABEL (label_223)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_227;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));

DEFLABEL (label_226)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd32.Lng) = ((Wrd31.Lng) - 1L);
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 30))
    goto label_225;
  if (! (INDEX_FIXNUM_P (Wrd30.Obj)))
    goto label_225;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd39.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  ((Wrd38.pObj) [1]) = (Wrd39.Obj);

DEFLABEL (label_224)
  Rvl = (Rsp [4]);
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (label_225)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_158)
  goto label_224;

DEFLABEL (label_227)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_157)
  (Wrd19.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_228)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_156)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_222;
  goto label_223;

DEFLABEL (label_230)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 1);

DEFLABEL (label_155)
  (Wrd9.Obj) = Rvl;
  goto label_229;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_krypt_so_8a5fe8ca99e1db2e [15] =
  {
    { "krypt_so_code_1", 1, krypt_so_code_1 },
    { "krypt_so_code_2", 1, krypt_so_code_2 },
    { "krypt_so_code_3", 1, krypt_so_code_3 },
    { "krypt_so_code_4", 1, krypt_so_code_4 },
    { "krypt_so_code_5", 1, krypt_so_code_5 },
    { "krypt_so_code_6", 1, krypt_so_code_6 },
    { "krypt_so_code_7", 1, krypt_so_code_7 },
    { "krypt_so_code_8", 4, krypt_so_code_8 },
    { "krypt_so_code_9", 5, krypt_so_code_9 },
    { "krypt_so_code_10", 10, krypt_so_code_10 },
    { "krypt_so_code_11", 1, krypt_so_code_11 },
    { "krypt_so_code_12", 1, krypt_so_code_12 },
    { "krypt_so_code_13", 16, krypt_so_code_13 },
    { "krypt_so_code_14", 21, krypt_so_code_14 },
    { "krypt_so_code_15", 3, krypt_so_code_15 }
  };

int
decl_krypt_so_8a5fe8ca99e1db2e (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_krypt_so_8a5fe8ca99e1db2e);
  return (0);
}

DECLARE_COMPILED_CODE ("krypt.so", 88, decl_krypt_so_8a5fe8ca99e1db2e, krypt_so_8a5fe8ca99e1db2e)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_krypt_so_data_8a5fe8ca99e1db2e [3165] =
  "\x96\x02\x17\xce\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x28\x0d"
  "\x23\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x81\x22\x29"
  "\x21\x9e\x2b\xbb\x1d\xb0\x83\x88\xb2\x82\x22\x29\x21\x9e\x2b\xbc"
  "\x1d\xb0\x84\x88\xb2\x83\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88"
  "\xc3\xbe\x1d\x81\x22\x29\x21\x9f\x2b\xbf\x1d\xb0\x86\x88\xb6\x1d"
  "\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb6\x1d\x83\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\x80\xc1\x0e\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x83\xb6\x82\xc3\x1c\xb2\x81\x80\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xc2\x1c\xc2\x1c"
  "\xb2\x81\x80\xc1\x1c\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb6\xc3\x1b\x1b\x1b"
  "\x82\x83\xb2\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x9e\x1b\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x17\x0c\x82\x0f\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x02\x88\x1b\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xba"
  "\x88\xb2\xc2\x0c\x0c\x1d\xc3\xc2\x85\x0f\x0c\xc1\x02\x1b\x0c\x80"
  "\x1d\x0c\x0c\x0d\x1c\xc3\x0d\xba\x0d\x1b\x1b\xb2\x0d\x1c\x0d\x1c"
  "\x0d\xba\x1b\x0d\x0d\x0d\xb8\x0d\x1c\x0d\x17\x1e\x1e\x1b\x2a\xb6"
  "\x2a\x0c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x81"
  "\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\xb7\x2a\xb5"
  "\x2a\xb4\x2a\xb3\x2a\x9d\x0d\x1c\x0c\x0d\x0d\x0d\x08\x8a\xb1\x2a"
  "\x08\xc3\x0d\x02\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\xb2\x0d"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28"
  "\xb0\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6b\x72"
  "\x79\x70\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x81\x02\x03"
  "\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x02\x59\x04\x82"
  "\x02\x03\x0a\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x5a\x04\x83\x04\x03\x02\x5b\x04\x83\x04\x03\x02\x5c\x04\x83\x04"
  "\x03\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x02"
  "\x5d\x04\x84\x06\x03\x02\x02\x5e\x04\x84\x06\x03\x09\x02\x08\x02"
  "\x5f\x04\x84\x06\x03\x0a\x02\x09\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x0b\x02"
  "\x63\x0a\x81\x85\x02\x62\x08\x81\x83\x02\x61\x06\x81\x83\x02\x60"
  "\x04\x83\x04\x09\x12\x0c\x02\x0a\x02\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x0d\x68\x0c\x81\x85\x02\x67\x0a\x81\x85\x02"
  "\x66\x08\x81\x85\x02\x65\x06\x81\x85\x02\x64\x04\x83\x04\x0b\x16"
  "\x0e\x02\x0b\x02\x0d\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x0f\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x10"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x11\x72"
  "\x16\x81\x93\x02\x71\x14\x81\x93\x02\x70\x12\x81\x93\x02\x6f\x10"
  "\x81\x91\x02\x6e\x0e\x81\x91\x02\x6d\x0c\x81\x8f\x02\x6c\x0a\x81"
  "\x8d\x02\x6b\x08\x81\x8d\x02\x6a\x06\x81\x85\x02\x69\x04\x84\x06"
  "\x15\x20\x12\x02\x0c\x73\x04\x84\x06\x03\x13\x02\x0d\x06\x09\x72"
  "\x63\x6d\x2d\x69\x74\x65\x72\x14\x02\x74\x04\x85\x08\x03\x0a\x15"
  "\x02\x0e\x02\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x73\x65"
  "\x74\x21\x10\x0d\x0f\x84\x01\x22\x81\x97\x02\x83\x01\x20\x81\x9d"
  "\x02\x82\x01\x1e\x81\x9f\x02\x81\x01\x1c\x81\x9d\x02\x80\x01\x1a"
  "\x81\x9f\x02\x7f\x18\x81\x9d\x02\x7e\x16\x81\x9d\x02\x7d\x14\x81"
  "\x9d\x02\x7c\x12\x81\x9d\x02\x7b\x10\x81\x9b\x02\x7a\x0e\x81\x99"
  "\x02\x79\x0c\x81\x97\x02\x78\x0a\x81\x8f\x02\x77\x08\x81\x8d\x02"
  "\x76\x06\x81\x8b\x02\x75\x04\x86\x0a\x21\x2e\x0d\x02\x0f\x04\x53"
  "\x75\x6e\x04\x53\x61\x74\x04\x46\x72\x69\x04\x54\x68\x75\x04\x57"
  "\x65\x64\x04\x54\x75\x65\x04\x4d\x6f\x6e\x0f\x04\x44\x65\x63\x04"
  "\x4e\x6f\x76\x04\x4f\x63\x74\x04\x53\x65\x70\x04\x41\x75\x67\x04"
  "\x4a\x75\x6c\x04\x4a\x75\x6e\x04\x4d\x61\x79\x04\x41\x70\x72\x04"
  "\x4d\x61\x72\x04\x46\x65\x62\x04\x4a\x61\x6e\x0d\x02\x3a\x01\x31"
  "\x02\x20\x02\x13\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x03\x14\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x2f\x73\x65\x63\x6f\x6e\x64\x03\x14\x64\x65\x63"
  "\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x6d\x69\x6e\x75\x74\x65"
  "\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65\x66"
  "\x74\x0f\x04\x0f\x03\x10\x77\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x12\x64\x65\x63\x6f\x64\x65\x64\x2d\x74"
  "\x69\x6d\x65\x2f\x68\x6f\x75\x72\x03\x11\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x79\x03\x13\x64\x65\x63\x6f"
  "\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x6d\x6f\x6e\x74\x68\x03\x19"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x79"
  "\x2d\x6f\x66\x2d\x77\x65\x65\x6b\x03\x12\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2f\x79\x65\x61\x72\x0f\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x0f\x0d\x99\x01\x2c\x81"
  "\x9d\x02\x98\x01\x2a\x81\x9b\x02\x97\x01\x28\x81\x99\x02\x96\x01"
  "\x26\x81\x99\x02\x95\x01\x24\x81\x95\x02\x94\x01\x22\x81\x95\x02"
  "\x93\x01\x20\x81\x95\x02\x92\x01\x1e\x81\x97\x02\x91\x01\x1c\x81"
  "\x95\x02\x90\x01\x1a\x81\x91\x02\x8f\x01\x18\x81\x93\x02\x8e\x01"
  "\x16\x81\x91\x02\x8d\x01\x14\x81\x8d\x02\x8c\x01\x12\x81\x91\x02"
  "\x8b\x01\x10\x81\x8f\x02\x8a\x01\x0e\x81\x89\x02\x89\x01\x0c\x81"
  "\x8d\x02\x88\x01\x0a\x81\x8b\x02\x87\x01\x08\x81\x85\x02\x86\x01"
  "\x06\x81\x81\x02\x85\x01\x04\x82\x02\x2b\x4e\x02\x10\x10\x9c\x01"
  "\x08\x81\x8f\x02\x9b\x01\x06\x81\x8f\x02\x9a\x01\x04\x86\x0a\x07"
  "\x0b\x10\x10\x13\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x21\x17\x6b\x72\x79\x70\x74\x3a\x20\x43\x68"
  "\x65\x63\x6b\x73\x75\x6d\x20\x65\x72\x72\x6f\x72\x2e\x17\x6b\x72"
  "\x79\x70\x74\x3a\x20\x50\x61\x73\x73\x77\x6f\x72\x64\x20\x65\x72"
  "\x72\x6f\x72\x2e\x08\x0c\x73\x74\x72\x69\x6e\x67\x2d\x73\x65\x74"
  "\x21\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x01\x01\x0a\x6b"
  "\x72\x79\x70\x74\x2e\x6b\x65\x79\x10\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x6c\x6c\x6f\x63\x61\x74\x65\x1a\x11\x02\x0a\x02\x2f\x4b\x72"
  "\x79\x70\x74\x20\x73\x75\x70\x70\x6f\x72\x74\x20\x64\x69\x73\x61"
  "\x62\x6c\x65\x64\x20\x69\x6e\x20\x74\x68\x69\x73\x20\x69\x6d\x70"
  "\x6c\x65\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x2e\x21\x38\x34\x63"
  "\x33\x61\x61\x64\x37\x66\x38\x34\x38\x62\x39\x61\x35\x61\x30\x32"
  "\x65\x36\x35\x62\x37\x38\x33\x34\x61\x36\x39\x36\x63\x08\x64\x65"
  "\x63\x72\x79\x70\x74\x11\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x08\x65\x6e\x63\x72\x79\x70"
  "\x74\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x0b\x11\x10\x75\x70\x64\x61"
  "\x74\x65\x2d\x63\x68\x65\x63\x6b\x73\x75\x6d\x11\x16\x67\x65\x74"
  "\x2d\x6b\x72\x79\x70\x74\x2d\x74\x69\x6d\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x0b\x08\x6b\x72\x79\x70\x74\x69\x64\x14\x04\x72\x63\x6d"
  "\x08\x69\x6e\x63\x2d\x6d\x6f\x64\x08\x72\x63\x6d\x2d\x6b\x65\x79"
  "\x0c\x72\x63\x6d\x2d\x6b\x65\x79\x69\x6e\x69\x74\x16\x0b\x6b\x72"
  "\x79\x70\x74\x2d\x6b\x65\x79\x3f\x0c\x10\x04\x04\x13\x54\x68\x69"
  "\x73\x20\x66\x69\x6c\x65\x20\x6b\x72\x79\x70\x74\x65\x64\x20\x0d"
  "\x04\x15\x04\x13\x04\x12\x04\x0e\x04\x0c\x04\x0c\x0f\x6d\x61\x6b"
  "\x65\x2d\x6b\x72\x79\x70\x74\x2d\x6b\x65\x79\x15\x17\x73\x65\x74"
  "\x2d\x6b\x72\x79\x70\x74\x2d\x6b\x65\x79\x2f\x69\x6e\x64\x65\x78"
  "\x2d\x6a\x21\x17\x73\x65\x74\x2d\x6b\x72\x79\x70\x74\x2d\x6b\x65"
  "\x79\x2f\x69\x6e\x64\x65\x78\x2d\x69\x21\x1b\x73\x65\x74\x2d\x6b"
  "\x72\x79\x70\x74\x2d\x6b\x65\x79\x2f\x73\x74\x61\x74\x65\x2d\x74"
  "\x61\x62\x6c\x65\x21\x12\x6b\x72\x79\x70\x74\x2d\x6b\x65\x79\x2f"
  "\x69\x6e\x64\x65\x78\x2d\x6a\x12\x6b\x72\x79\x70\x74\x2d\x6b\x65"
  "\x79\x2f\x69\x6e\x64\x65\x78\x2d\x69\x16\x6b\x72\x79\x70\x74\x2d"
  "\x6b\x65\x79\x2f\x73\x74\x61\x74\x65\x2d\x74\x61\x62\x6c\x65\x0a"
  "\x04\x09\x04\x04\x04\x04\x04\x0e\x72\x74\x64\x3a\x6b\x72\x79\x70"
  "\x74\x2d\x6b\x65\x79\x13\x0a\x6b\x72\x79\x70\x74\x2d\x6b\x65\x79"
  "\x0c\x73\x74\x61\x74\x65\x2d\x74\x61\x62\x6c\x65\x08\x69\x6e\x64"
  "\x65\x78\x2d\x69\x08\x69\x6e\x64\x65\x78\x2d\x6a\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x03\x74"
  "\x73\x81\x02\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79\x2d\x69"
  "\x6e\x64\x65\x78\x05\x13\x1a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c\x65\x2d\x65\x72\x72\x6f\x72"
  "\x04\x03\x09\x6d\x64\x35\x2d\x66\x69\x6c\x65\x03\x1f\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x02\x0f\x6d\x64\x35"
  "\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f\x03\x06\x65\x72\x72"
  "\x6f\x72\x02\x0b\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x68\x65\x61"
  "\x64\x05\x0f\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x05\x0a\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x02\x15\x04\x09\x73\x74\x72\x69\x6e\x67"
  "\x3d\x3f\x03\x17\x6d\x68\x61\x73\x68\x2d\x73\x75\x6d\x2d\x3e\x68"
  "\x65\x78\x61\x64\x65\x63\x69\x6d\x61\x6c\x03\x18\x73\x79\x73\x74"
  "\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x04\x0c\x73\x74\x72\x69\x6e\x67\x2d\x74\x61\x69\x6c"
  "\x03\x16\x04\x04\x0c\x6d\x61\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67"
  "\x06\x14\x04\x07\x6d\x6f\x64\x75\x6c\x6f\x06\x11\x07\x10\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x03\x0d\x63"
  "\x68\x61\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x03\x0c\x61\x73\x63"
  "\x69\x69\x2d\x3e\x63\x68\x61\x72\x18\x58\xb2\x01\x80\x80\x04\x57"
  "\xb0\x01\x81\x81\x02\x56\xae\x01\x81\x81\x02\x55\xac\x01\x81\x9b"
  "\x02\x54\xaa\x01\x81\x9b\x02\x53\xa8\x01\x81\x9b\x02\x52\xa6\x01"
  "\x81\x9b\x02\x51\xa4\x01\x81\x9d\x02\x50\xa2\x01\x81\x9f\x02\x4f"
  "\xa0\x01\x81\x9d\x02\x4e\x9e\x01\x81\x9f\x02\x4d\x9c\x01\x81\x9d"
  "\x02\x4c\x9a\x01\x81\x9d\x02\x4b\x98\x01\x81\x9b\x02\x4a\x96\x01"
  "\x81\x85\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83\x02\x47"
  "\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x9b\x02\x45\x8c\x01\x81\x83"
  "\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01"
  "\x81\x97\x02\x41\x84\x01\x81\x95\x02\x40\x82\x01\x81\x93\x02\x3f"
  "\x80\x01\x81\x87\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83\x02\x3c"
  "\x7a\x81\x99\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02\x39\x74"
  "\x81\x83\x02\x38\x72\x81\x9b\x02\x37\x70\x81\x93\x02\x36\x6e\x81"
  "\x99\x02\x35\x6c\x81\x95\x02\x34\x6a\x81\x93\x02\x33\x68\x81\x99"
  "\x02\x32\x66\x81\x93\x02\x31\x64\x81\x99\x02\x30\x62\x81\x93\x02"
  "\x2f\x60\x81\x95\x02\x2e\x5e\x81\x93\x02\x2d\x5c\x81\x93\x02\x2c"
  "\x5a\x81\x91\x02\x2b\x58\x81\x91\x02\x2a\x56\x81\x8f\x02\x29\x54"
  "\x82\x02\x28\x52\x81\x85\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x85"
  "\x02\x25\x4c\x81\x8f\x02\x24\x4a\x81\x8d\x02\x23\x48\x81\x8d\x02"
  "\x22\x46\x81\x85\x02\x21\x44\x83\x04\x20\x42\x81\x8f\x02\x1f\x40"
  "\x81\x8d\x02\x1e\x3e\x81\x8f\x02\x1d\x3c\x81\x8b\x02\x1c\x3a\x81"
  "\x89\x02\x1b\x38\x81\x8b\x02\x1a\x36\x81\x8b\x02\x19\x34\x81\x8b"
  "\x02\x18\x32\x81\x8b\x02\x17\x30\x81\x87\x02\x16\x2e\x81\x8b\x02"
  "\x15\x2c\x81\x85\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x87\x02\x12"
  "\x26\x81\x87\x02\x11\x24\x81\x83\x02\x10\x22\x81\x87\x02\x0f\x20"
  "\x81\x89\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81"
  "\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x83"
  "\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02"
  "\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\xb1\x01\x96\x02";

SCHEME_OBJECT *
krypt_so_data_8a5fe8ca99e1db2e (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_krypt_so_data_8a5fe8ca99e1db2e [0]))), (sizeof (prog_krypt_so_data_8a5fe8ca99e1db2e)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_124]));
}

DECLARE_COMPILED_DATA_NS ("krypt.so", krypt_so_data_8a5fe8ca99e1db2e)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("krypt.so", "faff62afb4ffe23b")
