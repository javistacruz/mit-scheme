/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:35-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_7 5
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_4 13
#define LABEL_1_11 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_19 25
#define LABEL_1_12 27
#define LABEL_1_13 29
#define ENVIRONMENT_LABEL_1_3 57
#define DEBUGGING_LABEL_1_2 56
#define OBJECT_1_7 55
#define OBJECT_1_6 54
#define OBJECT_1_5 53
#define OBJECT_1_4 52
#define OBJECT_1_3 51
#define OBJECT_1_2 50
#define OBJECT_1_1 49
#define OBJECT_1_0 48
#define EXECUTE_CACHE_1_23 31
#define EXECUTE_CACHE_1_22 33
#define EXECUTE_CACHE_1_21 35
#define EXECUTE_CACHE_1_20 37
#define EXECUTE_CACHE_1_18 39
#define EXECUTE_CACHE_1_6 41
#define FREE_REFERENCE_1_1 44
#define FREE_REFERENCE_1_0 45
#define FREE_ASSIGNMENT_1_0 47
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gensym_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd48;
  machine_word Wrd19;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd16;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd13;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd51;
  machine_word Wrd117;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_4);
      goto generate_uninterned_symbol_13;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_uninterned_symbol_24)
DEFLABEL (generate_uninterned_symbol_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_1_2]))
    goto label_52;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd13.uLng) == 30)
    goto label_51;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_1_3]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd43.Lng))))
    goto label_50;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  if ((Wrd19.Obj) == (Wrd13.Obj))
    goto label_49;

DEFLABEL (label_48)
  (Wrd22.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng)))
    goto label_25;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_25)
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_27;
  (Wrd24.Obj) = (current_block [OBJECT_1_7]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd24.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_26)
DEFLABEL (label_47)
  Rsp = (& (Rsp [3]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd51.Obj) = Rvl;

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd51.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_36;
  Wrd58 = Wrd62;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_34;
  Wrd65 = Wrd69;

DEFLABEL (label_33)
  Wrd64 = Wrd65;
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_32;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd77.Lng) = ((Wrd78.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd77.Lng)))
    goto label_32;
  (Wrd75.Obj) = (LONG_TO_FIXNUM (Wrd77.Lng));

DEFLABEL (label_31)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd87.Obj) = ((Wrd79.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd79.pObj) [0]) = (Wrd75.Obj);

DEFLABEL (label_28)
  (Wrd92.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd92.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (label_30)
  if ((Wrd87.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd79.pObj), (Wrd75.Obj));

DEFLABEL (label_19)
  goto label_28;

DEFLABEL (label_32)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (Wrd75.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd66.pObj));

DEFLABEL (label_17)
  (Wrd65.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd59.pObj));

DEFLABEL (label_16)
  (Wrd58.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  (Wrd123.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd123.Obj);
  (Wrd124.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd125.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_40)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd112.Obj) = ((Wrd104.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if ((Wrd113.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd104.pObj) [0]) = (Wrd105.Obj);

DEFLABEL (label_44)
  (Wrd118.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd121.Obj) = ((Wrd118.pObj) [0]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if ((Wrd122.uLng) == 50)
    goto label_43;
  Wrd117 = Wrd121;

DEFLABEL (label_42)
  Wrd51 = Wrd117;

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  goto label_37;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd118.pObj));

DEFLABEL (label_22)
  (Wrd117.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  if ((Wrd112.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd104.pObj), (Wrd105.Obj));

DEFLABEL (label_21)
  goto label_44;

DEFLABEL (label_49)
  Rsp = (& (Rsp [2]));
  goto label_38;

DEFLABEL (label_50)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_51)
  Wrd51 = Wrd8;
  goto label_41;

DEFLABEL (label_52)
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_54;
  Wrd94 = Wrd98;

DEFLABEL (label_53)
  Wrd51 = Wrd94;
  goto label_41;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd95.pObj));

DEFLABEL (label_20)
  (Wrd94.Obj) = Rvl;
  goto label_53;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_2 13
#define OBJECT_2_1 12
#define OBJECT_2_0 11
#define FREE_ASSIGNMENT_2_1 9
#define FREE_ASSIGNMENT_2_0 10
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gensym_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_2_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_5)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;

DEFLABEL (label_10)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_9)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd18.Obj) = (current_block [OBJECT_2_1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_2_2]);
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_6;

DEFLABEL (label_11)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_10;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_9;

INVOKE_INTERFACE_TARGET_1
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
gensym_so_ad1f0b741d589fcb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
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

static const struct liarc_code_S arr_decl_gensym_so_ad1f0b741d589fcb [2] =
  {
    { "gensym_so_code_1", 14, gensym_so_code_1 },
    { "gensym_so_code_2", 3, gensym_so_code_2 }
  };

int
decl_gensym_so_ad1f0b741d589fcb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gensym_so_ad1f0b741d589fcb);
  return (0);
}

DECLARE_COMPILED_CODE ("gensym.so", 3, decl_gensym_so_ad1f0b741d589fcb, gensym_so_ad1f0b741d589fcb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gensym_so_data_ad1f0b741d589fcb [590] =
  "\x3d\x07\x75\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x06\x07\x85\xc2\x02"
  "\x1d\x0c\x0d\xb9\x0d\xba\x25\x0d\xbb\xb2\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x1d\x0c\x80\xb2"
  "\xb3\x25\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x99\xbd\x88\xb5"
  "\xb0\x2a\x1e\x1e\xb4\x2a\x9b\x0d\xb3\xb2\xb1\x9b\x28\x0d\x26\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x67\x65\x6e\x73\x79\x6d\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x1e\x08\x12\x73\x79\x6d\x62\x6f\x6c\x20\x6f\x72\x20\x69\x6e\x74"
  "\x65\x67\x65\x72\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e"
  "\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x0d"
  "\x6e\x61\x6d\x65\x2d\x63\x6f\x75\x6e\x74\x65\x72\x02\x0c\x6e\x61"
  "\x6d\x65\x2d\x70\x72\x65\x66\x69\x78\x03\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72"
  "\x3f\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x03\x1a"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x0e\x73\x74\x72\x69\x6e"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x07\x11\x1e\x81\x85\x02\x10\x1c"
  "\x81\x83\x02\x0f\x1a\x81\x83\x02\x0e\x18\x81\x89\x02\x0d\x16\x81"
  "\x89\x02\x0c\x14\x81\x89\x02\x0b\x12\x81\x87\x02\x0a\x10\x81\x85"
  "\x02\x09\x0e\x83\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x85\x02\x06"
  "\x08\x81\x85\x02\x05\x06\x81\x85\x02\x04\x04\x81\x85\x02\x1d\x3a"
  "\x02\x02\x02\x47\x03\x14\x08\x81\x81\x02\x13\x06\x81\x81\x02\x12"
  "\x04\x82\x02\x07\x10\x04\x0e\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
gensym_so_data_ad1f0b741d589fcb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gensym_so_data_ad1f0b741d589fcb [0]))), (sizeof (prog_gensym_so_data_ad1f0b741d589fcb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gensym.so", gensym_so_data_ad1f0b741d589fcb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gensym.so", "725dd99cc4bed1d8")
