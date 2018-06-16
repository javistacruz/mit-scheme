/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:28-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define ENVIRONMENT_LABEL_1_3 23
#define DEBUGGING_LABEL_1_2 22
#define OBJECT_1_2 21
#define OBJECT_1_1 20
#define OBJECT_1_0 19
#define EXECUTE_CACHE_1_8 15
#define FREE_REFERENCE_1_0 18
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto mhash_name__id_9;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_name__id_16)
DEFLABEL (mhash_name__id_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_18)
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_6;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_17)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_22;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_22)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  Wrd7 = Wrd8;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_25;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_25;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_25;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd18.pObj) = (& ((Wrd23.pObj) [(Wrd16.Lng)]));
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [2]);
  if ((Wrd32.Obj) == (Wrd14.Obj))
    goto label_23;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd35.Lng) + 1L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (Rsp [0]) = (Wrd33.Obj);
  goto loop_6;

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_26;

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
crypto_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto mhash_context_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_context_index_3)
DEFLABEL (mhash_context_index_0)
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
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define OBJECT_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto set_mhash_context_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_mhash_context_indexB_3)
DEFLABEL (set_mhash_context_indexB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_3 15
#define OBJECT_4_2 14
#define OBJECT_4_1 13
#define OBJECT_4_0 12
#define FREE_REFERENCE_4_0 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto mhash_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_contextP_10)
DEFLABEL (mhash_contextP_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
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
  Rvl = (current_block [OBJECT_4_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
crypto_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto mhash_hmac_context_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_hmac_context_index_3)
DEFLABEL (mhash_hmac_context_index_0)
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
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_mhash_hmac_context_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_mhash_hmac_context_indexB_3)
DEFLABEL (set_mhash_hmac_context_indexB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_3 15
#define OBJECT_7_2 14
#define OBJECT_7_1 13
#define OBJECT_7_0 12
#define FREE_REFERENCE_7_0 11
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto mhash_hmac_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_6;

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

DEFLABEL (mhash_hmac_contextP_10)
DEFLABEL (mhash_hmac_contextP_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
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
  Rvl = (current_block [OBJECT_7_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_7_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_9 9
#define ENVIRONMENT_LABEL_8_3 22
#define DEBUGGING_LABEL_8_2 21
#define OBJECT_8_3 20
#define OBJECT_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_10 11
#define EXECUTE_CACHE_8_8 13
#define EXECUTE_CACHE_8_6 15
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_8_4);
      goto guarantee_mhash_context_3;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mhash_context_7)
DEFLABEL (guarantee_mhash_context_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd9.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_8_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_8_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define LABEL_9_9 9
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_3 20
#define OBJECT_9_2 19
#define OBJECT_9_1 18
#define OBJECT_9_0 17
#define EXECUTE_CACHE_9_10 11
#define EXECUTE_CACHE_9_8 13
#define EXECUTE_CACHE_9_6 15
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      goto guarantee_mhash_hmac_context_3;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mhash_hmac_context_7)
DEFLABEL (guarantee_mhash_hmac_context_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd9.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_9_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_9_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCE_10_0 10
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto mhash_type_names_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_type_names_4)
DEFLABEL (mhash_type_names_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
crypto_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto mhash_get_block_size_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_get_block_size_4)
DEFLABEL (mhash_get_block_size_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define TAG_12_8 2
#define LABEL_12_11 9
#define LABEL_12_10 11
#define LABEL_12_13 13
#define LABEL_12_15 15
#define ENVIRONMENT_LABEL_12_3 33
#define DEBUGGING_LABEL_12_2 32
#define OBJECT_12_2 31
#define OBJECT_12_1 30
#define OBJECT_12_0 29
#define EXECUTE_CACHE_12_16 17
#define EXECUTE_CACHE_12_14 19
#define EXECUTE_CACHE_12_12 21
#define EXECUTE_CACHE_12_9 23
#define EXECUTE_CACHE_12_6 25
#define FREE_REFERENCE_12_0 28
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_12_4);
      goto mhash_init_7;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_init_11)
DEFLABEL (mhash_init_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_15])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_11);
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define OBJECT_13_3 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto mhash_update_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_update_6)
DEFLABEL (mhash_update_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 4);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCE_14_0 10
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto mhash_end_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_end_4)
DEFLABEL (mhash_end_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define TAG_15_9 3
#define LABEL_15_12 11
#define LABEL_15_11 13
#define LABEL_15_14 15
#define LABEL_15_16 17
#define ENVIRONMENT_LABEL_15_3 36
#define DEBUGGING_LABEL_15_2 35
#define OBJECT_15_3 34
#define OBJECT_15_2 33
#define OBJECT_15_1 32
#define OBJECT_15_0 31
#define EXECUTE_CACHE_15_17 19
#define EXECUTE_CACHE_15_15 21
#define EXECUTE_CACHE_15_13 23
#define EXECUTE_CACHE_15_10 25
#define EXECUTE_CACHE_15_6 27
#define FREE_REFERENCE_15_0 30
#define FREE_REFERENCES_LABEL_15_0 18
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_15_4);
      goto mhash_hmac_init_9;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_15_16);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_hmac_init_13)
DEFLABEL (mhash_hmac_init_9)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_8])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_15_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_16;
  Wrd6 = Wrd10;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_16])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_12);
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define ENVIRONMENT_LABEL_16_3 16
#define DEBUGGING_LABEL_16_2 15
#define OBJECT_16_3 14
#define OBJECT_16_2 13
#define OBJECT_16_1 12
#define OBJECT_16_0 11
#define EXECUTE_CACHE_16_6 9
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto mhash_hmac_update_2;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_hmac_update_6)
DEFLABEL (mhash_hmac_update_2)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 4);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCE_17_0 10
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto mhash_hmac_end_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_hmac_end_4)
DEFLABEL (mhash_hmac_end_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_9 11
#define LABEL_18_10 13
#define ENVIRONMENT_LABEL_18_3 23
#define DEBUGGING_LABEL_18_2 22
#define OBJECT_18_2 21
#define OBJECT_18_1 20
#define OBJECT_18_0 19
#define EXECUTE_CACHE_18_8 15
#define FREE_REFERENCE_18_0 18
#define FREE_REFERENCES_LABEL_18_0 14
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto keygen_name__id_9;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_18_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (keygen_name__id_16)
DEFLABEL (keygen_name__id_9)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_18)
  (Wrd21.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_6;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_17)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_22;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (label_22)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  Wrd7 = Wrd8;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_25;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_25;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_25;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd18.pObj) = (& ((Wrd23.pObj) [(Wrd16.Lng)]));
  (Wrd14.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [2]);
  if ((Wrd32.Obj) == (Wrd14.Obj))
    goto label_23;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd35.Lng) + 1L);
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));
  (Rsp [0]) = (Wrd33.Obj);
  goto loop_6;

DEFLABEL (label_23)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_9])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCE_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto mhash_keygen_type_names_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_type_names_4)
DEFLABEL (mhash_keygen_type_names_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define OBJECT_20_1 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto mhash_keygen_uses_saltP_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_uses_saltP_4)
DEFLABEL (mhash_keygen_uses_saltP_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 1);

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
crypto_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto mhash_keygen_uses_countP_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_uses_countP_4)
DEFLABEL (mhash_keygen_uses_countP_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define OBJECT_22_1 10
#define OBJECT_22_0 9
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto mhash_keygen_uses_hash_algorithm_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_uses_hash_algorithm_4)
DEFLABEL (mhash_keygen_uses_hash_algorithm_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

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
crypto_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto mhash_keygen_salt_size_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_salt_size_4)
DEFLABEL (mhash_keygen_salt_size_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 12
#define DEBUGGING_LABEL_24_2 11
#define OBJECT_24_1 10
#define OBJECT_24_0 9
#define EXECUTE_CACHE_24_6 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto mhash_keygen_max_key_size_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_max_key_size_4)
DEFLABEL (mhash_keygen_max_key_size_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_7 5
#define LABEL_25_5 7
#define LABEL_25_9 9
#define LABEL_25_11 11
#define LABEL_25_10 13
#define LABEL_25_12 15
#define LABEL_25_15 17
#define LABEL_25_13 19
#define LABEL_25_17 21
#define LABEL_25_18 23
#define LABEL_25_19 25
#define LABEL_25_14 27
#define LABEL_25_20 29
#define LABEL_25_21 31
#define LABEL_25_24 33
#define LABEL_25_25 35
#define LABEL_25_26 37
#define LABEL_25_27 39
#define LABEL_25_23 41
#define LABEL_25_28 43
#define LABEL_25_31 45
#define ENVIRONMENT_LABEL_25_3 83
#define DEBUGGING_LABEL_25_2 82
#define OBJECT_25_18 81
#define OBJECT_25_17 80
#define OBJECT_25_16 79
#define OBJECT_25_15 78
#define OBJECT_25_14 77
#define OBJECT_25_13 76
#define OBJECT_25_12 75
#define OBJECT_25_11 74
#define OBJECT_25_10 73
#define OBJECT_25_9 72
#define OBJECT_25_8 71
#define OBJECT_25_7 70
#define OBJECT_25_6 69
#define OBJECT_25_5 68
#define OBJECT_25_4 67
#define OBJECT_25_3 66
#define OBJECT_25_2 65
#define OBJECT_25_1 64
#define OBJECT_25_0 63
#define EXECUTE_CACHE_25_30 47
#define EXECUTE_CACHE_25_29 49
#define EXECUTE_CACHE_25_32 51
#define EXECUTE_CACHE_25_22 53
#define EXECUTE_CACHE_25_16 55
#define EXECUTE_CACHE_25_8 57
#define EXECUTE_CACHE_25_6 59
#define FREE_REFERENCE_25_0 62
#define FREE_REFERENCES_LABEL_25_0 46
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd43;
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd11;
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
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_25_4);
      goto mhash_keygen_25;

    case 1:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_25_15);
      goto continuation_23;

    case 8:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_22;

    case 9:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_25_18);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_25_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_25_14);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_25_20);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_25_21);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_25_24);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_25_25);
      goto label_32;

    case 17:
      current_block = (Rpc - LABEL_25_26);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_25_27);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_25_28);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_25_31);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_38)
DEFLABEL (mhash_keygen_25)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_66;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_66;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_65)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_64;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_64;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_5]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_62;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_62;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_61)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_7]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd7.Obj) = (Rsp [8]);
  if ((Wrd7.Obj) == (current_block [OBJECT_25_12]))
    goto label_55;
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_15]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25_24);
  (* (--Rsp)) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_53;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd43.Lng) == 0)
    goto label_42;

DEFLABEL (label_52)
  (Wrd21.Obj) = (Rsp [10]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_51;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));

DEFLABEL (label_50)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_49;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_49;
  if ((Wrd27.Obj) == (Wrd16.Obj))
    goto label_42;

DEFLABEL (label_41)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_28]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_25_17]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_25_28);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [11]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_39)
  (Wrd16.Obj) = (current_block [OBJECT_25_18]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_32]));

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_31]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_16]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_48)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_30]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (* (--Rsp)) = Rvl;
  (Wrd61.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd61.uLng) == 10))
    goto label_47;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd59.Lng))))
    goto label_47;
  (Wrd53.Obj) = (Rsp [9]);
  ((Wrd57.pObj) [1]) = (Wrd53.Obj);

DEFLABEL (label_46)
  (Wrd50.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_45)
  (Wrd48.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_11]), 4);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_25_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_43)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_25_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_25_15);
  goto label_43;

DEFLABEL (label_47)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (current_block [OBJECT_25_9]);
  (Wrd64.Obj) = (Rsp [9]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_10]), 3);

DEFLABEL (label_35)
  goto label_46;

DEFLABEL (label_49)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_27]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_42;

DEFLABEL (label_51)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_26]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_16]), 1);

DEFLABEL (label_33)
  (Wrd16.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_42;

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_59;
  Wrd22 = Wrd26;

DEFLABEL (label_58)
  Wrd21 = Wrd22;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_57;
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_57;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_57;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd31.pObj) = (& ((Wrd37.pObj) [(Wrd29.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_56)
  (Wrd46.Obj) = (current_block [OBJECT_25_14]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_25_19);
  goto label_54;

DEFLABEL (label_57)
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_13]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_20])), (Wrd23.pObj));

DEFLABEL (label_30)
  (Wrd22.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd47.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_45;

DEFLABEL (label_62)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_25_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_25_4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_25_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25_23);
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto mhash_keygen_type_id_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_type_id_3)
DEFLABEL (mhash_keygen_type_id_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto mhash_keygen_type_key_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_type_key_length_3)
DEFLABEL (mhash_keygen_type_key_length_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto mhash_keygen_type_parameter_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_type_parameter_vector_3)
DEFLABEL (mhash_keygen_type_parameter_vector_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define ENVIRONMENT_LABEL_29_3 17
#define DEBUGGING_LABEL_29_2 16
#define OBJECT_29_3 15
#define OBJECT_29_2 14
#define OBJECT_29_1 13
#define OBJECT_29_0 12
#define FREE_REFERENCE_29_0 11
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto mhash_keygen_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_keygen_typeP_10)
DEFLABEL (mhash_keygen_typeP_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
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
  Rvl = (current_block [OBJECT_29_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_29_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define LABEL_30_9 7
#define LABEL_30_6 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_13 15
#define LABEL_30_15 17
#define LABEL_30_18 19
#define LABEL_30_20 21
#define LABEL_30_17 23
#define LABEL_30_23 25
#define LABEL_30_24 27
#define LABEL_30_26 29
#define LABEL_30_21 31
#define LABEL_30_30 33
#define LABEL_30_31 35
#define LABEL_30_32 37
#define LABEL_30_27 39
#define LABEL_30_34 41
#define LABEL_30_35 43
#define LABEL_30_36 45
#define LABEL_30_37 47
#define LABEL_30_41 49
#define LABEL_30_40 51
#define LABEL_30_43 53
#define LABEL_30_44 55
#define LABEL_30_38 57
#define ENVIRONMENT_LABEL_30_3 106
#define DEBUGGING_LABEL_30_2 105
#define OBJECT_30_17 104
#define OBJECT_30_16 103
#define OBJECT_30_15 102
#define OBJECT_30_14 101
#define OBJECT_30_13 100
#define OBJECT_30_12 99
#define OBJECT_30_11 98
#define OBJECT_30_10 97
#define OBJECT_30_9 96
#define OBJECT_30_8 95
#define OBJECT_30_7 94
#define OBJECT_30_6 93
#define OBJECT_30_5 92
#define OBJECT_30_4 91
#define OBJECT_30_3 90
#define OBJECT_30_2 89
#define OBJECT_30_1 88
#define OBJECT_30_0 87
#define EXECUTE_CACHE_30_45 59
#define EXECUTE_CACHE_30_42 61
#define EXECUTE_CACHE_30_39 63
#define EXECUTE_CACHE_30_33 65
#define EXECUTE_CACHE_30_29 67
#define EXECUTE_CACHE_30_28 69
#define EXECUTE_CACHE_30_25 71
#define EXECUTE_CACHE_30_22 73
#define EXECUTE_CACHE_30_19 75
#define EXECUTE_CACHE_30_16 77
#define EXECUTE_CACHE_30_14 79
#define EXECUTE_CACHE_30_12 81
#define EXECUTE_CACHE_30_8 83
#define EXECUTE_CACHE_30_7 85
#define FREE_REFERENCES_LABEL_30_0 58
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd63;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd73;
  machine_word Wrd18;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd43;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto make_mhash_keygen_type_44;

    case 2:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_30_20);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_30_23);
      goto label_48;

    case 12:
      current_block = (Rpc - LABEL_30_24);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_30_26);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_30_30);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_30_31);
      goto continuation_29;

    case 17:
      current_block = (Rpc - LABEL_30_32);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_30_34);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_30_35);
      goto label_51;

    case 21:
      current_block = (Rpc - LABEL_30_36);
      goto label_52;

    case 22:
      current_block = (Rpc - LABEL_30_37);
      goto do_loop_39;

    case 23:
      current_block = (Rpc - LABEL_30_41);
      goto label_54;

    case 24:
      current_block = (Rpc - LABEL_30_40);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_30_43);
      goto label_56;

    case 26:
      current_block = (Rpc - LABEL_30_44);
      goto label_55;

    case 27:
      current_block = (Rpc - LABEL_30_38);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_mhash_keygen_type_58)
DEFLABEL (make_mhash_keygen_type_44)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_95;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);

DEFLABEL (label_95)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_94;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd38.Lng) == 0)
    goto label_91;

DEFLABEL (label_93)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_92;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_92;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! ((Wrd34.Lng) > (Wrd36.Lng)))
    goto label_91;

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_9);

DEFLABEL (label_89)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (current_block [OBJECT_30_2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_60)
DEFLABEL (label_88)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (* (--Rsp)) = Rvl;
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_87;
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd25.uLng) == 26))
    goto label_87;
  if ((Wrd22.Obj) == Rvl)
    goto label_63;

DEFLABEL (label_62)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_30_3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_7]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_29]));

DEFLABEL (label_63)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_86)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_85;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd16.Lng) + 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_85;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_84)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_24);
  (* (--Rsp)) = Rvl;
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_83;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_83;
  ((Wrd15.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_82)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_28]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_30_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd7.Obj) = (Rsp [7]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_30_8])))
    goto label_80;

DEFLABEL (label_79)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_30]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd78.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_30_9]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_33]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30_30);

DEFLABEL (label_78)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd65.Obj) = (current_block [OBJECT_30_10]);
  (Wrd68.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd68.Lng))))
    goto label_77;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd16.Obj) == (Wrd18.Obj))
    goto label_76;

DEFLABEL (label_75)
  (Wrd19.Obj) = (current_block [OBJECT_30_12]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd29.Lng)))
    goto label_64;
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_11]), 2);

DEFLABEL (label_64)
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_66;
  (Wrd21.Obj) = (current_block [OBJECT_30_14]);
  goto label_65;

DEFLABEL (label_66)
  (Wrd21.Obj) = (current_block [OBJECT_30_13]);

DEFLABEL (label_65)
DEFLABEL (label_74)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_72;

DEFLABEL (label_71)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30_31);

DEFLABEL (label_70)
  (Wrd43.Obj) = (Rsp [7]);

DEFLABEL (label_69)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_68;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd53.Lng))))
    goto label_68;
  ((Wrd51.pObj) [2]) = (Wrd43.Obj);

DEFLABEL (label_67)
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_30_4]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto do_loop_39;

DEFLABEL (label_68)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_30_15]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_36]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 3);

DEFLABEL (label_52)
  goto label_67;

DEFLABEL (label_72)
  (Wrd36.Obj) = (Rsp [7]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_73;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if ((Wrd63.Lng) > 0)
    goto label_70;
  goto label_71;

DEFLABEL (label_73)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_70;

DEFLABEL (label_76)
  Rsp = (& (Rsp [2]));
  goto label_72;

DEFLABEL (label_77)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_34]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_11]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_76;

DEFLABEL (label_80)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_78;

DEFLABEL (label_81)
  (Wrd43.Obj) = ((SCHEME_OBJECT) 0);
  goto label_69;

DEFLABEL (label_83)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_30_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 3);

DEFLABEL (label_50)
  goto label_82;

DEFLABEL (label_85)
  (Wrd5.Obj) = (current_block [OBJECT_30_4]);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_63;

DEFLABEL (label_91)
  Rsp = (& (Rsp [1]));
  goto label_89;

DEFLABEL (label_92)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_90;

DEFLABEL (label_94)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;
  goto label_91;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_30_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_17);
  goto label_86;

DEFLABEL (do_loop_59)
DEFLABEL (do_loop_39)
  INTERRUPT_CHECK (26, LABEL_30_37);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_96;
  Rsp = (& (Rsp [2]));
  (Wrd22.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_39]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_38);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_45]));

DEFLABEL (label_96)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_102;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_101)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_42]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_30_40);
  (Wrd5.Obj) = Rvl;
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_100;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_100;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_100;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd24.Obj));
  (Wrd23.pObj) = (& ((Wrd29.pObj) [(Wrd20.Lng)]));
  ((Wrd23.pObj) [1]) = Rvl;

DEFLABEL (label_99)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_98;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_97)
  (Rsp [1]) = (Wrd10.Obj);
  goto do_loop_39;

DEFLABEL (label_98)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_17]), 1);

DEFLABEL (label_55)
  (Wrd10.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_43]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_6]), 3);

DEFLABEL (label_56)
  goto label_99;

DEFLABEL (label_102)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_41]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_16]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_101;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_9 7
#define LABEL_31_10 9
#define LABEL_31_11 11
#define LABEL_31_7 13
#define LABEL_31_12 15
#define LABEL_31_13 17
#define LABEL_31_15 19
#define LABEL_31_17 21
#define LABEL_31_18 23
#define LABEL_31_19 25
#define LABEL_31_16 27
#define LABEL_31_21 29
#define LABEL_31_23 31
#define LABEL_31_24 33
#define LABEL_31_25 35
#define LABEL_31_22 37
#define LABEL_31_26 39
#define ENVIRONMENT_LABEL_31_3 73
#define DEBUGGING_LABEL_31_2 72
#define OBJECT_31_8 71
#define OBJECT_31_7 70
#define OBJECT_31_6 69
#define OBJECT_31_5 68
#define OBJECT_31_4 67
#define OBJECT_31_3 66
#define OBJECT_31_2 65
#define OBJECT_31_1 64
#define OBJECT_31_0 63
#define EXECUTE_CACHE_31_20 41
#define EXECUTE_CACHE_31_14 43
#define EXECUTE_CACHE_31_8 45
#define EXECUTE_CACHE_31_6 47
#define FREE_REFERENCE_31_6 50
#define FREE_REFERENCE_31_5 51
#define FREE_REFERENCE_31_4 52
#define FREE_REFERENCE_31_3 53
#define FREE_REFERENCE_31_2 54
#define FREE_REFERENCE_31_1 55
#define FREE_REFERENCE_31_0 56
#define FREE_ASSIGNMENT_31_4 58
#define FREE_ASSIGNMENT_31_3 59
#define FREE_ASSIGNMENT_31_2 60
#define FREE_ASSIGNMENT_31_1 61
#define FREE_ASSIGNMENT_31_0 62
#define FREE_REFERENCES_LABEL_31_0 40
#define NUMBER_OF_LINKER_SECTIONS_31_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
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
      goto mhash_availableP_6;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_31_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_31_13);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_31_17);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_31_18);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_31_19);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_31_16);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_31_21);
      goto label_13;

    case 14:
      current_block = (Rpc - LABEL_31_23);
      goto label_14;

    case 15:
      current_block = (Rpc - LABEL_31_24);
      goto label_15;

    case 16:
      current_block = (Rpc - LABEL_31_25);
      goto label_16;

    case 17:
      current_block = (Rpc - LABEL_31_22);
      goto continuation_4;

    case 18:
      current_block = (Rpc - LABEL_31_26);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_availableP_21)
DEFLABEL (mhash_availableP_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_22)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_52;
  Wrd7 = Wrd11;

DEFLABEL (label_51)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_31_2]);
  goto pop_return;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_31_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_31_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_47;
  Wrd21 = Wrd25;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_45;
  Wrd27 = Wrd31;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_3]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_43;
  Wrd33 = Wrd37;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_31_5]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_39)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_4]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_38;
  Wrd21 = Wrd25;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_5]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_36;
  Wrd27 = Wrd31;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_6]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_34;
  Wrd33 = Wrd37;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_31_6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_30)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_31_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_31_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_0]));
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd22.pObj) [0]) = Rvl;

DEFLABEL (label_27)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_31_1]));
  (Wrd35.Obj) = (current_block [OBJECT_31_2]);
  (Wrd42.Obj) = ((Wrd34.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd34.pObj) [0]) = (Wrd35.Obj);
  goto label_23;

DEFLABEL (label_26)
  if ((Wrd42.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_11])), (Wrd34.pObj), (Wrd35.Obj));

DEFLABEL (label_19)
  goto label_23;

DEFLABEL (label_29)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_10])), (Wrd22.pObj), Rvl);

DEFLABEL (label_18)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_26])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_30;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_25])), (Wrd34.pObj));

DEFLABEL (label_16)
  (Wrd33.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_24])), (Wrd28.pObj));

DEFLABEL (label_15)
  (Wrd27.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_23])), (Wrd22.pObj));

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_21])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_19])), (Wrd34.pObj));

DEFLABEL (label_12)
  (Wrd33.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_18])), (Wrd28.pObj));

DEFLABEL (label_11)
  (Wrd27.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_17])), (Wrd22.pObj));

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_31_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_9)
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_1 9
#define OBJECT_32_0 8
#define FREE_ASSIGNMENT_32_0 7
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_32_4);
      goto reset_mhash_variablesB_0;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_mhash_variablesB_4)
DEFLABEL (reset_mhash_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_32_0]));
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_32_1]);
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_32_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define TAG_33_6 1
#define LABEL_33_8 7
#define LABEL_33_10 9
#define LABEL_33_11 11
#define TAG_33_12 4
#define LABEL_33_13 13
#define LABEL_33_14 15
#define TAG_33_15 6
#define LABEL_33_18 17
#define LABEL_33_19 19
#define LABEL_33_22 21
#define ENVIRONMENT_LABEL_33_3 43
#define DEBUGGING_LABEL_33_2 42
#define OBJECT_33_4 41
#define OBJECT_33_3 40
#define OBJECT_33_2 39
#define OBJECT_33_1 38
#define OBJECT_33_0 37
#define EXECUTE_CACHE_33_23 23
#define EXECUTE_CACHE_33_21 25
#define EXECUTE_CACHE_33_20 27
#define EXECUTE_CACHE_33_17 29
#define EXECUTE_CACHE_33_16 31
#define EXECUTE_CACHE_33_9 33
#define EXECUTE_CACHE_33_7 35
#define FREE_REFERENCES_LABEL_33_0 22
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
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
      goto mhash_file_14;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_33_18);
      goto loop_8;

    case 8:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_33_22);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_file_17)
DEFLABEL (mhash_file_14)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_33_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (Rsp [1]) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_14])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  ((Wrd18.pObj) [2]) = Rvl;
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_16]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_33_11);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_8;

DEFLABEL (lambda_21)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_33_13);
  Rvl = (current_block [OBJECT_33_2]);
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_33_14);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (loop_22)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_33_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33_4]);
  if (! ((Wrd5.Obj) == Rvl))
    goto label_23;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [3]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_21]));

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_22);
  Rsp = (& (Rsp [1]));
  goto loop_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define OBJECT_34_1 10
#define OBJECT_34_0 9
#define EXECUTE_CACHE_34_6 7
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_34_4);
      goto mhash_string_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_string_5)
DEFLABEL (mhash_string_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_6)
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (label_7)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 1);

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define ENVIRONMENT_LABEL_35_3 16
#define DEBUGGING_LABEL_35_2 15
#define EXECUTE_CACHE_35_9 9
#define EXECUTE_CACHE_35_8 11
#define EXECUTE_CACHE_35_6 13
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_35_4);
      goto mhash_substring_3;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_substring_6)
DEFLABEL (mhash_substring_3)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_8 11
#define LABEL_36_9 13
#define ENVIRONMENT_LABEL_36_3 19
#define DEBUGGING_LABEL_36_2 18
#define OBJECT_36_3 17
#define OBJECT_36_2 16
#define OBJECT_36_1 15
#define OBJECT_36_0 14
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_36_4);
      goto mhash_sum__number_10;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto do_loop_7;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_36_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_sum__number_17)
DEFLABEL (mhash_sum__number_10)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_19)
  (Wrd16.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  goto do_loop_7;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (do_loop_18)
DEFLABEL (do_loop_7)
  INTERRUPT_CHECK (26, LABEL_36_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_21;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_27;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_27;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pChr) = (& ((Wrd20.pChr) [(Wrd9.Lng)]));
  (Wrd13.uLng) = ((unsigned long) (((unsigned char *) (Wrd12.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_25;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (multiply_with_overflow ((Wrd40.Lng), 256, (& (Wrd38.Lng))))
    goto label_25;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));

DEFLABEL (label_24)
  (Wrd43.Obj) = (* (Rsp++));
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_23;
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_23;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd52.Lng) = ((Wrd53.Lng) + (Wrd54.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd52.Lng)))
    goto label_23;
  (Wrd49.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd49.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd58.Lng) = ((Wrd57.Lng) + 1L);
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));
  (Rsp [0]) = (Wrd55.Obj);
  goto do_loop_7;

DEFLABEL (label_23)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (Wrd49.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (current_block [OBJECT_36_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_14)
  (Wrd35.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define LABEL_37_9 13
#define LABEL_37_10 15
#define LABEL_37_11 17
#define LABEL_37_12 19
#define LABEL_37_13 21
#define ENVIRONMENT_LABEL_37_3 30
#define DEBUGGING_LABEL_37_2 29
#define OBJECT_37_6 28
#define OBJECT_37_5 27
#define OBJECT_37_4 26
#define OBJECT_37_3 25
#define OBJECT_37_2 24
#define OBJECT_37_1 23
#define OBJECT_37_0 22
#define FREE_REFERENCES_LABEL_37_0 22
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd114;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd137;
  machine_word Wrd132;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd87;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd59;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd143;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_37_4);
      goto mhash_sum__hexadecimal_22;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto do_loop_18;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_37_10);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_37_11);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_37_12);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_37_13);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mhash_sum__hexadecimal_32)
DEFLABEL (mhash_sum__hexadecimal_22)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = (LEFT_SHIFT ((Wrd22.Lng), 1));
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_18;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_18)
  INTERRUPT_CHECK (26, LABEL_37_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_36;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_48;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_48;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_48;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd13.pChr) = (& ((Wrd20.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_47)
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd34.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd31.Lng)), 4)));
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_46;
  Wrd43 = Wrd34;
  (Wrd44.Obj) = (current_block [OBJECT_37_4]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd47.Lng))))
    goto label_46;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd40.pChr) = (& ((Wrd45.pChr) [(Wrd37.Lng)]));
  (Wrd41.uLng) = ((unsigned long) (((unsigned char *) (Wrd40.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd35.Obj) = (MAKE_OBJECT (2, (Wrd41.uLng)));

DEFLABEL (label_45)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd58.Lng) = (LEFT_SHIFT ((Wrd57.Lng), 1));
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));
  (Wrd150.Obj) = (Rsp [1]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 30))
    goto label_44;
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd144.uLng) == 26))
    goto label_44;
  Wrd145 = Wrd58;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [1]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  if (! (((unsigned long) (Wrd145.Lng)) < ((unsigned long) (Wrd149.Lng))))
    goto label_44;
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd143.uLng) == 2))
    goto label_44;
  (Wrd138.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd141.pChr) = (& ((Wrd147.pChr) [(Wrd138.Lng)]));
  ((Wrd141.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd35.Obj)));

DEFLABEL (label_43)
  (Wrd75.Obj) = (Rsp [3]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 30))
    goto label_42;
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_42;
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [1]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) (Wrd70.Lng)) < ((unsigned long) (Wrd74.Lng))))
    goto label_42;
  (Wrd62.uLng) = (OBJECT_DATUM (Wrd67.Obj));
  (Wrd65.pChr) = (& ((Wrd72.pChr) [(Wrd62.Lng)]));
  (Wrd66.uLng) = ((unsigned long) (((unsigned char *) (Wrd65.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd59.Obj) = (MAKE_OBJECT (26, (Wrd66.uLng)));

DEFLABEL (label_41)
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd86.Lng) = ((Wrd83.Lng) & 15L);
  (Wrd82.Obj) = (LONG_TO_FIXNUM (Wrd86.Lng));
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd94.uLng) == 26))
    goto label_40;
  Wrd95 = Wrd86;
  (Wrd96.Obj) = (current_block [OBJECT_37_4]);
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [1]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) (Wrd95.Lng)) < ((unsigned long) (Wrd99.Lng))))
    goto label_40;
  (Wrd89.uLng) = (OBJECT_DATUM (Wrd82.Obj));
  (Wrd92.pChr) = (& ((Wrd97.pChr) [(Wrd89.Lng)]));
  (Wrd93.uLng) = ((unsigned long) (((unsigned char *) (Wrd92.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd87.Obj) = (MAKE_OBJECT (2, (Wrd93.uLng)));

DEFLABEL (label_39)
  (Wrd108.Obj) = (Rsp [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  (Wrd112.Lng) = (LEFT_SHIFT ((Wrd109.Lng), 1));
  (Wrd113.Lng) = ((Wrd112.Lng) + 1L);
  (Wrd111.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));
  (Wrd130.Obj) = (Rsp [1]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 30))
    goto label_38;
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd124.uLng) == 26))
    goto label_38;
  Wrd125 = Wrd113;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd128.Obj) = ((Wrd127.pObj) [1]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  if (! (((unsigned long) (Wrd125.Lng)) < ((unsigned long) (Wrd129.Lng))))
    goto label_38;
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd123.uLng) == 2))
    goto label_38;
  (Wrd118.uLng) = (OBJECT_DATUM (Wrd111.Obj));
  (Wrd121.pChr) = (& ((Wrd127.pChr) [(Wrd118.Lng)]));
  ((Wrd121.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd87.Obj)));

DEFLABEL (label_37)
  (Wrd115.Obj) = (Rsp [0]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  (Wrd117.Lng) = ((Wrd116.Lng) + 1L);
  (Wrd114.Obj) = (LONG_TO_FIXNUM (Wrd117.Lng));
  (Rsp [0]) = (Wrd114.Obj);
  goto do_loop_18;

DEFLABEL (label_38)
  (Wrd132.Obj) = (Rsp [1]);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_29)
  goto label_37;

DEFLABEL (label_40)
  (Wrd100.Obj) = (current_block [OBJECT_37_4]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_5]), 2);

DEFLABEL (label_28)
  (Wrd87.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_27)
  (Wrd59.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd152.Obj) = (Rsp [1]);
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_6]), 3);

DEFLABEL (label_30)
  goto label_43;

DEFLABEL (label_46)
  (Wrd48.Obj) = (current_block [OBJECT_37_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_5]), 2);

DEFLABEL (label_26)
  (Wrd35.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_3]), 2);

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define EXECUTE_CACHE_38_7 7
#define EXECUTE_CACHE_38_6 9
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto md5_availableP_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (md5_availableP_5)
DEFLABEL (md5_availableP_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 14
#define DEBUGGING_LABEL_39_2 13
#define OBJECT_39_1 12
#define OBJECT_39_0 11
#define EXECUTE_CACHE_39_7 7
#define EXECUTE_CACHE_39_6 9
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_39_4);
      goto Z__md5_availableP_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__md5_availableP_4)
DEFLABEL (Z__md5_availableP_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd5.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 22
#define DEBUGGING_LABEL_40_2 21
#define OBJECT_40_1 20
#define OBJECT_40_0 19
#define EXECUTE_CACHE_40_11 9
#define EXECUTE_CACHE_40_10 11
#define EXECUTE_CACHE_40_9 13
#define EXECUTE_CACHE_40_8 15
#define EXECUTE_CACHE_40_6 17
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_40_4);
      goto md5_file_2;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (md5_file_5)
DEFLABEL (md5_file_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (label_6)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_40_1]);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_9 11
#define TAG_41_10 4
#define LABEL_41_11 13
#define TAG_41_12 5
#define LABEL_41_13 15
#define LABEL_41_16 17
#define LABEL_41_17 19
#define LABEL_41_19 21
#define ENVIRONMENT_LABEL_41_3 40
#define DEBUGGING_LABEL_41_2 39
#define OBJECT_41_7 38
#define OBJECT_41_6 37
#define OBJECT_41_5 36
#define OBJECT_41_4 35
#define OBJECT_41_3 34
#define OBJECT_41_2 33
#define OBJECT_41_1 32
#define OBJECT_41_0 31
#define EXECUTE_CACHE_41_18 23
#define EXECUTE_CACHE_41_15 25
#define EXECUTE_CACHE_41_14 27
#define EXECUTE_CACHE_41_6 29
#define FREE_REFERENCES_LABEL_41_0 22
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_41_4);
      goto Z__md5_file_14;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_41_11);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_41_13);
      goto lambda_2;

    case 7:
      current_block = (Rpc - LABEL_41_16);
      goto loop_8;

    case 8:
      current_block = (Rpc - LABEL_41_17);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_41_19);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__md5_file_17)
DEFLABEL (Z__md5_file_14)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_9])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_11])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_41_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_8;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_41_11);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_15]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_41_13);
  Rvl = (current_block [OBJECT_41_4]);
  goto pop_return;

DEFLABEL (loop_22)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_41_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_41_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41_5]);
  if (! ((Wrd5.Obj) == Rvl))
    goto label_23;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [3]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_6]), 1);

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_7]), 4);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_19);
  Rsp = (& (Rsp [1]));
  goto loop_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 12
#define DEBUGGING_LABEL_42_2 11
#define OBJECT_42_1 10
#define OBJECT_42_0 9
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      goto md5_string_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (md5_string_5)
DEFLABEL (md5_string_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 30))
    goto label_7;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd7.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define ENVIRONMENT_LABEL_43_3 22
#define DEBUGGING_LABEL_43_2 21
#define OBJECT_43_1 20
#define OBJECT_43_0 19
#define EXECUTE_CACHE_43_11 9
#define EXECUTE_CACHE_43_10 11
#define EXECUTE_CACHE_43_9 13
#define EXECUTE_CACHE_43_8 15
#define EXECUTE_CACHE_43_6 17
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto md5_substring_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (md5_substring_5)
DEFLABEL (md5_substring_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd7.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (label_6)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define ENVIRONMENT_LABEL_44_3 12
#define DEBUGGING_LABEL_44_2 11
#define OBJECT_44_2 10
#define OBJECT_44_1 9
#define OBJECT_44_0 8
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_44_4);
      goto Z__md5_substring_3;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__md5_substring_6)
DEFLABEL (Z__md5_substring_3)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 4);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto mcrypt_context_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_context_index_3)
DEFLABEL (mcrypt_context_index_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

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

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto set_mcrypt_context_indexB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_mcrypt_context_indexB_3)
DEFLABEL (set_mcrypt_context_indexB_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define ENVIRONMENT_LABEL_47_3 17
#define DEBUGGING_LABEL_47_2 16
#define OBJECT_47_3 15
#define OBJECT_47_2 14
#define OBJECT_47_1 13
#define OBJECT_47_0 12
#define FREE_REFERENCE_47_0 11
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto mcrypt_contextP_4;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_contextP_10)
DEFLABEL (mcrypt_contextP_4)
  INTERRUPT_CHECK (26, LABEL_47_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
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
  Rvl = (current_block [OBJECT_47_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_47_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_7 5
#define LABEL_48_5 7
#define LABEL_48_9 9
#define ENVIRONMENT_LABEL_48_3 22
#define DEBUGGING_LABEL_48_2 21
#define OBJECT_48_3 20
#define OBJECT_48_2 19
#define OBJECT_48_1 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_10 11
#define EXECUTE_CACHE_48_8 13
#define EXECUTE_CACHE_48_6 15
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      goto guarantee_mcrypt_context_3;

    case 1:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_mcrypt_context_7)
DEFLABEL (guarantee_mcrypt_context_3)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd9.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_48_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_9 7
#define LABEL_49_10 9
#define LABEL_49_11 11
#define LABEL_49_7 13
#define LABEL_49_12 15
#define LABEL_49_14 17
#define LABEL_49_15 19
#define LABEL_49_16 21
#define LABEL_49_13 23
#define LABEL_49_18 25
#define LABEL_49_19 27
#define LABEL_49_20 29
#define ENVIRONMENT_LABEL_49_3 54
#define DEBUGGING_LABEL_49_2 53
#define OBJECT_49_5 52
#define OBJECT_49_4 51
#define OBJECT_49_3 50
#define OBJECT_49_2 49
#define OBJECT_49_1 48
#define OBJECT_49_0 47
#define EXECUTE_CACHE_49_17 31
#define EXECUTE_CACHE_49_8 33
#define EXECUTE_CACHE_49_6 35
#define FREE_REFERENCE_49_3 38
#define FREE_REFERENCE_49_2 39
#define FREE_REFERENCE_49_1 40
#define FREE_REFERENCE_49_0 41
#define FREE_ASSIGNMENT_49_3 43
#define FREE_ASSIGNMENT_49_2 44
#define FREE_ASSIGNMENT_49_1 45
#define FREE_ASSIGNMENT_49_0 46
#define FREE_REFERENCES_LABEL_49_0 30
#define NUMBER_OF_LINKER_SECTIONS_49_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_49_4);
      goto mcrypt_availableP_5;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_49_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_49_12);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_49_14);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_49_16);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_49_18);
      goto label_11;

    case 12:
      current_block = (Rpc - LABEL_49_19);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_49_20);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_availableP_16)
DEFLABEL (mcrypt_availableP_5)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_17)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_38;
  Wrd7 = Wrd11;

DEFLABEL (label_37)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_49_2]);
  goto pop_return;

DEFLABEL (label_19)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_36;
  Wrd18 = Wrd22;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_34;
  Wrd24 = Wrd28;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_32;
  Wrd30 = Wrd34;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_49_3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_4]), 0);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_19);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_5]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_0]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd39.pObj) [0]) = Rvl;

DEFLABEL (label_22)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_1]));
  (Wrd52.Obj) = (current_block [OBJECT_49_2]);
  (Wrd59.Obj) = ((Wrd51.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd51.pObj) [0]) = (Wrd52.Obj);
  goto label_18;

DEFLABEL (label_21)
  if ((Wrd59.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_11])), (Wrd51.pObj), (Wrd52.Obj));

DEFLABEL (label_14)
  goto label_18;

DEFLABEL (label_24)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_10])), (Wrd39.pObj), Rvl);

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_11)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_16])), (Wrd31.pObj));

DEFLABEL (label_10)
  (Wrd30.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_15])), (Wrd25.pObj));

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_14])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_12])), (Wrd8.pObj));

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 11
#define DEBUGGING_LABEL_50_2 10
#define OBJECT_50_1 9
#define OBJECT_50_0 8
#define FREE_ASSIGNMENT_50_0 7
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto reset_mcrypt_variablesB_0;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_mcrypt_variablesB_4)
DEFLABEL (reset_mcrypt_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_50_0]));
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_50_1]);
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_50_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 12
#define DEBUGGING_LABEL_51_2 11
#define EXECUTE_CACHE_51_6 7
#define FREE_REFERENCE_51_0 10
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_51_4);
      goto mcrypt_algorithm_names_0;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_algorithm_names_4)
DEFLABEL (mcrypt_algorithm_names_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 12
#define DEBUGGING_LABEL_52_2 11
#define EXECUTE_CACHE_52_6 7
#define FREE_REFERENCE_52_0 10
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_52_4);
      goto mcrypt_mode_names_0;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_mode_names_4)
DEFLABEL (mcrypt_mode_names_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_8 7
#define LABEL_53_9 9
#define LABEL_53_10 11
#define ENVIRONMENT_LABEL_53_3 23
#define DEBUGGING_LABEL_53_2 22
#define OBJECT_53_0 21
#define EXECUTE_CACHE_53_12 13
#define EXECUTE_CACHE_53_11 15
#define EXECUTE_CACHE_53_7 17
#define FREE_REFERENCE_53_0 20
#define FREE_REFERENCES_LABEL_53_0 12
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto mcrypt_open_module_3;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_open_module_7)
DEFLABEL (mcrypt_open_module_3)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_8 7
#define LABEL_54_7 9
#define LABEL_54_9 11
#define ENVIRONMENT_LABEL_54_3 24
#define DEBUGGING_LABEL_54_2 23
#define OBJECT_54_5 22
#define OBJECT_54_4 21
#define OBJECT_54_3 20
#define OBJECT_54_2 19
#define OBJECT_54_1 18
#define OBJECT_54_0 17
#define EXECUTE_CACHE_54_10 13
#define EXECUTE_CACHE_54_6 15
#define FREE_REFERENCES_LABEL_54_0 12
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
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
      goto mcrypt_init_5;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_54_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_init_10)
DEFLABEL (mcrypt_init_5)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_15;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_15;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_13;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd17.Lng) == 0)
    goto label_12;

DEFLABEL (label_11)
  (Wrd13.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_54_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_12;

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_54_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define LABEL_55_10 9
#define LABEL_55_9 11
#define LABEL_55_11 13
#define LABEL_55_12 15
#define ENVIRONMENT_LABEL_55_3 36
#define DEBUGGING_LABEL_55_2 35
#define OBJECT_55_9 34
#define OBJECT_55_8 33
#define OBJECT_55_7 32
#define OBJECT_55_6 31
#define OBJECT_55_5 30
#define OBJECT_55_4 29
#define OBJECT_55_3 28
#define OBJECT_55_2 27
#define OBJECT_55_1 26
#define OBJECT_55_0 25
#define EXECUTE_CACHE_55_14 17
#define EXECUTE_CACHE_55_13 19
#define EXECUTE_CACHE_55_8 21
#define EXECUTE_CACHE_55_6 23
#define FREE_REFERENCES_LABEL_55_0 16
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd40;
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_55_4);
      goto mcrypt_encrypt_11;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_55_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_55_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_55_12);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_encrypt_16)
DEFLABEL (mcrypt_encrypt_11)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) - (Wrd12.Lng));
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd17.Lng) = ((Wrd15.Lng) + (Wrd13.Lng));
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_27;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_27;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [11]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd39.Obj) = (current_block [OBJECT_55_4]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_17;

DEFLABEL (label_18)
  (Wrd40.Obj) = (current_block [OBJECT_55_3]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_17)
DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_24;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd24.Lng) == 0))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_55_9]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_55_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [9]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd18.Obj) = (current_block [OBJECT_55_7]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd20.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_21)
DEFLABEL (label_23)
  (Wrd19.Obj) = (current_block [OBJECT_55_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_55_12);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_14]));

DEFLABEL (label_24)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_55_1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 12
#define DEBUGGING_LABEL_56_2 11
#define EXECUTE_CACHE_56_6 7
#define FREE_REFERENCE_56_0 10
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_56_4);
      goto mcrypt_end_0;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_end_4)
DEFLABEL (mcrypt_end_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_7 7
#define LABEL_57_10 9
#define ENVIRONMENT_LABEL_57_3 19
#define DEBUGGING_LABEL_57_2 18
#define OBJECT_57_2 17
#define OBJECT_57_1 16
#define OBJECT_57_0 15
#define EXECUTE_CACHE_57_9 11
#define EXECUTE_CACHE_57_8 13
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_57_4);
      goto mcrypt_generic_unary_4;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_57_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_generic_unary_8)
DEFLABEL (mcrypt_generic_unary_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_11;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_57_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 30)
    goto label_13;
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [4]);
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (label_13)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Rsp [0]) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_7 7
#define ENVIRONMENT_LABEL_58_3 16
#define DEBUGGING_LABEL_58_2 15
#define OBJECT_58_3 14
#define OBJECT_58_2 13
#define OBJECT_58_1 12
#define OBJECT_58_0 11
#define EXECUTE_CACHE_58_6 9
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto mcrypt_init_vector_size_2;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_init_vector_size_6)
DEFLABEL (mcrypt_init_vector_size_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define ENVIRONMENT_LABEL_59_3 16
#define DEBUGGING_LABEL_59_2 15
#define OBJECT_59_3 14
#define OBJECT_59_2 13
#define OBJECT_59_1 12
#define OBJECT_59_0 11
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 8
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto mcrypt_algorithm_name_2;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_algorithm_name_6)
DEFLABEL (mcrypt_algorithm_name_2)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_59_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_7 7
#define ENVIRONMENT_LABEL_60_3 16
#define DEBUGGING_LABEL_60_2 15
#define OBJECT_60_3 14
#define OBJECT_60_2 13
#define OBJECT_60_1 12
#define OBJECT_60_0 11
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto mcrypt_mode_name_2;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_mode_name_6)
DEFLABEL (mcrypt_mode_name_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_60_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define LABEL_61_7 9
#define LABEL_61_9 11
#define LABEL_61_11 13
#define LABEL_61_12 15
#define TAG_61_13 6
#define LABEL_61_14 17
#define TAG_61_15 7
#define LABEL_61_19 19
#define LABEL_61_17 21
#define LABEL_61_20 23
#define LABEL_61_23 25
#define LABEL_61_25 27
#define ENVIRONMENT_LABEL_61_3 51
#define DEBUGGING_LABEL_61_2 50
#define OBJECT_61_4 49
#define OBJECT_61_3 48
#define OBJECT_61_2 47
#define OBJECT_61_1 46
#define OBJECT_61_0 45
#define EXECUTE_CACHE_61_26 29
#define EXECUTE_CACHE_61_24 31
#define EXECUTE_CACHE_61_22 33
#define EXECUTE_CACHE_61_21 35
#define EXECUTE_CACHE_61_18 37
#define EXECUTE_CACHE_61_16 39
#define EXECUTE_CACHE_61_10 41
#define EXECUTE_CACHE_61_8 43
#define FREE_REFERENCES_LABEL_61_0 28
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_61_4);
      goto mcrypt_encrypt_port_18;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_61_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_61_11);
      goto lambda_4;

    case 6:
      current_block = (Rpc - LABEL_61_12);
      goto lambda_22;

    case 7:
      current_block = (Rpc - LABEL_61_14);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_61_19);
      goto loop_12;

    case 9:
      current_block = (Rpc - LABEL_61_17);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_61_20);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_61_23);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_61_25);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (mcrypt_encrypt_port_21)
DEFLABEL (mcrypt_encrypt_port_18)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_61_9);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (Rsp [7]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_12])));
  Rhp += 6;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [9]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [7]) = (Wrd11.Obj);
  (Rsp [8]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_14])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  ((Wrd27.pObj) [2]) = (Wrd15.Obj);
  ((Wrd27.pObj) [3]) = (Wrd13.Obj);
  (Rsp [9]) = (Wrd23.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_16]));

DEFLABEL (lambda_24)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_61_11);
  Rvl = (current_block [OBJECT_61_2]);
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_61_12);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_12;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_61_14);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_61_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61_3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_18]));

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_61_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_61_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61_4]);
  if (! ((Wrd5.Obj) == Rvl))
    goto label_26;
  Rsp = (& (Rsp [1]));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [7]);
  (Rsp [0]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_22]));

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd21.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd11.pObj) [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_61_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_61_25);
  Rsp = (& (Rsp [1]));
  goto loop_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_8 7
#define LABEL_62_9 9
#define LABEL_62_7 11
#define LABEL_62_11 13
#define LABEL_62_13 15
#define LABEL_62_14 17
#define ENVIRONMENT_LABEL_62_3 30
#define DEBUGGING_LABEL_62_2 29
#define EXECUTE_CACHE_62_12 19
#define EXECUTE_CACHE_62_10 21
#define EXECUTE_CACHE_62_6 23
#define FREE_REFERENCE_62_2 26
#define FREE_REFERENCE_62_1 27
#define FREE_REFERENCE_62_0 28
#define FREE_REFERENCES_LABEL_62_0 18
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_62_4);
      goto initialize_packageB_3;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_62_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_62_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_62_13);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_62_14);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_10)
DEFLABEL (initialize_packageB_3)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_16;
  Wrd14 = Wrd18;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_14])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_13])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_9])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_8])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_8 9
#define LABEL_63_10 11
#define LABEL_63_9 13
#define LABEL_63_12 15
#define ENVIRONMENT_LABEL_63_3 24
#define DEBUGGING_LABEL_63_2 23
#define OBJECT_63_1 22
#define OBJECT_63_0 21
#define EXECUTE_CACHE_63_11 17
#define EXECUTE_CACHE_63_7 19
#define FREE_REFERENCES_LABEL_63_0 16
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_63_4);
      goto make_names_vector_14;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_63_8);
      goto do_loop_10;

    case 4:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_63_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_names_vector_18)
DEFLABEL (make_names_vector_14)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_10;

DEFLABEL (do_loop_19)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_63_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_20;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (label_21)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_24)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_23;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_23;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_23;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd14.pObj) = (& ((Wrd20.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_22)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_10;

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 3);

DEFLABEL (label_16)
  goto label_22;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_63_9);
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_7 9
#define ENVIRONMENT_LABEL_64_3 15
#define DEBUGGING_LABEL_64_2 14
#define OBJECT_64_3 13
#define OBJECT_64_2 12
#define OBJECT_64_1 11
#define OBJECT_64_0 10
#define FREE_REFERENCES_LABEL_64_0 10
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
crypto_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_64_4);
      goto names_vector__list_10;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_64_7);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (names_vector__list_15)
DEFLABEL (names_vector__list_10)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  (Wrd16.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_64_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_7;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_64_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_19;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_24;
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_24;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_24;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd15.pObj) = (& ((Wrd22.pObj) [(Wrd12.Lng)]));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd39.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  goto label_20;

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [2]);

DEFLABEL (label_20)
DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd42.Lng) + 1L);
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (Rsp [0]) = (Wrd40.Obj);
  goto loop_7;

DEFLABEL (label_24)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
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
#define LABEL_35 49
#define LABEL_32 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_36 57
#define LABEL_41 59
#define LABEL_37 61
#define TAG_38 29
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_42 67
#define LABEL_44 69
#define LABEL_43 71
#define LABEL_46 73
#define LABEL_45 75
#define LABEL_47 77
#define LABEL_48 79
#define LABEL_52 81
#define LABEL_49 83
#define LABEL_50 85
#define LABEL_51 87
#define LABEL_53 89
#define LABEL_58 91
#define LABEL_54 93
#define TAG_55 45
#define LABEL_56 95
#define LABEL_57 97
#define LABEL_59 99
#define LABEL_60 101
#define LABEL_61 103
#define LABEL_63 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_66 111
#define LABEL_67 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_70 119
#define LABEL_71 121
#define LABEL_72 123
#define LABEL_73 125
#define LABEL_74 127
#define LABEL_75 129
#define ENVIRONMENT_LABEL_3 211
#define DEBUGGING_LABEL_2 210
#define PURIFICATION_ROOT 209
#define OBJECT_61 208
#define OBJECT_60 207
#define OBJECT_59 206
#define OBJECT_58 205
#define OBJECT_57 204
#define OBJECT_56 203
#define OBJECT_55 202
#define OBJECT_54 201
#define OBJECT_53 200
#define OBJECT_52 199
#define OBJECT_51 198
#define OBJECT_50 197
#define OBJECT_49 196
#define OBJECT_48 195
#define OBJECT_47 194
#define OBJECT_46 193
#define OBJECT_45 192
#define OBJECT_44 191
#define OBJECT_43 190
#define OBJECT_42 189
#define OBJECT_41 188
#define OBJECT_40 187
#define OBJECT_39 186
#define OBJECT_38 185
#define OBJECT_37 184
#define OBJECT_36 183
#define OBJECT_35 182
#define OBJECT_34 181
#define OBJECT_33 180
#define OBJECT_32 179
#define OBJECT_31 178
#define OBJECT_30 177
#define OBJECT_29 176
#define OBJECT_28 175
#define OBJECT_27 174
#define OBJECT_26 173
#define OBJECT_25 172
#define OBJECT_24 171
#define OBJECT_23 170
#define OBJECT_22 169
#define OBJECT_21 168
#define OBJECT_20 167
#define OBJECT_19 166
#define OBJECT_18 165
#define OBJECT_17 164
#define OBJECT_16 163
#define OBJECT_15 162
#define OBJECT_14 161
#define OBJECT_13 160
#define OBJECT_12 159
#define OBJECT_11 158
#define OBJECT_10 157
#define OBJECT_9 156
#define OBJECT_8 155
#define OBJECT_7 154
#define OBJECT_6 153
#define OBJECT_5 152
#define OBJECT_4 151
#define OBJECT_3 150
#define OBJECT_2 149
#define OBJECT_1 148
#define OBJECT_0 147
#define EXECUTE_CACHE_62 131
#define FREE_REFERENCE_5 134
#define FREE_REFERENCE_4 135
#define FREE_REFERENCE_3 136
#define FREE_REFERENCE_2 137
#define FREE_REFERENCE_1 138
#define FREE_REFERENCE_0 139
#define GLOBAL_EXECUTE_CACHE_12 141
#define GLOBAL_EXECUTE_CACHE_8 143
#define GLOBAL_EXECUTE_CACHE_5 145
#define FREE_REFERENCES_LABEL_0 130
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
crypto_so_d89aa08a013cea6b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_68;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_69;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_mhash_context_79;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_70;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_20;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_71;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto make_mhash_hmac_context_80;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_72;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_35;

    case 28:
      current_block = (Rpc - LABEL_41);
      goto label_73;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto Z__make_mhash_keygen_type_81;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_37;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_36;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto continuation_38;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto label_74;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_39;

    case 35:
      current_block = (Rpc - LABEL_46);
      goto label_75;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_40;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_41;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_44;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto label_76;

    case 40:
      current_block = (Rpc - LABEL_49);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_49;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_50;

    case 44:
      current_block = (Rpc - LABEL_58);
      goto label_77;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto make_mcrypt_context_82;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_52;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_51;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto continuation_53;

    case 49:
      current_block = (Rpc - LABEL_60);
      goto continuation_55;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto continuation_57;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto continuation_56;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto continuation_59;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto continuation_58;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto continuation_61;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_60;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto continuation_63;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto continuation_62;

    case 59:
      current_block = (Rpc - LABEL_71);
      goto continuation_65;

    case 60:
      current_block = (Rpc - LABEL_72);
      goto continuation_64;

    case 61:
      current_block = (Rpc - LABEL_73);
      goto label_84;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto label_85;

    case 63:
      current_block = (Rpc - LABEL_75);
      goto expression_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_67)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_74])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_85)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_84)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	1,
	3,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	3,
	1,
	1,
	0,
	0,
	0,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	2,
	2,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	0,
	0,
	1,
	0,
	0,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 64)
      goto label_83;
    blocks = (current_block [OBJECT_61]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_73])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_83)
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
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_105;
  Wrd11 = Wrd15;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_103;
  Wrd11 = Wrd15;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_101;
  Wrd11 = Wrd15;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_99;
  Wrd11 = Wrd15;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd25.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_97;
  Wrd11 = Wrd15;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_95;
  Wrd11 = Wrd15;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_93;
  Wrd8 = Wrd12;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_91;
  Wrd8 = Wrd12;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_87;
  Wrd11 = Wrd15;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_68);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd5.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_60]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd12.pObj));

DEFLABEL (label_77)
  (Wrd11.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd12.pObj));

DEFLABEL (label_76)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd9.pObj));

DEFLABEL (label_75)
  (Wrd8.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd9.pObj));

DEFLABEL (label_74)
  (Wrd8.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd12.pObj));

DEFLABEL (label_73)
  (Wrd11.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd12.pObj));

DEFLABEL (label_72)
  (Wrd11.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_71)
  (Wrd11.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_69)
  (Wrd11.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_68)
  (Wrd11.Obj) = Rvl;
  goto label_104;

DEFLABEL (make_mhash_context_79)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_mhash_context_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_mhash_hmac_context_80)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (make_mhash_hmac_context_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (Z__make_mhash_keygen_type_81)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (Z__make_mhash_keygen_type_32)
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
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (make_mcrypt_context_82)
  CLOSURE_HEADER (LABEL_54);

DEFLABEL (make_mcrypt_context_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_crypto_so_d89aa08a013cea6b [64] =
  {
    { "crypto_so_code_1", 6, crypto_so_code_1 },
    { "crypto_so_code_2", 1, crypto_so_code_2 },
    { "crypto_so_code_3", 1, crypto_so_code_3 },
    { "crypto_so_code_4", 4, crypto_so_code_4 },
    { "crypto_so_code_5", 1, crypto_so_code_5 },
    { "crypto_so_code_6", 1, crypto_so_code_6 },
    { "crypto_so_code_7", 4, crypto_so_code_7 },
    { "crypto_so_code_8", 4, crypto_so_code_8 },
    { "crypto_so_code_9", 4, crypto_so_code_9 },
    { "crypto_so_code_10", 2, crypto_so_code_10 },
    { "crypto_so_code_11", 2, crypto_so_code_11 },
    { "crypto_so_code_12", 7, crypto_so_code_12 },
    { "crypto_so_code_13", 3, crypto_so_code_13 },
    { "crypto_so_code_14", 2, crypto_so_code_14 },
    { "crypto_so_code_15", 8, crypto_so_code_15 },
    { "crypto_so_code_16", 3, crypto_so_code_16 },
    { "crypto_so_code_17", 2, crypto_so_code_17 },
    { "crypto_so_code_18", 6, crypto_so_code_18 },
    { "crypto_so_code_19", 2, crypto_so_code_19 },
    { "crypto_so_code_20", 2, crypto_so_code_20 },
    { "crypto_so_code_21", 2, crypto_so_code_21 },
    { "crypto_so_code_22", 2, crypto_so_code_22 },
    { "crypto_so_code_23", 2, crypto_so_code_23 },
    { "crypto_so_code_24", 2, crypto_so_code_24 },
    { "crypto_so_code_25", 22, crypto_so_code_25 },
    { "crypto_so_code_26", 1, crypto_so_code_26 },
    { "crypto_so_code_27", 1, crypto_so_code_27 },
    { "crypto_so_code_28", 1, crypto_so_code_28 },
    { "crypto_so_code_29", 4, crypto_so_code_29 },
    { "crypto_so_code_30", 28, crypto_so_code_30 },
    { "crypto_so_code_31", 19, crypto_so_code_31 },
    { "crypto_so_code_32", 2, crypto_so_code_32 },
    { "crypto_so_code_33", 10, crypto_so_code_33 },
    { "crypto_so_code_34", 2, crypto_so_code_34 },
    { "crypto_so_code_35", 3, crypto_so_code_35 },
    { "crypto_so_code_36", 6, crypto_so_code_36 },
    { "crypto_so_code_37", 10, crypto_so_code_37 },
    { "crypto_so_code_38", 2, crypto_so_code_38 },
    { "crypto_so_code_39", 2, crypto_so_code_39 },
    { "crypto_so_code_40", 3, crypto_so_code_40 },
    { "crypto_so_code_41", 10, crypto_so_code_41 },
    { "crypto_so_code_42", 2, crypto_so_code_42 },
    { "crypto_so_code_43", 3, crypto_so_code_43 },
    { "crypto_so_code_44", 3, crypto_so_code_44 },
    { "crypto_so_code_45", 1, crypto_so_code_45 },
    { "crypto_so_code_46", 1, crypto_so_code_46 },
    { "crypto_so_code_47", 4, crypto_so_code_47 },
    { "crypto_so_code_48", 4, crypto_so_code_48 },
    { "crypto_so_code_49", 14, crypto_so_code_49 },
    { "crypto_so_code_50", 2, crypto_so_code_50 },
    { "crypto_so_code_51", 2, crypto_so_code_51 },
    { "crypto_so_code_52", 2, crypto_so_code_52 },
    { "crypto_so_code_53", 5, crypto_so_code_53 },
    { "crypto_so_code_54", 5, crypto_so_code_54 },
    { "crypto_so_code_55", 7, crypto_so_code_55 },
    { "crypto_so_code_56", 2, crypto_so_code_56 },
    { "crypto_so_code_57", 4, crypto_so_code_57 },
    { "crypto_so_code_58", 3, crypto_so_code_58 },
    { "crypto_so_code_59", 3, crypto_so_code_59 },
    { "crypto_so_code_60", 3, crypto_so_code_60 },
    { "crypto_so_code_61", 13, crypto_so_code_61 },
    { "crypto_so_code_62", 8, crypto_so_code_62 },
    { "crypto_so_code_63", 7, crypto_so_code_63 },
    { "crypto_so_code_64", 4, crypto_so_code_64 }
  };

int
decl_crypto_so_d89aa08a013cea6b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_crypto_so_d89aa08a013cea6b);
  return (0);
}

DECLARE_COMPILED_CODE ("crypto.so", 64, decl_crypto_so_d89aa08a013cea6b, crypto_so_d89aa08a013cea6b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_crypto_so_data_d89aa08a013cea6b [9348] =
  "\xd4\x01\x82\x01\xab\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9"
  "\x80\xc1\xba\x0d\xbb\x24\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\xc2\xbe"
  "\x81\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x83\x88\xc3\x1c\x1d\x81\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x84\x88\x07\xb6\x80\xc1\x1c\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85"
  "\x88\xb6\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\x1b\x1d\x81"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x80\x1b\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\xb6\x81\x0c\x28\x0d\x1c\x28\x0d\x1c\x28\xb4\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb6"
  "\x81\x0c\x28\x0d\x1c\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\xc1\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc4\x1c\xb6\x81\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\xc3\xc1\x1b\x0d\x1c\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\xb6\x81\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\xb2\x0d\x1c\x24\x28\xb4"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\xc1\x1c\x1b\x0c\xb1\x1d\xc4\xc3\x1c\x80\x0c"
  "\x1b\x81\xc1\x1c\x82\xb6\x83\x0c\x0d\x1c\x1b\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb6\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x83\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb6\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1\x81\x06"
  "\x07\x02\xc2\x02\x0c\x1d\x0c\x1b\x80\x82\x0c\x08\x0c\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\xb4\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\xc1"
  "\xc1\xc1\xc0\xc1\x07\x1b\x0c\x1b\x0d\x1c\xb3\x1b\x1b\x25\x1b\x0d"
  "\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x06\x1b\x25\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x0f\x1d\x1b\x02\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\xc2\x1c\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\xc2\x0c\x1b\x80\x1b"
  "\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc0\x1c\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc4\x1c\xc1\x1c\x80\x1d\x0f\x1b\x02\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1b\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb6\x80\x1b\x0e\x1c\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\xb6\x81\x0c\x28\x0d\x1c\x28\x1b\x28\xb4\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\xc0\xc0\xc1\x07"
  "\xc2\x1c\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x0d\x1c\x0d"
  "\x1c\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x06"
  "\x1b\x25\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\xc3"
  "\xb6\x81\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c\x0c"
  "\x0c\xc4\xc4\xb6\x81\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x81\x0c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\xb6\x81\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\xb6\x81\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xb6\x81\x0d\xbe"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x0f\x1d\x1b\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x0d\x1c"
  "\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x80\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x80\x08"
  "\xb2\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xba\x88"
  "\xb2\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e"
  "\x1b\x1b\x0d\x0d\xb6\x1b\x1b\x9e\x0d\xc1\xc1\x0d\xc1\xc1\x0d\xc1"
  "\xc1\x0d\xc1\xc1\x0d\xc1\xc1\x0d\xc1\xc1\x1b\x0d\x1c\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x1b\x0d\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x1b\x2a\x17\x1b"
  "\x1b\x1b\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x0c\x1b\x1b\x1b\x1b\x9b"
  "\x1e\x1e\x1e\x1e\x9b\x0d\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x0d\x0d"
  "\x1c\x0d\x1c\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d"
  "\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x0c\x0d\x0d\x0d\x08\x8a"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b"
  "\x1b\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x1b\x99\x1b\x2a\x1b\x0c\x1b"
  "\x1b\x1b\x99\x1b\x2a\xb7\x2a\x99\xc3\x0d\x1c\x0c\x0d\x08\x88\x08"
  "\x1b\x1b\x1b\xb3\x1b\x9c\xb5\x2a\x1e\x1e\x1e\x1e\x9c\x28\x0d\x28"
  "\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x63\x72\x79\x70"
  "\x74\x6f\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x16\x6d\x68\x61\x73\x68\x2d\x61\x6c\x67\x6f"
  "\x72\x69\x74\x68\x6d\x2d\x6e\x61\x6d\x65\x73\x02\x04\x19\x65\x72"
  "\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x02\x46\x0e\x81\x89\x02\x45\x0c\x81\x89"
  "\x02\x44\x0a\x81\x89\x02\x43\x08\x81\x85\x02\x42\x06\x81\x85\x02"
  "\x41\x04\x84\x06\x0d\x18\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d"
  "\x72\x65\x66\x47\x04\x83\x04\x03\x02\x0d\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x73\x65\x74\x21\x09\x02\x48\x04\x84\x06\x03\x0a\x02\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x0b\x07"
  "\x2e\x74\x61\x67\x2e\x31\x0c\x02\x4c\x0a\x81\x85\x02\x4b\x08\x81"
  "\x83\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04\x09\x12\x0d\x02\x4d"
  "\x04\x83\x04\x03\x0e\x02\x09\x02\x4e\x04\x84\x06\x03\x0f\x02\x08"
  "\x0b\x07\x2e\x74\x61\x67\x2e\x32\x10\x02\x52\x0a\x81\x85\x02\x51"
  "\x08\x81\x83\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x09\x12\x11"
  "\x02\x09\x02\x0e\x6d\x68\x61\x73\x68\x20\x63\x6f\x6e\x74\x65\x78"
  "\x74\x03\x0f\x6d\x68\x61\x73\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x3f\x12\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d"
  "\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x13\x04\x04"
  "\x56\x0a\x81\x85\x02\x55\x08\x81\x85\x02\x54\x06\x81\x85\x02\x53"
  "\x04\x84\x06\x09\x17\x14\x02\x0a\x02\x13\x6d\x68\x61\x73\x68\x20"
  "\x48\x4d\x41\x43\x20\x63\x6f\x6e\x74\x65\x78\x74\x03\x14\x6d\x68"
  "\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x3f\x15\x05\x13\x04\x04\x5a\x0a\x81\x85\x02\x59\x08\x81\x85\x02"
  "\x58\x06\x81\x85\x02\x57\x04\x84\x06\x09\x17\x16\x02\x0b\x02\x03"
  "\x13\x6e\x61\x6d\x65\x73\x2d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c"
  "\x69\x73\x74\x17\x02\x5c\x06\x81\x81\x02\x5b\x04\x82\x02\x05\x0d"
  "\x18\x02\x0c\x15\x6d\x68\x61\x73\x68\x5f\x67\x65\x74\x5f\x62\x6c"
  "\x6f\x63\x6b\x5f\x73\x69\x7a\x65\x15\x6d\x68\x61\x73\x68\x2d\x67"
  "\x65\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x73\x69\x7a\x65\x19\x04\x0f"
  "\x6d\x68\x61\x73\x68\x2d\x6e\x61\x6d\x65\x2d\x3e\x69\x64\x1a\x02"
  "\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x05\x0d\x1b\x02\x0d\x22\x55"
  "\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74"
  "\x65\x20\x6d\x68\x61\x73\x68\x20\x63\x6f\x6e\x74\x65\x78\x74\x3a"
  "\x0b\x6d\x68\x61\x73\x68\x5f\x69\x6e\x69\x74\x0b\x6d\x68\x61\x73"
  "\x68\x2d\x69\x6e\x69\x74\x1c\x0f\x6d\x68\x61\x73\x68\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x73\x1d\x02\x04\x1a\x03\x13\x77\x69\x74\x68"
  "\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x1e\x04"
  "\x06\x65\x72\x72\x6f\x72\x1f\x03\x13\x6d\x61\x6b\x65\x2d\x6d\x68"
  "\x61\x73\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74\x20\x04\x15\x61\x64"
  "\x64\x2d\x74\x6f\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65"
  "\x72\x21\x21\x06\x65\x10\x81\x87\x02\x64\x0e\x81\x85\x02\x63\x0c"
  "\x81\x83\x02\x62\x0a\x81\x85\x02\x61\x08\x81\x83\x02\x60\x06\x81"
  "\x83\x02\x5f\x04\x83\x04\x0f\x22\x22\x02\x0e\x06\x6d\x68\x61\x73"
  "\x68\x23\x0d\x6d\x68\x61\x73\x68\x2d\x75\x70\x64\x61\x74\x65\x24"
  "\x04\x18\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d\x68\x61\x73"
  "\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74\x25\x02\x68\x08\x81\x89\x02"
  "\x67\x06\x81\x89\x02\x66\x04\x86\x0a\x07\x11\x26\x02\x0f\x1d\x02"
  "\x04\x1a\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x67\x63"
  "\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x27\x02\x6a\x06\x81"
  "\x83\x02\x69\x04\x83\x04\x05\x0d\x28\x02\x10\x27\x55\x6e\x61\x62"
  "\x6c\x65\x20\x74\x6f\x20\x61\x6c\x6c\x6f\x63\x61\x74\x65\x20\x6d"
  "\x68\x61\x73\x68\x20\x48\x4d\x41\x43\x20\x63\x6f\x6e\x74\x65\x78"
  "\x74\x3a\x10\x6d\x68\x61\x73\x68\x5f\x68\x6d\x61\x63\x5f\x69\x6e"
  "\x69\x74\x16\x6d\x68\x61\x73\x68\x5f\x67\x65\x74\x5f\x68\x61\x73"
  "\x68\x5f\x70\x62\x6c\x6f\x63\x6b\x1c\x14\x6d\x68\x61\x73\x68\x2d"
  "\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x29\x02\x04"
  "\x1a\x03\x1e\x04\x1f\x03\x18\x6d\x61\x6b\x65\x2d\x6d\x68\x61\x73"
  "\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2a\x04"
  "\x21\x06\x72\x12\x81\x87\x02\x71\x10\x81\x85\x02\x70\x0e\x81\x83"
  "\x02\x6f\x0c\x81\x85\x02\x6e\x0a\x81\x83\x02\x6d\x08\x81\x87\x02"
  "\x6c\x06\x81\x85\x02\x6b\x04\x84\x06\x11\x25\x2b\x02\x11\x23\x12"
  "\x6d\x68\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x75\x70\x64\x61\x74"
  "\x65\x2c\x04\x1d\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d\x68"
  "\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2d\x02\x75\x08\x81\x89\x02\x74\x06\x81\x89\x02\x73\x04\x86\x0a"
  "\x07\x11\x2e\x02\x12\x29\x02\x04\x27\x02\x77\x06\x81\x83\x02\x76"
  "\x04\x83\x04\x05\x0d\x2f\x02\x13\x13\x6d\x68\x61\x73\x68\x2d\x6b"
  "\x65\x79\x67\x65\x6e\x2d\x6e\x61\x6d\x65\x73\x30\x02\x04\x02\x7d"
  "\x0e\x81\x89\x02\x7c\x0c\x81\x89\x02\x7b\x0a\x81\x89\x02\x7a\x08"
  "\x81\x85\x02\x79\x06\x81\x85\x02\x78\x04\x84\x06\x0d\x18\x31\x02"
  "\x14\x30\x02\x03\x17\x02\x7f\x06\x81\x81\x02\x7e\x04\x82\x02\x05"
  "\x0d\x32\x02\x15\x17\x6d\x68\x61\x73\x68\x5f\x6b\x65\x79\x67\x65"
  "\x6e\x5f\x75\x73\x65\x73\x5f\x73\x61\x6c\x74\x33\x18\x6d\x68\x61"
  "\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x75\x73\x65\x73\x2d\x73"
  "\x61\x6c\x74\x3f\x34\x04\x10\x6b\x65\x79\x67\x65\x6e\x2d\x6e\x61"
  "\x6d\x65\x2d\x3e\x69\x64\x35\x02\x81\x01\x06\x81\x83\x02\x80\x01"
  "\x04\x83\x04\x05\x0d\x36\x02\x16\x18\x6d\x68\x61\x73\x68\x5f\x6b"
  "\x65\x79\x67\x65\x6e\x5f\x75\x73\x65\x73\x5f\x63\x6f\x75\x6e\x74"
  "\x19\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x75\x73"
  "\x65\x73\x2d\x63\x6f\x75\x6e\x74\x3f\x37\x04\x35\x02\x83\x01\x06"
  "\x81\x83\x02\x82\x01\x04\x83\x04\x05\x0d\x38\x02\x17\x21\x6d\x68"
  "\x61\x73\x68\x5f\x6b\x65\x79\x67\x65\x6e\x5f\x75\x73\x65\x73\x5f"
  "\x68\x61\x73\x68\x5f\x61\x6c\x67\x6f\x72\x69\x74\x68\x6d\x21\x6d"
  "\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x75\x73\x65\x73"
  "\x2d\x68\x61\x73\x68\x2d\x61\x6c\x67\x6f\x72\x69\x74\x68\x6d\x39"
  "\x04\x35\x02\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04\x05\x0d"
  "\x3a\x02\x18\x1b\x6d\x68\x61\x73\x68\x5f\x67\x65\x74\x5f\x6b\x65"
  "\x79\x67\x65\x6e\x5f\x73\x61\x6c\x74\x5f\x73\x69\x7a\x65\x3b\x17"
  "\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x73\x61\x6c"
  "\x74\x2d\x73\x69\x7a\x65\x3c\x04\x35\x02\x87\x01\x06\x81\x83\x02"
  "\x86\x01\x04\x83\x04\x05\x0d\x3d\x02\x19\x1e\x6d\x68\x61\x73\x68"
  "\x5f\x67\x65\x74\x5f\x6b\x65\x79\x67\x65\x6e\x5f\x6d\x61\x78\x5f"
  "\x6b\x65\x79\x5f\x73\x69\x7a\x65\x1a\x6d\x68\x61\x73\x68\x2d\x6b"
  "\x65\x79\x67\x65\x6e\x2d\x6d\x61\x78\x2d\x6b\x65\x79\x2d\x73\x69"
  "\x7a\x65\x3e\x04\x35\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83"
  "\x04\x05\x0d\x3f\x02\x1a\x15\x53\x61\x6c\x74\x20\x73\x69\x7a\x65"
  "\x20\x69\x6e\x63\x6f\x72\x72\x65\x63\x74\x3a\x0d\x3b\x20\x73\x68"
  "\x6f\x75\x6c\x64\x20\x62\x65\x3a\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x40\x3b\x0f\x53\x61\x6c\x74\x20\x72\x65"
  "\x71\x75\x69\x72\x65\x64\x3a\x08\x0d\x6d\x68\x61\x73\x68\x5f\x6b"
  "\x65\x79\x67\x65\x6e\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x3b\x21\x45\x72\x72\x6f\x72\x20\x73\x69\x67\x6e\x61\x6c\x6c"
  "\x65\x64\x20\x62\x79\x20\x6d\x68\x61\x73\x68\x5f\x6b\x65\x79\x67"
  "\x65\x6e\x2e\x33\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x33\x0b\x6d\x68\x61\x73\x68\x20\x74\x79\x70\x65"
  "\x0d\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x41\x30\x02"
  "\x03\x13\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x74"
  "\x79\x70\x65\x3f\x42\x05\x13\x03\x1f\x04\x1f\x06\x1f\x03\x15\x65"
  "\x72\x72\x6f\x72\x2d\x69\x72\x72\x69\x74\x61\x6e\x74\x2f\x6e\x6f"
  "\x69\x73\x65\x43\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70"
  "\x79\x08\x9f\x01\x2e\x81\x85\x02\x9e\x01\x2c\x81\x83\x02\x9d\x01"
  "\x2a\x81\x93\x02\x9c\x01\x28\x81\x83\x02\x9b\x01\x26\x81\x83\x02"
  "\x9a\x01\x24\x81\x83\x02\x99\x01\x22\x81\x95\x02\x98\x01\x20\x81"
  "\x95\x02\x97\x01\x1e\x81\x95\x02\x96\x01\x1c\x81\x93\x02\x95\x01"
  "\x1a\x81\x93\x02\x94\x01\x18\x81\x95\x02\x93\x01\x16\x81\x93\x02"
  "\x92\x01\x14\x81\x8d\x02\x91\x01\x12\x81\x8d\x02\x90\x01\x10\x81"
  "\x8b\x02\x8f\x01\x0e\x81\x89\x02\x8e\x01\x0c\x81\x8b\x02\x8d\x01"
  "\x0a\x81\x87\x02\x8c\x01\x08\x81\x87\x02\x8b\x01\x06\x81\x87\x02"
  "\x8a\x01\x04\x85\x06\x2d\x54\x44\x02\x1b\xa0\x01\x04\x83\x04\x03"
  "\x45\x02\x1c\xa1\x01\x04\x83\x04\x03\x46\x02\x1d\xa2\x01\x04\x83"
  "\x04\x03\x47\x02\x1e\x0b\x07\x2e\x74\x61\x67\x2e\x33\x48\x02\xa6"
  "\x01\x0a\x81\x85\x02\xa5\x01\x08\x81\x83\x02\xa4\x01\x06\x81\x83"
  "\x02\xa3\x01\x04\x83\x04\x09\x12\x49\x02\x1f\x04\x63\x64\x72\x04"
  "\x63\x61\x72\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65"
  "\x3f\x1b\x1a\x49\x74\x65\x72\x61\x74\x69\x6f\x6e\x20\x63\x6f\x75"
  "\x6e\x74\x20\x72\x65\x71\x75\x69\x72\x65\x64\x3a\x08\x25\x57\x72"
  "\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x68\x61"
  "\x73\x68\x20\x74\x79\x70\x65\x73\x20\x73\x75\x70\x70\x6c\x69\x65"
  "\x64\x3a\x3b\x0d\x3b\x20\x73\x68\x6f\x75\x6c\x64\x20\x62\x65\x3a"
  "\x0b\x6b\x65\x79\x20\x6c\x65\x6e\x67\x74\x68\x17\x6d\x61\x6b\x65"
  "\x2d\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x74\x79"
  "\x70\x65\x4a\x03\x3e\x05\x13\x04\x03\x06\x6c\x69\x73\x74\x3f\x03"
  "\x39\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x43\x03\x0c\x6d\x61\x6b"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x43\x03\x37\x06\x1f\x04\x1f\x04"
  "\x35\x04\x1a\x05\x18\x25\x6d\x61\x6b\x65\x2d\x6d\x68\x61\x73\x68"
  "\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x74\x79\x70\x65\x4b\x0f\xc2\x01"
  "\x3a\x81\x89\x02\xc1\x01\x38\x81\x95\x02\xc0\x01\x36\x81\x95\x02"
  "\xbf\x01\x34\x81\x95\x02\xbe\x01\x32\x81\x99\x02\xbd\x01\x30\x81"
  "\x95\x02\xbc\x01\x2e\x81\x91\x02\xbb\x01\x2c\x81\x91\x02\xba\x01"
  "\x2a\x81\x83\x02\xb9\x01\x28\x81\x91\x02\xb8\x01\x26\x81\x91\x02"
  "\xb7\x01\x24\x81\x91\x02\xb6\x01\x22\x81\x91\x02\xb5\x01\x20\x81"
  "\x83\x02\xb4\x01\x1e\x81\x91\x02\xb3\x01\x1c\x81\x8f\x02\xb2\x01"
  "\x1a\x81\x8d\x02\xb1\x01\x18\x81\x8d\x02\xb0\x01\x16\x81\x83\x02"
  "\xaf\x01\x14\x81\x8f\x02\xae\x01\x12\x81\x8b\x02\xad\x01\x10\x81"
  "\x89\x02\xac\x01\x0e\x81\x8b\x02\xab\x01\x0c\x81\x8b\x02\xaa\x01"
  "\x0a\x81\x89\x02\xa9\x01\x08\x81\x89\x02\xa8\x01\x06\x86\x08\xa7"
  "\x01\x04\x81\x89\x02\x39\x6b\x4c\x02\x20\x13\x6d\x68\x61\x73\x68"
  "\x5f\x6b\x65\x79\x67\x65\x6e\x5f\x63\x6f\x75\x6e\x74\x16\x6d\x68"
  "\x61\x73\x68\x5f\x67\x65\x74\x5f\x6b\x65\x79\x67\x65\x6e\x5f\x6e"
  "\x61\x6d\x65\x0f\x6d\x68\x61\x73\x68\x5f\x68\x6d\x61\x63\x5f\x65"
  "\x6e\x64\x0a\x6d\x68\x61\x73\x68\x5f\x65\x6e\x64\x0c\x6d\x68\x61"
  "\x73\x68\x5f\x63\x6f\x75\x6e\x74\x14\x6d\x68\x61\x73\x68\x5f\x67"
  "\x65\x74\x5f\x68\x61\x73\x68\x5f\x6e\x61\x6d\x65\x23\x08\x70\x72"
  "\x6d\x68\x61\x73\x68\x30\x13\x6d\x68\x61\x73\x68\x2d\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x64\x3f\x23\x1d\x29\x06\x23\x19\x73"
  "\x65\x74\x2d\x6d\x68\x61\x73\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2d\x69\x6e\x64\x65\x78\x21\x4d\x14\x6d\x68\x61\x73\x68\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2d\x69\x6e\x64\x65\x78\x4e\x12\x1e\x73"
  "\x65\x74\x2d\x6d\x68\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x2d\x69\x6e\x64\x65\x78\x21\x4f\x19\x6d\x68"
  "\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2d\x69\x6e\x64\x65\x78\x50\x15\x08\x04\x19\x6c\x6f\x61\x64\x2d"
  "\x6c\x69\x62\x72\x61\x72\x79\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66"
  "\x69\x6c\x65\x51\x03\x21\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65"
  "\x64\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x52\x04\x12\x6d\x61\x6b\x65\x2d\x6e\x61"
  "\x6d\x65\x73\x2d\x76\x65\x63\x74\x6f\x72\x53\x06\x12\x6d\x61\x6b"
  "\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x54\x05"
  "\xd5\x01\x28\x81\x81\x02\xd4\x01\x26\x81\x81\x02\xd3\x01\x24\x81"
  "\x87\x02\xd2\x01\x22\x81\x85\x02\xd1\x01\x20\x81\x83\x02\xd0\x01"
  "\x1e\x81\x81\x02\xcf\x01\x1c\x81\x81\x02\xce\x01\x1a\x81\x87\x02"
  "\xcd\x01\x18\x81\x85\x02\xcc\x01\x16\x81\x83\x02\xcb\x01\x14\x81"
  "\x81\x02\xca\x01\x12\x81\x81\x02\xc9\x01\x10\x81\x81\x02\xc8\x01"
  "\x0e\x81\x81\x02\xc7\x01\x0c\x81\x81\x02\xc6\x01\x0a\x81\x81\x02"
  "\xc5\x01\x08\x81\x81\x02\xc4\x01\x06\x81\x81\x02\xc3\x01\x04\x82"
  "\x02\x27\x4a\x55\x02\x21\x02\x23\x02\xd7\x01\x06\x81\x81\x02\xd6"
  "\x01\x04\x82\x02\x05\x0c\x56\x02\x22\x01\x01\x02\x33\x81\x20\x04"
  "\x1c\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x62\x69\x6e\x61\x72"
  "\x79\x2d\x69\x6e\x70\x75\x74\x2d\x66\x69\x6c\x65\x57\x03\x1c\x05"
  "\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x58\x04\x0d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x59\x06\x10\x72"
  "\x65\x61\x64\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x21\x5a\x03"
  "\x0a\x6d\x68\x61\x73\x68\x2d\x65\x6e\x64\x5b\x06\x24\x08\xe1\x01"
  "\x16\x81\x85\x02\xe0\x01\x14\x81\x83\x02\xdf\x01\x12\x81\x83\x02"
  "\xde\x01\x10\x81\x83\x02\xdd\x01\x0e\x82\x02\xdc\x01\x0c\x81\x83"
  "\x02\xdb\x01\x0a\x81\x87\x02\xda\x01\x08\x81\x85\x02\xd9\x01\x06"
  "\x81\x85\x02\xd8\x01\x04\x84\x06\x15\x2c\x5c\x02\x23\x40\x06\x10"
  "\x6d\x68\x61\x73\x68\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x5d"
  "\x02\xe3\x01\x06\x81\x89\x02\xe2\x01\x04\x84\x06\x05\x0d\x5e\x02"
  "\x24\x03\x1c\x06\x24\x03\x5b\x04\xe6\x01\x08\x81\x8b\x02\xe5\x01"
  "\x06\x81\x89\x02\xe4\x01\x04\x86\x0a\x07\x11\x5f\x02\x25\x81\x02"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\x60\x40"
  "\xec\x01\x0e\x81\x89\x02\xeb\x01\x0c\x81\x8b\x02\xea\x01\x0a\x81"
  "\x89\x02\xe9\x01\x08\x81\x89\x02\xe8\x01\x06\x81\x83\x02\xe7\x01"
  "\x04\x83\x04\x0d\x14\x61\x02\x26\x0c\x73\x74\x72\x69\x6e\x67\x2d"
  "\x73\x65\x74\x21\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x11"
  "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x61\x62\x63\x64\x65\x66"
  "\x60\x33\x40\xf6\x01\x16\x81\x89\x02\xf5\x01\x14\x81\x89\x02\xf4"
  "\x01\x12\x81\x89\x02\xf3\x01\x10\x81\x89\x02\xf2\x01\x0e\x81\x89"
  "\x02\xf1\x01\x0c\x81\x89\x02\xf0\x01\x0a\x81\x89\x02\xef\x01\x08"
  "\x81\x85\x02\xee\x01\x06\x81\x83\x02\xed\x01\x04\x83\x04\x15\x1f"
  "\x60\x02\x27\x02\x11\x6d\x68\x61\x73\x68\x2d\x61\x76\x61\x69\x6c"
  "\x61\x62\x6c\x65\x3f\x62\x02\x10\x25\x6d\x64\x35\x2d\x61\x76\x61"
  "\x69\x6c\x61\x62\x6c\x65\x3f\x63\x03\xf8\x01\x06\x81\x81\x02\xf7"
  "\x01\x04\x82\x02\x05\x0d\x64\x02\x28\x09\x6d\x64\x35\x2d\x69\x6e"
  "\x69\x74\x65\x06\x70\x72\x6d\x64\x35\x04\x51\x03\x52\x03\xfa\x01"
  "\x06\x81\x81\x02\xf9\x01\x04\x82\x02\x05\x0f\x66\x02\x29\x32\x54"
  "\x68\x69\x73\x20\x53\x63\x68\x65\x6d\x65\x20\x73\x79\x73\x74\x65"
  "\x6d\x20\x77\x61\x73\x20\x62\x75\x69\x6c\x74\x20\x77\x69\x74\x68"
  "\x6f\x75\x74\x20\x4d\x44\x35\x20\x73\x75\x70\x70\x6f\x72\x74\x2e"
  "\x04\x6d\x64\x35\x67\x02\x62\x02\x63\x04\x0b\x6d\x68\x61\x73\x68"
  "\x2d\x66\x69\x6c\x65\x68\x03\x1f\x03\x0a\x25\x6d\x64\x35\x2d\x66"
  "\x69\x6c\x65\x69\x06\xfd\x01\x08\x81\x83\x02\xfc\x01\x06\x81\x83"
  "\x02\xfb\x01\x04\x83\x04\x07\x17\x6a\x02\x2a\x0b\x6d\x64\x35\x2d"
  "\x75\x70\x64\x61\x74\x65\x6b\x0a\x6d\x64\x35\x2d\x66\x69\x6e\x61"
  "\x6c\x6c\x02\x01\x01\x33\x81\x20\x65\x04\x57\x05\x58\x04\x59\x06"
  "\x5a\x05\x87\x02\x16\x81\x85\x02\x86\x02\x14\x81\x83\x02\x85\x02"
  "\x12\x81\x83\x02\x84\x02\x10\x82\x02\x83\x02\x0e\x81\x83\x02\x82"
  "\x02\x0c\x81\x83\x02\x81\x02\x0a\x81\x85\x02\x80\x02\x08\x81\x83"
  "\x02\xff\x01\x06\x83\x04\xfe\x01\x04\x83\x04\x15\x29\x5a\x02\x2b"
  "\x40\x05\x0e\x6d\x64\x35\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67"
  "\x57\x02\x89\x02\x06\x81\x87\x02\x88\x02\x04\x83\x04\x05\x0d\x40"
  "\x02\x2c\x32\x54\x68\x69\x73\x20\x53\x63\x68\x65\x6d\x65\x20\x73"
  "\x79\x73\x74\x65\x6d\x20\x77\x61\x73\x20\x62\x75\x69\x6c\x74\x20"
  "\x77\x69\x74\x68\x6f\x75\x74\x20\x4d\x44\x35\x20\x73\x75\x70\x70"
  "\x6f\x72\x74\x2e\x67\x02\x62\x02\x63\x06\x5d\x03\x1f\x05\x0f\x25"
  "\x6d\x64\x35\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x67\x06\x8c"
  "\x02\x08\x81\x87\x02\x8b\x02\x06\x81\x87\x02\x8a\x02\x04\x85\x08"
  "\x07\x17\x6d\x02\x2d\x6c\x6b\x65\x8f\x02\x08\x81\x89\x02\x8e\x02"
  "\x06\x81\x87\x02\x8d\x02\x04\x85\x08\x07\x0d\x6c\x02\x2e\x90\x02"
  "\x04\x83\x04\x03\x6b\x02\x2f\x09\x02\x91\x02\x04\x84\x06\x03\x65"
  "\x02\x30\x0b\x07\x2e\x74\x61\x67\x2e\x34\x0b\x02\x95\x02\x0a\x81"
  "\x85\x02\x94\x02\x08\x81\x83\x02\x93\x02\x06\x81\x83\x02\x92\x02"
  "\x04\x83\x04\x09\x12\x09\x02\x31\x02\x0f\x6d\x63\x72\x79\x70\x74"
  "\x20\x63\x6f\x6e\x74\x65\x78\x74\x03\x10\x6d\x63\x72\x79\x70\x74"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x3f\x6e\x05\x13\x04\x04\x99\x02"
  "\x0a\x81\x85\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06\x81\x85\x02"
  "\x96\x02\x04\x84\x06\x09\x17\x02\x32\x12\x6d\x63\x72\x79\x70\x74"
  "\x5f\x6c\x69\x73\x74\x5f\x6d\x6f\x64\x65\x73\x17\x6d\x63\x72\x79"
  "\x70\x74\x5f\x6c\x69\x73\x74\x5f\x61\x6c\x67\x6f\x72\x69\x74\x68"
  "\x6d\x73\x13\x6d\x63\x72\x79\x70\x74\x5f\x67\x65\x6e\x65\x72\x69"
  "\x63\x5f\x65\x6e\x64\x13\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64"
  "\x75\x6c\x65\x5f\x6f\x70\x65\x6e\x6f\x09\x70\x72\x6d\x63\x72\x79"
  "\x70\x74\x19\x6d\x63\x72\x79\x70\x74\x2d\x6d\x6f\x64\x65\x2d\x6e"
  "\x61\x6d\x65\x73\x2d\x76\x65\x63\x74\x6f\x72\x70\x14\x6d\x63\x72"
  "\x79\x70\x74\x2d\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x3f"
  "\x71\x10\x6d\x63\x72\x79\x70\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x73\x72\x1e\x6d\x63\x72\x79\x70\x74\x2d\x61\x6c\x67\x6f\x72\x69"
  "\x74\x68\x6d\x2d\x6e\x61\x6d\x65\x73\x2d\x76\x65\x63\x74\x6f\x72"
  "\x73\x05\x71\x1a\x73\x65\x74\x2d\x6d\x63\x72\x79\x70\x74\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2d\x69\x6e\x64\x65\x78\x21\x74\x15\x6d"
  "\x63\x72\x79\x70\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2d\x69\x6e"
  "\x64\x65\x78\x75\x6e\x05\x04\x51\x03\x52\x06\x54\x04\xa7\x02\x1e"
  "\x81\x81\x02\xa6\x02\x1c\x81\x81\x02\xa5\x02\x1a\x81\x81\x02\xa4"
  "\x02\x18\x81\x81\x02\xa3\x02\x16\x81\x87\x02\xa2\x02\x14\x81\x85"
  "\x02\xa1\x02\x12\x81\x83\x02\xa0\x02\x10\x81\x81\x02\x9f\x02\x0e"
  "\x81\x81\x02\x9e\x02\x0c\x81\x81\x02\x9d\x02\x0a\x81\x81\x02\x9c"
  "\x02\x08\x81\x81\x02\x9b\x02\x06\x81\x81\x02\x9a\x02\x04\x82\x02"
  "\x1d\x37\x54\x02\x33\x02\x71\x02\xa9\x02\x06\x81\x81\x02\xa8\x02"
  "\x04\x82\x02\x05\x0c\x52\x02\x34\x73\x02\x03\x17\x02\xab\x02\x06"
  "\x81\x81\x02\xaa\x02\x04\x82\x02\x05\x0d\x51\x02\x35\x70\x02\x03"
  "\x17\x02\xad\x02\x06\x81\x81\x02\xac\x02\x04\x82\x02\x05\x0d\x76"
  "\x02\x36\x6f\x72\x02\x03\x1e\x04\x21\x03\x14\x6d\x61\x6b\x65\x2d"
  "\x6d\x63\x72\x79\x70\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x6f\x04"
  "\xb2\x02\x0c\x81\x87\x02\xb1\x02\x0a\x81\x85\x02\xb0\x02\x08\x81"
  "\x83\x02\xaf\x02\x06\x81\x83\x02\xae\x02\x04\x84\x06\x0b\x18\x21"
  "\x02\x37\x02\x2d\x45\x72\x72\x6f\x72\x20\x63\x6f\x64\x65\x20\x73"
  "\x69\x67\x6e\x61\x6c\x6c\x65\x64\x20\x62\x79\x20\x6d\x63\x72\x79"
  "\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x5f\x69\x6e\x69\x74\x3a"
  "\x14\x6d\x63\x72\x79\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x5f"
  "\x69\x6e\x69\x74\x0c\x6d\x63\x72\x79\x70\x74\x2d\x69\x6e\x69\x74"
  "\x1e\x04\x19\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6d\x63\x72"
  "\x79\x70\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x77\x04\x1f\x03\xb7"
  "\x02\x0c\x81\x83\x02\xb6\x02\x0a\x81\x87\x02\xb5\x02\x08\x81\x8d"
  "\x02\xb4\x02\x06\x81\x87\x02\xb3\x02\x04\x85\x08\x0b\x19\x78\x02"
  "\x38\x02\x19\x45\x72\x72\x6f\x72\x20\x63\x6f\x64\x65\x20\x73\x69"
  "\x67\x6e\x61\x6c\x6c\x65\x64\x20\x62\x79\x20\x0f\x6d\x63\x72\x79"
  "\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x11\x6d\x64\x65\x63\x72"
  "\x79\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x02\x3a\x0f\x6d\x63"
  "\x72\x79\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x11\x6d\x64\x65"
  "\x63\x72\x79\x70\x74\x5f\x67\x65\x6e\x65\x72\x69\x63\x0f\x6d\x63"
  "\x72\x79\x70\x74\x2d\x65\x6e\x63\x72\x79\x70\x74\x79\x04\x77\x07"
  "\x10\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21"
  "\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04"
  "\x1f\x05\xbe\x02\x10\x81\x91\x02\xbd\x02\x0e\x81\x91\x02\xbc\x02"
  "\x0c\x81\x8f\x02\xbb\x02\x0a\x81\x97\x02\xba\x02\x08\x81\x8f\x02"
  "\xb9\x02\x06\x81\x8f\x02\xb8\x02\x04\x89\x10\x0f\x25\x1f\x02\x39"
  "\x72\x02\x04\x27\x02\xc0\x02\x06\x81\x83\x02\xbf\x02\x04\x83\x04"
  "\x05\x0d\x27\x02\x3a\x0f\x6d\x63\x72\x79\x70\x74\x20\x63\x6f\x6e"
  "\x74\x65\x78\x74\x03\x6e\x05\x13\x03\xc4\x02\x0a\x81\x85\x02\xc3"
  "\x02\x08\x81\x85\x02\xc2\x02\x06\x81\x85\x02\xc1\x02\x04\x85\x08"
  "\x09\x14\x13\x02\x3b\x17\x6d\x63\x72\x79\x70\x74\x5f\x65\x6e\x63"
  "\x5f\x67\x65\x74\x5f\x69\x76\x5f\x73\x69\x7a\x65\x18\x6d\x63\x72"
  "\x79\x70\x74\x2d\x69\x6e\x69\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x69\x7a\x65\x7a\x04\x77\x02\xc7\x02\x08\x81\x83\x02\xc6\x02"
  "\x06\x81\x83\x02\xc5\x02\x04\x83\x04\x07\x11\x7b\x02\x3c\x1f\x6d"
  "\x63\x72\x79\x70\x74\x5f\x65\x6e\x63\x5f\x67\x65\x74\x5f\x61\x6c"
  "\x67\x6f\x72\x69\x74\x68\x6d\x73\x5f\x6e\x61\x6d\x65\x16\x6d\x63"
  "\x72\x79\x70\x74\x2d\x61\x6c\x67\x6f\x72\x69\x74\x68\x6d\x2d\x6e"
  "\x61\x6d\x65\x7c\x04\x77\x02\xca\x02\x08\x81\x83\x02\xc9\x02\x06"
  "\x81\x83\x02\xc8\x02\x04\x83\x04\x07\x11\x7d\x02\x3d\x1a\x6d\x63"
  "\x72\x79\x70\x74\x5f\x65\x6e\x63\x5f\x67\x65\x74\x5f\x6d\x6f\x64"
  "\x65\x73\x5f\x6e\x61\x6d\x65\x11\x6d\x63\x72\x79\x70\x74\x2d\x6d"
  "\x6f\x64\x65\x2d\x6e\x61\x6d\x65\x04\x77\x02\xcd\x02\x08\x81\x83"
  "\x02\xcc\x02\x06\x81\x83\x02\xcb\x02\x04\x83\x04\x07\x11\x7e\x02"
  "\x3e\x01\x01\x02\x33\x81\x20\x04\x13\x6d\x63\x72\x79\x70\x74\x2d"
  "\x6f\x70\x65\x6e\x2d\x6d\x6f\x64\x75\x6c\x65\x33\x05\x1e\x05\x58"
  "\x04\x59\x04\x18\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x72"
  "\x65\x61\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x03\x0b\x6d\x63\x72"
  "\x79\x70\x74\x2d\x65\x6e\x64\x59\x09\x79\x06\x10\x77\x72\x69\x74"
  "\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x09\xda\x02\x1c\x81"
  "\x85\x02\xd9\x02\x1a\x81\x85\x02\xd8\x02\x18\x81\x83\x02\xd7\x02"
  "\x16\x81\x83\x02\xd6\x02\x14\x81\x83\x02\xd5\x02\x12\x81\x83\x02"
  "\xd4\x02\x10\x81\x83\x02\xd3\x02\x0e\x82\x02\xd2\x02\x0c\x81\x95"
  "\x02\xd1\x02\x0a\x81\x93\x02\xd0\x02\x08\x81\x91\x02\xcf\x02\x06"
  "\x81\x8f\x02\xce\x02\x04\x89\x10\x1b\x34\x58\x02\x3f\x17\x72\x65"
  "\x73\x65\x74\x2d\x6d\x68\x61\x73\x68\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x73\x21\x7f\x14\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65"
  "\x72\x2d\x72\x65\x73\x74\x61\x72\x74\x18\x72\x65\x73\x65\x74\x2d"
  "\x6d\x63\x72\x79\x70\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73"
  "\x21\x80\x01\x04\x02\x7f\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e"
  "\x74\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x02\x80\x01\x04\xe2"
  "\x02\x12\x81\x83\x02\xe1\x02\x10\x81\x81\x02\xe0\x02\x0e\x81\x81"
  "\x02\xdf\x02\x0c\x81\x81\x02\xde\x02\x0a\x81\x85\x02\xdd\x02\x08"
  "\x81\x83\x02\xdc\x02\x06\x81\x81\x02\xdb\x02\x04\x82\x02\x11\x1f"
  "\x81\x01\x02\x40\x3b\x03\x43\x03\x07\x69\x6e\x74\x65\x72\x6e\x03"
  "\xe9\x02\x10\x81\x8b\x02\xe8\x02\x0e\x81\x8b\x02\xe7\x02\x0c\x81"
  "\x8d\x02\xe6\x02\x0a\x81\x8b\x02\xe5\x02\x08\x81\x87\x02\xe4\x02"
  "\x06\x81\x85\x02\xe3\x02\x04\x84\x06\x0f\x19\x43\x02\x41\xed\x02"
  "\x0a\x81\x89\x02\xec\x02\x08\x81\x89\x02\xeb\x02\x06\x81\x83\x02"
  "\xea\x02\x04\x83\x04\x09\x10\x3b\x41\x3b\x04\x43\x04\x81\x01\x04"
  "\x58\x04\x7e\x04\x7d\x04\x7b\x04\x17\x53\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x14\x6d"
  "\x63\x72\x79\x70\x74\x2d\x65\x6e\x63\x72\x79\x70\x74\x2d\x70\x6f"
  "\x72\x74\x7c\x7a\x1b\x6d\x63\x72\x79\x70\x74\x2d\x73\x75\x70\x70"
  "\x6f\x72\x74\x65\x64\x2d\x6b\x65\x79\x2d\x73\x69\x7a\x65\x73\x23"
  "\x6d\x63\x72\x79\x70\x74\x5f\x65\x6e\x63\x5f\x67\x65\x74\x5f\x73"
  "\x75\x70\x70\x6f\x72\x74\x65\x64\x5f\x6b\x65\x79\x5f\x73\x69\x7a"
  "\x65\x73\x2b\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64\x75\x6c\x65"
  "\x5f\x67\x65\x74\x5f\x61\x6c\x67\x6f\x5f\x73\x75\x70\x70\x6f\x72"
  "\x74\x65\x64\x5f\x6b\x65\x79\x5f\x73\x69\x7a\x65\x73\x10\x6d\x63"
  "\x72\x79\x70\x74\x2d\x6b\x65\x79\x2d\x73\x69\x7a\x65\x18\x6d\x63"
  "\x72\x79\x70\x74\x5f\x65\x6e\x63\x5f\x67\x65\x74\x5f\x6b\x65\x79"
  "\x5f\x73\x69\x7a\x65\x20\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64"
  "\x75\x6c\x65\x5f\x67\x65\x74\x5f\x61\x6c\x67\x6f\x5f\x6b\x65\x79"
  "\x5f\x73\x69\x7a\x65\x13\x6d\x63\x72\x79\x70\x74\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x6d\x6f\x64\x65\x3f\x19\x6d\x63\x72\x79\x70\x74\x5f"
  "\x65\x6e\x63\x5f\x69\x73\x5f\x62\x6c\x6f\x63\x6b\x5f\x6d\x6f\x64"
  "\x65\x1c\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x5f"
  "\x69\x73\x5f\x62\x6c\x6f\x63\x6b\x5f\x6d\x6f\x64\x65\x18\x6d\x63"
  "\x72\x79\x70\x74\x2d\x62\x6c\x6f\x63\x6b\x2d\x61\x6c\x67\x6f\x72"
  "\x69\x74\x68\x6d\x3f\x1e\x6d\x63\x72\x79\x70\x74\x5f\x65\x6e\x63"
  "\x5f\x69\x73\x5f\x62\x6c\x6f\x63\x6b\x5f\x61\x6c\x67\x6f\x72\x69"
  "\x74\x68\x6d\x21\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64\x75\x6c"
  "\x65\x5f\x69\x73\x5f\x62\x6c\x6f\x63\x6b\x5f\x61\x6c\x67\x6f\x72"
  "\x69\x74\x68\x6d\x1d\x6d\x63\x72\x79\x70\x74\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x61\x6c\x67\x6f\x72\x69\x74\x68\x6d\x2d\x6d\x6f\x64\x65"
  "\x3f\x23\x6d\x63\x72\x79\x70\x74\x5f\x65\x6e\x63\x5f\x69\x73\x5f"
  "\x62\x6c\x6f\x63\x6b\x5f\x61\x6c\x67\x6f\x72\x69\x74\x68\x6d\x5f"
  "\x6d\x6f\x64\x65\x26\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64\x75"
  "\x6c\x65\x5f\x69\x73\x5f\x62\x6c\x6f\x63\x6b\x5f\x61\x6c\x67\x6f"
  "\x72\x69\x74\x68\x6d\x5f\x6d\x6f\x64\x65\x11\x6d\x63\x72\x79\x70"
  "\x74\x2d\x73\x65\x6c\x66\x2d\x74\x65\x73\x74\x15\x6d\x63\x72\x79"
  "\x70\x74\x5f\x65\x6e\x63\x5f\x73\x65\x6c\x66\x5f\x74\x65\x73\x74"
  "\x18\x6d\x63\x72\x79\x70\x74\x5f\x6d\x6f\x64\x75\x6c\x65\x5f\x73"
  "\x65\x6c\x66\x5f\x74\x65\x73\x74\x0b\x15\x6d\x63\x72\x79\x70\x74"
  "\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x75\x6e\x61\x72\x79\x81\x01"
  "\x59\x79\x1e\x33\x12\x6d\x63\x72\x79\x70\x74\x2d\x6d\x6f\x64\x65"
  "\x2d\x6e\x61\x6d\x65\x73\x17\x6d\x63\x72\x79\x70\x74\x2d\x61\x6c"
  "\x67\x6f\x72\x69\x74\x68\x6d\x2d\x6e\x61\x6d\x65\x73\x80\x01\x12"
  "\x6d\x63\x72\x79\x70\x74\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65"
  "\x3f\x77\x6e\x0c\x13\x04\x27\x04\x1f\x04\x78\x04\x21\x04\x76\x04"
  "\x51\x04\x52\x04\x54\x04\x04\x09\x04\x0c\x6f\x74\x75\x65\x04\x6b"
  "\x04\x13\x72\x74\x64\x3a\x6d\x63\x72\x79\x70\x74\x2d\x63\x6f\x6e"
  "\x74\x65\x78\x74\x80\x01\x0f\x6d\x63\x72\x79\x70\x74\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x72\x70\x73\x71\x15\x6d\x64\x35\x2d\x73\x75"
  "\x6d\x2d\x3e\x68\x65\x78\x61\x64\x65\x63\x69\x6d\x61\x6c\x10\x6d"
  "\x64\x35\x2d\x73\x75\x6d\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x48\x67"
  "\x57\x0b\x6d\x64\x35\x2d\x73\x74\x72\x69\x6e\x67\x69\x09\x6d\x64"
  "\x35\x2d\x66\x69\x6c\x65\x63\x0f\x6d\x64\x35\x2d\x61\x76\x61\x69"
  "\x6c\x61\x62\x6c\x65\x3f\x17\x6d\x68\x61\x73\x68\x2d\x73\x75\x6d"
  "\x2d\x3e\x68\x65\x78\x61\x64\x65\x63\x69\x6d\x61\x6c\x7e\x12\x6d"
  "\x68\x61\x73\x68\x2d\x73\x75\x6d\x2d\x3e\x6e\x75\x6d\x62\x65\x72"
  "\x7d\x5d\x0d\x6d\x68\x61\x73\x68\x2d\x73\x74\x72\x69\x6e\x67\x68"
  "\x7f\x62\x4a\x42\x11\x6c\x04\x6d\x04\x40\x04\x5a\x04\x6a\x04\x66"
  "\x04\x64\x04\x60\x04\x61\x04\x5f\x04\x5e\x04\x5c\x04\x56\x04\x55"
  "\x04\x4c\x06\x49\x04\x11\x4b\x23\x6d\x68\x61\x73\x68\x2d\x6b\x65"
  "\x79\x67\x65\x6e\x2d\x74\x79\x70\x65\x2d\x70\x61\x72\x61\x6d\x65"
  "\x74\x65\x72\x2d\x76\x65\x63\x74\x6f\x72\x1d\x6d\x68\x61\x73\x68"
  "\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x74\x79\x70\x65\x2d\x6b\x65\x79"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x15\x6d\x68\x61\x73\x68\x2d\x6b\x65"
  "\x79\x67\x65\x6e\x2d\x74\x79\x70\x65\x2d\x69\x64\x47\x04\x46\x04"
  "\x45\x04\x16\x72\x74\x64\x3a\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79"
  "\x67\x65\x6e\x2d\x74\x79\x70\x65\x7f\x12\x6d\x68\x61\x73\x68\x2d"
  "\x6b\x65\x79\x67\x65\x6e\x2d\x74\x79\x70\x65\x03\x69\x64\x0b\x6b"
  "\x65\x79\x2d\x6c\x65\x6e\x67\x74\x68\x11\x70\x61\x72\x61\x6d\x65"
  "\x74\x65\x72\x2d\x76\x65\x63\x74\x6f\x72\x10\x41\x3e\x3c\x39\x37"
  "\x34\x18\x6d\x68\x61\x73\x68\x2d\x6b\x65\x79\x67\x65\x6e\x2d\x74"
  "\x79\x70\x65\x2d\x6e\x61\x6d\x65\x73\x35\x30\x0f\x6d\x68\x61\x73"
  "\x68\x2d\x68\x6d\x61\x63\x2d\x65\x6e\x64\x2c\x10\x6d\x68\x61\x73"
  "\x68\x2d\x68\x6d\x61\x63\x2d\x69\x6e\x69\x74\x5b\x24\x1c\x19\x11"
  "\x6d\x68\x61\x73\x68\x2d\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x73"
  "\x2d\x25\x15\x15\x44\x04\x3f\x04\x3d\x04\x3a\x04\x38\x04\x36\x04"
  "\x32\x04\x31\x04\x2f\x04\x2e\x04\x2b\x04\x28\x04\x26\x04\x22\x04"
  "\x1b\x04\x18\x04\x16\x04\x14\x04\x11\x04\x15\x2a\x4f\x50\x0f\x04"
  "\x0e\x04\x17\x72\x74\x64\x3a\x6d\x68\x61\x73\x68\x2d\x68\x6d\x61"
  "\x63\x2d\x63\x6f\x6e\x74\x65\x78\x74\x7c\x12\x0d\x04\x0c\x13\x6d"
  "\x68\x61\x73\x68\x2d\x68\x6d\x61\x63\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x20\x4d\x4e\x0a\x04\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x72\x74\x64\x3a\x6d\x68\x61"
  "\x73\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74\x7b\x0e\x6d\x68\x61\x73"
  "\x68\x2d\x63\x6f\x6e\x74\x65\x78\x74\x06\x69\x6e\x64\x65\x78\x1a"
  "\x29\x1d\x23\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x04\x7b\x7c\x7f\x7d\x7e\x80\x01\x07\x05\x81\x01\x02\x40\x82"
  "\x01\x80\x80\x04\x3f\x80\x01\x81\x81\x02\x3e\x7e\x81\x81\x02\x3d"
  "\x7c\x81\x85\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x85\x02\x3a\x76"
  "\x81\x83\x02\x39\x74\x81\x85\x02\x38\x72\x81\x83\x02\x37\x70\x81"
  "\x85\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x85\x02\x34\x6a\x81\x83"
  "\x02\x33\x68\x81\x85\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02"
  "\x30\x62\x81\x85\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x85\x02\x2d"
  "\x5c\x81\x87\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x85\x02\x2a\x56"
  "\x81\x83\x02\x29\x54\x81\x85\x02\x28\x52\x81\x87\x02\x27\x50\x81"
  "\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85"
  "\x02\x23\x48\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44\x81\x83\x02"
  "\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x89\x02\x1d"
  "\x3c\x81\x87\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x87\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x85\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d"
  "\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81\x87\x02\x07\x10\x81"
  "\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85"
  "\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02"
  "\x81\x01\xd4\x01";

SCHEME_OBJECT *
crypto_so_data_d89aa08a013cea6b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_crypto_so_data_d89aa08a013cea6b [0]))), (sizeof (prog_crypto_so_data_d89aa08a013cea6b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_75]));
}

DECLARE_COMPILED_DATA_NS ("crypto.so", crypto_so_data_d89aa08a013cea6b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("crypto.so", "1f168eaa67fa09d3")
