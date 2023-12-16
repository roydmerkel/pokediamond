#ifndef POKEDIAMOND_SCRCMD_H
#define POKEDIAMOND_SCRCMD_H

#include "global.h"
#include "script.h"

extern u16 FieldSystem_VarGet(FieldSystem *fieldSystem, u16);
extern u16* GetVarPointer(FieldSystem *fieldSystem, u16);
extern SaveData* FieldSystem_GetSaveData(FieldSystem *fieldSystem);

static inline u16 ScriptGetVar(ScriptContext *ctx)
{
    return FieldSystem_VarGet(ctx->fieldSystem, ScriptReadHalfword(ctx));
}

static inline u16 *ScriptGetVarPointer(ScriptContext *ctx)
{
    return GetVarPointer(ctx->fieldSystem, ScriptReadHalfword(ctx));
}

typedef struct UnkStruct_0203A288 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 padding[1];
} UnkStruct_0203A288;

typedef struct UnkStruct_0203B174
{
    BOOL Unk00;
    u32 Unk04;
    void *Unk08;
    struct FieldSystem *fieldSystem;
} UnkStruct_0203B174;

//scrcmd.c
BOOL ScrCmd_Nop(ScriptContext *ctx);
BOOL ScrCmd_Dummy(ScriptContext *ctx);
BOOL ScrCmd_End(ScriptContext *ctx);
BOOL ScrCmd_Wait(ScriptContext *ctx);
BOOL ScrCmd_DebugWatch(ScriptContext *ctx);
BOOL ScrCmd_LoadByte(ScriptContext *ctx);
BOOL ScrCmd_LoadWord(ScriptContext *ctx);
BOOL ScrCmd_LoadByteFromAddr(ScriptContext *ctx);
BOOL ScrCmd_WriteByteToAddr(ScriptContext *ctx);
BOOL ScrCmd_SetPtrByte(ScriptContext *ctx);
BOOL ScrCmd_CopyLocal(ScriptContext *ctx);
BOOL ScrCmd_CopyByte(ScriptContext *ctx);
BOOL ScrCmd_CompareLocalToLocal(ScriptContext *ctx);
BOOL ScrCmd_CompareLocalToValue(ScriptContext *ctx);
BOOL ScrCmd_CompareLocalToAddr(ScriptContext *ctx);
BOOL ScrCmd_CompareAddrToLocal(ScriptContext *ctx);
BOOL ScrCmd_CompareAddrToValue(ScriptContext *ctx);
BOOL ScrCmd_CompareAddrToAddr(ScriptContext *ctx);
BOOL ScrCmd_CompareVarToValue(ScriptContext *ctx);
BOOL ScrCmd_CompareVarToVar(ScriptContext *ctx);
BOOL ScrCmd_RunScript(ScriptContext *ctx);
BOOL ScrCmd_RunScriptWait(ScriptContext *ctx);
BOOL ScrCmd_RestartCurrentScript(ScriptContext *ctx);
BOOL ScrCmd_GoTo(ScriptContext *ctx);
BOOL ScrCmd_ObjectGoTo(ScriptContext *ctx);
BOOL ScrCmd_BgGoTo(ScriptContext *ctx);
BOOL ScrCmd_DirectionGoTo(ScriptContext *ctx);
BOOL ScrCmd_Call(ScriptContext *ctx);
BOOL ScrCmd_Return(ScriptContext *ctx);
BOOL ScrCmd_GoToIf(ScriptContext *ctx);
BOOL ScrCmd_CallIf(ScriptContext *ctx);
BOOL ScrCmd_SetFlag(ScriptContext *ctx);
BOOL ScrCmd_ClearFlag(ScriptContext *ctx);
BOOL ScrCmd_CheckFlag(ScriptContext *ctx);
BOOL ScrCmd_CheckFlagVar(ScriptContext *ctx);
BOOL ScrCmd_SetFlagVar(ScriptContext *ctx);
BOOL ScrCmd_SetTrainerFlag(ScriptContext *ctx);
BOOL ScrCmd_ClearTrainerFlag(ScriptContext *ctx);
BOOL ScrCmd_CheckTrainerFlag(ScriptContext *ctx);
BOOL ScrCmd_AddVar(ScriptContext *ctx);
BOOL ScrCmd_SubVar(ScriptContext *ctx);
BOOL ScrCmd_SetVar(ScriptContext *ctx);
BOOL ScrCmd_CopyVar(ScriptContext *ctx);
BOOL ScrCmd_SetOrCopyVar(ScriptContext *ctx);
BOOL ScrCmd_Message(ScriptContext *ctx);
BOOL ScrCmd_MessageFrom(ScriptContext *ctx);
BOOL ScrCmd_MessageFrom2(ScriptContext *ctx);
BOOL ScrCmd_Unk01FC(ScriptContext *ctx);
BOOL ScrCmd_Unk01FD(ScriptContext *ctx);
BOOL ScrCmd_Unk01FE(ScriptContext *ctx);
BOOL ScrCmd_Unk01FF(ScriptContext *ctx);
BOOL ScrCmd_MessageUnown(ScriptContext *ctx);
BOOL ScrCmd_Unk002C(ScriptContext *ctx);
BOOL ScrCmd_Unk002D(ScriptContext *ctx);
BOOL ScrCmd_Unk02C0(ScriptContext *ctx);
BOOL ScrCmd_Unk002E(ScriptContext *ctx);
BOOL ScrCmd_Unk020C(ScriptContext *ctx);
BOOL ScrCmd_Unk002F(ScriptContext *ctx);
BOOL ScrCmd_WaitButtonAB(ScriptContext *ctx);
BOOL ScrCmd_WaitButtonABTime(ScriptContext *ctx);
BOOL ScrCmd_WaitButton(ScriptContext *ctx);
BOOL ScrCmd_WaitButtonABPad(ScriptContext *ctx);
BOOL ScrCmd_Unk0033(ScriptContext *ctx);
BOOL ScrCmd_CloseMessageBox(ScriptContext *ctx);
BOOL ScrCmd_Unk0035(ScriptContext *ctx);
BOOL ScrCmd_ScrollBg(ScriptContext *ctx);
BOOL ScrCmd_CreateMessageBox(ScriptContext *ctx);
BOOL ScrCmd_Unk0037(ScriptContext *ctx);
BOOL ScrCmd_Unk0038(ScriptContext *ctx);
BOOL ScrCmd_Unk0039(ScriptContext *ctx);
BOOL ScrCmd_Unk003A(ScriptContext *ctx);
BOOL ScrCmd_Unk003B(ScriptContext *ctx);
BOOL ScrCmd_Menu(ScriptContext *ctx);
BOOL ScrCmd_YesNoMenu(ScriptContext *ctx);
BOOL ScrCmd_ShowWaitingIcon(ScriptContext *ctx);
BOOL ScrCmd_HideWaitingIcon(ScriptContext *ctx);
BOOL ScrCmd_Unk0040(ScriptContext *ctx);
BOOL ScrCmd_Unk0041(ScriptContext *ctx);
BOOL ScrCmd_Unk0042(ScriptContext *ctx);
BOOL ScrCmd_Unk029D(ScriptContext *ctx);
BOOL ScrCmd_Unk0043(ScriptContext *ctx);
BOOL ScrCmd_Unk02B9(ScriptContext *ctx);
BOOL ScrCmd_Unk0044(ScriptContext *ctx);
BOOL ScrCmd_Unk0045(ScriptContext *ctx);
BOOL ScrCmd_Unk0046(ScriptContext *ctx);
BOOL ScrCmd_Unk0047(ScriptContext *ctx);
BOOL ScrCmd_Unk0048(ScriptContext *ctx);
BOOL ScrCmd_Unk02CF(ScriptContext *ctx);
BOOL ScrCmd_Unk02D0(ScriptContext *ctx);
BOOL ScrCmd_Unk005E(ScriptContext *ctx);
BOOL ScrCmd_Unk02A1(ScriptContext *ctx);
BOOL ScrCmd_WaitForMovement(ScriptContext *ctx);
BOOL ScrCmd_LockAllEvents(ScriptContext *ctx);
BOOL ScrCmd_LockAllEvents2(ScriptContext *ctx);
BOOL ScrCmd_ReleaseAllEvents(ScriptContext *ctx);
BOOL ScrCmd_LockEvent(ScriptContext *ctx);
BOOL ScrCmd_ReleaseEvent(ScriptContext *ctx);
BOOL ScrCmd_AddEvent(ScriptContext *ctx);
BOOL ScrCmd_RemoveEvent(ScriptContext *ctx);
BOOL ScrCmd_LockCamera(ScriptContext *ctx);
BOOL ScrCmd_ReleaseCamera(ScriptContext *ctx);
BOOL ScrCmd_FacePlayer(ScriptContext *ctx);
BOOL ScrCmd_GetPlayerPosition(ScriptContext *ctx);
BOOL ScrCmd_GetEventPosition(ScriptContext *ctx);
BOOL ScrCmd_GetPlayerDirection(ScriptContext *ctx);
BOOL ScrCmd_Unk006B(ScriptContext *ctx);
BOOL ScrCmd_KeepEvent(ScriptContext *ctx);
BOOL ScrCmd_SetEventMovement(ScriptContext *ctx);
BOOL ScrCmd_GetEventMovement(ScriptContext *ctx);
BOOL ScrCmd_EventStopFollowing(ScriptContext *ctx);
BOOL ScrCmd_Unk02AB(ScriptContext *ctx);
BOOL ScrCmd_GetSealCountFromId(ScriptContext *ctx);
BOOL ScrCmd_GiveSeals(ScriptContext *ctx);
BOOL ScrCmd_GetPokemonForm(ScriptContext *ctx);
BOOL ScrCmd_ChoosePokemonMenu(ScriptContext *ctx);
BOOL ScrCmd_OpenTradeScreen(ScriptContext *ctx);
BOOL ScrCmd_UnionChoosePokemonMenu(ScriptContext *ctx);
BOOL ScrCmd_GetSelectedPartySlot(ScriptContext *ctx);
BOOL ScrCmd_Unk0194(ScriptContext *ctx);
BOOL ScrCmd_Unk0195(ScriptContext *ctx);
BOOL ScrCmd_Unk0196(ScriptContext *ctx);
BOOL ScrCmd_Unk0197(ScriptContext *ctx);
BOOL ScrCmd_Unk009B(ScriptContext *ctx);
BOOL ScrCmd_DummySetWeather(ScriptContext *ctx);
BOOL ScrCmd_DummyInitWeather(ScriptContext *ctx);
BOOL ScrCmd_DummyUpdateWeather(ScriptContext *ctx);
BOOL ScrCmd_DummyGetMapPosition(ScriptContext *ctx);
BOOL ScrCmd_RestoreOverworld(ScriptContext *ctx);
BOOL ScrCmd_TerminateOverworldProcess(ScriptContext *ctx);
BOOL ScrCmd_Unk00A2(ScriptContext *ctx);
BOOL ScrCmd_Unk00A3(ScriptContext *ctx);
BOOL ScrCmd_GetDressupPortraitSlot(ScriptContext *ctx);
BOOL ScrCmd_Unk0207(ScriptContext *ctx);
BOOL ScrCmd_ShowPokemonPic(ScriptContext *ctx);
BOOL ScrCmd_ShowPartyPokemonPic(ScriptContext *ctx);
BOOL ScrCmd_Unk0209(ScriptContext *ctx);
BOOL ScrCmd_Unk028D(ScriptContext *ctx);
BOOL ScrCmd_Unk028E(ScriptContext *ctx);
BOOL ScrCmd_Unk020A(ScriptContext *ctx);
BOOL ScrCmd_Unk020B(ScriptContext *ctx);
BOOL ScrCmd_Unk00A5(ScriptContext *ctx);
BOOL ScrCmd_DressupPokemon(ScriptContext *ctx);
BOOL ScrCmd_ShowDressedPokemon(ScriptContext *ctx);
BOOL ScrCmd_ShowContestPokemon(ScriptContext *ctx);
BOOL ScrCmd_CheckPortraitSlot(ScriptContext *ctx);
BOOL ScrCmd_CheckContestPortraitSlot(ScriptContext *ctx);
BOOL ScrCmd_Unk0130(ScriptContext *ctx);
BOOL ScrCmd_ShowGeonetScreen(ScriptContext *ctx);
BOOL ScrCmd_ShowSealCapsuleEditor(ScriptContext *ctx);
BOOL ScrCmd_ShowTownMapScreen(ScriptContext *ctx);
BOOL ScrCmd_Unk01D7(ScriptContext *ctx);
BOOL ScrCmd_Unk01D8(ScriptContext *ctx);
BOOL ScrCmd_Unk01D9(ScriptContext *ctx);
BOOL ScrCmd_ShowPCBoxScreen(ScriptContext *ctx);
BOOL ScrCmd_Unk00AC(ScriptContext *ctx);
BOOL ScrCmd_Unk00AD(ScriptContext *ctx);
BOOL ScrCmd_Unk00AE(ScriptContext *ctx);
BOOL ScrCmd_Unk00AF(ScriptContext *ctx);
BOOL ScrCmd_ShowEndGameScreen(ScriptContext *ctx);
BOOL ScrCmd_InitHallOfFame(ScriptContext *ctx);
BOOL ScrCmd_Unk00B2(ScriptContext *ctx);
BOOL ScrCmd_Unk00B3(ScriptContext *ctx);
BOOL ScrCmd_StarterSelectionScreen(ScriptContext *ctx);
BOOL ScrCmd_EndStarterSelectionScreen(ScriptContext *ctx);
BOOL ScrCmd_ShowBagScreen(ScriptContext *ctx);
BOOL ScrCmd_GetBagScreenSelection(ScriptContext *ctx);
BOOL ScrCmd_NamePlayerScreen(ScriptContext *ctx);
BOOL ScrCmd_NamePokemonScreen(ScriptContext *ctx);
BOOL ScrCmd_WriteWhiteRockInscription(ScriptContext *ctx);
BOOL ScrCmd_Unk0243(ScriptContext *ctx);
BOOL ScrCmd_Unk0244(ScriptContext *ctx);
BOOL ScrCmd_Unk0245(ScriptContext *ctx);
BOOL ScrCmd_FadeScreen(ScriptContext *ctx);
BOOL ScrCmd_WaitFadeScreen(ScriptContext *ctx);
BOOL ScrCmd_Warp(ScriptContext *ctx);
BOOL ScrCmd_BattleRoomWarp(ScriptContext *ctx);
BOOL ScrCmd_ExitBattleRoom(ScriptContext *ctx);
BOOL ScrCmd_GetPreviousMapID(ScriptContext *ctx);
BOOL ScrCmd_GetCurrentMapID(ScriptContext *ctx);
BOOL ScrCmd_RockClimb(ScriptContext *ctx);
BOOL ScrCmd_Surf(ScriptContext *ctx);
BOOL ScrCmd_Waterfall(ScriptContext *ctx);
BOOL ScrCmd_Fly(ScriptContext *ctx);
BOOL ScrCmd_Flash(ScriptContext *ctx);
BOOL ScrCmd_Defog(ScriptContext *ctx);
BOOL ScrCmd_Cut(ScriptContext *ctx);
BOOL ScrCmd_ApplyContestDress(ScriptContext *ctx);
BOOL ScrCmd_CheckBike(ScriptContext *ctx);
BOOL ScrCmd_RideBike(ScriptContext *ctx);
BOOL ScrCmd_DummyRideBike(ScriptContext *ctx);
BOOL ScrCmd_CyclingRoad(ScriptContext *ctx);
BOOL ScrCmd_GetPlayerState(ScriptContext *ctx);
BOOL ScrCmd_SetPlayerState(ScriptContext *ctx);
BOOL ScrCmd_ApplyPlayerState(ScriptContext *ctx);
BOOL ScrCmd_GetSwarmInfo(ScriptContext *ctx);
BOOL ScrCmd_GetStarter(ScriptContext *ctx);
BOOL ScrCmd_TrainerMessage(ScriptContext *ctx);
BOOL ScrCmd_Unk00F2(ScriptContext *ctx);
BOOL ScrCmd_Unk00F3(ScriptContext *ctx);
BOOL ScrCmd_Unk00F4(ScriptContext *ctx);
BOOL ScrCmd_Unk00F5(ScriptContext *ctx);
BOOL ScrCmd_Unk00F6(ScriptContext *ctx);
BOOL ScrCmd_Unk00F7(ScriptContext *ctx);
BOOL ScrCmd_SetDynamicWarp(ScriptContext *ctx);
BOOL ScrCmd_GetDynamicWarpFloorNumber(ScriptContext *ctx);
BOOL ScrCmd_ShowCurrentFloorNumber(ScriptContext *ctx);
BOOL ScrCmd_CountSinnohDexSeen(ScriptContext *ctx);
BOOL ScrCmd_CountSinnohDexOwned(ScriptContext *ctx);
BOOL ScrCmd_CountNationalDexSeen(ScriptContext *ctx);
BOOL ScrCmd_CountNationalDexOwned(ScriptContext *ctx);
BOOL ScrCmd_DummyDexCheck(ScriptContext *ctx);
BOOL ScrCmd_GetDexEvaluationMessage(ScriptContext *ctx);
BOOL ScrCmd_WildBattle(ScriptContext *ctx);
BOOL ScrCmd_LegendaryBattle(ScriptContext *ctx);
BOOL ScrCmd_FirstBattle(ScriptContext *ctx);
BOOL ScrCmd_CatchTutorial(ScriptContext *ctx);
BOOL ScrCmd_UpdateHoneyTree(ScriptContext *ctx);
BOOL ScrCmd_CheckHoneyTree(ScriptContext *ctx);
BOOL ScrCmd_HoneyTreeBattle(ScriptContext *ctx);
BOOL ScrCmd_StopHoneyTreeAnimation(ScriptContext *ctx);
BOOL ScrCmd_ShowSignatureScreen(ScriptContext *ctx);
BOOL ScrCmd_CheckSaveStatus(ScriptContext *ctx);
BOOL ScrCmd_SaveGame(ScriptContext *ctx);
BOOL ScrCmd_GivePoketch(ScriptContext *ctx);
BOOL ScrCmd_CheckPoketch(ScriptContext *ctx);
BOOL ScrCmd_UnlockPoketchApp(ScriptContext *ctx);
BOOL ScrCmd_CheckPoketchApp(ScriptContext *ctx);
BOOL ScrCmd_Unk0135(ScriptContext *ctx);
BOOL ScrCmd_Unk0136(ScriptContext *ctx);
BOOL ScrCmd_Unk0137(ScriptContext *ctx);
BOOL ScrCmd_Unk0138(ScriptContext *ctx);
BOOL ScrCmd_Unk0139(ScriptContext *ctx);
BOOL ScrCmd_Unk013C(ScriptContext *ctx);
BOOL ScrCmd_Unk013D(ScriptContext *ctx);
BOOL ScrCmd_Unk013E(ScriptContext *ctx);
BOOL ScrCmd_Unk013F(ScriptContext *ctx);
BOOL ScrCmd_Unk02BA(ScriptContext *ctx);
BOOL ScrCmd_Unk0140(ScriptContext *ctx);
BOOL ScrCmd_Unk0146(ScriptContext *ctx);
BOOL ScrCmd_Unk0141(ScriptContext *ctx);
BOOL ScrCmd_Unk0142(ScriptContext *ctx);
BOOL ScrCmd_Unk013A(ScriptContext *ctx);
BOOL ScrCmd_Unk013B(ScriptContext *ctx);
BOOL ScrCmd_Unk0143(ScriptContext *ctx);
BOOL ScrCmd_Unk0144(ScriptContext *ctx);
BOOL ScrCmd_Unk0145(ScriptContext *ctx);
BOOL ScrCmd_Unk0153(ScriptContext *ctx);
BOOL ScrCmd_Unk0154(ScriptContext *ctx);
BOOL ScrCmd_Unk0155(ScriptContext *ctx);
BOOL ScrCmd_Unk029C(ScriptContext *ctx);
BOOL ScrCmd_SetPlayerAvatar(ScriptContext *ctx);
BOOL ScrCmd_DummyBlackout(ScriptContext *ctx);
BOOL ScrCmd_SetSpawn(ScriptContext *ctx);
BOOL ScrCmd_GetPlayerGender(ScriptContext *ctx);
BOOL ScrCmd_HealParty(ScriptContext *ctx);
BOOL ScrCmd_Unk014F(ScriptContext *ctx);
BOOL ScrCmd_Unk0150(ScriptContext *ctx);
BOOL ScrCmd_Unk02BB(ScriptContext *ctx);
BOOL ScrCmd_Unk0151(ScriptContext *ctx);
BOOL ScrCmd_Unk0152(ScriptContext *ctx);
BOOL ScrCmd_CheckPocketNotEmpty(ScriptContext *ctx);
BOOL ScrCmd_SetEventDefaultPosition(ScriptContext *ctx);
BOOL ScrCmd_SetEventPosition(ScriptContext *ctx);
BOOL ScrCmd_SetEventDefaultMovement(ScriptContext *ctx);
BOOL ScrCmd_SetEventDefaultDirection(ScriptContext *ctx);
BOOL ScrCmd_SetWarpPosition(ScriptContext *ctx);
BOOL ScrCmd_SetBgEventPosition(ScriptContext *ctx);
BOOL ScrCmd_SetEventDirection(ScriptContext *ctx);
BOOL ScrCmd_Unk018F(ScriptContext *ctx);
BOOL ScrCmd_PrepareDoorAnimation(ScriptContext *ctx);
BOOL ScrCmd_WaitDoorAnimation(ScriptContext *ctx);
BOOL ScrCmd_FreeDoorAnimation(ScriptContext *ctx);
BOOL ScrCmd_OpenDoorAnimation(ScriptContext *ctx);
BOOL ScrCmd_CloseDoorAnimation(ScriptContext *ctx);
BOOL ScrCmd_InitPastoriaGym(ScriptContext *ctx);
BOOL ScrCmd_CheckPastoriaGymButton(ScriptContext *ctx);
BOOL ScrCmd_InitHearthomeGym(ScriptContext *ctx);
BOOL ScrCmd_MoveHearthomeGymElevator(ScriptContext *ctx);
BOOL ScrCmd_InitCanalaveGym(ScriptContext *ctx);
BOOL ScrCmd_InitVeilstoneGym(ScriptContext *ctx);
BOOL ScrCmd_InitSunyshoreGym(ScriptContext *ctx);
BOOL ScrCmd_RotateSunyshoreGymGear(ScriptContext *ctx);
BOOL ScrCmd_HatchEgg(ScriptContext *ctx);
BOOL ScrCmd_Unk019E(ScriptContext *ctx);
BOOL ScrCmd_Unk019F(ScriptContext *ctx);
BOOL ScrCmd_Unk01A0(ScriptContext *ctx);
BOOL ScrCmd_Unk01A1(ScriptContext *ctx);
BOOL ScrCmd_Unk01A2(ScriptContext *ctx);
BOOL ScrCmd_Unk003F(ScriptContext *ctx);
BOOL ScrCmd_HideEvent(ScriptContext *ctx);
BOOL ScrCmd_ShowEvent(ScriptContext *ctx);
BOOL ScrCmd_ShowMailbox(ScriptContext *ctx);
BOOL ScrCmd_CountMail(ScriptContext *ctx);
BOOL ScrCmd_Unk01B5(ScriptContext *ctx);
BOOL ScrCmd_GetTimeOfDay(ScriptContext *ctx);
BOOL ScrCmd_Random(ScriptContext *ctx);
BOOL ScrCmd_DummyRandom(ScriptContext *ctx);
BOOL ScrCmd_CheckPokemonSizeRecord(ScriptContext *ctx);
BOOL ScrCmd_SetPokemonSizeRecord(ScriptContext *ctx);
BOOL ScrCmd_BufferPartyPokemonSize(ScriptContext *ctx);
BOOL ScrCmd_BufferPokemonRecordSize(ScriptContext *ctx);
BOOL ScrCmd_InitPokemonRecordSize(ScriptContext *ctx);
BOOL ScrCmd_Unk01CC(ScriptContext *ctx);
BOOL ScrCmd_Unk01CD(ScriptContext *ctx);
BOOL ScrCmd_Unk01CE(ScriptContext *ctx);
BOOL ScrCmd_Unk01D2(ScriptContext *ctx);
BOOL ScrCmd_Unk01D3(ScriptContext *ctx);
BOOL ScrCmd_Unk01D4(ScriptContext *ctx);
BOOL ScrCmd_Unk01D5(ScriptContext *ctx);
BOOL ScrCmd_Unk01D6(ScriptContext *ctx);
BOOL ScrCmd_CheckSinnohDexComplete(ScriptContext *ctx);
BOOL ScrCmd_CheckNationalDexComplete(ScriptContext *ctx);
BOOL ScrCmd_RegisterSinnohPokedex(ScriptContext *ctx);
BOOL ScrCmd_RegisterNationalPokedex(ScriptContext *ctx);
BOOL ScrCmd_Unk01EC(ScriptContext *ctx);
BOOL ScrCmd_Unk01ED(ScriptContext *ctx);
BOOL ScrCmd_Unk01EF(ScriptContext *ctx);
BOOL ScrCmd_IncrementGameStat(ScriptContext *ctx);
BOOL ScrCmd_GetGameStat(ScriptContext *ctx);
BOOL ScrCmd_SetGameStat(ScriptContext *ctx);
BOOL ScrCmd_EnableDisableSafariZone(ScriptContext *ctx);
BOOL ScrCmd_UseGreatMarshBinoculars(ScriptContext *ctx);
BOOL ScrCmd_SpearPillarSequence(ScriptContext *ctx);
BOOL ScrCmd_KeepSafariTrain(ScriptContext *ctx);
BOOL ScrCmd_MoveSafariTrain(ScriptContext *ctx);
BOOL ScrCmd_CheckSafariTrainPosition(ScriptContext *ctx);
BOOL ScrCmd_IgnoreHeights(ScriptContext *ctx);
BOOL ScrCmd_GetSpiritombTalkCounter(ScriptContext *ctx);
BOOL ScrCmd_Unk0218(ScriptContext *ctx);
BOOL ScrCmd_Unk0219(ScriptContext *ctx);
BOOL ScrCmd_Unk021A(ScriptContext *ctx);
BOOL ScrCmd_Unk021B(ScriptContext *ctx);
BOOL ScrCmd_CreateRoamer(ScriptContext *ctx);
BOOL ScrCmd_NPCTradeInit(ScriptContext *ctx);
BOOL ScrCmd_NPCTradeGetOfferedSpecies(ScriptContext *ctx);
BOOL ScrCmd_NPCTradeGetRequestedSpecies(ScriptContext *ctx);
BOOL ScrCmd_NPCTradeExecute(ScriptContext *ctx);
BOOL ScrCmd_NPCTradeEnd(ScriptContext *ctx);
BOOL ScrCmd_UnlockForeignEntries(ScriptContext *ctx);
BOOL ScrCmd_UnlockGenderEntries(ScriptContext *ctx);
BOOL ScrCmd_NationalDex(ScriptContext *ctx);
BOOL ScrCmd_GetTotalPokemonEVs(ScriptContext *ctx);
BOOL ScrCmd_GetDayOfWeek(ScriptContext *ctx);
BOOL ScrCmd_Unk0239(ScriptContext *ctx);
BOOL ScrCmd_GetPokemonFootprint(ScriptContext *ctx);
BOOL ScrCmd_PokecenterHealAnimation(ScriptContext *ctx);
BOOL ScrCmd_ElevatorAnimation(ScriptContext *ctx);
BOOL ScrCmd_ShipAnimation(ScriptContext *ctx);
BOOL ScrCmd_GetGameVersion(ScriptContext *ctx);
BOOL ScrCmd_GiveWallpaper(ScriptContext *ctx);
BOOL ScrCmd_Unk024A(ScriptContext *ctx);
BOOL ScrCmd_Unk024B(ScriptContext *ctx);
BOOL ScrCmd_Unk024C(ScriptContext *ctx);
BOOL ScrCmd_Unk024D(ScriptContext *ctx);
BOOL ScrCmd_CountPCFreeSpace(ScriptContext *ctx);
BOOL ScrCmd_Unk0258(ScriptContext *ctx);
BOOL ScrCmd_Unk0259(ScriptContext *ctx);
BOOL ScrCmd_Unk025A(ScriptContext *ctx);
BOOL ScrCmd_Unk025B(ScriptContext *ctx);
BOOL ScrCmd_Unk025C(ScriptContext *ctx);
BOOL ScrCmd_Unk025D(ScriptContext *ctx);
BOOL ScrCmd_Unk025E(ScriptContext *ctx);
BOOL ScrCmd_Unk025F(ScriptContext *ctx);
BOOL ScrCmd_AddSpecialGameStat(ScriptContext *ctx);
BOOL ScrCmd_CheckPokemonInParty(ScriptContext *ctx);
BOOL ScrCmd_SetDeoxysForm(ScriptContext *ctx);
BOOL ScrCmd_CheckBurmyForms(ScriptContext *ctx);
BOOL ScrCmd_Unk0265(ScriptContext *ctx);
BOOL ScrCmd_Unk0266(ScriptContext *ctx);
BOOL ScrCmd_SlotMachine(ScriptContext *ctx);
BOOL ScrCmd_GetHour(ScriptContext *ctx);
BOOL ScrCmd_ShakeEvent(ScriptContext *ctx);
BOOL ScrCmd_BlinkEvent(ScriptContext *ctx);
BOOL ScrCmd_CheckRegis(ScriptContext *ctx);
BOOL ScrCmd_Unk026C(ScriptContext *ctx);
BOOL ScrCmd_CheckGBACartridge(ScriptContext *ctx);
BOOL ScrCmd_ResetSpiritombTalkCounter(ScriptContext *ctx);
BOOL ScrCmd_Unk0270(ScriptContext *ctx);
BOOL ScrCmd_BufferContestBackgroundName(ScriptContext *ctx);
BOOL ScrCmd_Unk0275(ScriptContext *ctx);
BOOL ScrCmd_Unk0277(ScriptContext *ctx);
BOOL ScrCmd_Unk0279(ScriptContext *ctx);
BOOL ScrCmd_UseSunyshoreBinoculars(ScriptContext *ctx);
BOOL ScrCmd_Unk027B(ScriptContext *ctx);
BOOL ScrCmd_BufferRandomTrendySaying(ScriptContext *ctx);
BOOL ScrCmd_Unk027F(ScriptContext *ctx);
BOOL ScrCmd_Unk027E(ScriptContext *ctx);
BOOL ScrCmd_CheckBirthday(ScriptContext *ctx);
BOOL ScrCmd_CountSeenUnown(ScriptContext *ctx);
BOOL ScrCmd_Unk0285(ScriptContext *ctx);
BOOL ScrCmd_Unk0286(ScriptContext *ctx);
BOOL ScrCmd_Unk0287(ScriptContext *ctx);
BOOL ScrCmd_Unk0288(ScriptContext *ctx);
BOOL ScrCmd_Unk0289(ScriptContext *ctx);
BOOL ScrCmd_Unk028A(ScriptContext *ctx);
BOOL ScrCmd_CheckEventValidity(ScriptContext *ctx);
BOOL ScrCmd_Unk028F(ScriptContext *ctx);
BOOL ScrCmd_Unk0290(ScriptContext *ctx);
BOOL ScrCmd_Unk0291(ScriptContext *ctx);
BOOL ScrCmd_Unk0292(ScriptContext *ctx);
BOOL ScrCmd_Unk029E(ScriptContext *ctx);
BOOL ScrCmd_Unk0293(ScriptContext *ctx);
BOOL ScrCmd_ShakeCamera(ScriptContext *ctx);
BOOL ScrCmd_Unk02A3(ScriptContext *ctx);
BOOL ScrCmd_Unk02A4(ScriptContext *ctx);
BOOL ScrCmd_Unk02A2(ScriptContext *ctx);
BOOL ScrCmd_Unk02A7(ScriptContext *ctx);
BOOL ScrCmd_CompareMysteryGiftEasyChatInput(ScriptContext *ctx);
BOOL ScrCmd_ActivateMysteryGift(ScriptContext *ctx);
BOOL ScrCmd_Unk02AF(ScriptContext *ctx);
BOOL ScrCmd_Unk02B0(ScriptContext *ctx);
BOOL ScrCmd_Unk02B1(ScriptContext *ctx);
BOOL ScrCmd_Unk02B2(ScriptContext *ctx);
BOOL ScrCmd_Unk02B5(ScriptContext *ctx);
BOOL ScrCmd_Unk02B6(ScriptContext *ctx);
BOOL ScrCmd_GetTrainerCardLevel(ScriptContext *ctx);
BOOL ScrCmd_ShowSaveStats(ScriptContext *ctx);
BOOL ScrCmd_HideSaveStats(ScriptContext *ctx);
BOOL ScrCmd_ScopeMode(ScriptContext *ctx);

// scrcmd_mart.c
BOOL ScrCmd_NormalMart(ScriptContext *ctx);
BOOL ScrCmd_SpecialMart(ScriptContext *ctx);
BOOL ScrCmd_GoodsMart(ScriptContext *ctx);
BOOL ScrCmd_SealsMart(ScriptContext *ctx);
BOOL ScrCmd_AccessoriesShop(ScriptContext *ctx);

//scrcmd_names.c
BOOL ScrCmd_GetPlayerName(ScriptContext *ctx);
BOOL ScrCmd_GetRivalName(ScriptContext *ctx);
BOOL ScrCmd_GetFriendName(ScriptContext *ctx);
BOOL ScrCmd_GetPokemonName(ScriptContext *ctx);
BOOL ScrCmd_GetItemName(ScriptContext *ctx);
BOOL ScrCmd_GetPocketName(ScriptContext *ctx);
BOOL ScrCmd_GetTMHMMoveName(ScriptContext *ctx);
BOOL ScrCmd_GetMoveName(ScriptContext *ctx);
BOOL ScrCmd_Unk00D5(ScriptContext *ctx);
BOOL ScrCmd_Unk0280(ScriptContext *ctx);
BOOL ScrCmd_GetPokemonNickname(ScriptContext *ctx);
BOOL ScrCmd_Unk0251(ScriptContext *ctx);
BOOL ScrCmd_GetPoketchAppName(ScriptContext *ctx);
BOOL ScrCmd_GetTrainerClassName(ScriptContext *ctx);
BOOL ScrCmd_Unk00D9(ScriptContext *ctx);
BOOL ScrCmd_Unk00DA(ScriptContext *ctx);
BOOL ScrCmd_GetPlayerStarterName(ScriptContext *ctx);
BOOL ScrCmd_GetRivalStarterName(ScriptContext *ctx);
BOOL ScrCmd_GetCounterpartStarterName(ScriptContext *ctx);
BOOL ScrCmd_GetDecorationName(ScriptContext *ctx);
BOOL ScrCmd_GetUndergroundTrapName(ScriptContext *ctx);
BOOL ScrCmd_GetUndergroundItemName(ScriptContext *ctx);
BOOL ScrCmd_GetMapName(ScriptContext *ctx);
BOOL ScrCmd_GetBerryName(ScriptContext *ctx);
BOOL ScrCmd_GetNatureName(ScriptContext *ctx);
BOOL ScrCmd_GetFashionName(ScriptContext *ctx);
BOOL ScrCmd_GetWhiteRockInscription(ScriptContext *ctx);
BOOL ScrCmd_GetPokemonMoveName(ScriptContext *ctx);
BOOL ScrCmd_GetRibbonName(ScriptContext *ctx);
BOOL ScrCmd_GetSealName(ScriptContext *ctx);
BOOL ScrCmd_GetItemNameWithIndefArticle(ScriptContext *ctx);
BOOL ScrCmd_GetItemNamePlural(ScriptContext *ctx);
BOOL ScrCmd_GetDecorationNameWithArticle(ScriptContext *ctx);
BOOL ScrCmd_GetUndergroundTrapNameWithArticle(ScriptContext *ctx);
BOOL ScrCmd_GetUndergroundItemNameWithArticle(ScriptContext *ctx);
BOOL ScrCmd_Unk02C9(ScriptContext *ctx);
BOOL ScrCmd_Unk02CA(ScriptContext *ctx);
BOOL ScrCmd_GetFashionNameWithArticle(ScriptContext *ctx);
BOOL ScrCmd_Unk02CC(ScriptContext *ctx);
BOOL ScrCmd_GetSealNamePlural(ScriptContext *ctx);
BOOL ScrCmd_CapitalizeFirstChar(ScriptContext *ctx);

//scrcmd_sound.c
BOOL ScrCmd_Unk02AE(struct ScriptContext *ctx);
BOOL ScrCmd_PlayBgm(struct ScriptContext *ctx);
BOOL ScrCmd_StopBgm(struct ScriptContext *ctx);
BOOL ScrCmd_PlayDefaultBgm(struct ScriptContext *ctx);
BOOL ScrCmd_Unk0053(struct ScriptContext *ctx);
BOOL ScrCmd_FadeOutBgm(struct ScriptContext *ctx);
BOOL sub_02041464(struct ScriptContext *ctx);
BOOL ScrCmd_FadeInBgm(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0056(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0057(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0058(struct ScriptContext* ctx);
BOOL ScrCmd_PlayFanfare(struct ScriptContext* ctx);
BOOL ScrCmd_StopFanfare(struct ScriptContext* ctx);
BOOL ScrCmd_PlayFanfareWait(struct ScriptContext* ctx);
BOOL sub_02041540(struct ScriptContext* ctx);
BOOL ScrCmd_PlayCry(struct ScriptContext* ctx);
BOOL ScrCmd_PlayCryWait(struct ScriptContext* ctx);
BOOL sub_02041598(struct ScriptContext* ctx);
BOOL ScrCmd_PlaySoundWait(struct ScriptContext* ctx);
BOOL sub_020415CC(struct ScriptContext* ctx);
BOOL ScrCmd_PlaySound(struct ScriptContext* ctx);
BOOL ScrCmd_CheckChatotCry(struct ScriptContext* ctx);
BOOL ScrCmd_StartChatotRecord(struct ScriptContext* ctx);
BOOL ScrCmd_StopChatotRecord(struct ScriptContext* ctx);
BOOL ScrCmd_SaveChatotCry(struct ScriptContext* ctx);
BOOL ScrCmd_Unk005D(struct ScriptContext* ctx);
BOOL ScrCmd_SetVolume(struct ScriptContext *ctx);

//scrcmd_union.c
BOOL ScrCmd_UnionGroup(struct ScriptContext* ctx);

//scrcmd_berry_trees.c
BOOL ScrCmd_GetBerryTreeGrowth(struct ScriptContext* ctx);
BOOL ScrCmd_GetBerryTreeType(struct ScriptContext* ctx);
BOOL ScrCmd_GetBerryTreeMulch(struct ScriptContext* ctx);
BOOL ScrCmd_GetBerryTreeWater(struct ScriptContext* ctx);
BOOL ScrCmd_GetBerryTreeAmount(struct ScriptContext* ctx);
BOOL ScrCmd_SetBerryTreeMulch(struct ScriptContext* ctx);
BOOL ScrCmd_SetBerryTreeType(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0184(struct ScriptContext* ctx);
BOOL ScrCmd_TakeBerryTreeBerries(struct ScriptContext* ctx);

//scrcmd_13.c
BOOL ScrCmd_Unk0253(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0254(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0255(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0256(struct ScriptContext* ctx);

//scrcmd_coins.c
BOOL ScrCmd_ShowCoinBox(struct ScriptContext* ctx);
BOOL ScrCmd_HideCoinBox(struct ScriptContext* ctx);
BOOL ScrCmd_UpdateCoinBox(struct ScriptContext* ctx);
BOOL ScrCmd_GetCoins(struct ScriptContext* ctx);
BOOL ScrCmd_GiveCoins(struct ScriptContext* ctx);
BOOL ScrCmd_TakeCoinsImmediate(struct ScriptContext* ctx);
BOOL ScrCmd_TakeCoinsAddress(struct ScriptContext* ctx);
BOOL ScrCmd_HasEnoughCoinsImmediate(struct ScriptContext* ctx);
BOOL ScrCmd_HasEnoughCoinsAddress(struct ScriptContext* ctx);
BOOL ScrCmd_CanGiveCoins(struct ScriptContext* ctx);

//scrcmd_money.c
BOOL ScrCmd_GiveMoney(struct ScriptContext* ctx);
BOOL ScrCmd_TakeMoneyImmediate(struct ScriptContext* ctx);
BOOL ScrCmd_TakeMoneyAddress(struct ScriptContext* ctx);
BOOL ScrCmd_HasEnoughMoneyImmediate(struct ScriptContext* ctx);
BOOL ScrCmd_HasEnoughMoneyAddress(struct ScriptContext* ctx);
BOOL ScrCmd_ShowMoneyBox(struct ScriptContext* ctx);
BOOL ScrCmd_HideMoneyBox(struct ScriptContext* ctx);
BOOL ScrCmd_UpdateMoneyBox(struct ScriptContext* ctx);

//scrcmd_daycare.c
BOOL ScrCmd_GetDaycarePokemonNames(struct ScriptContext* ctx);
BOOL ScrCmd_GetDaycareStatus(struct ScriptContext* ctx);
BOOL ScrCmd_DeleteDaycareEgg(struct ScriptContext* ctx);
BOOL ScrCmd_GiveDaycareEgg(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01A4(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01AA(struct ScriptContext* ctx);
BOOL ScrCmd_GetDaycareLevel(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01AF(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01B0(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01BC(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01BE(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01BF(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01A5(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01A6(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01A7(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01AD(struct ScriptContext* ctx);

//scrcmd_amity_square.c
BOOL ScrCmd_ClearAmitySquareSteps(struct ScriptContext* ctx);
BOOL ScrCmd_CheckAmitySquareSteps(struct ScriptContext* ctx);
BOOL ScrCmd_GetAmitySquareAccessory(struct ScriptContext* ctx);

//scrcmd_party.c
BOOL ScrCmd_GiveMon(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonSpecies(struct ScriptContext* ctx);
BOOL ScrCmd_CheckPartyMonOTID(struct ScriptContext* ctx);
BOOL ScrCmd_GiveEgg(struct ScriptContext* ctx);
BOOL ScrCmd_SetPartyMonMove(struct ScriptContext* ctx);
BOOL ScrCmd_PartyMonHasMove(struct ScriptContext* ctx);
BOOL ScrCmd_FindPartyMonWithMove(struct ScriptContext* ctx);
BOOL ScrCmd_SurvivePsn(struct ScriptContext* ctx);
BOOL ScrCmd_CountPartyMonsAtOrBelowLevel(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonLevel(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonNature(struct ScriptContext* ctx);
BOOL ScrCmd_FindPartyMonWithNature(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonFriendship(struct ScriptContext* ctx);
BOOL ScrCmd_AddPartyMonFriendship(struct ScriptContext* ctx);
BOOL ScrCmd_SubtractPartyMonFriendship(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonContestCondition(struct ScriptContext* ctx);
BOOL ScrCmd_GetLeadingPartyMonSlot(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonTypes(struct ScriptContext* ctx);
BOOL ScrCmd_CountPartyMons(struct ScriptContext* ctx);
BOOL ScrCmd_CountPartyMons_OmitEggs(struct ScriptContext* ctx);
BOOL ScrCmd_CountAvailablePartyMons_IgnoreSlot(struct ScriptContext* ctx);
BOOL ScrCmd_CountAvailablePartyAndPCMons(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyEggCount(struct ScriptContext* ctx);
BOOL ScrCmd_CheckPartyForPokerus(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonGender(struct ScriptContext* ctx);
BOOL ScrCmd_CountPartyMonMoves(struct ScriptContext* ctx);
BOOL ScrCmd_ForgetPartyMonMove(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonMove(struct ScriptContext* ctx);
BOOL ScrCmd_GetPartyMonHeldItem(struct ScriptContext* ctx);
BOOL ScrCmd_ResetPartyMonHeldItem(struct ScriptContext* ctx);
BOOL ScrCmd_CheckPartyForSpecies(struct ScriptContext* ctx);
BOOL ScrCmd_CountPartyMonRibbons(struct ScriptContext* ctx);
BOOL ScrCmd_CountTotalPartyRibbons(struct ScriptContext* ctx);
BOOL ScrCmd_PartyMonHasRibbon(struct ScriptContext* ctx);
BOOL ScrCmd_GivePartyMonRibbon(struct ScriptContext* ctx);
BOOL ScrCmd_CheckPartyForBadEgg(struct ScriptContext* ctx);
BOOL ScrCmd_Unk00A0(struct ScriptContext* ctx);

//scrcmd_fossils.c
BOOL ScrCmd_CountFossils(struct ScriptContext* ctx);
BOOL ScrCmd_GetFossilPokemon(struct ScriptContext* ctx);
BOOL ScrCmd_GetFossilMinimumAmount(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01F2(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01F3(struct ScriptContext* ctx);

//scrcmd_prizes.c
BOOL ScrCmd_GetPrizeItemIdAndCost(struct ScriptContext* ctx);

//scrcmd_flags.c
BOOL ScrCmd_HasSinnohDex(struct ScriptContext* ctx);
BOOL ScrCmd_GiveSinnohDex(struct ScriptContext* ctx);
BOOL ScrCmd_HasRunningShoes(struct ScriptContext* ctx);
BOOL ScrCmd_GiveRunningShoes(struct ScriptContext* ctx);
BOOL ScrCmd_HasBadge(struct ScriptContext* ctx);
BOOL ScrCmd_GiveBadge(struct ScriptContext* ctx);
BOOL ScrCmd_HasBag(struct ScriptContext* ctx);
BOOL ScrCmd_GetTotalEarnedBadges(struct ScriptContext* ctx);
BOOL ScrCmd_GiveBag(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0160(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0161(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0162(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0163(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0164(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0165(struct ScriptContext* ctx);
BOOL ScrCmd_CheckGameCompleted(struct ScriptContext* ctx);
BOOL ScrCmd_SetGameCompleted(struct ScriptContext* ctx);
BOOL ScrCmd_GetSetStrength(struct ScriptContext* ctx);
BOOL ScrCmd_GetSetFlash(struct ScriptContext* ctx);
BOOL ScrCmd_GetSetDefog(struct ScriptContext* ctx);

//scrcmd_items.c
BOOL ScrCmd_GiveItem(struct ScriptContext* ctx);
BOOL ScrCmd_TakeItem(struct ScriptContext* ctx);
BOOL ScrCmd_HasSpaceForItem(struct ScriptContext* ctx);
BOOL ScrCmd_HasItem(struct ScriptContext* ctx);
BOOL ScrCmd_ItemIdIsTMOrHM(struct ScriptContext* ctx);
BOOL ScrCmd_GetItemPocketId(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0081(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0082(struct ScriptContext* ctx);

//scrcmd_underground.c
BOOL ScrCmd_GiveSecretBaseDecoration(struct ScriptContext* ctx);
BOOL ScrCmd_TakeSecretBaseDecoration(struct ScriptContext* ctx);
BOOL ScrCmd_HasSpaceForDecoration(struct ScriptContext* ctx);
BOOL ScrCmd_GetDecorationCount(struct ScriptContext* ctx);
BOOL ScrCmd_GiveUndergroundTrap(struct ScriptContext* ctx);
BOOL ScrCmd_TakeUndergroundTrap(struct ScriptContext* ctx);
BOOL ScrCmd_HasSpaceForTrap(struct ScriptContext* ctx);
BOOL ScrCmd_GetTrapCount(struct ScriptContext* ctx);
BOOL ScrCmd_GiveTreasure(struct ScriptContext* ctx);
BOOL ScrCmd_TakeTreasure(struct ScriptContext* ctx);
BOOL ScrCmd_HasSpaceForTreasure(struct ScriptContext* ctx);
BOOL ScrCmd_GetTreasureCount(struct ScriptContext* ctx);
BOOL ScrCmd_GiveUndergroundSphere(struct ScriptContext* ctx);
BOOL ScrCmd_TakeUndergroundSphere(struct ScriptContext* ctx);
BOOL ScrCmd_HasSpaceForSphere(struct ScriptContext* ctx);
BOOL ScrCmd_GetSphereCount(struct ScriptContext* ctx);

//scrcmd_move_relearner.c
BOOL ScrCmd_Unk01C6(struct ScriptContext* ctx);
BOOL ScrCmd_Unk01C7(struct ScriptContext* ctx);
BOOL ScrCmd_Unk021E(struct ScriptContext* ctx);
BOOL ScrCmd_Unk021F(struct ScriptContext* ctx);
void sub_02045E74(struct ScriptContext* ctx, u8 a1, struct Pokemon* pokemon, u16 *eligibleMoves);
BOOL ScrCmd_Unk0220(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0221(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0224(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0222(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0223(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0225(struct ScriptContext* ctx);

//scrcmd_25.c
BOOL ScrCmd_Unk023F(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0240(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0241(struct ScriptContext* ctx);
BOOL ScrCmd_Unk0242(struct ScriptContext* ctx);

#endif //POKEDIAMOND_SCRCMD_H
