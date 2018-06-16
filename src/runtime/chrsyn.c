/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

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
chrsyn_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto char_syntax_table_entries_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_syntax_table_entries_3)
DEFLABEL (char_syntax_table_entries_0)
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
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_3 15
#define OBJECT_2_2 14
#define OBJECT_2_1 13
#define OBJECT_2_0 12
#define FREE_REFERENCE_2_0 11
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto char_syntax_tableP_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_syntax_tableP_10)
DEFLABEL (char_syntax_tableP_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
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
  Rvl = (current_block [OBJECT_2_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_2_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_2 15
#define OBJECT_3_1 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto guarantee_char_syntax_table_2;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_char_syntax_table_5)
DEFLABEL (guarantee_char_syntax_table_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_3_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_7)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_6;
  Rvl = ((Wrd15.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_4 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_6 11
#define ENVIRONMENT_LABEL_4_3 26
#define DEBUGGING_LABEL_4_2 25
#define OBJECT_4_3 24
#define OBJECT_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_11 13
#define EXECUTE_CACHE_4_10 15
#define EXECUTE_CACHE_4_9 17
#define FREE_REFERENCE_4_0 20
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_4_4);
      goto make_char_syntax_table_3;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_char_syntax_table_8)
DEFLABEL (make_char_syntax_table_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if ((Wrd11.Obj) == (current_block [OBJECT_4_0]))
    goto label_10;
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd15.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (label_10)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_14;
  Wrd18 = Wrd22;

DEFLABEL (label_13)
  Wrd17 = Wrd18;
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_12;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_12;
  (Wrd25.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_9;

DEFLABEL (label_12)
  (Wrd34.Obj) = (current_block [OBJECT_4_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_6)
  (Wrd25.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd19.pObj));

DEFLABEL (label_5)
  (Wrd18.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_6 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_5_4);
      goto get_char_syntax_2;

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

DEFLABEL (get_char_syntax_5)
DEFLABEL (get_char_syntax_2)
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
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_7)
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_6;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_6;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_10 9
#define LABEL_6_8 11
#define LABEL_6_13 13
#define LABEL_6_15 15
#define TAG_6_16 6
#define LABEL_6_18 17
#define ENVIRONMENT_LABEL_6_3 37
#define DEBUGGING_LABEL_6_2 36
#define OBJECT_6_4 35
#define OBJECT_6_3 34
#define OBJECT_6_2 33
#define OBJECT_6_1 32
#define OBJECT_6_0 31
#define EXECUTE_CACHE_6_17 19
#define EXECUTE_CACHE_6_14 21
#define EXECUTE_CACHE_6_12 23
#define EXECUTE_CACHE_6_11 25
#define EXECUTE_CACHE_6_9 27
#define EXECUTE_CACHE_6_7 29
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_6_4);
      goto set_char_syntaxB_9;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto lambda_13;

    case 7:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_char_syntaxB_12)
DEFLABEL (set_char_syntaxB_9)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 2)
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_15])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (label_15)
  (Rsp [2]) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_17)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_16;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_16;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd12.pObj) = (& ((Wrd20.pObj) [(Wrd9.Lng)]));
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [1]) = (Wrd13.Obj);
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_6_15);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_18);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 3);

DEFLABEL (label_19)
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 26))
    goto label_18;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_18;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd12.pObj) = (& ((Wrd20.pObj) [(Wrd9.Lng)]));
  ((Wrd12.pObj) [1]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_6 9
#define LABEL_7_7 11
#define LABEL_7_8 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_15 19
#define LABEL_7_16 21
#define LABEL_7_17 23
#define LABEL_7_18 25
#define LABEL_7_19 27
#define LABEL_7_20 29
#define LABEL_7_21 31
#define LABEL_7_22 33
#define LABEL_7_23 35
#define LABEL_7_24 37
#define LABEL_7_26 39
#define LABEL_7_27 41
#define LABEL_7_28 43
#define LABEL_7_29 45
#define LABEL_7_30 47
#define LABEL_7_35 49
#define LABEL_7_31 51
#define LABEL_7_32 53
#define LABEL_7_33 55
#define LABEL_7_36 57
#define TAG_7_37 27
#define LABEL_7_42 59
#define LABEL_7_38 61
#define LABEL_7_39 63
#define LABEL_7_41 65
#define LABEL_7_43 67
#define LABEL_7_46 69
#define LABEL_7_47 71
#define LABEL_7_48 73
#define LABEL_7_49 75
#define LABEL_7_44 77
#define LABEL_7_52 79
#define LABEL_7_45 81
#define LABEL_7_50 83
#define LABEL_7_53 85
#define LABEL_7_51 87
#define ENVIRONMENT_LABEL_7_3 144
#define DEBUGGING_LABEL_7_2 143
#define OBJECT_7_37 142
#define OBJECT_7_36 141
#define OBJECT_7_35 140
#define OBJECT_7_34 139
#define OBJECT_7_33 138
#define OBJECT_7_32 137
#define OBJECT_7_31 136
#define OBJECT_7_30 135
#define OBJECT_7_29 134
#define OBJECT_7_28 133
#define OBJECT_7_27 132
#define OBJECT_7_26 131
#define OBJECT_7_25 130
#define OBJECT_7_24 129
#define OBJECT_7_23 128
#define OBJECT_7_22 127
#define OBJECT_7_21 126
#define OBJECT_7_20 125
#define OBJECT_7_19 124
#define OBJECT_7_18 123
#define OBJECT_7_17 122
#define OBJECT_7_16 121
#define OBJECT_7_15 120
#define OBJECT_7_14 119
#define OBJECT_7_13 118
#define OBJECT_7_12 117
#define OBJECT_7_11 116
#define OBJECT_7_10 115
#define OBJECT_7_9 114
#define OBJECT_7_8 113
#define OBJECT_7_7 112
#define OBJECT_7_6 111
#define OBJECT_7_5 110
#define OBJECT_7_4 109
#define OBJECT_7_3 108
#define OBJECT_7_2 107
#define OBJECT_7_1 106
#define OBJECT_7_0 105
#define EXECUTE_CACHE_7_40 89
#define EXECUTE_CACHE_7_34 91
#define EXECUTE_CACHE_7_25 93
#define EXECUTE_CACHE_7_12 95
#define EXECUTE_CACHE_7_11 97
#define EXECUTE_CACHE_7_10 99
#define FREE_REFERENCE_7_0 102
#define FREE_ASSIGNMENT_7_0 104
#define FREE_REFERENCES_LABEL_7_0 88
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto initialize_packageB_45;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_7_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_7_26);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_7_27);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_7_28);
      goto continuation_32;

    case 21:
      current_block = (Rpc - LABEL_7_29);
      goto continuation_34;

    case 22:
      current_block = (Rpc - LABEL_7_30);
      goto continuation_33;

    case 23:
      current_block = (Rpc - LABEL_7_35);
      goto lambda_31;

    case 24:
      current_block = (Rpc - LABEL_7_31);
      goto continuation_39;

    case 25:
      current_block = (Rpc - LABEL_7_32);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_7_33);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_7_36);
      goto lambda_57;

    case 28:
      current_block = (Rpc - LABEL_7_42);
      goto label_48;

    case 29:
      current_block = (Rpc - LABEL_7_38);
      goto continuation_41;

    case 30:
      current_block = (Rpc - LABEL_7_39);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_7_41);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_7_43);
      goto continuation_19;

    case 33:
      current_block = (Rpc - LABEL_7_46);
      goto do_loop_28;

    case 34:
      current_block = (Rpc - LABEL_7_47);
      goto label_49;

    case 35:
      current_block = (Rpc - LABEL_7_48);
      goto label_50;

    case 36:
      current_block = (Rpc - LABEL_7_49);
      goto label_51;

    case 37:
      current_block = (Rpc - LABEL_7_44);
      goto continuation_43;

    case 38:
      current_block = (Rpc - LABEL_7_52);
      goto label_52;

    case 39:
      current_block = (Rpc - LABEL_7_45);
      goto continuation_42;

    case 40:
      current_block = (Rpc - LABEL_7_50);
      goto continuation_26;

    case 41:
      current_block = (Rpc - LABEL_7_53);
      goto label_53;

    case 42:
      current_block = (Rpc - LABEL_7_51);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_55)
DEFLABEL (initialize_packageB_45)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_60;
  Wrd9 = Wrd13;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.pObj) = (& (Rsp [4]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto lambda_31;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_7_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_7_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [4]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7_22]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_31;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_7_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_7_32);
  (Wrd5.Obj) = (current_block [OBJECT_7_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_41]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [3]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_24]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_31;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_7_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_34]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_9])), (Wrd10.pObj));

DEFLABEL (label_47)
  (Wrd9.Obj) = Rvl;
  goto label_59;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_7_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_7_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_40]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_7_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_7_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_40]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_7_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_7_44);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_61)
  Rvl = (current_block [OBJECT_7_37]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_63)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_52])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_52)
  goto label_61;

DEFLABEL (lambda_56)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_7_35);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_36])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_7_36);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_64;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_33]), 1);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_43);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_64)
  if (! ((Wrd6.uLng) == 1))
    goto label_66;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_65)
  goto do_loop_28;

DEFLABEL (label_66)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_32]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (do_loop_58)
DEFLABEL (do_loop_28)
  INTERRUPT_CHECK (26, LABEL_7_46);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_75;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_74)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_73;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_72)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_71;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_71;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! ((Wrd43.Lng) > (Wrd44.Lng)))
    goto label_68;

DEFLABEL (label_67)
  Rvl = (current_block [OBJECT_7_36]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_50]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_51]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_33]), 1);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_7_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_7_50);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_70;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_70;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd9.Obj);
  goto do_loop_28;

DEFLABEL (label_70)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_53]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_49]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_67;

DEFLABEL (label_73)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_48]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_32]), 1);

DEFLABEL (label_50)
  (Wrd14.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_35]), 1);

DEFLABEL (label_49)
  (Wrd5.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto string__char_syntax_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__char_syntax_3)
DEFLABEL (string__char_syntax_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define LABEL_9_8 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_9 15
#define LABEL_9_13 17
#define ENVIRONMENT_LABEL_9_3 50
#define DEBUGGING_LABEL_9_2 49
#define OBJECT_9_17 48
#define OBJECT_9_16 47
#define OBJECT_9_15 46
#define OBJECT_9_14 45
#define OBJECT_9_13 44
#define OBJECT_9_12 43
#define OBJECT_9_11 42
#define OBJECT_9_10 41
#define OBJECT_9_9 40
#define OBJECT_9_8 39
#define OBJECT_9_7 38
#define OBJECT_9_6 37
#define OBJECT_9_5 36
#define OBJECT_9_4 35
#define OBJECT_9_3 34
#define OBJECT_9_2 33
#define OBJECT_9_1 32
#define OBJECT_9_0 31
#define EXECUTE_CACHE_9_15 19
#define EXECUTE_CACHE_9_16 21
#define EXECUTE_CACHE_9_14 23
#define EXECUTE_CACHE_9_10 25
#define EXECUTE_CACHE_9_6 27
#define FREE_REFERENCE_9_0 30
#define FREE_REFERENCES_LABEL_9_0 18
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd144;
  machine_word Wrd137;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd145;
  machine_word Wrd129;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd128;
  machine_word Wrd146;
  machine_word Wrd121;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd120;
  machine_word Wrd147;
  machine_word Wrd113;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd148;
  machine_word Wrd105;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd156;
  machine_word Wrd149;
  machine_word Wrd154;
  machine_word Wrd102;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd157;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd165;
  machine_word Wrd158;
  machine_word Wrd163;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto char_syntax__string_47;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char_syntax__string_53)
DEFLABEL (char_syntax__string_47)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) & 15L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd8.Lng)), 4)));
  (Wrd23.Lng) = ((Wrd19.Lng) & 255L);
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_87;
  if ((Wrd23.Lng) == 0)
    goto label_55;

DEFLABEL (label_54)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (label_55)
  (Wrd37.Obj) = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_86)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_85;
  Wrd39 = Wrd43;

DEFLABEL (label_84)
  Wrd38 = Wrd39;
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_83;
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_83;
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd53.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_83;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd48.pObj) = (& ((Wrd54.pObj) [(Wrd46.Lng)]));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_82)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd71.Lng) = ((long) (RIGHT_SHIFT_UNSIGNED (((unsigned long) (Wrd68.Lng)), 12)));
  (Wrd75.Lng) = ((Wrd71.Lng) & 255L);
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd75.Lng));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_9_3]);
  Wrd81 = Wrd75;
  (Wrd82.Lng) = ((Wrd81.Lng) & 8L);
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));
  if ((Wrd77.Obj) == (current_block [OBJECT_9_4]))
    goto label_81;
  (Wrd84.Obj) = (Rsp [4]);
  if ((Wrd84.Obj) == (current_block [OBJECT_9_5]))
    goto label_80;

DEFLABEL (label_79)
  (Wrd86.Obj) = (current_block [OBJECT_9_7]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_78)
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  (Wrd92.Lng) = ((Wrd91.Lng) & 32L);
  (Wrd87.Obj) = (LONG_TO_FIXNUM (Wrd92.Lng));
  if ((Wrd87.Obj) == (current_block [OBJECT_9_4]))
    goto label_57;
  (Wrd94.Obj) = (current_block [OBJECT_9_8]);
  (* (--Rsp)) = (Wrd94.Obj);
  goto label_56;

DEFLABEL (label_57)
  (Wrd157.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd157.Obj);

DEFLABEL (label_56)
DEFLABEL (label_77)
  (Wrd96.Obj) = (current_block [OBJECT_9_9]);
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  (Wrd100.Lng) = ((Wrd99.Lng) & 128L);
  (Wrd95.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  if ((Wrd95.Obj) == (current_block [OBJECT_9_4]))
    goto label_76;
  (Wrd102.Obj) = (Rsp [6]);
  if ((Wrd102.Obj) == (current_block [OBJECT_9_10]))
    goto label_75;

DEFLABEL (label_74)
  (Wrd104.Obj) = (current_block [OBJECT_9_11]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_73)
  (Wrd108.Obj) = (Rsp [3]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  (Wrd110.Lng) = ((Wrd109.Lng) & 1L);
  (Wrd105.Obj) = (LONG_TO_FIXNUM (Wrd110.Lng));
  if ((Wrd105.Obj) == (current_block [OBJECT_9_4]))
    goto label_59;
  (Wrd112.Obj) = (current_block [OBJECT_9_12]);
  (* (--Rsp)) = (Wrd112.Obj);
  goto label_58;

DEFLABEL (label_59)
  (Wrd148.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd148.Obj);

DEFLABEL (label_58)
DEFLABEL (label_72)
  (Wrd116.Obj) = (Rsp [4]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd118.Lng) = ((Wrd117.Lng) & 4L);
  (Wrd113.Obj) = (LONG_TO_FIXNUM (Wrd118.Lng));
  if ((Wrd113.Obj) == (current_block [OBJECT_9_4]))
    goto label_61;
  (Wrd120.Obj) = (current_block [OBJECT_9_13]);
  (* (--Rsp)) = (Wrd120.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd147.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd147.Obj);

DEFLABEL (label_60)
DEFLABEL (label_71)
  (Wrd124.Obj) = (Rsp [5]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  (Wrd126.Lng) = ((Wrd125.Lng) & 16L);
  (Wrd121.Obj) = (LONG_TO_FIXNUM (Wrd126.Lng));
  if ((Wrd121.Obj) == (current_block [OBJECT_9_4]))
    goto label_63;
  (Wrd128.Obj) = (current_block [OBJECT_9_14]);
  (* (--Rsp)) = (Wrd128.Obj);
  goto label_62;

DEFLABEL (label_63)
  (Wrd146.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd146.Obj);

DEFLABEL (label_62)
DEFLABEL (label_70)
  (Wrd132.Obj) = (Rsp [6]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  (Wrd134.Lng) = ((Wrd133.Lng) & 64L);
  (Wrd129.Obj) = (LONG_TO_FIXNUM (Wrd134.Lng));
  if ((Wrd129.Obj) == (current_block [OBJECT_9_4]))
    goto label_65;
  (Wrd136.Obj) = (current_block [OBJECT_9_15]);
  (* (--Rsp)) = (Wrd136.Obj);
  goto label_64;

DEFLABEL (label_65)
  (Wrd145.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd145.Obj);

DEFLABEL (label_64)
DEFLABEL (label_69)
  (Wrd140.Obj) = (Rsp [7]);
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd140.Obj));
  (Wrd142.Lng) = ((Wrd141.Lng) & 2L);
  (Wrd137.Obj) = (LONG_TO_FIXNUM (Wrd142.Lng));
  if ((Wrd137.Obj) == (current_block [OBJECT_9_4]))
    goto label_67;
  (Wrd144.Obj) = (current_block [OBJECT_9_16]);
  goto label_66;

DEFLABEL (label_67)
  (Wrd144.Obj) = (current_block [OBJECT_9_6]);

DEFLABEL (label_66)
DEFLABEL (label_68)
  (Rsp [7]) = (Wrd144.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (label_75)
  (Wrd154.Lng) = ((Wrd99.Lng) & 192L);
  (Wrd149.Obj) = (LONG_TO_FIXNUM (Wrd154.Lng));
  if (! ((Wrd96.Obj) == (Wrd149.Obj)))
    goto label_74;

DEFLABEL (label_76)
  (Wrd156.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd156.Obj);
  goto label_73;

DEFLABEL (label_80)
  (Wrd163.Lng) = ((Wrd81.Lng) & 12L);
  (Wrd158.Obj) = (LONG_TO_FIXNUM (Wrd163.Lng));
  if (! ((Wrd78.Obj) == (Wrd158.Obj)))
    goto label_79;

DEFLABEL (label_81)
  (Wrd165.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd165.Obj);
  goto label_78;

DEFLABEL (label_83)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd40.pObj));

DEFLABEL (label_50)
  (Wrd39.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_55;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) & 1048576L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  if ((Wrd6.Obj) == (current_block [OBJECT_9_4]))
    goto label_89;
  (Wrd13.Obj) = (current_block [OBJECT_9_17]);
  goto label_88;

DEFLABEL (label_89)
  (Wrd13.Obj) = (current_block [OBJECT_9_6]);

DEFLABEL (label_88)
DEFLABEL (label_90)
  (Rsp [3]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  goto label_86;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_5 3
#define LABEL_10_4 5
#define ENVIRONMENT_LABEL_10_3 14
#define DEBUGGING_LABEL_10_2 13
#define OBJECT_10_1 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_10_4);
      goto guarantee_char_syntax_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_char_syntax_8)
DEFLABEL (guarantee_char_syntax_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (INDEX_FIXNUM_P (Wrd5.Obj))
    goto label_11;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);

DEFLABEL (label_11)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd13.Lng) < 2097152L)
    goto label_10;

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_10)
  (Wrd22.Lng) = ((Wrd13.Lng) & 15L);
  if ((Wrd22.Lng) > 12L)
    goto label_9;
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_8 11
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 13
#define EXECUTE_CACHE_11_6 15
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto substring_find_next_char_of_syntax_9;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substring_find_next_char_of_syntax_13)
DEFLABEL (substring_find_next_char_of_syntax_9)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_18;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd6.Obj) = (Rsp [5]);
  if ((Wrd6.Obj) == Rvl)
    goto label_16;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_7;

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define LABEL_12_8 11
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define OBJECT_12_1 18
#define OBJECT_12_0 17
#define EXECUTE_CACHE_12_10 13
#define EXECUTE_CACHE_12_6 15
#define FREE_REFERENCES_LABEL_12_0 12
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto substring_find_next_char_not_of_syntax_9;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substring_find_next_char_not_of_syntax_13)
DEFLABEL (substring_find_next_char_not_of_syntax_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_12_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_18;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd6.Obj) = (Rsp [5]);
  if ((Wrd6.Obj) == Rvl)
    goto label_16;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_7;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define ENVIRONMENT_LABEL_13_3 19
#define DEBUGGING_LABEL_13_2 18
#define OBJECT_13_2 17
#define OBJECT_13_1 16
#define OBJECT_13_0 15
#define EXECUTE_CACHE_13_6 11
#define FREE_REFERENCE_13_0 14
#define FREE_REFERENCES_LABEL_13_0 10
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chrsyn_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto char__syntax_code_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__syntax_code_8)
DEFLABEL (char__syntax_code_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd8.Lng) & 15L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_14;
  Wrd12 = Wrd16;

DEFLABEL (label_13)
  Wrd11 = Wrd12;
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_12;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_12;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_12;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd22.pObj) = (& ((Wrd25.pObj) [(Wrd20.Lng)]));
  (Wrd19.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_13_1]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd48.uLng) == 30)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_10)
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_9;
  (Wrd39.uLng) = ((unsigned long) (((unsigned char *) (Wrd44.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd39.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_6)
  (Wrd19.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_7])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_13;

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
#define LABEL_16 15
#define LABEL_12 17
#define TAG_13 7
#define LABEL_14 19
#define LABEL_15 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define ENVIRONMENT_LABEL_3 51
#define DEBUGGING_LABEL_2 50
#define PURIFICATION_ROOT 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_17 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
chrsyn_so_441d43d47d6f18da (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_16);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto Z__make_char_syntax_table_16;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_12)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_19)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_18)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	1,
	1,
	2,
	0,
	3,
	1,
	1,
	2,
	1,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
      goto label_17;
    blocks = (current_block [OBJECT_11]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_17)
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
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_23;
  Wrd11 = Wrd15;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
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

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_21;
  Wrd11 = Wrd15;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_17]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_13)
  (Wrd11.Obj) = Rvl;
  goto label_22;

DEFLABEL (Z__make_char_syntax_table_16)
  CLOSURE_HEADER (LABEL_12);

DEFLABEL (Z__make_char_syntax_table_5)
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

static const struct liarc_code_S arr_decl_chrsyn_so_441d43d47d6f18da [13] =
  {
    { "chrsyn_so_code_1", 1, chrsyn_so_code_1 },
    { "chrsyn_so_code_2", 4, chrsyn_so_code_2 },
    { "chrsyn_so_code_3", 3, chrsyn_so_code_3 },
    { "chrsyn_so_code_4", 5, chrsyn_so_code_4 },
    { "chrsyn_so_code_5", 3, chrsyn_so_code_5 },
    { "chrsyn_so_code_6", 8, chrsyn_so_code_6 },
    { "chrsyn_so_code_7", 43, chrsyn_so_code_7 },
    { "chrsyn_so_code_8", 1, chrsyn_so_code_8 },
    { "chrsyn_so_code_9", 8, chrsyn_so_code_9 },
    { "chrsyn_so_code_10", 2, chrsyn_so_code_10 },
    { "chrsyn_so_code_11", 5, chrsyn_so_code_11 },
    { "chrsyn_so_code_12", 5, chrsyn_so_code_12 },
    { "chrsyn_so_code_13", 4, chrsyn_so_code_13 }
  };

int
decl_chrsyn_so_441d43d47d6f18da (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_chrsyn_so_441d43d47d6f18da);
  return (0);
}

DECLARE_COMPILED_CODE ("chrsyn.so", 13, decl_chrsyn_so_441d43d47d6f18da, chrsyn_so_441d43d47d6f18da)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_chrsyn_so_data_441d43d47d6f18da [2532] =
  "\x9a\x01\x1e\x89\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\x07\xb1\x80\xc1\x0e\xbb"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\xb1\x81\x0c\x28\x0d\xbd\x28\x0d\xbe\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\x0d\x1c\xb1\x81\x1d\x0d\xb9"
  "\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x1c\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xc3\x1d\x0c\x0d\x1c\xc1\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x28\xb6\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x07\xc1\x0f\xc1\xc1\x02\x02\x02\x08\x8a\x0f\x02\x02\x02"
  "\x02\x08\x89\x02\x02\x08\x89\x02\x02\x02\x02\x08\x89\x02\x02\x08"
  "\x14\x0f\x0c\x02\x02\x08\x89\x02\x02\x02\x02\x02\x08\x89\x02\x02"
  "\x02\x08\x89\x02\x02\x08\x89\x02\x02\x08\x89\x02\x02\x08\x89\x02"
  "\x08\x14\x0c\x0c\x0c\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c"
  "\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0f\x02\x0c\x1b\x0c\xb1\x25\x0d\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x02\x02"
  "\x0c\x0c\x0c\x02\x80\x02\x1b\x0c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1d\x28\x0d\x28\xb6\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\xbe\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb6\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x80\x1b\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\xbe\x88\xb6\xb3\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb4\x2a\x17\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x0d\xb1\x1b\x1b\x1b\x1b\xb5\x17\x1b\x0d\xb2\x2a"
  "\xc3\x0d\x1c\x0c\x0d\x08\x88\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x63\x68\x72\x73\x79\x6e\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x0e\x04\x83\x04\x03\x02\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x02\x12\x0a\x81\x85\x02\x11\x08\x81\x83\x02\x10\x06\x81\x83"
  "\x02\x0f\x04\x83\x04\x09\x12\x02\x12\x63\x68\x61\x72\x2d\x73\x79"
  "\x6e\x74\x61\x78\x20\x74\x61\x62\x6c\x65\x03\x13\x63\x68\x61\x72"
  "\x2d\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x3f\x05\x1a"
  "\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x15\x08\x81\x85\x02\x14"
  "\x06\x81\x85\x02\x13\x04\x84\x06\x07\x12\x02\x17\x6d\x61\x6b\x65"
  "\x2d\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62"
  "\x6c\x65\x09\x08\x1b\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x63\x68"
  "\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x02"
  "\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x70\x79\x04\x1c\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72\x2d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x0a\x03\x18\x25\x6d\x61"
  "\x6b\x65\x2d\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x2d\x74"
  "\x61\x62\x6c\x65\x0b\x04\x1a\x0c\x81\x83\x02\x19\x0a\x81\x87\x02"
  "\x18\x08\x81\x87\x02\x17\x06\x83\x02\x16\x04\x81\x85\x02\x0b\x1b"
  "\x0c\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0d\x10\x67"
  "\x65\x74\x2d\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x0e\x04"
  "\x0a\x03\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73\x63\x69\x69\x0f\x03"
  "\x1d\x08\x81\x85\x02\x1c\x06\x81\x85\x02\x1b\x04\x84\x06\x07\x11"
  "\x10\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x0a"
  "\x63\x68\x61\x72\x61\x63\x74\x65\x72\x11\x73\x65\x74\x2d\x63\x68"
  "\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x21\x11\x15\x73\x74\x72\x69"
  "\x6e\x67\x2d\x3e\x73\x79\x6e\x74\x61\x78\x2d\x65\x6e\x74\x72\x79"
  "\x12\x04\x0a\x03\x0f\x03\x0a\x63\x68\x61\x72\x2d\x73\x65\x74\x3f"
  "\x05\x03\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x6d\x65\x6d\x62"
  "\x65\x72\x73\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x0f\x07\x25"
  "\x12\x81\x89\x02\x24\x10\x81\x85\x02\x23\x0e\x81\x8b\x02\x22\x0c"
  "\x81\x8b\x02\x21\x0a\x81\x8b\x02\x20\x08\x81\x89\x02\x1f\x06\x81"
  "\x87\x02\x1e\x04\x85\x08\x11\x26\x13\x02\x08\x02\x04\x63\x64\x72"
  "\x01\xac\x01\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x3e\x63\x68\x61"
  "\x72\x04\x63\x61\x72\xa2\x01\xa8\x01\xc0\x01\x01\xbc\x01\xa7\x01"
  "\xaa\x01\xad\x01\xaf\x01\xb1\x01\xb2\x01\xb6\x01\xb8\x01\xbd\x01"
  "\xbf\x01\xd8\x01\xf8\x01\x09\x01\xa1\x01\x02\x20\xa3\x01\xa6\x01"
  "\xa9\x01\xab\x01\xb0\x01\xb3\x01\xb5\x01\xb7\x01\xb9\x01\xbb\x01"
  "\xc1\x01\xd7\x01\xd9\x01\xf7\x01\xf9\x01\xff\x01\x80\x02\x0b\x0d"
  "\x2e\x2c\x3b\x3a\x3f\x21\x23\x40\x7e\x5e\x27\x60\x02\x2e\x0b\x5f"
  "\x2d\x2b\x2a\x2f\x26\x7c\x3c\x3e\x3d\x02\x5f\x01\x5d\x02\x5c\x01"
  "\x23\x02\x22\x01\x7e\x03\x29\x7b\x01\x7c\x03\x28\x7d\x01\x5e\x03"
  "\x29\x5b\x01\x5c\x03\x28\x5d\x01\x2a\x03\x29\x28\x01\x29\x03\x28"
  "\x29\x01\x26\x01\x25\x81\x02\x02\x77\x12\x01\x02\x16\x63\x68\x61"
  "\x72\x2d\x73\x65\x74\x3a\x61\x6c\x70\x68\x61\x6e\x75\x6d\x65\x72"
  "\x69\x63\x02\x05\x11\x03\x0b\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65"
  "\x63\x74\x6f\x72\x03\x11\x73\x74\x72\x69\x6e\x67\x2d\x3e\x63\x68"
  "\x61\x72\x2d\x73\x65\x74\x04\x0f\x04\x07\x73\x74\x72\x69\x6e\x67"
  "\x0f\x07\x50\x58\x81\x8b\x02\x4f\x56\x81\x87\x02\x4e\x54\x81\x87"
  "\x02\x4d\x52\x81\x85\x02\x4c\x50\x81\x83\x02\x4b\x4e\x81\x83\x02"
  "\x4a\x4c\x81\x87\x02\x49\x4a\x81\x87\x02\x48\x48\x81\x87\x02\x47"
  "\x46\x81\x87\x02\x46\x44\x81\x89\x02\x45\x42\x81\x83\x02\x44\x40"
  "\x81\x85\x02\x43\x3e\x81\x83\x02\x42\x3c\x81\x85\x02\x41\x3a\x81"
  "\x85\x02\x40\x38\x81\x85\x02\x3f\x36\x81\x81\x02\x3e\x34\x81\x83"
  "\x02\x3d\x32\x81\x85\x02\x3c\x30\x81\x85\x02\x3b\x2e\x81\x81\x02"
  "\x3a\x2c\x81\x83\x02\x39\x2a\x81\x87\x02\x38\x28\x81\x83\x02\x37"
  "\x26\x81\x87\x02\x36\x24\x81\x83\x02\x35\x22\x81\x83\x02\x34\x20"
  "\x81\x83\x02\x33\x1e\x81\x83\x02\x32\x1c\x81\x83\x02\x31\x1a\x81"
  "\x83\x02\x30\x18\x81\x83\x02\x2f\x16\x81\x83\x02\x2e\x14\x81\x83"
  "\x02\x2d\x12\x81\x83\x02\x2c\x10\x81\x83\x02\x2b\x0e\x81\x83\x02"
  "\x2a\x0c\x81\x85\x02\x29\x0a\x81\x83\x02\x28\x08\x81\x87\x02\x27"
  "\x06\x81\x81\x02\x26\x04\x82\x02\x57\x91\x01\x14\x02\x09\x12\x51"
  "\x04\x83\x04\x03\x12\x02\x0a\x02\x70\x02\x38\x02\x31\x02\x32\x02"
  "\x33\x02\x34\x02\x35\x0c\x81\x01\x02\x36\x02\x37\x01\x0d\x09\x0d"
  "\x02\x20\x14\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x15\x12\x63\x68\x61\x72\x2d\x73\x79\x6e"
  "\x74\x61\x78\x2d\x63\x6f\x64\x65\x73\x16\x02\x04\x16\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x72\x2d\x73\x79\x6e\x74"
  "\x61\x78\x17\x03\x0c\x61\x73\x63\x69\x69\x2d\x3e\x63\x68\x61\x72"
  "\x0a\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x18"
  "\x06\x18\x03\x0f\x06\x59\x12\x81\x89\x02\x58\x10\x81\x83\x02\x57"
  "\x0e\x81\x87\x02\x56\x0c\x81\x87\x02\x55\x0a\x81\x83\x02\x54\x08"
  "\x81\x83\x02\x53\x06\x81\x85\x02\x52\x04\x83\x04\x11\x33\x18\x02"
  "\x0b\x14\x6e\x6f\x6e\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x20\x66"
  "\x69\x78\x6e\x75\x6d\x02\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61"
  "\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74"
  "\x05\x03\x5b\x06\x84\x06\x5a\x04\x81\x85\x02\x05\x0f\x0f\x02\x0c"
  "\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x23\x73\x75\x62\x73"
  "\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d"
  "\x63\x68\x61\x72\x2d\x6f\x66\x2d\x73\x79\x6e\x74\x61\x78\x19\x06"
  "\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75\x62\x73\x74"
  "\x72\x69\x6e\x67\x1a\x04\x12\x63\x68\x61\x72\x2d\x3e\x73\x79\x6e"
  "\x74\x61\x78\x2d\x63\x6f\x64\x65\x1b\x03\x60\x0c\x81\x8d\x02\x5f"
  "\x0a\x81\x8f\x02\x5e\x08\x81\x8d\x02\x5d\x06\x81\x8b\x02\x5c\x04"
  "\x87\x0c\x0b\x15\x1c\x02\x0d\x27\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72"
  "\x2d\x6e\x6f\x74\x2d\x6f\x66\x2d\x73\x79\x6e\x74\x61\x78\x1d\x06"
  "\x1a\x04\x1b\x03\x65\x0c\x81\x8d\x02\x64\x0a\x81\x8f\x02\x63\x08"
  "\x81\x8d\x02\x62\x06\x81\x8b\x02\x61\x04\x87\x0c\x0b\x15\x1a\x02"
  "\x0e\x0d\x16\x02\x04\x0e\x02\x69\x0a\x81\x85\x02\x68\x08\x81\x87"
  "\x02\x67\x06\x81\x85\x02\x66\x04\x84\x06\x09\x14\x0d\x0e\x0d\x04"
  "\x1a\x04\x1c\x04\x02\x3e\x02\x3c\x02\x2f\x02\x5c\x02\x24\x02\x22"
  "\x02\x27\x02\x29\x02\x28\x02\x5f\x02\x77\x02\x2e\x02\x20\x0e\x0f"
  "\x06\x18\x04\x12\x04\x14\x04\x13\x04\x10\x04\x0c\x06\x04\x04\x0f"
  "\x1b\x1d\x19\x16\x17\x15\x14\x73\x74\x72\x69\x6e\x67\x2d\x3e\x63"
  "\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x11\x0e"
  "\x09\x0a\x0f\x0b\x1a\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x65\x6e\x74\x72\x69\x65\x73\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x16\x72\x74\x64\x3a\x63\x68\x61\x72\x2d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x74\x61\x62\x6c\x65\x1d\x12\x63\x68\x61\x72\x2d\x73\x79\x6e"
  "\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x08\x65\x6e\x74\x72\x69\x65"
  "\x73\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x1d"
  "\x02\x0d\x1c\x80\x80\x04\x0c\x1a\x81\x81\x02\x0b\x18\x81\x81\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07"
  "\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a"
  "\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81"
  "\x83\x02\x1b\x34";

SCHEME_OBJECT *
chrsyn_so_data_441d43d47d6f18da (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_chrsyn_so_data_441d43d47d6f18da [0]))), (sizeof (prog_chrsyn_so_data_441d43d47d6f18da)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("chrsyn.so", chrsyn_so_data_441d43d47d6f18da)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("chrsyn.so", "2551918fcb2d77cb")
