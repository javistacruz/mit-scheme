/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:13-07 by Liar version 4.118. */

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
rvalue_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto rvalue__passed_outP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue__passed_outP_3)
DEFLABEL (rvalue__passed_outP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto set_rvalue__passed_outPB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rvalue__passed_outPB_3)
DEFLABEL (set_rvalue__passed_outPB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_3 9
#define OBJECT_3_2 8
#define OBJECT_3_1 7
#define OBJECT_3_0 6
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_3_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 20
#define DEBUGGING_LABEL_4_2 19
#define OBJECT_4_3 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCE_4_0 14
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_4_4);
      goto rvalue_values_3;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_values_9)
DEFLABEL (rvalue_values_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_13)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_10;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_4_3]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_12;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd42.Lng))))
    goto label_12;
  (Wrd34.Obj) = ((Wrd40.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_12)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_4_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_7)
  (Wrd34.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_4_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_15;

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
rvalue_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_4);
      goto rvalue_passed_inP_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_passed_inP_9)
DEFLABEL (rvalue_passed_inP_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_16;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_15)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_14;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_14;
  (Wrd32.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_13)
  (Wrd46.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 10)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_12)
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd56.Lng))))
    goto label_11;
  Rvl = ((Wrd54.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_5_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_5_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define ENVIRONMENT_LABEL_6_3 18
#define DEBUGGING_LABEL_6_2 17
#define OBJECT_6_4 16
#define OBJECT_6_3 15
#define OBJECT_6_2 14
#define OBJECT_6_1 13
#define OBJECT_6_0 12
#define FREE_REFERENCE_6_0 11
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_6_4);
      goto rvalue_passed_outP_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_passed_outP_9)
DEFLABEL (rvalue_passed_outP_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_17;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_17;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_16)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_13;
  (Wrd28.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_11)
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd39.Lng))))
    goto label_10;
  Rvl = ((Wrd37.pObj) [2]);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_15;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd50.Lng))))
    goto label_15;
  (Wrd44.Obj) = ((Wrd48.pObj) [4]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_14)
  (Wrd58.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_10;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd68.Lng))))
    goto label_10;
  Rvl = ((Wrd66.pObj) [13]);
  goto label_12;

DEFLABEL (label_15)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.Obj) = (current_block [OBJECT_6_2]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_6_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_18;

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
rvalue_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_7_4);
      goto rvalue_known_value_3;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_known_value_9)
DEFLABEL (rvalue_known_value_3)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_16;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_15)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_10;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_14;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_14;
  (Wrd32.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_13)
  (Wrd46.Obj) = (current_block [OBJECT_7_3]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 10)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_12)
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd56.Lng))))
    goto label_11;
  Rvl = ((Wrd54.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_7_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_7_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define ENVIRONMENT_LABEL_8_3 19
#define DEBUGGING_LABEL_8_2 18
#define OBJECT_8_2 17
#define OBJECT_8_1 16
#define OBJECT_8_0 15
#define EXECUTE_CACHE_8_6 11
#define FREE_REFERENCE_8_0 14
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8_4);
      goto rvalue_known_constantP_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_known_constantP_8)
DEFLABEL (rvalue_known_constantP_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_14;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_14;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_13)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_10;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_8_2]);

DEFLABEL (label_9)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_8_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define OBJECT_9_1 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_9_4);
      goto rvalue_constant_value_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_constant_value_4)
DEFLABEL (rvalue_constant_value_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
#define LABEL_10_12 17
#define LABEL_10_13 19
#define LABEL_10_14 21
#define LABEL_10_15 23
#define LABEL_10_16 25
#define LABEL_10_17 27
#define ENVIRONMENT_LABEL_10_3 39
#define DEBUGGING_LABEL_10_2 38
#define OBJECT_10_4 37
#define OBJECT_10_3 36
#define OBJECT_10_2 35
#define OBJECT_10_1 34
#define OBJECT_10_0 33
#define EXECUTE_CACHE_10_11 29
#define FREE_REFERENCE_10_0 32
#define FREE_REFERENCES_LABEL_10_0 28
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd128;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd135;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd112;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd161;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd145;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd95;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_10_4);
      goto rvalue_P_12;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_10_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_10_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_10_14);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_10_15);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_10_16);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_10_17);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_P_27)
DEFLABEL (rvalue_P_12)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_58;
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_56;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_56;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_55)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_41;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_40;
  Wrd28 = Wrd32;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_38;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_38;
  (Wrd34.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_37)
  (Wrd50.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd50.Obj))
    goto label_32;
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (Rsp [1]);
  if ((Wrd52.Obj) == (Wrd53.Obj))
    goto label_29;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_28;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_10_4]);

DEFLABEL (label_28)
DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_36;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd64.Lng))))
    goto label_36;
  (Wrd56.Obj) = ((Wrd62.pObj) [4]);

DEFLABEL (label_35)
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_34;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd78.Lng))))
    goto label_34;
  (Wrd72.Obj) = ((Wrd76.pObj) [10]);

DEFLABEL (label_33)
  (Wrd86.Obj) = (Rsp [0]);
  if ((Wrd86.Obj) == (Wrd72.Obj))
    goto label_29;
  goto label_30;

DEFLABEL (label_34)
  (Wrd81.Obj) = (current_block [OBJECT_10_3]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_19)
  (Wrd72.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_10_2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_18)
  (Wrd56.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_10_0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_17)
  (Wrd34.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd29.pObj));

DEFLABEL (label_16)
  (Wrd28.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_54;
  Wrd89 = Wrd93;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd104.Obj) = (Rsp [2]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_52;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd103.Lng))))
    goto label_52;
  (Wrd95.Obj) = ((Wrd101.pObj) [1]);

DEFLABEL (label_51)
  (Wrd111.Obj) = (* (Rsp++));
  if ((Wrd95.Obj) == (Wrd111.Obj))
    goto label_46;
  (Wrd121.Obj) = (Rsp [0]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 10))
    goto label_45;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd120.Lng))))
    goto label_45;
  (Wrd112.Obj) = ((Wrd118.pObj) [4]);

DEFLABEL (label_44)
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_43;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd134.Lng))))
    goto label_43;
  (Wrd128.Obj) = ((Wrd132.pObj) [10]);

DEFLABEL (label_42)
  (Wrd142.Obj) = (Rsp [1]);
  if ((Wrd128.Obj) == (Wrd142.Obj))
    goto label_29;
  goto label_30;

DEFLABEL (label_43)
  (Wrd137.Obj) = (current_block [OBJECT_10_3]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_23)
  (Wrd128.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd123.Obj) = (Rsp [0]);
  (Wrd124.Obj) = (current_block [OBJECT_10_2]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_22)
  (Wrd112.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd154.Obj) = (Rsp [0]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 10))
    goto label_50;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd153.Lng))))
    goto label_50;
  (Wrd145.Obj) = ((Wrd151.pObj) [4]);

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd145.Obj);
  (Wrd170.Obj) = (Rsp [1]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 10))
    goto label_48;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd169.Lng))))
    goto label_48;
  (Wrd161.Obj) = ((Wrd167.pObj) [4]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_48)
  (Wrd172.Obj) = (Rsp [1]);
  (Wrd173.Obj) = (current_block [OBJECT_10_2]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_25)
  (Wrd161.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd156.Obj) = (Rsp [0]);
  (Wrd157.Obj) = (current_block [OBJECT_10_2]);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_24)
  (Wrd145.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.Obj) = (current_block [OBJECT_10_0]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_21)
  (Wrd95.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd90.pObj));

DEFLABEL (label_20)
  (Wrd89.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_10_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_15)
  (Wrd11.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_57;

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
rvalue_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto constant_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_value_3)
DEFLABEL (constant_value_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 8
#define DEBUGGING_LABEL_12_2 7
#define OBJECT_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto set_constant_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_constant_valueB_3)
DEFLABEL (set_constant_valueB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_12_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_7 7
#define LABEL_13_5 9
#define LABEL_13_8 11
#define ENVIRONMENT_LABEL_13_3 24
#define DEBUGGING_LABEL_13_2 23
#define OBJECT_13_5 22
#define OBJECT_13_4 21
#define OBJECT_13_3 20
#define OBJECT_13_2 19
#define OBJECT_13_1 18
#define OBJECT_13_0 17
#define EXECUTE_CACHE_13_9 13
#define FREE_REFERENCE_13_0 16
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;
  Wrd10 = Wrd14;

DEFLABEL (label_17)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_16;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_16;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_15)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_13)
  (Wrd24.Obj) = (current_block [OBJECT_13_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_13_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Rsp [1]) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd25.Obj) = (current_block [OBJECT_13_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd11.pObj));

DEFLABEL (label_8)
  (Wrd10.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_6 5
#define LABEL_14_5 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define OBJECT_14_0 22
#define EXECUTE_CACHE_14_7 15
#define FREE_REFERENCE_14_1 18
#define FREE_REFERENCE_14_0 19
#define FREE_ASSIGNMENT_14_0 21
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_4);
      goto make_constant_6;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_constant_13)
DEFLABEL (make_constant_6)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_14;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_15)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_22;
  Wrd16 = Wrd20;

DEFLABEL (label_21)
  (Wrd27.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_20;
  Wrd31 = Wrd35;

DEFLABEL (label_19)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd45.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_10])), (Wrd45.pObj), (Wrd42.Obj));

DEFLABEL (label_11)
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_9])), (Wrd32.pObj));

DEFLABEL (label_10)
  (Wrd31.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd17.pObj));

DEFLABEL (label_9)
  (Wrd16.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_23;

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
rvalue_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
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
#define ENVIRONMENT_LABEL_16_3 14
#define DEBUGGING_LABEL_16_2 13
#define OBJECT_16_2 12
#define OBJECT_16_1 11
#define OBJECT_16_0 10
#define FREE_REFERENCE_16_0 9
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_16_4);
      goto rvalue_constantP_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_constantP_6)
DEFLABEL (rvalue_constantP_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_16_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_16_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto reference_context_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_context_3)
DEFLABEL (reference_context_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

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
rvalue_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_reference_contextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_reference_contextB_3)
DEFLABEL (set_reference_contextB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto reference_lvalue_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_lvalue_3)
DEFLABEL (reference_lvalue_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto set_reference_lvalueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_reference_lvalueB_3)
DEFLABEL (set_reference_lvalueB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
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
rvalue_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto reference_safeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_safeP_3)
DEFLABEL (reference_safeP_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto set_reference_safePB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_reference_safePB_3)
DEFLABEL (set_reference_safePB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_7 7
#define LABEL_23_5 9
#define LABEL_23_8 11
#define LABEL_23_9 13
#define LABEL_23_10 15
#define ENVIRONMENT_LABEL_23_3 32
#define DEBUGGING_LABEL_23_2 31
#define OBJECT_23_9 30
#define OBJECT_23_8 29
#define OBJECT_23_7 28
#define OBJECT_23_6 27
#define OBJECT_23_5 26
#define OBJECT_23_4 25
#define OBJECT_23_3 24
#define OBJECT_23_2 23
#define OBJECT_23_1 22
#define OBJECT_23_0 21
#define EXECUTE_CACHE_23_11 17
#define FREE_REFERENCE_23_0 20
#define FREE_REFERENCES_LABEL_23_0 16
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_23_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_23_10);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_32;
  Wrd10 = Wrd14;

DEFLABEL (label_31)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_30;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_30;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_29)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_27)
  (Wrd24.Obj) = (current_block [OBJECT_23_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_23_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_26;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_26;
  (Wrd33.Obj) = ((Wrd39.pObj) [4]);

DEFLABEL (label_25)
  (Wrd52.Obj) = (current_block [OBJECT_23_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_23_7]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_24;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_24;
  (Wrd61.Obj) = ((Wrd67.pObj) [3]);

DEFLABEL (label_23)
  (Wrd80.Obj) = (current_block [OBJECT_23_4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd85.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Rsp [1]) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (label_24)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_23_8]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_20)
  (Wrd61.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_23_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_19)
  (Wrd33.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_23_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_3]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd25.Obj) = (current_block [OBJECT_23_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_6])), (Wrd11.pObj));

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 9
#define DEBUGGING_LABEL_24_2 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_24_4);
      goto make_reference_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_reference_4)
DEFLABEL (make_reference_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd20.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd22.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd14.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 15
#define DEBUGGING_LABEL_25_2 14
#define OBJECT_25_2 13
#define OBJECT_25_1 12
#define OBJECT_25_0 11
#define EXECUTE_CACHE_25_7 9
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [1]);
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
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_9;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd27.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd25.pObj) [16]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (label_9)
  (Wrd30.Obj) = (current_block [OBJECT_25_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 14
#define DEBUGGING_LABEL_26_2 13
#define OBJECT_26_2 12
#define OBJECT_26_1 11
#define OBJECT_26_0 10
#define FREE_REFERENCE_26_0 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_26_4);
      goto rvalue_referenceP_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_referenceP_6)
DEFLABEL (rvalue_referenceP_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_26_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_26_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define OBJECT_27_1 10
#define OBJECT_27_0 9
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto reference_values_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_values_5)
DEFLABEL (reference_values_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 10
#define DEBUGGING_LABEL_28_2 9
#define OBJECT_28_2 8
#define OBJECT_28_1 7
#define OBJECT_28_0 6
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto reference_passed_inP_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_passed_inP_5)
DEFLABEL (reference_passed_inP_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_28_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [12]);
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
#define ENVIRONMENT_LABEL_29_3 10
#define DEBUGGING_LABEL_29_2 9
#define OBJECT_29_2 8
#define OBJECT_29_1 7
#define OBJECT_29_0 6
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto reference_passed_outP_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_passed_outP_5)
DEFLABEL (reference_passed_outP_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_29_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_29_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 10
#define DEBUGGING_LABEL_30_2 9
#define OBJECT_30_2 8
#define OBJECT_30_1 7
#define OBJECT_30_0 6
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto reference_known_value_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_known_value_5)
DEFLABEL (reference_known_value_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_30_2]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_7)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd31.Lng))))
    goto label_6;
  Rvl = ((Wrd29.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define ENVIRONMENT_LABEL_31_3 15
#define DEBUGGING_LABEL_31_2 14
#define OBJECT_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 9
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto reference_to_known_locationP_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_to_known_locationP_7)
DEFLABEL (reference_to_known_locationP_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
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
  if (! ((Wrd31.uLng) == 10))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd21.Obj) = ((Wrd27.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_31_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto unassigned_test_context_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unassigned_test_context_3)
DEFLABEL (unassigned_test_context_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

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

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 8
#define DEBUGGING_LABEL_33_2 7
#define OBJECT_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto set_unassigned_test_contextB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_unassigned_test_contextB_3)
DEFLABEL (set_unassigned_test_contextB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto unassigned_test_lvalue_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unassigned_test_lvalue_3)
DEFLABEL (unassigned_test_lvalue_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

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

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define OBJECT_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto set_unassigned_test_lvalueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_unassigned_test_lvalueB_3)
DEFLABEL (set_unassigned_test_lvalueB_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_7 7
#define LABEL_36_5 9
#define LABEL_36_8 11
#define LABEL_36_9 13
#define ENVIRONMENT_LABEL_36_3 28
#define DEBUGGING_LABEL_36_2 27
#define OBJECT_36_7 26
#define OBJECT_36_6 25
#define OBJECT_36_5 24
#define OBJECT_36_4 23
#define OBJECT_36_3 22
#define OBJECT_36_2 21
#define OBJECT_36_1 20
#define OBJECT_36_0 19
#define EXECUTE_CACHE_36_10 15
#define FREE_REFERENCE_36_0 18
#define FREE_REFERENCES_LABEL_36_0 14
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

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

DEFLABEL (lambda_17)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;
  Wrd10 = Wrd14;

DEFLABEL (label_24)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_23;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_23;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_20)
  (Wrd24.Obj) = (current_block [OBJECT_36_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_36_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_19;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_19;
  (Wrd33.Obj) = ((Wrd39.pObj) [3]);

DEFLABEL (label_18)
  (Wrd52.Obj) = (current_block [OBJECT_36_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_36_7]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Rsp [1]) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (label_19)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_36_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_15)
  (Wrd33.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_36_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd25.Obj) = (current_block [OBJECT_36_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 9
#define DEBUGGING_LABEL_37_2 8
#define FREE_REFERENCE_37_0 7
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_37_4);
      goto make_unassigned_test_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_unassigned_test_4)
DEFLABEL (make_unassigned_test_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd19.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd21.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define OBJECT_38_1 10
#define OBJECT_38_0 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define ENVIRONMENT_LABEL_39_3 14
#define DEBUGGING_LABEL_39_2 13
#define OBJECT_39_2 12
#define OBJECT_39_1 11
#define OBJECT_39_0 10
#define FREE_REFERENCE_39_0 9
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_39_4);
      goto rvalue_unassigned_testP_1;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_unassigned_testP_6)
DEFLABEL (rvalue_unassigned_testP_1)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_39_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_39_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
rvalue_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto expression_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_block_3)
DEFLABEL (expression_block_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

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

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 8
#define DEBUGGING_LABEL_41_2 7
#define OBJECT_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto set_expression_blockB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_expression_blockB_3)
DEFLABEL (set_expression_blockB_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_41_1]);
  Rsp = (& (Rsp [3]));
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
rvalue_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto expression_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_continuation_3)
DEFLABEL (expression_continuation_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
#define ENVIRONMENT_LABEL_43_3 8
#define DEBUGGING_LABEL_43_2 7
#define OBJECT_43_2 6
#define OBJECT_43_1 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto set_expression_continuationB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_expression_continuationB_3)
DEFLABEL (set_expression_continuationB_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_43_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto expression_entry_edge_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_entry_edge_3)
DEFLABEL (expression_entry_edge_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 8
#define DEBUGGING_LABEL_45_2 7
#define OBJECT_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto set_expression_entry_edgeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_expression_entry_edgeB_3)
DEFLABEL (set_expression_entry_edgeB_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_45_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 7
#define DEBUGGING_LABEL_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto expression_label_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_label_3)
DEFLABEL (expression_label_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

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

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 8
#define DEBUGGING_LABEL_47_2 7
#define OBJECT_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto set_expression_labelB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_expression_labelB_3)
DEFLABEL (set_expression_labelB_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_47_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 7
#define DEBUGGING_LABEL_48_2 6
#define OBJECT_48_1 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto expression_debugging_info_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_debugging_info_3)
DEFLABEL (expression_debugging_info_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

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

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 8
#define DEBUGGING_LABEL_49_2 7
#define OBJECT_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto set_expression_debugging_infoB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_expression_debugging_infoB_3)
DEFLABEL (set_expression_debugging_infoB_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_49_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_49_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_6 5
#define LABEL_50_7 7
#define LABEL_50_5 9
#define LABEL_50_8 11
#define LABEL_50_9 13
#define LABEL_50_10 15
#define LABEL_50_11 17
#define LABEL_50_12 19
#define ENVIRONMENT_LABEL_50_3 39
#define DEBUGGING_LABEL_50_2 38
#define OBJECT_50_12 37
#define OBJECT_50_11 36
#define OBJECT_50_10 35
#define OBJECT_50_9 34
#define OBJECT_50_8 33
#define OBJECT_50_7 32
#define OBJECT_50_6 31
#define OBJECT_50_5 30
#define OBJECT_50_4 29
#define OBJECT_50_3 28
#define OBJECT_50_2 27
#define OBJECT_50_1 26
#define OBJECT_50_0 25
#define EXECUTE_CACHE_50_13 21
#define FREE_REFERENCE_50_0 24
#define FREE_REFERENCES_LABEL_50_0 20
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd117;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd89;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_50_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_50_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_50_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_50_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_50_12);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_32)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;
  Wrd10 = Wrd14;

DEFLABEL (label_45)
  Wrd9 = Wrd10;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_44;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_44;
  (Wrd17.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_43)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_41)
  (Wrd24.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_50_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_40;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd41.Lng))))
    goto label_40;
  (Wrd33.Obj) = ((Wrd39.pObj) [6]);

DEFLABEL (label_39)
  (Wrd52.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_50_6]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_38;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_38;
  (Wrd61.Obj) = ((Wrd67.pObj) [5]);

DEFLABEL (label_37)
  (Wrd80.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd79.pObj) = (& (Rhp [-2]));
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd79.pObj)));
  (Wrd84.Obj) = (current_block [OBJECT_50_8]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd77.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd85.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_36;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd97.Lng))))
    goto label_36;
  (Wrd89.Obj) = ((Wrd95.pObj) [4]);

DEFLABEL (label_35)
  (Wrd108.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd108.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd112.Obj) = (current_block [OBJECT_50_10]);
  (* (Rhp++)) = (Wrd112.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (Wrd113.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd126.Obj) = (Rsp [2]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 10))
    goto label_34;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [0]);
  (Wrd125.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd125.Lng))))
    goto label_34;
  (Wrd117.Obj) = ((Wrd123.pObj) [3]);

DEFLABEL (label_33)
  (Wrd136.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd136.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd140.Obj) = (current_block [OBJECT_50_12]);
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd133.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (Wrd141.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd137.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd144.pObj) = (& (Rhp [-2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd144.pObj)));
  (Rsp [1]) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (label_34)
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.Obj) = (current_block [OBJECT_50_11]);
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_30)
  (Wrd117.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (current_block [OBJECT_50_9]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_29)
  (Wrd89.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_50_7]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_28)
  (Wrd61.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_50_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_27)
  (Wrd33.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_50_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd25.Obj) = (current_block [OBJECT_50_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_6])), (Wrd11.pObj));

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define LABEL_51_8 9
#define LABEL_51_10 11
#define LABEL_51_11 13
#define LABEL_51_12 15
#define LABEL_51_13 17
#define ENVIRONMENT_LABEL_51_3 34
#define DEBUGGING_LABEL_51_2 33
#define OBJECT_51_4 32
#define OBJECT_51_3 31
#define OBJECT_51_2 30
#define OBJECT_51_1 29
#define OBJECT_51_0 28
#define EXECUTE_CACHE_51_9 19
#define EXECUTE_CACHE_51_7 21
#define FREE_REFERENCE_51_1 24
#define FREE_REFERENCE_51_0 25
#define FREE_ASSIGNMENT_51_0 27
#define FREE_REFERENCES_LABEL_51_0 18
#define NUMBER_OF_LINKER_SECTIONS_51_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
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
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_51_4);
      goto make_expression_7;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_51_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_51_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_expression_15)
DEFLABEL (make_expression_7)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_26;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_25)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd23.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-8]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_22;
  Wrd25 = Wrd29;

DEFLABEL (label_21)
  (Wrd34.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_0]));
  (Wrd43.Obj) = ((Wrd35.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd35.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_18)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_17;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd57.Lng))))
    goto label_17;
  (Wrd51.Obj) = (Rsp [0]);
  ((Wrd55.pObj) [8]) = (Wrd51.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_51_3]);
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_4]), 3);

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_20)
  if ((Wrd43.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_12])), (Wrd35.pObj), (Wrd31.Obj));

DEFLABEL (label_12)
  goto label_18;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_11])), (Wrd26.pObj));

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_10])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_51_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 14
#define DEBUGGING_LABEL_52_2 13
#define OBJECT_52_2 12
#define OBJECT_52_1 11
#define OBJECT_52_0 10
#define FREE_REFERENCE_52_0 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_52_4);
      goto rvalue_expressionP_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rvalue_expressionP_6)
DEFLABEL (rvalue_expressionP_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_10)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_52_2]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_52_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 12
#define DEBUGGING_LABEL_53_2 11
#define OBJECT_53_1 10
#define OBJECT_53_0 9
#define EXECUTE_CACHE_53_6 7
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rvalue_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto expression_entry_node_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_entry_node_5)
DEFLABEL (expression_entry_node_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

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
#define LABEL_13 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_18 25
#define LABEL_24 27
#define LABEL_19 29
#define LABEL_25 31
#define LABEL_22 33
#define LABEL_28 35
#define LABEL_23 37
#define LABEL_29 39
#define LABEL_26 41
#define LABEL_32 43
#define LABEL_27 45
#define LABEL_33 47
#define LABEL_30 49
#define LABEL_36 51
#define LABEL_31 53
#define LABEL_37 55
#define LABEL_34 57
#define LABEL_40 59
#define LABEL_35 61
#define LABEL_41 63
#define LABEL_38 65
#define LABEL_39 67
#define LABEL_43 69
#define LABEL_42 71
#define LABEL_46 73
#define LABEL_47 75
#define LABEL_44 77
#define LABEL_50 79
#define LABEL_45 81
#define LABEL_48 83
#define LABEL_49 85
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_54 91
#define LABEL_55 93
#define LABEL_56 95
#define LABEL_57 97
#define LABEL_61 99
#define LABEL_58 101
#define LABEL_60 103
#define LABEL_66 105
#define LABEL_67 107
#define LABEL_64 109
#define LABEL_70 111
#define LABEL_65 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_71 119
#define LABEL_72 121
#define LABEL_73 123
#define LABEL_74 125
#define LABEL_75 127
#define LABEL_76 129
#define LABEL_79 131
#define LABEL_77 133
#define LABEL_78 135
#define LABEL_82 137
#define LABEL_83 139
#define LABEL_80 141
#define LABEL_86 143
#define LABEL_81 145
#define LABEL_84 147
#define LABEL_85 149
#define LABEL_87 151
#define LABEL_88 153
#define LABEL_89 155
#define LABEL_90 157
#define LABEL_91 159
#define LABEL_92 161
#define LABEL_95 163
#define LABEL_93 165
#define LABEL_94 167
#define LABEL_98 169
#define LABEL_99 171
#define LABEL_96 173
#define LABEL_102 175
#define LABEL_97 177
#define LABEL_100 179
#define LABEL_101 181
#define LABEL_103 183
#define LABEL_104 185
#define LABEL_105 187
#define LABEL_106 189
#define LABEL_107 191
#define LABEL_108 193
#define ENVIRONMENT_LABEL_3 288
#define DEBUGGING_LABEL_2 287
#define PURIFICATION_ROOT 286
#define OBJECT_64 285
#define OBJECT_63 284
#define OBJECT_62 283
#define OBJECT_61 282
#define OBJECT_60 281
#define OBJECT_59 280
#define OBJECT_58 279
#define OBJECT_57 278
#define OBJECT_56 277
#define OBJECT_55 276
#define OBJECT_54 275
#define OBJECT_53 274
#define OBJECT_52 273
#define OBJECT_51 272
#define OBJECT_50 271
#define OBJECT_49 270
#define OBJECT_48 269
#define OBJECT_47 268
#define OBJECT_46 267
#define OBJECT_45 266
#define OBJECT_44 265
#define OBJECT_43 264
#define OBJECT_42 263
#define OBJECT_41 262
#define OBJECT_40 261
#define OBJECT_39 260
#define OBJECT_38 259
#define OBJECT_37 258
#define OBJECT_36 257
#define OBJECT_35 256
#define OBJECT_34 255
#define OBJECT_33 254
#define OBJECT_32 253
#define OBJECT_31 252
#define OBJECT_30 251
#define OBJECT_29 250
#define OBJECT_28 249
#define OBJECT_27 248
#define OBJECT_26 247
#define OBJECT_25 246
#define OBJECT_24 245
#define OBJECT_23 244
#define OBJECT_22 243
#define OBJECT_21 242
#define OBJECT_20 241
#define OBJECT_19 240
#define OBJECT_18 239
#define OBJECT_17 238
#define OBJECT_16 237
#define OBJECT_15 236
#define OBJECT_14 235
#define OBJECT_13 234
#define OBJECT_12 233
#define OBJECT_11 232
#define OBJECT_10 231
#define OBJECT_9 230
#define OBJECT_8 229
#define OBJECT_7 228
#define OBJECT_6 227
#define OBJECT_5 226
#define OBJECT_4 225
#define OBJECT_3 224
#define OBJECT_2 223
#define OBJECT_1 222
#define OBJECT_0 221
#define EXECUTE_CACHE_63 195
#define EXECUTE_CACHE_62 197
#define EXECUTE_CACHE_59 199
#define EXECUTE_CACHE_51 201
#define EXECUTE_CACHE_21 203
#define EXECUTE_CACHE_17 205
#define EXECUTE_CACHE_10 207
#define EXECUTE_CACHE_6 209
#define FREE_REFERENCE_5 212
#define FREE_REFERENCE_4 213
#define FREE_REFERENCE_3 214
#define FREE_REFERENCE_2 215
#define FREE_REFERENCE_1 216
#define FREE_REFERENCE_0 217
#define GLOBAL_EXECUTE_CACHE_12 219
#define FREE_REFERENCES_LABEL_0 194
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rvalue_so_7f3d8ce0df9a61b7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd13;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_68;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto label_69;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto label_70;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_71;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_24);
      goto label_72;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_25);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_28);
      goto label_74;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto label_75;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_32);
      goto label_76;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_33);
      goto label_77;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_19;

    case 24:
      current_block = (Rpc - LABEL_36);
      goto label_78;

    case 25:
      current_block = (Rpc - LABEL_31);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto label_79;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_80;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_41);
      goto label_81;

    case 31:
      current_block = (Rpc - LABEL_38);
      goto continuation_25;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_23;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto label_82;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto continuation_26;

    case 35:
      current_block = (Rpc - LABEL_46);
      goto label_83;

    case 36:
      current_block = (Rpc - LABEL_47);
      goto label_84;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_28;

    case 38:
      current_block = (Rpc - LABEL_50);
      goto label_85;

    case 39:
      current_block = (Rpc - LABEL_45);
      goto continuation_27;

    case 40:
      current_block = (Rpc - LABEL_48);
      goto continuation_30;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_29;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_31;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto label_86;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto label_87;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_33;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_36;

    case 47:
      current_block = (Rpc - LABEL_57);
      goto continuation_35;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto label_88;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto continuation_34;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto continuation_37;

    case 51:
      current_block = (Rpc - LABEL_66);
      goto label_89;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto label_90;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto continuation_39;

    case 54:
      current_block = (Rpc - LABEL_70);
      goto label_91;

    case 55:
      current_block = (Rpc - LABEL_65);
      goto continuation_38;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_41;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto continuation_40;

    case 58:
      current_block = (Rpc - LABEL_71);
      goto continuation_42;

    case 59:
      current_block = (Rpc - LABEL_72);
      goto label_92;

    case 60:
      current_block = (Rpc - LABEL_73);
      goto label_93;

    case 61:
      current_block = (Rpc - LABEL_74);
      goto continuation_44;

    case 62:
      current_block = (Rpc - LABEL_75);
      goto continuation_47;

    case 63:
      current_block = (Rpc - LABEL_76);
      goto continuation_46;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto label_94;

    case 65:
      current_block = (Rpc - LABEL_77);
      goto continuation_45;

    case 66:
      current_block = (Rpc - LABEL_78);
      goto continuation_48;

    case 67:
      current_block = (Rpc - LABEL_82);
      goto label_95;

    case 68:
      current_block = (Rpc - LABEL_83);
      goto label_96;

    case 69:
      current_block = (Rpc - LABEL_80);
      goto continuation_50;

    case 70:
      current_block = (Rpc - LABEL_86);
      goto label_97;

    case 71:
      current_block = (Rpc - LABEL_81);
      goto continuation_49;

    case 72:
      current_block = (Rpc - LABEL_84);
      goto continuation_52;

    case 73:
      current_block = (Rpc - LABEL_85);
      goto continuation_51;

    case 74:
      current_block = (Rpc - LABEL_87);
      goto continuation_53;

    case 75:
      current_block = (Rpc - LABEL_88);
      goto label_98;

    case 76:
      current_block = (Rpc - LABEL_89);
      goto label_99;

    case 77:
      current_block = (Rpc - LABEL_90);
      goto continuation_55;

    case 78:
      current_block = (Rpc - LABEL_91);
      goto continuation_58;

    case 79:
      current_block = (Rpc - LABEL_92);
      goto continuation_57;

    case 80:
      current_block = (Rpc - LABEL_95);
      goto label_100;

    case 81:
      current_block = (Rpc - LABEL_93);
      goto continuation_56;

    case 82:
      current_block = (Rpc - LABEL_94);
      goto continuation_59;

    case 83:
      current_block = (Rpc - LABEL_98);
      goto label_101;

    case 84:
      current_block = (Rpc - LABEL_99);
      goto label_102;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto continuation_61;

    case 86:
      current_block = (Rpc - LABEL_102);
      goto label_103;

    case 87:
      current_block = (Rpc - LABEL_97);
      goto continuation_60;

    case 88:
      current_block = (Rpc - LABEL_100);
      goto continuation_63;

    case 89:
      current_block = (Rpc - LABEL_101);
      goto continuation_62;

    case 90:
      current_block = (Rpc - LABEL_103);
      goto continuation_64;

    case 91:
      current_block = (Rpc - LABEL_104);
      goto label_104;

    case 92:
      current_block = (Rpc - LABEL_105);
      goto label_105;

    case 93:
      current_block = (Rpc - LABEL_106);
      goto label_108;

    case 94:
      current_block = (Rpc - LABEL_107);
      goto label_109;

    case 95:
      current_block = (Rpc - LABEL_108);
      goto expression_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_67)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_107])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_109)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_108)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	3,
	2,
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
	2,
	0,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	2,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	3,
	2,
	0,
	0,
	2,
	1,
	2,
	1,
	1,
	1,
	2,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 53)
      goto label_107;
    blocks = (current_block [OBJECT_64]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_106])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_107)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_185;
  Wrd11 = Wrd15;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_183;
  Wrd6 = Wrd10;

DEFLABEL (label_182)
  Wrd5 = Wrd6;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_181;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng))))
    goto label_181;
  (Wrd20.Obj) = (current_block [OBJECT_6]);
  ((Wrd23.pObj) [6]) = (Wrd20.Obj);

DEFLABEL (label_180)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_179;
  Wrd12 = Wrd16;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_177;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_177;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_176)
  (Wrd19.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_175;
  Wrd12 = Wrd16;

DEFLABEL (label_174)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_173;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_173;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_172)
  (Wrd19.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_171;
  Wrd12 = Wrd16;

DEFLABEL (label_170)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_169;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_169;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_168)
  (Wrd19.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_167;
  Wrd12 = Wrd16;

DEFLABEL (label_166)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_165;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_165;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_164)
  (Wrd19.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_163;
  Wrd12 = Wrd16;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_161;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_161;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_160)
  (Wrd19.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_159;
  Wrd12 = Wrd16;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_157;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_157;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_156)
  (Wrd19.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_155;
  Wrd11 = Wrd15;

DEFLABEL (label_154)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_153;
  Wrd18 = Wrd22;

DEFLABEL (label_152)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_151;
  Wrd11 = Wrd15;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_149;
  Wrd6 = Wrd10;

DEFLABEL (label_148)
  Wrd5 = Wrd6;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_147;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_147;
  (Wrd19.Obj) = (current_block [OBJECT_31]);
  ((Wrd22.pObj) [6]) = (Wrd19.Obj);

DEFLABEL (label_146)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_145;
  Wrd5 = Wrd9;

DEFLABEL (label_144)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_143;
  Wrd11 = Wrd15;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_141;
  Wrd18 = Wrd22;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_139;
  Wrd11 = Wrd15;

DEFLABEL (label_138)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_137;
  Wrd6 = Wrd10;

DEFLABEL (label_136)
  Wrd5 = Wrd6;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_135;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_135;
  (Wrd19.Obj) = (current_block [OBJECT_41]);
  ((Wrd22.pObj) [6]) = (Wrd19.Obj);

DEFLABEL (label_134)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_77);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_133;
  Wrd5 = Wrd9;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_131;
  Wrd11 = Wrd15;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_129;
  Wrd18 = Wrd22;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_127;
  Wrd11 = Wrd15;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_85);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_125;
  Wrd6 = Wrd10;

DEFLABEL (label_124)
  Wrd5 = Wrd6;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_123;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd24.Lng))))
    goto label_123;
  (Wrd19.Obj) = (current_block [OBJECT_51]);
  ((Wrd22.pObj) [6]) = (Wrd19.Obj);

DEFLABEL (label_122)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_93);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_92);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_121;
  Wrd5 = Wrd9;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_119;
  Wrd11 = Wrd15;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_117;
  Wrd18 = Wrd22;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_97);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_115;
  Wrd11 = Wrd15;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_113;
  Wrd6 = Wrd10;

DEFLABEL (label_112)
  Wrd5 = Wrd6;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_111;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_111;
  (Wrd16.Obj) = (current_block [OBJECT_61]);
  ((Wrd19.pObj) [6]) = (Wrd16.Obj);

DEFLABEL (label_110)
  (Wrd12.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_63]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_111)
  (Wrd24.Obj) = (current_block [OBJECT_7]);
  (Wrd25.Obj) = (current_block [OBJECT_61]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_105)
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104])), (Wrd7.pObj));

DEFLABEL (label_104)
  (Wrd6.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102])), (Wrd12.pObj));

DEFLABEL (label_103)
  (Wrd11.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd19.pObj));

DEFLABEL (label_102)
  (Wrd18.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_98])), (Wrd12.pObj));

DEFLABEL (label_101)
  (Wrd11.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95])), (Wrd6.pObj));

DEFLABEL (label_100)
  (Wrd5.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd27.Obj) = (current_block [OBJECT_7]);
  (Wrd28.Obj) = (current_block [OBJECT_51]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_99)
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd7.pObj));

DEFLABEL (label_98)
  (Wrd6.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd12.pObj));

DEFLABEL (label_97)
  (Wrd11.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd19.pObj));

DEFLABEL (label_96)
  (Wrd18.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd12.pObj));

DEFLABEL (label_95)
  (Wrd11.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd6.pObj));

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd27.Obj) = (current_block [OBJECT_7]);
  (Wrd28.Obj) = (current_block [OBJECT_41]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_93)
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd7.pObj));

DEFLABEL (label_92)
  (Wrd6.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd12.pObj));

DEFLABEL (label_91)
  (Wrd11.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd19.pObj));

DEFLABEL (label_90)
  (Wrd18.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66])), (Wrd12.pObj));

DEFLABEL (label_89)
  (Wrd11.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd6.pObj));

DEFLABEL (label_88)
  (Wrd5.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd27.Obj) = (current_block [OBJECT_7]);
  (Wrd28.Obj) = (current_block [OBJECT_31]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_87)
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd7.pObj));

DEFLABEL (label_86)
  (Wrd6.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd12.pObj));

DEFLABEL (label_85)
  (Wrd11.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd19.pObj));

DEFLABEL (label_84)
  (Wrd18.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd12.pObj));

DEFLABEL (label_83)
  (Wrd11.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd13.pObj));

DEFLABEL (label_80)
  (Wrd12.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd13.pObj));

DEFLABEL (label_78)
  (Wrd12.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd13.pObj));

DEFLABEL (label_76)
  (Wrd12.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd13.pObj));

DEFLABEL (label_74)
  (Wrd12.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd13.pObj));

DEFLABEL (label_72)
  (Wrd12.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd15.Obj) = (current_block [OBJECT_13]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd13.pObj));

DEFLABEL (label_71)
  (Wrd12.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd28.Obj) = (current_block [OBJECT_7]);
  (Wrd29.Obj) = (current_block [OBJECT_6]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (label_70)
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd7.pObj));

DEFLABEL (label_69)
  (Wrd6.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_68)
  (Wrd11.Obj) = Rvl;
  goto label_184;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rvalue_so_7f3d8ce0df9a61b7 [53] =
  {
    { "rvalue_so_code_1", 1, rvalue_so_code_1 },
    { "rvalue_so_code_2", 1, rvalue_so_code_2 },
    { "rvalue_so_code_3", 2, rvalue_so_code_3 },
    { "rvalue_so_code_4", 4, rvalue_so_code_4 },
    { "rvalue_so_code_5", 4, rvalue_so_code_5 },
    { "rvalue_so_code_6", 4, rvalue_so_code_6 },
    { "rvalue_so_code_7", 4, rvalue_so_code_7 },
    { "rvalue_so_code_8", 4, rvalue_so_code_8 },
    { "rvalue_so_code_9", 2, rvalue_so_code_9 },
    { "rvalue_so_code_10", 13, rvalue_so_code_10 },
    { "rvalue_so_code_11", 1, rvalue_so_code_11 },
    { "rvalue_so_code_12", 1, rvalue_so_code_12 },
    { "rvalue_so_code_13", 5, rvalue_so_code_13 },
    { "rvalue_so_code_14", 6, rvalue_so_code_14 },
    { "rvalue_so_code_15", 2, rvalue_so_code_15 },
    { "rvalue_so_code_16", 3, rvalue_so_code_16 },
    { "rvalue_so_code_17", 1, rvalue_so_code_17 },
    { "rvalue_so_code_18", 1, rvalue_so_code_18 },
    { "rvalue_so_code_19", 1, rvalue_so_code_19 },
    { "rvalue_so_code_20", 1, rvalue_so_code_20 },
    { "rvalue_so_code_21", 1, rvalue_so_code_21 },
    { "rvalue_so_code_22", 1, rvalue_so_code_22 },
    { "rvalue_so_code_23", 7, rvalue_so_code_23 },
    { "rvalue_so_code_24", 2, rvalue_so_code_24 },
    { "rvalue_so_code_25", 3, rvalue_so_code_25 },
    { "rvalue_so_code_26", 3, rvalue_so_code_26 },
    { "rvalue_so_code_27", 2, rvalue_so_code_27 },
    { "rvalue_so_code_28", 2, rvalue_so_code_28 },
    { "rvalue_so_code_29", 2, rvalue_so_code_29 },
    { "rvalue_so_code_30", 2, rvalue_so_code_30 },
    { "rvalue_so_code_31", 3, rvalue_so_code_31 },
    { "rvalue_so_code_32", 1, rvalue_so_code_32 },
    { "rvalue_so_code_33", 1, rvalue_so_code_33 },
    { "rvalue_so_code_34", 1, rvalue_so_code_34 },
    { "rvalue_so_code_35", 1, rvalue_so_code_35 },
    { "rvalue_so_code_36", 6, rvalue_so_code_36 },
    { "rvalue_so_code_37", 2, rvalue_so_code_37 },
    { "rvalue_so_code_38", 2, rvalue_so_code_38 },
    { "rvalue_so_code_39", 3, rvalue_so_code_39 },
    { "rvalue_so_code_40", 1, rvalue_so_code_40 },
    { "rvalue_so_code_41", 1, rvalue_so_code_41 },
    { "rvalue_so_code_42", 1, rvalue_so_code_42 },
    { "rvalue_so_code_43", 1, rvalue_so_code_43 },
    { "rvalue_so_code_44", 1, rvalue_so_code_44 },
    { "rvalue_so_code_45", 1, rvalue_so_code_45 },
    { "rvalue_so_code_46", 1, rvalue_so_code_46 },
    { "rvalue_so_code_47", 1, rvalue_so_code_47 },
    { "rvalue_so_code_48", 1, rvalue_so_code_48 },
    { "rvalue_so_code_49", 1, rvalue_so_code_49 },
    { "rvalue_so_code_50", 9, rvalue_so_code_50 },
    { "rvalue_so_code_51", 8, rvalue_so_code_51 },
    { "rvalue_so_code_52", 3, rvalue_so_code_52 },
    { "rvalue_so_code_53", 2, rvalue_so_code_53 }
  };

int
decl_rvalue_so_7f3d8ce0df9a61b7 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rvalue_so_7f3d8ce0df9a61b7);
  return (0);
}

DECLARE_COMPILED_CODE ("rvalue.so", 96, decl_rvalue_so_7f3d8ce0df9a61b7, rvalue_so_7f3d8ce0df9a61b7)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rvalue_so_data_7f3d8ce0df9a61b7 [5006] =
  "\xa1\x02\x4d\x9a\x0b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xc3\xbb\x1d\x81\x22\x29"
  "\x21\x9f\x2b\xbc\x1d\xb0\x83\x88\x0d\xbd\x08\xb1\x81\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\x08\x83\xb1\x80\x0d\xbf\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x02\x83\xb1\x80\xb7\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x81\x02\x83\xb1\x80\xb7"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x02\x83\xb1\x80\xb7\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x82\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x02\x83\xb1\x80\xb7\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x82\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\xb1\x82\xc2\x1c\x85\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x0d\x1c\x25\x1b\x1b\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x84\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x82\x0d\x1c\x83\x0d\x1c\x08\xb1"
  "\x84\x1b\x85\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xb1\x83\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x80\xb7\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x83\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x02\xb1\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x02\xb1\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\xb1\x83\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x83\xb1\x82\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x83"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x83\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x82\x0d\x1c\x08\xb1\x83\x1b"
  "\x85\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x82\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x84\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x86"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x82\x0d\x1c\x83"
  "\x0d\x1c\x84\x0d\x1c\x0d\x1c\x08\xb1\x86\x1b\x85\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x02\x0d\xbb\xb1"
  "\x81\x0d\x1c\x25\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x24\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x28\x0d\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\xb9\x17\xb8\x88\xb0\xb1\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x9b\x0d\x0d\x0d\x1b\x9b\x1b\x2a\x0d\x0d\x1b\x0d\x1b\x0d\x1b\x0d"
  "\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1b\x2a\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x2a\x0d\x0d\x1b\x0d\x1b\x9b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x0d"
  "\x0d\x1b\x0d\x1b\x0d\x1b\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9d\xb7\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x99\x1b\x2a\x1e"
  "\x99\x1b\x2a\x0d\x0d\x1b\x99\x1b\x2a\x1b\x2a\x99\x1b\x0d\x0d\x0d"
  "\x0d\x1b\x0d\x0d\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9e\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x0d\x1c\x0d\xb3"
  "\x0d\x1b\x83\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\xb3\x1b\x1b\x1b\x08"
  "\x8d\xc3\x85\xb6\x2a\x0d\x0d\xb5\x99\xb4\x2a\xb2\x2a\x99\xc3\x1b"
  "\x0d\x28\x0d\x26\x1b\x1b\x1b\xb7\x1b\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61\x73\x65\x2f\x72\x76"
  "\x61\x6c\x75\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x61\x04\x83\x04\x03\x02\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x62\x04\x84\x06"
  "\x03\x02\x14\x72\x76\x61\x6c\x75\x65\x2d\x25\x70\x61\x73\x73\x65"
  "\x64\x2d\x6f\x75\x74\x3f\x64\x06\x81\x83\x02\x63\x04\x83\x04\x05"
  "\x0c\x02\x0e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x67"
  "\x02\x03\x0e\x6c\x76\x61\x6c\x75\x65\x2d\x76\x61\x6c\x75\x65\x73"
  "\x09\x02\x68\x0a\x81\x83\x02\x67\x08\x81\x85\x02\x66\x06\x81\x83"
  "\x02\x65\x04\x83\x04\x09\x15\x0a\x02\x0c\x02\x6c\x0a\x81\x83\x02"
  "\x6b\x08\x81\x85\x02\x6a\x06\x81\x83\x02\x69\x04\x83\x04\x09\x12"
  "\x0b\x02\x0d\x02\x70\x0a\x81\x83\x02\x6f\x08\x81\x85\x02\x6e\x06"
  "\x81\x83\x02\x6d\x04\x83\x04\x09\x13\x0c\x02\x08\x0a\x02\x74\x0a"
  "\x81\x83\x02\x73\x08\x81\x85\x02\x72\x06\x81\x83\x02\x71\x04\x83"
  "\x04\x09\x12\x0d\x02\x09\x0d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d"
  "\x74\x61\x67\x0e\x02\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e"
  "\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x0f\x02\x78\x0a\x81\x85\x02"
  "\x77\x08\x81\x83\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x09\x14"
  "\x10\x02\x0a\x03\x0f\x02\x7a\x06\x81\x83\x02\x79\x04\x83\x04\x05"
  "\x0d\x11\x02\x0b\x0a\x02\x04\x09\x6c\x76\x61\x6c\x75\x65\x3d\x3f"
  "\x02\x87\x01\x1c\x81\x85\x02\x86\x01\x1a\x81\x85\x02\x85\x01\x18"
  "\x81\x87\x02\x84\x01\x16\x81\x85\x02\x83\x01\x14\x81\x85\x02\x82"
  "\x01\x12\x81\x85\x02\x81\x01\x10\x81\x85\x02\x80\x01\x0e\x81\x85"
  "\x02\x7f\x0c\x81\x87\x02\x7e\x0a\x81\x85\x02\x7d\x08\x81\x87\x02"
  "\x7c\x06\x81\x85\x02\x7b\x04\x84\x06\x1b\x28\x12\x02\x0c\x88\x01"
  "\x04\x83\x04\x03\x13\x02\x0d\x02\x89\x01\x04\x84\x06\x03\x14\x02"
  "\x0e\x0f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x76\x61\x6c\x75\x65"
  "\x15\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x16\x0b\x72"
  "\x76\x61\x6c\x75\x65\x2d\x74\x61\x67\x17\x02\x04\x08\x61\x70\x70"
  "\x65\x6e\x64\x21\x18\x02\x8e\x01\x0c\x81\x85\x02\x8d\x01\x0a\x81"
  "\x83\x02\x8c\x01\x08\x81\x87\x02\x8b\x01\x06\x81\x87\x02\x8a\x01"
  "\x04\x83\x04\x0b\x19\x19\x02\x0f\x04\x63\x64\x72\x0c\x2a\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x73\x2a\x1a\x02\x1a\x0e\x03\x04\x05\x61"
  "\x73\x73\x76\x02\x94\x01\x0e\x81\x85\x02\x93\x01\x0c\x81\x85\x02"
  "\x92\x01\x0a\x81\x85\x02\x91\x01\x08\x81\x83\x02\x90\x01\x06\x81"
  "\x85\x02\x8f\x01\x04\x83\x04\x0d\x19\x1b\x02\x10\x04\x0f\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65\x63\x74\x1c\x02\x96\x01"
  "\x06\x81\x85\x02\x95\x01\x04\x84\x06\x05\x0d\x1d\x02\x11\x0e\x02"
  "\x99\x01\x08\x81\x85\x02\x98\x01\x06\x81\x83\x02\x97\x01\x04\x83"
  "\x04\x07\x0f\x1e\x02\x12\x9a\x01\x04\x83\x04\x03\x1f\x02\x13\x02"
  "\x9b\x01\x04\x84\x06\x03\x20\x02\x14\x9c\x01\x04\x83\x04\x03\x21"
  "\x02\x15\x02\x9d\x01\x04\x84\x06\x03\x22\x02\x16\x9e\x01\x04\x83"
  "\x04\x03\x23\x02\x17\x02\x9f\x01\x04\x84\x06\x03\x24\x02\x18\x12"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78"
  "\x74\x25\x11\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6c\x76\x61"
  "\x6c\x75\x65\x26\x10\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x73"
  "\x61\x66\x65\x3f\x27\x16\x17\x02\x04\x18\x02\xa6\x01\x10\x81\x87"
  "\x02\xa5\x01\x0e\x81\x87\x02\xa4\x01\x0c\x81\x85\x02\xa3\x01\x0a"
  "\x81\x83\x02\xa2\x01\x08\x81\x87\x02\xa1\x01\x06\x81\x87\x02\xa0"
  "\x01\x04\x83\x04\x0f\x21\x28\x02\x19\x02\xa8\x01\x06\x81\x87\x02"
  "\xa7\x01\x04\x85\x08\x05\x0a\x29\x02\x1a\x10\x04\x1c\x02\xab\x01"
  "\x08\x81\x85\x02\xaa\x01\x06\x81\x85\x02\xa9\x01\x04\x84\x06\x07"
  "\x10\x2a\x02\x1b\x02\xae\x01\x08\x81\x85\x02\xad\x01\x06\x81\x83"
  "\x02\xac\x01\x04\x83\x04\x07\x0f\x2b\x02\x1c\x03\x09\x02\xb0\x01"
  "\x06\x81\x83\x02\xaf\x01\x04\x83\x04\x05\x0d\x09\x02\x1d\x0c\xb2"
  "\x01\x06\x81\x83\x02\xb1\x01\x04\x83\x04\x05\x0b\x2c\x02\x1e\x0d"
  "\xb4\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04\x05\x0b\x2d\x02\x1f"
  "\x0a\xb6\x01\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x05\x0b\x2e\x02"
  "\x20\x04\x1c\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x2d\x6b"
  "\x6e\x6f\x77\x6e\x2d\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x3f\x02\xb9"
  "\x01\x08\x81\x85\x02\xb8\x01\x06\x81\x83\x02\xb7\x01\x04\x83\x04"
  "\x07\x10\x2f\x02\x21\xba\x01\x04\x83\x04\x03\x30\x02\x22\x02\xbb"
  "\x01\x04\x84\x06\x03\x31\x02\x23\xbc\x01\x04\x83\x04\x03\x32\x02"
  "\x24\x02\xbd\x01\x04\x84\x06\x03\x33\x02\x25\x18\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x2d\x63\x6f\x6e\x74"
  "\x65\x78\x74\x34\x17\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x74\x65\x73\x74\x2d\x6c\x76\x61\x6c\x75\x65\x35\x16\x17\x02\x04"
  "\x18\x02\xc3\x01\x0e\x81\x87\x02\xc2\x01\x0c\x81\x85\x02\xc1\x01"
  "\x0a\x81\x83\x02\xc0\x01\x08\x81\x87\x02\xbf\x01\x06\x81\x87\x02"
  "\xbe\x01\x04\x83\x04\x0d\x1d\x36\x02\x26\x14\x75\x6e\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x2d\x74\x61\x67\x37\x02"
  "\xc5\x01\x06\x81\x85\x02\xc4\x01\x04\x84\x06\x05\x0a\x38\x02\x27"
  "\x04\x1c\x02\xc7\x01\x06\x81\x85\x02\xc6\x01\x04\x84\x06\x05\x0d"
  "\x1c\x02\x28\x37\x02\xca\x01\x08\x81\x85\x02\xc9\x01\x06\x81\x83"
  "\x02\xc8\x01\x04\x83\x04\x07\x0f\x39\x02\x29\xcb\x01\x04\x83\x04"
  "\x03\x3a\x02\x2a\x02\xcc\x01\x04\x84\x06\x03\x3b\x02\x2b\xcd\x01"
  "\x04\x83\x04\x03\x3c\x02\x2c\x02\xce\x01\x04\x84\x06\x03\x3d\x02"
  "\x2d\xcf\x01\x04\x83\x04\x03\x3e\x02\x2e\x02\xd0\x01\x04\x84\x06"
  "\x03\x3f\x02\x2f\xd1\x01\x04\x83\x04\x03\x40\x02\x30\x02\xd2\x01"
  "\x04\x84\x06\x03\x41\x02\x31\xd3\x01\x04\x83\x04\x03\x42\x02\x32"
  "\x02\xd4\x01\x04\x84\x06\x03\x43\x02\x33\x11\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x44\x18\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x45\x16\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x65\x6e\x74\x72\x79\x2d\x65\x64\x67\x65\x46\x11\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6c\x61\x62\x65\x6c\x47\x1a\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x48\x16\x17\x02\x04\x18\x02\xdd"
  "\x01\x14\x81\x87\x02\xdc\x01\x12\x81\x87\x02\xdb\x01\x10\x81\x87"
  "\x02\xda\x01\x0e\x81\x87\x02\xd9\x01\x0c\x81\x85\x02\xd8\x01\x0a"
  "\x81\x83\x02\xd7\x01\x08\x81\x87\x02\xd6\x01\x06\x81\x87\x02\xd5"
  "\x01\x04\x83\x04\x13\x28\x18\x02\x34\x08\x0b\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x0e\x2a\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x73\x2a\x49\x02\x0f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x74\x61\x67\x4a\x49\x03\x05\x0d\x63\x72\x65\x61\x74\x65\x2d"
  "\x65\x64\x67\x65\x21\x03\x0f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d"
  "\x6c\x61\x62\x65\x6c\x03\xe5\x01\x12\x81\x89\x02\xe4\x01\x10\x81"
  "\x89\x02\xe3\x01\x0e\x81\x89\x02\xe2\x01\x0c\x81\x8b\x02\xe1\x01"
  "\x0a\x81\x89\x02\xe0\x01\x08\x81\x87\x02\xdf\x01\x06\x81\x89\x02"
  "\xde\x01\x04\x85\x08\x11\x23\x4b\x02\x35\x4a\x02\xe8\x01\x08\x81"
  "\x85\x02\xe7\x01\x06\x81\x83\x02\xe6\x01\x04\x83\x04\x07\x0f\x4c"
  "\x02\x36\x03\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f"
  "\x64\x65\x02\xea\x01\x06\x81\x83\x02\xe9\x01\x04\x83\x04\x05\x0d"
  "\x36\x04\x4c\x04\x4b\x04\x16\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x13\x72\x76\x61"
  "\x6c\x75\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x10"
  "\x6d\x61\x6b\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x49"
  "\x18\x04\x0c\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x1f\x73"
  "\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x64\x65"
  "\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x21\x48\x16\x73"
  "\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6c\x61"
  "\x62\x65\x6c\x21\x47\x1b\x73\x65\x74\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x2d\x65\x64\x67\x65\x21"
  "\x46\x1d\x73\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x21\x45\x16"
  "\x73\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x62"
  "\x6c\x6f\x63\x6b\x21\x44\x0b\x43\x04\x42\x04\x41\x04\x40\x04\x3f"
  "\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04\x0b\x4a\x18\x72\x76"
  "\x61\x6c\x75\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x74\x65\x73\x74\x3f\x39\x04\x1c\x04\x15\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x38\x04"
  "\x36\x04\x11\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74\x65"
  "\x73\x74\x3f\x1c\x73\x65\x74\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e"
  "\x65\x64\x2d\x74\x65\x73\x74\x2d\x6c\x76\x61\x6c\x75\x65\x21\x35"
  "\x1d\x73\x65\x74\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d"
  "\x74\x65\x73\x74\x2d\x63\x6f\x6e\x74\x65\x78\x74\x21\x34\x33\x04"
  "\x32\x04\x31\x04\x30\x04\x37\x1d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x74\x6f\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6c\x6f\x63\x61\x74"
  "\x69\x6f\x6e\x3f\x16\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6b"
  "\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x16\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f"
  "\x15\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x70\x61\x73\x73\x65"
  "\x64\x2d\x69\x6e\x3f\x11\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x76\x61\x6c\x75\x65\x73\x12\x72\x76\x61\x6c\x75\x65\x2f\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x3f\x2f\x04\x2e\x04\x2d\x04\x2c\x04"
  "\x09\x04\x2b\x04\x2a\x04\x0f\x6d\x61\x6b\x65\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x29\x04\x28\x04\x0b\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x3f\x15\x73\x65\x74\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x73\x61\x66\x65\x3f\x21\x27\x16\x73\x65\x74\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x6c\x76\x61\x6c\x75\x65\x21"
  "\x26\x17\x73\x65\x74\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x21\x25\x24\x04\x23\x04\x22\x04\x21"
  "\x04\x20\x04\x1f\x04\x11\x72\x76\x61\x6c\x75\x65\x2f\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x3f\x1e\x04\x1d\x04\x0e\x6d\x61\x6b\x65\x2d"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1a\x1b\x04\x19\x04\x0a\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x3f\x14\x73\x65\x74\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x2d\x76\x61\x6c\x75\x65\x21\x15\x14\x04\x13\x04"
  "\x0e\x1c\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x09\x72\x76"
  "\x61\x6c\x75\x65\x3d\x3f\x16\x72\x76\x61\x6c\x75\x65\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x2d\x76\x61\x6c\x75\x65\x17\x72\x76\x61"
  "\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x3f\x0f\x13\x72\x76\x61\x6c\x75\x65\x2d\x70\x61\x73\x73"
  "\x65\x64\x2d\x6f\x75\x74\x3f\x12\x72\x76\x61\x6c\x75\x65\x2d\x70"
  "\x61\x73\x73\x65\x64\x2d\x69\x6e\x3f\x0e\x72\x76\x61\x6c\x75\x65"
  "\x2d\x76\x61\x6c\x75\x65\x73\x12\x04\x11\x04\x10\x04\x0d\x04\x0c"
  "\x04\x0b\x04\x0a\x04\x16\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70"
  "\x65\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x10\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x4c\x16\x72\x76\x61"
  "\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x0a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x4b\x17\x72\x76"
  "\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x49\x15"
  "\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x12\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65"
  "\x2f\x62\x6c\x6f\x63\x6b\x16\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x48\x0d\x72\x76\x61\x6c\x75\x65\x2d\x74\x79\x70\x65\x73\x47\x06"
  "\x62\x6c\x6f\x63\x6b\x46\x46\x48\x49\x4b\x4c\x0d\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x73\x65\x74\x21\x04\x08\x72\x76\x61\x6c\x75\x65"
  "\x3f\x19\x73\x65\x74\x2d\x72\x76\x61\x6c\x75\x65\x2d\x25\x70\x61"
  "\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x21\x04\x04\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17\x07\x72"
  "\x76\x61\x6c\x75\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x17\x47\x0e\x37\x4a\x07\x05\x10\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x03\x21"
  "\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x73\x75"
  "\x62\x63\x6c\x61\x73\x73\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65"
  "\x03\x11\x6d\x61\x6b\x65\x2d\x65\x6e\x75\x6d\x65\x72\x61\x74\x69"
  "\x6f\x6e\x04\x1c\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x6e\x61\x6d\x65\x2d\x3e\x65\x6e\x75\x6d\x65\x72\x61\x6e\x64\x03"
  "\x18\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x2f\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x03\x0f\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x3e\x73\x74\x72\x69\x6e\x67\x04\x1b\x64\x65\x66\x69\x6e\x65"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x74\x61\x67\x2d\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x04\x12\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x09\x60\xc2\x01\x80\x80\x04\x5f\xc0"
  "\x01\x81\x81\x02\x5e\xbe\x01\x81\x81\x02\x5d\xbc\x01\x81\x83\x02"
  "\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01\x81"
  "\x85\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x85\x02\x57\xb0"
  "\x01\x81\x87\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x8b\x02"
  "\x54\xaa\x01\x81\x87\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01\x81"
  "\x89\x02\x51\xa4\x01\x81\x87\x02\x50\xa2\x01\x81\x85\x02\x4f\xa0"
  "\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x83\x02"
  "\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81"
  "\x85\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x85\x02\x47\x90"
  "\x01\x81\x87\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x8b\x02"
  "\x44\x8a\x01\x81\x87\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01\x81"
  "\x89\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01\x81\x85\x02\x3f\x80"
  "\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83\x02\x3c\x7a"
  "\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x85\x02\x39\x74\x81"
  "\x83\x02\x38\x72\x81\x85\x02\x37\x70\x81\x87\x02\x36\x6e\x81\x83"
  "\x02\x35\x6c\x81\x8b\x02\x34\x6a\x81\x87\x02\x33\x68\x81\x83\x02"
  "\x32\x66\x81\x89\x02\x31\x64\x81\x87\x02\x30\x62\x81\x85\x02\x2f"
  "\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a"
  "\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x85\x02\x29\x54\x81"
  "\x83\x02\x28\x52\x81\x85\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x83"
  "\x02\x25\x4c\x81\x8b\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x83\x02"
  "\x22\x46\x81\x85\x02\x21\x44\x81\x85\x02\x20\x42\x81\x83\x02\x1f"
  "\x40\x81\x85\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x89\x02\x1c\x3a"
  "\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x85\x02\x19\x34\x81"
  "\x89\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x85"
  "\x02\x15\x2c\x81\x89\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02"
  "\x12\x26\x81\x85\x02\x11\x24\x81\x89\x02\x10\x22\x81\x83\x02\x0f"
  "\x20\x81\x85\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x89\x02\x0c\x1a"
  "\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x89\x02\x09\x14\x81"
  "\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83"
  "\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02"
  "\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\xc1\x01\xa1\x02";

SCHEME_OBJECT *
rvalue_so_data_7f3d8ce0df9a61b7 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rvalue_so_data_7f3d8ce0df9a61b7 [0]))), (sizeof (prog_rvalue_so_data_7f3d8ce0df9a61b7)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_108]));
}

DECLARE_COMPILED_DATA_NS ("rvalue.so", rvalue_so_data_7f3d8ce0df9a61b7)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rvalue.so", "03b123558ace0813")
