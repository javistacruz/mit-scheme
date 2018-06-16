/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:29-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_9 7
#define LABEL_1_6 9
#define TAG_1_7 3
#define LABEL_1_10 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_18 25
#define LABEL_1_19 27
#define ENVIRONMENT_LABEL_1_3 41
#define DEBUGGING_LABEL_1_2 40
#define OBJECT_1_2 39
#define OBJECT_1_1 38
#define OBJECT_1_0 37
#define EXECUTE_CACHE_1_20 29
#define EXECUTE_CACHE_1_14 31
#define EXECUTE_CACHE_1_8 33
#define FREE_REFERENCE_1_0 36
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd83;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd54;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_command_set_13;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_26;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_command_set_25)
DEFLABEL (make_command_set_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_1_6);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_46;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_45)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_44;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_43)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_41)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_40;
  Wrd37 = Wrd41;

DEFLABEL (label_39)
  (Wrd43.Obj) = (* (Rsp++));
  if (! ((Wrd37.Obj) == (Wrd43.Obj)))
    goto label_34;
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [2]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd54.Obj) = Rvl;

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_32;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_31)
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_30;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd70.Obj) = ((Wrd71.pObj) [1]);

DEFLABEL (label_29)
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd79.uLng) == 1))
    goto label_28;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd77.Obj) = ((Wrd78.pObj) [0]);

DEFLABEL (label_27)
  (Rsp [3]) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (label_28)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_23)
  (Wrd77.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_22)
  (Wrd70.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_21)
  (Wrd61.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_38;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_37)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_36;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  goto label_33;

DEFLABEL (label_36)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_20)
  (Wrd54.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_19)
  (Wrd44.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd38.pObj));

DEFLABEL (label_18)
  (Wrd37.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_15 23
#define ENVIRONMENT_LABEL_2_3 35
#define DEBUGGING_LABEL_2_2 34
#define OBJECT_2_4 33
#define OBJECT_2_3 32
#define OBJECT_2_2 31
#define OBJECT_2_1 30
#define OBJECT_2_0 29
#define EXECUTE_CACHE_2_16 25
#define EXECUTE_CACHE_2_7 27
#define FREE_REFERENCES_LABEL_2_0 24
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_2_4);
      goto define_letter_command_20;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto loop_15;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_2_15);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_letter_command_30)
DEFLABEL (define_letter_command_20)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd25.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd25.Obj);
  goto loop_15;

DEFLABEL (label_32)
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [4]) = (Wrd12.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_33;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [1]) = (Wrd20.Obj);
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (loop_31)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_2_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_50;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_49)
  if ((Wrd5.Obj) == (current_block [OBJECT_2_1]))
    goto label_39;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_48;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_47)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_46;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_45)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_44;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_43)
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_39)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_38;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_37)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Wrd59.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Rsp [4]) = (Wrd64.Obj);
  (Wrd67.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd67.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_36;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = (Rsp [1]);
  ((Wrd70.pObj) [1]) = (Wrd71.Obj);
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 2);

DEFLABEL (label_38)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_27)
  (Wrd42.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_42;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd78.Obj);
  goto loop_15;

DEFLABEL (label_42)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_28)
  (Wrd78.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_25)
  (Wrd27.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_24)
  (Wrd18.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCE_3_0 14
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto letter_commands_2;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (letter_commands_6)
DEFLABEL (letter_commands_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.pObj) = (& (Rhp [-4]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_8;
  Wrd18 = Wrd22;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd19.pObj));

DEFLABEL (label_4)
  (Wrd18.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define TAG_4_7 2
#define LABEL_4_10 9
#define LABEL_4_16 11
#define LABEL_4_12 13
#define TAG_4_13 5
#define LABEL_4_14 15
#define TAG_4_15 6
#define LABEL_4_18 17
#define LABEL_4_20 19
#define LABEL_4_24 21
#define LABEL_4_25 23
#define LABEL_4_26 25
#define LABEL_4_22 27
#define LABEL_4_29 29
#define LABEL_4_31 31
#define LABEL_4_27 33
#define LABEL_4_30 35
#define LABEL_4_38 37
#define LABEL_4_39 39
#define LABEL_4_32 41
#define LABEL_4_33 43
#define LABEL_4_35 45
#define LABEL_4_37 47
#define LABEL_4_42 49
#define LABEL_4_44 51
#define ENVIRONMENT_LABEL_4_3 93
#define DEBUGGING_LABEL_4_2 92
#define OBJECT_4_10 91
#define OBJECT_4_9 90
#define OBJECT_4_8 89
#define OBJECT_4_7 88
#define OBJECT_4_6 87
#define OBJECT_4_5 86
#define OBJECT_4_4 85
#define OBJECT_4_3 84
#define OBJECT_4_2 83
#define OBJECT_4_1 82
#define OBJECT_4_0 81
#define EXECUTE_CACHE_4_43 53
#define EXECUTE_CACHE_4_41 55
#define EXECUTE_CACHE_4_40 57
#define EXECUTE_CACHE_4_36 59
#define EXECUTE_CACHE_4_34 61
#define EXECUTE_CACHE_4_28 63
#define EXECUTE_CACHE_4_23 65
#define EXECUTE_CACHE_4_21 67
#define EXECUTE_CACHE_4_19 69
#define EXECUTE_CACHE_4_17 71
#define EXECUTE_CACHE_4_11 73
#define EXECUTE_CACHE_4_9 75
#define EXECUTE_CACHE_4_8 77
#define FREE_REFERENCE_4_0 80
#define FREE_REFERENCES_LABEL_4_0 52
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
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
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto letter_commands_driver_31;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_30;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_42;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_4_16);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_43;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto lambda_44;

    case 7:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_4_24);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_4_25);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_4_26);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_4_29);
      goto loop_23;

    case 14:
      current_block = (Rpc - LABEL_4_31);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_4_27);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_4_38);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_4_39);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_4_37);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_4_42);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_4_44);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (letter_commands_driver_41)
DEFLABEL (letter_commands_driver_31)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_4_5);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_4_6);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_12])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  ((Wrd9.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_14])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  ((Wrd16.pObj) [3]) = Rvl;
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_47;
  Wrd21 = Wrd25;

DEFLABEL (label_46)
  (Wrd30.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd31.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_16])), (Wrd22.pObj));

DEFLABEL (label_33)
  (Wrd21.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_4_12);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_9]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_4_14);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_51;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_51;
  (Wrd23.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_50)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_49;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_49;
  (Wrd37.Obj) = ((Wrd43.pObj) [3]);

DEFLABEL (label_48)
  (Rsp [2]) = (Wrd37.Obj);
  goto loop_23;

DEFLABEL (label_49)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_4_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_36)
  (Wrd37.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (loop_45)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_4_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_60;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_59)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_4_7]);
  (Wrd30.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_41]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_40]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_37]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_43]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_44);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_54)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_58;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_57)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_56;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_55)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [3]);
  (Rsp [4]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_56)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_8]), 1);

DEFLABEL (label_39)
  (Wrd16.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_38]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_38)
  (Wrd7.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_8 7
#define LABEL_5_7 9
#define LABEL_5_9 11
#define TAG_5_10 4
#define LABEL_5_12 13
#define LABEL_5_14 15
#define LABEL_5_17 17
#define LABEL_5_16 19
#define LABEL_5_19 21
#define LABEL_5_20 23
#define LABEL_5_21 25
#define LABEL_5_22 27
#define ENVIRONMENT_LABEL_5_3 42
#define DEBUGGING_LABEL_5_2 41
#define OBJECT_5_3 40
#define OBJECT_5_2 39
#define OBJECT_5_1 38
#define OBJECT_5_0 37
#define EXECUTE_CACHE_5_18 29
#define EXECUTE_CACHE_5_15 31
#define EXECUTE_CACHE_5_13 33
#define EXECUTE_CACHE_5_11 35
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5_4);
      goto standard_help_command_12;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_22;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_5_17);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_5_20);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_5_21);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_help_command_20)
DEFLABEL (standard_help_command_12)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_7);
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_32;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_29)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_27)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_26;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd31.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_26)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_6_4);
      goto standard_exit_command_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_exit_command_4)
DEFLABEL (standard_exit_command_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define ENVIRONMENT_LABEL_7_3 14
#define DEBUGGING_LABEL_7_2 13
#define OBJECT_7_0 12
#define FREE_REFERENCE_7_0 9
#define FREE_ASSIGNMENT_7_0 11
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_7_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_5)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_7_0]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_3)
  goto label_6;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto leaving_command_loop_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (leaving_command_loop_3)
DEFLABEL (leaving_command_loop_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto default_leaving_command_loop_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_leaving_command_loop_3)
DEFLABEL (default_leaving_command_loop_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_8 7
#define TAG_10_9 2
#define LABEL_10_10 9
#define TAG_10_11 3
#define LABEL_10_13 11
#define LABEL_10_15 13
#define LABEL_10_19 15
#define LABEL_10_16 17
#define LABEL_10_18 19
#define LABEL_10_21 21
#define ENVIRONMENT_LABEL_10_3 43
#define DEBUGGING_LABEL_10_2 42
#define OBJECT_10_4 41
#define OBJECT_10_3 40
#define OBJECT_10_2 39
#define OBJECT_10_1 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_22 23
#define EXECUTE_CACHE_10_20 25
#define EXECUTE_CACHE_10_17 27
#define EXECUTE_CACHE_10_14 29
#define EXECUTE_CACHE_10_12 31
#define EXECUTE_CACHE_10_7 33
#define FREE_REFERENCE_10_0 36
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_4);
      goto debug_read_eval_print_8;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10_19);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_10_16);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_read_eval_print_12)
DEFLABEL (debug_read_eval_print_8)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd23 = Wrd14;
  (Wrd26.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  ((Wrd23.pObj) [3]) = (Wrd10.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [4]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_10_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Wrd5.Obj) = (current_block [OBJECT_10_2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_19])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_8 7
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_11_4);
      goto debug_eval_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_eval_4)
DEFLABEL (debug_eval_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define ENVIRONMENT_LABEL_12_3 12
#define DEBUGGING_LABEL_12_2 11
#define EXECUTE_CACHE_12_8 7
#define EXECUTE_CACHE_12_7 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto debug_scode_eval_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_scode_eval_4)
DEFLABEL (debug_scode_eval_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define ENVIRONMENT_LABEL_13_3 12
#define DEBUGGING_LABEL_13_2 11
#define EXECUTE_CACHE_13_8 7
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dbgcmd_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_13_4);
      goto debug_where_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_where_4)
DEFLABEL (debug_where_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

INVOKE_INTERFACE_TARGET_0
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
dbgcmd_so_5bc2bab23f4298b1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	2,
	0,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
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

static const struct liarc_code_S arr_decl_dbgcmd_so_5bc2bab23f4298b1 [13] =
  {
    { "dbgcmd_so_code_1", 13, dbgcmd_so_code_1 },
    { "dbgcmd_so_code_2", 11, dbgcmd_so_code_2 },
    { "dbgcmd_so_code_3", 3, dbgcmd_so_code_3 },
    { "dbgcmd_so_code_4", 25, dbgcmd_so_code_4 },
    { "dbgcmd_so_code_5", 13, dbgcmd_so_code_5 },
    { "dbgcmd_so_code_6", 2, dbgcmd_so_code_6 },
    { "dbgcmd_so_code_7", 3, dbgcmd_so_code_7 },
    { "dbgcmd_so_code_8", 1, dbgcmd_so_code_8 },
    { "dbgcmd_so_code_9", 1, dbgcmd_so_code_9 },
    { "dbgcmd_so_code_10", 10, dbgcmd_so_code_10 },
    { "dbgcmd_so_code_11", 2, dbgcmd_so_code_11 },
    { "dbgcmd_so_code_12", 2, dbgcmd_so_code_12 },
    { "dbgcmd_so_code_13", 2, dbgcmd_so_code_13 }
  };

int
decl_dbgcmd_so_5bc2bab23f4298b1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dbgcmd_so_5bc2bab23f4298b1);
  return (0);
}

DECLARE_COMPILED_CODE ("dbgcmd.so", 3, decl_dbgcmd_so_5bc2bab23f4298b1, dbgcmd_so_5bc2bab23f4298b1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dbgcmd_so_data_5bc2bab23f4298b1 [2083] =
  "\x64\x15\xe8\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9\xc1\xba"
  "\x08\x0d\xbb\x24\x28\x0d\xbc\x28\xb3\x28\x0d\xbd\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x82\x88\xb2"
  "\xc2\x1d\x08\xb1\x28\x0d\xbf\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x08\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c"
  "\x1d\xb2\x0d\xb1\x0c\x82\x80\xc2\x81\x08\x0d\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x28\xb7\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\xb2\x0c\x1d\xb1\x28\xb4\x28\xb7\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0"
  "\x86\x88\x0c\x28\x0d\xbc\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xba\x1d\xb0\x02\x88\x1d\x0d\xb9\x25\x0d\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb1\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x0c\xb4\x0d\x24\x28\x0d\xbc\x28\x0d\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\xb4\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e"
  "\x1b\x2a\x1b\x2a\xb2\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a"
  "\x17\x0d\x0d\x0d\x0d\x1b\xb1\xb4\x0d\x0d\xb3\x1b\x0d\xb5\x0d\x17"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x64\x62\x67\x63\x6d\x64\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x64\x72\x04\x63\x61\x72\x16"
  "\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x68\x65\x6c\x70\x2d\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x03\x06\x16\x64\x65\x66\x69\x6e\x65\x2d\x6c\x65\x74\x74\x65\x72"
  "\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x04\x10\x1c\x81\x89\x02\x0f\x1a"
  "\x81\x89\x02\x0e\x18\x81\x89\x02\x0d\x16\x81\x8b\x02\x0c\x14\x81"
  "\x8b\x02\x0b\x12\x81\x8d\x02\x0a\x10\x81\x8b\x02\x09\x0e\x81\x8b"
  "\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x85\x02\x06\x08\x81\x89\x02"
  "\x05\x06\x81\x87\x02\x04\x04\x84\x06\x1b\x2a\x02\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x02\x04\x05\x61\x73\x73\x76\x04\x07\x63\x68"
  "\x61\x72\x3c\x3f\x03\x1b\x18\x81\x8d\x02\x1a\x16\x81\x8d\x02\x19"
  "\x14\x81\x8d\x02\x18\x12\x81\x8b\x02\x17\x10\x81\x8b\x02\x16\x0e"
  "\x81\x8b\x02\x15\x0c\x81\x8b\x02\x14\x0a\x81\x8b\x02\x13\x08\x81"
  "\x89\x02\x12\x06\x81\x8b\x02\x11\x04\x86\x0a\x17\x24\x09\x02\x17"
  "\x6c\x65\x74\x74\x65\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x2f"
  "\x64\x72\x69\x76\x65\x72\x0a\x02\x05\x0a\x70\x75\x73\x68\x2d\x63"
  "\x6d\x64\x6c\x04\x0b\x63\x6d\x64\x6c\x2f\x73\x74\x61\x72\x74\x03"
  "\x1e\x08\x81\x89\x02\x1d\x06\x81\x8f\x02\x1c\x04\x86\x0a\x07\x12"
  "\x0b\x02\x1a\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x20\x63\x68\x61\x72\x61\x63\x74\x65\x72\x02\x09\x73\x74"
  "\x61\x6e\x64\x61\x72\x64\x13\x3b\x49\x67\x6e\x6f\x72\x69\x6e\x67"
  "\x20\x65\x72\x72\x6f\x72\x3a\x0a\x3b\x0b\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x65\x72\x72\x6f\x72\x02\x03\x1f\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x02\x12\x63\x6d\x64\x6c"
  "\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x6e\x75\x6c\x6c\x03\x0a\x63"
  "\x6d\x64\x6c\x2f\x70\x6f\x72\x74\x05\x17\x62\x69\x6e\x64\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x03\x05\x62\x65\x65\x70\x03\x0b\x63\x6d\x64\x6c\x2f\x73\x74\x61"
  "\x74\x65\x03\x0b\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\x04\x0d"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x0c\x04\x18\x70"
  "\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2d\x63\x68\x61\x72\x04\x17\x77\x72\x69\x74\x65\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72\x65\x70\x6f\x72\x74\x04\x03"
  "\x0c\x63\x68\x61\x72\x2d\x75\x70\x63\x61\x73\x65\x03\x08\x6e\x65"
  "\x77\x6c\x69\x6e\x65\x0e\x37\x34\x81\x8b\x02\x36\x32\x81\x8b\x02"
  "\x35\x30\x81\x8b\x02\x34\x2e\x81\x85\x02\x33\x2c\x81\x8f\x02\x32"
  "\x2a\x81\x8d\x02\x31\x28\x81\x8b\x02\x30\x26\x81\x8b\x02\x2f\x24"
  "\x81\x89\x02\x2e\x22\x81\x85\x02\x2d\x20\x81\x8b\x02\x2c\x1e\x81"
  "\x89\x02\x2b\x1c\x81\x85\x02\x2a\x1a\x81\x89\x02\x29\x18\x81\x87"
  "\x02\x28\x16\x81\x85\x02\x27\x14\x81\x83\x02\x26\x12\x81\x85\x02"
  "\x25\x10\x81\x83\x02\x24\x0e\x81\x85\x02\x23\x0c\x81\x89\x02\x22"
  "\x0a\x81\x85\x02\x21\x08\x81\x85\x02\x20\x06\x81\x83\x02\x1f\x04"
  "\x83\x04\x33\x5e\x0d\x02\x04\x20\x20\x20\x02\x04\x03\x04\x0c\x04"
  "\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x05\x44\x1c\x81\x87"
  "\x02\x43\x1a\x81\x87\x02\x42\x18\x81\x87\x02\x41\x16\x81\x85\x02"
  "\x40\x14\x81\x85\x02\x3f\x12\x81\x89\x02\x3e\x10\x81\x85\x02\x3d"
  "\x0e\x81\x85\x02\x3c\x0c\x81\x85\x02\x3b\x0a\x81\x87\x02\x3a\x08"
  "\x81\x89\x02\x39\x06\x81\x87\x02\x38\x04\x83\x04\x1b\x2b\x02\x2b"
  "\x43\x61\x6e\x27\x74\x20\x65\x78\x69\x74\x3b\x20\x75\x73\x65\x20"
  "\x61\x20\x72\x65\x73\x74\x61\x72\x74\x20\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x20\x69\x6e\x73\x74\x65\x61\x64\x2e\x02\x09\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x65\x04\x11\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x66"
  "\x61\x69\x6c\x75\x72\x65\x03\x46\x06\x81\x85\x02\x45\x04\x84\x06"
  "\x05\x0e\x02\x08\x02\x1a\x68\x6f\x6f\x6b\x2f\x6c\x65\x61\x76\x69"
  "\x6e\x67\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x6f\x6f\x70\x02"
  "\x1d\x64\x65\x66\x61\x75\x6c\x74\x2f\x6c\x65\x61\x76\x69\x6e\x67"
  "\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x6f\x6f\x70\x0e\x02\x49"
  "\x08\x81\x81\x02\x48\x06\x81\x81\x02\x47\x04\x82\x02\x07\x0f\x0f"
  "\x02\x09\x03\x02\x4a\x04\x83\x04\x03\x10\x02\x0a\x4b\x04\x83\x04"
  "\x03\x11\x02\x0b\x10\x59\x6f\x75\x20\x61\x72\x65\x20\x6e\x6f\x77"
  "\x20\x69\x6e\x20\x1b\x54\x79\x70\x65\x20\x43\x2d\x63\x20\x43\x2d"
  "\x75\x20\x74\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x6f\x20\x02"
  "\x2e\x0b\x52\x65\x74\x75\x72\x6e\x20\x74\x6f\x20\x14\x75\x73\x65"
  "\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x70\x72\x6f\x6d\x70\x74"
  "\x02\x03\x15\x6c\x65\x61\x76\x69\x6e\x67\x2d\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x2d\x6c\x6f\x6f\x70\x05\x14\x77\x69\x74\x68\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x04\x0c\x05\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x05\x10\x72"
  "\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x04\x15"
  "\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x73\x74\x72"
  "\x69\x6e\x67\x73\x07\x55\x16\x81\x87\x02\x54\x14\x81\x85\x02\x53"
  "\x12\x81\x85\x02\x52\x10\x81\x87\x02\x51\x0e\x81\x83\x02\x50\x0c"
  "\x81\x85\x02\x4f\x0a\x81\x83\x02\x4e\x08\x81\x85\x02\x4d\x06\x81"
  "\x83\x02\x4c\x04\x85\x08\x15\x2c\x0c\x02\x0c\x03\x04\x05\x65\x76"
  "\x61\x6c\x03\x57\x06\x81\x83\x02\x56\x04\x84\x06\x05\x0d\x12\x02"
  "\x0d\x03\x04\x14\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x73\x63\x6f"
  "\x64\x65\x2d\x65\x76\x61\x6c\x03\x59\x06\x81\x83\x02\x58\x04\x84"
  "\x06\x05\x0d\x13\x02\x0e\x03\x03\x06\x77\x68\x65\x72\x65\x03\x5b"
  "\x06\x81\x83\x02\x5a\x04\x83\x04\x05\x0d\x0e\x14\x14\x04\x13\x04"
  "\x12\x04\x0c\x04\x11\x04\x10\x04\x0f\x04\x04\x04\x0d\x04\x0b\x04"
  "\x09\x04\x04\x0f\x0c\x64\x65\x62\x75\x67\x2f\x77\x68\x65\x72\x65"
  "\x11\x64\x65\x62\x75\x67\x2f\x73\x63\x6f\x64\x65\x2d\x65\x76\x61"
  "\x6c\x0b\x64\x65\x62\x75\x67\x2f\x65\x76\x61\x6c\x16\x64\x65\x62"
  "\x75\x67\x2f\x72\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69"
  "\x6e\x74\x0e\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x16\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x65\x78\x69\x74\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x0a\x10\x6c"
  "\x65\x74\x74\x65\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x11\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x73\x65\x74\x0f"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81"
  "\x02\x07\x11";

SCHEME_OBJECT *
dbgcmd_so_data_5bc2bab23f4298b1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dbgcmd_so_data_5bc2bab23f4298b1 [0]))), (sizeof (prog_dbgcmd_so_data_5bc2bab23f4298b1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("dbgcmd.so", dbgcmd_so_data_5bc2bab23f4298b1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dbgcmd.so", "a07294b19e7a6bdd")
