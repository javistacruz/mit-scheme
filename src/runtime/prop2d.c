/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_6 9
#define LABEL_1_9 11
#define LABEL_1_11 13
#define LABEL_1_10 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define ENVIRONMENT_LABEL_1_3 35
#define DEBUGGING_LABEL_1_2 34
#define OBJECT_1_0 33
#define EXECUTE_CACHE_1_14 21
#define EXECUTE_CACHE_1_8 23
#define FREE_REFERENCE_1_2 26
#define FREE_REFERENCE_1_1 27
#define FREE_REFERENCE_1_0 28
#define FREE_ASSIGNMENT_1_2 30
#define FREE_ASSIGNMENT_1_1 31
#define FREE_ASSIGNMENT_1_0 32
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_11)
DEFLABEL (initialize_packageB_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_24)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_23;
  Wrd20 = Wrd24;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_18;
  Wrd21 = Wrd25;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_14)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_13;
  Wrd18 = Wrd22;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd19.pObj));

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd22.pObj));

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_6)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd21.pObj));

DEFLABEL (label_5)
  (Wrd20.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_4)
  goto label_24;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_8 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_15 19
#define LABEL_2_14 21
#define LABEL_2_16 23
#define ENVIRONMENT_LABEL_2_3 38
#define DEBUGGING_LABEL_2_2 37
#define OBJECT_2_3 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_10 25
#define EXECUTE_CACHE_2_6 27
#define FREE_REFERENCE_2_0 30
#define FREE_ASSIGNMENT_2_0 32
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z_2d_putB_17;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_2d_putB_26)
DEFLABEL (Z_2d_putB_17)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [5]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_28;

DEFLABEL (label_27)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_28)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_32;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_31)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [6]) = (Wrd31.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_27;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = (Rsp [1]);
  ((Wrd36.pObj) [1]) = (Wrd37.Obj);
  goto label_29;

DEFLABEL (label_32)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_24)
  (Wrd17.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_43;
  Wrd21 = Wrd25;

DEFLABEL (label_42)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd35.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Rsp [5]) = (Wrd40.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  Wrd43 = Wrd47;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd63.Obj) = ((Wrd55.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd55.pObj) [0]) = (Wrd56.Obj);

DEFLABEL (label_36)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd63.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_13])), (Wrd55.pObj), (Wrd56.Obj));

DEFLABEL (label_23)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_12])), (Wrd44.pObj));

DEFLABEL (label_22)
  (Wrd43.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd22.pObj));

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_10 9
#define LABEL_3_7 11
#define LABEL_3_9 13
#define LABEL_3_11 15
#define ENVIRONMENT_LABEL_3_3 25
#define DEBUGGING_LABEL_3_2 24
#define OBJECT_3_0 23
#define EXECUTE_CACHE_3_12 17
#define EXECUTE_CACHE_3_8 19
#define FREE_REFERENCE_3_0 22
#define FREE_REFERENCES_LABEL_3_0 16
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_3_4);
      goto Z_2d_get_7;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_2d_get_12)
DEFLABEL (Z_2d_get_7)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_14)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_18)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_10 9
#define LABEL_4_7 11
#define LABEL_4_13 13
#define LABEL_4_14 15
#define LABEL_4_9 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define LABEL_4_17 23
#define LABEL_4_11 25
#define LABEL_4_18 27
#define ENVIRONMENT_LABEL_4_3 44
#define DEBUGGING_LABEL_4_2 43
#define OBJECT_4_3 42
#define OBJECT_4_2 41
#define OBJECT_4_1 40
#define OBJECT_4_0 39
#define EXECUTE_CACHE_4_19 29
#define EXECUTE_CACHE_4_12 31
#define EXECUTE_CACHE_4_8 33
#define FREE_REFERENCE_4_0 36
#define FREE_ASSIGNMENT_4_0 38
#define FREE_REFERENCES_LABEL_4_0 28
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_4);
      goto Z_2d_removeB_11;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_4_17);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_2d_removeB_20)
DEFLABEL (Z_2d_removeB_11)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_32)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_31;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  ((Wrd32.pObj) [1]) = Rvl;

DEFLABEL (label_30)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_28)
  if ((Wrd6.Obj) == (current_block [OBJECT_4_2]))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_4_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_27;
  Wrd21 = Wrd25;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd41.pObj) [0]) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_14])), (Wrd41.pObj), Rvl);

DEFLABEL (label_18)
  goto label_22;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_17])), (Wrd22.pObj));

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_17)
  goto label_30;

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define EXECUTE_CACHE_5_7 13
#define FREE_REFERENCE_5_0 16
#define FREE_ASSIGNMENT_5_0 18
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto gc_system_propertiesB_3;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_system_propertiesB_9)
DEFLABEL (gc_system_propertiesB_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_9])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_8])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_9 9
#define LABEL_6_8 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define ENVIRONMENT_LABEL_6_3 27
#define DEBUGGING_LABEL_6_2 26
#define OBJECT_6_4 25
#define OBJECT_6_3 24
#define OBJECT_6_2 23
#define OBJECT_6_1 22
#define OBJECT_6_0 21
#define EXECUTE_CACHE_6_10 17
#define EXECUTE_CACHE_6_7 19
#define FREE_REFERENCES_LABEL_6_0 16
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_6_4);
      goto filter_bucketB_8;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_bucketB_15)
DEFLABEL (filter_bucketB_8)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_17)
  (Wrd24.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_16)
DEFLABEL (label_28)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_27;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  ((Wrd20.pObj) [1]) = Rvl;

DEFLABEL (label_24)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_22)
  if ((Wrd6.Obj) == (current_block [OBJECT_6_4]))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_6_1]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 2);

DEFLABEL (label_13)
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_1 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 9
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto filter_entryB_2;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filter_entryB_6)
DEFLABEL (filter_entryB_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_7_1]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_9 9
#define LABEL_8_7 11
#define LABEL_8_11 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define LABEL_8_12 19
#define LABEL_8_16 21
#define LABEL_8_18 23
#define LABEL_8_17 25
#define LABEL_8_19 27
#define LABEL_8_20 29
#define LABEL_8_22 31
#define LABEL_8_23 33
#define LABEL_8_21 35
#define ENVIRONMENT_LABEL_8_3 51
#define DEBUGGING_LABEL_8_2 50
#define OBJECT_8_2 49
#define OBJECT_8_1 48
#define OBJECT_8_0 47
#define EXECUTE_CACHE_8_24 37
#define EXECUTE_CACHE_8_15 39
#define EXECUTE_CACHE_8_10 41
#define EXECUTE_CACHE_8_8 43
#define FREE_REFERENCE_8_0 46
#define FREE_REFERENCES_LABEL_8_0 36
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_8_4);
      goto Z_2d_get_alist_x_20;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto loop_17;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_8_18);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_8_19);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_8_20);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_8_23);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_8_21);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_2d_get_alist_x_33)
DEFLABEL (Z_2d_get_alist_x_20)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_37;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_17;

DEFLABEL (label_37)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (loop_34)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_8_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_40;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_49;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_48)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_47;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_41)
  goto loop_17;

DEFLABEL (label_42)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_45;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd19.Obj);
  goto label_41;

DEFLABEL (label_45)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_27)
  (Wrd19.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_56)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_55;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_54)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_53;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_52)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_51;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_30)
  (Wrd24.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define LABEL_9_9 15
#define LABEL_9_13 17
#define LABEL_9_15 19
#define LABEL_9_16 21
#define LABEL_9_14 23
#define LABEL_9_18 25
#define LABEL_9_20 27
#define LABEL_9_19 29
#define LABEL_9_21 31
#define LABEL_9_23 33
#define LABEL_9_24 35
#define LABEL_9_22 37
#define ENVIRONMENT_LABEL_9_3 53
#define DEBUGGING_LABEL_9_2 52
#define OBJECT_9_2 51
#define OBJECT_9_1 50
#define OBJECT_9_0 49
#define EXECUTE_CACHE_9_25 39
#define EXECUTE_CACHE_9_17 41
#define EXECUTE_CACHE_9_12 43
#define EXECUTE_CACHE_9_6 45
#define FREE_REFERENCE_9_0 48
#define FREE_REFERENCES_LABEL_9_0 38
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prop2d_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd46;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto Z_2d_get_alist_y_22;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto loop_19;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_9_18);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_9_21);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_9_23);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_9_24);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_9_22);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z_2d_get_alist_y_36)
DEFLABEL (Z_2d_get_alist_y_22)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;
  Wrd8 = Wrd12;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [3]));
  goto loop_19;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_38;

DEFLABEL (loop_37)
DEFLABEL (loop_19)
  DLINK_INTERRUPT_CHECK (25, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_40;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_40)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_61)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_60;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_59)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_54)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_53;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_52)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_48;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_47)
  Rdl = (& (Rsp [2]));
  goto loop_19;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_46;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_45)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_44;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_43)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_42;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_42)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_24]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_34)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_33)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_32)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_30)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_51;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_50)
  (Wrd49.pObj) = (& (Rsp [5]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd49.pObj) <= Rdl) ? (Wrd49.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto loop_19;

DEFLABEL (label_51)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_31)
  (Wrd41.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd41.Obj));
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_28)
  (Wrd30.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd30.Obj));
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_27)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd14.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_58;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd41.Obj);
  goto loop_19;

DEFLABEL (label_58)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_29)
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd41.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_26)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_25)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_61;

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
prop2d_so_89a594ca1ed2fb06 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	1,
	1,
	3,
	3,
	2,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

static const struct liarc_code_S arr_decl_prop2d_so_89a594ca1ed2fb06 [9] =
  {
    { "prop2d_so_code_1", 9, prop2d_so_code_1 },
    { "prop2d_so_code_2", 11, prop2d_so_code_2 },
    { "prop2d_so_code_3", 7, prop2d_so_code_3 },
    { "prop2d_so_code_4", 13, prop2d_so_code_4 },
    { "prop2d_so_code_5", 5, prop2d_so_code_5 },
    { "prop2d_so_code_6", 7, prop2d_so_code_6 },
    { "prop2d_so_code_7", 3, prop2d_so_code_7 },
    { "prop2d_so_code_8", 17, prop2d_so_code_8 },
    { "prop2d_so_code_9", 18, prop2d_so_code_9 }
  };

int
decl_prop2d_so_89a594ca1ed2fb06 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_prop2d_so_89a594ca1ed2fb06);
  return (0);
}

DECLARE_COMPILED_CODE ("prop2d.so", 3, decl_prop2d_so_89a594ca1ed2fb06, prop2d_so_89a594ca1ed2fb06)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_prop2d_so_data_89a594ca1ed2fb06 [1445] =
  "\x41\x16\xa4\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d\xb9\x0d"
  "\xba\x0d\xbb\x25\x0d\xbc\x0d\xbd\x0d\xbe\x24\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\xc2\x1c\x1d\xc1\x1c\x08"
  "\xb1\x25\xb1\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\xb1\x24\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x07\x08\x1b\x1b\xb1\x25\xb1\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb1\x25\xb1\x24\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x08\x1b\x1b\x07\xc1\x1c\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\xb1\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x08\xb1\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1e\x1e\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\xb7\x2a\x17\x0d"
  "\x0d\xb3\xb2\xb5\xb4\xb6\x0d\x0d\x0d\xb1\x0d\x17\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x70\x72\x6f\x70\x32\x64\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x12\x73\x79\x73\x74\x65\x6d\x2d\x70\x72\x6f\x70\x65"
  "\x72\x74\x69\x65\x73\x1d\x64\x65\x6c\x65\x74\x65\x2d\x69\x6e\x76"
  "\x61\x6c\x69\x64\x2d\x68\x61\x73\x68\x2d\x6e\x75\x6d\x62\x65\x72"
  "\x73\x21\x12\x64\x65\x6c\x65\x74\x65\x2d\x69\x6e\x76\x61\x6c\x69"
  "\x64\x2d\x79\x21\x04\x0f\x66\x69\x6c\x74\x65\x72\x2d\x62\x75\x63"
  "\x6b\x65\x74\x21\x0e\x66\x69\x6c\x74\x65\x72\x2d\x65\x6e\x74\x72"
  "\x79\x21\x16\x67\x63\x2d\x73\x79\x73\x74\x65\x6d\x2d\x70\x72\x6f"
  "\x70\x65\x72\x74\x69\x65\x73\x21\x04\x03\x0e\x6c\x69\x73\x74\x2d"
  "\x64\x65\x6c\x65\x74\x6f\x72\x21\x03\x19\x61\x64\x64\x2d\x73\x65"
  "\x63\x6f\x6e\x64\x61\x72\x79\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f"
  "\x6e\x21\x03\x0c\x14\x81\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81"
  "\x81\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x81\x02\x07\x0a\x81\x81"
  "\x02\x06\x08\x81\x83\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x13"
  "\x24\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x09\x02\x04\x63\x64"
  "\x72\x0a\x02\x02\x03\x0c\x6f\x62\x6a\x65\x63\x74\x2d\x68\x61\x73"
  "\x68\x0b\x04\x05\x61\x73\x73\x71\x0c\x03\x17\x18\x81\x8f\x02\x16"
  "\x16\x81\x8d\x02\x15\x14\x81\x8f\x02\x14\x12\x81\x85\x02\x13\x10"
  "\x81\x83\x02\x12\x0e\x81\x8d\x02\x11\x0c\x81\x8b\x02\x10\x0a\x81"
  "\x8d\x02\x0f\x08\x81\x89\x02\x0e\x06\x81\x87\x02\x0d\x04\x85\x08"
  "\x17\x27\x0d\x02\x0a\x02\x03\x0b\x04\x0c\x03\x1e\x10\x81\x8b\x02"
  "\x1d\x0e\x81\x87\x02\x1c\x0c\x81\x89\x02\x1b\x0a\x81\x89\x02\x1a"
  "\x08\x81\x85\x02\x19\x06\x81\x87\x02\x18\x04\x84\x06\x0f\x1a\x0e"
  "\x02\x09\x0a\x02\x02\x03\x0b\x04\x0c\x04\x0a\x64\x65\x6c\x2d\x61"
  "\x73\x73\x71\x21\x04\x2b\x1c\x81\x8b\x02\x2a\x1a\x81\x8b\x02\x29"
  "\x18\x81\x89\x02\x28\x16\x81\x87\x02\x27\x14\x81\x87\x02\x26\x12"
  "\x81\x87\x02\x25\x10\x81\x87\x02\x24\x0e\x81\x87\x02\x23\x0c\x81"
  "\x89\x02\x22\x0a\x81\x89\x02\x21\x08\x81\x85\x02\x20\x06\x81\x87"
  "\x02\x1f\x04\x84\x06\x1b\x2d\x0f\x02\x02\x02\x03\x02\x30\x0c\x81"
  "\x85\x02\x2f\x0a\x81\x83\x02\x2e\x08\x81\x81\x02\x2d\x06\x81\x83"
  "\x02\x2c\x04\x82\x02\x0b\x15\x10\x02\x09\x0a\x04\x63\x61\x72\x09"
  "\x03\x13\x76\x61\x6c\x69\x64\x2d\x68\x61\x73\x68\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x3f\x11\x03\x03\x37\x10\x81\x85\x02\x36\x0e\x81\x85"
  "\x02\x35\x0c\x81\x85\x02\x34\x0a\x81\x87\x02\x33\x08\x81\x83\x02"
  "\x32\x06\x81\x85\x02\x31\x04\x83\x04\x0f\x1c\x12\x02\x08\x09\x03"
  "\x11\x02\x3a\x08\x81\x83\x02\x39\x06\x81\x85\x02\x38\x04\x83\x04"
  "\x07\x0f\x13\x02\x09\x09\x0a\x02\x03\x0b\x04\x0c\x03\x11\x03\x0e"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x75\x6e\x68\x61\x73\x68\x14\x05\x4b"
  "\x24\x81\x87\x02\x4a\x22\x81\x89\x02\x49\x20\x81\x89\x02\x48\x1e"
  "\x81\x85\x02\x47\x1c\x81\x85\x02\x46\x1a\x81\x83\x02\x45\x18\x81"
  "\x85\x02\x44\x16\x81\x83\x02\x43\x14\x81\x83\x02\x42\x12\x81\x85"
  "\x02\x41\x10\x81\x85\x02\x40\x0e\x81\x83\x02\x3f\x0c\x81\x87\x02"
  "\x3e\x0a\x81\x83\x02\x3d\x08\x81\x83\x02\x3c\x06\x81\x85\x02\x3b"
  "\x04\x83\x04\x23\x34\x15\x02\x0a\x0a\x09\x02\x03\x0b\x03\x11\x04"
  "\x0c\x03\x14\x05\x5d\x26\xfd\xff\x03\x5c\x24\xfd\xff\x03\x5b\x22"
  "\xfd\xff\x03\x5a\x20\xfd\xff\x03\x59\x1e\xfd\xff\x03\x58\x1c\xfd"
  "\xff\x03\x57\x1a\xfd\xff\x03\x56\x18\xfd\xff\x03\x55\x16\xfd\xff"
  "\x03\x54\x14\xfd\xff\x03\x53\x12\xfd\xff\x03\x52\x10\xfd\xff\x03"
  "\x51\x0e\xfd\xff\x03\x50\x0c\xfd\xff\x03\x4f\x0a\xff\xff\x03\x4e"
  "\x08\x81\x85\x02\x4d\x06\x81\x83\x02\x4c\x04\x83\x04\x25\x36\x14"
  "\x0a\x11\x11\x14\x04\x15\x04\x13\x04\x12\x04\x10\x04\x0f\x04\x0e"
  "\x04\x0d\x04\x04\x0d\x0f\x32\x64\x2d\x67\x65\x74\x2d\x61\x6c\x69"
  "\x73\x74\x2d\x79\x0f\x32\x64\x2d\x67\x65\x74\x2d\x61\x6c\x69\x73"
  "\x74\x2d\x78\x0b\x32\x64\x2d\x72\x65\x6d\x6f\x76\x65\x21\x07\x32"
  "\x64\x2d\x67\x65\x74\x08\x32\x64\x2d\x70\x75\x74\x21\x14\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65"
  "\x21\x0d\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
prop2d_so_data_89a594ca1ed2fb06 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_prop2d_so_data_89a594ca1ed2fb06 [0]))), (sizeof (prog_prop2d_so_data_89a594ca1ed2fb06)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("prop2d.so", prop2d_so_data_89a594ca1ed2fb06)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("prop2d.so", "ea76f5888e8b71de")
