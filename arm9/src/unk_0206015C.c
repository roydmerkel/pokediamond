#include "unk_0206015C.h"

#include "constants/sndseq.h"
#include "event_data.h"
#include "heap.h"
#include "main.h"
#include "unk_020051F4.h"
#include "unk_0204AF24.h"

/*  Note to future reader, there might be some errors
    in the return type / parameters. They are right for this code
    but they might not be for every code, please do not blindly
    trust these prototypes if you are decompiling these functions. */
extern u32  MOD06_02244DB0(u32);
extern void MOD06_02244DBC(void*);
extern void MOD06_02244DC4(void*, void*);
extern void MOD06_02244EF8(void*);
extern void MOD06_02244F18(void*);
extern BOOL MOD06_02244F24(void*);
extern void MOD06_02244F2C(void*);
extern void * MOD06_02245088(struct FieldSystem *fieldSystem);
extern u32  MOD06_02245114(u32, struct FieldSystem *);
extern void MOD06_02245190(u32);
extern void MOD06_02245198(u8, u32);
extern u32  MOD06_022451F0(u32);

extern void FUN_02049160(struct UnkStruct_0204639C*, u32);
extern void FUN_0204C1B4(struct UnkStruct_0204639C*, u32,u32,u32,u32,u32,u32,u32);
extern struct Vecx32 *FUN_020553A0(struct PlayerAvatar *playerAvatar);
extern void FUN_0205889C(struct Vecx32 *param0, u32);
extern void FUN_0205F1C4(struct ScriptState *);
extern void FUN_0205F1D4(struct ScriptState *);
extern void FUN_0206367C(struct FieldSystem *, u32);

THUMB_FUNC void FUN_0206015C(struct FieldSystem *fieldSystem)
{
    struct UnkStruct_0206015C *unkStruct = AllocFromHeapAtEnd(0xb, 0x10);
    unkStruct->unk0 = MOD06_02244DB0(0xb);
    unkStruct->unk4 = MOD06_02245114(0xb, fieldSystem);
    unkStruct->unkC = 0;
    unkStruct->unkD = 0;

    FUN_0204640C(fieldSystem->unk10, FUN_02060194, (u32 *)unkStruct);
}

THUMB_FUNC BOOL FUN_02060194(struct UnkStruct_0204639C *unkStruct0)
{
    struct FieldSystem *fieldSystem = FUN_02046528(unkStruct0);
    struct UnkStruct_0204652C *unkStruct1 = (struct UnkStruct_0204652C *)FUN_0204652C(unkStruct0);

    switch (unkStruct1->action)
    {
    case 0:
        FUN_0206367C(fieldSystem, 1);
        MOD06_02245198(unkStruct1->unkD, unkStruct1->unk4);
        unkStruct1->unk8 = MOD06_022451F0(unkStruct1->unk4);
        FUN_0204AFC8(unkStruct0);
        unkStruct1->action = 1;
        break;

    case 1:
        FUN_0204AF3C(unkStruct0);
        unkStruct1->action = 2;
        break;

    case 2:
        struct ScriptState *scrState = SavArray_Flags_get(fieldSystem->saveBlock2);
        u8 unkD = unkStruct1->unkD;
        if (unkD == 0)
        {
            FUN_0205F1C4(scrState);
        }
        else if (unkD == 5)
        {
            FUN_0205F1D4(scrState);
        }
        FUN_02049160(unkStruct0, unkStruct1->unk8);
        unkStruct1->action = 3;
        break;

    case 3:
        FUN_0204AF84(unkStruct0);
        unkStruct1->action = 4;
        break;

    case 4:
        struct Vecx32 *unk0 = FUN_020553A0(fieldSystem->playerAvatar);
        unkStruct1->unkD += 1;
        if (unkStruct1->unkD <= 5)
        {
            void *unkAddr = MOD06_02245088(fieldSystem);
            FUN_0205889C(unk0, 1);
            MOD06_02244DC4(unkStruct1->unk0, unkAddr);
            MOD06_02244EF8(unkStruct1->unk0);
            unkStruct1->unkE = 0;
            PlaySE(SEQ_SE_DP_KASYA);
            FUN_0204C1B4(unkStruct0, 0x3, 0x11, 0x0000FFFF, 0, 6, 1, 0xb);
            unkStruct1->action = 5;
        }
        else
        {
            FUN_0205889C(unk0, 0);
            FUN_0204B00C(unkStruct0);
            unkStruct1->action = 8;
        }
        break;

    case 5:
        unkStruct1->unkE += 1;
        if (unkStruct1->unkE < 0x3c && !(gMain.newKeys & 1))
            break;

        MOD06_02245198(unkStruct1->unkD, unkStruct1->unk4);
        unkStruct1->unk8 = MOD06_022451F0(unkStruct1->unk4);

        PlaySE(SEQ_SE_DP_KASYA);
        FUN_0204C1B4(unkStruct0, 0x3, 0x10, 0x0000FFFF, 0, 6, 1, 0xb);
        unkStruct1->action = 6;
        break;

    case 6:
        MOD06_02244F18(unkStruct1->unk0);
        unkStruct1->action = 7;
        break;

    case 7:
        if (MOD06_02244F24(unkStruct1->unk0))
        {
            MOD06_02244F2C(unkStruct1->unk0);
            unkStruct1->action = 1;
        }
        break;

    case 8:
        FUN_0206367C(fieldSystem, 0);
        MOD06_02245190(unkStruct1->unk4);
        MOD06_02244DBC(unkStruct1->unk0);
        FreeToHeap(unkStruct1);
        return TRUE;

    default:
        break;
    }
    return FALSE;
}
