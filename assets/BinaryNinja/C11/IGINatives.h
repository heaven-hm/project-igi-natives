#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

/* Candidate 00413A90: offsets confirmed by disassembly; semantic field names inferred. */
typedef struct weapon_type_context {
    const char *script_directory; /* +0x00, passed as the first %s */
    uint32_t unknown_04;           /* +0x04, not read by this function */
    uint8_t load_enabled;          /* +0x08, zero skips script loading */
    uint8_t _padding_09[3];
} weapon_type_context_t;
void WeaponType_Open(weapon_type_context_t *ctx);

/* IGI1 verified natives: 4646 (Binary Ninja MCP 100% + r2 CFG>=0.85 gate). */
/* Names/signatures validated in Binary Ninja session; cross-checked with OpenIGI C#. */

/* 00401000 QTask_CreateTask */
int QTask_CreateTask(void);
/* 00401050 QTask_OpenEvent */
int QTask_OpenEvent(int a1);
/* 004010A0 QTask_CloseEvent */
int QTask_CloseEvent(void);
/* 004010B0 QTask_DispatchEvent */
int QTask_DispatchEvent(void);
/* 004010D0 QTask_Init */
void * QTask_Init(void);
/* 004011B0 QTask_Update */
int* QTask_Update(void);
/* 004011D0 QTask_OnEvent */
char * QTask_OnEvent(void);
/* 004011F0 QTask_Process */
int QTask_Process(void);
/* 00401230 QTask_Action */
void QTask_Action(void);
/* 00401270 QTask_OnTick */
void QTask_OnTick(void);
/* 004012A0 QTask_HandleInput */
struct status_msg* QTask_HandleInput(void * ctx, int kind, int flags);
/* 004012F0 QTask_LinkEventHandler */
int* QTask_LinkEventHandler(int a1, short a2);
/* 004013B0 QTask_RegisterEventCallback */
int* QTask_RegisterEventCallback(void * a1, short a2, int a3);
/* 00401400 QTask_RemoveEventCallback */
int QTask_RemoveEventCallback(short a1, int a2, int a3);
/* 004014B0 QTask_DeleteTask */
int QTask_DeleteTask(void);
/* 004014E0 QTask_ChangeParent */
int QTask_ChangeParent(short a1);
/* 00401530 QTask_TriggerEvent */
int QTask_TriggerEvent(short a1, int a2, int a3);
/* 004015D0 QTask_AllocateEvent */
int* QTask_AllocateEvent(int* a1);
/* 004015F0 QTask_FindType */
int QTask_FindType(int* a1);
/* 00401780 QTask_CleanupTypes */
int* QTask_CleanupTypes(void * a1);
/* 004017C0 QTask_UnableToAllocateEven */
int QTask_UnableToAllocateEven(short a1);
/* 00401810 QTask_UnableToAllocateEven_2 */
int QTask_UnableToAllocateEven_2(short a1);
/* 00401860 QTask_CleanupEvents */
unsigned int QTask_CleanupEvents(short a1, char a2);
/* 00401890 QTask_ProcessQueue */
int QTask_ProcessQueue(short a1, int a2);
/* 004018C0 QTask_InitContext */
unsigned int QTask_InitContext(char a1);
/* 004018E0 QTask_CreateTask_2 */
unsigned int QTask_CreateTask_2(int a1);
/* 004018F0 QTask_OpenEvent_2 */
int QTask_OpenEvent_2(void);
/* 00401900 TaskType_Register */
int TaskType_Register(int a1, int a2, short a3, int a4);
/* 00401A20 QTask_CloseEvent_2 */
unsigned int QTask_CloseEvent_2(short a1);
/* 00401A60 QTask_DispatchEvent_2 */
int QTask_DispatchEvent_2(void);
/* 00401A70 QTask_QtaskTypeSNotDefined */
int QTask_QtaskTypeSNotDefined(char * a1);
/* 00401AE0 QTask_LinkEventHandler_2 */
int* QTask_LinkEventHandler_2(void * a1);
/* 00401B20 Qtask_UpdateList */
int Qtask_UpdateList(int* a1);
/* 00401B90 QTask_RegisterEventCallback_2 */
int QTask_RegisterEventCallback_2(short a1);
/* 00401BB0 QTask_RemoveEventCallback_2 */
void * QTask_RemoveEventCallback_2(int* a1, void * a2);
/* 00401BE0 QTask_DeleteTask_2 */
int* QTask_DeleteTask_2(void * a1, short a2);
/* 00401C10 QTask_ChangeParent_2 */
void * const QTask_ChangeParent_2(void * a1, short a2);
/* 00401C40 QTask_TriggerEvent_2 */
int* QTask_TriggerEvent_2(int* a1, short a2);
/* 00401C80 QTask_AllocateEvent_2 */
void * const QTask_AllocateEvent_2(void * a1, short a2);
/* 00401CC0 QTask_FindType_2 */
void * QTask_FindType_2(void * a1, short a2);
/* 00401CF0 TaskType_IsDerivedFrom */
int TaskType_IsDerivedFrom(int a1, short a2);
/* 00401D30 QTask_CleanupTypes_2 */
int QTask_CleanupTypes_2(char a1, void * a2);
/* 00401D50 QTask_CleanupEvents_2 */
int QTask_CleanupEvents_2(char a1);
/* 00401D80 QTask_ProcessQueue_2 */
int QTask_ProcessQueue_2(void * a1, int a2, int a3);
/* 00401E30 QTask_InitContext_2 */
void * QTask_InitContext_2(void * a1, int a2, int a3);
/* 00401E70 QTask_CreateTask_3 */
int QTask_CreateTask_3(void * a1, int a2, int a3, int a4);
/* 00401F30 QTask_OpenEvent_3 */
int QTask_OpenEvent_3(int a1);
/* 00401F40 QTask_CloseEvent_3 */
int* QTask_CloseEvent_3(int* a1, int* a2);
/* 00401F60 QTask_DispatchEvent_3 */
int QTask_DispatchEvent_3(int a1);
/* 00401F80 QTask_LinkEventHandler_3 */
int QTask_LinkEventHandler_3(int a1);
/* 00401FA0 QTask_RegisterEventCallback_3 */
unsigned int QTask_RegisterEventCallback_3(short a1, int a2);
/* 00401FC0 Flow_Init */
void * Flow_Init(void);
/* 00402260 Flow_LoadParameters */
void * Flow_LoadParameters(unsigned int a1);
/* 00402780 Flow_RequestEvent */
int Flow_RequestEvent(int a1, float a2);
/* 004027E0 Flow_InitEvents */
unsigned int Flow_InitEvents(void);
/* 004027F0 Flow_RequestEvent_2 */
int Flow_RequestEvent_2(void);
/* 00402800 Flow_CreateHandler */
struct status_msg* Flow_CreateHandler(void * a1);
/* 00402820 Frames_Set */
void Frames_Set(int frames);
/* 00402870 Frames_Get */
int Frames_Get(void);
/* 00402880 Game_GetContext */
struct frames_ctx* Game_GetContext(void);
/* 00402890 Game_GetScriptContext */
int Game_GetScriptContext(void);
/* 004028A0 Flow_SetState */
int Flow_SetState(int a1);
/* 004028B0 Frames_GetUpdateCounter */
unsigned int Frames_GetUpdateCounter(void);
/* 004028C0 Frames_GetTaskCounter */
unsigned int Frames_GetTaskCounter(void);
/* 004028D0 Game_TimingBegin */
int Game_TimingBegin(void);
/* 004028F0 Game_TimingEnd */
int Game_TimingEnd(void);
/* 00402930 Flow_RunHandler */
int Flow_RunHandler(void);
/* 00402C40 Flow_DeleteHandler */
int Flow_DeleteHandler(void);
/* 00402F50 Config_YmbeAfp */
int __fastcall Config_YmbeAfp(int a1);
/* 00402FF0 Config_FillPlayerProfileListBox_2 */
int Config_FillPlayerProfileListBox_2(void);
/* 00403660 GOStart */
int GOStart(int a1, float a2);
/* 004036B0 GO_Player */
int GO_Player(int a1, float a2);
/* 00403750 GO_ActiveMission */
int GO_ActiveMission(int a1, float a2);
/* 004037C0 GO_InRemap */
int GO_InRemap(int a1, float a2);
/* 00403870 GO_InMouInv */
int GO_InMouInv(int a1, float a2);
/* 004038E0 GO_InMouSens */
int GO_InMouSens(long double a1, int a2, float a3);
/* 00403950 GO_GfxDisp */
int GO_GfxDisp(int a1, float a2);
/* 00403A00 GO_GameLang */
int GO_GameLang(int a1, float a2);
/* 00403AC0 GO_GameDiff */
int GO_GameDiff(int a1, float a2);
/* 00403B30 Config_IsGermany */
int Config_IsGermany(int a1);
/* 00403B70 Config_ResetGraphicOptions */
int Config_ResetGraphicOptions(int a1);
/* 00403C10 GO_ContentControlPW */
int GO_ContentControlPW(int a1, float a2);
/* 00403C70 Config_GetContentControlPassword */
int Config_GetContentControlPassword(int a1);
/* 00403CC0 Config_VerifyContentControlPassword */
int Config_VerifyContentControlPassword(int a1, float a2);
/* 00403D90 Config_IsContentControlPasswordEnabled */
int Config_IsContentControlPasswordEnabled(int a1);
/* 00403DF0 GO_IsBlood */
int GO_IsBlood(int a1, float a2);
/* 00403E60 GO_SoundSpeech */
int GO_SoundSpeech(long double a1, int a2, float a3);
/* 00403EF0 GO_SoundMusic */
int GO_SoundMusic(long double a1, int a2, float a3);
/* 00403F80 GO_SoundFX */
int GO_SoundFX(long double a1, int a2, float a3);
/* 00404010 GO_GfxDevice */
int GO_GfxDevice(int a1, float a2);
/* 00404080 GO_GfxGamma */
int GO_GfxGamma(long double a1, int a2, float a3);
/* 004040F0 GO_GfxPerformance */
int GO_GfxPerformance(int a1, float a2);
/* 00404160 Config_GameOptionsInputSetInvertMouse */
int Config_GameOptionsInputSetInvertMouse(long double a1, int a2, float a3);
/* 004041D0 Config_GameOptionsInputGetInvertMouse */
int Config_GameOptionsInputGetInvertMouse(int a1);
/* 00404230 Config_GameOptionsInputSetMouseSensitivity */
int Config_GameOptionsInputSetMouseSensitivity(long double a1, int a2, float a3);
/* 00404290 Config_GameOptionsInputGetMouseSensitivity */
int Config_GameOptionsInputGetMouseSensitivity(int a1);
/* 004042E0 Config_GameOptionsInputSetBloodEnabled */
int Config_GameOptionsInputSetBloodEnabled(int80_t a1, int a2, float a3);
/* 00404340 Config_GameOptionsInputGetBloodEnabled */
int Config_GameOptionsInputGetBloodEnabled(int a1);
/* 00404390 Config_RegisterOptions */
void * Config_RegisterOptions(void * a1);
/* 00404450 Config_FillScreenResolutionListBox */
int Config_FillScreenResolutionListBox(int a1, float a2);
/* 00404510 Config_GraphicOptionsSetResolution */
int Config_GraphicOptionsSetResolution(int a1, float a2);
/* 00404590 Config_GetActiveGraphicOptions */
void * Config_GetActiveGraphicOptions(void);
/* 004045B0 Config_GraphicOptionsGetResolution */
int Config_GraphicOptionsGetResolution(int a1, float a2);
/* 004046A0 Config_FillRenderDeviceListBox */
int Config_FillRenderDeviceListBox(int a1);
/* 00404710 Config_GraphicOptionsGetDevice */
int Config_GraphicOptionsGetDevice(int a1);
/* 004047F0 Config_GraphicOptionsSetDevice */
int Config_GraphicOptionsSetDevice(int a1, float a2);
/* 004048B0 Config_GraphicOptionsSetGamma */
int Config_GraphicOptionsSetGamma(long double a1, int a2, float a3);
/* 00404910 Config_GraphicOptionsGetGamma */
int Config_GraphicOptionsGetGamma(int a1);
/* 00404960 Config_GraphicOptionsSetTransparency */
int Config_GraphicOptionsSetTransparency(int a1, float a2);
/* 004049C0 Config_GraphicOptionsGetTransparency */
int Config_GraphicOptionsGetTransparency(int a1);
/* 00404A10 Config_SoundOptionsSetSoundsEffects */
int Config_SoundOptionsSetSoundsEffects(int a1, float a2);
/* 00404A70 Config_SaveGameOptions */
void * Config_SaveGameOptions(void);
/* 00404A90 Config_SoundOptionsGetSoundsEffects */
int Config_SoundOptionsGetSoundsEffects(int a1);
/* 00404AE0 Config_SoundOptionsSetSoundsEffectsVolume */
int Config_SoundOptionsSetSoundsEffectsVolume(long double a1, int a2, float a3);
/* 00404B40 Config_SoundOptionsGetSoundsEffectsVolume */
int Config_SoundOptionsGetSoundsEffectsVolume(int a1);
/* 00404B90 Config_SoundOptionsSetMusic */
int Config_SoundOptionsSetMusic(int a1, float a2);
/* 00404BF0 Config_SoundOptionsGetMusic */
int Config_SoundOptionsGetMusic(int a1);
/* 00404C40 Config_SoundOptionsSetMusicVolume */
int Config_SoundOptionsSetMusicVolume(long double a1, int a2, float a3);
/* 00404CA0 Config_SoundOptionsGetMusicVolume */
int Config_SoundOptionsGetMusicVolume(int a1);
/* 00404CF0 Config_SoundOptionsSetSpeech */
int Config_SoundOptionsSetSpeech(int a1, float a2);
/* 00404D50 Config_SoundOptionsGetSpeech */
int Config_SoundOptionsGetSpeech(int a1);
/* 00404DA0 Config_SoundOptionsSetSpeechVolume */
int Config_SoundOptionsSetSpeechVolume(long double a1, int a2, float a3);
/* 00404E00 Config_SoundOptionsGetSpeechVolume */
int Config_SoundOptionsGetSpeechVolume(int a1);
/* 00404E50 Config_SoundOptionsSetReverseStereo */
int Config_SoundOptionsSetReverseStereo(int a1, float a2);
/* 00404EB0 Config_SoundOptionsGetReverseStereo */
int Config_SoundOptionsGetReverseStereo(int a1);
/* 00404F00 Config_GraphicOptionsSetPerformanceFlags */
int Config_GraphicOptionsSetPerformanceFlags(int a1, float a2);
/* 00404F60 Config_GraphicOptionsGetPerformanceFlags */
int Config_GraphicOptionsGetPerformanceFlags(int a1);
/* 00404FA0 Config_FillPlayerProfileListBox */
int Config_FillPlayerProfileListBox(int a1);
/* 00405010 Config_GetActivePlayerProfileIndex */
int Config_GetActivePlayerProfileIndex(int a1);
/* 00405050 Config_SetActivePlayerProfileIndex */
int Config_SetActivePlayerProfileIndex(int a1, float a2);
/* 004050A0 Config_CreateNewPlayerProfile */
int Config_CreateNewPlayerProfile(int a1, float a2);
/* 00405300 Config_SaveGraphicOptions */
int Config_SaveGraphicOptions(void);
/* 00405400 Config_DeletePlayerProfile */
int Config_DeletePlayerProfile(int a1, float a2);
/* 004054F0 Config_GetNumberOfPlayerProfiles */
int Config_GetNumberOfPlayerProfiles(int a1);
/* 00405530 Config_GraphicOptionsGetPerfLevelFromFlags */
int Config_GraphicOptionsGetPerfLevelFromFlags(int a1, float a2);
/* 004055C0 Config_GraphicOptionsGetPerfFlagsFromLevel */
int Config_GraphicOptionsGetPerfFlagsFromLevel(int a1, float a2);
/* 00405620 Config_GraphicOptionsNumPerfLevels */
int Config_GraphicOptionsNumPerfLevels(int a1);
/* 00405660 Config_FillMissionSelectionBox */
int Config_FillMissionSelectionBox(int a1);
/* 004056F0 Config_FillMissionPictureBox */
int Config_FillMissionPictureBox(int a1);
/* 00405760 Config_FillMissionTextBox */
int Config_FillMissionTextBox(int a1);
/* 004057D0 Config_PlayerGetActiveMission */
int Config_PlayerGetActiveMission(int a1, int a2);
/* 00405830 Config_Language */
int Config_Language(void);
/* 00405850 Config_Read */
int Config_Read(void * a1);
/* 004058A0 Config_SaveSoundOptions */
int Config_SaveSoundOptions(void);
/* 00405980 Config_NoD3DDriversWithHard */
int Config_NoD3DDriversWithHard(void);
/* 00405B30 Config_Language_2 */
int Config_Language_2(void);
/* 00405BD0 Config_Write */
int Config_Write(void * a1);
/* 00405C50 Config_SaveInputOptions */
int Config_SaveInputOptions(int* a1);
/* 00405C90 Config_Goplayer */
int Config_Goplayer(int* a1, int a2);
/* 00405D40 Config_English */
int Config_English(int* a1, int a2);
/* 00405E00 Config_Gosoundspeech */
int Config_Gosoundspeech(int* a1, int a2);
/* 00405EC0 Config_Gogfxdisp */
int Config_Gogfxdisp(int* a1, int a2);
/* 00405F90 KEY_A */
int KEY_A(int* a1, int a2);
/* 00406170 Config_Gocontentcontrolpw */
int Config_Gocontentcontrolpw(int* a1);
/* 004061B0 Config_SavePlayerProfile */
void Config_SavePlayerProfile(void);
/* 004061C0 Config_SetGamma */
void * Config_SetGamma(void);
/* 004061E0 Config_SetResolution */
int Config_SetResolution(void);
/* 00406200 Config_SetVolume */
int Config_SetVolume(int a1);
/* 00406220 Config_GetActivePlayerProfileRecord */
void * Config_GetActivePlayerProfileRecord(void);
/* 00406240 KEY_ANGLE */
int KEY_ANGLE(int a1, int* a2, void ** a3);
/* 00406270 Config_SetDifficulty */
void Config_SetDifficulty(void);
/* 00406280 Config_Moveleft */
int Config_Moveleft(int a1, int* a2, void ** a3);
/* 004062B0 Config_ValidatePassword */
void Config_ValidatePassword(void);
/* 004062C0 Config_RegisterOptions_2 */
long double Config_RegisterOptions_2(void);
/* 004062D0 Config_SaveGameOptions_2 */
long double Config_SaveGameOptions_2(void);
/* 004062E0 Config_SaveGraphicOptions_2 */
int Config_SaveGraphicOptions_2(void);
/* 004062F0 Config_SaveSoundOptions_2 */
int Config_SaveSoundOptions_2(int a1);
/* 00406310 Config_SaveInputOptions_2 */
void Config_SaveInputOptions_2(void);
/* 00406320 Config_English_2 */
void Config_English_2(void);
/* 00406330 Config_SavePlayerProfile_2 */
void Config_SavePlayerProfile_2(void);
/* 00406340 Config_SetGamma_2 */
void * Config_SetGamma_2(int a1);
/* 00406390 Config_SetResolution_2 */
int __fastcall Config_SetResolution_2(int a1);
/* 00406450 HumanAIConfig_Init */
int* HumanAIConfig_Init(void);
/* 00406D10 HumanAIConfig_OnEvent */
int HumanAIConfig_OnEvent(void * a1);
/* 00406D40 AIConfig_RegisterConfig */
void AIConfig_RegisterConfig(void * a1);
/* 00406D90 AIConfig_InitItem */
unsigned int AIConfig_InitItem(void);
/* 00406DD0 AIConfig_GetDetectionRange */
int AIConfig_GetDetectionRange(void);
/* 00406DE0 AIConfig_SetDifficulty */
int AIConfig_SetDifficulty(void);
/* 00406DF0 AIConfig_UnableToCreateHumana */
void * AIConfig_UnableToCreateHumana(void * a1);
/* 00406F70 AIConfig_NoHumanaiconfigTaskF */
int AIConfig_NoHumanaiconfigTaskF(void * a1);
/* 004071D0 AIConfig_LoadSettings */
int AIConfig_LoadSettings(void);
/* 004071E0 Weapon_ConfigRead */
void * Weapon_ConfigRead(int a1, void * a2);
/* 00407290 WeaponConfig_Init */
int* WeaponConfig_Init(void);
/* 00407BB0 AIConfig_ApplyProfile */
int AIConfig_ApplyProfile(void * a1);
/* 00407BE0 WeaponConfig_Setup */
int* WeaponConfig_Setup(void * a1);
/* 00407CD0 AIConfig_RegisterConfig_2 */
int AIConfig_RegisterConfig_2(int a1);
/* 00407D00 AIConfig_InitItem_2 */
unsigned int AIConfig_InitItem_2(void);
/* 00407D60 HumanPlayer_Setactivematerial */
void * HumanPlayer_Setactivematerial(void);
/* 00407DE0 SetActiveMaterial */
int SetActiveMaterial(int a1, float a2);
/* 00407E30 DefineQ_Material */
int DefineQ_Material(long double a1, long double a2, long double a3, int a4, int a5);
/* 00407F50 Define_GameMaterial */
int Define_GameMaterial(long double a1, long double a2, long double a3, long double a4, int a5, float a6);
/* 004082B0 HumanPlayer_LoadParameters_2 */
unsigned int HumanPlayer_LoadParameters_2(void);
/* 00408320 HumanPlayer_UpdateMotion */
int HumanPlayer_UpdateMotion(void);
/* 00408330 HumanPlayer_CheckGround */
int HumanPlayer_CheckGround(void);
/* 00408340 HumanPlayer_UpdateStamina */
int HumanPlayer_UpdateStamina(void);
/* 00408350 GameMaterial_LoadParameters */
int GameMaterial_LoadParameters(void);
/* 00408390 HumanPlayer_UpdateHealth */
int HumanPlayer_UpdateHealth(int a1);
/* 004083C0 HumanPlayer_HandleInput */
int HumanPlayer_HandleInput(short a1, int a2, int a3, int a4, int* a5);
/* 00408420 HumanPlayer_ApplyPhysics */
void * HumanPlayer_ApplyPhysics(void * a1);
/* 00408460 FallLanding */
int FallLanding(float a1);
/* 00408720 HumanPlayer_PlayFootstep */
int HumanPlayer_PlayFootstep(void * a1);
/* 00408770 HumanPlayer_PlaySound */
int HumanPlayer_PlaySound(void * a1, void * a2);
/* 00408A40 HumanPlayer_TakeDamage */
int HumanPlayer_TakeDamage(void * a1, void * a2);
/* 00408AA0 HumanPlayer_UpdateAnimation */
int HumanPlayer_UpdateAnimation(void * a1, void * a2);
/* 00408C30 HumanPlayer_CheckCollision */
int HumanPlayer_CheckCollision(void * a1, void * a2);
/* 00408C80 HumanPlayer_ApplyRecoil */
int HumanPlayer_ApplyRecoil(void * a1, void * a2);
/* 00408DF0 HumanPlayer_LoadParameters_3 */
int HumanPlayer_LoadParameters_3(void * a1, float a2);
/* 00408E70 HumanPlayer_UpdateMotion_2 */
int HumanPlayer_UpdateMotion_2(void * a1, void * a2);
/* 00408FE0 HumanPlayer_CheckGround_2 */
int HumanPlayer_CheckGround_2(void * a1, float a2);
/* 00409090 HumanPlayer_UpdateStamina_2 */
int HumanPlayer_UpdateStamina_2(void * a1, void * a2);
/* 00409220 HumanPlayer_UpdateHealth_2 */
int HumanPlayer_UpdateHealth_2(void * a1, float a2);
/* 004092A0 HumanPlayer_HandleInput_2 */
int HumanPlayer_HandleInput_2(void * a1, void * a2);
/* 00409410 HumanPlayer_ApplyPhysics_2 */
int HumanPlayer_ApplyPhysics_2(void * a1, float a2);
/* 00409490 HumanPlayer_PlayFootstep_2 */
int HumanPlayer_PlayFootstep_2(void * a1, void * a2);
/* 00409600 HumanPlayer_PlaySound_2 */
int HumanPlayer_PlaySound_2(void * a1, void * a2);
/* 00409660 HumanPlayer_TakeDamage_2 */
int HumanPlayer_TakeDamage_2(void * a1, void * a2);
/* 004097F0 HumanPlayer_UpdateAnimation_2 */
int HumanPlayer_UpdateAnimation_2(void * a1, void * a2);
/* 00409850 HumanPlayer_CheckCollision_2 */
int HumanPlayer_CheckCollision_2(void * a1, void * a2);
/* 004099E0 HumanPlayer_ApplyRecoil_2 */
int HumanPlayer_ApplyRecoil_2(void * a1, float a2);
/* 00409C10 HumanPlayer_LoadParameters_4 */
int HumanPlayer_LoadParameters_4(void * a1, float a2);
/* 00409E00 HumanPlayer_UpdateMotion_3 */
int HumanPlayer_UpdateMotion_3(void * a1, float a2);
/* 00409FF0 HumanPlayer_CheckGround_3 */
int HumanPlayer_CheckGround_3(void * a1, float a2);
/* 0040A220 HumanPlayer_UpdateStamina_3 */
int HumanPlayer_UpdateStamina_3(void * a1, float a2);
/* 0040A410 HumanPlayer_UpdateHealth_3 */
int HumanPlayer_UpdateHealth_3(void * a1, float a2);
/* 0040A600 HumanPlayer_HandleInput_3 */
int HumanPlayer_HandleInput_3(void * a1, float a2);
/* 0040A800 HumanPlayer_ApplyPhysics_3 */
int HumanPlayer_ApplyPhysics_3(void * a1, float a2);
/* 0040AA00 HumanPlayer_PlayFootstep_3 */
int HumanPlayer_PlayFootstep_3(void * a1, void * a2);
/* 0040AA90 HumanPlayer_PlaySound_3 */
int HumanPlayer_PlaySound_3(void * a1, void * a2);
/* 0040AB20 HumanPlayer_TakeDamage_3 */
int HumanPlayer_TakeDamage_3(void * a1, void * a2);
/* 0040ACB0 HumanPlayer_UpdateAnimation_3 */
int HumanPlayer_UpdateAnimation_3(void * a1, float a2);
/* 0040AE70 HumanPlayer_CheckCollision_3 */
int HumanPlayer_CheckCollision_3(void * a1, float a2);
/* 0040B020 HumanPlayer_ApplyRecoil_3 */
int HumanPlayer_ApplyRecoil_3(void * a1, float a2);
/* 0040B1D0 HumanPlayer_LoadParameters_5 */
int HumanPlayer_LoadParameters_5(void * a1, float a2);
/* 0040B390 HumanPlayer_UpdateMotion_4 */
int HumanPlayer_UpdateMotion_4(void * a1, float a2);
/* 0040B540 HumanPlayer_CheckGround_4 */
int HumanPlayer_CheckGround_4(void * a1, float a2);
/* 0040B6F0 HumanPlayer_UpdateStamina_4 */
int HumanPlayer_UpdateStamina_4(void * a1, float a2);
/* 0040B8B0 HumanPlayer_UpdateHealth_4 */
int HumanPlayer_UpdateHealth_4(void * a1, float a2);
/* 0040BA70 HumanPlayer_HandleInput_4 */
int* HumanPlayer_HandleInput_4(void * a1, void * a2);
/* 0040BBD0 HumanPlayer_ApplyPhysics_4 */
int HumanPlayer_ApplyPhysics_4(void * a1, float a2);
/* 0040BDB0 HumanPlayer_PlayFootstep_4 */
float HumanPlayer_PlayFootstep_4(void * a1, void * a2) __location("result");
/* 0040BE40 HumanPlayer_PlaySound_4 */
int HumanPlayer_PlaySound_4(void * a1, float a2);
/* 0040BED0 HumanPlayer_TakeDamage_4 */
void * HumanPlayer_TakeDamage_4(void * a1, float a2);
/* 0040C140 HumanPlayer_UpdateAnimation_4 */
void * HumanPlayer_UpdateAnimation_4(void * a1);
/* 0040C150 HumanPlayer_CheckCollision_4 */
void * HumanPlayer_CheckCollision_4(void * a1);
/* 0040C270 HumanPlayer_ApplyRecoil_4 */
int* HumanPlayer_ApplyRecoil_4(int a1, void * a2);
/* 0040C2D0 HumanPlayer_LoadParameters_6 */
void * HumanPlayer_LoadParameters_6(void * a1);
/* 0040C2E0 HumanPlayer_UpdateMotion_5 */
void * HumanPlayer_UpdateMotion_5(void * a1);
/* 0040C2F0 HumanPlayer_CheckGround_5 */
void * HumanPlayer_CheckGround_5(void * a1, float a2);
/* 0040C510 HumanPlayer_UpdateStamina_5 */
int HumanPlayer_UpdateStamina_5(void * a1, int a2);
/* 0040C670 HumanPlayer_UpdateHealth_5 */
struct status_msg* HumanPlayer_UpdateHealth_5(void * a1, float a2);
/* 0040C970 HumanPlayer_HandleInput_5 */
void * HumanPlayer_HandleInput_5(void * a1, float a2);
/* 0040CB90 HumanPlayer_ApplyPhysics_5 */
void * HumanPlayer_ApplyPhysics_5(void * a1, float a2);
/* 0040CCC0 HumanPlayer_PlayFootstep_5 */
int* HumanPlayer_PlayFootstep_5(int* a1, void * a2);
/* 0040CD30 HumanPlayer_PlaySound_5 */
int* HumanPlayer_PlaySound_5(void * a1, int a2);
/* 0040CF70 HumanPlayer_TakeDamage_5 */
void * HumanPlayer_TakeDamage_5(void * a1, float a2);
/* 0040D180 HumanPlayer_UpdateAnimation_5 */
void * HumanPlayer_UpdateAnimation_5(void * a1, void * a2);
/* 0040D660 HumanPlayer_CheckCollision_5 */
void ** HumanPlayer_CheckCollision_5(void * a1, void * a2);
/* 0040D6B0 Ladder_ClimbTick */
int Ladder_ClimbTick(void * a1, void * a2);
/* 0040D8E0 HumanPlayer_ApplyRecoil_5 */
void ** HumanPlayer_ApplyRecoil_5(void * a1, void * a2);
/* 0040D920 Ladder_GetOnTop */
int* Ladder_GetOnTop(void * a1, void * a2);
/* 0040DA40 HumanPlayer_LoadParameters_7 */
void ** HumanPlayer_LoadParameters_7(void * a1, void * a2);
/* 0040DA80 HumanPlayer_UpdateMotion_6 */
int* HumanPlayer_UpdateMotion_6(void * a1, void * a2);
/* 0040DBA0 HumanPlayer_WireSlide1 */
struct status_msg* HumanPlayer_WireSlide1(void * a1, void * a2);
/* 0040DBF0 HumanPlayer_CheckGround_6 */
void HumanPlayer_CheckGround_6(void * a1, void * a2);
/* 0040DCA0 HumanPlayer_UpdateStamina_6 */
void ** HumanPlayer_UpdateStamina_6(void * a1, void * a2);
/* 0040DD60 HumanPlayer_UpdateHealth_6 */
void ** HumanPlayer_UpdateHealth_6(void * a1, void * a2);
/* 0040DE90 HumanPlayer_HandleInput_6 */
void ** HumanPlayer_HandleInput_6(void * a1, void * a2);
/* 0040DEF0 HumanPlayer_ApplyPhysics_6 */
int* HumanPlayer_ApplyPhysics_6(void * a1);
/* 0040DF70 HumanPlayer_PlayFootstep_6 */
void * HumanPlayer_PlayFootstep_6(void * a1, void * a2);
/* 0040E370 HumanPlayer_TakeDamage_6 */
struct status_msg* HumanPlayer_TakeDamage_6(void * a1, void * a2);
/* 0040E3C0 HumanPlayer_UpdateAnimation_6 */
int HumanPlayer_UpdateAnimation_6(void * a1, void * a2);
/* 0040E470 HumanPlayer_CheckCollision_6 */
void * HumanPlayer_CheckCollision_6(void * a1, void * a2);
/* 0040E4D0 HumanPlayer_ApplyRecoil_6 */
int HumanPlayer_ApplyRecoil_6(void * a1, void * a2);
/* 0040E560 HumanPlayer_PlayerDeath */
int HumanPlayer_PlayerDeath(void * a1, void * a2);
/* 0040E620 HumanPlayer_LoadParameters_8 */
char HumanPlayer_LoadParameters_8(void * a1, float a2);
/* 0040E6E0 HumanPlayer_UpdateMotion_7 */
int* HumanPlayer_UpdateMotion_7(void * a1, void * a2);
/* 0040E740 HumanPlayer_CheckGround_7 */
short HumanPlayer_CheckGround_7(void * a1, float a2);
/* 0040E960 HumanPlayer_UpdateStamina_7 */
void ** HumanPlayer_UpdateStamina_7(void * a1, void * a2);
/* 0040E9B0 HumanPlayer_UpdateHealth_7 */
void * HumanPlayer_UpdateHealth_7(void * a1);
/* 0040E9C0 HumanPlayer_HandleInput_7 */
int* HumanPlayer_HandleInput_7(void * a1, int* a2);
/* 0040EF70 HumanPlayer_PlayFootstep_7 */
void ** HumanPlayer_PlayFootstep_7(void * a1, void * a2);
/* 0040F0D0 HumanPlayer_GunsDry1 */
struct status_msg* HumanPlayer_GunsDry1(void * a1, void * a2);
/* 0040F170 HumanPlayer_PlaySound_7 */
void * HumanPlayer_PlaySound_7(void * a1);
/* 0040F180 HumanPlayer_TakeDamage_7 */
int HumanPlayer_TakeDamage_7(void * a1, void * a2);
/* 0040F230 HumanPlayer_UpdateAnimation_7 */
void * HumanPlayer_UpdateAnimation_7(void * a1, void * a2);
/* 0040F280 HumanPlayer_CheckCollision_7 */
int HumanPlayer_CheckCollision_7(void * a1, int* a2);
/* 0040F300 HumanPlayer_ApplyRecoil_7 */
int HumanPlayer_ApplyRecoil_7(void * a1, void * a2);
/* 0040F370 HumanPlayer_LoadParameters_9 */
void * HumanPlayer_LoadParameters_9(void * a1, void * a2);
/* 0040F4A0 HumanPlayer_UpdateMotion_8 */
int HumanPlayer_UpdateMotion_8(void * a1, void * a2);
/* 0040F4F0 HumanPlayer_CheckGround_8 */
int HumanPlayer_CheckGround_8(void * a1, void * a2);
/* 0040F590 HumanPlayer_GrenadeTick1 */
struct status_msg* HumanPlayer_GrenadeTick1(void * a1, void * a2);
/* 0040F640 HumanPlayer_UpdateStamina_8 */
void * HumanPlayer_UpdateStamina_8(void * a1, int* a2);
/* 0040F760 HumanPlayer_UpdateHealth_8 */
int HumanPlayer_UpdateHealth_8(int* a1, int a2);
/* 0040F930 HumanPlayer_HandleInput_8 */
void * HumanPlayer_HandleInput_8(void * a1, void * a2);
/* 0040F950 HumanPlayer_ApplyPhysics_8 */
void * HumanPlayer_ApplyPhysics_8(void * a1, int* a2);
/* 0040FA20 HumanPlayer_PlayFootstep_8 */
int HumanPlayer_PlayFootstep_8(void * a1, void * a2);
/* 0040FA60 HumanPlayer_PlaySound_8 */
void * HumanPlayer_PlaySound_8(void * a1, void * a2);
/* 0040FA80 HumanPlayer_UpdateAnimation_8 */
int HumanPlayer_UpdateAnimation_8(void * a1, void * a2);
/* 0040FB30 HumanPlayer_CheckCollision_8 */
int HumanPlayer_CheckCollision_8(void * a1, void * a2);
/* 0040FBE0 HumanPlayer_ApplyRecoil_8 */
int* HumanPlayer_ApplyRecoil_8(void * a1, void * a2);
/* 0040FDA0 HumanPlayer_LoadParameters_10 */
void * HumanPlayer_LoadParameters_10(void * a1, void * a2);
/* 0040FE30 HumanPlayer_Init */
void * HumanPlayer_Init(void);
/* 00410070 DefineHumanPlayerGeneral */
int DefineHumanPlayerGeneral(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, int a9, float a10);
/* 004101C0 Define_HumanPlayerWeaponCycle */
int Define_HumanPlayerWeaponCycle(int a1, int* a2);
/* 00410240 Define_HumanPlayerWeaponCategory */
int Define_HumanPlayerWeaponCategory(int a1, float a2);
/* 004102D0 Define_HumanPlayerAmmoLimit */
int Define_HumanPlayerAmmoLimit(int a1, int* a2);
/* 00410370 HumanPlayer_LoadParameters_11 */
int HumanPlayer_LoadParameters_11(int* a1, int a2);
/* 00410840 HumanPlayer_Setup */
int HumanPlayer_Setup(void * a1);
/* 004109A0 Human_RunUpdate */
void * Human_RunUpdate(int* a1);
/* 00410F70 HumanPlayer_UpdateStamina_9 */
int* HumanPlayer_UpdateStamina_9(void * a1);
/* 00411000 HumanPlayer_UpdateHealth_9 */
int* HumanPlayer_UpdateHealth_9(int* a1);
/* 00411240 HumanPlayer_Earcandy */
void * HumanPlayer_Earcandy(void * a1);
/* 00411300 HumanPlayer_HandleInput_9 */
void * HumanPlayer_HandleInput_9(void * a1);
/* 00411350 HumanPlayer_ApplyPhysics_9 */
int HumanPlayer_ApplyPhysics_9(void * a1);
/* 004113C0 HumanPlayer_PlayFootstep_9 */
int HumanPlayer_PlayFootstep_9(void * a1);
/* 004113E0 Ladder_Mount */
double* Ladder_Mount(float a1);
/* 00411770 HumanPlayer_PlaySound_9 */
int* HumanPlayer_PlaySound_9(float a1);
/* 00411AE0 HumanPlayer_TakeDamage_9 */
int HumanPlayer_TakeDamage_9(void * a1);
/* 00411F20 HumanPlayer_WireSlide1_2 */
int HumanPlayer_WireSlide1_2(float* a1);
/* 00412440 Human_DamageApply */
float Human_DamageApply(float a1, int* a2) __location("result");
/* 00412990 HumanPlayer_Update */
int HumanPlayer_Update(float a1, float a2);
/* 00412CE0 HumanPlayer_OnEvent */
int HumanPlayer_OnEvent(float a1, float* a2);
/* 00412F80 HumanPlayer_Action */
struct status_msg* HumanPlayer_Action(void * a1);
/* 00413090 HumanPlayer_Cleanup */
int HumanPlayer_Cleanup(void * a1, int* a2);
/* 00413120 HumanPlayer_Cleanup_2 */
void * HumanPlayer_Cleanup_2(void * a1, int a2);
/* 00413770 HumanPlayer_UpdateAnimation_9 */
unsigned int HumanPlayer_UpdateAnimation_9(void);
/* 004137A0 HumanPlayer_LoadParameters */
int HumanPlayer_LoadParameters(void);
/* 004137E0 HumanPlayer_CheckCollision_9 */
void ** HumanPlayer_CheckCollision_9(void * a1, float a2);
/* 00413A60 HumanPlayer_ApplyRecoil_9 */
int HumanPlayer_ApplyRecoil_9(void * a1, int a2);
/* 00413A70 HumanPlayer_LoadParameters_12 */
int HumanPlayer_LoadParameters_12(void);
/* 00413A80 HumanPlayer_UpdateMotion_10 */
long double HumanPlayer_UpdateMotion_10(void);
/* 00413B00 HumanPlayer_CheckGround_10 */
int HumanPlayer_CheckGround_10(void);
/* 00413B10 HumanPlayer_UpdateStamina_10 */
int HumanPlayer_UpdateStamina_10(void);
/* 00413B20 HumanPlayer_UpdateHealth_10 */
int HumanPlayer_UpdateHealth_10(void);
/* 00413B30 HumanPlayer_HandleInput_10 */
int HumanPlayer_HandleInput_10(void);
/* 00413B40 HumanPlayer_ApplyPhysics_10 */
int HumanPlayer_ApplyPhysics_10(void);
/* 00413B50 HumanPlayer_PlayFootstep_10 */
int HumanPlayer_PlayFootstep_10(void);
/* 00413B60 HumanPlayer_PlaySound_10 */
int HumanPlayer_PlaySound_10(void);
/* 00413B70 Weapon_TypeOpen */
int Weapon_TypeOpen(void);
/* 00413B90 HumanPlayer_TakeDamage_10 */
void HumanPlayer_TakeDamage_10(void);
/* 00413BB0 Weapons_CountGet */
int Weapons_CountGet(void);
/* 00413BC0 HumanPlayer_UpdateAnimation_10 */
int HumanPlayer_UpdateAnimation_10(void);
/* 00413BD0 HumanPlayer_CheckCollision_10 */
int* HumanPlayer_CheckCollision_10(int a1);
/* 00413C00 HumanPlayer_ApplyRecoil_10 */
void * HumanPlayer_ApplyRecoil_10(char * a1);
/* 00413C80 HumanPlayer_LoadParameters_13 */
int __convention HumanPlayer_LoadParameters_13("regparm")(int a1, int a2, int a3, void * a4);
/* 00413CC0 HumanPlayer_UpdateMotion_11 */
int* HumanPlayer_UpdateMotion_11(int* a1, int a2);
/* 00413D10 HumanPlayer_CheckGround_11 */
void * HumanPlayer_CheckGround_11(int a1, int a2, int a3, int a4, int a5, int a6, void * a7, int a8, int a9);
/* 00413DB0 HumanPlayer_UpdateStamina_11 */
void HumanPlayer_UpdateStamina_11(void);
/* 00413DC0 HumanPlayer_UpdateHealth_11 */
void HumanPlayer_UpdateHealth_11(void);
/* 00413DD0 HumanPlayer_HandleInput_11 */
void HumanPlayer_HandleInput_11(void);
/* 00413DE0 HumanPlayer_ApplyPhysics_11 */
void HumanPlayer_ApplyPhysics_11(void);
/* 00413DF0 WEAPONTYPE_GUN */
void * WEAPONTYPE_GUN(void);
/* 00413F90 DefineWeaponType */
int DefineWeaponType(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, int a9, float a10);
/* 00414810 WeaponType_RegisterType */
unsigned int WeaponType_RegisterType(void);
/* 004148F0 WeaponType_InitType */
int WeaponType_InitType(int a1, int a2, double a3);
/* 00414950 WeaponType_GetConfig */
int WeaponType_GetConfig(int a1, int a2);
/* 004149B0 WeaponType_CycleWeapon */
int WeaponType_CycleWeapon(int a1, double* a2);
/* 00414A60 WeaponType_SetCategory */
float* WeaponType_SetCategory(float* a1, int* a2);
/* 00414E20 WeaponType_UpdateAnim */
double* WeaponType_UpdateAnim(double* a1, double* a2, int a3);
/* 00414ED0 WeaponType_RegisterType_2 */
void ** WeaponType_RegisterType_2(void ** a1, void * a2, int a3);
/* 00414F40 WeaponType_InitType_2 */
int WeaponType_InitType_2(int a1, void * a2, int a3, char * a4);
/* 00414FD0 WeaponType_GetConfig_2 */
int WeaponType_GetConfig_2(void * a1);
/* 00415020 DEBUG_KEYSENABLEINVALID */
int DEBUG_KEYSENABLEINVALID(void * a1);
/* 00415070 IntroScreen_Init */
int IntroScreen_Init(void);
/* 00415170 IntroScreen_Update */
int IntroScreen_Update(int a1, void * a2);
/* 004151E0 MovieSubtitle_RegisterFont */
int MovieSubtitle_RegisterFont(int a1, int a2, float a3);
/* 00415260 MovieSubtitle_RegisterText */
int MovieSubtitle_RegisterText(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, int a7, char * a8, float a9);
/* 00415380 IntroScreen_LoadParameters */
int IntroScreen_LoadParameters(int* a1);
/* 00415450 IntroScreen_Setup */
void * IntroScreen_Setup(void * a1);
/* 00415480 WeaponType_LocalScreensIntro */
int WeaponType_LocalScreensIntro(void);
/* 004154B0 WeaponType_InvalidIntroscreenMo */
struct status_msg* WeaponType_InvalidIntroscreenMo(void * a1, int a2, char a3);
/* 00415530 Game_Init */
int Game_Init(void);
/* 004157D0 Game_DisablePlayerInput */
int Game_DisablePlayerInput(int a1);
/* 00415830 Game_EnablePlayerInput */
int Game_EnablePlayerInput(int a1);
/* 00415890 Game_SetMission */
int Game_SetMission(int a1, float a2);
/* 004158E0 Game_UpdateVolume */
int Game_UpdateVolume(int a1);
/* 00415950 Game_SetMusicVolume */
int Game_SetMusicVolume(long double a1, int a2, float a3);
/* 004159B0 Game_SetSFXVolume */
int Game_SetSFXVolume(long double a1, int a2, float a3);
/* 00415A10 Game_EnableMusic */
int Game_EnableMusic(int a1);
/* 00415A60 Game_DisableMusic */
int Game_DisableMusic(int a1);
/* 00415AB0 Game_CutsceneDelete */
int Game_CutsceneDelete(int a1);
/* 00415B30 Level_Start */
int Level_Start(void * a1);
/* 00416010 Level_LoadObjects_2 */
unsigned int Level_LoadObjects_2(void);
/* 00416130 Level_LocalCommonTextures */
int Level_LocalCommonTextures(void);
/* 004161D0 Level_LocalCommonSprites */
int Level_LocalCommonSprites(void);
/* 00416260 Game_Setup */
int Game_Setup(int* a1);
/* 004163E0 Level_TimeSpentRedrawing2F */
void * Level_TimeSpentRedrawing2F(void);
/* 00416550 Game_DeleteHandler */
int Game_DeleteHandler(void);
/* 00416660 Level_CheckQTaskID */
int Level_CheckQTaskID(void);
/* 00416690 Level_SetMission */
int Level_SetMission(void);
/* 004166C0 Level_StartMission */
int Level_StartMission(void);
/* 004167D0 Level_LoadLevel_2 */
int Level_LoadLevel_2(void);
/* 004167E0 Level_LoadObjects_3 */
int Level_LoadObjects_3(void);
/* 004167F0 Level_InitTextures_2 */
int Level_InitTextures_2(void);
/* 00416800 Level_InitSprites_2 */
int Level_InitSprites_2(void);
/* 00416810 Level_CheckQTaskID_2 */
int Level_CheckQTaskID_2(void);
/* 00416820 Level_SetMission_2 */
int Level_SetMission_2(void);
/* 00416830 Level_StartMission_2 */
int Level_StartMission_2(void);
/* 00416840 Level_LoadLevel_3 */
int Level_LoadLevel_3(void);
/* 00416850 Level_LoadObjects_4 */
int Level_LoadObjects_4(void);
/* 00416860 Level_InitTextures_3 */
int Level_InitTextures_3(void);
/* 00416870 Level_InitSprites_3 */
int Level_InitSprites_3(void);
/* 00416880 Level_CheckQTaskID_3 */
int Level_CheckQTaskID_3(void);
/* 00416890 Level_SetMission_3 */
int Level_SetMission_3(void);
/* 004168A0 Level_StartMission_3 */
int Level_StartMission_3(void);
/* 004168B0 Level_LoadLevel_4 */
int Level_LoadLevel_4(void);
/* 004168C0 Level_LoadObjects_5 */
int Level_LoadObjects_5(void);
/* 004168D0 Level_InitTextures_4 */
int Level_InitTextures_4(void);
/* 004168E0 Level_InitSprites_4 */
int Level_InitSprites_4(void);
/* 004168F0 Level_CheckQTaskID_4 */
int Level_CheckQTaskID_4(void);
/* 00416900 Level_SetMission_4 */
int Level_SetMission_4(void * a1);
/* 00416920 Level_StartMission_4 */
int Level_StartMission_4(void);
/* 00416930 Level_LoadLevel_5 */
char * Level_LoadLevel_5(char * a1);
/* 004169D0 Level_LoadObjects_6 */
char * Level_LoadObjects_6(char * a1);
/* 00416A70 Level_InitTextures_5 */
int Level_InitTextures_5(int a1);
/* 00416AD0 Level_InitSprites_5 */
int Level_InitSprites_5(long double a1, long double a2, long double a3, long double a4, void * a5, int a6, float a7);
/* 00416C90 Level_CheckQTaskID_5 */
long double Level_CheckQTaskID_5(float a1, double* a2, float a3);
/* 00416D20 Level_SetMission_5 */
int Level_SetMission_5(void);
/* 00416D30 Level_StartMission_5 */
int Level_StartMission_5(void);
/* 00416D40 Level_LoadLevel_6 */
int Level_LoadLevel_6(void);
/* 00416D50 Level_LoadObjects_7 */
void * Level_LoadObjects_7(void);
/* 00416D60 Level_InitTextures_6 */
int Level_InitTextures_6(char a1);
/* 00416D80 Human_HitDamage */
void * Human_HitDamage(void);
/* 00416D90 Level_InitSprites_6 */
void * Level_InitSprites_6(void);
/* 00416EF0 Level_CheckQTaskID_6 */
void * Level_CheckQTaskID_6(void * a1);
/* 00416F40 Level_SetMission_6 */
int* Level_SetMission_6(void);
/* 00416FB0 Level_LoadLevel_7 */
int Level_LoadLevel_7(void);
/* 00416FC0 Level_LoadObjects_8 */
int Level_LoadObjects_8(void);
/* 00416FE0 Game_Restart */
int Game_Restart(void);
/* 00417090 Level_InitTextures_7 */
void Level_InitTextures_7(void);
/* 004170A0 MenuManager_Init */
int* MenuManager_Init(void);
/* 00417260 MenuManager_LoadParameters */
struct status_msg* MenuManager_LoadParameters(int a1);
/* 004174A0 MenuManager_RequestScreen */
int MenuManager_RequestScreen(int a1, void * a2, float a3);
/* 00417520 Menu_UpdateLanguage */
int Menu_UpdateLanguage(void * a1);
/* 00417590 Menu_FormatScreen */
int Menu_FormatScreen(void * a1, int a2);
/* 00417660 Menu_PlayMusic */
void Menu_PlayMusic(void * a1);
/* 00417690 MenuManager_PushScreen */
int MenuManager_PushScreen(int a1, void * a2, float a3);
/* 00417710 MenuManager_PopScreen */
int MenuManager_PopScreen(int a1, void * a2, float a3);
/* 00417790 MenuManager_LeaveMenus */
int MenuManager_LeaveMenus(int a1, void * a2, float a3);
/* 00417810 MenuManager_SetLanguage */
int MenuManager_SetLanguage(int a1, void * a2, float a3);
/* 00417880 MenuManager_ForceUpdateWindow */
int MenuManager_ForceUpdateWindow(int a1, float a2);
/* 00417900 MenuManager_ActivatePopupScreen */
int MenuManager_ActivatePopupScreen(int a1, void * a2, float a3);
/* 00417960 MenuManager_DeactivatePopuScreen */
int MenuManager_DeactivatePopuScreen(int a1, void * a2);
/* 004179B0 MenuManager_SetEnabled */
int MenuManager_SetEnabled(int a1, void * a2, float a3);
/* 00417A20 MenuManager_Setup */
int MenuManager_Setup(void * a1);
/* 00417B80 Menu_LocalMenusystemSound */
int Menu_LocalMenusystemSound(void * a1);
/* 00417CF0 MenuManager_Process */
int MenuManager_Process(void * a1, char * a2);
/* 00417D50 Menu_LocalMenusystemSound_2 */
int Menu_LocalMenusystemSound_2(void * a1);
/* 00417FF0 Menu_LocalLanguageSS */
int Menu_LocalLanguageSS(void * a1, int a2);
/* 00418520 menu_music */
int menu_music(void * a1);
/* 00418580 Menu_RequestScreen_2 */
int Menu_RequestScreen_2(void * a1);
/* 004186E0 Menu_LeaveMenus_2 */
void * Menu_LeaveMenus_2(void * a1, int a2);
/* 00418710 Menu_UpdateLanguage_2 */
void * Menu_UpdateLanguage_2(void * a1, int a2, int a3);
/* 00418790 Menu_FormatScreen_2 */
int Menu_FormatScreen_2(void * a1);
/* 004187F0 Menu_PlayMusic_2 */
void * Menu_PlayMusic_2(void * a1, void * a2);
/* 00418840 Menu_DrawWidget_2 */
int Menu_DrawWidget_2(void * a1, void * a2);
/* 004188B0 Menu_HandleInput_2 */
void * Menu_HandleInput_2(void * a1);
/* 00418940 Menu_RequestScreen_3 */
void * Menu_RequestScreen_3(void * a1);
/* 00418970 MenuManager_Update */
int MenuManager_Update(void * a1);
/* 00418AC0 Menu_LeaveMenus_3 */
unsigned int Menu_LeaveMenus_3(void);
/* 00418AF0 Menu_UpdateLanguage_3 */
int Menu_UpdateLanguage_3(void);
/* 00418B00 Menu_Manager */
int* Menu_Manager(void * a1, void * a2, char a3, char a4, char a5);
/* 00418D70 Menu_FormatScreen_3 */
int Menu_FormatScreen_3(int* a1);
/* 00418D80 Menu_PlayMusic_3 */
int Menu_PlayMusic_3(void * a1, char * a2);
/* 00418DE0 Menu_DrawWidget_3 */
void * Menu_DrawWidget_3(void * a1, char * a2);
/* 00418E40 Menu_HandleInput_3 */
void * Menu_HandleInput_3(void * a1, char * a2);
/* 00418EA0 Menu_LocalSS */
int* Menu_LocalSS(void * a1, int a2);
/* 00418FB0 Menu_RequestScreen_4 */
void Menu_RequestScreen_4(void);
/* 00418FC0 Menu_LeaveMenus_4 */
void * Menu_LeaveMenus_4(void * a1);
/* 00418FD0 Menu_UpdateLanguage_4 */
void * Menu_UpdateLanguage_4(void * a1);
/* 00418FE0 menu_high */
int menu_high(void * a1, int a2);
/* 00419030 Menu_FormatScreen_4 */
int Menu_FormatScreen_4(void * a1);
/* 00419040 Menu_PlayMusic_4 */
int Menu_PlayMusic_4(void * a1);
/* 00419050 Menu_DrawWidget_4 */
void * Menu_DrawWidget_4(void * a1);
/* 00419070 Menu_HandleInput_4 */
int Menu_HandleInput_4(void * a1);
/* 00419090 Menu_RequestScreen_5 */
void * Menu_RequestScreen_5(void * a1);
/* 004190B0 Menu_LeaveMenus_5 */
void * Menu_LeaveMenus_5(void * a1);
/* 004190C0 Menu_UpdateLanguage_5 */
void * Menu_UpdateLanguage_5(void * a1);
/* 004190D0 Menu_FormatScreen_5 */
void * Menu_FormatScreen_5(void * a1);
/* 004190E0 MenuLoader_Init */
int* MenuLoader_Init(void);
/* 00419210 MenuLoader_Setup */
int* MenuLoader_Setup(void * a1);
/* 004192B0 MenuLoader_OnEvent */
unsigned int MenuLoader_OnEvent(void);
/* 004192E0 Menu_PlayMusic_5 */
float* Menu_PlayMusic_5(float* a1, float a2, float a3, int a4, int a5);
/* 00419330 Menu_DrawWidget_5 */
int Menu_DrawWidget_5(int* a1, float* a2);
/* 00419540 Menu_HandleInput_5 */
int Menu_HandleInput_5(int* a1, float* a2);
/* 00419630 Menu_RequestScreen_6 */
int Menu_RequestScreen_6(float* a1, float* a2);
/* 00419760 BackgroundFX_Init */
int BackgroundFX_Init(void);
/* 00419820 BackgroundFX_LoadParameters */
int BackgroundFX_LoadParameters(float a1);
/* 00419860 BackgroundFX_OnEvent */
int BackgroundFX_OnEvent(float a1);
/* 00419950 BackgroundFX_Process */
int BackgroundFX_Process(int* a1, float* a2);
/* 004199B0 Menu_LeaveMenus_6 */
unsigned int Menu_LeaveMenus_6(void);
/* 004199D0 Menu_UpdateLanguage_6 */
struct status_msg* Menu_UpdateLanguage_6(void * a1);
/* 004199F0 DialogWindow_Init */
int* DialogWindow_Init(void);
/* 00419CB0 DialogWindow_LoadParameters */
int DialogWindow_LoadParameters(int a1);
/* 00419D30 Menu_FormatScreen_6 */
int Menu_FormatScreen_6(void * a1, float a2);
/* 0041A1A0 Menu_PlayMusic_6 */
unsigned int Menu_PlayMusic_6(void);
/* 0041A1D0 Menu_DrawWidget_6 */
int Menu_DrawWidget_6(void * a1);
/* 0041A1E0 TypeWriterBox_Init */
int* TypeWriterBox_Init(void);
/* 0041A3C0 TypeWriterBox_Setup */
int TypeWriterBox_Setup(void * a1);
/* 0041A4D0 TypeWriterBox_Process */
int TypeWriterBox_Process(void * a1, int a2);
/* 0041A6D0 TypeWriterBox_LoadParameters */
int TypeWriterBox_LoadParameters(void * a1);
/* 0041A9F0 TypeWriterBox_Update */
void TypeWriterBox_Update(void * a1);
/* 0041AAC0 Menu_RequestScreen_7 */
unsigned int Menu_RequestScreen_7(void);
/* 0041AAF0 TextBox_Init */
int* TextBox_Init(void);
/* 0041AD20 TextBox_Process */
char * TextBox_Process(void * a1);
/* 0041AD70 TextBox_OnEvent */
int TextBox_OnEvent(void * a1, int a2);
/* 0041AE20 TextBox_LoadParameters */
int TextBox_LoadParameters(int80_t a1, void * a2);
/* 0041AEA0 TextBox_Setup */
int TextBox_Setup(int a1);
/* 0041AFB0 Menu_LeaveMenus_7 */
int Menu_LeaveMenus_7(int a1, int a2, int a3, char * a4, void * a5, int* a6, int a7);
/* 0041B170 TextBox_Update */
int TextBox_Update(void * a1);
/* 0041B260 Menu_UpdateLanguage_7 */
unsigned int Menu_UpdateLanguage_7(void);
/* 0041B290 Menu_FormatScreen_7 */
int Menu_FormatScreen_7(int a1, int a2);
/* 0041B310 PictureBox_Init */
int* PictureBox_Init(void);
/* 0041B500 PictureBox_Process */
char * PictureBox_Process(void * a1);
/* 0041B530 PictureBox_Update */
int PictureBox_Update(void * a1, int a2);
/* 0041B590 PictureBox_LoadParameters */
int* PictureBox_LoadParameters(int80_t a1, void * a2);
/* 0041B5F0 PictureBox_Setup */
int PictureBox_Setup(int a1);
/* 0041B750 PictureBox_OnEvent */
int PictureBox_OnEvent(void * a1);
/* 0041B840 Menu_PlayMusic_7 */
unsigned int Menu_PlayMusic_7(void);
/* 0041B870 Menu_DrawWidget_7 */
int Menu_DrawWidget_7(int a1, int a2);
/* 0041B8E0 ScrollListBox_Init */
int* ScrollListBox_Init(void);
/* 0041BBD0 Menu_HandleInput_7 */
int* Menu_HandleInput_7(void * a1);
/* 0041BC00 ScrollListBox_Process */
int ScrollListBox_Process(void * a1);
/* 0041BDD0 ScrollListBox_LoadParameters */
int ScrollListBox_LoadParameters(void * a1);
/* 0041C080 ScrollListBox_Setup */
int ScrollListBox_Setup(int a1);
/* 0041C310 ScrollListBox_Update */
void * ScrollListBox_Update(void * a1);
/* 0041C500 ScrollListBox_OnEvent */
int* ScrollListBox_OnEvent(void * a1);
/* 0041C5A0 ScrollListBox_Action */
int ScrollListBox_Action(void * a1);
/* 0041C600 ScrollListBox_Cleanup */
int ScrollListBox_Cleanup(void * a1);
/* 0041C660 Menu_RequestScreen_8 */
unsigned int Menu_RequestScreen_8(void);
/* 0041C690 Menu_LeaveMenus_8 */
int Menu_LeaveMenus_8(int a1, int a2);
/* 0041C700 AsciiBox_Init */
int* AsciiBox_Init(void);
/* 0041C940 AsciiBox_Process */
int AsciiBox_Process(void * a1);
/* 0041C9D0 AsciiBox_Update */
int* AsciiBox_Update(void * a1);
/* 0041CB40 Menu_UpdateLanguage_8 */
int Menu_UpdateLanguage_8(int* a1, char * a2, int a3);
/* 0041CD20 AsciiBox_LoadParameters */
int AsciiBox_LoadParameters(void * a1);
/* 0041CDF0 AsciiBox_Setup */
int AsciiBox_Setup(int a1);
/* 0041D050 Menu_FormatScreen_8 */
unsigned int Menu_FormatScreen_8(void);
/* 0041D080 InputBox_Init */
int* InputBox_Init(void);
/* 0041D330 InputBox_Setup */
int InputBox_Setup(void * a1);
/* 0041D3A0 InputBox_Process */
int** InputBox_Process(void * a1, int a2);
/* 0041D660 menu_k01 */
int menu_k01(void * a1, int a2);
/* 0041D6A0 Menu_MenuK01D */
int Menu_MenuK01D(void * a1, int a2, char a3);
/* 0041D720 InputBox_LoadParameters */
int InputBox_LoadParameters(void * a1);
/* 0041D9E0 InputBox_Update */
int* InputBox_Update(void * a1);
/* 0041DA90 InputBox_OnEvent */
int* InputBox_OnEvent(void * a1);
/* 0041DB30 InputBox_Action */
int InputBox_Action(void * a1);
/* 0041DB90 InputBox_Cleanup */
int InputBox_Cleanup(void * a1);
/* 0041DBF0 Menu_HandleInput_8 */
unsigned int Menu_HandleInput_8(void);
/* 0041DC20 Menu_RequestScreen_9 */
int Menu_RequestScreen_9(int a1);
/* 0041DC50 ToggleBox_Init */
int* ToggleBox_Init(void);
/* 0041DEB0 ToggleBox_Process */
int ToggleBox_Process(void * a1);
/* 0041E020 ToggleBox_LoadParameters */
int ToggleBox_LoadParameters(void * a1);
/* 0041E130 ToggleBox_Setup */
int ToggleBox_Setup(int a1);
/* 0041E500 ToggleBox_Update */
int* ToggleBox_Update(void * a1);
/* 0041E5A0 ToggleBox_OnEvent */
int ToggleBox_OnEvent(void * a1);
/* 0041E600 ToggleBox_Action */
int ToggleBox_Action(void * a1);
/* 0041E660 Menu_LeaveMenus_9 */
unsigned int Menu_LeaveMenus_9(void);
/* 0041E690 ListBox_Init */
int* ListBox_Init(void);
/* 0041E990 Menu_UpdateLanguage_9 */
int* Menu_UpdateLanguage_9(void * a1);
/* 0041E9D0 ListBox_Process */
int ListBox_Process(void * a1);
/* 0041EA70 ListBox_Update */
int ListBox_Update(void * a1, int a2);
/* 0041EC70 ListBox_LoadParameters */
int ListBox_LoadParameters(void * a1);
/* 0041ED70 ListBox_Setup */
int ListBox_Setup(void * a1);
/* 0041F030 ListBox_OnEvent */
int* ListBox_OnEvent(void * a1);
/* 0041F140 ListBox_Action */
int* ListBox_Action(void * a1);
/* 0041F1E0 ListBox_Cleanup */
int ListBox_Cleanup(void * a1);
/* 0041F240 ListBox_Cleanup_2 */
int ListBox_Cleanup_2(void * a1);
/* 0041F2A0 Menu_PlayMusic_9 */
unsigned int Menu_PlayMusic_9(void);
/* 0041F2D0 Menu_DrawWidget_9 */
int Menu_DrawWidget_9(int a1, int a2);
/* 0041F340 SlideBar_Init */
int* SlideBar_Init(void);
/* 0041F5A0 SlideBar_Update */
int* SlideBar_Update(void * a1, int a2);
/* 0041F6C0 SlideBar_Process */
int SlideBar_Process(void * a1);
/* 0041F740 SlideBar_OnEvent */
int SlideBar_OnEvent(long double a1, void * a2, int a3);
/* 0041FA10 SlideBar_LoadParameters */
int SlideBar_LoadParameters(float a1);
/* 0041FCE0 SlideBar_Setup */
int SlideBar_Setup(int a1);
/* 0041FF30 SlideBar_Action */
int SlideBar_Action(int80_t a1, int a2);
/* 00420020 SlideBar_Cleanup */
int* SlideBar_Cleanup(void * a1);
/* 004200C0 SlideBar_Cleanup_2 */
int SlideBar_Cleanup_2(void * a1);
/* 004201B0 Menu_LeaveMenus_10 */
unsigned int Menu_LeaveMenus_10(void);
/* 004201E0 Menu_Slidevert */
struct status_msg* Menu_Slidevert(void * a1, int a2);
/* 00420240 Menu_UpdateLanguage_10 */
void * Menu_UpdateLanguage_10(void * a1, int a2, int a3, int a4, int a5);
/* 00420290 Menu_FormatScreen_10 */
int Menu_FormatScreen_10(int a1);
/* 004202D0 Menu_PlayMusic_10 */
int Menu_PlayMusic_10(int a1, int a2);
/* 00420300 MenuTextConditional_Init */
int* MenuTextConditional_Init(void);
/* 00420500 MenuTextConditional_Action */
int MenuTextConditional_Action(void * a1, int a2);
/* 004205F0 MenuTextConditional_Process */
char * MenuTextConditional_Process(void * a1);
/* 00420640 MenuTextConditional_Update */
int MenuTextConditional_Update(int80_t a1, int a2, int a3);
/* 004207E0 MenuTextConditional_LoadParameters */
int MenuTextConditional_LoadParameters(int80_t a1, void * a2);
/* 004208F0 MenuTextConditional_Setup */
int MenuTextConditional_Setup(int a1);
/* 00420BC0 MenuText_Update */
void * MenuText_Update(void * a1);
/* 00420C90 Menu_DrawWidget_10 */
unsigned int Menu_DrawWidget_10(void);
/* 00420CC0 MenuText_Init */
void * MenuText_Init(void);
/* 00420F00 MenuText_Process */
char * MenuText_Process(void * a1);
/* 00421070 MenuText_LoadParameters */
int MenuText_LoadParameters(void * a1);
/* 00421130 MenuText_Setup */
int MenuText_Setup(int a1);
/* 004213E0 TEXT_BLACK */
unsigned int TEXT_BLACK(void);
/* 00421430 MenuButton_Init */
int* MenuButton_Init(void);
/* 00421550 MenuButton_Process */
int MenuButton_Process(void * a1, int a2);
/* 00421600 MenuButton_LoadParameters */
int MenuButton_LoadParameters(int a1);
/* 00421700 Menu_RequestScreen_11 */
unsigned int Menu_RequestScreen_11(void);
/* 00421730 Menu_LeaveMenus_11 */
struct status_msg* Menu_LeaveMenus_11(int a1);
/* 00421750 MenuScreen_Init */
int* MenuScreen_Init(void);
/* 00421A10 MenuScreen_Setup */
int MenuScreen_Setup(void * a1);
/* 00421A70 MenuScreen_Process */
int MenuScreen_Process(int a1, int a2);
/* 00421CD0 Menu_UpdateLanguage_11 */
int Menu_UpdateLanguage_11(void * a1);
/* 00422110 MenuScreen_LoadParameters */
int MenuScreen_LoadParameters(void * a1);
/* 00422190 MenuScreen_Update */
void * MenuScreen_Update(void * a1);
/* 00422200 MenuScreen_OnEvent */
int MenuScreen_OnEvent(void * a1);
/* 00422260 MenuScreen_Action */
int* MenuScreen_Action(void * a1);
/* 00422300 MenuScreen_Cleanup */
int* MenuScreen_Cleanup(void * a1);
/* 004223A0 Menu_FormatScreen_11 */
unsigned int Menu_FormatScreen_11(void);
/* 004223D0 MenuFrame_Init */
int* MenuFrame_Init(void);
/* 004225F0 MenuFrame_Update */
int MenuFrame_Update(void * a1, int a2);
/* 00422640 MenuFrame_OnEvent */
int MenuFrame_OnEvent(void * a1, int a2);
/* 004226D0 MenuFrame_Setup */
int MenuFrame_Setup(void * a1);
/* 004227A0 Menu_PlayMusic_11 */
int Menu_PlayMusic_11(void * a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8);
/* 004229A0 Menu_DrawWidget_11 */
int Menu_DrawWidget_11(int a1, int a2, int a3, int a4, int a5, int a6);
/* 00422A50 MenuFrame_LoadParameters */
int MenuFrame_LoadParameters(void * a1);
/* 00422B10 Menu_HandleInput_11 */
unsigned int Menu_HandleInput_11(void);
/* 00422B40 ModelViewBox_Init */
int* ModelViewBox_Init(void);
/* 00422C90 ModelViewBox_Process */
int ModelViewBox_Process(void * a1, int a2);
/* 00422DF0 ModelViewBox_Setup */
int ModelViewBox_Setup(void * a1);
/* 00422E40 ModelViewBox_Update */
void * ModelViewBox_Update(void * a1, int a2);
/* 00422F30 ModelViewBox_LoadParameters */
int ModelViewBox_LoadParameters(int a1);
/* 00423000 ModelViewBox_OnEvent */
int ModelViewBox_OnEvent(void * a1);
/* 00423050 Menu_RequestScreen_12 */
unsigned int Menu_RequestScreen_12(void);
/* 00423080 Menu_LeaveMenus_12 */
int Menu_LeaveMenus_12(int a1);
/* 004230A0 ControlsMenu_Init */
void * ControlsMenu_Init(void);
/* 004231E0 ControlsMenu_ConvertFloatFromOffset */
int ControlsMenu_ConvertFloatFromOffset(int a1, int a2);
/* 00423240 ControlsMenu_ConvertOffsetFromFloat */
int ControlsMenu_ConvertOffsetFromFloat(long double a1, int a2, float a3);
/* 004232B0 ControlsMenu_Process */
int* ControlsMenu_Process(void * a1, int a2);
/* 004233D0 ControlsMenu_Update */
int ControlsMenu_Update(void * a1, int a2);
/* 004234E0 ControlsMenu_LoadParameters */
int ControlsMenu_LoadParameters(void * a1);
/* 00423770 Menu_UpdateLanguage_12 */
void * Menu_UpdateLanguage_12(void * a1, void * a2, int a3);
/* 004237C0 Menu_FormatScreen_12 */
void * Menu_FormatScreen_12(void * a1);
/* 00423810 Menu_PlayMusic_12 */
int __convention Menu_PlayMusic_12("regparm")(int a1, int a2, int a3, int a4);
/* 00423860 Menu_DrawWidget_12 */
int Menu_DrawWidget_12(int a1, int a2);
/* 004238B0 ControlsMenu_Setup */
int ControlsMenu_Setup(int a1);
/* 00423930 Menu_HandleInput_12 */
int Menu_HandleInput_12(void * a1, int a2);
/* 00423AC0 Menu_RequestScreen_13 */
int Menu_RequestScreen_13(int a1, float a2);
/* 00423CB0 ControlsMenu_OnEvent */
int ControlsMenu_OnEvent(void * a1);
/* 00423D30 ControlsMenu_Action */
int ControlsMenu_Action(void * a1);
/* 00423DB0 ControlsMenu_Cleanup */
int ControlsMenu_Cleanup(void);
/* 00423F90 ControlsMenu_ConvertFloatFromOffset_2 */
unsigned int ControlsMenu_ConvertFloatFromOffset_2(void);
/* 00423FC0 MenuWindow_Init */
void * MenuWindow_Init(void);
/* 00424220 Menu_LeaveMenus_13 */
void * Menu_LeaveMenus_13(void * a1, void * a2);
/* 004244B0 MenuWindow_Setup */
int MenuWindow_Setup(void * a1);
/* 00424790 LINEUPMODE_NONE */
unsigned int LINEUPMODE_NONE(void);
/* 00424850 Menu_PlayMusic_13 */
int Menu_PlayMusic_13(void);
/* 00424860 Menu_DrawWidget_13 */
int Menu_DrawWidget_13(void);
/* 00424870 Menu_HandleInput_13 */
int Menu_HandleInput_13(void);
/* 00424880 Menu_RequestScreen_14 */
int Menu_RequestScreen_14(void);
/* 00424890 Menu_LeaveMenus_14 */
int Menu_LeaveMenus_14(void);
/* 004248A0 Menu_UpdateLanguage_14 */
char * Menu_UpdateLanguage_14(void * a1, void * a2, int a3, char * a4, int a5, int* a6, char ** a7);
/* 00424980 Menu_DrawWidget_14 */
int Menu_DrawWidget_14(void * a1, float a2, float a3, int a4);
/* 00424B60 Menu_HandleInput_14 */
struct status_msg* Menu_HandleInput_14(void * a1, int a2);
/* 00424B80 Menu_RequestScreen_15 */
int Menu_RequestScreen_15(void);
/* 00424B90 Cursor_Init */
void * Cursor_Init(void);
/* 00424CE0 Cursor_LoadParameters */
int Cursor_LoadParameters(void * a1);
/* 00424E10 Menu_LeaveMenus_15 */
unsigned int Menu_LeaveMenus_15(void);
/* 00424E20 Menu_UpdateLanguage_15 */
struct status_msg* Menu_UpdateLanguage_15(int a1);
/* 00424E40 Menu_FormatScreen_15 */
int Menu_FormatScreen_15(void * a1, int a2);
/* 00424E50 Menu_PlayMusic_15 */
int Menu_PlayMusic_15(void * a1, int* a2, int* a3, int* a4, int* a5);
/* 00424E80 ConditionalSound_Init */
int* ConditionalSound_Init(void);
/* 00425050 ConditionalSound_LoadParameters */
int ConditionalSound_LoadParameters(void * a1);
/* 004250D0 ConditionalSound_Tick */
int* ConditionalSound_Tick(int80_t a1, void * a2);
/* 004251C0 ConditionalSound_Stop */
int* ConditionalSound_Stop(void * a1);
/* 00425200 ConditionalSound_Start */
struct status_msg* ConditionalSound_Start(void * a1);
/* 004252E0 Menu_DrawWidget_15 */
int* Menu_DrawWidget_15(void * a1);
/* 00425340 ConditionalSound_Process */
char * ConditionalSound_Process(void * a1);
/* 004253C0 ConditionalSound_Update */
int ConditionalSound_Update(void * a1);
/* 004254A0 ConditionalSound_OnEvent */
int ConditionalSound_OnEvent(void * a1);
/* 00425560 ConditionalSound_Action */
int* ConditionalSound_Action(void * a1);
/* 00425580 Menu_RequestScreen_16 */
int Menu_RequestScreen_16(void);
/* 004255A0 Menu_LeaveMenus_16 */
int* Menu_LeaveMenus_16(long double a1, double* a2);
/* 004258C0 Menu_UpdateLanguage_16 */
void Menu_UpdateLanguage_16(void);
/* 004258E0 Menu_FormatScreen_16 */
void Menu_FormatScreen_16(void);
/* 00425900 Menu_PlayMusic_16 */
int* Menu_PlayMusic_16(long double a1, void * a2);
/* 00425B70 Menu_DrawWidget_16 */
int Menu_DrawWidget_16(void * a1);
/* 00425B80 Menu_CaraiErrorInGraphDNo */
double* Menu_CaraiErrorInGraphDNo(double* a1, void * a2, int* a3, int a4, void * a5);
/* 00425C10 Menu_CaraiErrorInGraphDNo_2 */
int* Menu_CaraiErrorInGraphDNo_2(int* a1, void * a2, int a3, void * a4);
/* 00425C80 CarAI_Init */
int* CarAI_Init(void);
/* 00425DE0 CarAI_Run */
int* CarAI_Run(int a1);
/* 00426000 Menu_HandleInput_16 */
int Menu_HandleInput_16(void * a1);
/* 004260C0 Menu_RequestScreen_17 */
int Menu_RequestScreen_17(void * a1, int a2);
/* 00426140 Menu_LeaveMenus_17 */
int Menu_LeaveMenus_17(long double a1, long double a2, float a3);
/* 00426260 Menu_UpdateLanguage_17 */
int* Menu_UpdateLanguage_17(float* a1, int* a2, void * a3);
/* 004262F0 CarAI_Combat */
int CarAI_Combat(long double a1, float a2);
/* 00426510 CarAI_UpdateCar */
int CarAI_UpdateCar(void * a1, int a2, int a3, int a4, float a5);
/* 004265A0 CarAI_Process */
int CarAI_Process(void * a1);
/* 00426610 Menu_FormatScreen_17 */
unsigned int Menu_FormatScreen_17(void);
/* 00426630 CarDoor_Init */
void * CarDoor_Init(void);
/* 00426740 CarDoor_LoadParameters */
int CarDoor_LoadParameters(int* a1, float a2);
/* 00426880 CarDoor_Setup */
int CarDoor_Setup(void * a1, int* a2);
/* 00426D60 Menu_PlayMusic_17 */
unsigned int Menu_PlayMusic_17(void);
/* 00426D70 Menu_DrawWidget_17 */
int Menu_DrawWidget_17(void);
/* 00426D80 Menu_HandleInput_17 */
int Menu_HandleInput_17(void * a1, char a2);
/* 00426D90 HeliWheel_Init */
void * HeliWheel_Init(void);
/* 00426E90 HeliWheel_LoadParameters */
int HeliWheel_LoadParameters(int* a1, float a2);
/* 00426FA0 HeliWheel_Process */
int HeliWheel_Process(float a1, int* a2);
/* 00427280 Menu_RequestScreen_18 */
unsigned int Menu_RequestScreen_18(void);
/* 00427290 Menu_LeaveMenus_18 */
int Menu_LeaveMenus_18(void);
/* 004272A0 HeliDoor_Init */
void * HeliDoor_Init(void);
/* 004274E0 HeliDoor_Setup */
int HeliDoor_Setup(float a1, int* a2);
/* 00427810 Menu_UpdateLanguage_18 */
unsigned int Menu_UpdateLanguage_18(void);
/* 00427820 Menu_FormatScreen_18 */
int Menu_FormatScreen_18(void);
/* 00427830 RocketPod_Init */
void * RocketPod_Init(void);
/* 00427940 RocketPod_LoadParameters */
unsigned int RocketPod_LoadParameters(int* a1, float a2);
/* 00427A70 RocketPod_Setup */
int RocketPod_Setup(void * a1);
/* 00427D80 Menu_PlayMusic_18 */
unsigned int Menu_PlayMusic_18(void);
/* 00427D90 HitZone_Init */
void * HitZone_Init(void);
/* 00427FB0 Menu_DrawWidget_18 */
unsigned int Menu_DrawWidget_18(void);
/* 00427FF0 Missile_Init */
int* Missile_Init(void);
/* 00428280 Menu_HandleInput_18 */
int Menu_HandleInput_18(float a1);
/* 00428390 Missile_Run */
int Missile_Run(int* a1);
/* 00428610 Menu_RequestScreen_19 */
void * Menu_RequestScreen_19(void * a1);
/* 00428630 Menu_LeaveMenus_19 */
int Menu_LeaveMenus_19(float a1);
/* 00428910 Menu_UpdateLanguage_19 */
void * Menu_UpdateLanguage_19(void * a1);
/* 00428930 Menu_FormatScreen_19 */
int Menu_FormatScreen_19(void * a1);
/* 00428A00 Menu_PlayMusic_19 */
int Menu_PlayMusic_19(int a1);
/* 00428A60 Menu_DrawWidget_19 */
int Menu_DrawWidget_19(void * a1, double* a2);
/* 00428AD0 Menu_HandleInput_19 */
int Menu_HandleInput_19(void * a1, double* a2);
/* 00428B60 Menu_RequestScreen_20 */
int Menu_RequestScreen_20(long double a1, long double a2, void * a3, double* a4);
/* 00428CA0 Missile_Setup */
void * Missile_Setup(void * a1);
/* 00428D00 Menu_UpdateLanguage_20 */
void * Menu_UpdateLanguage_20(float a1);
/* 00429540 Missile_Process */
int* Missile_Process(void * a1);
/* 00429730 Missile_Update */
char * Missile_Update(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, int* a9);
/* 004298E0 Missile_OnEvent */
int Missile_OnEvent(int* a1);
/* 00429920 Missile_Action */
int* Missile_Action(int* a1);
/* 00429A00 Menu_FormatScreen_20 */
unsigned int Menu_FormatScreen_20(void);
/* 00429A20 Menu_PlayMusic_20 */
int Menu_PlayMusic_20(void);
/* 00429A30 Menu_VirmodelSNotAvailabl */
struct status_msg* Menu_VirmodelSNotAvailabl(void * a1, void * a2, void * a3, double* a4, void * a5, float a6, double* a7, void * a8, char * a9, int a10);
/* 00429D80 Menu_DrawWidget_20 */
struct status_msg* Menu_DrawWidget_20(void * a1);
/* 00429DC0 Menu_HandleInput_20 */
int Menu_HandleInput_20(float a1);
/* 00429EF0 Menu_RequestScreen_21 */
void * Menu_RequestScreen_21(void * a1);
/* 0042A100 Train_LoadParameters */
int Train_LoadParameters(void * a1);
/* 0042A150 Train_Setup */
int Train_Setup(void * a1, char * a2);
/* 0042A2C0 Menu_LeaveMenus_21 */
char * Menu_LeaveMenus_21(void * a1, int a2);
/* 0042A7C0 Menu_UpdateLanguage_21 */
int* Menu_UpdateLanguage_21(void * a1, double* a2, int a3);
/* 0042AC20 Train_Cleanup */
int* Train_Cleanup(void * a1);
/* 0042ACC0 Train_Init */
int* Train_Init(void);
/* 0042B040 Train_ReceiveChannels */
float Train_ReceiveChannels(void * a1, int* a2) __location("result");
/* 0042B500 Train_Process */
int Train_Process(float a1, void * a2);
/* 0042B700 Train_Update */
unsigned int Train_Update(int80_t a1, void * a2);
/* 0042B930 Train_Action */
void * Train_Action(void * a1, void ** a2);
/* 0042BC00 Menu_FormatScreen_21 */
int Menu_FormatScreen_21(void);
/* 0042BC20 Menu_PlayMusic_21 */
int Menu_PlayMusic_21(void);
/* 0042BC30 Afterburner_LoadParameters */
int* Afterburner_LoadParameters(int* a1, float a2);
/* 0042BD40 Afterburner_Update */
int** Afterburner_Update(void * a1);
/* 0042BEB0 Afterburner_Init */
void * Afterburner_Init(void);
/* 0042BFA0 Afterburner_Setup */
int Afterburner_Setup(float a1);
/* 0042C0B0 Afterburner_Process */
int Afterburner_Process(void * a1, int* a2);
/* 0042C4E0 Menu_DrawWidget_21 */
int Menu_DrawWidget_21(void);
/* 0042C500 Rotor_Setup */
int* Rotor_Setup(int* a1, int* a2);
/* 0042C630 Rotor_LoadParameters */
void * Rotor_LoadParameters(void * a1);
/* 0042D1D0 Rotor_OnEvent */
int Rotor_OnEvent(void * a1);
/* 0042D2B0 Rotor_Init */
void * Rotor_Init(void);
/* 0042D440 Rotor_Tick */
void * Rotor_Tick(float a1);
/* 0042D680 Rotor_Update */
void * Rotor_Update(void * a1, float a2);
/* 0042DA70 PhysicsObj_Setup */
void * PhysicsObj_Setup(int* a1);
/* 0042DAA0 Menu_HandleInput_21 */
int Menu_HandleInput_21(void);
/* 0042DAC0 Menu_RequestScreen_22 */
int Menu_RequestScreen_22(void);
/* 0042DB00 Menu_LeaveMenus_22 */
char * Menu_LeaveMenus_22(int a1, int* a2);
/* 0042DCF0 Car_Init */
void * Car_Init(void);
/* 0042E160 Car_LoadParameters */
int* Car_LoadParameters(float a1);
/* 0042E180 Menu_UpdateLanguage_22 */
int* Menu_UpdateLanguage_22(float a1);
/* 0042E320 Car_Run */
unsigned int Car_Run(double* a1);
/* 0042E5A0 Car_ExplosionTick */
int* Car_ExplosionTick(double* a1);
/* 0042E810 Menu_FormatScreen_22 */
int* Menu_FormatScreen_22(int80_t a1, void * a2);
/* 0042E870 Menu_PlayMusic_22 */
int* Menu_PlayMusic_22(int80_t a1, int a2);
/* 0042E940 Car_Process */
int* Car_Process(void * a1);
/* 0042EA10 Car_ReceiveChannels */
int* Car_ReceiveChannels(void * a1, float a2);
/* 0042EC30 Menu_DrawWidget_22 */
void * Menu_DrawWidget_22(void * a1);
/* 0042ECA0 Car_Tick */
void * Car_Tick(int a1);
/* 0042EF00 Car_WheelSweep */
int Car_WheelSweep(float* a1);
/* 0042F530 Car_Update */
int Car_Update(void * a1);
/* 0042F7C0 Menu_HandleInput_22 */
void * Menu_HandleInput_22(void * a1);
/* 0042FB40 Car_WeaponCollision */
int* Car_WeaponCollision(void * a1, float a2);
/* 0042FC00 Car_Action */
void ** Car_Action(void * a1, void ** a2);
/* 0042FC40 Car_WeaponHit */
void * Car_WeaponHit(void * a1);
/* 0042FC80 Car_Cleanup */
int* Car_Cleanup(void * a1, int a2);
/* 0042FCE0 Car_Cleanup_2 */
int Car_Cleanup_2(void * a1);
/* 0042FD40 Car_Cleanup_3 */
int Car_Cleanup_3(void * a1);
/* 0042FDA0 Menu_RequestScreen_23 */
unsigned int Menu_RequestScreen_23(void);
/* 0042FDC0 Menu_LeaveMenus_23 */
int Menu_LeaveMenus_23(void);
/* 0042FDD0 Menu_UpdateLanguage_23 */
int* Menu_UpdateLanguage_23(void * a1);
/* 0042FDF0 Menu_FormatScreen_23 */
double* Menu_FormatScreen_23(double* a1, double* a2, int a3);
/* 0042FE40 Menu_PlayMusic_23 */
int Menu_PlayMusic_23(void);
/* 0042FF00 Wheel_Init */
void * Wheel_Init(void);
/* 00430000 Wheel_LoadParameters */
int Wheel_LoadParameters(int* a1, float a2);
/* 00430170 Wheel_Process */
void * Wheel_Process(void * a1);
/* 004301C0 Wheel_Tick */
int Wheel_Tick(float a1);
/* 004304B0 Vehicle_InitPlane */
long double Vehicle_InitPlane(float a1, int a2);
/* 00430530 Vehicle_UpdateRudder */
void ** Vehicle_UpdateRudder(void * a1, int a2, float a3, float a4);
/* 00430640 Wheel_Update */
int Wheel_Update(void * a1, int* a2);
/* 00430940 Vehicle_UpdateCockpit */
unsigned int Vehicle_UpdateCockpit(void);
/* 00430950 Vehicle_CheckFlightDynamics */
int Vehicle_CheckFlightDynamics(void);
/* 00430960 Wheel_FrictionDrive */
void * Wheel_FrictionDrive(float* a1, float* a2, float* a3, float* a4, float a5, float a6, float a7);
/* 00430D10 Car_WheelDrive */
void * Car_WheelDrive(float* a1, float a2, float a3);
/* 004310F0 Heli_Init */
void * Heli_Init(void);
/* 00431540 Heli_LoadParameters */
int* Heli_LoadParameters(float a1);
/* 00431560 Vehicle_InitHeli_2 */
int* Vehicle_InitHeli_2(float a1);
/* 004316D0 Heli_Setup */
char * Heli_Setup(int80_t a1, char * a2);
/* 00431A80 Vehicle_InitPlane_2 */
int* Vehicle_InitPlane_2(void * a1);
/* 00431AC0 Vehicle_UpdateRudder_2 */
int* Vehicle_UpdateRudder_2(void * a1);
/* 00431AE0 Heli_Process */
int* Heli_Process(void * a1);
/* 00431B70 Heli_ReceiveChannels */
int Heli_ReceiveChannels(float a1, int* a2);
/* 00431E30 Vehicle_DeployGear_2 */
int Vehicle_DeployGear_2(float a1);
/* 00432550 Vehicle_UpdateCockpit_2 */
int* Vehicle_UpdateCockpit_2(void * a1);
/* 00432950 Heli_Update */
int Heli_Update(void * a1);
/* 00433010 Vehicle_CheckFlightDynamics_2 */
unsigned int Vehicle_CheckFlightDynamics_2(void);
/* 00433030 Vehicle_InitHeli_3 */
int Vehicle_InitHeli_3(float* a1, int* a2, int* a3);
/* 004330F0 Plane_Init */
int* Plane_Init(void);
/* 004333F0 Plane_LoadParameters */
int* Plane_LoadParameters(float a1);
/* 00433410 Vehicle_InitPlane_3 */
float Vehicle_InitPlane_3(float a1) __location("result");
/* 00433530 Vehicle_UpdateRudder_3 */
float Vehicle_UpdateRudder_3(float a1) __location("result");
/* 00433580 Vehicle_DeployGear_3 */
float Vehicle_DeployGear_3(float a1) __location("result");
/* 00433690 Plane_Setup */
struct status_msg* Plane_Setup(int80_t a1, void * a2);
/* 00433760 Vehicle_UpdateCockpit_3 */
int* Vehicle_UpdateCockpit_3(void * a1);
/* 00433790 Plane_Process */
int* Plane_Process(void * a1);
/* 004337E0 Plane_ReceiveChannels */
void * Plane_ReceiveChannels(float a1, int* a2);
/* 00433B50 FUN_00433B50 */
void * FUN_00433B50(double* a1);
/* 00434310 Vehicle_CheckFlightDynamics_3 */
int* Vehicle_CheckFlightDynamics_3(double* a1);
/* 00434770 Plane_Update */
int Plane_Update(float a1);
/* 00434DF0 Vehicle_DeployGear_4 */
unsigned int Vehicle_DeployGear_4(void);
/* 00434F50 Vehicle_UpdateCockpit_4 */
int Vehicle_UpdateCockpit_4(void * a1, float* a2);
/* 004351E0 CockpitShield_Init */
void * CockpitShield_Init(void);
/* 00435300 CockpitShield_LoadParameters */
int CockpitShield_LoadParameters(void * a1, float a2);
/* 00435450 Vehicle_CheckFlightDynamics_4 */
unsigned int Vehicle_CheckFlightDynamics_4(void);
/* 004355A0 Vehicle_InitHeli_5 */
int Vehicle_InitHeli_5(void * a1, float* a2);
/* 00435870 Gear_Init */
void * Gear_Init(void);
/* 00435A80 Gear_LoadParameters */
int Gear_LoadParameters(void * a1, float a2);
/* 00435BD0 Gear_Setup */
int Gear_Setup(long double a1, long double a2, long double a3, long double a4, int* a5);
/* 00435C30 Vehicle_InitPlane_5 */
unsigned int Vehicle_InitPlane_5(void);
/* 00435C40 Vehicle_UpdateRudder_5 */
int Vehicle_UpdateRudder_5(void);
/* 00435D90 Hatch_Init */
void * Hatch_Init(void);
/* 00435F60 Hatch_LoadParameters */
int Hatch_LoadParameters(void * a1, float a2);
/* 004360B0 Vehicle_DeployGear_5 */
unsigned int Vehicle_DeployGear_5(void);
/* 004360C0 Rudder_LoadParameters */
int Rudder_LoadParameters(int* a1, float a2);
/* 004361D0 Rudder_Init */
void * Rudder_Init(void);
/* 004362C0 Rudder_Setup */
float* Rudder_Setup(void * a1, int* a2);
/* 00436770 Vehicle_UpdateCockpit_5 */
unsigned int Vehicle_UpdateCockpit_5(void);
/* 00436780 RainEffect_Init */
char * RainEffect_Init(void);
/* 00436990 RainEffect_Setup */
int RainEffect_Setup(int80_t a1, void * a2);
/* 00436A50 RainEffect_LoadParameters */
int RainEffect_LoadParameters(void * a1);
/* 00436AF0 Vehicle_CheckFlightDynamics_5 */
unsigned int Vehicle_CheckFlightDynamics_5(void);
/* 00436B10 EnvironmentSound_Init */
int* EnvironmentSound_Init(void);
/* 00436CB0 EnvironmentSound_Update */
int* EnvironmentSound_Update(void * a1);
/* 00436D10 EnvironmentSound_LoadParameters */
int EnvironmentSound_LoadParameters(float a1);
/* 00436DA0 Vehicle_LeftEcco2F2F2F2F */
int Vehicle_LeftEcco2F2F2F2F(void * a1);
/* 004370A0 Vehicle_AmbientRain */
int Vehicle_AmbientRain(float a1);
/* 00437150 Vehicle_InitHeli_6 */
int Vehicle_InitHeli_6(void * a1);
/* 004374E0 Vehicle_InitPlane_6 */
unsigned int Vehicle_InitPlane_6(void);
/* 00437500 Vehicle_UpdateRudder_6 */
int Vehicle_UpdateRudder_6(int a1);
/* 00437510 Smoke_Init */
char * Smoke_Init(void);
/* 00437AD0 Smoke_Action */
void * Smoke_Action(void * a1, int* a2);
/* 00437CA0 Smoke_Update */
int Smoke_Update(void * a1);
/* 00437D00 Smoke_OnEvent */
int Smoke_OnEvent(void * a1);
/* 00437D50 Smoke_Setup */
char * Smoke_Setup(void * a1);
/* 00437DB0 Smoke_LoadParameters */
int Smoke_LoadParameters(long double a1, void * a2);
/* 00438000 Smoke_Process */
void * Smoke_Process(void * a1);
/* 00438240 Vehicle_DeployGear_6 */
void * Vehicle_DeployGear_6(void * a1);
/* 00438370 Vehicle_UpdateCockpit_6 */
unsigned int Vehicle_UpdateCockpit_6(void);
/* 00438390 GunShotEffect_Init */
char * GunShotEffect_Init(void);
/* 00438440 GunShotEffect_LoadParameters */
int GunShotEffect_LoadParameters(int* a1);
/* 00438890 Vehicle_CheckFlightDynamics_6 */
unsigned int Vehicle_CheckFlightDynamics_6(void);
/* 004388A0 Vehicle_InitHeli_7 */
int Vehicle_InitHeli_7(void * a1);
/* 004388B0 PlaceExplosiveTBA_Init */
int* PlaceExplosiveTBA_Init(void);
/* 004389E0 PlaceExplosiveTBA_LoadParameters */
int PlaceExplosiveTBA_LoadParameters(long double a1, long double a2, long double a3, long double a4, float a5, void * a6);
/* 00438C10 Vehicle_InitPlane_7 */
unsigned int Vehicle_InitPlane_7(void);
/* 00438DA0 RotatingObject_Setup */
char * RotatingObject_Setup(void * a1);
/* 00438DF0 RotatingObject_Init */
int* RotatingObject_Init(void);
/* 00439090 RotatingObject_LoadParameters */
void * RotatingObject_LoadParameters(int80_t a1, float a2);
/* 004395D0 RotatingObject_Process */
int RotatingObject_Process(float a1);
/* 004397A0 Vehicle_UpdateRudder_7 */
unsigned int Vehicle_UpdateRudder_7(void);
/* 004397C0 AlarmLight_Init */
char * AlarmLight_Init(void);
/* 00439A50 AlarmLight_Cleanup */
int* AlarmLight_Cleanup(int* a1, float a2);
/* 00439B70 AlarmLight_Cleanup_2 */
int AlarmLight_Cleanup_2(float a1);
/* 00439EC0 AlarmLight_Cleanup_3 */
void * AlarmLight_Cleanup_3(float a1, int a2);
/* 00439F10 Vehicle_DeployGear_7 */
float Vehicle_DeployGear_7(float a1, float a2) __location("result");
/* 0043A270 AlarmLight_LoadParameters */
struct status_msg* AlarmLight_LoadParameters(int80_t a1, void * a2);
/* 0043A3C0 AlarmLight_Setup */
void * AlarmLight_Setup(void * a1);
/* 0043A450 AlarmLight_Parsed */
int AlarmLight_Parsed(float a1, char * a2);
/* 0043A5F0 Vehicle_1009011 */
int Vehicle_1009011(void * a1);
/* 0043A660 AlarmLight_Update */
int AlarmLight_Update(float a1, float a2);
/* 0043A710 AlarmLight_OnEvent */
int AlarmLight_OnEvent(void * a1);
/* 0043A790 AlarmLight_Action */
int AlarmLight_Action(void * a1);
/* 0043A810 Vehicle_UpdateCockpit_7 */
unsigned int Vehicle_UpdateCockpit_7(void);
/* 0043A840 MineField_Init */
int* MineField_Init(void);
/* 0043ABC0 MineField_LoadParameters */
int MineField_LoadParameters(long double a1, void * a2);
/* 0043AC40 Vehicle_1009011_2 */
struct status_msg* Vehicle_1009011_2(void * a1);
/* 0043AD60 Vehicle_CheckFlightDynamics_7 */
unsigned int Vehicle_CheckFlightDynamics_7(void);
/* 0043AD80 Radio_Init */
int* Radio_Init(void);
/* 0043AF90 Radio_LoadParameters */
int* Radio_LoadParameters(int80_t a1, void * a2);
/* 0043B1C0 Radio_Setup */
int Radio_Setup(void * a1);
/* 0043B250 Radio_Process */
int Radio_Process(void * a1);
/* 0043B2D0 Vehicle_InitHeli_8 */
unsigned int Vehicle_InitHeli_8(void);
/* 0043B2F0 Generator_Init */
int* Generator_Init(void);
/* 0043B500 Generator_LoadParameters */
struct status_msg* Generator_LoadParameters(int80_t a1, void * a2);
/* 0043B6E0 Generator_Setup */
int Generator_Setup(void * a1);
/* 0043B790 Generator_Process */
int Generator_Process(void * a1);
/* 0043B830 Vehicle_InitPlane_8 */
unsigned int Vehicle_InitPlane_8(void);
/* 0043B850 SimpointObjGenerator_Init */
int* SimpointObjGenerator_Init(void);
/* 0043BB20 SimpointObjGenerator_LoadParameters */
int SimpointObjGenerator_LoadParameters(float a1);
/* 0043BCA0 SimpointObjGenerator_Setup */
int SimpointObjGenerator_Setup(void * a1);
/* 0043BDA0 SimpointObjGenerator_Process */
int SimpointObjGenerator_Process(void * a1);
/* 0043BE60 Vehicle_UpdateRudder_8 */
unsigned int Vehicle_UpdateRudder_8(void);
/* 0043BFD0 ExplodeMagicObj_Init */
void * ExplodeMagicObj_Init(void);
/* 0043C0B0 ExplodeMagicObj_LoadParameters_2 */
int ExplodeMagicObj_LoadParameters_2(void * a1);
/* 0043C1F0 ExplodeMagicObj_LoadParameters */
int ExplodeMagicObj_LoadParameters(long double a1, long double a2, long double a3, long double a4, long double a5, int* a6);
/* 0043C2D0 ExplodeMagicObj_Update */
int ExplodeMagicObj_Update(float a1, float a2);
/* 0043C380 Vehicle_DeployGear_8 */
unsigned int Vehicle_DeployGear_8(void);
/* 0043C390 ElevatorFloorIndicator_Action */
void * ElevatorFloorIndicator_Action(void * a1, int* a2);
/* 0043C6D0 ElevatorFloorIndicator_Init */
int* ElevatorFloorIndicator_Init(void);
/* 0043C8D0 ElevatorFloorIndicator_LoadParameters */
int* ElevatorFloorIndicator_LoadParameters(float a1);
/* 0043CA10 ElevatorFloorIndicator_Setup */
struct status_msg* ElevatorFloorIndicator_Setup(int80_t a1, int a2);
/* 0043CB30 ElevatorFloorIndicator_Process */
void * ElevatorFloorIndicator_Process(void * a1);
/* 0043CB70 ElevatorFloorIndicator_Update */
int ElevatorFloorIndicator_Update(float a1);
/* 0043CC50 Vehicle_UpdateCockpit_8 */
unsigned int Vehicle_UpdateCockpit_8(void);
/* 0043CC70 Elevator_Init */
int* Elevator_Init(void);
/* 0043D010 Elevator_LoadParameters */
char * Elevator_LoadParameters(int* a1);
/* 0043D280 Elevator_Setup */
unsigned int Elevator_Setup(int* a1);
/* 0043D6E0 Vehicle_CheckFlightDynamics_8 */
float Vehicle_CheckFlightDynamics_8(float a1) __location("result");
/* 0043D8C0 Vehicle_InitHeli_9 */
int* Vehicle_InitHeli_9(void * a1);
/* 0043D960 Vehicle_InitPlane_9 */
int Vehicle_InitPlane_9(float a1);
/* 0043DF20 Elevator_Process */
int Elevator_Process(void * a1);
/* 0043E0A0 Elevator_Update */
int Elevator_Update(void * a1);
/* 0043E1F0 Elevator_OnEvent */
void * Elevator_OnEvent(float a1);
/* 0043E290 Elevator_Action */
void * Elevator_Action(void * a1, void ** a2);
/* 0043E4C0 Vehicle_UpdateRudder_9 */
unsigned int Vehicle_UpdateRudder_9(void);
/* 0043E4E0 Vehicle_DeployGear_9 */
int Vehicle_DeployGear_9(void);
/* 0043E4F0 GenericPhysicsMagicObj_Init */
void * GenericPhysicsMagicObj_Init(void);
/* 0043E580 GenericPhysicsMagicObj_LoadParameters */
float* GenericPhysicsMagicObj_LoadParameters(float a1);
/* 0043E600 GenericPhysicsMagicObj_OnEvent */
float* GenericPhysicsMagicObj_OnEvent(float a1);
/* 0043E650 GenericPhysicsMagicObj_Setup */
void * GenericPhysicsMagicObj_Setup(void * a1);
/* 0043E670 GenericPhysicsMagicObj_Process */
void * GenericPhysicsMagicObj_Process(void * a1, int* a2);
/* 0043E7A0 GenericPhysicsMagicObj_Update */
void * GenericPhysicsMagicObj_Update(void * a1, void * a2);
/* 0043E8C0 Vehicle_UpdateCockpit_9 */
unsigned int Vehicle_UpdateCockpit_9(void);
/* 0043E8D0 GenericPhysicsObj_Init */
void * GenericPhysicsObj_Init(void);
/* 0043EAB0 GenericPhysicsObj_Update */
void * GenericPhysicsObj_Update(float a1);
/* 0043EBA0 GenericPhysicsObj_LoadParameters */
float* GenericPhysicsObj_LoadParameters(float a1);
/* 0043EC30 Vehicle_CheckFlightDynamics_9 */
float* Vehicle_CheckFlightDynamics_9(float a1);
/* 0043EC80 GenericPhysicsObj_Process */
int GenericPhysicsObj_Process(void * a1);
/* 0043EDF0 GenericPhysicsObj_Update_2 */
void * GenericPhysicsObj_Update_2(void * a1, int* a2);
/* 0043EEF0 Vehicle_InitHeli_10 */
unsigned int Vehicle_InitHeli_10(void);
/* 0043EF10 Vehicle_InitPlane_10 */
struct status_msg* Vehicle_InitPlane_10(void * a1, int a2, int a3, int a4, int* a5);
/* 0043EFF0 Wire_Init */
int* Wire_Init(void);
/* 0043F1F0 Wire_LoadParameters */
int Wire_LoadParameters(int* a1);
/* 0043F360 Wire_Setup */
void * Wire_Setup(void * a1);
/* 0043F3D0 Wire_Process */
int Wire_Process(float a1);
/* 0043F560 Wire_Update */
int Wire_Update(double* a1, void * a2);
/* 0043F700 Wire_OnEvent */
int Wire_OnEvent(void * a1);
/* 0043F780 Wire_Action */
int Wire_Action(void * a1);
/* 0043F800 Vehicle_UpdateRudder_10 */
unsigned int Vehicle_UpdateRudder_10(void);
/* 0043F820 Vehicle_DeployGear_10 */
float* Vehicle_DeployGear_10(float* a1, double* a2);
/* 0043F8A0 Vehicle_UpdateCockpit_10 */
int Vehicle_UpdateCockpit_10(float a1);
/* 0043F900 Fence_Init */
void * Fence_Init(void);
/* 0043FAE0 Fence_LoadParameters */
int* Fence_LoadParameters(int* a1);
/* 0043FC30 Fence_Setup */
int* Fence_Setup(void * a1);
/* 0043FE50 Fence_Process */
char * Fence_Process(void * a1);
/* 0043FEA0 Fence_Update */
int Fence_Update(float a1);
/* 004400C0 Fence_OnEvent */
int Fence_OnEvent(void * a1, void * a2);
/* 00440250 Env_TriggerAlarm */
int Env_TriggerAlarm(void);
/* 00440270 Env_UpdateCameraLens */
void Env_UpdateCameraLens(void);
/* 00440280 Ladder_LoadParameters */
int Ladder_LoadParameters(float a1, int* a2);
/* 004403C0 Ladder_Setup */
void * Ladder_Setup(void * a1);
/* 004403E0 Ladder_Init */
void * Ladder_Init(void);
/* 004404C0 Ladder_Update */
int Ladder_Update(double* a1, int* a2);
/* 00440700 Env_CheckAmbientArea */
unsigned int Env_CheckAmbientArea(void);
/* 00440710 AlarmControl_Init */
int* AlarmControl_Init(void);
/* 004408A0 AlarmControl_LoadParameters */
int AlarmControl_LoadParameters(int80_t a1, void * a2);
/* 00440A40 AlarmControl_Setup */
int AlarmControl_Setup(void * a1);
/* 00440B20 AlarmControl_Process */
int AlarmControl_Process(void * a1);
/* 00440BE0 Env_ScanViewCone */
unsigned int Env_ScanViewCone(void);
/* 00440C00 Env_ActivateEntity */
void * Env_ActivateEntity(void * a1);
/* 00440C10 Env_InitLadder_2 */
void * Env_InitLadder_2(void * a1);
/* 00440C20 SCameraControl_Init */
int* SCameraControl_Init(void);
/* 00440D70 SCameraControl_LoadParameters */
char SCameraControl_LoadParameters(int80_t a1, void * a2);
/* 00440EA0 SCameraControl_Setup */
int SCameraControl_Setup(void * a1);
/* 00440F30 SCameraControl_Process */
int SCameraControl_Process(void * a1);
/* 00440FB0 Env_TriggerAlarm_2 */
unsigned int Env_TriggerAlarm_2(void);
/* 00440FD0 SCamera_Init */
int SCamera_Init(void);
/* 004415C0 SCamera_Cleanup */
char * SCamera_Cleanup(float a1);
/* 00441770 SCameraLens_Tick */
int SCameraLens_Tick(double* a1);
/* 00441AE0 Env_CameraBeepS */
struct status_msg* Env_CameraBeepS(void * a1);
/* 00441BF0 camera_move */
struct status_msg* camera_move(long double a1, float a2);
/* 00442020 Env_UpdateCameraLens_2 */
int Env_UpdateCameraLens_2(int* a1, void * a2);
/* 00442070 SCamera_Cleanup_2 */
int* SCamera_Cleanup_2(void * a1);
/* 004420D0 SCamera_Cleanup_3 */
int SCamera_Cleanup_3(float a1);
/* 004422F0 SCamera_Cleanup_4 */
void * SCamera_Cleanup_4(float a1, float a2);
/* 004423F0 SCamera_LoadParameters */
int* SCamera_LoadParameters(int* a1);
/* 00442610 SCamera_Setup */
int* SCamera_Setup(int80_t a1, void * a2);
/* 004426D0 SCamera_Process */
void * SCamera_Process(void * a1);
/* 00442740 SCamera_Parsed */
char * SCamera_Parsed(float a1, char * a2);
/* 00442890 SCamera_OnEvent */
int SCamera_OnEvent(void * a1);
/* 00442970 SCamera_Action */
int SCamera_Action(void * a1);
/* 00442A30 SCamera_Cleanup_5 */
void * SCamera_Cleanup_5(void * a1, int* a2);
/* 00442A70 SCamera_Cleanup_6 */
int SCamera_Cleanup_6(float a1);
/* 00442C60 SCamera_Cleanup_7 */
int SCamera_Cleanup_7(int a1, double** a2);
/* 00442DD0 SCamera_Cleanup_8 */
void * SCamera_Cleanup_8(double* a1, float a2);
/* 004432F0 SCamera_Cleanup_9 */
int SCamera_Cleanup_9(float a1, void * a2);
/* 00443450 SCamera_Cleanup_10 */
void * SCamera_Cleanup_10(void * a1, int* a2);
/* 004434F0 SCamera_Cleanup_11 */
int SCamera_Cleanup_11(float a1, void * a2);
/* 00443610 Env_ScanViewCone_2 */
int Env_ScanViewCone_2(void);
/* 00443660 Env_ActivateEntity_2 */
int Env_ActivateEntity_2(void);
/* 00443670 Env_InitLadder_3 */
int Env_InitLadder_3(void);
/* 00443680 Terminal_Init */
int* Terminal_Init(void);
/* 004438E0 Terminal_LoadParameters */
char Terminal_LoadParameters(int80_t a1, void * a2);
/* 00443990 Terminal_Setup */
char * Terminal_Setup(void * a1);
/* 00443A60 Terminal_Process */
int Terminal_Process(void * a1);
/* 00443B80 Terminal_Update */
int Terminal_Update(void * a1);
/* 00443C80 GenericTBA_OnEvent */
int GenericTBA_OnEvent(double* a1, void * a2);
/* 00443E60 Env_TriggerAlarm_3 */
unsigned int Env_TriggerAlarm_3(void);
/* 00443E80 Env_UpdateCameraLens_3 */
int Env_UpdateCameraLens_3(void);
/* 00443E90 Env_CheckAmbientArea_3 */
int Env_CheckAmbientArea_3(void);
/* 00443EA0 Env_ScanViewCone_3 */
void * Env_ScanViewCone_3(void * a1);
/* 00443ED0 Cabinet_Init */
void * Cabinet_Init(void);
/* 00444150 Cabinet_Cleanup */
int Cabinet_Cleanup(double* a1, float a2);
/* 00444260 Cabinet_Cleanup_2 */
int Cabinet_Cleanup_2(float a1);
/* 00444420 Cabinet_LoadParameters */
int Cabinet_LoadParameters(int* a1);
/* 00444590 Cabinet_Setup */
void * Cabinet_Setup(void * a1);
/* 00444660 Cabinet_Process */
void * Cabinet_Process(void * a1);
/* 004446E0 Cabinet_Update */
char * Cabinet_Update(float a1, char * a2);
/* 00444860 Cabinet_OnEvent */
int Cabinet_OnEvent(double* a1, void * a2);
/* 004449C0 Cabinet_Cleanup_3 */
int Cabinet_Cleanup_3(void * a1);
/* 00444A70 Cabinet_Cleanup_4 */
int Cabinet_Cleanup_4(void * a1);
/* 00444B00 Env_ScanViewCone_5 */
unsigned int Env_ScanViewCone_5(void);
/* 00444B30 Env_ActivateEntity_5 */
double* Env_ActivateEntity_5(double* a1, double* a2, int a3);
/* 00444B80 Env_InitLadder_6 */
long double Env_InitLadder_6(void * a1);
/* 00444B90 Env_TriggerAlarm_6 */
void * Env_TriggerAlarm_6(void * a1);
/* 00444BA0 Env_UpdateCameraLens_6 */
void * Env_UpdateCameraLens_6(void * a1);
/* 00444BC0 Env_CheckAmbientArea_6 */
void * Env_CheckAmbientArea_6(void * a1);
/* 00444BF0 Switch_Init */
int* Switch_Init(void);
/* 00444F20 Switch_LoadParameters */
int* Switch_LoadParameters(float a1);
/* 004450F0 Switch_Setup */
void * Switch_Setup(int80_t a1, void * a2);
/* 00445270 Switch_Process */
void * Switch_Process(void * a1);
/* 004452F0 Switch_Update */
float* Switch_Update(float a1);
/* 004453E0 Env_CheckAmbientArea_7 */
float* Env_CheckAmbientArea_7(void * a1);
/* 00445730 Switch_OnEvent */
int Switch_OnEvent(double* a1, void * a2);
/* 00445860 Switch_Cleanup */
int Switch_Cleanup(void * a1);
/* 00445980 Switch_Cleanup_2 */
int Switch_Cleanup_2(void * a1);
/* 00445A80 Switch_Cleanup_3 */
void * Switch_Cleanup_3(void * a1, int* a2);
/* 00445DC0 Env_ScanViewCone_7 */
unsigned int Env_ScanViewCone_7(void);
/* 00445DE0 Door_Cleanup */
int Door_Cleanup(float a1, int* a2);
/* 00446290 Env_ActivateEntity_7 */
int Env_ActivateEntity_7(float a1);
/* 004463B0 Env_InitLadder_8 */
int Env_InitLadder_8(void * a1);
/* 00446450 Env_TriggerAlarm_8 */
int Env_TriggerAlarm_8(int* a1, int a2);
/* 00446470 Door_Cleanup_2 */
int Door_Cleanup_2(void * a1, double* a2);
/* 004464C0 Door_Init */
int* Door_Init(void);
/* 00446AC0 Door_Setup */
void * Door_Setup(void * a1);
/* 00446B50 Door_Update */
int Door_Update(double* a1, void * a2);
/* 00446D10 Door_LoadParameters */
struct status_msg* Door_LoadParameters(long double a1, void * a2);
/* 004474E0 Env_UpdateCameraLens_8 */
float* Env_UpdateCameraLens_8(void * a1);
/* 00447830 Door_Process */
int* Door_Process(unsigned int a1, char * a2);
/* 00447A90 Door_Action */
int Door_Action(void * a1);
/* 00447BE0 Door_Cleanup_3 */
int Door_Cleanup_3(void * a1);
/* 00447D00 Env_CheckAmbientArea_8 */
unsigned int Env_CheckAmbientArea_8(void);
/* 00447D20 Env_ScanViewCone_8 */
int Env_ScanViewCone_8(void);
/* 00447D30 Env_ActivateEntity_8 */
long double Env_ActivateEntity_8(void * a1);
/* 00447D40 Env_InitLadder_9 */
void * Env_InitLadder_9(void * a1);
/* 00447D50 Env_TriggerAlarm_9 */
void * Env_TriggerAlarm_9(void * a1);
/* 00447D60 Env_UpdateCameraLens_9 */
int Env_UpdateCameraLens_9(void * a1, char a2);
/* 00447D70 Env_CheckAmbientArea_9 */
int Env_CheckAmbientArea_9(void * a1);
/* 00447DA0 Env_ScanViewCone_9 */
void * Env_ScanViewCone_9(void * a1);
/* 00447DB0 GenericTBA_Init */
int* GenericTBA_Init(void);
/* 004480B0 GenericTBA_LoadParameters */
char GenericTBA_LoadParameters(int80_t a1, void * a2);
/* 00448160 GenericTBA_Setup */
char * GenericTBA_Setup(void * a1);
/* 004482D0 GenericTBA_Process */
int GenericTBA_Process(void * a1);
/* 004483F0 GenericTBA_Update */
int GenericTBA_Update(void * a1);
/* 00448530 Env_ActivateEntity_9 */
unsigned int Env_ActivateEntity_9(void);
/* 00448550 Env_InitLadder_10 */
int Env_InitLadder_10(void);
/* 00448560 Env_TriggerAlarm_10 */
int Env_TriggerAlarm_10(void);
/* 00448570 Env_UpdateCameraLens_10 */
double* Env_UpdateCameraLens_10(double* a1, double* a2, int a3);
/* 004485C0 Env_CheckAmbientArea_10 */
long double Env_CheckAmbientArea_10(void * a1);
/* 004485D0 Env_ScanViewCone_10 */
void * Env_ScanViewCone_10(void * a1);
/* 004485E0 Building_Init */
void * Building_Init(void);
/* 00448760 Building_LoadParameters */
int Building_LoadParameters(int* a1, int a2);
/* 00448850 Building_Setup */
int Building_Setup(void * a1);
/* 00448890 Building_Process */
float Building_Process(float a1) __location("result");
/* 00448950 Building_OnEvent */
int Building_OnEvent(float a1, void * a2);
/* 00448A90 Building_Update */
void * Building_Update(void * a1, int* a2);
/* 00448B50 Env_ActivateEntity_10 */
unsigned int Env_ActivateEntity_10(void);
/* 00448CF0 RadarDish_Setup */
int* RadarDish_Setup(void * a1);
/* 00448D30 RadarDish_Init */
void * RadarDish_Init(void);
/* 00448E30 RadarDish_LoadParameters */
void * RadarDish_LoadParameters(void * a1);
/* 00449290 Env_InitLadder_11 */
unsigned int Env_InitLadder_11(void);
/* 00449360 Siren_Init */
int* Siren_Init(void);
/* 004494D0 Siren_LoadParameters */
struct status_msg* Siren_LoadParameters(int80_t a1, void * a2);
/* 00449660 Siren_Setup */
int Siren_Setup(void * a1);
/* 00449710 Siren_Process */
int Siren_Process(void * a1);
/* 004497D0 Env_TriggerAlarm_11 */
int Env_TriggerAlarm_11(void);
/* 00449950 ExplodeMagicObj_Setup */
void * ExplodeMagicObj_Setup(void * a1);
/* 00449970 Glass_Init */
void * Glass_Init(void);
/* 00449A80 Glass_LoadParameters */
int Glass_LoadParameters(int* a1);
/* 00449BA0 Glass_Update */
int Glass_Update(float a1, float a2);
/* 00449D10 Env_UpdateCameraLens_11 */
unsigned int Env_UpdateCameraLens_11(void);
/* 00449D20 Env_CheckAmbientArea_11 */
int Env_CheckAmbientArea_11(void);
/* 00449D30 GlassShatter_Init */
int GlassShatter_Init(void);
/* 00449E50 GlassShatter_LoadParameters */
int GlassShatter_LoadParameters(float a1);
/* 0044A1C0 Env_ScanViewCone_11 */
unsigned int Env_ScanViewCone_11(void);
/* 0044A1D0 Env_333333333 */
struct status_msg* Env_333333333(unsigned int a1, int* a2, double* a3, float* a4, void * a5);
/* 0044A630 Env_GlassCrush1 */
struct status_msg* Env_GlassCrush1(int a1);
/* 0044A670 Env_ActivateEntity_11 */
void * Env_ActivateEntity_11(float* a1, float* a2, float* a3);
/* 0044BD70 Env_333333333Glassshatte */
struct status_msg* Env_333333333Glassshatte(unsigned int a1, float* a2, double* a3, double* a4, float a5);
/* 0044C130 AmbientArea_Init */
int* AmbientArea_Init(void);
/* 0044C370 AmbientArea_LoadParameters */
int AmbientArea_LoadParameters(int80_t a1, void * a2);
/* 0044C700 AmbientArea_Setup */
char * AmbientArea_Setup(void * a1);
/* 0044C740 AmbientArea_Process */
int AmbientArea_Process(void * a1);
/* 0044C810 Env_InitLadder_12 */
unsigned int Env_InitLadder_12(void);
/* 0044C830 Env_TriggerAlarm_12 */
struct status_msg* Env_TriggerAlarm_12(void * a1);
/* 0044C860 Env_UpdateCameraLens_12 */
int Env_UpdateCameraLens_12(int a1, int a2, int a3, int a4, int a5);
/* 0044C8C0 Env_CheckAmbientArea_12 */
void * Env_CheckAmbientArea_12(void);
/* 0044C8D0 HumanAI_Init */
void * HumanAI_Init(void);
/* 0044CCA0 AIAction_Patrol_2 */
void * AIAction_Patrol_2(void);
/* 0044D0E0 AIAction_Patrol */
int AIAction_Patrol(int a1, float a2);
/* 0044D160 AIAction_Combat */
int AIAction_Combat(int a1, float a2);
/* 0044D260 AIAction_Dead */
int AIAction_Dead(int a1, float a2);
/* 0044D2C0 AIAction_FallFlat */
int AIAction_FallFlat(long double a1, int a2, float a3);
/* 0044D420 AIAction_Activate */
int AIAction_Activate(int a1, float a2);
/* 0044D4A0 AIAction_WalkToNode */
int AIAction_WalkToNode(int a1, float a2);
/* 0044D510 AIAction_RunToNode */
int AIAction_RunToNode(int a1, float a2);
/* 0044D580 AIAction_FireAtNode */
int AIAction_FireAtNode(long double a1, long double a2, int a3, float a4);
/* 0044D630 AIAction_FireAtTask */
int AIAction_FireAtTask(long double a1, long double a2, int a3, float a4);
/* 0044D6E0 AIAction_PlayAnimation */
int AIAction_PlayAnimation(int a1, float a2);
/* 0044D750 AIAction_PlaySound */
int AIAction_PlaySound(int a1, float a2);
/* 0044D7D0 AIAction_MoveToEvent */
int AIAction_MoveToEvent(int a1, float a2);
/* 0044D850 Env_ScanViewCone_12 */
int* Env_ScanViewCone_12(int a1);
/* 0044D870 AIAction_LookAtEvent */
int AIAction_LookAtEvent(long double a1, int a2, float a3);
/* 0044D8F0 AIAction_Stunned */
int AIAction_Stunned(long double a1, int a2, float a3);
/* 0044D960 AIAction_KickGrenade */
int AIAction_KickGrenade(int a1, int a2);
/* 0044DA00 AIAction_RunPanicking */
int AIAction_RunPanicking(long double a1, int a2, float a3);
/* 0044DA80 AIAction_Idle */
int AIAction_Idle(int a1, float a2);
/* 0044DAE0 AIAction_SetCombat */
int AIAction_SetCombat(int a1, int a2);
/* 0044DBC0 AIFunction_RemoveAlarmActions */
int AIFunction_RemoveAlarmActions(int a1);
/* 0044DC40 AIFunction_SetViewLength */
int AIFunction_SetViewLength(long double a1, int a2, float a3);
/* 0044DCD0 AIFunction_SetAlarmViewLength */
int AIFunction_SetAlarmViewLength(long double a1, int a2, float a3);
/* 0044DD30 AIFunction_SetViewAlpha */
int AIFunction_SetViewAlpha(long double a1, int a2, float a3);
/* 0044DD90 AIFunction_SetViewGamma */
int AIFunction_SetViewGamma(long double a1, int a2, float a3);
/* 0044DDF0 AIFunction_SetSecondaryViewLength */
int AIFunction_SetSecondaryViewLength(long double a1, int a2, float a3);
/* 0044DE80 AIFunction_SetSecondaryAlarmViewLength */
int AIFunction_SetSecondaryAlarmViewLength(long double a1, int a2, float a3);
/* 0044DEE0 AIFunction_SetSecondaryViewAlpha */
int AIFunction_SetSecondaryViewAlpha(long double a1, int a2, float a3);
/* 0044DF40 AIFunction_SetSecondaryViewGamma */
int AIFunction_SetSecondaryViewGamma(long double a1, int a2, float a3);
/* 0044DFA0 AIFunction_GetCurrentEventType */
int AIFunction_GetCurrentEventType(int a1);
/* 0044E000 AIFunction_GetRandomValue */
int AIFunction_GetRandomValue(long double a1, int a2, float a3);
/* 0044E060 AIFunction_DefaultHandler */
int AIFunction_DefaultHandler(int a1);
/* 0044E0C0 AIFunction_SetEventPriority */
int AIFunction_SetEventPriority(int a1, float a2);
/* 0044E150 AIFunction_SetInvulnerability */
int AIFunction_SetInvulnerability(int a1, float a2);
/* 0044E1B0 AIFunction_SetInstantDeath */
int AIFunction_SetInstantDeath(int a1, float a2);
/* 0044E210 AIFunction_SetDeathAnimation */
int AIFunction_SetDeathAnimation(int a1, float a2);
/* 0044E270 AIFunction_SetAlarmTriggerID */
int AIFunction_SetAlarmTriggerID(int a1, float a2);
/* 0044E2D0 AIFunction_SetAlarmControlID */
int AIFunction_SetAlarmControlID(int a1, float a2);
/* 0044E330 AIFunction_SetAlarmAccess */
int AIFunction_SetAlarmAccess(int a1, float a2);
/* 0044E390 AIFunction_SetGunnerID */
int AIFunction_SetGunnerID(int a1, float a2);
/* 0044E3F0 AIFunction_GetAlarmTriggerID */
int AIFunction_GetAlarmTriggerID(int a1);
/* 0044E430 AIFunction_GetAlarmControlID */
int AIFunction_GetAlarmControlID(int a1);
/* 0044E470 AIFunction_GetAlarmAccess */
int AIFunction_GetAlarmAccess(int a1);
/* 0044E4B0 AIFunction_GetGunnerID */
int AIFunction_GetGunnerID(int a1);
/* 0044E4F0 AIFunction_GetAlarmControlStatus */
int AIFunction_GetAlarmControlStatus(int a1);
/* 0044E5E0 AIFunction_GetGunnerStatus */
int AIFunction_GetGunnerStatus(int a1);
/* 0044E6D0 AIFunction_SetScriptIntegerValue */
int AIFunction_SetScriptIntegerValue(int a1, float a2);
/* 0044E740 AIFunction_GetScriptIntegerValue */
int AIFunction_GetScriptIntegerValue(int a1, int a2);
/* 0044E790 AIFunction_SetScriptRealValue */
int AIFunction_SetScriptRealValue(int80_t a1, int a2, float a3);
/* 0044E800 AIFunction_GetScriptRealValue */
int AIFunction_GetScriptRealValue(int a1, float a2);
/* 0044E860 AIFunction_IsEventBehind */
int AIFunction_IsEventBehind(int a1);
/* 0044E930 AIFunction_GetEventDistance */
int AIFunction_GetEventDistance(int a1);
/* 0044E9B0 AIFunction_GetAlarmTriggerDistance */
int AIFunction_GetAlarmTriggerDistance(int a1);
/* 0044EAF0 AIFunction_SetAnimationInterval */
int AIFunction_SetAnimationInterval(long double a1, long double a2, int a3, float a4);
/* 0044EBB0 AIFunction_AddAnimationEntry */
int AIFunction_AddAnimationEntry(long double a1, int a2, float a3);
/* 0044ECB0 AIFunction_GetAnimationToPlay */
int AIFunction_GetAnimationToPlay(int a1);
/* 0044EE40 AIFunction_SendResponse */
int AIFunction_SendResponse(int a1);
/* 0044EEB0 AIEVENT_CREATE */
void * AIEVENT_CREATE(void);
/* 0044F060 HumanAI_LoadParameters */
int HumanAI_LoadParameters(void * a1);
/* 0044F380 Env_ActivateEntity_12 */
void * Env_ActivateEntity_12(void * a1);
/* 0044F410 HumanAI_Setup */
void * HumanAI_Setup(int a1);
/* 0044FBA0 Env_WeaponNotInitialized */
void Env_WeaponNotInitialized(void * a1);
/* 0044FC90 HumanAI_EventDispatch */
int HumanAI_EventDispatch(void * a1, int a2, int a3);
/* 0044FD50 Env_InitLadder_13 */
int Env_InitLadder_13(int* a1);
/* 0044FE50 Env_TriggerAlarm_13 */
int Env_TriggerAlarm_13(void * a1, void ** a2);
/* 0044FEC0 HumanAI_RunActions */
int* HumanAI_RunActions(void * a1);
/* 0044FF40 Env_UpdateCameraLens_13 */
int* Env_UpdateCameraLens_13(void * a1);
/* 0044FF80 Env_CheckAmbientArea_13 */
void * Env_CheckAmbientArea_13(void * a1);
/* 0044FFC0 HumanAI_Process */
int* HumanAI_Process(void * a1);
/* 004500C0 AI_CombatTarget */
int* AI_CombatTarget(void * a1);
/* 00450110 HumanAI_EventOffer */
double* HumanAI_EventOffer(void * a1, double** a2);
/* 004502F0 AI_TestViewCones */
double* AI_TestViewCones(long double a1, long double a2, long double a3, void * a4, double* a5, char a6);
/* 00450520 HumanAI_EventQueued */
int* HumanAI_EventQueued(void * a1, int* a2);
/* 004505D0 HumanAI_OnEvent */
int HumanAI_OnEvent(int* a1);
/* 00450770 HumanAI_Action */
int HumanAI_Action(void * a1);
/* 004507D0 HumanAI_Cleanup */
int HumanAI_Cleanup(void * a1);
/* 00450830 AI_CheckVisibility */
int* AI_CheckVisibility(void);
/* 004508E0 AIAction_Patrol_3 */
int AIAction_Patrol_3(void);
/* 00450B20 AIEVENT_CREATE_2 */
int AIEVENT_CREATE_2(void);
/* 00450C80 AI_CheckHearing */
int AI_CheckHearing(void);
/* 00450CA0 AI_FireWeapon */
int AI_FireWeapon(void);
/* 00450CC0 AI_MoveToNode */
int AI_MoveToNode(void);
/* 00450CE0 AI_EventBroadcast */
int* AI_EventBroadcast(int a1);
/* 00450D50 AI_TakeCover */
int AI_TakeCover(void * a1, int a2);
/* 00450D80 AI_UpdateOrders */
int AI_UpdateOrders(void * a1, int a2, int a3);
/* 00450DC0 AI_AlertAllies */
void * AI_AlertAllies(void * a1);
/* 00450DE0 AI_ActionstackFull */
void * AI_ActionstackFull(void * a1);
/* 00450E10 AI_SelectTarget */
void * AI_SelectTarget(int a1, int a2, int a3);
/* 00450E70 AI_UpdateSensors */
int AI_UpdateSensors(void * a1, int* a2);
/* 00450EE0 AI_CheckSector */
int* AI_CheckSector(void * a1);
/* 00450F10 AI_UpdatePatrol_2 */
int AI_UpdatePatrol_2(void * a1, void * a2);
/* 00450FF0 AI_CombatTarget_2 */
int* AI_CombatTarget_2(void * a1, int* a2);
/* 00451030 AI_CheckVisibility_2 */
int* AI_CheckVisibility_2(void * a1);
/* 00451050 AI_CheckHearing_2 */
void * AI_CheckHearing_2(void * a1, int* a2);
/* 00451080 AI_FireWeapon_2 */
int* AI_FireWeapon_2(void * a1, void * a2);
/* 004511D0 AI_MoveToNode_2 */
int* AI_MoveToNode_2(int* a1);
/* 004511F0 Combat_SetAimMode */
int Combat_SetAimMode(void * a1, void * a2, int a3);
/* 00451230 AI_TakeCover_2 */
int AI_TakeCover_2(void * a1, void * a2);
/* 00451270 AI_UpdateOrders_2 */
int AI_UpdateOrders_2(void * a1, int a2);
/* 004512A0 AI_AlertAllies_2 */
int* AI_AlertAllies_2(int* a1, void * a2, char a3);
/* 00451320 AI_SelectTarget_2 */
void * AI_SelectTarget_2(void * a1);
/* 00451330 AI_UpdateSensors_2 */
void * AI_UpdateSensors_2(void * a1);
/* 00451350 AI_CheckSector_2 */
int* AI_CheckSector_2(void * a1);
/* 00451380 AI_UpdatePatrol_3 */
int AI_UpdatePatrol_3(void * a1, void * a2);
/* 004513E0 AI_CombatTarget_3 */
int AI_CombatTarget_3(void * a1);
/* 004513F0 AI_AFCaF */
int AI_AFCaF(long double a1, float a2);
/* 00451470 AI_CheckVisibility_3 */
int AI_CheckVisibility_3(void * a1);
/* 00451540 AI_SteerHuman */
int AI_SteerHuman(long double a1, long double a2, void * a3);
/* 004518E0 AI_ExpandRoute */
int* AI_ExpandRoute(void * a1, int a2, double* a3, char a4);
/* 00452080 AI_CheckHearing_3 */
int* AI_CheckHearing_3(void * a1);
/* 004520C0 AI_FireWeapon_3 */
int AI_FireWeapon_3(double* a1, void * a2, double* a3, double* a4, char a5);
/* 004522A0 AI_MoveToNode_3 */
int* AI_MoveToNode_3(void * a1, int a2, double* a3, char a4);
/* 004522D0 AI_CaFCgF */
int AI_CaFCgF(long double a1, long double a2, void * a3, int a4, float a5, char a6);
/* 00452580 AI_TakeCover_3 */
int AI_TakeCover_3(void * a1, int a2, float a3, char a4);
/* 004525B0 AI_UpdateOrders_3 */
int AI_UpdateOrders_3(void * a1, int a2, float a3, char a4);
/* 004525E0 AI_AlertAllies_3 */
void * AI_AlertAllies_3(int a1);
/* 00452660 AI_SelectTarget_3 */
void * AI_SelectTarget_3(int a1);
/* 004526E0 AI_UpdateSensors_3 */
void * AI_UpdateSensors_3(void * a1);
/* 004528F0 AI_CheckSector_3 */
int AI_CheckSector_3(void * a1);
/* 00452910 AI_UpdatePatrol_4 */
int AI_UpdatePatrol_4(int a1);
/* 00452920 AI_CombatTarget_4 */
void AI_CombatTarget_4(void);
/* 00452930 AI_CheckVisibility_4 */
float* AI_CheckVisibility_4(long double a1, int a2, float* a3, float a4, double* a5, float a6);
/* 00452B80 AI_CheckHearing_4 */
int* AI_CheckHearing_4(void * a1, int a2, int a3, char a4);
/* 00452BE0 AI_FireWeapon_4 */
int* AI_FireWeapon_4(int a1, int a2);
/* 00452C10 AI_MoveToNode_4 */
void * AI_MoveToNode_4(int* a1, int a2, int a3);
/* 00452C60 AI_TakeCover_4 */
int* AI_TakeCover_4(void * a1, int a2, int a3, int a4);
/* 00452D20 AI_UpdateOrders_4 */
int* AI_UpdateOrders_4(int* a1, int* a2, double* a3, void * a4, int a5, double* a6);
/* 00453040 AI_AlertAllies_4 */
int AI_AlertAllies_4(int* a1, int* a2, void * a3, int a4);
/* 004530A0 AI_HumanmonitorNoTarget */
int* AI_HumanmonitorNoTarget(int* a1);
/* 00453200 AI_SelectTarget_4 */
int* AI_SelectTarget_4(int* a1);
/* 00453270 AI_UpdateSensors_4 */
void AI_UpdateSensors_4(void);
/* 004532D0 AI_CheckSector_4 */
int* AI_CheckSector_4(int a1);
/* 00453300 AI_UpdatePatrol_5 */
int* AI_UpdatePatrol_5(int a1, char a2);
/* 00453390 AI_CombatTarget_5 */
int* AI_CombatTarget_5(void * a1);
/* 004533B0 PatrolPathCommand_Init */
int* PatrolPathCommand_Init(void);
/* 004534B0 PatrolPathCommand_Update */
void PatrolPathCommand_Update(void * a1);
/* 00453520 PatrolPathCommand_OnEvent */
int PatrolPathCommand_OnEvent(void);
/* 00453540 PatrolPathCommand_Process */
int PatrolPathCommand_Process(void * a1);
/* 00453550 PatrolPath_Init */
int PatrolPath_Init(void);
/* 00453600 PatrolPath_Update */
void * PatrolPath_Update(void);
/* 004536E0 PatrolPath_OnEvent */
int PatrolPath_OnEvent(void * a1);
/* 00453710 PatrolPath_Process */
unsigned int PatrolPath_Process(void);
/* 00453720 PatrolPath_Action */
int PatrolPath_Action(void * a1);
/* 00453730 PatrolPath_OnTick */
int* PatrolPath_OnTick(int* a1);
/* 00453760 PatrolCursor_Advance */
int* PatrolCursor_Advance(int* a1);
/* 004537E0 PatrolCursor_Start */
int* PatrolCursor_Start(void ** a1, int a2, int a3);
/* 00453840 PatrolPath_Find */
void * const PatrolPath_Find(int a1);
/* 00453870 AI_CheckVisibility_5 */
void AI_CheckVisibility_5(void);
/* 00453880 AI_CheckHearing_5 */
int* AI_CheckHearing_5(int* a1, int a2);
/* 004538F0 AI_WalkRain1D */
void AI_WalkRain1D(void * a1);
/* 00453A30 AI_AnimationDNotFound */
int AI_AnimationDNotFound(void * a1, void * a2);
/* 00453C40 AI_FireWeapon_5 */
void * AI_FireWeapon_5(void * a1, float a2);
/* 00453DE0 AI_MoveToNode_5 */
void * AI_MoveToNode_5(void * a1, float a2);
/* 00453F80 AI_TakeCover_5 */
int AI_TakeCover_5(void * a1, void * a2);
/* 00453FB0 AI_UpdateOrders_5 */
int AI_UpdateOrders_5(void * a1, void * a2);
/* 004540D0 AI_AlertAllies_5 */
int AI_AlertAllies_5(void * a1, void * a2);
/* 00454100 AI_SelectTarget_5 */
void * AI_SelectTarget_5(void * a1, int a2);
/* 004541F0 AI_UpdateSensors_5 */
int AI_UpdateSensors_5(void * a1, void * a2);
/* 00454300 AI_CheckSector_5 */
int AI_CheckSector_5(void * a1, void * a2);
/* 004543E0 AI_CombatTarget_6 */
int AI_CombatTarget_6(void * a1, void * a2);
/* 004544C0 AI_FireWeapon_6 */
int AI_FireWeapon_6(void * a1, void * a2);
/* 00454510 AI_MoveToNode_6 */
int AI_MoveToNode_6(void * a1, void * a2);
/* 004545E0 AI_TakeCover_6 */
void * AI_TakeCover_6(void * a1, void * a2);
/* 00454630 AI_UpdateOrders_6 */
int AI_UpdateOrders_6(void * a1, void * a2);
/* 004546C0 AI_AiDeath */
void * AI_AiDeath(void * a1, void * a2);
/* 004547F0 AI_AnimationDNotFound_2 */
void * AI_AnimationDNotFound_2(void * a1, void * a2);
/* 00454880 AI_SelectTarget_6 */
int AI_SelectTarget_6(void * a1, void * a2);
/* 00454940 AI_UpdateSensors_6 */
int AI_UpdateSensors_6(void * a1, void * a2);
/* 00454970 HumanSoldierFemale_Init */
int* HumanSoldierFemale_Init(void);
/* 00454BA0 AI_CheckSector_6 */
int* AI_CheckSector_6(void * a1, int* a2);
/* 00454DA0 AI_CheckVisibility_7 */
int* AI_CheckVisibility_7(void * a1);
/* 00454F10 HumanSoldierFemale_Setup */
int HumanSoldierFemale_Setup(int* a1, int a2);
/* 004550B0 AI_SpeedZMS2F */
int AI_SpeedZMS2F(float* a1);
/* 004553E0 HumanSoldierFemale_Process */
int HumanSoldierFemale_Process(float a1, int* a2);
/* 00455570 HumanSoldierFemale_Update */
unsigned int HumanSoldierFemale_Update(void * a1, float a2);
/* 00455780 HumanSoldierFemale_OnEvent */
int HumanSoldierFemale_OnEvent(void * a1, float* a2);
/* 00455960 AI_UpdateOrders_7 */
unsigned int AI_UpdateOrders_7(void);
/* 00455980 AI_AlertAllies_7 */
int AI_AlertAllies_7(void);
/* 00455990 AI_AnimationDNotFound_3 */
int AI_AnimationDNotFound_3(void * a1, void * a2);
/* 00455BA0 AI_SelectTarget_7 */
int AI_SelectTarget_7(void * a1, void * a2);
/* 00455D10 AI_UpdateSensors_7 */
void * AI_UpdateSensors_7(void * a1, float a2);
/* 00455EB0 AI_CheckSector_7 */
int AI_CheckSector_7(void * a1, void * a2);
/* 00455EE0 AI_UpdatePatrol_8 */
int AI_UpdatePatrol_8(void * a1, void * a2);
/* 00455FE0 AI_CombatTarget_8 */
int AI_CombatTarget_8(void * a1, void * a2);
/* 004560C0 AI_CheckVisibility_8 */
int AI_CheckVisibility_8(void * a1, void * a2);
/* 00456170 AI_CheckHearing_8 */
int AI_CheckHearing_8(void * a1, void * a2);
/* 00456220 AI_FireWeapon_8 */
int AI_FireWeapon_8(void * a1, void * a2);
/* 00456350 AI_MoveToNode_8 */
int AI_MoveToNode_8(void * a1, void * a2);
/* 00456380 AI_TakeCover_8 */
int AI_TakeCover_8(void * a1, void * a2);
/* 00456480 AI_UpdateOrders_8 */
int AI_UpdateOrders_8(void * a1, void * a2);
/* 004564B0 AI_AlertAllies_8 */
void * AI_AlertAllies_8(void * a1, int a2);
/* 00456570 AI_SelectTarget_8 */
int AI_SelectTarget_8(void * a1, void * a2);
/* 00456650 AI_UpdateSensors_8 */
int AI_UpdateSensors_8(void * a1, void * a2);
/* 004566A0 AI_CheckSector_8 */
int AI_CheckSector_8(void * a1, void * a2);
/* 00456770 AI_UpdatePatrol_9 */
int AI_UpdatePatrol_9(void * a1, void * a2);
/* 004567C0 AI_CombatTarget_9 */
struct status_msg* AI_CombatTarget_9(void * a1, int* a2);
/* 00456960 AI_CheckVisibility_9 */
int AI_CheckVisibility_9(void * a1, void * a2);
/* 00456AD0 HumanSoldierRPG_Init */
int* HumanSoldierRPG_Init(void);
/* 00456E50 HumanSoldier_Process */
int HumanSoldier_Process(int* a1, int a2);
/* 00456FF0 AI_SpeedZMS2F_2 */
int AI_SpeedZMS2F_2(float* a1);
/* 004572D0 HumanSoldierRPG_Process */
int HumanSoldierRPG_Process(void * a1, int* a2);
/* 00457430 HumanSoldierRPG_Update */
unsigned int HumanSoldierRPG_Update(void * a1, float a2);
/* 00457620 HumanSoldierRPG_OnEvent */
int HumanSoldierRPG_OnEvent(void * a1, float* a2);
/* 004577E0 AI_CheckHearing_9 */
unsigned int AI_CheckHearing_9(void);
/* 00457800 AI_FireWeapon_9 */
int AI_FireWeapon_9(void);
/* 00457810 AI_WalkRain1D_2 */
void AI_WalkRain1D_2(void * a1);
/* 00457950 AI_AnimationDNotFound_4 */
int AI_AnimationDNotFound_4(void * a1, void * a2);
/* 00457CB0 AI_MoveToNode_9 */
void * AI_MoveToNode_9(void * a1, float a2);
/* 00457F50 AI_TakeCover_9 */
void * AI_TakeCover_9(void * a1, float a2);
/* 004581B0 AI_UpdateOrders_9 */
int AI_UpdateOrders_9(void * a1, void * a2);
/* 004581E0 AI_AlertAllies_9 */
void * AI_AlertAllies_9(void * a1, float a2);
/* 00458250 AI_SelectTarget_9 */
void * AI_SelectTarget_9(void * a1, float a2);
/* 00458510 AI_UpdateSensors_9 */
int AI_UpdateSensors_9(void * a1, void * a2);
/* 00458540 AI_CheckSector_9 */
int AI_CheckSector_9(void * a1, void * a2);
/* 00458570 AI_UpdatePatrol_10 */
int AI_UpdatePatrol_10(void * a1, void * a2);
/* 004585A0 AI_CombatTarget_10 */
int AI_CombatTarget_10(void * a1, void * a2);
/* 004585D0 AI_CheckVisibility_10 */
int AI_CheckVisibility_10(void * a1, void * a2);
/* 00458600 AI_CheckHearing_10 */
int AI_CheckHearing_10(void * a1, void * a2);
/* 00458630 AI_FireWeapon_10 */
void AI_FireWeapon_10(void * a1, void * a2);
/* 004587B0 AI_MoveToNode_10 */
int AI_MoveToNode_10(void * a1, void * a2);
/* 004587E0 AI_TakeCover_10 */
int AI_TakeCover_10(void * a1, void * a2);
/* 004588C0 AI_UpdateOrders_10 */
int AI_UpdateOrders_10(void * a1, void * a2);
/* 004588F0 AI_AlertAllies_10 */
int AI_AlertAllies_10(void * a1, void * a2);
/* 00458920 AI_SelectTarget_10 */
int AI_SelectTarget_10(void * a1, void * a2);
/* 00458A00 AI_UpdateSensors_10 */
int AI_UpdateSensors_10(void * a1, void * a2);
/* 00458AE0 AI_CheckSector_10 */
int AI_CheckSector_10(void * a1, void * a2);
/* 00458BC0 AI_UpdatePatrol_11 */
int AI_UpdatePatrol_11(void * a1, void * a2);
/* 00458D70 AI_CombatTarget_11 */
int AI_CombatTarget_11(void * a1, void * a2);
/* 00458DA0 AI_CheckVisibility_11 */
int AI_CheckVisibility_11(void * a1, void * a2);
/* 00458E80 AI_CheckHearing_11 */
int AI_CheckHearing_11(void * a1, void * a2);
/* 00458FB0 AI_FireWeapon_11 */
int AI_FireWeapon_11(void * a1, void * a2);
/* 00458FE0 AI_MoveToNode_11 */
int AI_MoveToNode_11(void * a1, void * a2);
/* 00459010 AI_TakeCover_11 */
int AI_TakeCover_11(void * a1, void * a2);
/* 004590F0 AI_UpdateOrders_11 */
int AI_UpdateOrders_11(void * a1, void * a2);
/* 00459120 AI_AlertAllies_11 */
int AI_AlertAllies_11(void * a1, void * a2);
/* 00459150 AI_SelectTarget_11 */
int AI_SelectTarget_11(void * a1, void * a2);
/* 00459180 AI_UpdateSensors_11 */
void * AI_UpdateSensors_11(void * a1, int a2);
/* 00459250 AI_CheckSector_11 */
int AI_CheckSector_11(void * a1, void * a2);
/* 004592A0 AI_UpdatePatrol_12 */
void * AI_UpdatePatrol_12(void * a1, void * a2);
/* 004592F0 AI_CombatTarget_12 */
int AI_CombatTarget_12(void * a1, void * a2);
/* 00459380 AI_CheckVisibility_12 */
void * AI_CheckVisibility_12(void * a1, void * a2);
/* 004593C0 AI_CheckHearing_12 */
void * AI_CheckHearing_12(void * a1, int* a2);
/* 00459520 AI_AiDeath_2 */
void * AI_AiDeath_2(void * a1, void * a2);
/* 004595D0 AI_AiDeath_3 */
void * AI_AiDeath_3(void * a1, void * a2);
/* 004596C0 AI_AnimationDNotFound_5 */
void * AI_AnimationDNotFound_5(void * a1, void * a2);
/* 00459750 AI_FireWeapon_12 */
void * AI_FireWeapon_12(void * a1, float a2);
/* 00459850 AI_MoveToNode_12 */
int AI_MoveToNode_12(void * a1, void * a2);
/* 00459880 HumanSoldierPistol_Init */
int* HumanSoldierPistol_Init(void);
/* 00459AB0 AI_TakeCover_12 */
int* AI_TakeCover_12(void * a1, int* a2);
/* 00459D50 AI_UpdateOrders_12 */
int* AI_UpdateOrders_12(void * a1);
/* 00459EC0 HumanSoldier_Setup */
int HumanSoldier_Setup(void * a1);
/* 00459F50 AI_SpeedZMS2F_3 */
int AI_SpeedZMS2F_3(float* a1);
/* 0045A230 HumanSoldierPistol_Process */
int HumanSoldierPistol_Process(float a1, int* a2);
/* 0045A3D0 HumanSoldier_OnEvent */
unsigned int HumanSoldier_OnEvent(void * a1, float a2);
/* 0045A5E0 HumanSoldier_Action */
int HumanSoldier_Action(void * a1, float* a2);
/* 0045A7C0 AI_AlertAllies_12 */
unsigned int AI_AlertAllies_12(void);
/* 0045A7E0 AI_SelectTarget_12 */
int AI_SelectTarget_12(void);
/* 0045A7F0 AI_WalkRain1D_3 */
void AI_WalkRain1D_3(void * a1);
/* 0045A930 AI_AnimationDNotFound_6 */
int AI_AnimationDNotFound_6(void * a1, void * a2);
/* 0045A9E0 AI_UpdateSensors_12 */
void * AI_UpdateSensors_12(void * a1, float a2);
/* 0045AA60 AI_CheckSector_12 */
void * AI_CheckSector_12(void * a1, float a2);
/* 0045AAD0 AI_UpdatePatrol_13 */
int AI_UpdatePatrol_13(void * a1, void * a2);
/* 0045AB00 AI_CombatTarget_13 */
int AI_CombatTarget_13(void * a1, void * a2);
/* 0045ACA0 AI_CheckVisibility_13 */
void * AI_CheckVisibility_13(void * a1, float a2);
/* 0045AF60 AI_CheckHearing_13 */
void * AI_CheckHearing_13(void * a1, float a2);
/* 0045AFD0 AI_FireWeapon_13 */
int AI_FireWeapon_13(void * a1, void * a2);
/* 0045B000 AI_MoveToNode_13 */
int AI_MoveToNode_13(void * a1, void * a2);
/* 0045B030 AI_TakeCover_13 */
int AI_TakeCover_13(void * a1, void * a2);
/* 0045B060 AI_UpdateOrders_13 */
int AI_UpdateOrders_13(void * a1, void * a2);
/* 0045B190 AI_AlertAllies_13 */
int AI_AlertAllies_13(void * a1, void * a2);
/* 0045B1C0 AI_SelectTarget_13 */
void * AI_SelectTarget_13(void * a1, int a2);
/* 0045B2C0 AI_UpdateSensors_13 */
int AI_UpdateSensors_13(void * a1, void * a2);
/* 0045B2F0 AI_CheckSector_13 */
struct status_msg* AI_CheckSector_13(void * a1, float a2);
/* 0045B500 AI_UpdatePatrol_14 */
int AI_UpdatePatrol_14(void * a1, void * a2);
/* 0045B530 AI_CombatTarget_14 */
int* AI_CombatTarget_14(void * a1, void * a2);
/* 0045B6B0 AI_CheckVisibility_14 */
int AI_CheckVisibility_14(void * a1, void * a2);
/* 0045B7C0 AI_CheckHearing_14 */
int AI_CheckHearing_14(void * a1, void * a2);
/* 0045B7F0 AI_FireWeapon_14 */
int AI_FireWeapon_14(void * a1, void * a2);
/* 0045B8D0 AI_MoveToNode_14 */
int AI_MoveToNode_14(void * a1, void * a2);
/* 0045B990 AI_TakeCover_14 */
int AI_TakeCover_14(void * a1, void * a2);
/* 0045BA50 AI_UpdateOrders_14 */
int AI_UpdateOrders_14(void * a1, void * a2);
/* 0045BB10 AI_AlertAllies_14 */
int AI_AlertAllies_14(void * a1, void * a2);
/* 0045BBD0 AI_SelectTarget_14 */
int AI_SelectTarget_14(void * a1, void * a2);
/* 0045BC00 AI_UpdateSensors_14 */
int AI_UpdateSensors_14(void * a1, void * a2);
/* 0045BC30 AI_CheckSector_14 */
int AI_CheckSector_14(void * a1, void * a2);
/* 0045BC60 AI_UpdatePatrol_15 */
int AI_UpdatePatrol_15(void * a1, void * a2);
/* 0045BC90 AI_CombatTarget_15 */
int AI_CombatTarget_15(void * a1, void * a2);
/* 0045BCC0 AI_CheckVisibility_15 */
void * AI_CheckVisibility_15(void * a1, int a2);
/* 0045BD90 AI_CheckHearing_15 */
int AI_CheckHearing_15(void * a1, void * a2);
/* 0045BEA0 AI_FireWeapon_15 */
int AI_FireWeapon_15(void * a1, void * a2);
/* 0045BF60 AI_MoveToNode_15 */
int AI_MoveToNode_15(void * a1, void * a2);
/* 0045C090 AI_TakeCover_15 */
int AI_TakeCover_15(void * a1, void * a2);
/* 0045C190 AI_UpdateOrders_15 */
int AI_UpdateOrders_15(void * a1, void * a2);
/* 0045C1C0 AI_AlertAllies_15 */
int AI_AlertAllies_15(void * a1, void * a2);
/* 0045C210 AI_SelectTarget_15 */
int AI_SelectTarget_15(void * a1, void * a2);
/* 0045C2E0 AI_UpdateSensors_15 */
void * AI_UpdateSensors_15(void * a1, void * a2);
/* 0045C330 AI_CheckSector_15 */
void * AI_CheckSector_15(void * a1, void * a2);
/* 0045C370 AI_UpdatePatrol_16 */
int AI_UpdatePatrol_16(void * a1, void * a2);
/* 0045C440 Soldier_Execute */
void * Soldier_Execute(void * a1, int* a2);
/* 0045C5A0 Soldier_DeathStateA */
void * Soldier_DeathStateA(void * a1, void * a2);
/* 0045C650 Soldier_DeathStateB */
void * Soldier_DeathStateB(void * a1, void * a2);
/* 0045C750 AI_AnimationDNotFound_7 */
void * AI_AnimationDNotFound_7(void * a1, void * a2);
/* 0045C7E0 AI_CombatTarget_16 */
int AI_CombatTarget_16(void * a1, void * a2);
/* 0045C8B0 AI_CheckVisibility_16 */
void * AI_CheckVisibility_16(void * a1, float a2);
/* 0045CA50 AI_CheckHearing_16 */
int AI_CheckHearing_16(void * a1, void * a2);
/* 0045CAB0 HumanSoldier_Init */
int* HumanSoldier_Init(void);
/* 0045CCF0 AI_FireWeapon_16 */
int* AI_FireWeapon_16(void * a1, int* a2);
/* 0045CF90 HumanSoldier_LoadParameters */
int HumanSoldier_LoadParameters(void * a1);
/* 0045D080 AI_SpeedZMS2F_4 */
int AI_SpeedZMS2F_4(float* a1);
/* 0045D360 AI_MoveToNode_16 */
int* AI_MoveToNode_16(int* a1);
/* 0045D3C0 Human_DamageHandler */
int Human_DamageHandler(void * a1, float a2);
/* 0045D580 AI_TakeCover_16 */
unsigned int AI_TakeCover_16(void);
/* 0045D5A0 AI_UpdateOrders_16 */
int AI_UpdateOrders_16(void);
/* 0045D5B0 Soldier_DeathFallSolver */
double* Soldier_DeathFallSolver(double* a1, void * a2, int* a3, int* a4);
/* 0045DAA0 AI_AlertAllies_16 */
int AI_AlertAllies_16(long double a1, void * a2, double* a3);
/* 0045DB70 HumanPlayerInput_Init */
int* HumanPlayerInput_Init(void);
/* 0045DCF0 HumanPlayerInput_LoadParameters */
int HumanPlayerInput_LoadParameters(int80_t a1, void * a2);
/* 0045DE20 HumanPlayerInput_Setup */
char * HumanPlayerInput_Setup(void * a1);
/* 0045DF50 HumanPlayerInput_Process */
int HumanPlayerInput_Process(void * a1);
/* 0045E040 AI_UpdateSensors_16 */
unsigned int AI_UpdateSensors_16(void);
/* 0045E060 AI_CheckSector_16 */
int AI_CheckSector_16(int a1);
/* 0045E3C0 AI_UpdatePatrol_17 */
void AI_UpdatePatrol_17(void);
/* 0045E3E0 Human_Action */
void Human_Action(void * a1, char * a2);
/* 0045E450 Human_Init */
int Human_Init(void);
/* 0045EAE0 Human_GetCutSceneDeltaTime */
int Human_GetCutSceneDeltaTime(int a1);
/* 0045ECD0 AI_CombatTarget_17 */
int AI_CombatTarget_17(void * a1);
/* 0045EFD0 AI_CheckVisibility_17 */
int* AI_CheckVisibility_17(void * a1);
/* 0045F050 Human_Setup */
int* Human_Setup(float a1, int a2);
/* 0045F140 AI_CheckHearing_17 */
int AI_CheckHearing_17(float a1);
/* 0045F240 AI_FireWeapon_17 */
int AI_FireWeapon_17(float a1);
/* 0045F280 Human_LoadParameters */
unsigned int Human_LoadParameters(float a1, int a2);
/* 0045F500 Human_Process */
char * Human_Process(float a1, int* a2);
/* 0045F580 AI_MoveToNode_17 */
int AI_MoveToNode_17(void * a1, double* a2, double* a3, int a4);
/* 0045F800 Human_Update */
char * Human_Update(float a1, int* a2);
/* 0045F890 Human_OnEvent */
float* Human_OnEvent(float a1);
/* 0045F930 Human_BaseDamage */
int Human_BaseDamage(void * a1, int* a2);
/* 0045F9D0 Human_Cleanup */
int Human_Cleanup(void * a1, float a2);
/* 0045FA80 Human_Cleanup_2 */
void * Human_Cleanup_2(void * a1, int* a2);
/* 0045FCD0 Human_Cleanup_3 */
int Human_Cleanup_3(void * a1, void * a2);
/* 0045FE70 Human_Cleanup_4 */
void Human_Cleanup_4(void * a1, int* a2);
/* 0045FF80 Weapon_AmmoPickup */
int Weapon_AmmoPickup(void * a1, int* a2);
/* 0045FFC0 Weapon_GunPickup */
int Weapon_GunPickup(void * a1, int* a2);
/* 00460280 Human_Cleanup_5 */
double* Human_Cleanup_5(float a1);
/* 00460400 HealthFraction */
int HealthFraction(int a1, int* a2);
/* 004606F0 Human_Cleanup_6 */
int* Human_Cleanup_6(void * a1, int* a2);
/* 00460850 Human_Cleanup_7 */
int Human_Cleanup_7(void * a1);
/* 004608D0 Human_Cleanup_8 */
int Human_Cleanup_8(void * a1);
/* 00460950 Human_Cleanup_9 */
int Human_Cleanup_9(void * a1, int a2);
/* 004609A0 Human_Cleanup_10 */
int Human_Cleanup_10(void * a1, int a2);
/* 00460AC0 Human_Cleanup_11 */
int Human_Cleanup_11(void * a1);
/* 00460B20 AI_HumanTeamGood */
int AI_HumanTeamGood(void);
/* 00460BE0 AI_UpdateOrders_17 */
int AI_UpdateOrders_17(void);
/* 00460BF0 AI_AlertAllies_17 */
int AI_AlertAllies_17(void);
/* 00460C10 AI_SelectTarget_17 */
int AI_SelectTarget_17(void);
/* 00460C30 AI_UpdateSensors_17 */
int AI_UpdateSensors_17(void);
/* 00460C40 AI_CheckSector_17 */
int AI_CheckSector_17(void);
/* 00460C50 AI_UpdatePatrol_18 */
int AI_UpdatePatrol_18(void);
/* 00460C60 AI_CombatTarget_18 */
int AI_CombatTarget_18(void);
/* 00460C70 AI_CheckVisibility_18 */
int AI_CheckVisibility_18(void * a1, int a2);
/* 00460C80 AI_CheckHearing_18 */
int AI_CheckHearing_18(int a1, char * a2);
/* 00460CE0 AI_FireWeapon_18 */
void * AI_FireWeapon_18(void * a1);
/* 00460CF0 AI_MoveToNode_18 */
float* AI_MoveToNode_18(float* a1);
/* 00460EE0 AI_TakeCover_18 */
int* AI_TakeCover_18(void * a1);
/* 004610C0 AI_UpdateOrders_18 */
int AI_UpdateOrders_18(float a1);
/* 004613D0 AI_AlertAllies_18 */
int AI_AlertAllies_18(void * a1);
/* 004614B0 Human_MovementIntegrator */
int Human_MovementIntegrator(void * a1);
/* 00461A70 Human_WallSweep */
int Human_WallSweep(void * a1, double* a2, int* a3, float* a4, int* a5);
/* 00462390 Human_GroundQuery */
int* Human_GroundQuery(void * a1, double* a2, int* a3, int* a4, float a5);
/* 00462BA0 Human_Separation */
float* Human_Separation(double* a1, double* a2, float* a3);
/* 00462CF0 Human_AttachedMovement */
int Human_AttachedMovement(void * a1);
/* 00462E50 Muzzle_Eye */
void * Muzzle_Eye(void * a1);
/* 00463080 AI_UpdateSensors_18 */
int* AI_UpdateSensors_18(void * a1);
/* 00463110 AI_CheckSector_18 */
int AI_CheckSector_18(void * a1);
/* 00463120 AI_UpdatePatrol_19 */
int AI_UpdatePatrol_19(void * a1);
/* 00463130 AI_CombatTarget_19 */
int AI_CombatTarget_19(void * a1);
/* 00463140 AI_CheckVisibility_19 */
void AI_CheckVisibility_19(void);
/* 00463150 AI_CheckHearing_19 */
int AI_CheckHearing_19(int a1);
/* 00463170 AI_FireWeapon_19 */
void * AI_FireWeapon_19(void * a1);
/* 00463180 AI_MoveToNode_19 */
void * AI_MoveToNode_19(void * a1);
/* 00463190 AI_TakeCover_19 */
void * AI_TakeCover_19(void * a1);
/* 004631A0 AI_UpdateOrders_19 */
int AI_UpdateOrders_19(void * a1, int* a2);
/* 00463220 AI_AlertAllies_19 */
int AI_AlertAllies_19(void * a1, float a2);
/* 00463260 AI_SelectTarget_19 */
int AI_SelectTarget_19(void * a1);
/* 004632D0 AI_UpdateSensors_19 */
int* AI_UpdateSensors_19(void * a1);
/* 00463310 Human_SetParent */
void * Human_SetParent(void * a1, void * a2);
/* 00463550 AI_CheckSector_19 */
void * AI_CheckSector_19(void * a1);
/* 00463570 AI_UpdatePatrol_20 */
void * AI_UpdatePatrol_20(void * a1);
/* 00463580 AI_CombatTarget_20 */
void * AI_CombatTarget_20(void * a1);
/* 00463590 AI_CheckVisibility_20 */
void * AI_CheckVisibility_20(void * a1);
/* 004635A0 AI_CheckHearing_20 */
void * AI_CheckHearing_20(void * a1);
/* 004635B0 AI_FireWeapon_20 */
int AI_FireWeapon_20(void * a1);
/* 004635E0 AI_MoveToNode_20 */
void * AI_MoveToNode_20(void * a1);
/* 004635F0 AI_TakeCover_20 */
void * AI_TakeCover_20(void * a1);
/* 00463600 AI_UpdateOrders_20 */
void * AI_UpdateOrders_20(void * a1);
/* 00463610 AI_AlertAllies_20 */
void * AI_AlertAllies_20(void * a1);
/* 00463620 AI_SelectTarget_20 */
void * AI_SelectTarget_20(void * a1);
/* 00463640 AI_UpdateSensors_20 */
int* AI_UpdateSensors_20(void * a1, int* a2);
/* 00463680 AI_CheckSector_20 */
int AI_CheckSector_20(void * a1);
/* 004636A0 AI_UpdatePatrol_21 */
int* AI_UpdatePatrol_21(void * a1, int* a2);
/* 004636E0 AI_CombatTarget_21 */
int AI_CombatTarget_21(void * a1);
/* 00463700 AI_CheckVisibility_21 */
int* AI_CheckVisibility_21(void * a1, int* a2);
/* 00463740 AI_CheckHearing_21 */
int AI_CheckHearing_21(void * a1);
/* 00463760 Human_ViewCam */
int Human_ViewCam(void * a1, int a2);
/* 00463770 AI_FireWeapon_21 */
void * AI_FireWeapon_21(void * a1);
/* 004637C0 AI_MoveToNode_21 */
unsigned int AI_MoveToNode_21(void * a1, int a2, int a3);
/* 004638A0 AI_TakeCover_21 */
struct status_msg* AI_TakeCover_21(void * a1, int a2, int a3);
/* 00463920 AI_WalkRain1D_4 */
void AI_WalkRain1D_4(void * a1);
/* 00463AD0 AI_UpdateOrders_21 */
void * AI_UpdateOrders_21(void * a1, int* a2, int a3);
/* 004640B0 AI_AlertAllies_21 */
int AI_AlertAllies_21(float a1);
/* 00464230 AI_SelectTarget_21 */
void * AI_SelectTarget_21(void * a1);
/* 00464240 AI_UpdateSensors_21 */
void * AI_UpdateSensors_21(void * a1);
/* 00464250 AI_CombatTarget_22 */
int AI_CombatTarget_22(void);
/* 00464260 HumanView_Init */
int HumanView_Init(void);
/* 00464470 HumanView_LoadParameters */
int HumanView_LoadParameters(void * a1);
/* 004644A0 HumanView_Setup */
int* HumanView_Setup(void * a1, int a2);
/* 00464580 HumanView_Process */
int HumanView_Process(void * a1, int* a2);
/* 00464600 AI_CheckVisibility_22 */
unsigned int AI_CheckVisibility_22(void);
/* 00464610 AI_CheckHearing_22 */
struct status_msg* AI_CheckHearing_22(void * a1);
/* 00464660 AI_005011 */
int AI_005011(int* a1);
/* 00464700 AI_MoveToNode_22 */
void * AI_MoveToNode_22(void * a1);
/* 00464710 AI_TakeCover_22 */
void * AI_TakeCover_22(void * a1);
/* 00464720 AI_UpdateOrders_22 */
int AI_UpdateOrders_22(int a1);
/* 00464750 AI_AlertAllies_22 */
void * AI_AlertAllies_22(void * a1);
/* 00464770 AI_SelectTarget_22 */
void * AI_SelectTarget_22(void * a1, float a2, int a3, int a4, int a5);
/* 004647A0 AI_UpdateSensors_22 */
void * AI_UpdateSensors_22(void * a1, float a2, int a3);
/* 004647D0 AI_CheckSector_22 */
int AI_CheckSector_22(void * a1);
/* 00464800 AI_UpdatePatrol_23 */
float AI_UpdatePatrol_23(float a1, float a2) __location("result");
/* 00464BD0 AI_CombatTarget_23 */
int AI_CombatTarget_23(void * a1, void * a2);
/* 00465700 AI_CheckVisibility_23 */
int AI_CheckVisibility_23(void * a1);
/* 00465730 AI_CheckHearing_23 */
int AI_CheckHearing_23(void * a1);
/* 00465800 AI_FireWeapon_23 */
int AI_FireWeapon_23(int a1, int a2);
/* 00465820 AI_MoveToNode_23 */
int AI_MoveToNode_23(int* a1, void * a2);
/* 00465880 AI_TakeCover_23 */
int AI_TakeCover_23(int a1, int a2);
/* 004658A0 AI_UpdateOrders_23 */
int AI_UpdateOrders_23(int* a1, void * a2);
/* 004658D0 AI_AlertAllies_23 */
void * AI_AlertAllies_23(void * a1, int a2, int a3);
/* 00465910 AI_SelectTarget_23 */
void * AI_SelectTarget_23(void * a1);
/* 00465920 AI_UpdateSensors_23 */
void * AI_UpdateSensors_23(void * a1, int a2, char a3);
/* 00465970 AI_CheckSector_23 */
void * AI_CheckSector_23(void * a1, int a2, int a3, int a4);
/* 004659B0 AI_UpdatePatrol_24 */
void * AI_UpdatePatrol_24(void * a1, float a2);
/* 004659D0 AI_CombatTarget_24 */
void * AI_CombatTarget_24(void * a1);
/* 004659E0 Human_TaskViewReset */
void * Human_TaskViewReset(void * a1);
/* 00465A10 HumanAttach_Init */
int HumanAttach_Init(void);
/* 00465B00 HumanAttach_LoadParameters */
int HumanAttach_LoadParameters(void * a1, int a2);
/* 00465BB0 HumanAttach_OnEvent */
unsigned int HumanAttach_OnEvent(void);
/* 00465BC0 DeathZone_Init */
int DeathZone_Init(void);
/* 00465CD0 DeathZone_LoadParameters */
int DeathZone_LoadParameters(int* a1, float a2);
/* 00465DE0 DeathZone_Setup */
int DeathZone_Setup(void * a1);
/* 00465F50 DeathZone_Process */
int DeathZone_Process(float a1, double** a2);
/* 00466210 AI_CheckVisibility_24 */
unsigned int AI_CheckVisibility_24(void);
/* 00466230 AI_CheckHearing_24 */
int AI_CheckHearing_24(void);
/* 00466240 AI_FireWeapon_24 */
struct status_msg* AI_FireWeapon_24(unsigned int a1, unsigned int a2, int a3, void ** a4, int* a5, int* a6, unsigned int a7);
/* 00466360 ComputerStartup_Process */
int ComputerStartup_Process(void * a1);
/* 00466390 AI_MoveToNode_24 */
int AI_MoveToNode_24(int a1, int a2, int a3);
/* 004663B0 AI_TakeCover_24 */
void * AI_TakeCover_24(void * a1);
/* 004663D0 ComputerStartup_Init */
int ComputerStartup_Init(void);
/* 00466480 ComputerStartup_Update */
int ComputerStartup_Update(void * a1);
/* 00466C90 ComputerStartup_Setup */
void ComputerStartup_Setup(void * a1);
/* 00466CF0 ComputerStartup_LoadParameters */
void ComputerStartup_LoadParameters(int a1);
/* 00466E10 AI_UpdateOrders_24 */
unsigned int AI_UpdateOrders_24(void);
/* 00466E40 DefineComputerLimit_Init */
int* DefineComputerLimit_Init(void);
/* 00466F40 DefineComputerLimit_Update */
int DefineComputerLimit_Update(void);
/* 00466F60 DefineComputerLimit_OnEvent */
int DefineComputerLimit_OnEvent(void);
/* 00466F70 DefineComputerObjective_Init */
int* DefineComputerObjective_Init(void);
/* 00467410 DefineComputerObjective_LoadParameters */
char DefineComputerObjective_LoadParameters(int80_t a1, void * a2);
/* 004674D0 DefineComputerObjective_Setup */
char * DefineComputerObjective_Setup(void * a1);
/* 00467530 DefineComputerObjective_Process */
int DefineComputerObjective_Process(void * a1);
/* 00467570 AI_AlertAllies_24 */
int AI_AlertAllies_24(void);
/* 00467590 AI_SelectTarget_24 */
int AI_SelectTarget_24(int a1);
/* 004675B0 AI_UpdateSensors_24 */
int AI_UpdateSensors_24(float* a1, float a2, void * a3);
/* 00467620 AI_CheckSector_24 */
float* AI_CheckSector_24(float* a1, float* a2, float a3, float a4);
/* 00467700 ComputerObject_Init */
void * ComputerObject_Init(void);
/* 00467800 ComputerObject_Setup */
int* ComputerObject_Setup(double* a1);
/* 00467900 AI_UpdatePatrol_25 */
int AI_UpdatePatrol_25(int* a1);
/* 00467970 ComputerObject_LoadParameters */
int* ComputerObject_LoadParameters(void * a1);
/* 00467D30 AI_CombatTarget_25 */
unsigned int AI_CombatTarget_25(void);
/* 00467D70 AI_CheckVisibility_25 */
struct status_msg* AI_CheckVisibility_25(void * a1);
/* 00467D90 AI_CheckHearing_25 */
int AI_CheckHearing_25(void);
/* 00467DB0 AI_FireWeapon_25 */
int AI_FireWeapon_25(void);
/* 00467DD0 AI_MoveToNode_25 */
int AI_MoveToNode_25(void);
/* 00467DF0 AI_TakeCover_25 */
void AI_TakeCover_25(int a1);
/* 00467F30 AI_UpdateOrders_25 */
void AI_UpdateOrders_25(float a1);
/* 004680B0 AI_RmS */
int AI_RmS(int* a1);
/* 004682E0 AI_AlertAllies_25 */
int AI_AlertAllies_25(void * a1, int a2);
/* 004682F0 ComputerHilight_Init */
int* ComputerHilight_Init(void);
/* 00468570 ComputerHilight_LoadParameters */
void * ComputerHilight_LoadParameters(void * a1);
/* 00468690 AI_SelectTarget_25 */
int AI_SelectTarget_25(void * a1);
/* 004687A0 ComputerHilight_Setup */
int ComputerHilight_Setup(int80_t a1, int* a2, void * a3);
/* 00468870 AI_UpdateSensors_25 */
int AI_UpdateSensors_25(void);
/* 004688A0 AI_CheckSector_25 */
int AI_CheckSector_25(void);
/* 004688B0 ComputerLog_Init */
int ComputerLog_Init(void);
/* 00468920 ComputerLog_LoadParameters */
struct status_msg* ComputerLog_LoadParameters(float a1);
/* 00468BC0 ComputerLog_Setup */
void * ComputerLog_Setup(float a1);
/* 00468DA0 AI_UpdatePatrol_26 */
unsigned int AI_UpdatePatrol_26(void);
/* 00468DB0 AI_CombatTarget_26 */
struct status_msg* AI_CombatTarget_26(void * a1);
/* 00468DD0 AI_CheckVisibility_26 */
int AI_CheckVisibility_26(void);
/* 00468DE0 AI_CheckHearing_26 */
int AI_CheckHearing_26(int a1);
/* 00468E20 ComputerObjectives_Init */
int ComputerObjectives_Init(void);
/* 00468E90 ComputerObjectives_LoadParameters */
struct status_msg* ComputerObjectives_LoadParameters(void * a1);
/* 00469110 ComputerObjectives_Process */
void * ComputerObjectives_Process(void * a1);
/* 00469420 AI_FireWeapon_26 */
unsigned int AI_FireWeapon_26(void);
/* 00469430 AI_MoveToNode_26 */
struct status_msg* AI_MoveToNode_26(void * a1);
/* 00469450 AI_TakeCover_26 */
int AI_TakeCover_26(int a1, int a2, int a3, int a4, char * a5, void * a6, int a7);
/* 004696B0 ComputerMap_Init */
void * ComputerMap_Init(void);
/* 00469740 ComputerMap_LoadParameters */
void * ComputerMap_LoadParameters(void * a1);
/* 00469CC0 AI_UpdateOrders_26 */
double* AI_UpdateOrders_26(void * a1, void * a2);
/* 00469D00 AI_AlertAllies_26 */
double* AI_AlertAllies_26(void * a1, double* a2);
/* 00469DA0 AI_SelectTarget_26 */
int AI_SelectTarget_26(void * a1, int* a2);
/* 00469FE0 mapcomp_05 */
int mapcomp_05(void * a1, float a2);
/* 0046A080 AI_UpdateSensors_26 */
void * AI_UpdateSensors_26(void * a1, int a2, int a3);
/* 0046A0A0 AI_CheckSector_26 */
int* AI_CheckSector_26(void * a1);
/* 0046A200 AI_UpdatePatrol_27 */
double* AI_UpdatePatrol_27(void);
/* 0046A2D0 AI_CombatTarget_27 */
double* AI_CombatTarget_27(void * a1);
/* 0046A330 AI_CheckVisibility_27 */
int AI_CheckVisibility_27(void * a1);
/* 0046A970 AI_CheckHearing_27 */
double* AI_CheckHearing_27(double* a1);
/* 0046A9F0 AI_FireWeapon_27 */
int* AI_FireWeapon_27(void * a1, void * a2);
/* 0046AAD0 AI_MoveToNode_27 */
unsigned int AI_MoveToNode_27(void);
/* 0046AAF0 AI_TakeCover_27 */
struct status_msg* AI_TakeCover_27(void * a1);
/* 0046AB10 AI_UpdateOrders_27 */
int AI_UpdateOrders_27(void);
/* 0046AB20 AI_AlertAllies_27 */
int AI_AlertAllies_27(void);
/* 0046AB30 AI_SelectTarget_27 */
int AI_SelectTarget_27(void);
/* 0046AB40 AI_UpdateSensors_27 */
int AI_UpdateSensors_27(void);
/* 0046AB50 AI_CheckSector_27 */
int AI_CheckSector_27(int a1);
/* 0046AB60 ComputerMenu_Init */
int ComputerMenu_Init(void);
/* 0046AC30 ComputerMenu_LoadParameters */
void * ComputerMenu_LoadParameters(float a1);
/* 0046AE30 ComputerMenu_Setup */
int ComputerMenu_Setup(int a1);
/* 0046AF90 AI_Computer */
int AI_Computer(void);
/* 0046AFB0 AI_NoNewFunctionForMenu */
int AI_NoNewFunctionForMenu(int a1);
/* 0046B030 AI_UpdatePatrol_28 */
int AI_UpdatePatrol_28(void);
/* 0046B040 AI_CombatTarget_28 */
int AI_CombatTarget_28(void);
/* 0046B050 AI_CheckVisibility_28 */
int AI_CheckVisibility_28(void);
/* 0046B060 AI_CheckHearing_28 */
void * AI_CheckHearing_28(int a1);
/* 0046B070 AI_ComputerComputerRes */
int* AI_ComputerComputerRes(void);
/* 0046B310 AI_FireWeapon_28 */
int AI_FireWeapon_28(void);
/* 0046B4D0 AI_MoveToNode_28 */
void AI_MoveToNode_28(void);
/* 0046B4E0 AI_TakeCover_28 */
void * AI_TakeCover_28(int a1);
/* 0046B4F0 AI_UpdateOrders_28 */
int AI_UpdateOrders_28(void);
/* 0046B500 AI_AlertAllies_28 */
int AI_AlertAllies_28(void);
/* 0046B510 ComputerButtonItem_Init */
int ComputerButtonItem_Init(void);
/* 0046B5C0 ComputerButtonItem_Process */
int ComputerButtonItem_Process(void * a1);
/* 0046B650 ComputerButtonItem_OnEvent */
unsigned int ComputerButtonItem_OnEvent(void);
/* 0046B660 ComputerButtonItem_Process_2 */
struct status_msg* ComputerButtonItem_Process_2(float a1, int a2, int a3, int a4, int a5, int a6, char a7, float a8, float a9, char a10, void * a11, char * a12, unsigned int a13, unsigned int a14, unsigned int a15, int a16);
/* 0046B7D0 AI_SelectTarget_28 */
void * AI_SelectTarget_28(void * a1, float a2, int a3);
/* 0046B7F0 ComputerTextItem_Init */
int ComputerTextItem_Init(void);
/* 0046B890 ComputerTextItem_Process */
int ComputerTextItem_Process(void * a1);
/* 0046B960 ComputerTextItem_OnEvent */
unsigned int ComputerTextItem_OnEvent(void);
/* 0046B970 ComputerTextItem_Process_2 */
struct status_msg* ComputerTextItem_Process_2(void * a1, int a2, int a3, int a4, int a5, int a6, char a7, unsigned int a8, unsigned int a9, void * a10, char * a11, unsigned int a12, int a13);
/* 0046BA60 Computer_Init */
int Computer_Init(void);
/* 0046BB10 Computer_LoadParameters */
int Computer_LoadParameters(void * a1);
/* 0046BD50 Computer_Setup */
int Computer_Setup(void * a1);
/* 0046BF80 Computer_Process */
int Computer_Process(void * a1);
/* 0046C010 AI_UpdateSensors_28 */
unsigned int AI_UpdateSensors_28(void);
/* 0046C020 AI_CheckSector_28 */
struct status_msg* AI_CheckSector_28(void * a1);
/* 0046C050 AI_UpdatePatrol_29 */
int AI_UpdatePatrol_29(void);
/* 0046C060 AI_CombatTarget_29 */
int AI_CombatTarget_29(void);
/* 0046C070 AI_CheckVisibility_29 */
int AI_CheckVisibility_29(void);
/* 0046C090 AI_CheckHearing_29 */
int AI_CheckHearing_29(void);
/* 0046C0A0 AI_FireWeapon_29 */
int AI_FireWeapon_29(int a1);
/* 0046C0B0 AI_MoveToNode_29 */
int AI_MoveToNode_29(void);
/* 0046C0C0 GenericPickup_Init */
int* GenericPickup_Init(void);
/* 0046C3C0 GenericPickup_LoadParameters */
int GenericPickup_LoadParameters(void * a1);
/* 0046C410 GenericPickup_Setup */
int GenericPickup_Setup(void * a1);
/* 0046C490 GenericPickup_Process */
void * GenericPickup_Process(float a1);
/* 0046C570 GenericPickup_Update */
int GenericPickup_Update(void * a1);
/* 0046C5D0 GenericPickup_OnEvent */
int GenericPickup_OnEvent(void * a1);
/* 0046C630 GenericPickup_Action */
int GenericPickup_Action(void * a1, void * a2);
/* 0046C750 GenericPickup_Cleanup */
int GenericPickup_Cleanup(float a1, int a2);
/* 0046C8A0 GenericPickup_Cleanup_2 */
void * GenericPickup_Cleanup_2(void * a1, int a2);
/* 0046C950 AI_TakeCover_29 */
unsigned int AI_TakeCover_29(void);
/* 0046C970 AI_UpdateOrders_29 */
int AI_UpdateOrders_29(void);
/* 0046C980 AI_AlertAllies_29 */
struct status_msg* AI_AlertAllies_29(void * a1, int a2, float* a3, int a4);
/* 0046CB70 GunPickup_Init */
int* GunPickup_Init(void);
/* 0046CD20 GunPickup_LoadParameters */
int GunPickup_LoadParameters(int* a1);
/* 0046CEA0 GunPickup_Setup */
int GunPickup_Setup(float a1);
/* 0046D170 GunPickup_Update */
int GunPickup_Update(void * a1);
/* 0046D1D0 GunPickup_OnEvent */
int GunPickup_OnEvent(void * a1);
/* 0046D230 GunPickup_Action */
int GunPickup_Action(void * a1, int* a2);
/* 0046D3E0 AI_SelectTarget_29 */
unsigned int AI_SelectTarget_29(void);
/* 0046D410 AI_UpdateSensors_29 */
int AI_UpdateSensors_29(void);
/* 0046D420 AmmoPickup_Init */
int* AmmoPickup_Init(void);
/* 0046D5F0 AmmoPickup_LoadParameters */
int AmmoPickup_LoadParameters(int* a1);
/* 0046D760 AmmoPickup_Setup */
int AmmoPickup_Setup(void * a1);
/* 0046D8D0 AmmoPickup_Process */
int AmmoPickup_Process(void * a1);
/* 0046D930 AmmoPickup_Update */
int AmmoPickup_Update(void * a1);
/* 0046D990 AmmoPickup_OnEvent */
int AmmoPickup_OnEvent(void * a1, int* a2);
/* 0046DB10 AI_CheckSector_29 */
unsigned int AI_CheckSector_29(void);
/* 0046DB40 AddAmmo_Init */
int* AddAmmo_Init(void);
/* 0046DC40 AddAmmo_LoadParameters */
int AddAmmo_LoadParameters(int* a1);
/* 0046DCE0 AddAmmo_OnEvent */
unsigned int AddAmmo_OnEvent(void);
/* 0046DD00 Gunx2_Init */
void * Gunx2_Init(void);
/* 0046DF00 AI_UpdatePatrol_30 */
unsigned int AI_UpdatePatrol_30(void);
/* 0046DF10 KnifeStab_Init */
void * KnifeStab_Init(void);
/* 0046DFB0 KnifeStab_Update */
int KnifeStab_Update(int* a1, float a2);
/* 0046E200 AI_CombatTarget_30 */
unsigned int AI_CombatTarget_30(void);
/* 0046E370 AIStationaryGunHolder_Init */
int* AIStationaryGunHolder_Init(void);
/* 0046E5B0 AIStationaryGunHolder_LoadParameters */
void * AIStationaryGunHolder_LoadParameters(float a1);
/* 0046E7A0 AIStationaryGunHolder_Setup */
int* AIStationaryGunHolder_Setup(void * a1);
/* 0046E7F0 AIStationaryGunHolder_Process */
char * AIStationaryGunHolder_Process(float a1);
/* 0046EAA0 AI_CheckVisibility_30 */
int AI_CheckVisibility_30(void);
/* 0046EAD0 AI_CheckHearing_30 */
int AI_CheckHearing_30(void);
/* 0046EAE0 AIStationaryGun_LoadParameters */
int* AIStationaryGun_LoadParameters(double* a1, float a2);
/* 0046EC90 AI_FireWeapon_30 */
void * AI_FireWeapon_30(double* a1, float* a2);
/* 0046F2B0 AIStationaryGun_Init */
void * AIStationaryGun_Init(void);
/* 0046F390 AIStationaryGun_Setup */
struct status_msg* AIStationaryGun_Setup(long double a1, float a2);
/* 0046F950 AI_MoveToNode_30 */
void * AI_MoveToNode_30(int a1, char a2);
/* 0046F9D0 AI_TakeCover_30 */
int AI_TakeCover_30(void * a1);
/* 0046FA50 AIStationaryGun_Process */
int AIStationaryGun_Process(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int* a8);
/* 0046FBA0 AIStationaryGun_Update */
int AIStationaryGun_Update(double* a1, int* a2);
/* 00470050 Weapon_ReloadClip */
int Weapon_ReloadClip(double* a1);
/* 004703F0 Weapon_ComputeAccuracy */
unsigned int Weapon_ComputeAccuracy(void);
/* 00470400 Weapon_EjectShell */
int Weapon_EjectShell(void);
/* 00470410 Medipack_Init */
void * Medipack_Init(void);
/* 00470570 Medipack_Update */
void * Medipack_Update(int* a1);
/* 00470600 Medipack_OnEvent */
unsigned int Medipack_OnEvent(void);
/* 00470610 Binocular_Init */
void * Binocular_Init(void);
/* 00470760 Binocular_LoadParameters */
int* Binocular_LoadParameters(void * a1, int a2);
/* 004707D0 Binocular_Setup */
int Binocular_Setup(void * a1);
/* 00470800 Binocular_Process */
int* Binocular_Process(void * a1);
/* 00470840 Binocular_Cleanup */
int Binocular_Cleanup(void * a1);
/* 00470890 Binocular_Update */
int* Binocular_Update(void * a1, int* a2);
/* 00470BC0 Binocular_Action */
int* Binocular_Action(void * a1, int a2);
/* 00470CE0 Binocular_Cleanup_2 */
int Binocular_Cleanup_2(int a1);
/* 00470D70 Binocular_Cleanup_3 */
float Binocular_Cleanup_3(int* a1) __location("result");
/* 00470EB0 Weapon_UpdateRecoil */
unsigned int Weapon_UpdateRecoil(void);
/* 00470EC0 Weapon_UpdateMuzzleFlash */
float* Weapon_UpdateMuzzleFlash(float* a1, float* a2, float* a3, double* a4);
/* 00470F70 Weapon_UpdateBarrel */
void * Weapon_UpdateBarrel(void * a1, float* a2, float* a3, float a4);
/* 00470FA0 BinocularOverlay_Init */
int* BinocularOverlay_Init(void);
/* 00471280 Weapon_EjectMagazine */
int Weapon_EjectMagazine(void * a1, int a2);
/* 004712E0 Weapon_UpdateZoom */
void * Weapon_UpdateZoom(void * a1, int a2, int a3);
/* 00471310 BinocularOverlay_OnEvent */
int* BinocularOverlay_OnEvent(void * a1);
/* 00471330 BinocularOverlay_Action */
int* BinocularOverlay_Action(int80_t a1, void * a2);
/* 004713C0 BinocularOverlay_Setup */
int BinocularOverlay_Setup(void * a1);
/* 00471400 BinocularOverlay_Cleanup */
int* BinocularOverlay_Cleanup(void * a1);
/* 00471440 BinocularOverlay_Process */
int BinocularOverlay_Process(void * a1);
/* 00471480 Weapon_WeaponsStringsBinocu */
int Weapon_WeaponsStringsBinocu(void * a1);
/* 004719D0 Weapon_CycleFireMode */
int Weapon_CycleFireMode(float* a1, int* a2);
/* 00471A90 Weapon_CheckAmmo */
int Weapon_CheckAmmo(float a1, float a2, float a3, float a4, float a5, float a6, int a7);
/* 00471B60 Weapon_FireBullet_2 */
int Weapon_FireBullet_2(void * a1);
/* 00471F60 Weapon_ReloadClip_2 */
int Weapon_ReloadClip_2(void * a1, int a2, float a3, int a4, int* a5, int a6, int a7, int a8);
/* 00472050 Weapon_ComputeAccuracy_2 */
int Weapon_ComputeAccuracy_2(void * a1);
/* 00472440 BinocularOverlay_Update */
int BinocularOverlay_Update(void * a1, void * a2);
/* 004725D0 Weapon_EjectShell_2 */
unsigned int Weapon_EjectShell_2(void);
/* 00472600 Weapon_UpdateRecoil_2 */
struct status_msg* Weapon_UpdateRecoil_2(void * a1);
/* 00472630 Weapon_UpdateMuzzleFlash_2 */
int Weapon_UpdateMuzzleFlash_2(int a1, int a2);
/* 00472650 Weapon_UpdateBarrel_2 */
int* Weapon_UpdateBarrel_2(void * a1, int* a2);
/* 00472670 GunCABarrel_Init */
void * GunCABarrel_Init(void);
/* 004727F0 GunCABarrel_LoadParameters */
int* GunCABarrel_LoadParameters(void * a1, int* a2);
/* 00472880 GunCABarrel_Update */
void * GunCABarrel_Update(void * a1);
/* 00472930 GunCABarrel_OnEvent */
void * GunCABarrel_OnEvent(double* a1, void * a2);
/* 00472A50 Weapon_EjectMagazine_2 */
unsigned int Weapon_EjectMagazine_2(void);
/* 00472A70 GunSPAS12_Init */
void * GunSPAS12_Init(void);
/* 00472CF0 Weapon_UpdateZoom_2 */
unsigned int Weapon_UpdateZoom_2(void);
/* 00472D00 GunDRAGUNOV_Init */
char * GunDRAGUNOV_Init(void);
/* 00472E50 GunDRAGUNOV_LoadParameters */
void * GunDRAGUNOV_LoadParameters(float* a1, void * a2);
/* 00473040 GunDRAGUNOV_Setup */
int GunDRAGUNOV_Setup(float a1, int a2);
/* 00473330 GunDRAGUNOV_Process */
float* GunDRAGUNOV_Process(float a1);
/* 004733E0 Weapon_CycleFireMode_2 */
unsigned int Weapon_CycleFireMode_2(void);
/* 004733F0 GunM16A2_Init */
void * GunM16A2_Init(void);
/* 00473510 GunM16A2_LoadParameters */
struct status_msg* GunM16A2_LoadParameters(void * a1, void * a2);
/* 00473620 GunM16A2_Setup */
int GunM16A2_Setup(int a1, float a2);
/* 00473790 GunM16A2_Process */
int GunM16A2_Process(long double a1, long double a2, long double a3, int* a4);
/* 004737F0 GunM16A2_Update */
void * GunM16A2_Update(int* a1);
/* 00473980 Weapon_CheckAmmo_2 */
unsigned int Weapon_CheckAmmo_2(void);
/* 00473990 GunMP5SD_Process */
int GunMP5SD_Process(void * a1);
/* 004739D0 GunMP5SD_Init */
void * GunMP5SD_Init(void);
/* 00473AF0 GunMP5SD_LoadParameters */
float GunMP5SD_LoadParameters(float* a1, float a2) __location("result");
/* 00473C80 GunMP5SD_Setup */
float* GunMP5SD_Setup(float a1);
/* 00473D20 Weapon_FireBullet_3 */
unsigned int Weapon_FireBullet_3(void);
/* 00473ED0 StationaryGun_Init */
int* StationaryGun_Init(void);
/* 00474190 StationaryGun_LoadParameters */
unsigned int StationaryGun_LoadParameters(float a1);
/* 00474360 Gun_SpawnRound */
void * Gun_SpawnRound(void * a1, char a2);
/* 00474420 Weapon_ComputeAccuracy_3 */
void * Weapon_ComputeAccuracy_3(double* a1);
/* 004748B0 Weapon_EjectShell_3 */
float Weapon_EjectShell_3(float a1) __location("result");
/* 00474960 StationaryGun_Setup */
void * StationaryGun_Setup(void * a1);
/* 00474AE0 Weapon_UpdateRecoil_3 */
float* Weapon_UpdateRecoil_3(void * a1);
/* 00474E30 StationaryGun_Process */
int StationaryGun_Process(double* a1, void * a2);
/* 00474F60 StationaryGun_Update */
void * StationaryGun_Update(double* a1, int* a2);
/* 004752E0 Weapon_CycleFireMode_3 */
unsigned int Weapon_CycleFireMode_3(void);
/* 00475300 Weapon_CheckAmmo_3 */
int Weapon_CheckAmmo_3(void);
/* 00475310 Weapon_FireBullet_4 */
int Weapon_FireBullet_4(int a1, int a2, int a3);
/* 00475340 Weapon_ReloadClip_4 */
int Weapon_ReloadClip_4(void * a1);
/* 00475370 Weapon_ComputeAccuracy_4 */
void * Weapon_ComputeAccuracy_4(void * a1);
/* 00475380 ProximityMine_Init */
void * ProximityMine_Init(void);
/* 004754C0 Binocular_Process_2 */
int Binocular_Process_2(float a1, int* a2);
/* 004755A0 ProximityMine_Setup */
void * ProximityMine_Setup(void * a1, char * a2);
/* 00475900 ProximityMine_Process */
int ProximityMine_Process(long double a1, long double a2, long double a3, long double a4, int* a5);
/* 00475960 ProximityMine_Update */
int* ProximityMine_Update(int* a1);
/* 00475AB0 Weapon_EjectShell_4 */
unsigned int Weapon_EjectShell_4(void);
/* 00475AC0 Mine_Init */
void * Mine_Init(void);
/* 00475C10 Mine_LoadParameters */
int Mine_LoadParameters(void * a1, int a2);
/* 00475D30 Mine_Setup */
int Mine_Setup(int a1);
/* 00475D90 Mine_Process */
int Mine_Process(void * a1, int a2);
/* 00475DF0 Mine_Update */
struct status_msg* Mine_Update(void * a1, void * a2);
/* 00475F30 Mine_OnEvent */
int Mine_OnEvent(float a1, int a2);
/* 00476000 Weapon_UpdateRecoil_4 */
unsigned int Weapon_UpdateRecoil_4(void);
/* 00476030 Weapon_UpdateMuzzleFlash_4 */
int Weapon_UpdateMuzzleFlash_4(void);
/* 00476040 Mine_ProximityCreate */
struct status_msg* Mine_ProximityCreate(void * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9);
/* 00476110 M203_Init */
char * M203_Init(void);
/* 004761B0 M203_LoadParameters */
struct status_msg* M203_LoadParameters(float a1);
/* 00476340 M203_Setup */
int M203_Setup(int* a1);
/* 00476600 M203_Process */
int* M203_Process(void * a1);
/* 00476660 Weapon_UpdateBarrel_4 */
unsigned int Weapon_UpdateBarrel_4(void);
/* 00476670 Weapon_EjectMagazine_4 */
struct status_msg* Weapon_EjectMagazine_4(void * a1, void * a2, void * a3, int a4, int a5, int* a6, char * a7, int a8, int a9);
/* 00476730 Grenade_Init */
void * Grenade_Init(void);
/* 004768A0 Grenade_Action */
int* Grenade_Action(int* a1);
/* 004769B0 Grenade_LoadParameters */
int* Grenade_LoadParameters(float a1);
/* 00476AC0 Grenade_Setup */
unsigned int Grenade_Setup(int* a1);
/* 00476CC0 Weapon_GrenadeBnc1 */
unsigned int Weapon_GrenadeBnc1(void * a1);
/* 00476D40 Weapon_UpdateZoom_4 */
int* Weapon_UpdateZoom_4(int a1, int a2, int a3, int a4);
/* 00476D90 Weapon_CycleFireMode_4 */
float Weapon_CycleFireMode_4(float a1) __location("result");
/* 00476E50 Grenade_Process */
int Grenade_Process(void * a1);
/* 00476EB0 Grenade_Update */
int Grenade_Update(float a1, float a2);
/* 00476FA0 Grenade_OnEvent */
struct status_msg* Grenade_OnEvent(int* a1);
/* 00477010 Weapon_CheckAmmo_4 */
unsigned int Weapon_CheckAmmo_4(void);
/* 00477030 Weapon_FireBullet_5 */
int Weapon_FireBullet_5(void);
/* 00477040 Throwable_Create */
struct status_msg* Throwable_Create(float a1, void * a2, double* a3, int a4, int* a5, void * a6, int a7);
/* 00477220 GunClip_Init */
void * GunClip_Init(void);
/* 00477600 GunClip_LoadParameters */
int GunClip_LoadParameters(void * a1, int* a2);
/* 004776C0 GunClip_Action */
void * GunClip_Action(void * a1, int* a2);
/* 004778E0 GunClip_OnEvent */
int GunClip_OnEvent(void * a1, int a2);
/* 004779E0 Weapon_FlameUpdate */
void * Weapon_FlameUpdate(void * a1, int* a2);
/* 00477A70 GunClip_Cleanup */
int* GunClip_Cleanup(void * a1, int* a2);
/* 00477B10 GunCABarrel_Cleanup */
void * GunCABarrel_Cleanup(void * a1);
/* 00477BC0 Weapon_ReloadClip_5 */
unsigned int Weapon_ReloadClip_5(void);
/* 00477BF0 Weapon_ComputeAccuracy_5 */
int Weapon_ComputeAccuracy_5(void);
/* 00477C00 Weapon_EjectShell_5 */
int Weapon_EjectShell_5(void);
/* 00477C10 Weapon_FiringStateGet */
int Weapon_FiringStateGet(void);
/* 00477C20 Weapon_UpdateRecoil_5 */
int Weapon_UpdateRecoil_5(void);
/* 00477C30 Weapon_UpdateMuzzleFlash_5 */
int Weapon_UpdateMuzzleFlash_5(void);
/* 00477C40 Weapon_UpdateBarrel_5 */
int Weapon_UpdateBarrel_5(void);
/* 00477C50 Weapon_EntityCreate */
struct status_msg* Weapon_EntityCreate(void * a1, short a2, int* a3, int a4, char a5);
/* 00477D10 Weapon_EjectMagazine_5 */
struct status_msg* Weapon_EjectMagazine_5(float a1, float a2, int* a3, int a4, char * a5);
/* 00477E30 Gun_Init */
void * Gun_Init(void);
/* 00478290 Gun_Cleanup */
void * Gun_Cleanup(void * a1);
/* 004785F0 Weapon_UpdateZoom_5 */
void * Weapon_UpdateZoom_5(void * a1);
/* 00478640 Gun_Tick */
unsigned int Gun_Tick(int* a1);
/* 00478840 Gun_Setup */
int Gun_Setup(void * a1);
/* 004788D0 Weapon_CycleFireMode_5 */
int Weapon_CycleFireMode_5(void * a1);
/* 00478900 Weapon_FireUpdate */
int Weapon_FireUpdate(int a1, int* a2);
/* 00478970 Gun_Update */
void * Gun_Update(void * a1);
/* 004789C0 Gun_OnEvent */
int* Gun_OnEvent(void * a1);
/* 00478A90 Gun_Cleanup_2 */
int Gun_Cleanup_2(float a1, double** a2);
/* 00478BA0 Gun_Fire */
struct status_msg* Gun_Fire(double* a1, char * a2);
/* 00479780 Gun_FireMessage */
int Gun_FireMessage(float a1, void * a2);
/* 004798C0 Gun_MagFill */
char * Gun_MagFill(int* a1, char * a2);
/* 00479990 Weapon_ReloadStart */
void ** Weapon_ReloadStart(void * a1, int* a2);
/* 00479B20 Gun_Cleanup_3 */
int Gun_Cleanup_3(float a1);
/* 00479CA0 Gun_Cleanup_4 */
void ** Gun_Cleanup_4(void * a1, float* a2);
/* 00479D20 Gun_Cleanup_5 */
int Gun_Cleanup_5(int* a1, int* a2);
/* 0047A260 Weapon_CheckAmmo_5 */
int Weapon_CheckAmmo_5(int* a1, int a2);
/* 0047A360 Weapon_FireBullet_6 */
int Weapon_FireBullet_6(void * a1, float a2);
/* 0047A540 Weapon_ReloadClip_6 */
int Weapon_ReloadClip_6(int* a1, float a2);
/* 0047A750 Weapon_ComputeAccuracy_6 */
int Weapon_ComputeAccuracy_6(int a1, float a2);
/* 0047A8E0 Gun_Cleanup_6 */
int Gun_Cleanup_6(void * a1, char * a2);
/* 0047A960 Gun_Cleanup_7 */
int* Gun_Cleanup_7(void * a1, int a2);
/* 0047A9E0 Gun_Cleanup_8 */
int Gun_Cleanup_8(void * a1, int a2);
/* 0047AA40 Weapon_EjectShell_6 */
unsigned int Weapon_EjectShell_6(void);
/* 0047AAB0 Weapon_UpdateRecoil_6 */
int Weapon_UpdateRecoil_6(float* a1, float* a2, int a3, int a4);
/* 0047ABD0 GunShot_Update */
void * GunShot_Update(int a1);
/* 0047B100 Weapon_UpdateBarrel_6 */
int Weapon_UpdateBarrel_6(void);
/* 0047B110 Weapon_EjectMagazine_6 */
struct status_msg* Weapon_EjectMagazine_6(void * a1, void * a2, void * a3);
/* 0047B170 Weapon_UpdateZoom_6 */
int* Weapon_UpdateZoom_6(int* a1, int a2);
/* 0047B190 GunShot_TakeSlot */
int GunShot_TakeSlot(void * a1, int a2, int* a3, void * a4, int a5, int a6);
/* 0047B270 Weapon_CycleFireMode_6 */
int Weapon_CycleFireMode_6(int a1, int a2);
/* 0047B290 Weapon_CheckAmmo_6 */
int Weapon_CheckAmmo_6(double* a1, int a2, void * a3, double* a4);
/* 0047B4B0 GunShot_Init */
void * GunShot_Init(void);
/* 0047B560 GunShot_LoadParameters */
void * GunShot_LoadParameters(void * a1);
/* 0047B690 GunShot_Setup */
int GunShot_Setup(int* a1);
/* 0047B750 Gun_CastRound */
int Gun_CastRound(void * a1);
/* 0047C330 Weapon_FireBullet_7 */
int Weapon_FireBullet_7(int a1);
/* 0047C3D0 GunShot_Process */
void * GunShot_Process(void * a1);
/* 0047C420 GunShot_Unpack */
int GunShot_Unpack(int* a1);
/* 0047C4A0 Weapon_ReloadClip_7 */
unsigned int Weapon_ReloadClip_7(void);
/* 0047C4C0 Weapon_ComputeAccuracy_7 */
void * Weapon_ComputeAccuracy_7(void * a1, int a2, int a3, int a4, int a5, int a6, int a7);
/* 0047C560 Weapon_EjectShell_7 */
int Weapon_EjectShell_7(void * a1);
/* 0047C610 Weapon_UpdateRecoil_7 */
int* Weapon_UpdateRecoil_7(float* a1, int* a2, int a3, int a4, int a5, int a6, int a7, int a8, int* a9);
/* 0047C990 Weapon_UpdateMuzzleFlash_7 */
void * Weapon_UpdateMuzzleFlash_7(void * a1, int a2);
/* 0047CA40 AmmoType_Open */
void AmmoType_Open(void);
/* 0047CAB0 Ammo_TypeOpen */
int Ammo_TypeOpen(void);
/* 0047CAD0 Define_AmmoType */
int Define_AmmoType(long double a1, int a2, float a3);
/* 0047CCE0 Weapon_UpdateBarrel_7 */
int Weapon_UpdateBarrel_7(void);
/* 0047CCF0 Weapon_LocalAmmo */
int Weapon_LocalAmmo(void);
/* 0047CD10 Weapon_EjectMagazine_7 */
void Weapon_EjectMagazine_7(void);
/* 0047CD30 Weapon_UpdateZoom_7 */
int Weapon_UpdateZoom_7(void);
/* 0047CD40 Weapon_CycleFireMode_7 */
int* Weapon_CycleFireMode_7(int a1);
/* 0047CD70 Weapon_CheckAmmo_7 */
void * Weapon_CheckAmmo_7(int a1);
/* 0047CDA0 Weapon_FireBullet_8 */
int Weapon_FireBullet_8(int a1);
/* 0047CDC0 Weapon_ReloadClip_8 */
int Weapon_ReloadClip_8(void);
/* 0047CDD0 Weapon_ComputeAccuracy_8 */
int* Weapon_ComputeAccuracy_8(int* a1);
/* 0047CE00 Weapon_EjectShell_8 */
int* Weapon_EjectShell_8(int* a1, int a2, int a3);
/* 0047CE70 Weapon_UpdateRecoil_8 */
void ** Weapon_UpdateRecoil_8(int* a1, int a2, void * a3);
/* 0047CEE0 Weapon_UpdateMuzzleFlash_8 */
int* Weapon_UpdateMuzzleFlash_8(int* a1, int a2);
/* 0047CF10 Weapon_UpdateBarrel_8 */
void Weapon_UpdateBarrel_8(void);
/* 0047CF20 Weapon_AmmoId */
int Weapon_AmmoId(void);
/* 0047CF50 Weapon_EjectMagazine_8 */
unsigned int Weapon_EjectMagazine_8(void);
/* 0047CF70 BulletHole_Init */
int BulletHole_Init(void);
/* 0047D0B0 BulletHole_Setup */
int BulletHole_Setup(void * a1, int a2);
/* 0047D920 Weapon_UpdateZoom_8 */
int Weapon_UpdateZoom_8(double* a1, float* a2, void * a3, int* a4, void * a5, int a6, int a7, float a8);
/* 0047E0C0 BulletHole_LoadParameters */
int BulletHole_LoadParameters(void * a1, int* a2);
/* 0047E6B0 Weapon_CycleFireMode_8 */
unsigned int Weapon_CycleFireMode_8(void);
/* 0047E6F0 Weapon_CheckAmmo_8 */
int Weapon_CheckAmmo_8(void);
/* 0047E700 FlashBang_Init */
char * FlashBang_Init(void);
/* 0047E790 FlashBang_LoadParameters */
struct status_msg* FlashBang_LoadParameters(void * a1);
/* 0047E820 FlashBang_Setup */
int FlashBang_Setup(int* a1);
/* 0047E970 Weapon_FireBullet_9 */
unsigned int Weapon_FireBullet_9(void);
/* 0047E990 Weapon_ReloadClip_9 */
int Weapon_ReloadClip_9(void);
/* 0047E9A0 Weapon_ComputeAccuracy_9 */
struct status_msg* Weapon_ComputeAccuracy_9(int* a1, int* a2, unsigned int a3, unsigned int a4);
/* 0047EAD0 Weapon_EjectShell_9 */
struct status_msg* Weapon_EjectShell_9(int a1, int a2, int* a3, int a4, short a5, int a6, int a7);
/* 0047EBD0 Weapon_UpdateRecoil_9 */
int Weapon_UpdateRecoil_9(void * a1, float a2);
/* 0047ED50 Weapon_UpdateMuzzleFlash_9 */
int Weapon_UpdateMuzzleFlash_9(void * a1);
/* 0047F0D0 Weapon_UpdateBarrel_9 */
struct status_msg* Weapon_UpdateBarrel_9(void * a1, int a2, int a3, int a4, float a5);
/* 0047F1B0 Weapon_EjectMagazine_9 */
struct status_msg* Weapon_EjectMagazine_9(int a1, unsigned int a2, unsigned int a3);
/* 0047F200 Weapon_1006011 */
struct status_msg* Weapon_1006011(int* a1);
/* 00480060 FX_VirmodelIsNull */
struct status_msg* FX_VirmodelIsNull(double* a1, char * a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9);
/* 004801B0 Explosion0_Init */
char * Explosion0_Init(void);
/* 00480420 Explosion0_Cleanup */
int Explosion0_Cleanup(int a1);
/* 004805B0 Explosion0_Cleanup_2 */
int Explosion0_Cleanup_2(void * a1);
/* 004805F0 Explosion0_Process */
int Explosion0_Process(float a1);
/* 004806E0 Explosion0_OnEvent */
int Explosion0_OnEvent(int a1);
/* 00480790 Explosion0_Update */
int Explosion0_Update(float a1);
/* 00480F00 Explosion0_Action */
void * Explosion0_Action(void * a1);
/* 00480F40 Explosion0_LoadParameters */
unsigned int Explosion0_LoadParameters(int* a1);
/* 00480FA0 FX_FragmentSimulate */
unsigned int FX_FragmentSimulate(void);
/* 00480FE0 FX_SmokeEmit */
struct status_msg* FX_SmokeEmit(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7, unsigned int a8, unsigned int a9, int* a10, int a11, int a12, int* a13, int a14, int a15, unsigned int a16);
/* 004810A0 FX_DebrisSpawn */
struct status_msg* FX_DebrisSpawn(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7, unsigned int a8, unsigned int a9, int* a10, int a11, int a12, int* a13, int a14, int a15, int* a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20);
/* 00481340 FX_TrailUpdate */
int FX_TrailUpdate(void);
/* 00481350 FX_ExplosionSpawn_2 */
int FX_ExplosionSpawn_2(void);
/* 00481360 FX_FireBallUpdate_2 */
int FX_FireBallUpdate_2(void * a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
/* 004813E0 ExplodeObject_Init */
int* ExplodeObject_Init(void);
/* 00481780 ExplodeObject_LoadParameters */
int* ExplodeObject_LoadParameters(float a1);
/* 00481970 ExplodeObject_Setup */
void * ExplodeObject_Setup(int80_t a1, double* a2);
/* 00481A60 FX_1009011 */
struct status_msg* FX_1009011(double* a1);
/* 00481BC0 ExplodeObject_Process */
void * ExplodeObject_Process(void * a1);
/* 00481C40 ExplodeObject_Update */
float* ExplodeObject_Update(void * a1);
/* 00481EA0 ExplodeObject_OnEvent */
int ExplodeObject_OnEvent(float a1, float a2);
/* 00481F90 ExplodeObject_Action */
int ExplodeObject_Action(void * a1);
/* 00481FF0 ExplodeObject_Cleanup */
int ExplodeObject_Cleanup(void * a1);
/* 00482050 ExplodeObject_Cleanup_2 */
int ExplodeObject_Cleanup_2(void * a1, int* a2);
/* 00482390 ExplodeObject_Cleanup_3 */
int ExplodeObject_Cleanup_3(float a1, void * a2);
/* 004824C0 ExplodeObject_Cleanup_4 */
void * ExplodeObject_Cleanup_4(void * a1, int* a2);
/* 00482560 FX_SmokeEmit_2 */
unsigned int FX_SmokeEmit_2(void);
/* 00482580 FX_DebrisSpawn_2 */
int FX_DebrisSpawn_2(void * a1);
/* 004825C0 HumanCamera_Init */
char * HumanCamera_Init(void);
/* 00482880 FX_ErrorInHumancameraHu */
int* FX_ErrorInHumancameraHu(void * a1);
/* 004828D0 Human_FindNextCamera */
void * Human_FindNextCamera(void * a1);
/* 00482930 FX_ErrorInHumancameraHu_2 */
int FX_ErrorInHumancameraHu_2(void * a1);
/* 004829A0 FX_ErrorInHumancameraHu_3 */
void * FX_ErrorInHumancameraHu_3(void * a1);
/* 00482A30 FX_TrailUpdate_2 */
void * FX_TrailUpdate_2(void * a1);
/* 00482A40 FX_ExplosionSpawn_3 */
int FX_ExplosionSpawn_3(void * a1);
/* 00482C10 FX_FireBallUpdate_3 */
void * FX_FireBallUpdate_3(void * a1);
/* 00482C30 FX_FragmentSimulate_3 */
int FX_FragmentSimulate_3(void * a1);
/* 00482D70 FX_SmokeEmit_3 */
float FX_SmokeEmit_3(void * a1) __location("result");
/* 00483100 FX_DebrisSpawn_3 */
float* FX_DebrisSpawn_3(float* a1, double* a2, double* a3);
/* 00483360 FX_TrailUpdate_3 */
void * FX_TrailUpdate_3(void * a1);
/* 00483390 FX_ExplosionSpawn_4 */
int FX_ExplosionSpawn_4(void * a1);
/* 004834D0 FX_FireBallUpdate_4 */
int FX_FireBallUpdate_4(void * a1);
/* 00483A00 FX_FragmentSimulate_4 */
int* FX_FragmentSimulate_4(void * a1, double* a2);
/* 00483D40 FX_SmokeEmit_4 */
void * FX_SmokeEmit_4(void * a1);
/* 00483D80 FX_DebrisSpawn_4 */
int* FX_DebrisSpawn_4(void * a1);
/* 00483EC0 FX_TrailUpdate_4 */
int* FX_TrailUpdate_4(void * a1, float a2, float a3);
/* 00484450 FX_ExplosionSpawn_5 */
int FX_ExplosionSpawn_5(void * a1);
/* 004849B0 FX_FireBallUpdate_5 */
int FX_FireBallUpdate_5(void * a1);
/* 00484CF0 FX_HumancameraHumanlist */
char * FX_HumancameraHumanlist(void);
/* 00484D30 FX_FragmentSimulate_5 */
int FX_FragmentSimulate_5(void);
/* 00484D40 FX_SmokeEmit_5 */
struct status_msg* FX_SmokeEmit_5(void * a1, unsigned int a2);
/* 00484D60 FX_ErrorInHumancameraHu_4 */
void * FX_ErrorInHumancameraHu_4(void * a1, int a2);
/* 00484DC0 FX_DebrisSpawn_5 */
int* FX_DebrisSpawn_5(void * a1);
/* 00484E00 FX_ErrorInHumancameraHu_5 */
int* FX_ErrorInHumancameraHu_5(int a1);
/* 00484E60 Mission_Open */
int Mission_Open(int* a1);
/* 00484F30 FX_Definemission */
int FX_Definemission(void);
/* 00484F60 Define_Mission */
int Define_Mission(int a1, float a2);
/* 00485140 FX_TrailUpdate_5 */
int FX_TrailUpdate_5(void);
/* 00485150 FX_LocalMissions */
int FX_LocalMissions(void);
/* 00485170 FX_ExplosionSpawn_6 */
void * FX_ExplosionSpawn_6(int a1);
/* 004851B0 GameScreen_Init */
int GameScreen_Init(void);
/* 004852F0 GameScreen_Update */
unsigned int GameScreen_Update(void);
/* 00485300 GameScreen_OnEvent */
struct status_msg* GameScreen_OnEvent(void * a1);
/* 00485320 GameScreen_Process */
int GameScreen_Process(void * a1);
/* 00485330 StatusMessage_Init */
int* StatusMessage_Init(void);
/* 004855F0 StatusMessage_LoadParameters */
int* StatusMessage_LoadParameters(long double a1, int* a2);
/* 004856D0 StatusMessage_Setup */
void * StatusMessage_Setup(void * a1);
/* 00485750 StatusMessage_Process */
int StatusMessage_Process(void * a1);
/* 00485770 StatusMessage_Update_2 */
int StatusMessage_Update_2(void * a1);
/* 00485870 StatusMessage_OnEvent_2 */
int StatusMessage_OnEvent_2(void * a1);
/* 00485950 FX_FireBallUpdate_6 */
unsigned int FX_FireBallUpdate_6(void);
/* 00485970 StatusMessage_ShowFull */
struct status_msg* StatusMessage_ShowFull(void * ctx, char * message, char * sprite, char * style);
/* 00485A40 StatusMessageScreen_Init */
void * StatusMessageScreen_Init(void);
/* 00485AD0 StatusMessageScreen_ClearMessages */
void StatusMessageScreen_ClearMessages(void);
/* 00485B80 StatusMessageScreen_OnEvent */
int StatusMessageScreen_OnEvent(int a1, int a2);
/* 00485D00 FX_FragmentSimulate_6 */
int FX_FragmentSimulate_6(int a1, int a2);
/* 00485D20 FX_SmokeEmit_6 */
int FX_SmokeEmit_6(int a1, int a2);
/* 00485DB0 FX_DebrisSpawn_6 */
char * __stdcall FX_DebrisSpawn_6(int a1, int a2, float a3);
/* 00485FB0 FX_Font4Fnt */
void * FX_Font4Fnt(int a1, int a2);
/* 00486020 StatusMessageScreen_LoadParameters */
int StatusMessageScreen_LoadParameters(void * a1);
/* 004860F0 FX_TrailUpdate_6 */
int FX_TrailUpdate_6(int a1, int a2, float a3, float a4);
/* 00486210 FX_ExplosionSpawn_7 */
int FX_ExplosionSpawn_7(int a1, int a2, float a3, float a4, int a5);
/* 004865B0 FX_FireBallUpdate_7 */
int FX_FireBallUpdate_7(int a1, int a2, int a3, float a4);
/* 00486610 FX_FragmentSimulate_7 */
unsigned int FX_FragmentSimulate_7(void);
/* 00486620 FX_SmokeEmit_7 */
struct status_msg* FX_SmokeEmit_7(void * a1);
/* 00486650 FX_RmS */
char * FX_RmS(char (** a1)[0x16], void * a2);
/* 004868A0 FX_LanguageMessagesRes */
int* FX_LanguageMessagesRes(void);
/* 004868C0 FX_DebrisSpawn_7 */
int FX_DebrisSpawn_7(void);
/* 004868D0 FX_TrailUpdate_7 */
void FX_TrailUpdate_7(void * a1);
/* 00486900 StatusScreen_Init */
int StatusScreen_Init(void);
/* 004869B0 StatusScreen_LoadParameters */
struct status_msg* StatusScreen_LoadParameters(void * a1);
/* 00486F30 StatusScreen_Setup */
int* StatusScreen_Setup(void);
/* 00487130 FX_Statusscreen */
int FX_Statusscreen(void);
/* 00487160 FX_FragmentSimulate_8 */
struct status_msg* FX_FragmentSimulate_8(void * a1);
/* 00487180 FX_SmokeEmit_8 */
int FX_SmokeEmit_8(void);
/* 00487190 FX_DebrisSpawn_8 */
int FX_DebrisSpawn_8(void);
/* 004871A0 FX_TrailUpdate_8 */
void FX_TrailUpdate_8(void);
/* 004871B0 FX_ExplosionSpawn_9 */
void FX_ExplosionSpawn_9(void);
/* 004871C0 FX_FireBallUpdate_9 */
int FX_FireBallUpdate_9(void * a1, int a2);
/* 004872B0 FX_FragmentSimulate_9 */
void * FX_FragmentSimulate_9(void * a1);
/* 004872C0 ConditionalContainer_Init */
int* ConditionalContainer_Init(void);
/* 004874A0 ConditionalContainer_LoadParameters */
int* ConditionalContainer_LoadParameters(void * a1);
/* 004874E0 ConditionalContainer_Tick */
int* ConditionalContainer_Tick(int* a1);
/* 00487730 ConditionalContainer_Process */
char * ConditionalContainer_Process(void * a1);
/* 004877A0 ConditionalContainer_Update */
int ConditionalContainer_Update(void * a1);
/* 00487860 ConditionalContainer_OnEvent */
int ConditionalContainer_OnEvent(void * a1);
/* 00487920 ConditionalContainer_Action */
int ConditionalContainer_Action(void * a1);
/* 00487980 ConditionalContainer_Cleanup */
int ConditionalContainer_Cleanup(void * a1);
/* 00487A70 ConditionalContainer_Cleanup_2 */
int ConditionalContainer_Cleanup_2(void * a1, int a2);
/* 00487B20 ConditionalContainer_Cleanup_3 */
int ConditionalContainer_Cleanup_3(void * a1, int a2);
/* 00487BC0 FX_DebrisSpawn_9 */
int FX_DebrisSpawn_9(void);
/* 00487BE0 GuardGenerator_Init */
int* GuardGenerator_Init(void);
/* 00487EB0 GuardGenerator_LoadParameters */
int GuardGenerator_LoadParameters(void * a1);
/* 00487EE0 GuardGenerator_Setup */
int* GuardGenerator_Setup(int80_t a1, void * a2);
/* 00488000 FX_TrailUpdate_9 */
void * FX_TrailUpdate_9(void * a1);
/* 00488040 FX_ExplosionSpawn_10 */
unsigned int FX_ExplosionSpawn_10(struct status_msg* a1, void * a2);
/* 004880F0 GuardGenerator_Process */
char * GuardGenerator_Process(void * a1);
/* 00488140 FX_FireBallUpdate_10 */
void * FX_FireBallUpdate_10(void * a1);
/* 00488160 FX_FragmentSimulate_10 */
int FX_FragmentSimulate_10(void * a1);
/* 00488200 GuardGenerator_Update */
int GuardGenerator_Update(void * a1);
/* 00488220 FX_SmokeEmit_10 */
int FX_SmokeEmit_10(void * a1);
/* 004883C0 FX_DebrisSpawn_10 */
void ** FX_DebrisSpawn_10(void * a1, void * a2);
/* 00488430 GuardGenerator_OnEvent */
int GuardGenerator_OnEvent(void * a1);
/* 004884D0 GuardGenerator_Action */
int GuardGenerator_Action(void * a1);
/* 004885F0 FX_TrailUpdate_10 */
int FX_TrailUpdate_10(void);
/* 00488610 FX_ExplosionSpawn_11 */
int FX_ExplosionSpawn_11(void);
/* 00488620 SubLevel_Init */
int* SubLevel_Init(void);
/* 00488780 SubLevel_LoadParameters */
int* SubLevel_LoadParameters(void * a1);
/* 004887E0 SubLevel_OnEvent */
int SubLevel_OnEvent(void);
/* 00488800 EditVariable_Init */
int* EditVariable_Init(void);
/* 00488980 EditVariable_LoadParameters */
int EditVariable_LoadParameters(void * a1);
/* 004889B0 EditVariable_Setup */
int* EditVariable_Setup(int80_t a1, void * a2);
/* 00488A30 EditVariable_Process */
char * EditVariable_Process(void * a1);
/* 00488AA0 EditVariable_OnEvent */
int EditVariable_OnEvent(void * a1);
/* 00488AD0 EditVariable_Action */
int EditVariable_Action(void * a1);
/* 00488B30 EditVariable_Cleanup */
int EditVariable_Cleanup(void * a1);
/* 00488B90 FX_FireBallUpdate_11 */
unsigned int FX_FireBallUpdate_11(void);
/* 00488BB0 LevelFlow_Init */
void * LevelFlow_Init(void);
/* 00488E00 LevelFlow_GetBreakCutSceneKey */
int LevelFlow_GetBreakCutSceneKey(int a1);
/* 00488E50 LevelFlow_LevelFailed */
int LevelFlow_LevelFailed(int a1);
/* 00488E90 LevelFlow_IsCountryUSA */
int LevelFlow_IsCountryUSA(int a1);
/* 00488F90 LevelFlow_Process */
int LevelFlow_Process(void * a1);
/* 004890F0 LevelFlow_Update */
int LevelFlow_Update(void * a1);
/* 00489290 LevelFlow_LoadParameters */
int LevelFlow_LoadParameters(int80_t a1, void * a2);
/* 00489400 LevelFlow_Setup */
int LevelFlow_Setup(void * a1);
/* 00489430 FX_FragmentSimulate_11 */
unsigned int FX_FragmentSimulate_11(void);
/* 00489450 FX_SmokeEmit_11 */
void * FX_SmokeEmit_11(void);
/* 00489460 FX_DebrisSpawn_11 */
void * FX_DebrisSpawn_11(void);
/* 00489470 FX_TrailUpdate_11 */
long double FX_TrailUpdate_11(void);
/* 004894B0 FX_ExplosionSpawn_12 */
int FX_ExplosionSpawn_12(void);
/* 004894E0 FX_FireBallUpdate_12 */
int* FX_FireBallUpdate_12(int* a1);
/* 00489500 FX_FragmentSimulate_12 */
int* FX_FragmentSimulate_12(int a1, void * a2, void * a3, int a4);
/* 00489560 FX_SmokeEmit_12 */
int FX_SmokeEmit_12(void);
/* 004895D0 FX_DebrisSpawn_12 */
int FX_DebrisSpawn_12(void);
/* 00489610 FX_TrailUpdate_12 */
int FX_TrailUpdate_12(void);
/* 00489620 FX_ExplosionSpawn_13 */
int FX_ExplosionSpawn_13(void);
/* 00489630 FX_FireBallUpdate_13 */
int FX_FireBallUpdate_13(void);
/* 00489640 FX_AidetectionQtaskMask */
int FX_AidetectionQtaskMask(short a1);
/* 00489680 FX_FragmentSimulate_13 */
int* FX_FragmentSimulate_13(int a1);
/* 004896A0 FX_SmokeEmit_13 */
int FX_SmokeEmit_13(int a1);
/* 004896C0 FX_DebrisSpawn_13 */
char * FX_DebrisSpawn_13(int* a1, int a2, int a3, int a4, int a5, int a6);
/* 00489750 Car_DetectionSweep */
void * Car_DetectionSweep(void * a1, double* a2, float a3, int a4);
/* 004898D0 AI_TestCandidate */
int AI_TestCandidate(void * a1, void * a2, double* a3, double* a4, float a5);
/* 00489960 AI_BuildEyeSnapshot */
int AI_BuildEyeSnapshot(long double a1, long double a2, long double a3, double* a4, double* a5);
/* 00489B20 AI_LineOfSight */
int AI_LineOfSight(float a1, double* a2, int a3, double* a4);
/* 00489B90 FX_TrailUpdate_13 */
int* FX_TrailUpdate_13(void * a1);
/* 00489BE0 FX_ExplosionSpawn_14 */
int* FX_ExplosionSpawn_14(void * a1, int a2);
/* 00489C30 FX_FireBallUpdate_14 */
int* FX_FireBallUpdate_14(void * a1, int a2);
/* 00489C60 FX_000011 */
int FX_000011(void * a1, int* a2);
/* 00489E10 FX_FragmentSimulate_14 */
int FX_FragmentSimulate_14(void * a1, int a2);
/* 00489E30 FX_SmokeEmit_14 */
int* FX_SmokeEmit_14(void * a1);
/* 00489E70 Human_StateAnimation */
int Human_StateAnimation(void * a1, int a2, float a3);
/* 00489EA0 FX_DebrisSpawn_14 */
int FX_DebrisSpawn_14(int a1, int a2, int a3, float a4);
/* 00489ED0 FX_TrailUpdate_14 */
int FX_TrailUpdate_14(int a1, int a2, int a3, float a4);
/* 00489F00 FX_ExplosionSpawn_15 */
void ** FX_ExplosionSpawn_15(void * a1, float a2);
/* 00489F20 FX_FireBallUpdate_15 */
int FX_FireBallUpdate_15(void * a1, int a2, int a3, float a4);
/* 00489F50 FX_FragmentSimulate_15 */
int FX_FragmentSimulate_15(void * a1);
/* 00489F70 FX_SmokeEmit_15 */
float FX_SmokeEmit_15(float a1) __location("result");
/* 0048A320 FX_DebrisSpawn_15 */
void * FX_DebrisSpawn_15(void * a1);
/* 0048A330 FX_TrailUpdate_15 */
void * FX_TrailUpdate_15(void * a1);
/* 0048A340 FX_ExplosionSpawn_16 */
float* FX_ExplosionSpawn_16(float* a1, void * a2, int a3);
/* 0048A440 LoadingScreen_Show */
int* LoadingScreen_Show(int a1);
/* 0048A5D0 FX_FireBallUpdate_16 */
int FX_FireBallUpdate_16(void * a1);
/* 0048A620 FX_FragmentSimulate_16 */
int FX_FragmentSimulate_16(int* a1, int a2);
/* 0048A6D0 FX_SmokeEmit_16 */
int FX_SmokeEmit_16(int a1);
/* 0048A710 FX_DebrisSpawn_16 */
void * FX_DebrisSpawn_16(void);
/* 0048A8A0 FX_TrailUpdate_16 */
int* FX_TrailUpdate_16(void);
/* 0048A8C0 FX_ExplosionSpawn_17 */
int FX_ExplosionSpawn_17(void);
/* 0048A8D0 FX_FireBallUpdate_17 */
int FX_FireBallUpdate_17(void);
/* 0048A910 FX_FragmentSimulate_17 */
int FX_FragmentSimulate_17(void);
/* 0048A920 FX_SmokeEmit_17 */
int* FX_SmokeEmit_17(void * a1, void * a2);
/* 0048AB10 FX_DebrisSpawn_17 */
int* FX_DebrisSpawn_17(void * a1);
/* 0048AB80 FX_TrailUpdate_17 */
int FX_TrailUpdate_17(float a1);
/* 0048ABA0 Patrol_CombatStart */
int* Patrol_CombatStart(void * a1, void * a2);
/* 0048AC60 FX_ExplosionSpawn_18 */
int FX_ExplosionSpawn_18(void * a1, void * a2);
/* 0048ACC0 Named_Combat */
int* Named_Combat(int* a1, int* a2);
/* 0048AE70 FX_FireBallUpdate_18 */
void * FX_FireBallUpdate_18(int a1, void * a2, int a3, int a4);
/* 0048AE90 FX_FragmentSimulate_18 */
int FX_FragmentSimulate_18(int* a1, void * a2);
/* 0048B050 FX_FindfreepositionStac */
void * __stdcall FX_FindfreepositionStac(void ** a1, int* a2, char a3, void * a4);
/* 0048B260 FX_SmokeEmit_18 */
void * FX_SmokeEmit_18(void * a1, int* a2, char a3, char a4);
/* 0048B6E0 FX_DebrisSpawn_18 */
int FX_DebrisSpawn_18(float a1, void * a2);
/* 0048B780 FX_TrailUpdate_18 */
int* FX_TrailUpdate_18(void * a1, void * a2, int* a3, int a4, int a5);
/* 0048B980 FX_ExplosionSpawn_19 */
int FX_ExplosionSpawn_19(void * a1);
/* 0048B9C0 Combat_BeginBurst */
unsigned int Combat_BeginBurst(int a1, char a2);
/* 0048BBD0 Combat_MobileC */
void * Combat_MobileC(void * a1, void * a2);
/* 0048BC00 CombatStand */
int* CombatStand(int* a1, int* a2);
/* 0048BE30 FX_FireBallUpdate_19 */
int FX_FireBallUpdate_19(void * a1, void * a2);
/* 0048BFD0 FX_FragmentSimulate_19 */
int FX_FragmentSimulate_19(int* a1, void * a2);
/* 0048C250 Combat_MobileA */
void * Combat_MobileA(void * a1, void * a2);
/* 0048C280 CombatKneel */
int* CombatKneel(int* a1, int* a2);
/* 0048C540 CombatLieDown_Dispatch */
int* CombatLieDown_Dispatch(int* a1, int* a2);
/* 0048C760 RePosition */
int* RePosition(void * a1, int* a2);
/* 0048C850 CombatFollow_Install */
void * CombatFollow_Install(void * a1);
/* 0048C860 Combat_Follow */
int* Combat_Follow(int* a1, int* a2);
/* 0048CAB0 LookForTarget */
int* LookForTarget(void * a1, int* a2);
/* 0048CBD0 RPG_CombatStand */
int* RPG_CombatStand(void * a1, int* a2);
/* 0048CDF0 RPG_CombatKneel */
int* RPG_CombatKneel(int a1, int* a2);
/* 0048D000 Guard_CombatStart */
int* Guard_CombatStart(void * a1, void * a2);
/* 0048D080 Guard_CombatStand */
int* Guard_CombatStand(int a1, int* a2);
/* 0048D340 Gunner_Combat */
int* Gunner_Combat(long double a1, int a2, int* a3);
/* 0048D7D0 FX_SmokeEmit_19 */
int FX_SmokeEmit_19(void * a1);
/* 0048D830 FX_StandRollLeft */
bool FX_StandRollLeft(void * a1);
/* 0048D870 FX_StandRollRight */
bool FX_StandRollRight(void * a1);
/* 0048D8B0 StandFire */
bool StandFire(void * a1);
/* 0048D8E0 Combat_RunFire */
int Combat_RunFire(void * a1);
/* 0048DB10 Combat_Reload */
int Combat_Reload(void * a1);
/* 0048DBB0 CloseCombat */
bool CloseCombat(void * a1);
/* 0048DBF0 FX_StandThrowingGrenade */
int FX_StandThrowingGrenade(void * a1);
/* 0048DC30 FX_KneelRollLeft */
bool FX_KneelRollLeft(void * a1);
/* 0048DC80 FX_KneelRollRight */
bool FX_KneelRollRight(void * a1);
/* 0048DCD0 FX_KneelFire */
bool FX_KneelFire(void * a1);
/* 0048DD10 FX_DebrisSpawn_19 */
int FX_DebrisSpawn_19(void * a1);
/* 0048DDC0 FX_LiedownFire */
bool FX_LiedownFire(void * a1);
/* 0048DE00 FX_TrailUpdate_19 */
int FX_TrailUpdate_19(void * a1);
/* 0048DEC0 CombatPlayAnimation */
int CombatPlayAnimation(void * a1, int* a2);
/* 0048DF80 AIAction_PlaySound_Run */
int* AIAction_PlaySound_Run(void * a1, int* a2);
/* 0048E020 FX_MoveToEventD */
int FX_MoveToEventD(int a1, int* a2);
/* 0048E0A0 FX_ExplosionSpawn_20 */
int* FX_ExplosionSpawn_20(void * a1, int* a2);
/* 0048E150 AIAction_Stunned_Run */
int* AIAction_Stunned_Run(void * a1, int* a2);
/* 0048E250 AIAction_KickGrenade_Run */
int AIAction_KickGrenade_Run(int a1);
/* 0048E300 FX_FireBallUpdate_20 */
int* __stdcall FX_FireBallUpdate_20(void * a1, int* a2, int a3, int a4, int a5);
/* 0048E430 FX_FragmentSimulate_20 */
int FX_FragmentSimulate_20(void * a1, int* a2, double* a3);
/* 0048E4A0 FX_RunPanicking */
int FX_RunPanicking(void * a1, int* a2);
/* 0048E520 FX_SmokeEmit_20 */
int FX_SmokeEmit_20(float a1);
/* 0048E560 SetCombat_Run */
int* SetCombat_Run(void * a1, int* a2);
/* 0048E620 FX_LevelQtaskIdDNotDefi */
int* FX_LevelQtaskIdDNotDefi(int* a1, void * const a2);
/* 0048E7D0 FX_DebrisSpawn_20 */
int* FX_DebrisSpawn_20(int a1, int* a2);
/* 0048E870 FX_TrailUpdate_20 */
int* FX_TrailUpdate_20(void * a1);
/* 0048E920 Patrol_Tick */
int* Patrol_Tick(int* a1, int* a2);
/* 0048EB60 FX_ExplosionSpawn_21 */
int* FX_ExplosionSpawn_21(void * a1, int* a2);
/* 0048EBF0 FX_WalkToNodeD */
int FX_WalkToNodeD(int a1, int* a2);
/* 0048EC50 FX_RunToNodeD */
int FX_RunToNodeD(int a1, int* a2);
/* 0048ECC0 FX_FireBallUpdate_21 */
int FX_FireBallUpdate_21(int a1, int* a2);
/* 0048EE00 FX_FragmentSimulate_21 */
int FX_FragmentSimulate_21(int a1, int* a2);
/* 0048EF70 AI_WriteChannel */
void * AI_WriteChannel(void * a1, int a2, float a3);
/* 0048EFE0 Locomotion_GetState */
int Locomotion_GetState(void * a1, int a2);
/* 0048F020 FX_Germany */
int FX_Germany(void);
/* 0048F070 FX_SmokeEmit_21 */
int FX_SmokeEmit_21(void);
/* 0048F080 FX_DebrisSpawn_21 */
int FX_DebrisSpawn_21(void);
/* 0048F090 FX_TrailUpdate_21 */
int FX_TrailUpdate_21(void);
/* 0048F0A0 FX_ExplosionSpawn_22 */
int FX_ExplosionSpawn_22(void);
/* 0048F0B0 FX_FireBallUpdate_22 */
int FX_FireBallUpdate_22(void);
/* 0048F0C0 FX_FragmentSimulate_22 */
int FX_FragmentSimulate_22(int a1);
/* 0048F0D0 FX_SmokeEmit_22 */
int FX_SmokeEmit_22(int a1);
/* 0048F0E0 FX_DebrisSpawn_22 */
int FX_DebrisSpawn_22(int a1);
/* 0048F0F0 FX_TrailUpdate_22 */
int FX_TrailUpdate_22(int a1);
/* 0048F100 FX_ExplosionSpawn_23 */
BOOL FX_ExplosionSpawn_23(BOOL a1);
/* 0048F120 FX_FireBallUpdate_23 */
int FX_FireBallUpdate_23(char a1);
/* 0048F130 FX_FragmentSimulate_23 */
int FX_FragmentSimulate_23(void);
/* 0048F140 FX_SmokeEmit_23 */
int FX_SmokeEmit_23(int a1);
/* 0048F170 FX_DebrisSpawn_23 */
int FX_DebrisSpawn_23(void);
/* 0048F180 FX_TrailUpdate_23 */
int FX_TrailUpdate_23(int a1, int a2);
/* 0048F1A0 App_ContextSetDebugged */
int App_ContextSetDebugged(char a1);
/* 0048F1B0 FX_ExplosionSpawn_24 */
int FX_ExplosionSpawn_24(void);
/* 0048F1C0 FX_FireBallUpdate_24 */
int FX_FireBallUpdate_24(char a1);
/* 0048F1D0 FX_FragmentSimulate_24 */
int FX_FragmentSimulate_24(void);
/* 0048F1E0 App_ContextSetDebugtextState */
int App_ContextSetDebugtextState(char a1);
/* 0048F1F0 FX_SmokeEmit_24 */
int FX_SmokeEmit_24(void);
/* 0048F200 FX_DebrisSpawn_24 */
int FX_DebrisSpawn_24(int a1);
/* 0048F210 FX_TrailUpdate_24 */
int FX_TrailUpdate_24(int a1);
/* 0048F220 FX_ExplosionSpawn_25 */
int FX_ExplosionSpawn_25(void);
/* 0048F230 FX_FireBallUpdate_25 */
int FX_FireBallUpdate_25(void);
/* 0048F240 App_ContextSetLightmapsUsed */
int App_ContextSetLightmapsUsed(char a1);
/* 0048F250 FX_FragmentSimulate_25 */
int FX_FragmentSimulate_25(void);
/* 0048F260 App_ContextSetTerrainLightmapsUsed */
int App_ContextSetTerrainLightmapsUsed(char a1);
/* 0048F270 FX_SmokeEmit_25 */
int FX_SmokeEmit_25(void);
/* 0048F280 FX_DebrisSpawn_25 */
int FX_DebrisSpawn_25(int a1);
/* 0048F290 FX_TrailUpdate_25 */
int FX_TrailUpdate_25(int a1);
/* 0048F2A0 FX_ExplosionSpawn_26 */
int FX_ExplosionSpawn_26(int a1);
/* 0048F2B0 FX_FireBallUpdate_26 */
int FX_FireBallUpdate_26(int a1);
/* 0048F2C0 FX_FragmentSimulate_26 */
int FX_FragmentSimulate_26(void);
/* 0048F2D0 FX_SmokeEmit_26 */
int FX_SmokeEmit_26(void);
/* 0048F2F0 FX_DebrisSpawn_26 */
void FX_DebrisSpawn_26(void);
/* 0048F300 FX_TrailUpdate_26 */
int FX_TrailUpdate_26(int a1);
/* 0048F330 FX_ExplosionSpawn_27 */
int FX_ExplosionSpawn_27(int a1);
/* 0048F340 FX_FireBallUpdate_27 */
int FX_FireBallUpdate_27(void);
/* 0048F360 FX_FragmentSimulate_27 */
void * FX_FragmentSimulate_27(char * a1, int a2);
/* 0048F480 FX_SmokeEmit_27 */
int FX_SmokeEmit_27(char a1);
/* 0048F490 FX_FailedToRegisterWinp */
void * FX_FailedToRegisterWinp(int a1);
/* 0048F4F0 FX_UnableToRemoveWinpro */
int* FX_UnableToRemoveWinpro(int a1);
/* 0048F530 FX_Igimutex */
WPARAM __stdcall FX_Igimutex(HINSTANCE a1, int a2);
/* 0048FA80 DIERR_GENERIC */
int DIERR_GENERIC(int a1);
/* 0048FC20 FX_FailedGetMouseStateS */
int FX_FailedGetMouseStateS(void);
/* 0048FD90 FX_CouldNotGetMouseCaps */
int FX_CouldNotGetMouseCaps(void);
/* 0048FDE0 FX_CouldNotCreateDirect */
void * FX_CouldNotCreateDirect(void);
/* 0048FFA0 FX_DebrisSpawn_27 */
int* FX_DebrisSpawn_27(void);
/* 0048FFF0 FX_CouldNotCreateDirect_2 */
void * FX_CouldNotCreateDirect_2(void);
/* 00490190 Display_OpenDevice */
int Display_OpenDevice(int a1, int a2);
/* 00490230 Display_CloseDevice */
int Display_CloseDevice(void);
/* 004902F0 Display_SetDisplayMode */
int* Display_SetDisplayMode(void);
/* 00490340 Display_SyncVSync */
int Display_SyncVSync(void);
/* 00490350 Display_SwapBuffers */
int Display_SwapBuffers(char a1);
/* 00490360 Display_ClearSurfaces */
unsigned int Display_ClearSurfaces(void);
/* 00490370 Display_RestoreDevice */
int Display_RestoreDevice(void);
/* 00490380 Display_CheckCapabilities */
int Display_CheckCapabilities(void);
/* 004903A0 Display_SetGammaRamp */
void __stdcall Display_SetGammaRamp(void);
/* 004903B0 Display_CreateSurface */
int Display_CreateSurface(void * a1);
/* 004905A0 Display_OpenDevice_2 */
int Display_OpenDevice_2(void * a1, int a2, int a3);
/* 00490680 Display_CloseDevice_2 */
HRESULT Display_CloseDevice_2(void * a1, void * a2);
/* 00490860 Display_CouldnTReadPixelForm */
void * Display_CouldnTReadPixelForm(void * a1);
/* 00490B80 Display_SetDisplayMode_2 */
int Display_SetDisplayMode_2(void * a1, int a2);
/* 00490C40 Display_SyncVSync_2 */
bool Display_SyncVSync_2(void * a1, int a2, int a3);
/* 00490D10 Display_SwapBuffers_2 */
HRESULT Display_SwapBuffers_2(int a1, int a2, float a3);
/* 00490E90 Display_ClearSurfaces_2 */
HRESULT Display_ClearSurfaces_2(void * a1, int a2, unsigned int a3, int a4, int a5);
/* 00490F10 Display_RestoreDevice_2 */
int Display_RestoreDevice_2(float a1);
/* 004910C0 Display_CouldnTReadPixelForm_2 */
int Display_CouldnTReadPixelForm_2(void * a1);
/* 00491220 Display_CheckCapabilities_2 */
int Display_CheckCapabilities_2(void);
/* 00491240 Display_SetGammaRamp_2 */
void Display_SetGammaRamp_2(int a1, int a2, int* a3);
/* 00491280 Display_CreateSurface_2 */
char * Display_CreateSurface_2(char * a1, int* a2);
/* 00491420 Display_OpenDevice_3 */
char * Display_OpenDevice_3(char * a1, int* a2);
/* 00491610 Display_CloseDevice_3 */
int Display_CloseDevice_3(int a1, int a2);
/* 00491630 Display_SetDisplayMode_3 */
int* Display_SetDisplayMode_3(int a1);
/* 00491650 Display_NoMoreDisplayCallbac */
int* Display_NoMoreDisplayCallbac(int a1, int* a2);
/* 004916A0 Display_SyncVSync_3 */
int* Display_SyncVSync_3(int a1);
/* 004916C0 Display_SwapBuffers_3 */
int* Display_SwapBuffers_3(int a1);
/* 004916E0 Display_ClearSurfaces_3 */
int* Display_ClearSurfaces_3(int a1);
/* 00491700 Display_DisplayCanOnlyBeOpen */
int Display_DisplayCanOnlyBeOpen(void);
/* 00491860 Display_RestoreDevice_3 */
int* Display_RestoreDevice_3(void);
/* 00491930 Display_CheckCapabilities_3 */
int Display_CheckCapabilities_3(void);
/* 00491980 Display_SetGammaRamp_3 */
int Display_SetGammaRamp_3(void * a1, char a2, int a3);
/* 00491A30 Display_CreateSurface_3 */
int Display_CreateSurface_3(void);
/* 00491A50 Display_OpenDevice_4 */
int Display_OpenDevice_4(int a1);
/* 00491A90 Display_SetMode */
int Display_SetMode(void * a1);
/* 00491CA0 Display_CloseDevice_4 */
void Display_CloseDevice_4(int* a1);
/* 00491CC0 Display_SetDisplayMode_4 */
int Display_SetDisplayMode_4(void);
/* 00491CF0 Display_GetActiveMode */
void Display_GetActiveMode(void);
/* 00491D00 Display_SyncVSync_4 */
int Display_SyncVSync_4(void);
/* 00491D20 Display_SwapBuffers_4 */
int Display_SwapBuffers_4(void);
/* 00491D40 Display_ClearSurfaces_4 */
long double Display_ClearSurfaces_4(void);
/* 00491D70 Display_RestoreDevice_4 */
int Display_RestoreDevice_4(void * a1);
/* 00491D80 Display_CheckCapabilities_4 */
int Display_CheckCapabilities_4(int a1);
/* 00491DB0 Display_SetGammaRamp_4 */
int Display_SetGammaRamp_4(void);
/* 00491DC0 Display_CreateSurface_4 */
int Display_CreateSurface_4(void);
/* 00491DD0 Display_OpenDevice_5 */
int Display_OpenDevice_5(void);
/* 00491DE0 Display_CloseDevice_5 */
int Display_CloseDevice_5(void);
/* 00491DF0 Display_SetDisplayMode_5 */
int Display_SetDisplayMode_5(void);
/* 00491E00 Display_SyncVSync_5 */
int Display_SyncVSync_5(void);
/* 00491E10 Display_SwapBuffers_5 */
int Display_SwapBuffers_5(void);
/* 00491E20 Display_ClearSurfaces_5 */
int Display_ClearSurfaces_5(void);
/* 00491E30 Display_RestoreDevice_5 */
int Display_RestoreDevice_5(void);
/* 00491E40 Display_CheckCapabilities_5 */
int Display_CheckCapabilities_5(void);
/* 00491E50 Display_SetGammaRamp_5 */
int Display_SetGammaRamp_5(void);
/* 00491E60 Display_CreateSurface_5 */
int Display_CreateSurface_5(void);
/* 00491E70 Display_SetBackgroundColourFn */
unsigned int Display_SetBackgroundColourFn(char a1, char a2, char a3);
/* 00491EA0 Display_OpenDevice_6 */
int Display_OpenDevice_6(int a1, int a2);
/* 00491EF0 Display_CloseDevice_6 */
HRESULT Display_CloseDevice_6(int a1);
/* 00491F10 Display_SetDisplayMode_6 */
int __stdcall Display_SetDisplayMode_6(GUID* a1, int a2, int* a3);
/* 00492230 Display_SyncVSync_6 */
int __stdcall Display_SyncVSync_6(void * a1, void * a2);
/* 004922B0 Display_SwapBuffers_6 */
int __stdcall Display_SwapBuffers_6(char * a1, int* a2, int* a3);
/* 00492370 Display_08X04X04X02X02X02X02 */
int Display_08X04X04X02X02X02X02(char * a1, int a2, short a3, short a4, char a5, char a6, char a7, char a8, char a9, char a10, char a11, char a12);
/* 00492BE0 DDERR_GENERIC */
int DDERR_GENERIC(int a1);
/* 00493580 Display_Direct3D */
int* Display_Direct3D(void);
/* 00493830 Display_CouldnTCreateDynamic */
int Display_CouldnTCreateDynamic(void);
/* 00493A10 Display_ClearSurfaces_6 */
int* Display_ClearSurfaces_6(void);
/* 00493CA0 Display_CouldnTSetClippingWi */
int Display_CouldnTSetClippingWi(void * a1);
/* 00493D50 Display_RestoreDevice_6 */
int Display_RestoreDevice_6(void * a1);
/* 004942A0 Display_Display */
int Display_Display(int a1, int a2, int a3, int a4, void * a5, int* a6);
/* 00494690 Display_CreateSurface_6 */
int __stdcall Display_CreateSurface_6(void * a1, void * a2);
/* 004946D0 Display_OpenDevice_7 */
int Display_OpenDevice_7(void);
/* 00494970 Display_FailedToLockFramebuf */
int Display_FailedToLockFramebuf(void * a1);
/* 00494C50 Display_SyncVSync_7 */
void * Display_SyncVSync_7(void * a1);
/* 00494F50 Display_SwapBuffers_7 */
int Display_SwapBuffers_7(HWND a1, int a2, int a3, void * a4);
/* 00495060 Display_RestoreDevice_7 */
int Display_RestoreDevice_7(void);
/* 004950E0 Display_CheckCapabilities_7 */
int Display_CheckCapabilities_7(void);
/* 004950F0 Display_SetGammaRamp_7 */
int* Display_SetGammaRamp_7(int* a1, int* a2, int* a3);
/* 00495170 Display_CreateSurface_7 */
int* Display_CreateSurface_7(int a1);
/* 00495190 Display_NoMoreDirect3DCallba */
int* Display_NoMoreDirect3DCallba(int a1, int* a2);
/* 004951E0 Display_OpenDevice_8 */
int* Display_OpenDevice_8(int a1);
/* 00495200 Display_CloseDevice_8 */
int* Display_CloseDevice_8(int a1);
/* 00495220 Display_SetDisplayMode_8 */
int* Display_SetDisplayMode_8(int a1, int* a2);
/* 00495260 Display_SyncVSync_8 */
int* Display_SyncVSync_8(int a1);
/* 00495280 Display_SwapBuffers_8 */
int Display_SwapBuffers_8(void);
/* 004952A0 Display_Cdaudio */
unsigned int Display_Cdaudio(void);
/* 004952F0 Display_ClearSurfaces_8 */
int Display_ClearSurfaces_8(void);
/* 004955F0 Display_CheckCapabilities_8 */
int* Display_CheckCapabilities_8(void * a1);
/* 00495620 Display_SetGammaRamp_8 */
int* Display_SetGammaRamp_8(int* a1, int* a2);
/* 00495640 Display_CdAudio */
unsigned int Display_CdAudio(void);
/* 00495A60 Display_CloseDevice_9 */
int Display_CloseDevice_9(void);
/* 00495A90 Display_SetDisplayMode_9 */
int Display_SetDisplayMode_9(void);
/* 00495AE0 Display_SyncVSync_9 */
int Display_SyncVSync_9(void);
/* 00495B50 Display_SwapBuffers_9 */
int Display_SwapBuffers_9(void);
/* 00495C10 Display_ClearSurfaces_9 */
unsigned int Display_ClearSurfaces_9(HMIXEROBJ a1, void * a2, void * a3, int a4, int a5);
/* 00495C80 Display_RestoreDevice_9 */
int* Display_RestoreDevice_9(void);
/* 00495CB0 Display_CheckCapabilities_9 */
int Display_CheckCapabilities_9(void);
/* 00495CC0 Display_SetGammaRamp_9 */
int Display_SetGammaRamp_9(int a1);
/* 00495CD0 Display_CreateSurface_9 */
int Display_CreateSurface_9(int* a1, int a2, int a3);
/* 00495DA0 Display_OpenDevice_10 */
int* Display_OpenDevice_10(void);
/* 00495DF0 Display_CloseDevice_10 */
int __fastcall Display_CloseDevice_10(int a1);
/* 00495E70 Music_SetVolume */
int Music_SetVolume(float a1, float a2);
/* 00495F30 Music_SetSfxVolume */
int Music_SetSfxVolume(int a1);
/* 00495F40 Display_SetDisplayMode_10 */
unsigned int __fastcall Display_SetDisplayMode_10(int a1);
/* 00495F70 Display_SoundFileSNotValidFo */
int Display_SoundFileSNotValidFo(int* a1);
/* 00496250 Display_SyncVSync_10 */
int Display_SyncVSync_10(int a1, int a2, int a3, void ** a4);
/* 00496280 Display_SwapBuffers_10 */
int Display_SwapBuffers_10(char * a1, char * a2, int a3, short* a4);
/* 00496420 Display_ClearSurfaces_10 */
short* Display_ClearSurfaces_10(short* a1, short a2);
/* 00496450 Display_RestoreDevice_10 */
int* Display_RestoreDevice_10(int a1, int a2);
/* 00496470 Display_CheckCapabilities_10 */
int* Display_CheckCapabilities_10(int a1, int a2, int a3);
/* 004964A0 Display_SetGammaRamp_10 */
int Display_SetGammaRamp_10(void * a1, int* a2, char a3);
/* 004965A0 Display_CreateSurface_10 */
int* Display_CreateSurface_10(int* a1);
/* 00496640 Display_OpenDevice_11 */
int* Display_OpenDevice_11(int* a1);
/* 00496650 Display_CloseDevice_11 */
int Display_CloseDevice_11(int* a1);
/* 004966B0 Display_SetDisplayMode_11 */
int* Display_SetDisplayMode_11(int* a1, int** a2);
/* 004966E0 Display_SyncVSync_11 */
int __convention Display_SyncVSync_11("regparm")(int a1, int a2, int a3, void * a4);
/* 00496770 Display_SwapBuffers_11 */
int Display_SwapBuffers_11(int a1, int a2, int a3, int* a4);
/* 00496860 Display_ClearSurfaces_11 */
int Display_ClearSurfaces_11(int a1, int a2, int a3);
/* 00496AB0 Display_RestoreDevice_11 */
int Display_RestoreDevice_11(int a1, int a2);
/* 00496CE0 Display_CheckCapabilities_11 */
int Display_CheckCapabilities_11(char * a1, void * a2, int a3);
/* 00496D80 Display_CreateSurface_11 */
int Display_CreateSurface_11(int a1, void * a2, int a3, int a4);
/* 00496DB0 Display_OpenDevice_12 */
long double Display_OpenDevice_12(int a1, int a2);
/* 00496E00 Display_CloseDevice_12 */
int Display_CloseDevice_12(int a1, int a2, int a3);
/* 00496E40 Display_SetDisplayMode_12 */
int Display_SetDisplayMode_12(void * a1);
/* 00496E60 Display_SyncVSync_12 */
char Display_SyncVSync_12(int a1, int* a2);
/* 004972B0 Display_ClearSurfaces_12 */
int Display_ClearSurfaces_12(int a1);
/* 00497390 Display_SoundInvalidFilename */
char * Display_SoundInvalidFilename(char * a1, char * a2);
/* 00497410 Display_RestoreDevice_12 */
int Display_RestoreDevice_12(char * a1);
/* 00497450 Display_CheckCapabilities_12 */
unsigned int Display_CheckCapabilities_12(char * a1);
/* 004974A0 Display_SetGammaRamp_12 */
int Display_SetGammaRamp_12(int* a1);
/* 004974E0 Display_CreateSurface_12 */
int* Display_CreateSurface_12(int* a1);
/* 00497510 Display_OpenDevice_13 */
int Display_OpenDevice_13(void);
/* 00497520 Display_CloseDevice_13 */
int Display_CloseDevice_13(void * a1, int* a2, int* a3);
/* 00497550 Display_SetDisplayMode_13 */
int Display_SetDisplayMode_13(void);
/* 00497570 Display_SyncVSync_13 */
int* Display_SyncVSync_13(void * a1, int a2);
/* 004975F0 Display_SwapBuffers_13 */
int Display_SwapBuffers_13(void * a1);
/* 00497620 Display_ClearSurfaces_13 */
int* Display_ClearSurfaces_13(int* a1, int a2);
/* 00497670 Display_RestoreDevice_13 */
int Display_RestoreDevice_13(void);
/* 00497680 Display_CheckCapabilities_13 */
int Display_CheckCapabilities_13(void * a1, int* a2);
/* 00497700 Display_SetGammaRamp_13 */
void Display_SetGammaRamp_13(void);
/* 004977B0 Display_CreateSurface_13 */
int** Display_CreateSurface_13(int a1, int a2);
/* 004977F0 Display_OpenDevice_14 */
int Display_OpenDevice_14(void);
/* 00497800 Display_CloseDevice_14 */
int Display_CloseDevice_14(int a1);
/* 00497830 Display_SetDisplayMode_14 */
void Display_SetDisplayMode_14(void ** a1);
/* 00497860 Display_SyncVSync_14 */
int Display_SyncVSync_14(void * a1);
/* 00497880 Display_SwapBuffers_14 */
int* Display_SwapBuffers_14(int* a1, int a2);
/* 004978B0 Display_ClearSurfaces_14 */
int** Display_ClearSurfaces_14(int a1, int* a2);
/* 004978D0 Display_RestoreDevice_14 */
int Display_RestoreDevice_14(int a1);
/* 004978E0 Display_CheckCapabilities_14 */
int Display_CheckCapabilities_14(int a1);
/* 004978F0 Display_SetGammaRamp_14 */
int Display_SetGammaRamp_14(int a1, int a2);
/* 00497940 Display_CreateSurface_14 */
int Display_CreateSurface_14(int a1);
/* 00497980 Display_Transcontextprimitiv */
int Display_Transcontextprimitiv(void);
/* 00497A00 Display_CouldnTSetViewport */
int Display_CouldnTSetViewport(void ** a1);
/* 00497D40 Display_OpenDevice_15 */
int Display_OpenDevice_15(void);
/* 00497D70 Display_CloseDevice_15 */
int Display_CloseDevice_15(int* a1, int a2, int a3, float a4);
/* 00497E60 Display_SetDisplayMode_15 */
void * Display_SetDisplayMode_15(void * a1, float a2);
/* 00497E70 Transcontext_SetActiveTransContext */
int Transcontext_SetActiveTransContext(int* a1);
/* 00497EC0 Display_SyncVSync_15 */
int Display_SyncVSync_15(void);
/* 00497ED0 Display_SwapBuffers_15 */
int Display_SwapBuffers_15(void);
/* 00497EE0 Display_ClearSurfaces_15 */
int** Display_ClearSurfaces_15(int a1);
/* 00497F20 Display_RestoreDevice_15 */
float* Display_RestoreDevice_15(float* a1, float* a2, double* a3);
/* 00498000 Display_CheckCapabilities_15 */
float* Display_CheckCapabilities_15(float* a1, float* a2);
/* 00498040 Display_SetGammaRamp_15 */
float* Display_SetGammaRamp_15(float* a1, float* a2, float a3);
/* 00498070 Display_CreateSurface_15 */
int Display_CreateSurface_15(void);
/* 00498080 Display_Offscreenbuffer */
int Display_Offscreenbuffer(void);
/* 00498350 Display_OpenDevice_16 */
int Display_OpenDevice_16(void);
/* 00498370 Display_CloseDevice_16 */
int Display_CloseDevice_16(void);
/* 00498380 Display_SetDisplayMode_16 */
int Display_SetDisplayMode_16(int* a1, int a2, int a3);
/* 004983D0 Display_SyncVSync_16 */
int Display_SyncVSync_16(void * a1);
/* 00498410 Display_SwapBuffers_16 */
int* Display_SwapBuffers_16(int* a1);
/* 00498460 Display_ClearSurfaces_16 */
int Display_ClearSurfaces_16(short a1);
/* 00498480 Display_DinputDll */
BOOL Display_DinputDll(int* a1, int* a2);
/* 004988D0 Display_RestoreDevice_16 */
int Display_RestoreDevice_16(PSTR a1);
/* 00498900 Display_CheckCapabilities_16 */
int Display_CheckCapabilities_16(void);
/* 00498950 Display_SetGammaRamp_16 */
int Display_SetGammaRamp_16(void);
/* 00498960 Display_CreateSurface_16 */
struct status_msg* Display_CreateSurface_16(unsigned int a1, int a2, int a3, float a4, float a5);
/* 00498A70 Display_OpenDevice_17 */
int Display_OpenDevice_17(int* a1, void * a2);
/* 00498AB0 Rain_Init */
int* Rain_Init(void);
/* 00498BD0 Rain_Update */
int Rain_Update(void * a1);
/* 00498F10 Display_CloseDevice_17 */
int Display_CloseDevice_17(float a1);
/* 00499090 Display_SetDisplayMode_17 */
int Display_SetDisplayMode_17(float a1);
/* 00499910 Display_SyncVSync_17 */
int Display_SyncVSync_17(void * a1, double a2);
/* 00499CE0 Display_SwapBuffers_17 */
unsigned int Display_SwapBuffers_17(void);
/* 00499CF0 Display_ClearSurfaces_17 */
int Display_ClearSurfaces_17(float a1);
/* 00499F90 Display_RestoreDevice_17 */
int Display_RestoreDevice_17(void * a1, char a2);
/* 00499FA0 Display_CheckCapabilities_17 */
int Display_CheckCapabilities_17(void * a1, float a2);
/* 00499FD0 Display_SetGammaRamp_17 */
int Display_SetGammaRamp_17(int a1);
/* 00499FE0 Display_CreateSurface_17 */
int Display_CreateSurface_17(void);
/* 00499FF0 Display_OpenDevice_18 */
void Display_OpenDevice_18(void);
/* 0049A010 Display_CloseDevice_18 */
int* Display_CloseDevice_18(int a1);
/* 0049A050 Display_SetDisplayMode_18 */
void * Display_SetDisplayMode_18(float a1, int a2, void * a3, int* a4);
/* 0049A340 Display_SyncVSync_18 */
int Display_SyncVSync_18(void);
/* 0049A350 PolyListDynCubeObj_Setup */
void * PolyListDynCubeObj_Setup(void * a1);
/* 0049A390 Display_SwapBuffers_18 */
int Display_SwapBuffers_18(int* a1);
/* 0049A3C0 PolyListDynCubeObj_LoadParameters */
void ** PolyListDynCubeObj_LoadParameters(void * a1);
/* 0049A430 Display_ClearSurfaces_18 */
int Display_ClearSurfaces_18(int a1, int a2);
/* 0049A450 Display_RestoreDevice_18 */
struct status_msg* Display_RestoreDevice_18(unsigned int a1, void * a2, int a3, int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, char * a10, unsigned int a11);
/* 0049A510 Display_CheckCapabilities_18 */
int Display_CheckCapabilities_18(void * a1, int a2);
/* 0049A520 PolyListDynCubeObj_Init */
int PolyListDynCubeObj_Init(void);
/* 0049A6E0 PolyListDynCubeObj_OnEvent */
int PolyListDynCubeObj_OnEvent(void);
/* 0049A9B0 PolyListDynCubeObj_Process */
int PolyListDynCubeObj_Process(int a1, void * a2);
/* 0049B260 Display_SetGammaRamp_18 */
int Display_SetGammaRamp_18(void);
/* 0049B2D0 Display_CreateSurface_18 */
int Display_CreateSurface_18(float a1, float a2);
/* 0049B430 Display_OpenDevice_19 */
void * Display_OpenDevice_19(void * a1, int a2, int a3);
/* 0049B4B0 Display_MeshFormatNotSupport */
void * Display_MeshFormatNotSupport(void * a1);
/* 0049B700 Bone_PaletteSkinner */
int Bone_PaletteSkinner(void * a1, int a2, float a3, int a4);
/* 0049BB40 Display_CloseDevice_19 */
int Display_CloseDevice_19(void);
/* 0049BD30 Display_SetDisplayMode_19 */
int Display_SetDisplayMode_19(void);
/* 0049BE10 Display_SyncVSync_19 */
int* Display_SyncVSync_19(void * a1, void * a2);
/* 0049C7D0 Display_ClearSurfaces_19 */
void Display_ClearSurfaces_19(void);
/* 0049CBE0 Display_RestoreDevice_19 */
int Display_RestoreDevice_19(void * a1, void * a2);
/* 0049CC80 Display_CheckCapabilities_19 */
int Display_CheckCapabilities_19(int* a1, float a2);
/* 0049D480 Display_SetGammaRamp_19 */
int Display_SetGammaRamp_19(void);
/* 0049D810 Display_CreateSurface_19 */
int Display_CreateSurface_19(void);
/* 0049DB20 Display_OpenDevice_20 */
int Display_OpenDevice_20(void);
/* 0049DDF0 Display_CloseDevice_20 */
int Display_CloseDevice_20(void);
/* 0049EB50 Display_SetDisplayMode_20 */
int Display_SetDisplayMode_20(void * a1, int* a2);
/* 0049EC70 Display_SyncVSync_20 */
int* Display_SyncVSync_20(double* a1);
/* 0049F1C0 Display_SwapBuffers_20 */
int Display_SwapBuffers_20(double* a1);
/* 0049F700 Mesh_SkinBones */
int* Mesh_SkinBones(int* a1);
/* 0049FB10 Display_ClearSurfaces_20 */
int* Display_ClearSurfaces_20(int* a1);
/* 0049FEB0 Display_RestoreDevice_20 */
int* Display_RestoreDevice_20(float a1);
/* 004A0110 Camera_UpdateTransform */
int Camera_UpdateTransform(void);
/* 004A01B0 RigidDynCubeObj_LoadParameters */
int RigidDynCubeObj_LoadParameters(void * a1);
/* 004A0340 Camera_SetFieldOfView */
int Camera_SetFieldOfView(float a1, int a2, float a3, int a4, float a5, int a6, float* a7, float a8);
/* 004A1470 Camera_ApplyLineFilter */
int Camera_ApplyLineFilter(void);
/* 004A1570 Camera_ApplyBandFilter */
int* Camera_ApplyBandFilter(void * a1, int* a2);
/* 004A23D0 Camera_ApplyHandiCam */
unsigned int Camera_ApplyHandiCam(void);
/* 004A23E0 Camera_ApplyWideScreen */
struct status_msg* Camera_ApplyWideScreen(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6);
/* 004A2430 Camera_ApplyPostProcess */
struct status_msg* Camera_ApplyPostProcess(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10);
/* 004A2490 Camera_UpdateViewCone */
struct status_msg* Camera_UpdateViewCone(void * a1, unsigned int a2, float a3, float a4, float a5, unsigned int a6, unsigned int a7, unsigned int a8);
/* 004A25E0 BandFilter_Cleanup */
int BandFilter_Cleanup(void * a1);
/* 004A2600 Camera_ResetMatrix */
int Camera_ResetMatrix(void * a1);
/* 004A26C0 Camera_UpdateTransform_2 */
int Camera_UpdateTransform_2(void * a1);
/* 004A2720 Camera_SetFieldOfView_2 */
int Camera_SetFieldOfView_2(unsigned int a1);
/* 004A2800 Camera_ApplyLineFilter_2 */
int Camera_ApplyLineFilter_2(void * a1, float a2, float a3, float a4);
/* 004A28B0 Camera_ApplyBandFilter_2 */
int Camera_ApplyBandFilter_2(int a1, int a2, int a3, int a4, int a5);
/* 004A28F0 Camera_ApplyHandiCam_2 */
int Camera_ApplyHandiCam_2(void);
/* 004A2910 Camera_ApplyWideScreen_2 */
struct status_msg* Camera_ApplyWideScreen_2(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
/* 004A29A0 BandFilter_Cleanup_2 */
int BandFilter_Cleanup_2(void * a1);
/* 004A29C0 Camera_ApplyPostProcess_2 */
int Camera_ApplyPostProcess_2(int a1, int a2, int a3);
/* 004A29E0 Camera_UpdateViewCone_2 */
int Camera_UpdateViewCone_2(int a1, int a2, int a3);
/* 004A2A00 BandFilter_Init */
int BandFilter_Init(void);
/* 004A2CD0 DrawLineFilter */
int DrawLineFilter(int a1, void * a2);
/* 004A3530 BandFilter_Cleanup_3 */
int BandFilter_Cleanup_3(void * a1);
/* 004A3550 BandFilter_LoadParameters */
void * BandFilter_LoadParameters(void * a1);
/* 004A35B0 BandFilter_Cleanup_4 */
int BandFilter_Cleanup_4(void * a1);
/* 004A3650 BandFilter_Update */
int** BandFilter_Update(void * a1);
/* 004A36D0 BandFilter_Action */
void * BandFilter_Action(float a1);
/* 004A38A0 BandFilter_Cleanup_5 */
int BandFilter_Cleanup_5(int a1);
/* 004A3940 DrawBandFilter */
float DrawBandFilter(int* a1) __location("result");
/* 004A4300 DrawHandiCamFilter */
int DrawHandiCamFilter(int a1, void * a2);
/* 004A4D10 BandFilter_Cleanup_6 */
int BandFilter_Cleanup_6(int a1);
/* 004A4F60 Camera_UpdateTransform_3 */
unsigned int Camera_UpdateTransform_3(void);
/* 004A4FF0 Camera_SetFieldOfView_3 */
void * Camera_SetFieldOfView_3(void * a1, float a2);
/* 004A5000 Camera_ApplyLineFilter_3 */
int Camera_ApplyLineFilter_3(int a1, int a2, int a3, int* a4, int a5, struct _EXCEPTION_REGISTRATION_RECORD* a6, int a7);
/* 004A507C Camera_ApplyBandFilter_3 */
int Camera_ApplyBandFilter_3(int* a1, int a2);
/* 004A50F5 Camera_ApplyHandiCam_3 */
int Camera_ApplyHandiCam_3(void);
/* 004A51EB Camera_UpdateViewCone_3 */
int Camera_UpdateViewCone_3(int a1);
/* 004A5210 Camera_ResetMatrix_3 */
void Camera_ResetMatrix_3(void);
/* 004A5234 Camera_UpdateTransform_4 */
int Camera_UpdateTransform_4(int* a1);
/* 004A528A Camera_SetFieldOfView_4 */
unsigned int Camera_SetFieldOfView_4(int* a1);
/* 004A52A4 Camera_ApplyLineFilter_4 */
int Camera_ApplyLineFilter_4(int* a1, void * a2, enum SET_FILE_POINTER_MOVE_METHOD a3);
/* 004A5330 Camera_ApplyBandFilter_4 */
int* Camera_ApplyBandFilter_4(PSTR a1, char * a2, int a3);
/* 004A5350 File_Open */
int* File_Open(PSTR a1, char * a2);
/* 004A5363 Camera_ApplyHandiCam_4 */
int Camera_ApplyHandiCam_4(void);
/* 004A537A Camera_ApplyWideScreen_4 */
void Camera_ApplyWideScreen_4(void);
/* 004A537B Camera_ApplyPostProcess_4 */
int Camera_ApplyPostProcess_4(void);
/* 004A53B3 Game_DataSymbolLoad */
int Game_DataSymbolLoad(char * a1, char * a2);
/* 004A5405 Camera_UpdateViewCone_4 */
int Camera_UpdateViewCone_4(char * a1);
/* 004A5490 Camera_ResetMatrix_4 */
int Camera_ResetMatrix_4(char * a1);
/* 004A54A0 Camera_UpdateTransform_5 */
void * const __convention Camera_UpdateTransform_5("regparm")(int a1);
/* 004A54D0 Camera_SetFieldOfView_5 */
char * Camera_SetFieldOfView_5(int a1, char a2);
/* 004A5500 Camera_ApplyLineFilter_5 */
char * Camera_ApplyLineFilter_5(char * a1, char * a2, int a3);
/* 004A55FE Camera_ApplyBandFilter_5 */
long double Camera_ApplyBandFilter_5(double a1);
/* 004A56DA Camera_ApplyHandiCam_5 */
int Camera_ApplyHandiCam_5(void);
/* 004A56E4 Camera_ApplyWideScreen_5 */
long double Camera_ApplyWideScreen_5(long double a1, long double a2);
/* 004A5702 String_VFormat */
int String_VFormat(char * a1, char * a2, int a3);
/* 004A5760 Camera_ApplyPostProcess_5 */
int80_t Camera_ApplyPostProcess_5(long double a1, long double a2) __location("fp0");
/* 004A5782 Camera_UpdateViewCone_5 */
long double __convention Camera_UpdateViewCone_5("regparm")(int a1, short a2, short a3, long double a4, int a5, int a6, int a7, char a8, int a9);
/* 004A5955 Camera_ResetMatrix_5 */
int Camera_ResetMatrix_5(long double a1);
/* 004A5980 Camera_UpdateTransform_6 */
int __convention Camera_UpdateTransform_6("regparm")(int a1, int a2, int a3, char * a4, char * a5);
/* 004A5A0C Camera_SetFieldOfView_6 */
void * Camera_SetFieldOfView_6(char * a1, char * a2);
/* 004A5AA8 Camera_ApplyLineFilter_6 */
int Camera_ApplyLineFilter_6(void);
/* 004A5AD5 Camera_ApplyBandFilter_6 */
int Camera_ApplyBandFilter_6(unsigned int a1);
/* 004A5AE6 Camera_ApplyHandiCam_6 */
int Camera_ApplyHandiCam_6(unsigned int a1);
/* 004A5AF7 Camera_ApplyWideScreen_6 */
int Camera_ApplyWideScreen_6(unsigned int a1, int a2, int a3);
/* 004A5B90 Camera_ApplyPostProcess_6 */
void Camera_ApplyPostProcess_6(int* a1, int a2);
/* 004A5BB0 Camera_UpdateViewCone_6 */
char * Camera_UpdateViewCone_6(char * a1, char * a2);
/* 004A5C30 Camera_ResetMatrix_6 */
long double Camera_ResetMatrix_6(double a1);
/* 004A5D00 Camera_UpdateTransform_7 */
int Camera_UpdateTransform_7(int a1);
/* 004A5D42 Camera_SetFieldOfView_7 */
void * Camera_SetFieldOfView_7(void * a1, int a2);
/* 004A5DD6 Camera_ApplyLineFilter_7 */
void __convention Camera_ApplyLineFilter_7("regparm")(int a1, void * a2);
/* 004A5DEE Camera_ApplyBandFilter_7 */
int Camera_ApplyBandFilter_7(void);
/* 004A5E25 Camera_ApplyHandiCam_7 */
int Camera_ApplyHandiCam_7(void * a1);
/* 004A5E39 Camera_ApplyWideScreen_7 */
int Camera_ApplyWideScreen_7(int* a1);
/* 004A5E53 Camera_ApplyPostProcess_7 */
int Camera_ApplyPostProcess_7(int a1, EXCEPTION_POINTERS* a2);
/* 004A5F94 Camera_UpdateViewCone_7 */
int* Camera_UpdateViewCone_7(int a1);
/* 004A5FD7 Camera_ResetMatrix_7 */
char * Camera_ResetMatrix_7(void);
/* 004A602F Camera_UpdateTransform_8 */
int Camera_UpdateTransform_8(void);
/* 004A60E8 Camera_SetFieldOfView_8 */
int __fastcall Camera_SetFieldOfView_8(int a1);
/* 004A6181 Camera_ApplyLineFilter_8 */
int* Camera_ApplyLineFilter_8(char * a1, int* a2, char * a3, int* a4, int* a5);
/* 004A6335 Camera_ApplyBandFilter_8 */
PSTR Camera_ApplyBandFilter_8(void);
/* 004A6467 Camera_ApplyHandiCam_8 */
unsigned int Camera_ApplyHandiCam_8(void);
/* 004A6612 Camera_ApplyWideScreen_8 */
HMODULE Camera_ApplyWideScreen_8(int* a1);
/* 004A663F Camera_MsvcrtHeapSelect */
int Camera_MsvcrtHeapSelect(void);
/* 004A6787 Camera_ApplyPostProcess_8 */
int Camera_ApplyPostProcess_8(int a1);
/* 004A68A9 Camera_UpdateViewCone_8 */
void * __stdcall Camera_UpdateViewCone_8(int* a1);
/* 004A68C4 Camera_ResetMatrix_8 */
int* Camera_ResetMatrix_8(void);
/* 004A68FD Camera_ProgramNameUnknown */
int* Camera_ProgramNameUnknown(int a1);
/* 004A6A50 Camera_UpdateTransform_9 */
void __fastcall Camera_UpdateTransform_9(void ** a1);
/* 004A6AB9 Camera_SetFieldOfView_9 */
int Camera_SetFieldOfView_9(int a1);
/* 004A6B6C Camera_ApplyLineFilter_9 */
char Camera_ApplyLineFilter_9(int* a1);
/* 004A6B97 Camera_ApplyBandFilter_9 */
int Camera_ApplyBandFilter_9(int* a1);
/* 004A6BD2 Camera_ApplyHandiCam_9 */
int Camera_ApplyHandiCam_9(int* a1);
/* 004A6C2E Camera_ApplyWideScreen_9 */
int Camera_ApplyWideScreen_9(void);
/* 004A6C37 Camera_ApplyPostProcess_9 */
int Camera_ApplyPostProcess_9(int a1);
/* 004A6CA4 Camera_UpdateViewCone_9 */
unsigned int Camera_UpdateViewCone_9(int* a1);
/* 004A6D7D Camera_ResetMatrix_9 */
unsigned int Camera_ResetMatrix_9(int a1, int a2, enum SET_FILE_POINTER_MOVE_METHOD a3);
/* 004A6E17 Camera_UpdateTransform_10 */
void * Camera_UpdateTransform_10(int* a1);
/* 004A6F6F Camera_SetFieldOfView_10 */
int* Camera_SetFieldOfView_10(PSTR a1, char * a2, int a3, int* a4);
/* 004A70DF Camera_ApplyLineFilter_10 */
int* Camera_ApplyLineFilter_10(void);
/* 004A7157 Camera_ApplyBandFilter_10 */
int Camera_ApplyBandFilter_10(void);
/* 004A7169 Camera_ApplyHandiCam_10 */
void Camera_ApplyHandiCam_10(void);
/* 004A71A7 Camera_Kernel32 */
int Camera_Kernel32(void);
/* 004A71D0 Camera_ApplyWideScreen_10 */
unsigned int Camera_ApplyWideScreen_10(char * a1);
/* 004A7290 Camera_ApplyPostProcess_10 */
int* __convention Camera_ApplyPostProcess_10("regparm")(int a1, int a2, int a3, int a4, int* a5);
/* 004A72CE Camera_E000 */
char * Camera_E000(double* a1, char * a2, void * a3, int a4);
/* 004A73D2 Camera_UpdateViewCone_10 */
char * Camera_UpdateViewCone_10(double* a1, char * a2, int a3);
/* 004A74B0 Camera_ResetMatrix_10 */
char * Camera_ResetMatrix_10(double* a1, char * a2, int a3, int a4);
/* 004A754B Camera_UpdateTransform_11 */
char * Camera_UpdateTransform_11(double* a1, char * a2, void * a3, int a4);
/* 004A7572 Camera_SetFieldOfView_11 */
char * Camera_SetFieldOfView_11(double* a1, char * a2, int a3);
/* 004A7595 Camera_ApplyLineFilter_11 */
char * Camera_ApplyLineFilter_11(double* a1, char * a2, int a3, int a4, int a5);
/* 004A75E6 Camera_ApplyBandFilter_11 */
void Camera_ApplyBandFilter_11(char * a1, int a2);
/* 004A760B Camera_ApplyHandiCam_11 */
unsigned int Camera_ApplyHandiCam_11(int* a1);
/* 004A7720 Camera_ApplyWideScreen_11 */
int Camera_ApplyWideScreen_11(int* a1, char * a2);
/* 004A7E61 Camera_ApplyPostProcess_11 */
int* Camera_ApplyPostProcess_11(int a1, int* a2, int* a3);
/* 004A7E96 Camera_UpdateViewCone_11 */
int* Camera_UpdateViewCone_11(int a1, int* a2, int* a3, int* a4);
/* 004A7EC7 Camera_ResetMatrix_11 */
int* Camera_ResetMatrix_11(char * a1, int* a2, int* a3, int* a4);
/* 004A7EFF Camera_UpdateTransform_12 */
int Camera_UpdateTransform_12(int* a1);
/* 004A7F0C Camera_SetFieldOfView_12 */
int Camera_SetFieldOfView_12(int* a1);
/* 004A7F1C Camera_ApplyLineFilter_12 */
void * Camera_ApplyLineFilter_12(int* a1);
/* 004A7F2A Camera_ApplyBandFilter_12 */
BOOL __convention Camera_ApplyBandFilter_12("regparm")(int a1, int a2, int a3, int a4);
/* 004A7FD4 Camera_ApplyHandiCam_12 */
long double __convention Camera_ApplyHandiCam_12("regparm")(int a1, int a2, int a3, int a4, double a5, int a6);
/* 004A8027 Camera_ApplyWideScreen_12 */
long double Camera_ApplyWideScreen_12(int a1, int a2, int a3);
/* 004A80BF Camera_ApplyPostProcess_12 */
void Camera_ApplyPostProcess_12(void);
/* 004A8372 Camera_UpdateViewCone_12 */
int Camera_UpdateViewCone_12(int a1, double* a2, char a3);
/* 004A8589 Camera_ResetMatrix_12 */
long double Camera_ResetMatrix_12(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8);
/* 004A8611 Camera_UpdateTransform_13 */
int Camera_UpdateTransform_13(int a1);
/* 004A8637 Camera_SetFieldOfView_13 */
int Camera_SetFieldOfView_13(int a1);
/* 004A865C Camera_ApplyLineFilter_13 */
void Camera_ApplyLineFilter_13(void);
/* 004A8689 Camera_ApplyBandFilter_13 */
void Camera_ApplyBandFilter_13(void);
/* 004A869B Camera_ApplyHandiCam_13 */
void Camera_ApplyHandiCam_13(void);
/* 004A86C4 Camera_ApplyWideScreen_13 */
void Camera_ApplyWideScreen_13(void);
/* 004A871E Camera_ApplyPostProcess_13 */
long double Camera_ApplyPostProcess_13(double a1, int* a2);
/* 004A87DF Camera_UpdateViewCone_13 */
void Camera_UpdateViewCone_13(void);
/* 004A87ED Camera_ResetMatrix_13 */
int Camera_ResetMatrix_13(void);
/* 004A87FC Camera_UpdateTransform_14 */
int Camera_UpdateTransform_14(short a1, int a2, int a3);
/* 004A881F Camera_SetFieldOfView_14 */
void Camera_SetFieldOfView_14(int80_t a1, char a2);
/* 004A8880 Camera_ApplyLineFilter_14 */
int80_t Camera_ApplyLineFilter_14(short a1, long double a2, long double a3) __location("fp0");
/* 004A88BE Camera_ApplyBandFilter_14 */
int80_t Camera_ApplyBandFilter_14(short a1, long double a2) __location("fp0");
/* 004A88F4 Camera_ApplyHandiCam_14 */
long double Camera_ApplyHandiCam_14(short a1, int a2, int a3, int a4, int a5);
/* 004A892E Camera_ApplyWideScreen_14 */
int Camera_ApplyWideScreen_14(void);
/* 004A8935 Camera_ApplyPostProcess_14 */
void Camera_ApplyPostProcess_14(void * a1, long double a2);
/* 004A8A65 Camera_UpdateViewCone_14 */
long double Camera_UpdateViewCone_14(short a1, int a2, int a3);
/* 004A8A91 Camera_ResetMatrix_14 */
void Camera_ResetMatrix_14(void);
/* 004A8AD0 Camera_UpdateTransform_15 */
int __fastcall Camera_UpdateTransform_15(int a1, void * a2, void * a3, long double a4);
/* 004A8B37 Camera_SetFieldOfView_15 */
int __fastcall Camera_SetFieldOfView_15(int a1, void * a2, void * a3, long double a4, long double a5);
/* 004A8BC8 Camera_ApplyLineFilter_15 */
void Camera_ApplyLineFilter_15(void);
/* 004A8BE2 Camera_ApplyWideScreen_15 */
long double Camera_ApplyWideScreen_15(void * a1, int80_t a2);
/* 004A8C0D Camera_ApplyPostProcess_15 */
long double Camera_ApplyPostProcess_15(void * a1, long double a2, int80_t a3);
/* 004A8C37 Camera_ResetMatrix_15 */
long double Camera_ResetMatrix_15(void * a1, int80_t a2, long double a3);
/* 004A8C76 Camera_UpdateTransform_16 */
int Camera_UpdateTransform_16(void);
/* 004A8C89 Camera_SetFieldOfView_16 */
int __fastcall Camera_SetFieldOfView_16(char a1, void * a2);
/* 004A8CA0 Camera_ApplyLineFilter_16 */
long double Camera_ApplyLineFilter_16(short a1, long double a2, long double a3);
/* 004A8DB7 Camera_ApplyBandFilter_16 */
int __convention Camera_ApplyBandFilter_16("regparm")(int a1);
/* 004A9256 Camera_ApplyHandiCam_16 */
int80_t Camera_ApplyHandiCam_16(long double a1, long double a2) __location("fp0");
/* 004A9269 Camera_ApplyWideScreen_16 */
int80_t Camera_ApplyWideScreen_16(long double a1, long double a2) __location("fp0");
/* 004A9491 Camera_ApplyPostProcess_16 */
int80_t Camera_ApplyPostProcess_16(long double a1, long double a2) __location("fp0");
/* 004A94A6 Camera_UpdateViewCone_16 */
long double __convention Camera_UpdateViewCone_16("regparm")(int a1, int a2, short a3, long double a4, int a5, long double a6, long double a7);
/* 004A96AC Camera_ResetMatrix_16 */
long double Camera_ResetMatrix_16(short a1, long double a2, long double a3);
/* 004A975E Camera_UpdateTransform_17 */
long double __convention Camera_UpdateTransform_17("regparm")(int a1, int a2, short a3, long double a4, int a5, long double a6, long double a7);
/* 004A9964 Camera_SetFieldOfView_17 */
long double Camera_SetFieldOfView_17(short a1, long double a2, long double a3);
/* 004A9A41 Camera_ApplyLineFilter_17 */
int80_t Camera_ApplyLineFilter_17(void * a1, long double a2) __location("fp0");
/* 004A9B81 Camera_ApplyBandFilter_17 */
int80_t __fastcall Camera_ApplyBandFilter_17(char a1) __location("fp0");
/* 004A9B8E Camera_ApplyHandiCam_17 */
void __fastcall Camera_ApplyHandiCam_17(short a1, void * a2, long double a3);
/* 004A9BD1 Camera_ApplyWideScreen_17 */
int Camera_ApplyWideScreen_17(long double a1);
/* 004A9C40 Camera_ApplyPostProcess_17 */
long double __convention Camera_ApplyPostProcess_17("regparm")(int a1, int a2, long double a3, int a4, int a5, int a6, int a7);
/* 004A9C57 Camera_UpdateViewCone_17 */
long double __convention Camera_UpdateViewCone_17("regparm")(int a1, int a2, long double a3, int a4, int a5);
/* 004A9CA0 Camera_ResetMatrix_17 */
long double Camera_ResetMatrix_17(long double a1);
/* 004A9CB5 Camera_UpdateTransform_18 */
int Camera_UpdateTransform_18(int a1);
/* 004A9CCC Camera_SetFieldOfView_18 */
void Camera_SetFieldOfView_18(void);
/* 004A9CE5 Camera_ApplyLineFilter_18 */
long double __fastcall Camera_ApplyLineFilter_18(int a1, double* a2);
/* 004A9D28 Camera_ApplyBandFilter_18 */
void Camera_ApplyBandFilter_18(void);
/* 004A9E2C Camera_ResetMatrix_18 */
int Camera_ResetMatrix_18(double a1, int a2, int a3, double* a4);
/* 004A9F5C Camera_UpdateTransform_19 */
int __convention Camera_UpdateTransform_19("regparm")(int a1, int a2, int a3, double a4);
/* 004A9FC1 Camera_SetFieldOfView_19 */
unsigned int __fastcall Camera_SetFieldOfView_19(int a1);
/* 004AA0A0 Camera_ApplyLineFilter_19 */
int Camera_ApplyLineFilter_19(char a1);
/* 004AA15C Camera_ApplyBandFilter_19 */
int Camera_ApplyBandFilter_19(char a1);
/* 004AA16D Camera_ApplyHandiCam_19 */
int Camera_ApplyHandiCam_19(char a1, int a2, char a3);
/* 004AA19E Camera_ApplyWideScreen_19 */
int Camera_ApplyWideScreen_19(unsigned int a1);
/* 004AA337 Camera_ApplyPostProcess_19 */
int Camera_ApplyPostProcess_19(int a1);
/* 004AA381 Camera_UpdateViewCone_19 */
void Camera_UpdateViewCone_19(void);
/* 004AA3B4 Camera_ResetMatrix_19 */
int Camera_ResetMatrix_19(void);
/* 004AA3DD Camera_UpdateTransform_20 */
void * Camera_UpdateTransform_20(void);
/* 004AA562 Camera_SetFieldOfView_20 */
void Camera_SetFieldOfView_20(void);
/* 004AA580 Camera_ApplyLineFilter_20 */
char * Camera_ApplyLineFilter_20(char * a1, char * a2);
/* 004AA590 Camera_ApplyBandFilter_20 */
char * Camera_ApplyBandFilter_20(char * a1, char * a2);
/* 004AA670 Camera_ApplyHandiCam_20 */
void * Camera_ApplyHandiCam_20(int* a1);
/* 004AA682 Camera_ApplyWideScreen_20 */
void * Camera_ApplyWideScreen_20(int* a1, int a2);
/* 004AA6AE Camera_ApplyPostProcess_20 */
void * Camera_ApplyPostProcess_20(int* a1);
/* 004AA730 Camera_UpdateViewCone_20 */
void * Camera_UpdateViewCone_20(char * a1);
/* 004AA7B0 Camera_ResetMatrix_20 */
char * Camera_ResetMatrix_20(char * a1, char * a2, void * a3);
/* 004AAAE5 Camera_UpdateTransform_21 */
int Camera_UpdateTransform_21(char * a1, void ** a2, int a3);
/* 004AAAFC Camera_SetFieldOfView_21 */
int Camera_SetFieldOfView_21(char * a1, void ** a2, int a3, int a4);
/* 004AAD10 Camera_ApplyLineFilter_21 */
int Camera_ApplyLineFilter_21(void * a1, void * a2, int a3);
/* 004AAD48 Camera_ApplyBandFilter_21 */
int Camera_ApplyBandFilter_21(int a1);
/* 004AAD90 Camera_ApplyHandiCam_21 */
void * Camera_ApplyHandiCam_21(int a1);
/* 004AADBB Camera_ApplyWideScreen_21 */
int* Camera_ApplyWideScreen_21(int* a1, int* a2);
/* 004AB0E4 Camera_ApplyPostProcess_21 */
void * Camera_ApplyPostProcess_21(int* a1);
/* 004AB3ED Camera_UpdateViewCone_21 */
int* Camera_UpdateViewCone_21(void);
/* 004AB49E Camera_ResetMatrix_21 */
int Camera_ResetMatrix_21(void * a1);
/* 004AB599 Camera_UpdateTransform_22 */
void ** Camera_UpdateTransform_22(void);
/* 004AB6DD Camera_SetFieldOfView_22 */
BOOL Camera_SetFieldOfView_22(int* a1);
/* 004AB733 Camera_ApplyLineFilter_22 */
void Camera_ApplyLineFilter_22(int a1);
/* 004AB7F5 Camera_ApplyBandFilter_22 */
int Camera_ApplyBandFilter_22(int a1, void *** a2, int* a3);
/* 004AB84C Camera_ApplyHandiCam_22 */
int* Camera_ApplyHandiCam_22(void * a1, int a2, char * a3);
/* 004AB891 Camera_ApplyWideScreen_22 */
void * Camera_ApplyWideScreen_22(int a1);
/* 004ABA99 Camera_ApplyPostProcess_22 */
int Camera_ApplyPostProcess_22(int* a1, int a2, int a3);
/* 004ABBBD Camera_User32Dll */
int Camera_User32Dll(int a1, int a2, int a3);
/* 004ABC46 Camera_UpdateViewCone_22 */
int* Camera_UpdateViewCone_22(int a1);
/* 004ABCAD Camera_ResetMatrix_22 */
int Camera_ResetMatrix_22(void);
/* 004ABD42 Camera_UpdateTransform_23 */
int Camera_UpdateTransform_23(int a1, HANDLE a2);
/* 004ABDB9 Camera_SetFieldOfView_23 */
int Camera_SetFieldOfView_23(int a1);
/* 004ABE33 Camera_ApplyLineFilter_23 */
int Camera_ApplyLineFilter_23(int a1);
/* 004ABE70 Camera_ApplyBandFilter_23 */
enum WIN32_ERROR Camera_ApplyBandFilter_23(int a1);
/* 004ABEC7 Camera_ApplyHandiCam_23 */
int Camera_ApplyHandiCam_23(enum WIN32_ERROR a1, char * a2, unsigned int a3);
/* 004AC074 Camera_ApplyWideScreen_23 */
int Camera_ApplyWideScreen_23(void);
/* 004AC119 Camera_ApplyPostProcess_23 */
int Camera_ApplyPostProcess_23(void);
/* 004AC12D Camera_UpdateViewCone_23 */
void * Camera_UpdateViewCone_23(int a1, unsigned int a2, unsigned int a3);
/* 004AC323 Camera_ResetMatrix_23 */
int Camera_ResetMatrix_23(int* a1);
/* 004AC367 Camera_UpdateTransform_24 */
int Camera_UpdateTransform_24(PSTR a1, int a2, char a3);
/* 004AC620 Camera_SetFieldOfView_24 */
int Camera_SetFieldOfView_24(short a1, int a2, int a3);
/* 004AC655 Camera_ApplyLineFilter_24 */
int Camera_ApplyLineFilter_24(int a1, int a2);
/* 004AC66B Camera_ApplyBandFilter_24 */
void Camera_ApplyBandFilter_24(void);
/* 004AC6FD Camera_ApplyWideScreen_24 */
void Camera_ApplyWideScreen_24(void);
/* 004AC786 Camera_ApplyPostProcess_24 */
int Camera_ApplyPostProcess_24(int a1, int a2);
/* 004AC7CF Camera_UpdateViewCone_24 */
int Camera_UpdateViewCone_24(int a1, int a2);
/* 004AC825 Camera_ResetMatrix_24 */
int Camera_ResetMatrix_24(int a1, int* a2);
/* 004AC8B1 Camera_UpdateTransform_25 */
int* Camera_UpdateTransform_25(int a1, int* a2);
/* 004AC8CC Camera_SetFieldOfView_25 */
int Camera_SetFieldOfView_25(int* a1);
/* 004AC8D8 Camera_ApplyLineFilter_25 */
int Camera_ApplyLineFilter_25(int* a1);
/* 004AC8F3 Camera_ApplyBandFilter_25 */
int* Camera_ApplyBandFilter_25(int* a1, int a2);
/* 004AC980 Camera_ApplyHandiCam_25 */
int Camera_ApplyHandiCam_25(short* a1, int* a2, int* a3);
/* 004ACAEC Camera_ApplyWideScreen_25 */
int Camera_ApplyWideScreen_25(short* a1, int* a2);
/* 004ACB02 Camera_ApplyPostProcess_25 */
int Camera_ApplyPostProcess_25(short* a1, int* a2);
/* 004ACB18 Camera_UpdateViewCone_25 */
int Camera_UpdateViewCone_25(int* a1, int a2);
/* 004ACB45 Camera_ResetMatrix_25 */
int Camera_ResetMatrix_25(int* a1, int a2);
/* 004ACB72 Camera_UpdateTransform_26 */
char * Camera_UpdateTransform_26(char * a1, char * a2, int a3);
/* 004ACBE9 Camera_SetFieldOfView_26 */
int Camera_SetFieldOfView_26(void);
/* 004ACC4D Camera_ApplyLineFilter_26 */
int* Camera_ApplyLineFilter_26(int* a1, int* a2);
/* 004ACD10 Camera_ApplyBandFilter_26 */
char * Camera_ApplyBandFilter_26(char * a1, char a2, int a3);
/* 004ACD70 Camera_ApplyHandiCam_26 */
char * Camera_ApplyHandiCam_26(char * a1, char * a2, void * a3);
/* 004AD0A5 Camera_ApplyWideScreen_26 */
int Camera_ApplyWideScreen_26(void);
/* 004AD0AE Camera_ApplyPostProcess_26 */
int Camera_ApplyPostProcess_26(int a1);
/* 004AD0D4 Camera_UpdateViewCone_26 */
BOOL Camera_UpdateViewCone_26(BOOL a1, wchar16 a2);
/* 004AD140 Camera_ResetMatrix_26 */
void Camera_ResetMatrix_26(void);
/* 004AD1B0 Camera_UpdateTransform_27 */
void Camera_UpdateTransform_27(void);
/* 004AD225 Camera_SetFieldOfView_27 */
BOOL Camera_SetFieldOfView_27(unsigned int a1, unsigned char * a2, int a3, unsigned short* a4, unsigned int a5, unsigned int a6, int a7);
/* 004AD31E Camera_ApplyLineFilter_27 */
void Camera_ApplyLineFilter_27(void);
/* 004AD36E Camera_ApplyHandiCam_27 */
void Camera_ApplyHandiCam_27(void);
/* 004AD371 Camera_ApplyWideScreen_27 */
int Camera_ApplyWideScreen_27(int a1, int* a2, unsigned int a3);
/* 004AD441 Camera_ApplyPostProcess_27 */
int Camera_ApplyPostProcess_27(double a1, int a2);
/* 004AD4D3 Camera_UpdateViewCone_27 */
int Camera_UpdateViewCone_27(unsigned int a1, unsigned int a2, unsigned char * a3, void * a4, PSTR a5, int a6, unsigned int a7, int a8);
/* 004AD5E3 Camera_ResetMatrix_27 */
void Camera_ResetMatrix_27(void);
/* 004AD697 Camera_SetFieldOfView_28 */
void Camera_SetFieldOfView_28(void);
/* 004AD6F7 Camera_ApplyBandFilter_28 */
void * Camera_ApplyBandFilter_28(char * a1, int a2);
/* 004AD722 Camera_ApplyHandiCam_28 */
int Camera_ApplyHandiCam_28(int a1);
/* 004AD73D Camera_ApplyWideScreen_28 */
unsigned int __fastcall Camera_ApplyWideScreen_28(int a1);
/* 004AD809 Camera_ApplyPostProcess_28 */
char * Camera_ApplyPostProcess_28(unsigned int a1, int a2);
/* 004AD912 Camera_UpdateViewCone_28 */
int Camera_UpdateViewCone_28(unsigned int a1, int a2);
/* 004ADA58 Camera_ResetMatrix_28 */
int Camera_ResetMatrix_28(int a1, int a2, int* a3);
/* 004ADA79 Camera_UpdateTransform_29 */
int Camera_UpdateTransform_29(int* a1, int* a2);
/* 004ADAD7 Camera_SetFieldOfView_29 */
int* Camera_SetFieldOfView_29(int* a1);
/* 004ADB05 Camera_ApplyLineFilter_29 */
int* Camera_ApplyLineFilter_29(int* a1);
/* 004ADB32 Camera_ApplyBandFilter_29 */
int Camera_ApplyBandFilter_29(char * a1, int a2, int a3);
/* 004ADBF9 Camera_ApplyHandiCam_29 */
int Camera_ApplyHandiCam_29(short* a1, char ** a2, int a3, int a4, int a5, int a6, int a7);
/* 004AE0CA Camera_1Snan */
int Camera_1Snan(short a1, char * a2, char a3, char * a4);
/* 004AE35D Camera_ApplyWideScreen_29 */
int Camera_ApplyWideScreen_29(int a1, int a2);
/* 004AE3D3 Camera_ApplyPostProcess_29 */
short* Camera_ApplyPostProcess_29(short* a1, int* a2);
/* 004AE5F3 Camera_UpdateViewCone_29 */
void Camera_UpdateViewCone_29(int a1, int a2, int a3);
/* 004AE670 Camera_ResetMatrix_29 */
void __stdcall Camera_ResetMatrix_29(void * TargetFrame, void * TargetIp, EXCEPTION_RECORD* ExceptionRecord, void * ReturnValue);
/* 004AE730 Camera_SetFieldOfView_30 */
int Camera_SetFieldOfView_30(void);
/* 004AF740 Camera_ApplyBandFilter_30 */
int Camera_ApplyBandFilter_30(void);
/* 004AF746 Camera_ApplyHandiCam_30 */
int Camera_ApplyHandiCam_30(void);
/* 004AF74C Camera_ApplyWideScreen_30 */
HRESULT __stdcall Camera_ApplyWideScreen_30(LPDDENUMCALLBACKEXA lpCallback, void * lpContext, unsigned int dwFlags);
/* 004AF752 Camera_ApplyPostProcess_30 */
HRESULT __stdcall Camera_ApplyPostProcess_30(GUID* lpGuid, void ** lplpDD, GUID* iid, struct IUnknown pUnkOuter);
/* 004AF758 Camera_UpdateViewCone_30 */
void __stdcall Camera_UpdateViewCone_30(void);
/* 004AF75E Camera_ResetMatrix_30 */
void __stdcall Camera_ResetMatrix_30(void);
/* 004AF764 Camera_UpdateTransform_31 */
unsigned int __stdcall Camera_UpdateTransform_31(struct IAVIFile pfile);
/* 004AF76A Camera_SetFieldOfView_31 */
unsigned int __stdcall Camera_SetFieldOfView_31(struct IAVIStream pavi);
/* 004AF770 Camera_ApplyLineFilter_31 */
LRESULT __stdcall Camera_ApplyLineFilter_31(HIC hic);
/* 004AF776 Camera_ApplyBandFilter_31 */
LRESULT __stdcall Camera_ApplyBandFilter_31(HIC hic, unsigned int msg, unsigned int dw1, unsigned int dw2);
/* 004AF77C Camera_ApplyHandiCam_31 */
HRESULT __stdcall Camera_ApplyHandiCam_31(struct IAVIStream pavi, int lPos, void * lpFormat, int* lpcbFormat);
/* 004AF782 Camera_ApplyWideScreen_31 */
HRESULT __stdcall Camera_ApplyWideScreen_31(struct IAVIStream pavi, struct AVISTREAMINFOA* psi, int lSize);
/* 004AF788 Camera_ApplyPostProcess_31 */
HRESULT __stdcall Camera_ApplyPostProcess_31(struct IAVIFile pfile, struct IAVIStream* ppavi, unsigned int fccType, int lParam);
/* 004AF78E Camera_UpdateViewCone_31 */
HRESULT __stdcall Camera_UpdateViewCone_31(struct IAVIFile pfile, struct AVIFILEINFOA* pfi, int lSize);
/* 004AF794 Camera_ResetMatrix_31 */
HRESULT __stdcall Camera_ResetMatrix_31(struct IAVIFile* ppfile, PSTR szFile, unsigned int uMode, GUID* lpHandler);
/* 004AF79A Camera_UpdateTransform_32 */
HIC __stdcall Camera_UpdateTransform_32(unsigned int fccType, unsigned int fccHandler, BITMAPINFOHEADER* lpbiIn, BITMAPINFOHEADER* lpbiOut, unsigned short wFlags);
/* 004AF7A0 Camera_SetFieldOfView_32 */
unsigned int __stdcall Camera_SetFieldOfView_32(HIC hic, unsigned int dwFlags, BITMAPINFOHEADER* lpbiFormat, void * lpData, BITMAPINFOHEADER* lpbi, void * lpBits);
/* 004AF7A6 Camera_ApplyLineFilter_32 */
HRESULT __stdcall Camera_ApplyLineFilter_32(struct IAVIStream pavi, int lStart, int lSamples, void * lpBuffer, int cbBuffer, int* plBytes, int* plSamples);
/* 004AF7B0 Error_Show */
int Error_Show(char * a1);
/* 004AF810 Warning_Show */
int Warning_Show(char * a1);
/* 004AF860 Camera_ApplyBandFilter_32 */
int Camera_ApplyBandFilter_32(int a1);
/* 004AF870 Camera_ApplyHandiCam_32 */
int Camera_ApplyHandiCam_32(int a1);
/* 004AF880 Camera_ApplyWideScreen_32 */
int Camera_ApplyWideScreen_32(int a1);
/* 004AF890 Camera_ApplyPostProcess_32 */
int Camera_ApplyPostProcess_32(int a1);
/* 004AF8A0 Camera_UpdateViewCone_32 */
int Camera_UpdateViewCone_32(int a1);
/* 004AF8B0 Camera_ResetMatrix_32 */
int Camera_ResetMatrix_32(int a1);
/* 004AF8C0 Camera_UpdateTransform_33 */
int Camera_UpdateTransform_33(void);
/* 004AF8F0 Camera_SetFieldOfView_33 */
void * Camera_SetFieldOfView_33(void * a1, void ** a2);
/* 004AF910 Camera_ApplyLineFilter_33 */
int* Camera_ApplyLineFilter_33(int* a1, int* a2);
/* 004AF930 Camera_ApplyBandFilter_33 */
void ** Camera_ApplyBandFilter_33(int* a1);
/* 004AF960 Camera_ApplyHandiCam_33 */
int* Camera_ApplyHandiCam_33(int* a1);
/* 004AF990 Camera_ApplyWideScreen_33 */
void * Camera_ApplyWideScreen_33(void * a1, void ** a2);
/* 004AF9B0 Camera_ApplyPostProcess_33 */
int Camera_ApplyPostProcess_33(int* a1);
/* 004AF9D0 Camera_UpdateViewCone_33 */
int Camera_UpdateViewCone_33(int* a1, int* a2, char * a3);
/* 004AFF90 Camera_ResetMatrix_33 */
int* Camera_ResetMatrix_33(int a1, int* a2);
/* 004AFFB0 Camera_UpdateTransform_34 */
int Camera_UpdateTransform_34(int a1, char * a2);
/* 004B0270 Sys_AllocateMemory */
int Sys_AllocateMemory(int* a1, int* a2, int a3, int* a4, int a5, int a6);
/* 004B0670 Sys_FreeMemory */
int Sys_FreeMemory(int a1, int a2, int a3);
/* 004B0690 Sys_OpenFileStream */
int Sys_OpenFileStream(int a1, int* a2, int a3, int a4, int a5, int a6);
/* 004B0720 Sys_ReadFileBlock */
int Sys_ReadFileBlock(int a1, int* a2, int* a3, int* a4, int* a5, int* a6);
/* 004B07A0 Sys_CloseFileStream */
int Sys_CloseFileStream(int a1, int a2, int a3);
/* 004B07D0 Sys_ExecuteBytecode */
int Sys_ExecuteBytecode(int* a1, int* a2, int* a3, int a4, int* a5, int a6, int a7);
/* 004B0850 Sys_DispatchOpcode */
int Sys_DispatchOpcode(int* a1, int* a2, int* a3, char * a4, int a5, int a6);
/* 004B08A0 Sys_PushStack */
int Sys_PushStack(int* a1, int* a2, char * a3, int a4, int a5);
/* 004B08F0 Sys_PopStack */
char * Sys_PopStack(char * a1, char * a2);
/* 004B09C0 Sys_ResolveSymbol */
int Sys_ResolveSymbol(int* a1, int* a2, int* a3, char * a4, int a5, int a6);
/* 004B0A10 Sys_CheckHeap */
int Sys_CheckHeap(char * a1, int a2, int a3, int a4);
/* 004B0A80 Sys_AllocateMemory_2 */
int Sys_AllocateMemory_2(int a1, int a2, char * a3, int a4);
/* 004B0B00 Sys_FreeMemory_2 */
int Sys_FreeMemory_2(int* a1, int a2, int a3, int a4);
/* 004B0B70 Sys_OpenFileStream_2 */
int Sys_OpenFileStream_2(int* a1);
/* 004B0B90 Sys_ReadFileBlock_2 */
int Sys_ReadFileBlock_2(void);
/* 004B0BA0 Sys_CloseFileStream_2 */
int Sys_CloseFileStream_2(void);
/* 004B0BE0 Mem_DeallocAll */
int Mem_DeallocAll(void);
/* 004B0C60 Mem_Alloc */
void * Mem_Alloc(int a1, int a2);
/* 004B0D10 Sys_ExecuteBytecode_2 */
int Sys_ExecuteBytecode_2(void * a1);
/* 004B0D40 QHash_ValueSet */
int QHash_ValueSet(void);
/* 004B0D50 Sys_DispatchOpcode_2 */
int Sys_DispatchOpcode_2(void);
/* 004B0D60 Qhash_Init */
void * Qhash_Init(char a1);
/* 004B0D90 Qhash_Reset */
void * Qhash_Reset(void);
/* 004B0DB0 QHash_ValueGet */
int QHash_ValueGet(void);
/* 004B0DC0 Sys_PushStack_2 */
int Sys_PushStack_2(void);
/* 004B0E00 Sys_RendermodeFailedToCr */
int Sys_RendermodeFailedToCr(int a1);
/* 004B0E50 Sys_PopStack_2 */
int Sys_PopStack_2(int a1);
/* 004B0E70 Sys_RendermodeFailedToCr_2 */
int Sys_RendermodeFailedToCr_2(int a1);
/* 004B0EB0 Sys_ResolveSymbol_2 */
int Sys_ResolveSymbol_2(int a1);
/* 004B0EC0 Sys_CheckHeap_2 */
int Sys_CheckHeap_2(int a1, int a2, int a3);
/* 004B0EE0 Sys_AllocateMemory_3 */
int Sys_AllocateMemory_3(int a1, int a2);
/* 004B0F30 Sys_FreeMemory_3 */
int Sys_FreeMemory_3(int a1);
/* 004B0F70 Sys_OpenFileStream_3 */
int Sys_OpenFileStream_3(void);
/* 004B0F80 Sys_ReadFileBlock_3 */
int Sys_ReadFileBlock_3(void);
/* 004B0F90 Sys_CloseFileStream_3 */
int Sys_CloseFileStream_3(void);
/* 004B0FD0 Sys_ExecuteBytecode_3 */
int Sys_ExecuteBytecode_3(int a1);
/* 004B1000 Sys_DispatchOpcode_3 */
int Sys_DispatchOpcode_3(int a1, int a2, int a3);
/* 004B1020 QFile_AliasResolve */
int QFile_AliasResolve(char * a1, void * a2, int a3);
/* 004B1180 Sys_PushStack_3 */
int Sys_PushStack_3(void);
/* 004B11A0 QFile_DeviceIndex */
int QFile_DeviceIndex(void * a1);
/* 004B1200 Sys_PopStack_3 */
int Sys_PopStack_3(void);
/* 004B1260 Sys_ResolveSymbol_3 */
int Sys_ResolveSymbol_3(void);
/* 004B1290 Sys_CheckHeap_3 */
int Sys_CheckHeap_3(int a1, int a2);
/* 004B12D0 Sys_AllocateMemory_4 */
int* Sys_AllocateMemory_4(void);
/* 004B12F0 Sys_FreeMemory_4 */
int Sys_FreeMemory_4(char * a1, void * a2);
/* 004B13A0 Sys_OpenFileStream_4 */
int Sys_OpenFileStream_4(char * a1);
/* 004B1420 Sys_IllegalDeviceNameInP */
int Sys_IllegalDeviceNameInP(void * a1, int a2, void * a3);
/* 004B1510 QFile_ReadWrite */
int* QFile_ReadWrite(void * a1, char * a2);
/* 004B1620 QFile_DeviceHandlerLookup */
int QFile_DeviceHandlerLookup(char * a1);
/* 004B1690 Sys_ReadFileBlock_4 */
void Sys_ReadFileBlock_4(int* a1);
/* 004B16D0 Resource_Unpack */
int Resource_Unpack(int* a1, int a2, int a3);
/* 004B1700 Sys_CloseFileStream_4 */
int Sys_CloseFileStream_4(int* a1, int a2, int a3);
/* 004B1730 Sys_ExecuteBytecode_4 */
int Sys_ExecuteBytecode_4(int* a1, int a2, int a3);
/* 004B1760 Sys_DispatchOpcode_4 */
int Sys_DispatchOpcode_4(int* a1);
/* 004B1780 Sys_PushStack_4 */
int Sys_PushStack_4(int* a1);
/* 004B17A0 Sys_PopStack_4 */
int Sys_PopStack_4(int* a1);
/* 004B17C0 Sys_ResolveSymbol_4 */
int Sys_ResolveSymbol_4(int* a1);
/* 004B17F0 Sys_CheckHeap_4 */
int Sys_CheckHeap_4(int* a1, int a2);
/* 004B1820 Sys_AllocateMemory_5 */
int Sys_AllocateMemory_5(int a1, void * a2);
/* 004B18B0 Resource_PackUnpack */
void * Resource_PackUnpack(void * a1, int* a2);
/* 004B19C0 Sys_FreeMemory_5 */
void ** Sys_FreeMemory_5(int a1);
/* 004B1A30 Sys_OpenFileStream_5 */
int Sys_OpenFileStream_5(void * a1);
/* 004B1A90 Sys_NoFilesLoadedAtAddre */
int* Sys_NoFilesLoadedAtAddre(int a1);
/* 004B1AC0 QScript_Cleanup */
int QScript_Cleanup(void * a1);
/* 004B1B90 Sys_ReadFileBlock_5 */
int Sys_ReadFileBlock_5(int a1, int a2);
/* 004B1BC0 Sys_CloseFileStream_5 */
int Sys_CloseFileStream_5(int a1);
/* 004B1BE0 Sys_ExecuteBytecode_5 */
int Sys_ExecuteBytecode_5(int a1, int a2);
/* 004B1C00 Sys_DispatchOpcode_5 */
int Sys_DispatchOpcode_5(int a1, int a2);
/* 004B1C20 Sys_PushStack_5 */
int Sys_PushStack_5(int a1, int a2);
/* 004B1C40 Sys_PopStack_5 */
int Sys_PopStack_5(int a1, int a2);
/* 004B1C60 Sys_ResolveSymbol_5 */
int Sys_ResolveSymbol_5(int a1, int a2);
/* 004B1C80 Sys_CheckHeap_5 */
int Sys_CheckHeap_5(int a1, int a2);
/* 004B1CA0 Sys_AllocateMemory_6 */
int Sys_AllocateMemory_6(int a1, int a2);
/* 004B1CC0 Sys_FreeMemory_6 */
int Sys_FreeMemory_6(int a1, int a2);
/* 004B1CE0 Sys_OpenFileStream_6 */
int Sys_OpenFileStream_6(int a1, int a2);
/* 004B1D00 Sys_ReadFileBlock_6 */
int Sys_ReadFileBlock_6(int a1, int a2);
/* 004B1D20 Sys_CloseFileStream_6 */
int Sys_CloseFileStream_6(int a1, int a2);
/* 004B1D40 Sys_ExecuteBytecode_6 */
int Sys_ExecuteBytecode_6(int a1, int a2);
/* 004B1D60 Sys_DispatchOpcode_6 */
int Sys_DispatchOpcode_6(int a1, int a2);
/* 004B1D80 Sys_PushStack_6 */
int Sys_PushStack_6(int a1, int a2);
/* 004B1DA0 Sys_PopStack_6 */
int Sys_PopStack_6(int a1, int a2);
/* 004B1DC0 Sys_ResolveSymbol_6 */
int Sys_ResolveSymbol_6(int a1, int a2);
/* 004B1DE0 Sys_CheckHeap_6 */
void Sys_CheckHeap_6(void);
/* 004B1E00 Sys_AllocateMemory_7 */
char * Sys_AllocateMemory_7(char * a1, int a2, char * a3);
/* 004B1E70 Sys_FreeMemory_7 */
char * Sys_FreeMemory_7(char * a1);
/* 004B1E90 Sys_OpenFileStream_7 */
char * Sys_OpenFileStream_7(char * a1, int a2, int a3);
/* 004B1EE0 Sys_ReadFileBlock_7 */
char * Sys_ReadFileBlock_7(char * a1, int a2, char * a3);
/* 004B1F30 Sys_CloseFileStream_7 */
int Sys_CloseFileStream_7(int a1, int a2);
/* 004B1FB0 Sys_ExecuteBytecode_7 */
void Sys_ExecuteBytecode_7(void);
/* 004B1FC0 Sys_DispatchOpcode_7 */
int Sys_DispatchOpcode_7(void * a1);
/* 004B1FF0 Sys_PushStack_7 */
int Sys_PushStack_7(void * a1);
/* 004B2070 Sys_PopStack_7 */
int Sys_PopStack_7(void * a1, int* a2, int a3, int a4);
/* 004B2180 Sys_Alloctexture */
int Sys_Alloctexture(void);
/* 004B2250 Sys_ResolveSymbol_7 */
int Sys_ResolveSymbol_7(void);
/* 004B22F0 Sys_CheckHeap_7 */
int Sys_CheckHeap_7(int* a1);
/* 004B2320 Sys_AllocateMemory_8 */
int Sys_AllocateMemory_8(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
/* 004B23B0 Sys_FreeMemory_8 */
int Sys_FreeMemory_8(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
/* 004B2450 Sys_OpenFileStream_8 */
int Sys_OpenFileStream_8(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
/* 004B24C0 Sys_SIsNotAValidTextureF */
int Sys_SIsNotAValidTextureF(int* a1, int a2, int* a3);
/* 004B25B0 Sys_ReadFileBlock_8 */
int Sys_ReadFileBlock_8(int a1, int a2);
/* 004B25F0 Sys_CloseFileStream_8 */
int Sys_CloseFileStream_8(void);
/* 004B2610 Sys_ExecuteBytecode_8 */
int Sys_ExecuteBytecode_8(int a1);
/* 004B2640 Sys_DispatchOpcode_8 */
int __fastcall Sys_DispatchOpcode_8(int a1);
/* 004B2670 Sys_PushStack_8 */
int __fastcall Sys_PushStack_8(int a1);
/* 004B26A0 Sys_PopStack_8 */
int Sys_PopStack_8(void);
/* 004B26B0 Sys_ResolveSymbol_8 */
int Sys_ResolveSymbol_8(void);
/* 004B26C0 Sys_CheckHeap_8 */
int Sys_CheckHeap_8(void);
/* 004B26E0 Sys_AllocateMemory_9 */
int Sys_AllocateMemory_9(void);
/* 004B26F0 Sys_FreeMemory_9 */
int Sys_FreeMemory_9(void);
/* 004B2700 Sys_OpenFileStream_9 */
int Sys_OpenFileStream_9(void);
/* 004B2710 Sys_ReadFileBlock_9 */
int Sys_ReadFileBlock_9(void);
/* 004B2720 Sys_CloseFileStream_9 */
int Sys_CloseFileStream_9(int a1);
/* 004B2740 Sys_ExecuteBytecode_9 */
int* Sys_ExecuteBytecode_9(int* a1);
/* 004B2760 Sys_DispatchOpcode_9 */
int80_t Sys_DispatchOpcode_9(float a1) __location("fp0");
/* 004B27D0 Sys_PushStack_9 */
int80_t Sys_PushStack_9(float a1) __location("fp0");
/* 004B2840 Sys_PopStack_9 */
int80_t Sys_PopStack_9(double a1) __location("fp0");
/* 004B28A0 Sys_ResolveSymbol_9 */
int80_t Sys_ResolveSymbol_9(double a1) __location("fp0");
/* 004B2900 Sys_CheckHeap_9 */
int Sys_CheckHeap_9(float* a1);
/* 004B2930 Sys_AllocateMemory_10 */
long double Sys_AllocateMemory_10(float* a1);
/* 004B2950 Sys_FreeMemory_10 */
long double Sys_FreeMemory_10(float* a1, float* a2);
/* 004B2980 Sys_OpenFileStream_10 */
long double Sys_OpenFileStream_10(float* a1, float* a2);
/* 004B29A0 Sys_ReadFileBlock_10 */
int Sys_ReadFileBlock_10(double* a1);
/* 004B29D0 Sys_CloseFileStream_10 */
long double Sys_CloseFileStream_10(double* a1);
/* 004B29F0 Sys_ExecuteBytecode_10 */
long double Sys_ExecuteBytecode_10(double* a1, double* a2);
/* 004B2A10 Sys_DispatchOpcode_10 */
long double Sys_DispatchOpcode_10(int* a1);
/* 004B2B30 Sys_PushStack_10 */
long double Sys_PushStack_10(float a1, float* a2);
/* 004B2C70 Sys_PopStack_10 */
int Sys_PopStack_10(int* a1, float* a2, float* a3, float* a4);
/* 004B2D00 Sys_ResolveSymbol_10 */
float* Sys_ResolveSymbol_10(float* a1, float* a2, float* a3);
/* 004B2D90 Sys_CheckHeap_10 */
float* Sys_CheckHeap_10(float* a1, float* a2, float* a3, float* a4, float* a5, int* a6);
/* 004B30C0 Sys_AllocateMemory_11 */
int Sys_AllocateMemory_11(double* a1, double a2);
/* 004B3100 Sys_FreeMemory_11 */
int Sys_FreeMemory_11(double* a1);
/* 004B3130 Sys_OpenFileStream_11 */
long double Sys_OpenFileStream_11(double* a1);
/* 004B3160 Sys_ReadFileBlock_11 */
long double Sys_ReadFileBlock_11(double* a1);
/* 004B3190 Sys_CloseFileStream_11 */
double* Sys_CloseFileStream_11(int a1, double* a2, double* a3);
/* 004B31F0 Sys_ExecuteBytecode_11 */
long double Sys_ExecuteBytecode_11(double* a1, double* a2);
/* 004B32B0 Sys_DispatchOpcode_11 */
long double Sys_DispatchOpcode_11(double* a1, double* a2);
/* 004B32F0 Sys_PushStack_11 */
long double Sys_PushStack_11(double* a1, double* a2);
/* 004B3320 Sys_PopStack_11 */
int Sys_PopStack_11(double* a1);
/* 004B3360 Sys_ResolveSymbol_11 */
int Sys_ResolveSymbol_11(double* a1, double* a2);
/* 004B33A0 Sys_CheckHeap_11 */
int Sys_CheckHeap_11(int a1, float* a2, float a3, float a4, float a5);
/* 004B34F0 Sys_AllocateMemory_12 */
int Sys_AllocateMemory_12(int a1, float* a2, float a3);
/* 004B3640 Sys_FreeMemory_12 */
int Sys_FreeMemory_12(int a1, float* a2, float a3);
/* 004B3790 Sys_OpenFileStream_12 */
int Sys_OpenFileStream_12(int a1, float* a2, float a3);
/* 004B38E0 Sys_ReadFileBlock_12 */
int Sys_ReadFileBlock_12(float* a1, float a2, float a3, float a4);
/* 004B3B60 Sys_CloseFileStream_12 */
int* Sys_CloseFileStream_12(int* a1, float a2);
/* 004B3BA0 Sys_ExecuteBytecode_12 */
float* Sys_ExecuteBytecode_12(float* a1, float a2);
/* 004B3BE0 Sys_DispatchOpcode_12 */
float* Sys_DispatchOpcode_12(float* a1, float a2);
/* 004B3C20 Sys_PushStack_12 */
float* Sys_PushStack_12(float* a1, float a2, int a3, int a4);
/* 004B3C50 Sys_Atan2UndefinedInOrig */
float* Sys_Atan2UndefinedInOrig(float* a1, float* a2, float* a3, float* a4);
/* 004B3EF0 Sys_PopStack_12 */
float* Sys_PopStack_12(float* a1, float a2, float a3);
/* 004B4010 Sys_ResolveSymbol_12 */
float Sys_ResolveSymbol_12(int a1, int* a2) __location("result");
/* 004B4390 Sys_ReadFileBlock_13 */
int Sys_ReadFileBlock_13(int a1, float a2);
/* 004B44D0 Sys_CloseFileStream_13 */
float* Sys_CloseFileStream_13(float a1, float* a2, float* a3, float* a4, float* a5);
/* 004B4570 Sys_ExecuteBytecode_13 */
long double Sys_ExecuteBytecode_13(float* a1, float* a2);
/* 004B45A0 Sys_DispatchOpcode_13 */
float* Sys_DispatchOpcode_13(float* a1, float a2, float a3, float a4);
/* 004B4660 Sys_PushStack_13 */
float* Sys_PushStack_13(float* a1, float* a2, float a3);
/* 004B46A0 Sys_PopStack_13 */
int Sys_PopStack_13(void);
/* 004B4720 Sys_ResolveSymbol_13 */
int* Sys_ResolveSymbol_13(int* a1);
/* 004B4740 Sys_CheckHeap_13 */
int Sys_CheckHeap_13(int* a1);
/* 004B4770 Sys_AllocateMemory_14 */
long double Sys_AllocateMemory_14(int* a1);
/* 004B47C0 Sys_FreeMemory_14 */
unsigned int Sys_FreeMemory_14(int* a1, int a2);
/* 004B47E0 Sys_OpenFileStream_14 */
int Sys_OpenFileStream_14(int* a1, int a2);
/* 004B4820 Sys_ReadFileBlock_14 */
int Sys_ReadFileBlock_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9);
/* 004B4910 Sys_CloseFileStream_14 */
int Sys_CloseFileStream_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10);
/* 004B4A00 Sys_ExecuteBytecode_14 */
int Sys_ExecuteBytecode_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10);
/* 004B4AF0 Sys_DispatchOpcode_14 */
int Sys_DispatchOpcode_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11);
/* 004B4BE0 Sys_PushStack_14 */
int Sys_PushStack_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23);
/* 004B4E00 Sys_ResolveSymbol_14 */
int Sys_ResolveSymbol_14(int* a1, int a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9);
/* 004B4F40 Sys_CheckHeap_14 */
int Sys_CheckHeap_14(int* a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10);
/* 004B50B0 Sys_AllocateMemory_15 */
int Sys_AllocateMemory_15(int* a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10, int a11);
/* 004B51F0 Sys_FreeMemory_15 */
int Sys_FreeMemory_15(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, float a10, float a11, float a12, int a13, int a14, int a15);
/* 004B53B0 Qsprite_Register4Az */
int Qsprite_Register4Az(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, float a10, float a11, float a12, int a13, int a14, int a15, int a16, int a17);
/* 004B5560 Sys_CloseFileStream_15 */
int Sys_CloseFileStream_15(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, float a20, int a21, int a22, int a23, int a24, int a25);
/* 004B5730 Sys_ExecuteBytecode_15 */
int Sys_ExecuteBytecode_15(float a1, float a2, int a3, float a4, float a5, int a6, float a7, float a8, float a9, float a10, float a11, float a12, int a13, int a14, int a15);
/* 004B5860 Sys_DispatchOpcode_15 */
float Sys_DispatchOpcode_15(float* a1, float a2, float a3, float a4, int a5, float a6, float a7, float a8, int a9, float a10, float a11, float a12, int a13, int a14) __location("result");
/* 004B59A0 Sys_QvertexRegisterstrip */
int Sys_QvertexRegisterstrip(void);
/* 004B59D0 Sys_PushStack_15 */
int Sys_PushStack_15(void);
/* 004B59F0 Sys_PopStack_15 */
int* Sys_PopStack_15(char * a1, int a2, int* a3, int a4, int a5, int* a6);
/* 004B5AF0 Sys_ResolveSymbol_15 */
int Sys_ResolveSymbol_15(char * a1, char * a2);
/* 004B5B30 Sys_CheckHeap_15 */
unsigned int Sys_CheckHeap_15(char * a1);
/* 004B5B60 Sys_AllocateMemory_16 */
int Sys_AllocateMemory_16(void * a1);
/* 004B5B90 Is_ResourceLoaded */
int Is_ResourceLoaded(void * a1, void ** a2);
/* 004B5C90 Sys_FreeMemory_16 */
int Sys_FreeMemory_16(int* a1);
/* 004B5D80 Sys_OpenFileStream_16 */
void * Sys_OpenFileStream_16(void * a1, int a2, void * a3);
/* 004B5E70 Sys_ReadFileBlock_16 */
int Sys_ReadFileBlock_16(void);
/* 004B5EC0 Sys_CloseFileStream_16 */
int Sys_CloseFileStream_16(void);
/* 004B5EE0 Sys_ExecuteBytecode_16 */
int* Sys_ExecuteBytecode_16(void);
/* 004B5F00 Resource_Load */
int* __convention Resource_Load("regparm")(int a1, int a2, void * a3, int* a4);
/* 004B5F80 Sys_Resource */
int* Sys_Resource(char * a1, int* a2, void * a3);
/* 004B60F0 Sys_ErrorInResourceFileS */
int Sys_ErrorInResourceFileS(int a1, void * a2, void * a3, int* a4);
/* 004B6380 Resource_Unload */
int Resource_Unload(int* a1);
/* 004B63D0 Resource_Flush */
int Resource_Flush(int a1);
/* 004B6420 Sys_DispatchOpcode_16 */
int* Sys_DispatchOpcode_16(char * a1, int a2, int* a3);
/* 004B6440 Sys_PushStack_16 */
int Sys_PushStack_16(int* a1, void * a2);
/* 004B6490 Sys_PopStack_16 */
int Sys_PopStack_16(FILETIME* a1, FILETIME* a2);
/* 004B64B0 Sys_ResolveSymbol_16 */
int Sys_ResolveSymbol_16(int* a1);
/* 004B64E0 Sys_CheckHeap_16 */
int Sys_CheckHeap_16(void * a1);
/* 004B64F0 Sys_AllocateMemory_17 */
int Sys_AllocateMemory_17(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
/* 004B6540 Sys_FreeMemory_17 */
int Sys_FreeMemory_17(void * a1, int a2, int a3, short a4, short a5, short a6, short a7, short a8, int a9, float a10, float a11, float a12, float a13);
/* 004B65E0 Sys_OpenFileStream_17 */
int Sys_OpenFileStream_17(int* a1, char a2, short a3, short a4, short a5, short a6, short a7, int a8, int a9, int a10, int a11);
/* 004B66A0 Sys_ReadFileBlock_17 */
int Sys_ReadFileBlock_17(int* a1);
/* 004B6720 Sys_IlfFileCorruptS */
int* Sys_IlfFileCorruptS(int* a1, int* a2);
/* 004B6CE0 Sys_CloseFileStream_17 */
int Sys_CloseFileStream_17(void * a1);
/* 004B6D00 Sys_ExecuteBytecode_17 */
int Sys_ExecuteBytecode_17(void * a1);
/* 004B6D20 Sys_DispatchOpcode_17 */
int Sys_DispatchOpcode_17(void * a1);
/* 004B6D40 Sys_PushStack_17 */
int Sys_PushStack_17(void * a1);
/* 004B6D60 Sys_PopStack_17 */
int* Sys_PopStack_17(void * a1, int a2);
/* 004B6DB0 Sys_ResolveSymbol_17 */
int* Sys_ResolveSymbol_17(int* a1);
/* 004B6E30 Sys_CheckHeap_17 */
int Sys_CheckHeap_17(int* a1);
/* 004B6E60 Sys_AllocateMemory_18 */
int Sys_AllocateMemory_18(int* a1);
/* 004B6E70 Picture_GetWidth */
int Picture_GetWidth(int* a1);
/* 004B6E80 Picture_GetHeight */
int Picture_GetHeight(int* a1);
/* 004B6E90 Sys_FreeMemory_18 */
void * Sys_FreeMemory_18(int* a1, char * a2);
/* 004B6EC0 Sys_OpenFileStream_18 */
int** Sys_OpenFileStream_18(void * a1, int a2, int a3, char * a4);
/* 004B6F30 Sys_ReadFileBlock_18 */
int Sys_ReadFileBlock_18(int* a1);
/* 004B6F50 Sys_CloseFileStream_18 */
int Sys_CloseFileStream_18(int* a1);
/* 004B6F90 Sys_ExecuteBytecode_18 */
int Sys_ExecuteBytecode_18(int a1, float* a2);
/* 004B7000 Sys_DispatchOpcode_18 */
int* Sys_DispatchOpcode_18(int* a1);
/* 004B7030 Sys_PushStack_18 */
int Sys_PushStack_18(int* a1);
/* 004B7050 Sys_PopStack_18 */
int Sys_PopStack_18(void * a1, int a2);
/* 004B70F0 Sys_ResolveSymbol_18 */
int Sys_ResolveSymbol_18(void * a1);
/* 004B7160 Sys_CheckHeap_18 */
int Sys_CheckHeap_18(void);
/* 004B72E0 Sys_AllocateMemory_19 */
int Sys_AllocateMemory_19(int a1, int a2, int a3);
/* 004B7330 Sys_FreeMemory_19 */
int* Sys_FreeMemory_19(int a1);
/* 004B7360 Sys_OpenFileStream_19 */
int** Sys_OpenFileStream_19(int a1);
/* 004B73A0 Sys_ReadFileBlock_19 */
int Sys_ReadFileBlock_19(int a1);
/* 004B73C0 Sys_Sortrender */
int Sys_Sortrender(void);
/* 004B73E0 Sys_CloseFileStream_19 */
int Sys_CloseFileStream_19(void);
/* 004B73F0 Sys_ExecuteBytecode_19 */
int* Sys_ExecuteBytecode_19(int a1);
/* 004B7430 Sys_DispatchOpcode_19 */
int Sys_DispatchOpcode_19(void * a1, int a2);
/* 004B7450 Sys_PushStack_19 */
int Sys_PushStack_19(int a1, int a2);
/* 004B7470 Sys_PopStack_19 */
void * Sys_PopStack_19(void * a1);
/* 004B7490 Sys_ResolveSymbol_19 */
void * Sys_ResolveSymbol_19(void * a1);
/* 004B74D0 Sys_CheckHeap_19 */
void * Sys_CheckHeap_19(void * a1, void * a2);
/* 004B7540 Sys_AllocateMemory_20 */
void Sys_AllocateMemory_20(int* a1, int* a2, void * a3);
/* 004B7570 Sys_FreeMemory_20 */
int Sys_FreeMemory_20(void * a1);
/* 004B7580 Sys_OpenFileStream_20 */
int Sys_OpenFileStream_20(int* a1);
/* 004B7590 Sys_ReadFileBlock_20 */
int* Sys_ReadFileBlock_20(int* a1, int a2);
/* 004B75C0 Sys_CloseFileStream_20 */
int* Sys_CloseFileStream_20(void * a1, void * a2);
/* 004B7630 Sys_DispatchOpcode_20 */
int* Sys_DispatchOpcode_20(int a1, int a2, void * a3);
/* 004B76D0 Sys_PushStack_20 */
int Sys_PushStack_20(void * a1);
/* 004B76F0 Sys_PopStack_20 */
int Sys_PopStack_20(void * a1, int a2, int a3, char a4);
/* 004B7710 Sys_ResolveSymbol_20 */
void * Sys_ResolveSymbol_20(void * a1, int a2, int a3);
/* 004B7730 Sys_CheckHeap_20 */
void * Sys_CheckHeap_20(int* a1, void * a2);
/* 004B77F0 Sys_AllocateMemory_21 */
void * Sys_AllocateMemory_21(int* a1, char * a2, int a3, void * a4);
/* 004B7850 Sys_FreeMemory_21 */
char * Sys_FreeMemory_21(char * a1, void * a2);
/* 004B7930 Sys_OpenFileStream_21 */
int Sys_OpenFileStream_21(float a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10);
/* 004B7BF0 Sys_ReadFileBlock_21 */
int Sys_ReadFileBlock_21(void * a1);
/* 004B7C20 Sys_CloseFileStream_21 */
int Sys_CloseFileStream_21(void * a1);
/* 004B7C40 Sys_ExecuteBytecode_21 */
int Sys_ExecuteBytecode_21(void * a1);
/* 004B7C80 Sys_Allocpalette */
int Sys_Allocpalette(void);
/* 004B7CC0 Sys_DispatchOpcode_21 */
int Sys_DispatchOpcode_21(void);
/* 004B7CF0 Sys_PushStack_21 */
int Sys_PushStack_21(int* a1, int a2, int a3);
/* 004B7D30 Sys_PopStack_21 */
int Sys_PopStack_21(int* a1);
/* 004B7D50 Sys_SIsNotAValidPaletteF */
int Sys_SIsNotAValidPaletteF(int* a1, int* a2);
/* 004B7DB0 Sys_ResolveSymbol_21 */
int Sys_ResolveSymbol_21(int* a1);
/* 004B7DF0 Sys_CheckHeap_21 */
int Sys_CheckHeap_21(int* a1);
/* 004B7E00 Sys_AllocateMemory_22 */
int Sys_AllocateMemory_22(int* a1);
/* 004B7E10 Sys_FreeMemory_22 */
int Sys_FreeMemory_22(char * a1);
/* 004B7E80 SymbolRegister_Int16 */
void * SymbolRegister_Int16(int* a1, int a2);
/* 004B7EA0 Sys_OpenFileStream_22 */
int Sys_OpenFileStream_22(int a1, int* a2);
/* 004B7EE0 SymbolRegister_Bool8 */
void * SymbolRegister_Bool8(int* a1, int a2);
/* 004B7F00 Sys_ReadFileBlock_22 */
int Sys_ReadFileBlock_22(int a1, int a2);
/* 004B7F40 Sys_CloseFileStream_22 */
void * Sys_CloseFileStream_22(int* a1, int a2);
/* 004B7F60 Sys_ExecuteBytecode_22 */
int Sys_ExecuteBytecode_22(int a1, int a2);
/* 004B7FA0 SymbolRegister_Int32 */
void * SymbolRegister_Int32(int* a1, int a2);
/* 004B7FC0 SymbolRegister_Real32 */
void * SymbolRegister_Real32(int* a1, int a2);
/* 004B7FE0 Sys_DispatchOpcode_22 */
int Sys_DispatchOpcode_22(int a1, double* a2);
/* 004B8030 Sys_PushStack_22 */
void * Sys_PushStack_22(int* a1, int a2, int a3);
/* 004B8060 Sys_PopStack_22 */
int Sys_PopStack_22(int a1, int a2);
/* 004B80A0 Game_DataSymbolRemoveThunk */
int Game_DataSymbolRemoveThunk(char * a1);
/* 004B80B0 Qvm_Load */
int* Qvm_Load(void * a1);
/* 004B83D0 Qvm_Cleanup */
int Qvm_Cleanup(int* a1);
/* 004B8410 Qsc_Compile */
int Qsc_Compile(void * a1);
/* 004B85B0 Qvm_Execute */
int Qvm_Execute(void * a1);
/* 004B86E0 Sys_ResolveSymbol_22 */
char * Sys_ResolveSymbol_22(int a1);
/* 004B8770 Sys_CheckHeap_22 */
int Sys_CheckHeap_22(int a1);
/* 004B8810 TaskType_Set */
void * TaskType_Set(int* a1, int a2);
/* 004B8830 Sys_AllocateMemory_23 */
int Sys_AllocateMemory_23(int a1, int a2);
/* 004B8870 Sys_FreeMemory_23 */
void * Sys_FreeMemory_23(int* a1, int a2);
/* 004B8890 Game_DefineOptions */
void * Game_DefineOptions(int* a1, int a2, int a3, int a4);
/* 004B88C0 Sys_OpenFileStream_23 */
void * Sys_OpenFileStream_23(int* a1, int a2, int a3, int a4);
/* 004B88F0 Sys_ReadFileBlock_23 */
void * Sys_ReadFileBlock_23(int* a1, int a2, int a3, int a4);
/* 004B8920 Sys_CloseFileStream_23 */
int Sys_CloseFileStream_23(char * a1);
/* 004B8930 Script_SetSymbolContext */
int Script_SetSymbolContext(char * a1, int a2);
/* 004B8970 Sys_ExecuteBytecode_23 */
int Sys_ExecuteBytecode_23(int a1);
/* 004B8980 Sys_ScriptStackUnderflow */
int Sys_ScriptStackUnderflow(int a1);
/* 004B89C0 Sys_ScriptStackOverflow */
int Sys_ScriptStackOverflow(void);
/* 004B89F0 Sys_DispatchOpcode_23 */
int Sys_DispatchOpcode_23(int a1);
/* 004B8A00 Sys_PushStack_23 */
int Sys_PushStack_23(int a1);
/* 004B8A10 Sys_PopStack_23 */
int Sys_PopStack_23(int a1);
/* 004B8A20 Script_GetArg */
int Script_GetArg(float a1, int a2);
/* 004B8A50 Profile_ValueSet */
int Profile_ValueSet(float a1, float a2);
/* 004B8A80 Sys_ResolveSymbol_23 */
char * Sys_ResolveSymbol_23(float a1, int a2, char * a3, char * a4);
/* 004B8AD0 Sys_CheckHeap_23 */
int Sys_CheckHeap_23(void * a1, int a2);
/* 004B8B00 Sys_AllocateMemory_24 */
int Sys_AllocateMemory_24(int* a1, int a2);
/* 004B8B20 Sys_False */
int Sys_False(void);
/* 004B8C10 Break_Script */
int Break_Script(int a1);
/* 004B8C60 Script_SetWarningLevel */
int Script_SetWarningLevel(int a1, float a2);
/* 004B8CC0 Sys_FreeMemory_24 */
int Sys_FreeMemory_24(void);
/* 004B8CE0 Sys_SyntaxErrorInStringE */
char * Sys_SyntaxErrorInStringE(char * a1, short* a2, char * a3);
/* 004B9040 Sys_OpenFileStream_24 */
int Sys_OpenFileStream_24(long double a1, char * a2, void * a3);
/* 004B9120 Sys_ReadFileBlock_24 */
int Sys_ReadFileBlock_24(char * a1);
/* 004B9660 Sys_DispatchOpcode_24 */
void Sys_DispatchOpcode_24(long double a1, long double a2, int a3);
/* 004B9BE0 Sys_PushStack_24 */
void Sys_PushStack_24(char * a1);
/* 004B9CA0 Sys_PopStack_24 */
int Sys_PopStack_24(int* a1, char ** a2);
/* 004B9CD0 Sys_ResolveSymbol_24 */
int Sys_ResolveSymbol_24(int* a1, char ** a2, int a3, int a4);
/* 004BA340 Sys_CheckHeap_24 */
int Sys_CheckHeap_24(int a1);
/* 004BA380 Sys_AllocateMemory_25 */
int Sys_AllocateMemory_25(int a1);
/* 004BA3D0 Sys_ScriptInternalErrorU */
int Sys_ScriptInternalErrorU(int a1);
/* 004BA4C0 Sys_TooManyArgumentsToFu */
int* Sys_TooManyArgumentsToFu(int* a1, void * a2);
/* 004BA880 Sys_ScriptInternalErrorI */
char * Sys_ScriptInternalErrorI(int a1, int* a2, int a3, char * a4);
/* 004BAA90 Sys_FreeMemory_25 */
int* Sys_FreeMemory_25(int a1);
/* 004BAAC0 Q_TaskHashTableSet */
void * Q_TaskHashTableSet(int* a1, int a2, int a3, int a4, int a5, int a6, int a7);
/* 004BAB30 Sys_UndefinedSymbolS */
int Sys_UndefinedSymbolS(char * a1);
/* 004BAB80 Sys_ReadFileBlock_25 */
int Sys_ReadFileBlock_25(char * a1, int* a2);
/* 004BABA0 Sys_CloseFileStream_25 */
int Sys_CloseFileStream_25(void);
/* 004BABB0 Sys_ExecuteBytecode_25 */
void ** Sys_ExecuteBytecode_25(char * a1);
/* 004BAC30 Sys_DispatchOpcode_25 */
void * Sys_DispatchOpcode_25(int a1);
/* 004BACA0 Sys_PushStack_25 */
int Sys_PushStack_25(int* a1);
/* 004BACD0 Sys_PopStack_25 */
int Sys_PopStack_25(void);
/* 004BAD40 Sys_ResolveSymbol_25 */
int Sys_ResolveSymbol_25(void);
/* 004BADA0 Sys_CheckHeap_25 */
int Sys_CheckHeap_25(int* a1);
/* 004BADC0 Sys_AllocateMemory_26 */
int* Sys_AllocateMemory_26(void * a1, int a2);
/* 004BAE00 Sys_DuplicateLabelS */
int* Sys_DuplicateLabelS(void * a1, int a2);
/* 004BAF30 Sys_FreeMemory_26 */
int Sys_FreeMemory_26(char * a1);
/* 004BAFA0 Sys_OpenFileStream_26 */
int __convention Sys_OpenFileStream_26("regparm")(int a1, int a2, int a3, void * a4, char * a5);
/* 004BAFD0 Sys_ReadFileBlock_26 */
void ** Sys_ReadFileBlock_26(void * a1, char * a2);
/* 004BB030 Sys_CloseFileStream_26 */
int Sys_CloseFileStream_26(void * a1, void * a2);
/* 004BB110 Sys_ExecuteBytecode_26 */
char * Sys_ExecuteBytecode_26(int a1, void * a2);
/* 004BB180 Sys_DispatchOpcode_26 */
int Sys_DispatchOpcode_26(int* a1, char * a2);
/* 004BB240 Sys_PushStack_26 */
int Sys_PushStack_26(void * a1, int* a2);
/* 004BB270 QScript_Assemble */
int QScript_Assemble(void * a1, void * a2);
/* 004BBC30 Log_Add */
int Log_Add(char * a1);
/* 004BBC80 Sys_ResolveSymbol_26 */
int Sys_ResolveSymbol_26(void);
/* 004BBCB0 QScript_ParseAndAssemble */
int QScript_ParseAndAssemble(void * a1, void * a2);
/* 004BBE90 Sys_CheckHeap_26 */
int Sys_CheckHeap_26(char * a1);
/* 004BBEF0 Sys_AllocateMemory_27 */
int Sys_AllocateMemory_27(char * a1);
/* 004BBF40 Sys_FreeMemory_27 */
int Sys_FreeMemory_27(int a1, int* a2);
/* 004BBF60 Sys_OpenFileStream_27 */
int Sys_OpenFileStream_27(int* a1);
/* 004BBF80 Sys_InternalErrorUnknown */
int Sys_InternalErrorUnknown(int* a1, int* a2);
/* 004BC2A0 Sys_ReadFileBlock_27 */
int Sys_ReadFileBlock_27(char * a1, int a2, int a3);
/* 004BC2C0 Sys_CloseFileStream_27 */
int Sys_CloseFileStream_27(int* a1, int a2);
/* 004BC2F0 Sys_UnknownExpressionTyp */
void Sys_UnknownExpressionTyp(int* a1, char * a2);
/* 004BC770 Sys_ExecuteBytecode_27 */
int Sys_ExecuteBytecode_27(int* a1);
/* 004BC790 Sys_DispatchOpcode_27 */
int Sys_DispatchOpcode_27(int* a1, char * a2);
/* 004BC880 Sys_PopStack_27 */
int Sys_PopStack_27(int* a1, int a2);
/* 004BC8D0 Sys_ResolveSymbol_27 */
int Sys_ResolveSymbol_27(int* a1, int a2, int a3);
/* 004BC920 Sys_CheckHeap_27 */
int Sys_CheckHeap_27(void);
/* 004BC960 Sys_UnknownDataType */
int Sys_UnknownDataType(void * a1);
/* 004BCAB0 Sys_AllocateMemory_28 */
int __convention Sys_AllocateMemory_28("regparm")(int a1, int a2, int a3, float a4, int a5);
/* 004BCAE0 Sys_UnknownDataType_2 */
int Sys_UnknownDataType_2(char * a1, int a2, float a3, int a4, int a5);
/* 004BCC00 Sys_FreeMemory_28 */
int Sys_FreeMemory_28(char * a1, int* a2, int* a3, int* a4);
/* 004BCCC0 Sys_UnknownDataType_3 */
int Sys_UnknownDataType_3(void * a1, int* a2, int* a3, int* a4);
/* 004BCD90 Sys_OpenFileStream_28 */
int Sys_OpenFileStream_28(char * a1, int* a2);
/* 004BCE40 Sys_ReadFileBlock_28 */
int Sys_ReadFileBlock_28(void * a1, int a2, int a3);
/* 004BCEC0 Sys_CloseFileStream_28 */
int Sys_CloseFileStream_28(int* a1, int* a2, float* a3);
/* 004BCFD0 Sys_ExecuteBytecode_28 */
int Sys_ExecuteBytecode_28(int* a1);
/* 004BD010 Sys_DispatchOpcode_28 */
long double __convention Sys_DispatchOpcode_28("regparm")(int a1, int a2, float a3, float a4, int a5);
/* 004BD040 Sys_PushStack_28 */
char * Sys_PushStack_28(float a1, int a2, char * a3, int a4);
/* 004BD070 Sys_PopStack_28 */
void Sys_PopStack_28(void);
/* 004BD080 Sys_UndefinedError */
int Sys_UndefinedError(int* a1);
/* 004BD220 Sys_ResolveSymbol_28 */
void ** Sys_ResolveSymbol_28(int* a1, int a2, int a3);
/* 004BD380 Sys_CheckHeap_28 */
int Sys_CheckHeap_28(void * a1);
/* 004BD3D0 Sys_AllocateMemory_29 */
int Sys_AllocateMemory_29(int a1, int a2, int a3);
/* 004BD3F0 Sys_FreeMemory_29 */
int Sys_FreeMemory_29(int a1, int a2, int a3, int a4);
/* 004BD430 Sys_OpenFileStream_29 */
int Sys_OpenFileStream_29(void);
/* 004BD860 Sys_ReadFileBlock_29 */
int Sys_ReadFileBlock_29(void * a1);
/* 004BD880 Sys_CloseFileStream_29 */
void * Sys_CloseFileStream_29(int* a1);
/* 004BD9C0 Sys_ExecuteBytecode_29 */
void * Sys_ExecuteBytecode_29(void * a1);
/* 004BD9E0 Sys_DispatchOpcode_29 */
void * Sys_DispatchOpcode_29(void * a1);
/* 004BDA00 Sys_PushStack_29 */
int Sys_PushStack_29(void * a1, int a2);
/* 004BDA30 Sys_PopStack_29 */
void * Sys_PopStack_29(void * a1, float a2);
/* 004BDA60 Sys_ResolveSymbol_29 */
void * Sys_ResolveSymbol_29(int a1);
/* 004BE620 Sys_CheckHeap_29 */
int Sys_CheckHeap_29(int* a1, int* a2, int* a3, float* a4, float* a5);
/* 004BE810 Sys_AllocateMemory_30 */
int Sys_AllocateMemory_30(void * a1);
/* 004BE830 Sys_FreeMemory_30 */
int Sys_FreeMemory_30(void * a1);
/* 004BE850 Sys_OpenFileStream_30 */
int Sys_OpenFileStream_30(void * a1);
/* 004BE870 Sys_InternalError */
int Sys_InternalError(int* a1);
/* 004BE8B0 Sys_InternalError_2 */
int Sys_InternalError_2(int* a1);
/* 004BE8F0 Sys_InternalError_3 */
int Sys_InternalError_3(int* a1);
/* 004BE950 Sys_ReadFileBlock_30 */
int Sys_ReadFileBlock_30(void * a1, int a2);
/* 004BE9A0 Sys_CloseFileStream_30 */
int Sys_CloseFileStream_30(int* a1);
/* 004BE9D0 Sys_UnhandledOpcode */
int Sys_UnhandledOpcode(int* a1);
/* 004BEA30 Sys_UnhandledOpcode_2 */
char * Sys_UnhandledOpcode_2(int* a1);
/* 004BEC10 Sys_ExecuteBytecode_30 */
int Sys_ExecuteBytecode_30(void * a1, int a2);
/* 004BEC40 Sys_DispatchOpcode_30 */
int Sys_DispatchOpcode_30(void * a1, int a2);
/* 004BEF60 Sys_PushStack_30 */
int* Sys_PushStack_30(int* a1, int a2, int a3, int a4);
/* 004BEFC0 Sys_PopStack_30 */
int Sys_PopStack_30(void * a1);
/* 004BF1C0 Sys_ResolveSymbol_30 */
int* Sys_ResolveSymbol_30(int* a1, int a2, int a3);
/* 004BF1E0 Sys_CheckHeap_30 */
int Sys_CheckHeap_30(int a1);
/* 004BF1F0 Sys_UnexpectedEndOfFile */
int Sys_UnexpectedEndOfFile(int* a1, void ** a2);
/* 004BF390 Sys_AllocateMemory_31 */
int Sys_AllocateMemory_31(int* a1);
/* 004BF3A0 Sys_While */
int Sys_While(void * a1);
/* 004BF580 Sys_SyntaxErrorInLineD */
int Sys_SyntaxErrorInLineD(int* a1, void ** a2);
/* 004BF620 Sys_UnexpectedEndOfFile_2 */
int Sys_UnexpectedEndOfFile_2(int* a1, int* a2);
/* 004BF850 Sys_OpenFileStream_31 */
int Sys_OpenFileStream_31(int* a1, int** a2);
/* 004BF8F0 Sys_UnknownBlockType */
void Sys_UnknownBlockType(void * a1);
/* 004BFA80 Sys_UnknownBlockType_2 */
int Sys_UnknownBlockType_2(void * a1);
/* 004BFBE0 Sys_ReadFileBlock_31 */
void * Sys_ReadFileBlock_31(void * a1, void * a2);
/* 004BFC70 Sys_CloseFileStream_31 */
int Sys_CloseFileStream_31(int* a1, int* a2);
/* 004C0170 DynObj_FindSymbol */
int DynObj_FindSymbol(void * a1);
/* 004C01D0 DynObj_InsertHashItem */
int DynObj_InsertHashItem(void * a1);
/* 004C0200 Script_BufInit */
int* Script_BufInit(int* a1, int a2, int a3, int a4);
/* 004C0230 DynObj_LookupHashItem */
int DynObj_LookupHashItem(int* a1);
/* 004C0240 DynObj_CreateMagicObject */
int DynObj_CreateMagicObject(int* a1);
/* 004C0250 DynObj_ParseConfigFile */
int DynObj_ParseConfigFile(void);
/* 004C0260 DynObj_UpdateDynTree */
int DynObj_UpdateDynTree(int* a1, int a2, int a3);
/* 004C02C0 DynObj_LinkDynamicCube */
int DynObj_LinkDynamicCube(int* a1, int a2, int a3);
/* 004C0360 DynObj_RemoveSymbol */
int* DynObj_RemoveSymbol(int a1);
/* 004C03C0 DynObj_RegisterSymbol_2 */
int DynObj_RegisterSymbol_2(int* a1);
/* 004C03F0 DynObj_FindSymbol_2 */
void DynObj_FindSymbol_2(int* a1);
/* 004C0460 Symbol_Remove */
int Symbol_Remove(int* a1, int* a2);
/* 004C04B0 DynObj_InsertHashItem_2 */
unsigned int DynObj_InsertHashItem_2(int* a1, int** a2, char * a3);
/* 004C0530 DynObj_LookupHashItem_2 */
unsigned int DynObj_LookupHashItem_2(char * a1, int a2);
/* 004C0560 Symbol_CheckRegister */
int Symbol_CheckRegister(int* a1, int* a2, int a3);
/* 004C0620 DynObj_CreateMagicObject_2 */
int DynObj_CreateMagicObject_2(int* a1, int* a2, char * a3);
/* 004C0660 DynObj_ParseConfigFile_2 */
int* DynObj_ParseConfigFile_2(int* a1);
/* 004C0680 DynObj_UpdateDynTree_2 */
void * DynObj_UpdateDynTree_2(void * a1, char * a2, int a3, int a4);
/* 004C0720 DynObj_LinkDynamicCube_2 */
int* DynObj_LinkDynamicCube_2(int* a1, int a2, int a3);
/* 004C0750 DynObj_RemoveSymbol_2 */
void * DynObj_RemoveSymbol_2(void * a1);
/* 004C0780 DynObj_RegisterSymbol_3 */
int __convention DynObj_RegisterSymbol_3("regparm")(int a1, int a2, int a3, void * a4, int* a5);
/* 004C08C0 DynObj_FindSymbol_3 */
int DynObj_FindSymbol_3(char * a1);
/* 004C0900 DynObj_InsertHashItem_3 */
int DynObj_InsertHashItem_3(void);
/* 004C0A10 DynObj_LookupHashItem_3 */
int DynObj_LookupHashItem_3(int* a1, int* a2);
/* 004C0E60 DynObj_CreateMagicObject_3 */
int DynObj_CreateMagicObject_3(int* a1, int* a2, char a3);
/* 004C0F80 DynObj_ParseConfigFile_3 */
void ** DynObj_ParseConfigFile_3(void ** a1, int* a2);
/* 004C10E0 DynObj_UpdateDynTree_3 */
int DynObj_UpdateDynTree_3(void);
/* 004C11F0 DynObj_LinkDynamicCube_3 */
int DynObj_LinkDynamicCube_3(int* a1);
/* 004C1270 DynObj_RemoveSymbol_3 */
int DynObj_RemoveSymbol_3(float a1, int* a2);
/* 004C1530 DynObj_RegisterSymbol_4 */
int DynObj_RegisterSymbol_4(void * a1, int a2);
/* 004C1560 DynObj_FindSymbol_4 */
int DynObj_FindSymbol_4(int* a1, char * a2);
/* 004C1600 DynObj_InsertHashItem_4 */
void * DynObj_InsertHashItem_4(int* a1, int* a2);
/* 004C1780 AnimSound_LoadParameters */
void AnimSound_LoadParameters(void);
/* 004C1790 DynObj_QtasklistIsFull */
int* DynObj_QtasklistIsFull(int* a1, int a2);
/* 004C17C0 DynObj_TryingToRemoveUnrigi */
int DynObj_TryingToRemoveUnrigi(int* a1, int a2);
/* 004C1800 DynObj_LookupHashItem_4 */
int* DynObj_LookupHashItem_4(int a1);
/* 004C1830 DynObj_CreateMagicObject_4 */
int DynObj_CreateMagicObject_4(void * a1);
/* 004C1840 RigidDynCubeObj_Setup */
int* RigidDynCubeObj_Setup(void * a1, int* a2);
/* 004C2F90 DynObj_ParseConfigFile_4 */
int DynObj_ParseConfigFile_4(int* a1);
/* 004C3010 RigidDynCubeObj_Action */
void RigidDynCubeObj_Action(int* a1, float a2);
/* 004C31F0 RigidDynCubeObj_Cleanup */
void * RigidDynCubeObj_Cleanup(void);
/* 004C3440 DynObj_UpdateDynTree_4 */
void DynObj_UpdateDynTree_4(void);
/* 004C3450 RigidDynCubeObj_Init */
unsigned int RigidDynCubeObj_Init(void);
/* 004C35F0 RigidDynCubeObj_OnEvent */
void * RigidDynCubeObj_OnEvent(void * a1, int* a2);
/* 004C4520 Define_MagicObj */
int Define_MagicObj(int a1, float a2);
/* 004C4660 RigidDynCubeObj_Cleanup_2 */
void RigidDynCubeObj_Cleanup_2(int* a1, float a2);
/* 004C4780 RigidDynCubeObj_Cleanup_3 */
int RigidDynCubeObj_Cleanup_3(float a1, double* a2);
/* 004C4820 DynObj_FindSymbol_5 */
unsigned int DynObj_FindSymbol_5(void);
/* 004C48C0 DynObj_LookupHashItem_5 */
int DynObj_LookupHashItem_5(void);
/* 004C48D0 DynObj_CreateMagicObject_5 */
int DynObj_CreateMagicObject_5(void * a1, int a2);
/* 004C48E0 Rigid_DyncubeObjRead */
char * Rigid_DyncubeObjRead(char * a1);
/* 004C4930 Magic_ObjLoad */
int Magic_ObjLoad(void * a1);
/* 004C4950 Car_GunCreate */
int* Car_GunCreate(void * a1, void * a2, int a3);
/* 004C56D0 DynObj_RemoveSymbol_5 */
int DynObj_RemoveSymbol_5(void);
/* 004C56E0 DynObj_RegisterSymbol_6 */
int DynObj_RegisterSymbol_6(void);
/* 004C56F0 DynObj_FindSymbol_6 */
int DynObj_FindSymbol_6(void);
/* 004C5700 DynObj_InsertHashItem_6 */
int DynObj_InsertHashItem_6(void);
/* 004C5710 DynObj_LookupHashItem_6 */
int DynObj_LookupHashItem_6(int a1, void * a2, int a3);
/* 004C5800 DynObj_CreateMagicObject_6 */
int DynObj_CreateMagicObject_6(void);
/* 004C5810 DynObj_ParseConfigFile_6 */
int DynObj_ParseConfigFile_6(void);
/* 004C5830 DynObj_UpdateDynTree_6 */
int DynObj_UpdateDynTree_6(void);
/* 004C5870 DynObj_LinkDynamicCube_6 */
int DynObj_LinkDynamicCube_6(void);
/* 004C58B0 DynObj_InvalidDyncubetree */
int DynObj_InvalidDyncubetree(int a1);
/* 004C5900 DynObj_RemoveSymbol_6 */
int DynObj_RemoveSymbol_6(void);
/* 004C5A10 DynObj_RegisterSymbol_7 */
void * DynObj_RegisterSymbol_7(void * a1, int* a2);
/* 004C5AA0 DynObj_FindSymbol_7 */
unsigned int DynObj_FindSymbol_7(void);
/* 004C5B20 DynObj_InsertHashItem_7 */
void * DynObj_InsertHashItem_7(void * a1);
/* 004C5C90 DynObj_LookupHashItem_7 */
int* DynObj_LookupHashItem_7(int* a1, int a2, int a3, int a4);
/* 004C5CE0 DynObj_CreateMagicObject_7 */
int DynObj_CreateMagicObject_7(int* a1);
/* 004C5F00 DynObj_ParseConfigFile_7 */
int DynObj_ParseConfigFile_7(void * a1, int a2);
/* 004C6160 DynObj_UpdateDynTree_7 */
int DynObj_UpdateDynTree_7(void * a1);
/* 004C6240 DynObj_Createterrainmateria */
void * DynObj_Createterrainmateria(void * a1, int a2);
/* 004C6670 CreateTerrainMaterial */
int CreateTerrainMaterial(int a1, float a2);
/* 004C6760 Create_TerrainTileMap */
int Create_TerrainTileMap(int a1, float a2);
/* 004C67E0 DynObj_LinkDynamicCube_7 */
int DynObj_LinkDynamicCube_7(int a1, int a2, int a3, int a4, int a5, int a6);
/* 004C6840 DynObj_RemoveSymbol_7 */
void * DynObj_RemoveSymbol_7(void * a1, void * a2, int a3);
/* 004C6890 DynObj_RegisterSymbol_8 */
void * DynObj_RegisterSymbol_8(void * a1, void * a2, int a3);
/* 004C6940 WorldObject_CommitTransform */
int WorldObject_CommitTransform(void * a1, void * a2, double* a3, float a4);
/* 004C6B20 DynObj_FindSymbol_8 */
int* DynObj_FindSymbol_8(void * a1, int a2, int a3, int* a4);
/* 004C6CE0 DynObj_InsertHashItem_8 */
void * DynObj_InsertHashItem_8(void * a1, void * a2);
/* 004C6D20 DynObj_LookupHashItem_8 */
void * DynObj_LookupHashItem_8(void * a1, int* a2, void * a3, int a4, int a5, int a6, void * a7);
/* 004C6E30 DynObj_ParseConfigFile_8 */
void * DynObj_ParseConfigFile_8(void * a1, void * a2);
/* 004C6E70 DynObj_UpdateDynTree_8 */
int DynObj_UpdateDynTree_8(void * a1, void * a2, double* a3, double* a4, double* a5);
/* 004C7140 DynObj_LinkDynamicCube_8 */
int DynObj_LinkDynamicCube_8(void * a1, int* a2, double* a3, float a4, int a5);
/* 004C7290 DynObj_InvalidCategory */
int DynObj_InvalidCategory(int a1, short a2);
/* 004C7350 DynObj_RemoveSymbol_8 */
int DynObj_RemoveSymbol_8(void * a1, int* a2, double* a3, double* a4, double* a5, int a6);
/* 004C7560 DynObj_RegisterSymbol_9 */
void * DynObj_RegisterSymbol_9(int a1, void * a2);
/* 004C75F0 DynObj_FindSymbol_9 */
void * const DynObj_FindSymbol_9(int a1, void * a2);
/* 004C7750 DynObj_InsertHashItem_9 */
int DynObj_InsertHashItem_9(int a1, int a2);
/* 004C7760 DynObj_LookupHashItem_9 */
int DynObj_LookupHashItem_9(void * a1);
/* 004C7770 DynObj_CreateMagicObject_9 */
unsigned int DynObj_CreateMagicObject_9(int a1, char a2, int a3, double* a4, double* a5, int a6, int a7);
/* 004C8130 DynObj_ParseConfigFile_9 */
unsigned int DynObj_ParseConfigFile_9(float a1, double* a2, void * const a3, float a4, double* a5, double* a6, char a7);
/* 004C9020 DynObj_LinkDynamicCube_9 */
int DynObj_LinkDynamicCube_9(short* a1, double* a2, double* a3, char a4, int* a5, int a6);
/* 004C9750 DynObj_RemoveSymbol_9 */
unsigned int DynObj_RemoveSymbol_9(int a1, int* a2, double* a3, unsigned int a4, char a5, int a6, int a7);
/* 004C9A30 DynObj_RegisterSymbol_10 */
int DynObj_RegisterSymbol_10(void * a1, int* a2, double* a3, int a4);
/* 004C9D70 DynObj_FindSymbol_10 */
int DynObj_FindSymbol_10(int* a1, double* a2, int a3);
/* 004CA010 DynObj_InsertHashItem_10 */
int DynObj_InsertHashItem_10(short* a1, double* a2, double* a3, double* a4, char a5, int* a6, int a7, int a8, float* a9);
/* 004CABF0 DynObj_LookupHashItem_10 */
int* DynObj_LookupHashItem_10(int a1, int* a2, double* a3, double* a4, double* a5, char a6, double* a7, int a8);
/* 004CB050 DynObj_CreateMagicObject_10 */
int DynObj_CreateMagicObject_10(void * a1, int* a2, double* a3, int a4, int a5, int a6, int a7);
/* 004CB810 DynObj_ParseConfigFile_10 */
int DynObj_ParseConfigFile_10(float a1, double* a2);
/* 004CB9F0 DynObj_UpdateDynTree_10 */
int* DynObj_UpdateDynTree_10(int a1, int* a2, double* a3, int* a4, double* a5, char a6, double* a7, int a8);
/* 004CBE40 DynObj_RemoveSymbol_10 */
int* DynObj_RemoveSymbol_10(int a1, int* a2, double* a3, int* a4, double* a5, char a6, double* a7, int a8, int a9);
/* 004CC2A0 DynObj_FindSymbol_11 */
int* DynObj_FindSymbol_11(int a1, int* a2, double* a3, double* a4, int* a5, char a6, double* a7, int a8);
/* 004CC810 DynObj_InsertHashItem_11 */
int DynObj_InsertHashItem_11(int* a1, int a2, double* a3, int a4, int a5, int a6, int a7, int a8, void * a9, void * a10, int a11, int a12);
/* 004CD300 DynObj_LookupHashItem_11 */
int DynObj_LookupHashItem_11(short* a1, double* a2, double* a3, double* a4, int a5, char a6, int* a7, int* a8, int a9, float* a10);
/* 004CDB20 World_TraceBatch */
int* World_TraceBatch(int a1, int* a2, double* a3, double* a4, int* a5, char a6, double* a7, int a8, int a9);
/* 004CE090 DynObj_CreateMagicObject_11 */
unsigned int DynObj_CreateMagicObject_11(int a1, char a2, int a3, double* a4, int a5, int a6);
/* 004CE390 DynObj_ParseConfigFile_11 */
unsigned int DynObj_ParseConfigFile_11(int a1, char a2, int a3, double* a4, int a5);
/* 004CE3D0 DynObj_UpdateDynTree_11 */
void * DynObj_UpdateDynTree_11(void * a1);
/* 004CE3E0 DynObj_LinkDynamicCube_11 */
int DynObj_LinkDynamicCube_11(int a1, int a2, int a3);
/* 004CE400 DynObj_RemoveSymbol_11 */
int DynObj_RemoveSymbol_11(int a1, int a2);
/* 004CE410 DynObj_RegisterSymbol_12 */
int DynObj_RegisterSymbol_12(float a1, double* a2, double* a3, char a4, float a5, int a6, int a7, float* a8);
/* 004CE530 DynObj_FindSymbol_12 */
short* DynObj_FindSymbol_12(int a1, void * a2);
/* 004CE5C0 DynObj_InsertHashItem_12 */
short* DynObj_InsertHashItem_12(int a1, int a2);
/* 004CE620 DynObj_LookupHashItem_12 */
int DynObj_LookupHashItem_12(int a1, int a2);
/* 004CE830 DynObj_CreateMagicObject_12 */
int* DynObj_CreateMagicObject_12(int* a1, int a2);
/* 004CE910 DynObj_ParseConfigFile_12 */
int* DynObj_ParseConfigFile_12(int a1, int* a2, int a3, int a4);
/* 004CEA10 DynObj_UpdateDynTree_12 */
int DynObj_UpdateDynTree_12(void);
/* 004CEA20 DynObj_LinkDynamicCube_12 */
int DynObj_LinkDynamicCube_12(void);
/* 004CEA30 DynObj_RemoveSymbol_12 */
int* DynObj_RemoveSymbol_12(void * a1);
/* 004CEA60 DynObj_RegisterSymbol_13 */
int DynObj_RegisterSymbol_13(void);
/* 004CEA70 DynObj_FindSymbol_13 */
int DynObj_FindSymbol_13(void);
/* 004CEA80 DynObj_InsertHashItem_13 */
int DynObj_InsertHashItem_13(void);
/* 004CEA90 DynObj_LookupHashItem_13 */
int DynObj_LookupHashItem_13(void);
/* 004CEAA0 DynObj_CreateMagicObject_13 */
void * DynObj_CreateMagicObject_13(void * a1, int a2, int* a3);
/* 004CEBA0 DynObj_MtpNlodvirmodelD */
void * DynObj_MtpNlodvirmodelD(int a1);
/* 004CEC10 DynObj_Missing */
void * DynObj_Missing(char * a1);
/* 004CEC40 DynObj_Johan */
void * DynObj_Johan(char * a1);
/* 004CED50 DynObj_Johan_2 */
int* DynObj_Johan_2(int* a1);
/* 004CEE30 DynObj_ParseConfigFile_13 */
int* DynObj_ParseConfigFile_13(char * a1);
/* 004CEEA0 DynObj_UpdateDynTree_13 */
int DynObj_UpdateDynTree_13(void);
/* 004CEEB0 DynObj_Initmodels */
int DynObj_Initmodels(void);
/* 004CEF30 DynObj_LinkDynamicCube_13 */
int DynObj_LinkDynamicCube_13(void);
/* 004CEF40 DynObj_RemoveSymbol_13 */
int* DynObj_RemoveSymbol_13(void);
/* 004CEFA0 DynObj_RegisterSymbol_14 */
int* DynObj_RegisterSymbol_14(int a1);
/* 004CF050 DynObj_FindSymbol_14 */
int* DynObj_FindSymbol_14(void);
/* 004CF080 DynObj_InsertHashItem_14 */
int* DynObj_InsertHashItem_14(void * a1, int a2, int a3);
/* 004CF300 DynObj_LookupHashItem_14 */
int* DynObj_LookupHashItem_14(int* a1, int a2);
/* 004CF330 DynObj_CreateMagicObject_14 */
int* DynObj_CreateMagicObject_14(void * a1);
/* 004CF390 DynObj_LocalModelsSMef */
int* DynObj_LocalModelsSMef(int a1);
/* 004CF630 DynObj_ParseConfigFile_14 */
int* DynObj_ParseConfigFile_14(void * a1);
/* 004CF690 DynObj_UpdateDynTree_14 */
int* DynObj_UpdateDynTree_14(void * a1);
/* 004CF790 DynObj_LocalTexturesSTex */
int* DynObj_LocalTexturesSTex(void * a1);
/* 004CF870 DynObj_LinkDynamicCube_14 */
int* DynObj_LinkDynamicCube_14(void * a1);
/* 004CF910 DynObj_RemoveSymbol_14 */
void ** DynObj_RemoveSymbol_14(void * a1);
/* 004CF9D0 DynObj_RegisterSymbol_15 */
int* DynObj_RegisterSymbol_15(int* a1);
/* 004CFB30 DynObj_FindSymbol_15 */
int DynObj_FindSymbol_15(int* a1);
/* 004CFBB0 DynObj_InsertHashItem_15 */
int DynObj_InsertHashItem_15(int* a1);
/* 004CFBD0 DynObj_LookupHashItem_15 */
int DynObj_LookupHashItem_15(int a1);
/* 004CFC00 DynObj_CreateMagicObject_15 */
int DynObj_CreateMagicObject_15(int a1);
/* 004CFC30 DynObj_ParseConfigFile_15 */
int DynObj_ParseConfigFile_15(void);
/* 004CFC40 DynObj_UpdateDynTree_15 */
int DynObj_UpdateDynTree_15(void);
/* 004CFC50 DynObj_LinkDynamicCube_15 */
int DynObj_LinkDynamicCube_15(void);
/* 004CFC60 DynObj_RemoveSymbol_15 */
int DynObj_RemoveSymbol_15(void);
/* 004CFC70 DynObj_RegisterSymbol_16 */
int DynObj_RegisterSymbol_16(void);
/* 004CFC80 DynObj_FindSymbol_16 */
int DynObj_FindSymbol_16(void);
/* 004CFC90 DynObj_InsertHashItem_16 */
int DynObj_InsertHashItem_16(void);
/* 004CFCA0 DynObj_LookupHashItem_16 */
int DynObj_LookupHashItem_16(void);
/* 004CFCB0 DynObj_CreateMagicObject_16 */
int DynObj_CreateMagicObject_16(float a1);
/* 004CFF70 DynObj_ParseConfigFile_16 */
int DynObj_ParseConfigFile_16(float a1);
/* 004D0180 Render_DrawRigidMesh */
int Render_DrawRigidMesh(float a1);
/* 004D03D0 Render_DrawBoneMesh */
int Render_DrawBoneMesh(int a1, int a2, int a3);
/* 004D0510 Render_DrawSplineMesh */
int Render_DrawSplineMesh(float a1, int a2);
/* 004D06C0 Render_DrawLightmapMesh */
int Render_DrawLightmapMesh(float a1, int a2);
/* 004D0790 Render_SkinBones */
int Render_SkinBones(void * a1, int a2);
/* 004D0930 Render_TransformVertices */
int Render_TransformVertices(int a1);
/* 004D0950 Render_ComputeNormals */
long double Render_ComputeNormals(int* a1);
/* 004D0970 Render_SetupLighting */
void ** Render_SetupLighting(void ** a1, void * a2, int a3);
/* 004D09E0 Render_BindTexture */
void ** Render_BindTexture(void ** a1, void * a2, int a3, char * a4);
/* 004D0A50 Render_ClipMesh */
double* Render_ClipMesh(double* a1, double* a2, int a3);
/* 004D0B30 Render_Genericuvfromrenderm */
int Render_Genericuvfromrenderm(void);
/* 004D0C50 Render_DrawRigidMesh_2 */
unsigned int Render_DrawRigidMesh_2(void);
/* 004D0CF0 Render_DrawBoneMesh_2 */
int Render_DrawBoneMesh_2(void * a1, int a2);
/* 004D0D10 Render_DrawSplineMesh_2 */
int Render_DrawSplineMesh_2(void * a1);
/* 004D0D20 Render_DrawLightmapMesh_2 */
int Render_DrawLightmapMesh_2(void * a1);
/* 004D0D30 Render_SkinBones_2 */
void * Render_SkinBones_2(int* a1);
/* 004D0D80 Render_TransformVertices_2 */
int Render_TransformVertices_2(void);
/* 004D0D90 Render_ComputeNormals_2 */
int Render_ComputeNormals_2(void * a1);
/* 004D0DA0 Render_SetupLighting_2 */
int Render_SetupLighting_2(void * a1, int a2);
/* 004D0DC0 Render_BindTexture_2 */
int Render_BindTexture_2(void * a1, int a2, int a3);
/* 004D0DE0 Render_ClipMesh_2 */
int* Render_ClipMesh_2(void * a1);
/* 004D0E20 Render_DrawRigidMesh_3 */
int* Render_DrawRigidMesh_3(void * a1);
/* 004D0E50 Render_DrawBoneMesh_3 */
int Render_DrawBoneMesh_3(void * a1);
/* 004D0E60 Render_DrawSplineMesh_3 */
void Render_DrawSplineMesh_3(void * a1, void * a2);
/* 004D0EA0 Render_DrawLightmapMesh_3 */
void Render_DrawLightmapMesh_3(void * a1, int* a2);
/* 004D0EE0 Render_SkinBones_3 */
int Render_SkinBones_3(int a1);
/* 004D0EF0 Render_TransformVertices_3 */
void ** Render_TransformVertices_3(void);
/* 004D11C0 Render_ComputeNormals_3 */
int Render_ComputeNormals_3(void);
/* 004D1220 Render_SetupLighting_3 */
int Render_SetupLighting_3(void);
/* 004D1260 Render_BindTexture_3 */
int Render_BindTexture_3(void);
/* 004D12C0 Render_ClipMesh_3 */
int Render_ClipMesh_3(int a1);
/* 004D14A0 Render_DrawRigidMesh_4 */
void Render_DrawRigidMesh_4(int* a1, int a2);
/* 004D14C0 Render_DrawBoneMesh_4 */
int Render_DrawBoneMesh_4(void);
/* 004D14D0 Render_DrawSplineMesh_4 */
int Render_DrawSplineMesh_4(void);
/* 004D14E0 Render_ShouldHaveAllocatedD */
int Render_ShouldHaveAllocatedD(void * a1);
/* 004D2540 Render_DrawLightmapMesh_4 */
int Render_DrawLightmapMesh_4(void * a1);
/* 004D2650 Render_SkinBones_4 */
char * Render_SkinBones_4(int a1, char * a2, int a3);
/* 004D27F0 Render_ComputeNormals_4 */
void Render_ComputeNormals_4(void * a1);
/* 004D2840 Render_ClosestZ2F */
int Render_ClosestZ2F(void * a1, char * a2);
/* 004D2A20 Render_IllegalAllocInfo */
int Render_IllegalAllocInfo(void);
/* 004D2B80 Render_NoMoreQcubeCallbacks */
int* Render_NoMoreQcubeCallbacks(int a1);
/* 004D2BD0 Render_CallbackNotFound */
void ** Render_CallbackNotFound(int a1);
/* 004D2C20 Render_SetupLighting_4 */
int Render_SetupLighting_4(int a1);
/* 004D2C30 Render_BindTexture_4 */
int Render_BindTexture_4(void);
/* 004D2CF0 Render_ClipMesh_4 */
int Render_ClipMesh_4(void);
/* 004D2D30 Render_DrawRigidMesh_5 */
int Render_DrawRigidMesh_5(float a1);
/* 004D2D50 Render_DrawBoneMesh_5 */
long double Render_DrawBoneMesh_5(void);
/* 004D2D60 Render_FailedToCreateBoneob */
void * Render_FailedToCreateBoneob(int* a1, int a2);
/* 004D2E40 Render_DrawSplineMesh_5 */
void * Render_DrawSplineMesh_5(int* a1);
/* 004D2EC0 Render_DrawLightmapMesh_5 */
int* Render_DrawLightmapMesh_5(void * a1, int a2);
/* 004D2F80 Render_SkinBones_5 */
void * Render_SkinBones_5(void * a1, void * a2);
/* 004D2FB0 Render_TransformVertices_5 */
int* Render_TransformVertices_5(int* a1, int* a2, void * a3);
/* 004D3020 Render_ComputeNormals_5 */
int Render_ComputeNormals_5(long double a1, float* a2, float* a3, float a4);
/* 004D3160 Render_SetupLighting_5 */
float* Render_SetupLighting_5(float* a1, float* a2, float* a3, float a4);
/* 004D31C0 Render_BindTexture_5 */
int Render_BindTexture_5(float* a1, float* a2, int* a3);
/* 004D3210 Render_ClipMesh_5 */
int Render_ClipMesh_5(int a1, int* a2);
/* 004D32A0 Render_DrawRigidMesh_6 */
int Render_DrawRigidMesh_6(int a1, int a2, void * a3, void * a4);
/* 004D33D0 Render_BlendbranchToIllegal */
int Render_BlendbranchToIllegal(int a1, int a2, void * a3, int* a4);
/* 004D3440 Render_BoneobjDeleteblendno */
int Render_BoneobjDeleteblendno(int a1, int a2);
/* 004D34A0 Render_DrawBoneMesh_6 */
int Render_DrawBoneMesh_6(void * a1);
/* 004D3560 Render_DrawSplineMesh_6 */
int* Render_DrawSplineMesh_6(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
/* 004D35B0 Render_DrawLightmapMesh_6 */
int* Render_DrawLightmapMesh_6(void);
/* 004D3600 Render_SkinBones_6 */
int* Render_SkinBones_6(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
/* 004D3660 Render_TransformVertices_6 */
int Render_TransformVertices_6(void * a1);
/* 004D36E0 Render_ComputeNormals_6 */
int Render_ComputeNormals_6(void * a1);
/* 004D3710 AIGraph_LoadParameters */
void AIGraph_LoadParameters(void);
/* 004D3720 Render_SetupLighting_6 */
void Render_SetupLighting_6(void);
/* 004D3730 Render_BindTexture_6 */
int* Render_BindTexture_6(void * a1);
/* 004D3750 Render_ClipMesh_6 */
int* Render_ClipMesh_6(int* a1);
/* 004D38A0 Render_DrawRigidMesh_7 */
int Render_DrawRigidMesh_7(int a1, int a2);
/* 004D38C0 Render_DrawBoneMesh_7 */
int Render_DrawBoneMesh_7(int a1, void * a2);
/* 004D3A90 Render_DrawSplineMesh_7 */
int Render_DrawSplineMesh_7(float* a1, float a2, float* a3, float a4, float a5);
/* 004D3F50 Render_DrawLightmapMesh_7 */
float Render_DrawLightmapMesh_7(long double a1, float a2, float a3) __location("result");
/* 004D4190 Render_SkinBones_7 */
int* Render_SkinBones_7(int* a1, int* a2);
/* 004D41C0 Render_TransformVertices_7 */
float Render_TransformVertices_7(float a1, int a2, float a3, float a4, float a5, float a6) __location("result");
/* 004D4500 Render_ComputeNormals_7 */
int Render_ComputeNormals_7(float* a1, float a2, float a3, float a4);
/* 004D4690 Render_SetupLighting_7 */
float Render_SetupLighting_7(int a1, float a2, int* a3) __location("result");
/* 004D46E0 Render_BindTexture_7 */
int* Render_BindTexture_7(int a1);
/* 004D4710 Render_ClipMesh_7 */
int Render_ClipMesh_7(void);
/* 004D4750 Render_DrawRigidMesh_8 */
int* Render_DrawRigidMesh_8(int* a1, int a2, int a3, int a4, int a5, int a6);
/* 004D47B0 Render_DrawBoneMesh_8 */
void * Render_DrawBoneMesh_8(void * a1);
/* 004D47D0 Render_DrawSplineMesh_8 */
int* Render_DrawSplineMesh_8(int* a1, int a2, int a3, int a4);
/* 004D4840 Render_DrawLightmapMesh_8 */
int Render_DrawLightmapMesh_8(int* a1, int* a2, float a3);
/* 004D4B60 Render_SkinBones_8 */
float Render_SkinBones_8(int a1, float a2, float a3, float a4) __location("result");
/* 004D4DC0 Render_ComputeNormals_8 */
int Render_ComputeNormals_8(int a1, int a2, int* a3, void * a4, float a5, float a6);
/* 004D4F20 Render_SetupLighting_8 */
int Render_SetupLighting_8(void);
/* 004D4F60 Render_BindTexture_8 */
int* Render_BindTexture_8(int* a1, int* a2, int a3, int a4, int a5, int a6);
/* 004D5090 Render_ClipMesh_8 */
int Render_ClipMesh_8(void * a1);
/* 004D5700 Render_DrawRigidMesh_9 */
int* Render_DrawRigidMesh_9(int a1, int a2, int a3);
/* 004D5750 Render_DrawBoneMesh_9 */
int Render_DrawBoneMesh_9(void);
/* 004D5790 Render_DrawSplineMesh_9 */
int* Render_DrawSplineMesh_9(int* a1, int a2, int a3, int a4);
/* 004D5EC0 Render_DrawLightmapMesh_9 */
int Render_DrawLightmapMesh_9(void * a1, int a2, int a3, int a4);
/* 004D5F90 Render_SkinBones_9 */
int Render_SkinBones_9(void);
/* 004D5FD0 Render_TransformVertices_9 */
int* Render_TransformVertices_9(int* a1, int a2, int a3);
/* 004D5FF0 Render_ComputeNormals_9 */
int Render_ComputeNormals_9(int* a1, int a2, float a3, int a4);
/* 004D6110 Render_SetupLighting_9 */
int Render_SetupLighting_9(float a1, int a2, int a3, int a4);
/* 004D6130 Render_BindTexture_9 */
int Render_BindTexture_9(float a1, int a2, int a3, int a4, int a5, int a6, float a7);
/* 004D61D0 Bones_PlayAnimation */
int Bones_PlayAnimation(float a1, int a2, int a3, int a4, float a5);
/* 004D62B0 Render_ClipMesh_9 */
void ** Render_ClipMesh_9(void * a1, int a2, float a3);
/* 004D6400 Render_DrawRigidMesh_10 */
int Render_DrawRigidMesh_10(int a1);
/* 004D6460 Render_DrawBoneMesh_10 */
int Render_DrawBoneMesh_10(void * a1, int a2);
/* 004D64C0 Render_DrawSplineMesh_10 */
int Render_DrawSplineMesh_10(void * a1, int a2);
/* 004D64E0 Render_DrawLightmapMesh_10 */
long double Render_DrawLightmapMesh_10(void * a1, int a2);
/* 004D6500 Render_SkinBones_10 */
long double Render_SkinBones_10(void * a1, int a2);
/* 004D6520 Render_TransformVertices_10 */
long double Render_TransformVertices_10(void * a1, float a2);
/* 004D6550 Render_ComputeNormals_10 */
int Render_ComputeNormals_10(void * a1);
/* 004D6580 Render_SetupLighting_10 */
int Render_SetupLighting_10(void * a1, int a2, float a3);
/* 004D65B0 Render_BindTexture_10 */
void * Render_BindTexture_10(void * a1, int a2, int a3);
/* 004D65D0 Render_ClipMesh_10 */
int Render_ClipMesh_10(void);
/* 004D65F0 Render_DrawRigidMesh_11 */
int Render_DrawRigidMesh_11(int a1);
/* 004D6640 Render_DrawBoneMesh_11 */
void Render_DrawBoneMesh_11(int a1);
/* 004D67A0 Render_FileSIsNotIffFile */
int Render_FileSIsNotIffFile(int* a1);
/* 004D6D40 Render_DrawSplineMesh_11 */
int* Render_DrawSplineMesh_11(int* a1);
/* 004D6FC0 Render_DrawLightmapMesh_11 */
int* Render_DrawLightmapMesh_11(int* a1, int* a2, int* a3, int a4, int a5);
/* 004D7020 Render_SkinBones_11 */
int Render_SkinBones_11(int a1, int a2);
/* 004D7040 Render_TransformVertices_11 */
int Render_TransformVertices_11(int a1, int a2);
/* 004D7070 Render_ComputeNormals_11 */
float Render_ComputeNormals_11(float a1, float a2, float a3, int a4, int a5) __location("result");
/* 004D74D0 Render_SetupLighting_11 */
long double Render_SetupLighting_11(int a1, int a2);
/* 004D74F0 Render_BindTexture_11 */
int Render_BindTexture_11(int* a1, int a2, int a3);
/* 004D7550 BoneDynCubeObj_Init */
int BoneDynCubeObj_Init(void);
/* 004D7620 BoneDynCubeObj_Setup */
int* BoneDynCubeObj_Setup(float a1, int* a2, float a3, float a4, float a5, double a6, short* a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15);
/* 004D88D0 BoneDynCubeObj_Process */
int* BoneDynCubeObj_Process(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12);
/* 004D94F0 BoneDynCubeObj_Update */
void BoneDynCubeObj_Update(int* a1, int* a2);
/* 004D95A0 BoneDynCubeObj_OnEvent */
int BoneDynCubeObj_OnEvent(void * a1, double* a2);
/* 004D95E0 Render_ClipMesh_11 */
unsigned int Render_ClipMesh_11(void);
/* 004D9610 Render_DrawRigidMesh_12 */
int Render_DrawRigidMesh_12(void);
/* 004D9620 Render_DrawBoneMesh_12 */
int Render_DrawBoneMesh_12(void * a1, short a2, int* a3);
/* 004D96F0 Render_DrawSplineMesh_12 */
void * Render_DrawSplineMesh_12(void * a1);
/* 004D9700 Render_VirmodelIsNull */
int Render_VirmodelIsNull(void * a1, int* a2);
/* 004D9730 QObj_Init */
int QObj_Init(void);
/* 004D9790 QObj_Update */
unsigned int QObj_Update(void);
/* 004D97E0 QObj_OnEvent */
int QObj_OnEvent(void);
/* 004D97F0 Qtask_SetCallbackData */
int Qtask_SetCallbackData(void * a1, int a2);
/* 004D9800 Qtask_GetCallbackData */
int Qtask_GetCallbackData(void * a1);
/* 004D9810 Qtask_Initialize */
int* Qtask_Initialize(void);
/* 004D9830 Qtask_Shutdown */
int Qtask_Shutdown(void);
/* 004D9850 Qtask_GetEventId */
int Qtask_GetEventId(void);
/* 004D9860 Qtask_GetList */
int Qtask_GetList(void);
/* 004D9870 Camera_SubmitFrame */
int* Camera_SubmitFrame(void * a1, int a2, int a3, int a4, int a5, int* a6, int a7, int a8, float a9);
/* 004D9950 Camera_ResetFrameCounters */
void * Camera_ResetFrameCounters(void * a1);
/* 004D9A00 MagicObj_Initialize */
void * MagicObj_Initialize(void);
/* 004D9C30 MagicObj_ParentTransform */
void * MagicObj_ParentTransform(void * a1, float a2);
/* 004D9F60 MagicObj_Shutdown */
unsigned int MagicObj_Shutdown(void);
/* 004D9FA0 MagicObj_GetTypeId */
int MagicObj_GetTypeId(void);
/* 004D9FB0 MagicObj_GetEventId */
int MagicObj_GetEventId(void);
/* 004D9FC0 Render_DrawLightmapMesh_12 */
struct status_msg* Render_DrawLightmapMesh_12(double* a1, double* a2, int* a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8);
/* 004DA0A0 Render_SkinBones_12 */
int Render_SkinBones_12(void * a1, double* a2, double* a3, int* a4, float a5, int a6, int a7, int a8, int a9);
/* 004DA160 Render_TransformVertices_12 */
int Render_TransformVertices_12(int* a1);
/* 004DA180 Render_ComputeNormals_12 */
int Render_ComputeNormals_12(void ** a1, int* a2);
/* 004DA1D0 Hazinglayers_Init */
int Hazinglayers_Init(void);
/* 004DA2E0 Hazinglayers_Update */
unsigned int Hazinglayers_Update(void);
/* 004DA2F0 Hazinglayers_OnEvent */
int Hazinglayers_OnEvent(void);
/* 004DA300 Hazinglayers_Process */
void ** Hazinglayers_Process(int* a1, int* a2, double* a3, double* a4, void ** a5, int a6);
/* 004DA790 Render_SetupLighting_12 */
unsigned int Render_SetupLighting_12(float* a1, double* a2, float a3, float a4, void ** a5);
/* 004DA880 Render_BindTexture_12 */
int Render_BindTexture_12(void);
/* 004DA8A0 Render_ClipMesh_12 */
int Render_ClipMesh_12(void);
/* 004DA8B0 Render_DrawRigidMesh_13 */
int Render_DrawRigidMesh_13(void);
/* 004DA8D0 Render_DrawBoneMesh_13 */
int Render_DrawBoneMesh_13(int a1, int* a2, int a3);
/* 004DA950 Render_DrawSplineMesh_13 */
void Render_DrawSplineMesh_13(int a1, int* a2, int a3, int* a4, float a5);
/* 004DAA00 Render_DrawLightmapMesh_13 */
int Render_DrawLightmapMesh_13(void);
/* 004DAA20 Render_SkinBones_13 */
void * Render_SkinBones_13(int* a1);
/* 004DAA60 Render_TransformVertices_13 */
int* Render_TransformVertices_13(int* a1, int* a2, int* a3, char a4, char a5);
/* 004DAAF0 Render_ComputeNormals_13 */
int Render_ComputeNormals_13(int a1);
/* 004DAB50 Render_SetupLighting_13 */
int Render_SetupLighting_13(int a1, int a2, int a3, void ** a4, float a5);
/* 004DBCC0 Sector_Cleanup */
int Sector_Cleanup(int* a1, int* a2);
/* 004DBF30 Render_BindTexture_13 */
void Render_BindTexture_13(int* a1, void ** a2);
/* 004DBFA0 Render_ClipMesh_13 */
void Render_ClipMesh_13(int* a1, void ** a2);
/* 004DC050 Render_DrawRigidMesh_14 */
void Render_DrawRigidMesh_14(int* a1, int a2, int* a3, int a4);
/* 004DC190 Render_DrawBoneMesh_14 */
void Render_DrawBoneMesh_14(int* a1, int a2, int* a3);
/* 004DC2F0 Render_DrawSplineMesh_14 */
void Render_DrawSplineMesh_14(int* a1);
/* 004DC340 Render_DrawLightmapMesh_14 */
void Render_DrawLightmapMesh_14(void ** a1);
/* 004DC3D0 Sector_Cleanup_2 */
int* Sector_Cleanup_2(int* a1, int* a2);
/* 004DC640 Render_SkinBones_14 */
int* Render_SkinBones_14(float a1, int* a2, int* a3);
/* 004DCBA0 Render_TransformVertices_14 */
void * Render_TransformVertices_14(int* a1, void * a2);
/* 004DCCB0 Render_ComputeNormals_14 */
int Render_ComputeNormals_14(int a1, void * a2, double* a3);
/* 004DCDD0 Render_SetupLighting_14 */
int Render_SetupLighting_14(void * a1);
/* 004DCF00 Render_BindTexture_14 */
int Render_BindTexture_14(int a1, void * a2, double* a3);
/* 004DCF20 Sector_Init */
int Sector_Init(void);
/* 004DD1C0 Sector_LoadParameters */
int Sector_LoadParameters(void * a1);
/* 004DD310 Sector_OnEvent */
float Sector_OnEvent(float a1) __location("result");
/* 004DD4B0 Render_ClipMesh_14 */
int* Render_ClipMesh_14(void * a1, float* a2, int* a3, int a4);
/* 004DD5D0 Render_DrawRigidMesh_15 */
int Render_DrawRigidMesh_15(int a1, int* a2, int* a3);
/* 004DD650 Render_DrawBoneMesh_15 */
int Render_DrawBoneMesh_15(void * a1, float* a2, float* a3, int a4);
/* 004DD7F0 Render_DrawSplineMesh_15 */
int Render_DrawSplineMesh_15(void * a1, int a2, int a3, float* a4, float* a5, float* a6, float* a7);
/* 004DDFF0 Sector_Cleanup_3 */
int* Sector_Cleanup_3(void * a1);
/* 004DE040 Render_SkinBones_15 */
void * Render_SkinBones_15(void * a1);
/* 004DE4E0 Sector_Cleanup_4 */
int Sector_Cleanup_4(void * a1);
/* 004DE6B0 Sector_Setup */
int Sector_Setup(unsigned int a1, int* a2);
/* 004DE740 Sector_Process */
int Sector_Process(void * a1);
/* 004DE800 Sector_Update */
void * Sector_Update(void * a1, int a2);
/* 004DE8A0 Sector_Cleanup_5 */
void Sector_Cleanup_5(int* a1, int a2);
/* 004DEA80 Sector_Cleanup_6 */
int Sector_Cleanup_6(void * a1, int a2);
/* 004DEB90 Sector_Cleanup_7 */
int Sector_Cleanup_7(float a1, void * a2);
/* 004DED30 Sector_Cleanup_8 */
int Sector_Cleanup_8(void * a1, int* a2);
/* 004DEE40 Render_TransformVertices_15 */
unsigned int Render_TransformVertices_15(void);
/* 004DEE80 Render_ComputeNormals_15 */
int Render_ComputeNormals_15(void);
/* 004DEE90 Render_SetupLighting_15 */
void * Render_SetupLighting_15(void * a1, char * a2);
/* 004DEEC0 Render_BindTexture_15 */
float Render_BindTexture_15(float a1) __location("result");
/* 004DF500 Render_ClipMesh_15 */
int* Render_ClipMesh_15(float a1, int* a2, int* a3);
/* 004DFA50 Render_MagicObjectTypeSNotD */
int* Render_MagicObjectTypeSNotD(void * a1);
/* 004E0810 SoundSys_PlaySoundSample */
int SoundSys_PlaySoundSample(int a1, int a2);
/* 004E0830 SoundSys_Update3DPosition */
int SoundSys_Update3DPosition(void);
/* 004E0840 MagicObjContainer_Init */
int MagicObjContainer_Init(void);
/* 004E0920 MagicObjContainer_Update */
unsigned int MagicObjContainer_Update(void);
/* 004E0930 CarGun_Create */
struct status_msg* CarGun_Create(void * a1, unsigned int a2);
/* 004E0950 Shadow_Init */
int Shadow_Init(void);
/* 004E09D0 Shadow_LoadParameters */
int* Shadow_LoadParameters(float a1);
/* 004E0CB0 SoundSys_SetMasterVolume */
unsigned int SoundSys_SetMasterVolume(void);
/* 004E0CC0 SoundSys_SetFrequency */
struct status_msg* SoundSys_SetFrequency(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9);
/* 004E0E20 SoundSys_StopSoundSample */
int SoundSys_StopSoundSample(int a1, int a2, int* a3, float a4, int* a5, float a6);
/* 004E1130 SoundSys_LoadSoundDef */
int SoundSys_LoadSoundDef(int a1, int a2, int* a3, float a4, int* a5, float a6);
/* 004E1440 SoundSys_EvaluateTrigger */
int* SoundSys_EvaluateTrigger(float a1, int* a2);
/* 004E16E0 SplineObjSegment_Process */
int* SplineObjSegment_Process(float a1, int* a2);
/* 004E3F80 SplineObjSegment_LoadParameters */
void * SplineObjSegment_LoadParameters(void * a1);
/* 004E3FC0 SplineObjSegment_Action */
void * SplineObjSegment_Action(float a1, int* a2);
/* 004E41B0 SplineObjSegment_Init */
unsigned int SplineObjSegment_Init(void);
/* 004E4290 SplineObjSegment_Setup */
int SplineObjSegment_Setup(void * a1);
/* 004E43B0 SoundSys_InitSoundSys_2 */
unsigned int SoundSys_InitSoundSys_2(void);
/* 004E43D0 SoundSys_PlaySoundSample_2 */
struct status_msg* SoundSys_PlaySoundSample_2(float a1, void * a2, int* a3, double* a4, float* a5, float* a6, char a7, char a8, int a9, int a10, char * a11);
/* 004E4530 SoundSys_Update3DPosition_2 */
int* SoundSys_Update3DPosition_2(float a1, int* a2, double* a3, float* a4, float* a5, char a6, char a7, int a8, char * a9);
/* 004E51C0 SoundSys_LoadSoundDef_2 */
int SoundSys_LoadSoundDef_2(void);
/* 004E5350 SoundSys_EvaluateTrigger_2 */
int SoundSys_EvaluateTrigger_2(void);
/* 004E5360 SoundSys_AttachLipsync_2 */
int SoundSys_AttachLipsync_2(void);
/* 004E5370 DynCubeObj_Init */
int DynCubeObj_Init(void);
/* 004E53A0 DynCubeObj_Update */
unsigned int DynCubeObj_Update(void);
/* 004E53C0 DynCubeObj_OnEvent */
int* DynCubeObj_OnEvent(int a1, int a2, int a3, double* a4, float a5);
/* 004E54E0 DynCubeObj_Action */
int DynCubeObj_Action(int* a1);
/* 004E5550 DynCubeObj_OnTick */
int DynCubeObj_OnTick(void * a1, int a2, int a3);
/* 004E5580 SoundSys_InitSoundSys_3 */
int SoundSys_InitSoundSys_3(void * a1, int a2, int a3);
/* 004E55B0 SoundSys_PlaySoundSample_3 */
int SoundSys_PlaySoundSample_3(void);
/* 004E55C0 SoundSys_Update3DPosition_3 */
int SoundSys_Update3DPosition_3(void);
/* 004E55F0 SoundSys_SetMasterVolume_3 */
unsigned int SoundSys_SetMasterVolume_3(void);
/* 004E5610 SoundSys_SetFrequency_3 */
int SoundSys_SetFrequency_3(float a1, float a2, float a3, int a4, float a5, int a6, float a7);
/* 004E5BA0 SoundSys_LoadSoundDef_3 */
int SoundSys_LoadSoundDef_3(void * a1, float a2, float a3, float a4, float a5);
/* 004E5C90 SoundSys_EvaluateTrigger_3 */
int SoundSys_EvaluateTrigger_3(void);
/* 004E5CA0 SoundSys_AttachLipsync_3 */
int SoundSys_AttachLipsync_3(void);
/* 004E5CB0 SoundSys_InitSoundSys_4 */
int SoundSys_InitSoundSys_4(void);
/* 004E5D90 SoundSys_PlaySoundSample_4 */
int SoundSys_PlaySoundSample_4(void);
/* 004E5EA0 SoundSys_Update3DPosition_4 */
unsigned int SoundSys_Update3DPosition_4(void);
/* 004E6030 SoundSys_SetMasterVolume_4 */
int SoundSys_SetMasterVolume_4(int a1);
/* 004E6050 SoundSys_SetFrequency_4 */
int SoundSys_SetFrequency_4(void);
/* 004E6060 SoundSys_StopSoundSample_4 */
int SoundSys_StopSoundSample_4(char a1);
/* 004E6070 SoundSysController_Init */
int SoundSysController_Init(void);
/* 004E6290 SoundSys_LoadSoundDef_4 */
int* SoundSys_LoadSoundDef_4(int* a1, int* a2);
/* 004E62C0 SoundSys_EvaluateTrigger_4 */
void SoundSys_EvaluateTrigger_4(void);
/* 004E63B0 SoundSys_AttachLipsync_4 */
int* SoundSys_AttachLipsync_4(int* a1, void ** a2);
/* 004E63E0 SoundSys_Definegroup */
int SoundSys_Definegroup(void);
/* 004E6530 SoundSys_InitSoundSys_5 */
struct status_msg* SoundSys_InitSoundSys_5(void * a1);
/* 004E6550 SoundSys_PlaySoundSample_5 */
struct status_msg* SoundSys_PlaySoundSample_5(void * a1, int a2);
/* 004E65D0 SoundSys_Update3DPosition_5 */
struct status_msg* SoundSys_Update3DPosition_5(void * a1, int a2);
/* 004E65F0 SoundSys_SetMasterVolume_5 */
int SoundSys_SetMasterVolume_5(void);
/* 004E6610 SoundSys_SetFrequency_5 */
int SoundSys_SetFrequency_5(void);
/* 004E6630 SoundSys_StopSoundSample_5 */
int SoundSys_StopSoundSample_5(void);
/* 004E6650 SoundSys_LoadSoundDef_5 */
int SoundSys_LoadSoundDef_5(void);
/* 004E6670 SoundSys_EvaluateTrigger_5 */
int SoundSys_EvaluateTrigger_5(void);
/* 004E6690 SoundSys_AttachLipsync_5 */
int SoundSys_AttachLipsync_5(void);
/* 004E66B0 SoundSys_InitSoundSys_6 */
int SoundSys_InitSoundSys_6(void);
/* 004E66D0 SoundSys_PlaySoundSample_6 */
int SoundSys_PlaySoundSample_6(void);
/* 004E66F0 SoundSys_Update3DPosition_6 */
int SoundSys_Update3DPosition_6(void);
/* 004E6710 SoundSys_SetMasterVolume_6 */
int SoundSys_SetMasterVolume_6(void);
/* 004E6730 SoundSys_SetFrequency_6 */
int SoundSys_SetFrequency_6(void);
/* 004E6750 SoundSys_StopSoundSample_6 */
int SoundSys_StopSoundSample_6(int* a1);
/* 004E67D0 SoundSys_LoadSoundDef_6 */
int SoundSys_LoadSoundDef_6(int* a1);
/* 004E6830 SoundSys_EvaluateTrigger_6 */
int* SoundSys_EvaluateTrigger_6(int* a1);
/* 004E68D0 Sound_Load */
int Sound_Load(void * a1);
/* 004E68F0 SoundSys_AttachLipsync_6 */
int SoundSys_AttachLipsync_6(int* a1);
/* 004E69C0 SoundSys_InitSoundSys_7 */
int SoundSys_InitSoundSys_7(void * a1);
/* 004E69E0 SoundSys_PlaySoundSample_7 */
int* SoundSys_PlaySoundSample_7(int* a1);
/* 004E6AB0 SoundSys_Update3DPosition_7 */
int* SoundSys_Update3DPosition_7(int a1);
/* 004E6B00 SoundSys_SetMasterVolume_7 */
struct status_msg* SoundSys_SetMasterVolume_7(void * a1, char * a2);
/* 004E6C00 SoundSys_SetFrequency_7 */
int SoundSys_SetFrequency_7(void * a1);
/* 004E6C30 SoundSys_StopSoundSample_7 */
int SoundSys_StopSoundSample_7(void * a1, int a2);
/* 004E6C60 SoundSys_LoadSoundDef_7 */
int SoundSys_LoadSoundDef_7(void * a1, int a2, int a3);
/* 004E6CA0 SoundSys_EvaluateTrigger_7 */
int SoundSys_EvaluateTrigger_7(void * a1, int a2);
/* 004E6CE0 SoundSys_AttachLipsync_7 */
int SoundSys_AttachLipsync_7(void * a1, char a2);
/* 004E6D20 SoundSys_InitSoundSys_8 */
int* SoundSys_InitSoundSys_8(int a1);
/* 004E6D40 SoundSys_PlaySoundSample_8 */
int SoundSys_PlaySoundSample_8(int a1);
/* 004E6D60 SoundSys_Update3DPosition_8 */
int SoundSys_Update3DPosition_8(int* a1);
/* 004E6DB0 SoundSys_SetMasterVolume_8 */
void SoundSys_SetMasterVolume_8(int a1, int a2, int a3, int a4, float* a5);
/* 004E6FA0 SoundSys_SetFrequency_8 */
void * SoundSys_SetFrequency_8(void * a1);
/* 004E6FF0 SoundSys_StopSoundSample_8 */
long double SoundSys_StopSoundSample_8(float* a1);
/* 004E7030 SoundSys_LoadSoundDef_8 */
int* SoundSys_LoadSoundDef_8(int* a1, int* a2, float a3);
/* 004E7130 SoundSys_EvaluateTrigger_8 */
void SoundSys_EvaluateTrigger_8(void);
/* 004E7180 SoundSys_AttachLipsync_8 */
int SoundSys_AttachLipsync_8(char * a1, int a2, int a3);
/* 004E7200 Sound_EventTrigger */
int* Sound_EventTrigger(char * a1, char * a2, int a3);
/* 004E7330 SoundSys_InitSoundSys_9 */
int SoundSys_InitSoundSys_9(void);
/* 004E7340 SoundSys_PlaySoundSample_9 */
int SoundSys_PlaySoundSample_9(char a1);
/* 004E7350 SoundSys_Update3DPosition_9 */
int SoundSys_Update3DPosition_9(int a1);
/* 004E7370 Screen_Init */
int Screen_Init(void);
/* 004E7500 Screen_Update */
unsigned int Screen_Update(void);
/* 004E7530 Screen_OnEvent */
int Screen_OnEvent(void);
/* 004E7540 Screen_Process */
int Screen_Process(int a1, char a2);
/* 004E7580 SoundSys_SetMasterVolume_9 */
struct status_msg* SoundSys_SetMasterVolume_9(void * a1);
/* 004E75A0 SoundSys_SetFrequency_9 */
int SoundSys_SetFrequency_9(void);
/* 004E75B0 SoundSys_StopSoundSample_9 */
int SoundSys_StopSoundSample_9(void);
/* 004E75C0 SoundSys_LoadSoundDef_9 */
void * SoundSys_LoadSoundDef_9(void * a1, int a2, int a3);
/* 004E75E0 SoundSys_EvaluateTrigger_9 */
void * SoundSys_EvaluateTrigger_9(int* a1);
/* 004E7600 SoundSys_AttachLipsync_9 */
int** SoundSys_AttachLipsync_9(void * a1, int a2, int a3);
/* 004E7660 SoundSys_InitSoundSys_10 */
int SoundSys_InitSoundSys_10(int* a1);
/* 004E7690 SoundSys_PlaySoundSample_10 */
int* SoundSys_PlaySoundSample_10(int* a1);
/* 004E76E0 SoundSys_Update3DPosition_10 */
int SoundSys_Update3DPosition_10(int* a1, char * a2, int a3);
/* 004E7710 SoundSys_SetMasterVolume_10 */
void SoundSys_SetMasterVolume_10(int* a1, char * a2);
/* 004E7790 SoundSys_SetFrequency_10 */
char * SoundSys_SetFrequency_10(int* a1, int a2);
/* 004E77D0 SoundSys_StopSoundSample_10 */
char * SoundSys_StopSoundSample_10(int* a1);
/* 004E77F0 SoundSys_LoadSoundDef_10 */
char * SoundSys_LoadSoundDef_10(int* a1, int a2);
/* 004E7830 SoundSys_EvaluateTrigger_10 */
int SoundSys_EvaluateTrigger_10(void * a1, char a2);
/* 004E7840 DebugText_Init */
int* DebugText_Init(void);
/* 004E79A0 DebugText_Update */
int* DebugText_Update(void);
/* 004E7AC0 SoundSys_AttachLipsync_10 */
int SoundSys_AttachLipsync_10(void * a1, char a2);
/* 004E7B40 SoundSys_LocalDebugFnt */
int SoundSys_LocalDebugFnt(void);
/* 004E7B80 SoundSys_InitSoundSys_11 */
int SoundSys_InitSoundSys_11(int a1, int a2);
/* 004E7BB0 SoundSys_PlaySoundSample_11 */
int SoundSys_PlaySoundSample_11(void);
/* 004E7BD0 SoundSys_Update3DPosition_11 */
int SoundSys_Update3DPosition_11(char * a1);
/* 004E7C00 SoundSys_SetMasterVolume_11 */
int SoundSys_SetMasterVolume_11(char * a1, int a2);
/* 004E7C30 SoundSys_SetFrequency_11 */
int SoundSys_SetFrequency_11(void);
/* 004E7C40 SoundSys_StopSoundSample_11 */
int SoundSys_StopSoundSample_11(void);
/* 004E7C50 CameraControlTask_Init */
int CameraControlTask_Init(void);
/* 004E7C90 CameraControlTask_LoadParameters */
void CameraControlTask_LoadParameters(void * a1);
/* 004E7D30 CameraControlTask_OnEvent */
unsigned int CameraControlTask_OnEvent(void);
/* 004E7D40 CameraControlTask_Process */
struct status_msg* CameraControlTask_Process(void * a1, unsigned int a2);
/* 004E7D70 CameraControlTask_Action */
struct status_msg* CameraControlTask_Action(void * a1, void * a2, unsigned int a3);
/* 004E7D90 ViewportQTask_Init */
int ViewportQTask_Init(void);
/* 004E7E20 ViewportQTask_Process */
int ViewportQTask_Process(void);
/* 004E7E30 ViewportQTask_Setup */
int ViewportQTask_Setup(void * a1);
/* 004E8090 ViewportQTask_LoadParameters */
int ViewportQTask_LoadParameters(void * a1);
/* 004E80D0 SoundSys_LoadSoundDef_11 */
unsigned int SoundSys_LoadSoundDef_11(void);
/* 004E8100 SoundSys_EvaluateTrigger_11 */
int SoundSys_EvaluateTrigger_11(void);
/* 004E8110 SoundSys_AttachLipsync_11 */
struct status_msg* SoundSys_AttachLipsync_11(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11);
/* 004E81F0 SoundSys_InitSoundSys_12 */
int SoundSys_InitSoundSys_12(void);
/* 004E8200 SoundSys_PlaySoundSample_12 */
void SoundSys_PlaySoundSample_12(void);
/* 004E8210 SoundSys_Update3DPosition_12 */
int SoundSys_Update3DPosition_12(void * a1);
/* 004E8220 SoundSys_SetMasterVolume_12 */
int SoundSys_SetMasterVolume_12(int a1, int a2, char a3);
/* 004E8240 SoundSys_SetFrequency_12 */
void SoundSys_SetFrequency_12(void);
/* 004E8250 SoundSys_StopSoundSample_12 */
int SoundSys_StopSoundSample_12(void * a1, char a2);
/* 004E8260 SoundSys_LoadSoundDef_12 */
int SoundSys_LoadSoundDef_12(void * a1);
/* 004E8270 SoundSys_EvaluateTrigger_12 */
int SoundSys_EvaluateTrigger_12(void * a1, int a2);
/* 004E8280 SoundSys_AttachLipsync_12 */
int SoundSys_AttachLipsync_12(void);
/* 004E8290 SoundSys_InitSoundSys_13 */
int* SoundSys_InitSoundSys_13(int a1);
/* 004E82C0 TerraDrawTask_Init */
int TerraDrawTask_Init(void);
/* 004E8350 TerraDrawTask_Update */
unsigned int TerraDrawTask_Update(void);
/* 004E8370 TerraDrawTask_OnEvent */
struct status_msg* TerraDrawTask_OnEvent(void * a1, unsigned int a2);
/* 004E8390 SoundDefSound_Init */
int SoundDefSound_Init(void);
/* 004E8520 SoundDefSound_Setup */
int* SoundDefSound_Setup(void * a1, int* a2);
/* 004E8780 SoundSys_PlaySoundSample_13 */
void * SoundSys_PlaySoundSample_13(void * a1);
/* 004E8840 SoundDefSound_LoadParameters */
int SoundDefSound_LoadParameters(int a1);
/* 004E8910 SoundDefSound_Process */
int SoundDefSound_Process(void * a1, int* a2);
/* 004E8B80 SoundDefSound_Update */
int SoundDefSound_Update(void * a1, float* a2);
/* 004E8BD0 SoundDefSound_OnEvent */
float SoundDefSound_OnEvent(int a1, int* a2) __location("result");
/* 004E8C20 SoundSys_Update3DPosition_13 */
int SoundSys_Update3DPosition_13(void);
/* 004E8C50 SoundSys_SetMasterVolume_13 */
int SoundSys_SetMasterVolume_13(void);
/* 004E8C60 Define_Sound */
int Define_Sound(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, void * a9, float a10);
/* 004E8DC0 SoundSys_SetFrequency_13 */
int SoundSys_SetFrequency_13(void * a1);
/* 004E9090 SoundSys_StopSoundSample_13 */
int* SoundSys_StopSoundSample_13(void * a1);
/* 004E90C0 SoundSys_LoadSoundDef_13 */
int SoundSys_LoadSoundDef_13(void * a1);
/* 004E9110 SoundSys_EvaluateTrigger_13 */
int SoundSys_EvaluateTrigger_13(void * a1, int a2, int a3, int a4, int a5);
/* 004E92B0 SoundSys_AttachLipsync_13 */
int SoundSys_AttachLipsync_13(void * a1);
/* 004E92C0 FadeOutEnd_Init */
int FadeOutEnd_Init(void);
/* 004E9410 FadeOutEnd_Update */
unsigned int FadeOutEnd_Update(void);
/* 004E9430 FadeOutEnd_OnEvent */
struct status_msg* FadeOutEnd_OnEvent(void * a1);
/* 004E9460 FadeOutEnd_Process */
struct status_msg* FadeOutEnd_Process(void * a1);
/* 004E9480 GlowTask_Init */
int GlowTask_Init(void);
/* 004E94E0 GlowTask_Update */
unsigned int GlowTask_Update(void);
/* 004E9500 GlowTask_OnEvent */
struct status_msg* GlowTask_OnEvent(void * a1);
/* 004E9520 SoundDefTriggerOnce_Init */
int SoundDefTriggerOnce_Init(void);
/* 004E9760 SoundDefTriggerOnce_Process */
int* SoundDefTriggerOnce_Process(void * a1, int* a2);
/* 004E9830 SoundDefTriggerOnce_LoadParameters */
int SoundDefTriggerOnce_LoadParameters(void * a1, int* a2);
/* 004E99D0 SoundSys_InitSoundSys_14 */
void * SoundSys_InitSoundSys_14(void * a1);
/* 004E9AA0 SoundDefTriggerOnce_Setup */
int SoundDefTriggerOnce_Setup(int a1);
/* 004E9B80 SoundDefTriggerOnce_Update */
int SoundDefTriggerOnce_Update(void * a1, int* a2);
/* 004E9DD0 SoundDefTriggerOnce_OnEvent */
int SoundDefTriggerOnce_OnEvent(void * a1, float* a2);
/* 004E9E20 SoundDefTriggerOnce_Action */
float SoundDefTriggerOnce_Action(int a1, int* a2) __location("result");
/* 004E9E80 SoundSys_PlaySoundSample_14 */
int SoundSys_PlaySoundSample_14(void);
/* 004E9EB0 SoundSys_Update3DPosition_14 */
int SoundSys_Update3DPosition_14(void);
/* 004E9EC0 Define_TriggerOnce */
int Define_TriggerOnce(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, void * a9, float a10);
/* 004EA040 SoundSys_SetMasterVolume_14 */
int SoundSys_SetMasterVolume_14(void * a1);
/* 004EA3D0 SoundDefGraph_Init */
int SoundDefGraph_Init(void);
/* 004EA560 SoundDefGraph_Setup */
int* SoundDefGraph_Setup(void * a1, int* a2);
/* 004EA600 SoundDefGraph_LoadParameters */
int SoundDefGraph_LoadParameters(void * a1, int* a2);
/* 004EA7B0 SoundSys_SetFrequency_14 */
void * SoundSys_SetFrequency_14(void * a1);
/* 004EA8D0 SoundDefGraph_Process */
int SoundDefGraph_Process(void * a1, int* a2);
/* 004EAC40 SoundDefGraph_Update */
int SoundDefGraph_Update(void * a1, float* a2);
/* 004EAC90 SoundDefGraph_OnEvent */
float SoundDefGraph_OnEvent(int a1, int* a2) __location("result");
/* 004EACE0 SoundSys_StopSoundSample_14 */
int SoundSys_StopSoundSample_14(void);
/* 004EAD10 SoundSys_LoadSoundDef_14 */
int SoundSys_LoadSoundDef_14(void);
/* 004EAD20 Define_Graph */
int Define_Graph(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, int a7, void * a8, float a9);
/* 004EAEB0 SoundSys_EvaluateTrigger_14 */
int SoundSys_EvaluateTrigger_14(void * a1);
/* 004EB1D0 SoundDefGroup_Init */
int SoundDefGroup_Init(void);
/* 004EB3D0 SoundDefGroup_LoadParameters */
int* SoundDefGroup_LoadParameters(int* a1);
/* 004EB470 SoundDefGroup_Process */
int SoundDefGroup_Process(void * a1, int* a2);
/* 004EB620 SoundDefGroup_Update */
int SoundDefGroup_Update(void * a1, void ** a2);
/* 004EB670 SoundDefGroup_OnEvent */
int SoundDefGroup_OnEvent(void * a1, int* a2);
/* 004EBA50 SoundSys_AttachLipsync_14 */
int SoundSys_AttachLipsync_14(void);
/* 004EBA80 SoundSys_InitSoundSys_15 */
int SoundSys_InitSoundSys_15(void);
/* 004EBA90 Define_Group */
int Define_Group(int a1, void * a2, float a3);
/* 004EBBA0 SoundSys_PlaySoundSample_15 */
struct status_msg* SoundSys_PlaySoundSample_15(void * a1, unsigned int a2);
/* 004EBBF0 SoundSys_Update3DPosition_15 */
int SoundSys_Update3DPosition_15(int a1, int a2, int a3);
/* 004EBC60 SoundSysMicrophone_Init */
int SoundSysMicrophone_Init(void);
/* 004EBCD0 SoundSysMicrophone_Setup */
int* SoundSysMicrophone_Setup(void * a1);
/* 004EBDB0 SoundSysMicrophone_OnEvent */
unsigned int SoundSysMicrophone_OnEvent(void);
/* 004EBDD0 SoundSysMicrophone_Process */
int SoundSysMicrophone_Process(void);
/* 004EBDE0 SoundSysMicrophone_Action */
void SoundSysMicrophone_Action(void);
/* 004EBDF0 SoundSysMicrophone_OnTick */
int SoundSysMicrophone_OnTick(int* a1);
/* 004EBE70 SoundSys_Defineanimtrigger */
void * SoundSys_Defineanimtrigger(void);
/* 004EBEB0 DefineAnimTrigger */
int DefineAnimTrigger(int a1, float a2);
/* 004EBFC0 SoundSys_SetMasterVolume_15 */
unsigned int SoundSys_SetMasterVolume_15(void);
/* 004EC040 SoundSys_SetFrequency_15 */
int SoundSys_SetFrequency_15(void);
/* 004EC050 SoundSys_StopSoundSample_15 */
int SoundSys_StopSoundSample_15(void);
/* 004EC060 SoundSys_LoadSoundDef_15 */
int SoundSys_LoadSoundDef_15(void);
/* 004EC070 AnimTrigger_ParseConfigFile */
char * AnimTrigger_ParseConfigFile(char * a1);
/* 004EC0C0 Anim_TriggerLoad */
int Anim_TriggerLoad(void * a1);
/* 004EC0E0 SoundSys_EvaluateTrigger_15 */
int SoundSys_EvaluateTrigger_15(int a1, int a2, int a3);
/* 004EC160 SoundSys_AttachLipsync_15 */
int SoundSys_AttachLipsync_15(void);
/* 004EC180 SoundSys_InitSoundSys_16 */
unsigned int SoundSys_InitSoundSys_16(void);
/* 004EC190 SoundSys_PlaySoundSample_16 */
int SoundSys_PlaySoundSample_16(int* a1, int a2, int a3, int a4, int a5, int a6);
/* 004EC1E0 SoundSys_Update3DPosition_16 */
int SoundSys_Update3DPosition_16(void * a1, int a2);
/* 004EC2C0 SoundSys_SetMasterVolume_16 */
float SoundSys_SetMasterVolume_16(void * a1, int a2, float a3, void * a4, float* a5, float a6) __location("result");
/* 004EC4D0 SoundSys_SetFrequency_16 */
int* SoundSys_SetFrequency_16(int* a1, int a2, int a3, int a4, int a5, float a6, float a7, float a8);
/* 004EC5B0 SoundSys_StopSoundSample_16 */
void * SoundSys_StopSoundSample_16(void * a1, int a2);
/* 004EC5E0 SoundSys_LoadSoundDef_16 */
void * SoundSys_LoadSoundDef_16(int* a1, float a2, float a3, float a4, float a5);
/* 004EC630 SoundSys_EvaluateTrigger_16 */
void * SoundSys_EvaluateTrigger_16(void * a1);
/* 004EC660 SoundSys_AttachLipsync_16 */
void * SoundSys_AttachLipsync_16(void * a1);
/* 004EC6A0 ForceAccumulator_Integrate */
int ForceAccumulator_Integrate(void * a1, float* a2);
/* 004ECDB0 SoundSys_InitSoundSys_17 */
float SoundSys_InitSoundSys_17(void * a1) __location("result");
/* 004ECEA0 SoundSys_PlaySoundSample_17 */
void * SoundSys_PlaySoundSample_17(int* a1, float a2, float a3, float a4, float a5, int a6);
/* 004ECED0 SoundSys_Update3DPosition_17 */
void * SoundSys_Update3DPosition_17(int* a1, float a2, float a3, float a4, float a5);
/* 004ECF50 ForceAccumulator_Add */
void * ForceAccumulator_Add(void * a1, int a2);
/* 004ECF80 SoundSys_SetMasterVolume_17 */
void * SoundSys_SetMasterVolume_17(float* a1, void * a2, float* a3);
/* 004ED000 SoundSys_SetFrequency_17 */
int SoundSys_SetFrequency_17(void);
/* 004ED010 SoundSys_StopSoundSample_17 */
void * SoundSys_StopSoundSample_17(void * a1);
/* 004ED510 InputPort_Init */
int InputPort_Init(void);
/* 004ED560 InputPort_LoadParameters */
short* InputPort_LoadParameters(int a1);
/* 004ED5B0 InputPort_OnEvent */
unsigned int InputPort_OnEvent(void);
/* 004ED5C0 InputPort_Process */
struct status_msg* InputPort_Process(void * a1);
/* 004ED5E0 InputPort_Action */
int InputPort_Action(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15);
/* 004ED6B0 LODSettings_Init */
int* LODSettings_Init(void);
/* 004EDB60 LODSettings_LoadParameters */
float* LODSettings_LoadParameters(void * a1);
/* 004EDC60 SoundSys_LoadSoundDef_17 */
unsigned int SoundSys_LoadSoundDef_17(void);
/* 004EDCB0 SoundSys_EvaluateTrigger_17 */
int SoundSys_EvaluateTrigger_17(void);
/* 004EDCC0 SoundSys_AttachLipsync_17 */
int SoundSys_AttachLipsync_17(void);
/* 004EDCE0 SoundSys_Definephysicsobjtype */
void * SoundSys_Definephysicsobjtype(void);
/* 004EDD20 DefinePhysicsObjType */
int DefinePhysicsObjType(long double a1, long double a2, long double a3, long double a4, int a5, char * a6);
/* 004EDFB0 SoundSys_InitSoundSys_18 */
unsigned int SoundSys_InitSoundSys_18(void);
/* 004EDFE0 PhysicsObjType_ParseConfigFile */
char * PhysicsObjType_ParseConfigFile(char * a1);
/* 004EE030 Physics_ObjLoad */
int Physics_ObjLoad(void * a1);
/* 004EE050 SoundSys_PlaySoundSample_18 */
int SoundSys_PlaySoundSample_18(int* a1);
/* 004EE0E0 SoundSys_Update3DPosition_18 */
int SoundSys_Update3DPosition_18(void);
/* 004EE0F0 SoundSys_SetMasterVolume_18 */
int SoundSys_SetMasterVolume_18(void);
/* 004EE100 SoundSys_SetFrequency_18 */
int SoundSys_SetFrequency_18(void);
/* 004EE110 SoundSys_StopSoundSample_18 */
int SoundSys_StopSoundSample_18(void);
/* 004EE120 SoundSys_LoadSoundDef_18 */
void SoundSys_LoadSoundDef_18(void);
/* 004EE140 SoundSys_EvaluateTrigger_18 */
void * SoundSys_EvaluateTrigger_18(char * a1);
/* 004EE1B0 SoundSys_AttachLipsync_18 */
void * SoundSys_AttachLipsync_18(void * a1);
/* 004EE200 SoundSys_InitSoundSys_19 */
int SoundSys_InitSoundSys_19(void * a1);
/* 004EE3B0 SoundSys_PlaySoundSample_19 */
int __fastcall SoundSys_PlaySoundSample_19(short* a1);
/* 004EE410 ScreenGrab_Init */
int* ScreenGrab_Init(void);
/* 004EE600 ScreenGrab_Setup */
int* ScreenGrab_Setup(void * a1);
/* 004EE690 SoundSys_Update3DPosition_19 */
unsigned int SoundSys_Update3DPosition_19(void);
/* 004EE6B0 SoundSys_LocalGrab */
void * SoundSys_LocalGrab(int a1);
/* 004EE8E0 SoundSys_SetMasterVolume_19 */
char * SoundSys_SetMasterVolume_19(int* a1, char * a2, short a3, short a4);
/* 004EE940 SoundSys_SetFrequency_19 */
int SoundSys_SetFrequency_19(void);
/* 004EE960 SoundSys_StopSoundSample_19 */
void SoundSys_StopSoundSample_19(void);
/* 004EE970 CameraBase_Init */
int* CameraBase_Init(void);
/* 004EF860 CameraBase_Cleanup */
int CameraBase_Cleanup(float* a1, int* a2);
/* 004EF8C0 CameraBase_Cleanup_2 */
int CameraBase_Cleanup_2(float* a1, void * a2);
/* 004EF9E0 CameraBase_Update_2 */
int CameraBase_Update_2(long double a1, float* a2, int* a3);
/* 004EFBA0 CameraBase_OnEvent */
int CameraBase_OnEvent(long double a1, long double a2, long double a3, float* a4, float a5);
/* 004EFCE0 CameraBase_Process */
int CameraBase_Process(long double a1, long double a2, long double a3, float* a4, float a5);
/* 004EFF30 CameraBase_Action */
int CameraBase_Action(long double a1, double* a2, int* a3);
/* 004F00B0 CameraBase_Cleanup_3 */
int CameraBase_Cleanup_3(int* a1, int* a2);
/* 004F0110 CameraBase_Cleanup_4 */
int CameraBase_Cleanup_4(short* a1, int* a2);
/* 004F01C0 CameraBase_Cleanup_5 */
int CameraBase_Cleanup_5(int* a1, int* a2);
/* 004F0350 CameraBase_Cleanup_6 */
int CameraBase_Cleanup_6(char * a1, int* a2);
/* 004F0380 CameraBase_Cleanup_7 */
int* CameraBase_Cleanup_7(int a1, int* a2);
/* 004F03A0 CameraBase_Cleanup_8 */
int CameraBase_Cleanup_8(char * a1, int* a2);
/* 004F0400 CameraBase_Cleanup_9 */
int CameraBase_Cleanup_9(char * a1, int* a2);
/* 004F0460 CameraBase_Cleanup_10 */
int CameraBase_Cleanup_10(int* a1, int* a2);
/* 004F04D0 CameraBase_Cleanup_11 */
int CameraBase_Cleanup_11(int a1, int* a2);
/* 004F0500 CameraBase_Cleanup_12 */
int CameraBase_Cleanup_12(char * a1, int* a2);
/* 004F0740 Task_DeclareParameters */
int Task_DeclareParameters(int a1);
/* 004F0780 Task_New */
int Task_New(int a1, void * a2, float a3);
/* 004F0A60 Script_ParseEnumInt32 */
int* Script_ParseEnumInt32(void);
/* 004F0C90 Script_ParseEnumReal32 */
int Script_ParseEnumReal32(int* a1);
/* 004F0CB0 Script_ParseEnumString */
struct status_msg* Script_ParseEnumString(void * a1);
/* 004F0CD0 Script_ExecuteLevelScript */
int* Script_ExecuteLevelScript(void);
/* 004F0CE0 Script_CallNativeHandler */
int Script_CallNativeHandler(int a1);
/* 004F0CF0 Config_Compile */
int Config_Compile(int a1, void * a2, char a3);
/* 004F0D40 Task_New_2 */
int __convention Task_New_2("regparm")(int a1, int a2, int a3, void * a4, int a5);
/* 004F0E10 Level_LoadObjects */
int Level_LoadObjects(int a1, int a2);
/* 004F0E50 Script_Init */
int Script_Init(int a1, char a2, int a3, char a4);
/* 004F0E90 Qtask_Update */
int* Qtask_Update(void);
/* 004F0ED0 Script_EvaluateCondition */
int Script_EvaluateCondition(void);
/* 004F0EE0 Script_FormatString */
int Script_FormatString(void);
/* 004F0EF0 Script_SpawnNewTask_2 */
int Script_SpawnNewTask_2(void);
/* 004F0F00 Script_ParseEnumInt32_2 */
int Script_ParseEnumInt32_2(void);
/* 004F0F10 Script_ParseEnumReal32_2 */
int Script_ParseEnumReal32_2(void);
/* 004F0F20 Script_ParseEnumString_2 */
int Script_ParseEnumString_2(void);
/* 004F0F30 Script_ExecuteLevelScript_2 */
int Script_ExecuteLevelScript_2(void);
/* 004F0F40 Script_CallNativeHandler_2 */
int Script_CallNativeHandler_2(void);
/* 004F0F50 Script_EvaluateCondition_2 */
int Script_EvaluateCondition_2(void);
/* 004F0F60 Script_FormatString_2 */
int Script_FormatString_2(void);
/* 004F0F70 Script_SpawnNewTask_3 */
int Script_SpawnNewTask_3(void);
/* 004F0F80 Script_ParseEnumInt32_3 */
int Script_ParseEnumInt32_3(void);
/* 004F0F90 Script_ParseEnumReal32_3 */
int Script_ParseEnumReal32_3(void);
/* 004F0FA0 Script_ParseEnumString_3 */
int Script_ParseEnumString_3(void);
/* 004F0FB0 Script_ExecuteLevelScript_3 */
int Script_ExecuteLevelScript_3(void);
/* 004F0FC0 Script_CallNativeHandler_3 */
int Script_CallNativeHandler_3(void);
/* 004F0FD0 Script_EvaluateCondition_3 */
int Script_EvaluateCondition_3(void);
/* 004F0FE0 Script_FormatString_3 */
int Script_FormatString_3(void);
/* 004F0FF0 Script_SpawnNewTask_4 */
int Script_SpawnNewTask_4(void);
/* 004F1000 Script_ParseEnumInt32_4 */
int Script_ParseEnumInt32_4(void);
/* 004F1010 Script_ParseEnumReal32_4 */
int Script_ParseEnumReal32_4(void);
/* 004F1020 Script_ParseEnumString_4 */
int Script_ParseEnumString_4(void);
/* 004F1030 Script_ExecuteLevelScript_4 */
int Script_ExecuteLevelScript_4(int a1);
/* 004F1050 Script_EvaluateCondition_4 */
int Script_EvaluateCondition_4(int a1);
/* 004F1080 Script_FormatString_4 */
int Script_FormatString_4(void);
/* 004F1090 Script_LevelqtaskidDAlready */
int* Script_LevelqtaskidDAlready(int a1, void * a2);
/* 004F10E0 Script_SpawnNewTask_5 */
int Script_SpawnNewTask_5(int a1);
/* 004F1110 Script_ParseEnumInt32_5 */
int Script_ParseEnumInt32_5(void * a1);
/* 004F1160 Script_ParseEnumReal32_5 */
int Script_ParseEnumReal32_5(void);
/* 004F1180 Script_ParseEnumString_5 */
void * Script_ParseEnumString_5(int a1);
/* 004F11A0 Script_ExecuteLevelScript_5 */
int* Script_ExecuteLevelScript_5(int a1);
/* 004F11F0 Script_CallNativeHandler_5 */
int Script_CallNativeHandler_5(void);
/* 004F1200 Script_EvaluateCondition_5 */
int Script_EvaluateCondition_5(void);
/* 004F1210 Script_FormatString_5 */
int Script_FormatString_5(void);
/* 004F1220 Script_SpawnNewTask_6 */
int Script_SpawnNewTask_6(void);
/* 004F1230 Script_ParseEnumInt32_6 */
int Script_ParseEnumInt32_6(void);
/* 004F1240 Script_ParseEnumReal32_6 */
int Script_ParseEnumReal32_6(void);
/* 004F1270 Script_ParseEnumString_6 */
int Script_ParseEnumString_6(char * a1, void * a2);
/* 004F1320 Script_ExecuteLevelScript_6 */
int* Script_ExecuteLevelScript_6(int* a1);
/* 004F1340 Script_CallNativeHandler_6 */
char * Script_CallNativeHandler_6(int* a1);
/* 004F13C0 Script_EvaluateCondition_6 */
int Script_EvaluateCondition_6(void * a1, void * a2);
/* 004F1400 Script_Isexists */
int Script_Isexists(int* a1, void * a2);
/* 004F16C0 Script_FormatString_6 */
int* Script_FormatString_6(int* a1);
/* 004F16E0 Script_SpawnNewTask_7 */
int Script_SpawnNewTask_7(int* a1, void * a2);
/* 004F1740 Script_ParseEnumInt32_7 */
char * Script_ParseEnumInt32_7(void * a1);
/* 004F17C0 Script_ParseEnumReal32_7 */
int Script_ParseEnumReal32_7(void);
/* 004F17D0 Script_ParseEnumString_7 */
int Script_ParseEnumString_7(char * a1);
/* 004F1840 Script_ExecuteLevelScript_7 */
int Script_ExecuteLevelScript_7(void);
/* 004F18C0 Script_CallNativeHandler_7 */
unsigned int Script_CallNativeHandler_7(void);
/* 004F1950 Script_EvaluateCondition_7 */
int* Script_EvaluateCondition_7(int a1);
/* 004F1980 Script_FormatString_7 */
int* Script_FormatString_7(int* a1, int a2);
/* 004F19C0 Script_UnableToAllocatePara */
int Script_UnableToAllocatePara(int a1, int a2);
/* 004F1A40 Script_SpawnNewTask_8 */
int Script_SpawnNewTask_8(int a1);
/* 004F1A60 Script_ParseEnumInt32_8 */
int Script_ParseEnumInt32_8(void);
/* 004F1A70 Script_ParseEnumReal32_8 */
int Script_ParseEnumReal32_8(void);
/* 004F1A80 Script_UndefinedParameterTy */
int* Script_UndefinedParameterTy(int* a1, int a2, int a3, int a4, char a5, int a6);
/* 004F1AF0 Script_ParseEnumString_8 */
int Script_ParseEnumString_8(int a1, int a2, char a3, int a4);
/* 004F1B20 Script_UnableToAllocatePara_2 */
int Script_UnableToAllocatePara_2(void);
/* 004F1B50 Script_ExecuteLevelScript_8 */
int Script_ExecuteLevelScript_8(char a1);
/* 004F1B60 Script_CallNativeHandler_8 */
int Script_CallNativeHandler_8(void);
/* 004F1B70 Script_EvaluateCondition_8 */
int Script_EvaluateCondition_8(void);
/* 004F1B80 Script_FormatString_8 */
int Script_FormatString_8(void);
/* 004F1B90 Script_SpawnNewTask_9 */
int Script_SpawnNewTask_9(void);
/* 004F1BA0 Script_ParseEnumInt32_9 */
int Script_ParseEnumInt32_9(void);
/* 004F1BB0 Script_ParseEnumReal32_9 */
int Script_ParseEnumReal32_9(void);
/* 004F1BC0 Script_ParseEnumString_9 */
int Script_ParseEnumString_9(int a1, int a2, int a3);
/* 004F1C20 Script_TooFewParametersInLi */
void Script_TooFewParametersInLi(int* a1, int a2);
/* 004F1C70 Script_ExecuteLevelScript_9 */
int Script_ExecuteLevelScript_9(void);
/* 004F1C90 Script_CallNativeHandler_9 */
int Script_CallNativeHandler_9(void);
/* 004F1CB0 Script_EvaluateCondition_9 */
int Script_EvaluateCondition_9(void);
/* 004F1CD0 Script_FormatString_9 */
int** Script_FormatString_9(int** a1);
/* 004F1D60 Script_SpawnNewTask_10 */
int** Script_SpawnNewTask_10(int** a1, int a2);
/* 004F1D80 Script_ParseEnumInt32_10 */
int* Script_ParseEnumInt32_10(int* a1);
/* 004F1DB0 Script_ParseEnumReal32_10 */
void * Script_ParseEnumReal32_10(void * a1, char * a2);
/* 004F1E00 Script_ParseEnumString_10 */
int Script_ParseEnumString_10(void);
/* 004F1E10 Script_ExecuteLevelScript_10 */
int Script_ExecuteLevelScript_10(void);
/* 004F1E20 Script_CallNativeHandler_10 */
int Script_CallNativeHandler_10(void);
/* 004F1E30 Script_Enumint32 */
int Script_Enumint32(void);
/* 004F1EA0 Script_EvaluateCondition_10 */
int Script_EvaluateCondition_10(void);
/* 004F1EE0 Script_FormatString_10 */
int Script_FormatString_10(void);
/* 004F1F50 Script_SpawnNewTask_11 */
unsigned int Script_SpawnNewTask_11(void);
/* 004F1FC0 Script_ParseEnumInt32_11 */
int Script_ParseEnumInt32_11(void);
/* 004F1FD0 Script_ParseEnumReal32_11 */
int Script_ParseEnumReal32_11(void);
/* 004F1FE0 Script_ParseEnumString_11 */
int Script_ParseEnumString_11(void);
/* 004F1FF0 Script_ExecuteLevelScript_11 */
int Script_ExecuteLevelScript_11(void);
/* 004F2000 Script_CallNativeHandler_11 */
int Script_CallNativeHandler_11(void);
/* 004F2010 Script_EvaluateCondition_11 */
int Script_EvaluateCondition_11(void);
/* 004F2020 Script_FormatString_11 */
int Script_FormatString_11(void);
/* 004F2030 Script_SpawnNewTask_12 */
int Script_SpawnNewTask_12(void);
/* 004F2040 Script_ParseEnumInt32_12 */
int Script_ParseEnumInt32_12(void);
/* 004F2050 Script_ParseEnumReal32_12 */
int Script_ParseEnumReal32_12(int* a1);
/* 004F2060 Script_ParseEnumString_12 */
int Script_ParseEnumString_12(int a1, int a2);
/* 004F2070 Script_ExecuteLevelScript_12 */
void * Script_ExecuteLevelScript_12(int a1, char * a2, void * a3);
/* 004F2140 Script_CallNativeHandler_12 */
int** Script_CallNativeHandler_12(int a1, char * a2);
/* 004F2290 Script_EvaluateCondition_12 */
void Script_EvaluateCondition_12(void * a1);
/* 004F2310 Script_FormatString_12 */
int Script_FormatString_12(void * a1, int a2, int a3);
/* 004F2350 Script_SpawnNewTask_13 */
int Script_SpawnNewTask_13(void * a1, char a2);
/* 004F2390 Script_ParseEnumInt32_13 */
void * Script_ParseEnumInt32_13(void * a1);
/* 004F23D0 Script_ParseEnumReal32_13 */
int Script_ParseEnumReal32_13(void * a1, int a2);
/* 004F2400 EditRigidObj_OnEvent */
int EditRigidObj_OnEvent(void * a1, int* a2);
/* 004F2740 EditRigidObj_Init */
void * EditRigidObj_Init(void);
/* 004F2930 EditRigidObj_LoadParameters */
int EditRigidObj_LoadParameters(int* a1);
/* 004F2AC0 EditRigidObj_Setup */
void * EditRigidObj_Setup(void * a1);
/* 004F2B50 EditRigidObj_Process */
void * EditRigidObj_Process(void * a1);
/* 004F2B90 EditRigidObj_Update */
float* EditRigidObj_Update(float a1);
/* 004F2D50 Script_ParseEnumString_13 */
float* Script_ParseEnumString_13(void * a1);
/* 004F30A0 EditRigidObj_Cleanup */
int EditRigidObj_Cleanup(float a1, void * a2);
/* 004F3240 EditRigidObj_Cleanup_2 */
void * EditRigidObj_Cleanup_2(void * a1, int* a2);
/* 004F3360 Script_ExecuteLevelScript_13 */
unsigned int Script_ExecuteLevelScript_13(void);
/* 004F3380 Script_CallNativeHandler_13 */
int Script_CallNativeHandler_13(void);
/* 004F3390 Script_EvaluateCondition_13 */
struct status_msg* Script_EvaluateCondition_13(void * a1, int a2, int a3, int a4, int* a5, int* a6);
/* 004F3440 AnimTask_Init */
int AnimTask_Init(void);
/* 004F3570 AnimTask_LoadParameters */
int AnimTask_LoadParameters(void * a1, int a2);
/* 004F3610 AnimTask_Process */
int AnimTask_Process(int* a1);
/* 004F36C0 Script_FormatString_13 */
int Script_FormatString_13(void);
/* 004F3AC0 Script_SpawnNewTask_14 */
int* Script_SpawnNewTask_14(void * a1);
/* 004F3B40 Script_ParseEnumInt32_14 */
char Script_ParseEnumInt32_14(int80_t a1, int a2);
/* 004F3BA0 Script_ParseEnumReal32_14 */
int Script_ParseEnumReal32_14(void * a1);
/* 004F3C20 Script_ParseEnumString_14 */
int Script_ParseEnumString_14(void * a1);
/* 004F3D30 Script_ExecuteLevelScript_14 */
int Script_ExecuteLevelScript_14(void * a1, int* a2);
/* 004F3DB0 Script_CallNativeHandler_14 */
int* Script_CallNativeHandler_14(void * a1, int* a2);
/* 004F3E40 Script_EvaluateCondition_14 */
unsigned int Script_EvaluateCondition_14(void);
/* 004F3EF0 Script_FormatString_14 */
void * const Script_FormatString_14(int a1, int a2);
/* 004F3F60 Script_SpawnNewTask_15 */
void * Script_SpawnNewTask_15(int a1);
/* 004F4060 AnimTask_SendChannels */
void * AnimTask_SendChannels(void * a1);
/* 004F40D0 Script_ParseEnumReal32_15 */
int Script_ParseEnumReal32_15(void);
/* 004F40E0 Script_ParseEnumString_15 */
int Script_ParseEnumString_15(void);
/* 004F40F0 Script_ExecuteLevelScript_15 */
int Script_ExecuteLevelScript_15(void);
/* 004F4100 Script_CallNativeHandler_15 */
int Script_CallNativeHandler_15(void);
/* 004F4110 Script_EvaluateCondition_15 */
int Script_EvaluateCondition_15(void);
/* 004F4120 Script_FormatString_15 */
int Script_FormatString_15(void);
/* 004F4130 Script_SpawnNewTask_16 */
int Script_SpawnNewTask_16(void);
/* 004F4140 Script_ParseEnumInt32_16 */
int Script_ParseEnumInt32_16(void);
/* 004F4150 Script_ParseEnumReal32_16 */
void Script_ParseEnumReal32_16(void);
/* 004F4190 Vehicle_Init */
int Vehicle_Init(void);
/* 004F43E0 Vehicle_Setup */
int Vehicle_Setup(void * a1, int a2);
/* 004F45B0 Script_ParseEnumString_16 */
unsigned int Script_ParseEnumString_16(void);
/* 004F45F0 Script_ExecuteLevelScript_16 */
int Script_ExecuteLevelScript_16(void);
/* 004F4600 Script_CallNativeHandler_16 */
void * Script_CallNativeHandler_16(void * a1);
/* 004F4640 Script_EvaluateCondition_16 */
void * Script_EvaluateCondition_16(void * a1);
/* 004F4660 VehicleChild_Dispatch */
void * VehicleChild_Dispatch(void * a1);
/* 004F4680 Script_FormatString_16 */
int Script_FormatString_16(unsigned int a1);
/* 004F46E0 Vehicle_LoadParameters */
int* Vehicle_LoadParameters(void * a1, int* a2);
/* 004F4780 Script_SpawnNewTask_17 */
int Script_SpawnNewTask_17(void * a1, int* a2);
/* 004F4800 CarGun_ConstructPath */
int* CarGun_ConstructPath(unsigned int a1);
/* 004F4820 Script_ParseEnumInt32_17 */
int* Script_ParseEnumInt32_17(void * a1);
/* 004F4850 Script_ParseEnumString_17 */
int Script_ParseEnumString_17(void);
/* 004F4860 Script_ExecuteLevelScript_17 */
int Script_ExecuteLevelScript_17(void);
/* 004F4870 Script_CallNativeHandler_17 */
int Script_CallNativeHandler_17(int a1);
/* 004F4880 Script_EvaluateCondition_17 */
int* Script_EvaluateCondition_17(int a1, int* a2, int* a3, int* a4, float a5);
/* 004F4910 Script_FormatString_17 */
void Script_FormatString_17(void);
/* 004F4940 Script_SpawnNewTask_18 */
void * Script_SpawnNewTask_18(float a1, void * a2);
/* 004F4B00 CutScene_TaskCreate */
int* CutScene_TaskCreate(void);
/* 004F4EE0 CutScene_LoadParameters */
int CutScene_LoadParameters(void * a1);
/* 004F4FB0 CutScene_OnEvent */
int CutScene_OnEvent(void * a1);
/* 004F5050 CutScene_Action */
int CutScene_Action(void * a1);
/* 004F50E0 CutScene_Process */
int* CutScene_Process(void * a1);
/* 004F51D0 CutScene_TaskUpdate */
int* CutScene_TaskUpdate(int80_t a1, void * a2);
/* 004F5400 Script_ParseEnumInt32_18 */
int* Script_ParseEnumInt32_18(void * a1);
/* 004F55D0 CutScene_ApplyFrame */
int* CutScene_ApplyFrame(void * a1, int* a2, int a3, int a4, double a5, char a6);
/* 004F6290 Script_ParseEnumString_18 */
int80_t Script_ParseEnumString_18(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9) __location("fp0");
/* 004F63C0 CutScene_PostLoad */
int CutScene_PostLoad(void * a1, char * a2);
/* 004F6520 CutScene_Cleanup */
int* CutScene_Cleanup(void * a1);
/* 004F6590 Script_ExecuteLevelScript_18 */
unsigned int Script_ExecuteLevelScript_18(void);
/* 004F65B0 Script_CallNativeHandler_18 */
int Script_CallNativeHandler_18(int a1);
/* 004F65C0 Script_EvaluateCondition_18 */
int Script_EvaluateCondition_18(int a1);
/* 004F65D0 Script_FormatString_18 */
int Script_FormatString_18(int a1);
/* 004F65E0 Script_SpawnNewTask_19 */
double* Script_SpawnNewTask_19(void * a1, float a2);
/* 004F66A0 Script_ParseEnumInt32_19 */
int Script_ParseEnumInt32_19(void * a1, int* a2, int* a3);
/* 004F6750 Script_ParseEnumReal32_19 */
void Script_ParseEnumReal32_19(void * a1, int* a2, int* a3, float a4, float a5, int a6);
/* 004F6B00 Script_ParseEnumString_19 */
void * Script_ParseEnumString_19(void * a1);
/* 004F6C00 RainDynCubeObj_LoadParameters */
int* RainDynCubeObj_LoadParameters(void * a1);
/* 004F6D70 Script_ExecuteLevelScript_19 */
int Script_ExecuteLevelScript_19(long double a1, float a2);
/* 004F6FE0 Script_CallNativeHandler_19 */
int Script_CallNativeHandler_19(void * a1);
/* 004F70B0 Script_EvaluateCondition_19 */
int Script_EvaluateCondition_19(void * a1);
/* 004F7120 Script_FormatString_19 */
void * Script_FormatString_19(void * a1, int a2);
/* 004F7170 RainDynCubeObj_Setup */
int RainDynCubeObj_Setup(long double a1, float a2);
/* 004F72E0 RainDynCubeObj_Process */
void * RainDynCubeObj_Process(void * a1);
/* 004F7360 RainDynCubeObj_Init */
int RainDynCubeObj_Init(void);
/* 004F7630 RainDynCubeObj_Action */
int RainDynCubeObj_Action(void * a1);
/* 004F77C0 RainDynCubeObj_Update */
int** RainDynCubeObj_Update(void * a1);
/* 004F7960 Script_ParseEnumInt32_20 */
int** Script_ParseEnumInt32_20(int a1);
/* 004F7990 Script_VisibleCubesD */
int Script_VisibleCubesD(void * a1);
/* 004F7C20 Script_ParseEnumReal32_20 */
int Script_ParseEnumReal32_20(void * a1);
/* 004F7CC0 Script_ParseEnumString_20 */
long double Script_ParseEnumString_20(void * a1, float a2, float a3);
/* 004F7DF0 Script_ExecuteLevelScript_20 */
int Script_ExecuteLevelScript_20(void * a1, float a2);
/* 004F7F00 RainDynCubeObj_OnEvent */
void * RainDynCubeObj_OnEvent(void * a1);
/* 004F8040 Script_CallNativeHandler_20 */
int Script_CallNativeHandler_20(void * a1);
/* 004F80B0 Script_EvaluateCondition_20 */
unsigned int Script_EvaluateCondition_20(void);
/* 004F80E0 Script_FormatString_20 */
int Script_FormatString_20(int a1);
/* 004F80F0 Script_SpawnNewTask_21 */
long double Script_SpawnNewTask_21(float a1);
/* 004F8140 Script_ParseEnumInt32_21 */
void * Script_ParseEnumInt32_21(int a1, int a2, int* a3);
/* 004F8340 TerrainLightMap_Init */
int* TerrainLightMap_Init(void);
/* 004F86E0 TerrainLightMap_LoadParameters */
int TerrainLightMap_LoadParameters(void * a1);
/* 004F8780 TerrainLightMap_Setup */
int TerrainLightMap_Setup(int* a1);
/* 004F8EF0 Script_ParseEnumReal32_21 */
int Script_ParseEnumReal32_21(int a1);
/* 004F8FB0 Script_ParseEnumString_21 */
unsigned int Script_ParseEnumString_21(void);
/* 004F8FD0 Script_ExecuteLevelScript_21 */
int Script_ExecuteLevelScript_21(void);
/* 004F8FE0 Script_CallNativeHandler_21 */
struct status_msg* Script_CallNativeHandler_21(void * a1, void * a2, int a3);
/* 004F90B0 Graph_LoadParameters */
int* Graph_LoadParameters(void * a1);
/* 004F9160 Graph_Process */
void * Graph_Process(void * a1);
/* 004F9180 Graph_Update */
int Graph_Update(void * a1);
/* 004F9200 Script_EvaluateCondition_21 */
int Script_EvaluateCondition_21(void);
/* 004F9210 Script_FormatString_21 */
int Script_FormatString_21(void);
/* 004F9220 Script_SpawnNewTask_22 */
int Script_SpawnNewTask_22(void);
/* 004F9230 Script_ParseEnumInt32_22 */
int Script_ParseEnumInt32_22(void);
/* 004F9240 Script_ParseEnumReal32_22 */
int Script_ParseEnumReal32_22(void);
/* 004F9250 Script_ParseEnumString_22 */
int Script_ParseEnumString_22(void);
/* 004F9260 Script_ExecuteLevelScript_22 */
int Script_ExecuteLevelScript_22(void);
/* 004F9270 Script_CallNativeHandler_22 */
int Script_CallNativeHandler_22(void);
/* 004F9280 Script_EvaluateCondition_22 */
int Script_EvaluateCondition_22(void);
/* 004F9290 Script_FormatString_22 */
void * Script_FormatString_22(int a1);
/* 004F92E0 Script_SpawnNewTask_23 */
double* Script_SpawnNewTask_23(double* a1, void * a2);
/* 004F93B0 Script_ParseEnumInt32_23 */
int Script_ParseEnumInt32_23(void * a1, double* a2);
/* 004F9460 Script_NoFreeNodesizeElemen */
short* Script_NoFreeNodesizeElemen(short a1, int a2);
/* 004F94D0 Script_UndefinedGraphnodeda */
int Script_UndefinedGraphnodeda(void * a1);
/* 004F9510 Script_GraphnodeIdAlreadyUs */
int* Script_GraphnodeIdAlreadyUs(void * a1, int a2, int a3, int a4, float a5, int a6, int a7);
/* 004F9620 Script_ParseEnumReal32_23 */
int Script_ParseEnumReal32_23(void * a1, int a2);
/* 004F96E0 Script_ParseEnumString_23 */
int Script_ParseEnumString_23(void * a1, int a2);
/* 004F9720 Script_ExecuteLevelScript_23 */
void * Script_ExecuteLevelScript_23(void * a1, int a2);
/* 004F9770 Script_CallNativeHandler_23 */
double* Script_CallNativeHandler_23(double* a1, void * a2);
/* 004F98A0 Script_EvaluateCondition_23 */
void * Script_EvaluateCondition_23(float* a1, void * a2, char a3);
/* 004F9A40 Script_FormatString_23 */
int Script_FormatString_23(double* a1, void * a2, double a3, char a4);
/* 004F9B80 Script_SpawnNewTask_24 */
int* Script_SpawnNewTask_24(void * a1, int a2, int a3, int a4);
/* 004F9C10 Script_GraphnodeLinklimitRe */
int Script_GraphnodeLinklimitRe(void * a1, int a2);
/* 004F9C50 Script_ParseEnumInt32_24 */
int Script_ParseEnumInt32_24(int* a1);
/* 004F9CA0 Script_ParseEnumReal32_24 */
int Script_ParseEnumReal32_24(void * a1, int a2);
/* 004F9CD0 Script_ParseEnumString_24 */
char * Script_ParseEnumString_24(int* a1, double* a2, int a3);
/* 004F9DF0 Script_GraphstreamCollision */
void * Script_GraphstreamCollision(char * a1, int a2, int a3);
/* 004F9E70 Script_ExecuteLevelScript_24 */
int Script_ExecuteLevelScript_24(char * a1);
/* 004F9EB0 Script_CallNativeHandler_24 */
int Script_CallNativeHandler_24(void * a1, char * a2, int a3, int* a4, int a5);
/* 004F9FF0 Graph_Open */
int Graph_Open(void * a1);
/* 004FA140 Script_FormatString_24 */
int* Script_FormatString_24(int a1);
/* 004FA160 Script_SpawnNewTask_25 */
int Script_SpawnNewTask_25(void * a1, void * a2);
/* 004FA3B0 Script_ParseEnumInt32_25 */
unsigned int __fastcall Script_ParseEnumInt32_25(unsigned int a1);
/* 004FA4E0 Script_ParseEnumReal32_25 */
int __convention Script_ParseEnumReal32_25("regparm")(int a1, int a2, int a3, void * a4, char a5);
/* 004FA520 Script_ParseEnumString_25 */
int __convention Script_ParseEnumString_25("regparm")(int a1, int a2, int a3, void * a4, char a5);
/* 004FA560 Script_ExecuteLevelScript_25 */
int __convention Script_ExecuteLevelScript_25("regparm")(int a1, int a2, int a3, void * a4, short a5);
/* 004FA5A0 Script_CallNativeHandler_25 */
int __convention Script_CallNativeHandler_25("regparm")(int a1, int a2, int a3, void * a4, short a5);
/* 004FA5E0 Script_EvaluateCondition_25 */
int Script_EvaluateCondition_25(void * a1, int a2);
/* 004FA620 Script_FormatString_25 */
int Script_FormatString_25(void * a1, int a2);
/* 004FA660 Script_SpawnNewTask_26 */
int Script_SpawnNewTask_26(void * a1, int a2);
/* 004FA6A0 Script_ParseEnumInt32_26 */
int Script_ParseEnumInt32_26(void * a1, int a2, int a3);
/* 004FA6E0 Script_ParseEnumReal32_26 */
int Script_ParseEnumReal32_26(void * a1, int a2);
/* 004FA730 Script_ParseEnumString_26 */
int Script_ParseEnumString_26(void * a1, int a2);
/* 004FA7A0 Script_ExecuteLevelScript_26 */
int Script_ExecuteLevelScript_26(void * a1, int a2, int a3);
/* 004FA7E0 Script_CallNativeHandler_26 */
char * Script_CallNativeHandler_26(void * a1, char * a2);
/* 004FA810 Script_EvaluateCondition_26 */
short* Script_EvaluateCondition_26(void * a1, short* a2);
/* 004FA850 Script_FormatString_26 */
int* Script_FormatString_26(void * a1, int* a2);
/* 004FA890 Script_SpawnNewTask_27 */
float* Script_SpawnNewTask_27(void * a1, float* a2);
/* 004FA8D0 Script_ParseEnumInt32_27 */
double* Script_ParseEnumInt32_27(void * a1, double* a2);
/* 004FA910 Script_ParseEnumReal32_27 */
int Script_ParseEnumReal32_27(void * a1, int a2);
/* 004FA950 Script_ParseEnumString_27 */
unsigned int Script_ParseEnumString_27(void * a1, int a2);
/* 004FA9D0 Script_ExecuteLevelScript_27 */
int Script_ExecuteLevelScript_27(void * a1, int a2, int a3);
/* 004FAA10 Script_CallNativeHandler_27 */
unsigned int Script_CallNativeHandler_27(void * a1);
/* 004FAA60 Graph_Init */
void * Graph_Init(void);
/* 004FAE50 Graph_OnEvent */
int Graph_OnEvent(void * a1, int* a2);
/* 004FAEE0 Graph_Action */
int* Graph_Action(int* a1);
/* 004FAFE0 Graph_Cleanup */
int __convention Graph_Cleanup("regparm")(int a1, int a2, int a3, int* a4);
/* 004FB030 Graph_Cleanup_2 */
int* Graph_Cleanup_2(int* a1);
/* 004FB0D0 Graph_Cleanup_3 */
int* Graph_Cleanup_3(int* a1);
/* 004FB110 Script_EvaluateCondition_27 */
unsigned int Script_EvaluateCondition_27(void);
/* 004FB1B0 PhysicsObj_Init */
int PhysicsObj_Init(void);
/* 004FB2C0 PhysicsObj_LoadParameters */
int PhysicsObj_LoadParameters(void * a1, int* a2);
/* 004FB5A0 Script_FormatString_27 */
unsigned int Script_FormatString_27(void);
/* 004FB5E0 Script_SpawnNewTask_28 */
int Script_SpawnNewTask_28(void);
/* 004FB5F0 Script_ParseEnumInt32_28 */
void * Script_ParseEnumInt32_28(void * a1);
/* 004FB700 Script_ParseEnumReal32_28 */
int Script_ParseEnumReal32_28(void * a1, char * a2);
/* 004FB980 Script_ParseEnumString_28 */
void * Script_ParseEnumString_28(void * a1);
/* 004FB9A0 Body_ResolveCollision */
int* Body_ResolveCollision(float a1, float a2);
/* 004FBF00 Script_ExecuteLevelScript_28 */
float Script_ExecuteLevelScript_28(void * a1, float a2, float* a3, float* a4, int a5, int a6) __location("result");
/* 004FBF50 Script_CallNativeHandler_28 */
int Script_CallNativeHandler_28(void * a1, float a2, float a3, int a4, float a5);
/* 004FBF90 Script_EvaluateCondition_28 */
int Script_EvaluateCondition_28(void * a1, float a2, float a3, float a4);
/* 004FC0E0 Script_FormatString_28 */
float* Script_FormatString_28(float a1, float a2, float a3, float a4, float a5, int a6, double* a7);
/* 004FC620 Script_ParseEnumInt32_29 */
int Script_ParseEnumInt32_29(void * a1, int a2, char a3, double* a4);
/* 004FC7B0 Script_ParseEnumReal32_29 */
int Script_ParseEnumReal32_29(void * a1);
/* 004FC840 Script_ParseEnumString_29 */
int Script_ParseEnumString_29(void);
/* 004FC850 Script_ExecuteLevelScript_29 */
int Script_ExecuteLevelScript_29(void);
/* 004FC860 Script_CallNativeHandler_29 */
int Script_CallNativeHandler_29(void);
/* 004FC870 Script_EvaluateCondition_29 */
int Script_EvaluateCondition_29(float* a1, void * a2, float* a3, float* a4);
/* 004FC8E0 Script_FormatString_29 */
float Script_FormatString_29(float a1, float* a2, float a3, float* a4, float a5, float a6) __location("result");
/* 004FCCA0 Script_SpawnNewTask_30 */
int Script_SpawnNewTask_30(void * a1, float a2, float a3, float a4, float a5);
/* 004FCF50 Particle2DDynCubeObjTask_Init */
int Particle2DDynCubeObjTask_Init(void);
/* 004FD020 Particle2DDynCubeObjTask_Process */
int Particle2DDynCubeObjTask_Process(float a1);
/* 004FD4E0 Script_ParseEnumInt32_30 */
float Script_ParseEnumInt32_30(void * a1, float a2) __location("result");
/* 004FD660 Particle2DDynCubeObjTask_LoadParameters */
void * Particle2DDynCubeObjTask_LoadParameters(int* a1);
/* 004FDC20 Script_ParseEnumReal32_30 */
long double Script_ParseEnumReal32_30(void * a1);
/* 004FDCD0 Script_ParseEnumString_30 */
double* Script_ParseEnumString_30(double* a1, void * a2);
/* 004FDD30 Script_ExecuteLevelScript_30 */
void Script_ExecuteLevelScript_30(void * a1, int a2);
/* 004FDD70 Particle2DDynCubeObjTask_Setup */
int Particle2DDynCubeObjTask_Setup(void * a1);
/* 004FDE00 Particle2DDynCubeObjTask_Update */
int Particle2DDynCubeObjTask_Update(float a1, void * a2);
/* 004FDEC0 Script_CallNativeHandler_30 */
unsigned int Script_CallNativeHandler_30(void);
/* 004FDEF0 Script_EvaluateCondition_30 */
int Script_EvaluateCondition_30(void);
/* 004FDF00 Script_FormatString_30 */
struct status_msg* Script_FormatString_30(void * a1, void * a2, unsigned int a3, int* a4, int* a5, int* a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
/* 004FE120 Script_SpawnNewTask_31 */
int Script_SpawnNewTask_31(void * a1, int a2, int* a3, int a4, int a5, int a6, int a7, short a8, int a9);
/* 004FE210 Script_ParseEnumInt32_31 */
int Script_ParseEnumInt32_31(void * a1, int a2, int* a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10, short a11, int a12);
/* 004FE5D0 Script_ParseEnumReal32_31 */
int Script_ParseEnumReal32_31(void * a1, char a2);
/* 004FE5E0 Script_ParseEnumString_31 */
int Script_ParseEnumString_31(void * a1, int a2);
/* 004FE610 Script_ExecuteLevelScript_31 */
double* Script_ExecuteLevelScript_31(void * a1, double* a2);
/* 004FE650 Script_CallNativeHandler_31 */
struct status_msg* Script_CallNativeHandler_31(void * a1, int a2, int a3);
/* 004FE6B0 Script_EvaluateCondition_31 */
struct status_msg* Script_EvaluateCondition_31(void * a1, int a2, int a3);
/* 004FE730 Script_FormatString_31 */
int* Script_FormatString_31(void * a1, char * a2);
/* 004FE7C0 TagItem_Init */
int* TagItem_Init(void);
/* 004FEAC0 Script_SpawnNewTask_32 */
void * Script_SpawnNewTask_32(void * a1, int a2);
/* 004FEB80 Script_ParseEnumInt32_32 */
unsigned int Script_ParseEnumInt32_32(void);
/* 004FEC10 Script_ParseEnumReal32_32 */
char * Script_ParseEnumReal32_32(int a1, float* a2, int* a3, char * a4, float a5, int a6, float* a7);
/* 005008F0 SplineObj_Process */
int SplineObj_Process(float a1);
/* 00500EF0 SplineObj_Update */
float* SplineObj_Update(int* a1);
/* 00501D70 Physics_EvaluateAreaCriteria */
float* Physics_EvaluateAreaCriteria(void * a1);
/* 005020C0 Physics_SimulateRigidBody */
long double Physics_SimulateRigidBody(float a1);
/* 00502130 Physics_CheckHullCollision */
void * Physics_CheckHullCollision(int a1);
/* 00502180 Physics_ApplyImpulse */
long double Physics_ApplyImpulse(float a1, int a2);
/* 00502200 Physics_UpdateForces */
int* Physics_UpdateForces(int a1, int a2, int a3);
/* 00502250 SplineObj_Init */
int* SplineObj_Init(void);
/* 00502740 SplineObj_Setup */
int SplineObj_Setup(void * a1, char * a2);
/* 00503070 SplineObj_OnEvent */
int* SplineObj_OnEvent(void * a1, int* a2);
/* 005030F0 SplineObj_Cleanup */
void * SplineObj_Cleanup(void * a1, int a2);
/* 00503120 SplineObj_Cleanup_2 */
void * SplineObj_Cleanup_2(void * a1, int a2);
/* 00503150 SplineObj_Cleanup_3 */
void * SplineObj_Cleanup_3(void * a1, int a2);
/* 00503180 SplineObj_Cleanup_4 */
void * SplineObj_Cleanup_4(void * a1, int a2);
/* 005031B0 Physics_SolveConstraints */
int Physics_SolveConstraints(void);
/* 005031F0 Physics_InterpolateWaypoint_2 */
int Physics_InterpolateWaypoint_2(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, float* a9, int* a10, float a11);
/* 005033F0 EditorRigidObj_Init */
int EditorRigidObj_Init(void);
/* 005034C0 EditorRigidObj_Update */
unsigned int EditorRigidObj_Update(void);
/* 005034D0 EditorRigidObj_OnEvent */
int EditorRigidObj_OnEvent(void);
/* 005034E0 SimpointObj_Init */
int* SimpointObj_Init(void);
/* 005035B0 SimpointObj_Process */
int* SimpointObj_Process(int* a1);
/* 00503BD0 Physics_EvaluateAreaCriteria_2 */
unsigned int Physics_EvaluateAreaCriteria_2(void);
/* 00503BF0 Physics_SimulateRigidBody_2 */
int Physics_SimulateRigidBody_2(void);
/* 00503C00 Physics_CheckHullCollision_2 */
struct status_msg* Physics_CheckHullCollision_2(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, int* a8, char a9);
/* 00503CC0 Physics_VirmodelIsNull */
struct status_msg* Physics_VirmodelIsNull(void * a1, int a2, int a3, int a4, int* a5);
/* 00503D50 Physics_ApplyImpulse_2 */
int Physics_ApplyImpulse_2(void * a1, char a2);
/* 00503D60 PhysicsMagicObj_Init */
void * PhysicsMagicObj_Init(void);
/* 00503DF0 PhysicsMagicObj_LoadParameters */
int* PhysicsMagicObj_LoadParameters(int* a1, float a2);
/* 00503F20 PhysicsMagicObj_Setup */
void * PhysicsMagicObj_Setup(void * a1, float a2);
/* 00504280 Physics_SolveConstraints_2 */
unsigned int Physics_SolveConstraints_2(void);
/* 005042A0 Physics_CalculateSplineLength_3 */
int Physics_CalculateSplineLength_3(void);
/* 005042B0 Physics_InterpolateWaypoint_3 */
double* Physics_InterpolateWaypoint_3(void * a1, double* a2);
/* 005043B0 AreaActivate_Init */
int* AreaActivate_Init(void);
/* 00504530 AreaActivate_Update */
int AreaActivate_Update(void * a1);
/* 00504590 AreaActivate_OnEvent */
int AreaActivate_OnEvent(void * a1);
/* 005045F0 AreaActivate_Setup */
int AreaActivate_Setup(void * a1);
/* 005048A0 AreaActivate_Process */
int AreaActivate_Process(void * a1);
/* 00504970 AreaActivate_LoadParameters */
void * AreaActivate_LoadParameters(void * a1);
/* 005049F0 Physics_SimulateRigidBody_3 */
unsigned int Physics_SimulateRigidBody_3(void);
/* 00504A30 Physics_UnableToRegisterArea */
int Physics_UnableToRegisterArea(int* a1, int a2);
/* 00504A90 Physics_CheckHullCollision_3 */
int Physics_CheckHullCollision_3(int a1);
/* 00504AC0 Physics_ApplyImpulse_3 */
int Physics_ApplyImpulse_3(void * a1);
/* 00504AD0 EditRigidObjAttachedToBone_LoadParameters */
int EditRigidObjAttachedToBone_LoadParameters(int* a1);
/* 00504BB0 EditRigidObjAttachedToBone_Process */
int EditRigidObjAttachedToBone_Process(void * a1);
/* 00504C50 EditRigidObjAttachedToBone_Init */
int* EditRigidObjAttachedToBone_Init(void);
/* 00504D90 EditRigidObjAttachedToBone_Update */
int EditRigidObjAttachedToBone_Update(void);
/* 00504DB0 EditRigidObjAttachedToBone_OnEvent */
int EditRigidObjAttachedToBone_OnEvent(void);
/* 00504DC0 EditRigidObjAttachedToBone_Process_2 */
void * EditRigidObjAttachedToBone_Process_2(int* a1, int* a2);
/* 00504DF0 EditRigidObjAttachedToBone_Action */
int EditRigidObjAttachedToBone_Action(void);
/* 00504E00 EditRigidObjAttachedToBone_OnTick */
int EditRigidObjAttachedToBone_OnTick(void);
/* 00504E10 MenuItemTask_Init */
int MenuItemTask_Init(void);
/* 00504EF0 MenuItemTask_LoadParameters */
void * MenuItemTask_LoadParameters(void * a1);
/* 005055A0 Physics_SolveConstraints_3 */
unsigned int Physics_SolveConstraints_3(void);
/* 005055D0 Physics_CalculateSplineLength_4 */
int Physics_CalculateSplineLength_4(void * a1, int a2);
/* 00505600 Physics_InterpolateWaypoint_4 */
struct status_msg* Physics_InterpolateWaypoint_4(void * a1);
/* 00505630 MenuItem_Init */
int MenuItem_Init(void);
/* 00505710 MenuItem_LoadParameters */
int MenuItem_LoadParameters(void * a1, int a2);
/* 005058E0 Physics_EvaluateAreaCriteria_4 */
unsigned int Physics_EvaluateAreaCriteria_4(void);
/* 00505920 Physics_SimulateRigidBody_4 */
void * const __convention Physics_SimulateRigidBody_4("regparm")(int a1, int a2, void * a3, void * a4, int a5, int a6);
/* 005059D0 Physics_CheckHullCollision_4 */
int Physics_CheckHullCollision_4(void * a1, int a2);
/* 00505A30 Physics_ApplyImpulse_4 */
int Physics_ApplyImpulse_4(void * a1);
/* 00505A80 Physics_UpdateForces_4 */
int Physics_UpdateForces_4(void * a1);
/* 00505AD0 Physics_MenuitemMoveCalledWi */
int Physics_MenuitemMoveCalledWi(void * a1, int a2);
/* 00505C10 Physics_SolveConstraints_4 */
void * Physics_SolveConstraints_4(void * a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8);
/* 00505C50 Physics_CalculateSplineLength_5 */
int Physics_CalculateSplineLength_5(void);
/* 00505C60 Physics_InterpolateWaypoint_5 */
int Physics_InterpolateWaypoint_5(void);
/* 00505C70 Physics_EvaluateAreaCriteria_5 */
int Physics_EvaluateAreaCriteria_5(void);
/* 00505C80 Physics_SimulateRigidBody_5 */
int Physics_SimulateRigidBody_5(void);
/* 00505C90 Container_Init */
int Container_Init(void);
/* 00505D30 Container_Update */
unsigned int Container_Update(void);
/* 00505D40 Container_OnEvent */
int Container_OnEvent(void);
/* 00505F60 TextureModifier_Init */
int* TextureModifier_Init(void);
/* 005062A0 TextureModifier_LoadParameters */
int TextureModifier_LoadParameters(int* a1);
/* 00506C60 Physics_ApplyImpulse_5 */
void Physics_ApplyImpulse_5(void);
/* 00506CB0 Physics_UpdateForces_5 */
unsigned int Physics_UpdateForces_5(void);
/* 00506CD0 Physics_SolveConstraints_5 */
struct status_msg* Physics_SolveConstraints_5(void * a1, void * a2, int a3);
/* 00506F00 HeightMap_Enter */
void * HeightMap_Enter(void * a1);
/* 00506FA0 HeightMap_Init */
int* HeightMap_Init(void);
/* 00507340 HeightMap_LoadParameters */
void * HeightMap_LoadParameters(void * a1);
/* 00507410 HeightMap_Setup */
int HeightMap_Setup(int* a1);
/* 00507D40 Physics_InterpolateWaypoint_6 */
unsigned int Physics_InterpolateWaypoint_6(void);
/* 00507D60 Physics_EvaluateAreaCriteria_6 */
struct status_msg* Physics_EvaluateAreaCriteria_6(void * a1, void * a2, int a3);
/* 00507E70 Physics_SimulateRigidBody_6 */
int Physics_SimulateRigidBody_6(void);
/* 00507E80 Physics_CheckHullCollision_6 */
unsigned int Physics_CheckHullCollision_6(void);
/* 00507E90 Physics_ApplyImpulse_6 */
int Physics_ApplyImpulse_6(int* a1, int a2);
/* 00507EC0 Physics_UpdateForces_6 */
short* Physics_UpdateForces_6(int* a1, int a2);
/* 00507F10 EditCamera_Init */
void * EditCamera_Init(void);
/* 00508350 EditCamera_LoadParameters */
int* EditCamera_LoadParameters(void * a1);
/* 00508410 EditCamera_OnParsed */
char * EditCamera_OnParsed(void * a1, char * a2);
/* 005085E0 Physics_SolveConstraints_6 */
int* Physics_SolveConstraints_6(void);
/* 00508610 Physics_CalculateSplineLength_7 */
int Physics_CalculateSplineLength_7(void);
/* 00508620 Physics_InterpolateWaypoint_7 */
float* Physics_InterpolateWaypoint_7(double* a1, float* a2, int a3);
/* 00508940 Physics_EvaluateAreaCriteria_7 */
float* Physics_EvaluateAreaCriteria_7(double* a1, float* a2, double* a3, float* a4, int a5);
/* 00508D60 Physics_SimulateRigidBody_7 */
void Physics_SimulateRigidBody_7(void);
/* 00508D70 Sync_Init */
int Sync_Init(void);
/* 00508E40 Sync_Setup */
int Sync_Setup(int* a1);
/* 00508F30 Sync_OnEvent */
unsigned int Sync_OnEvent(void);
/* 00508F60 Sync_Process */
int Sync_Process(void);
/* 00508F70 Physics_CheckHullCollision_7 */
int Physics_CheckHullCollision_7(void);
/* 00508F80 Physics_ApplyImpulse_7 */
int Physics_ApplyImpulse_7(void);
/* 00508F90 Physics_UpdateForces_7 */
int Physics_UpdateForces_7(void);
/* 00508FA0 AIGraph_Init */
void * AIGraph_Init(void);
/* 005092A0 AIGraph_Cleanup */
char * AIGraph_Cleanup(int* a1);
/* 005092E0 Physics_SolveConstraints_7 */
void * Physics_SolveConstraints_7(void * a1);
/* 00509340 Physics_CalculateSplineLength_8 */
int Physics_CalculateSplineLength_8(void * a1);
/* 00509390 Physics_InterpolateWaypoint_8 */
int Physics_InterpolateWaypoint_8(void * a1, int a2, int a3);
/* 005093C0 AIGraph_Cleanup_2 */
int AIGraph_Cleanup_2(void * a1, int a2);
/* 00509480 AIGraph_Action */
int AIGraph_Action(void * a1);
/* 00509520 AIGraph_Process */
int AIGraph_Process(void * a1, int* a2);
/* 00509610 AIGraph_Setup */
int AIGraph_Setup(void * a1);
/* 00509650 Physics_EvaluateAreaCriteria_8 */
unsigned int Physics_EvaluateAreaCriteria_8(void);
/* 005096A0 Physics_SimulateRigidBody_8 */
int Physics_SimulateRigidBody_8(void);
/* 005096C0 Physics_CheckHullCollision_8 */
void * Physics_CheckHullCollision_8(void * a1, int a2, int a3);
/* 005096F0 Physics_ApplyImpulse_8 */
int Physics_ApplyImpulse_8(int* a1, void * a2, double* a3);
/* 00509860 Physics_UpdateForces_8 */
int Physics_UpdateForces_8(void);
/* 00509870 Physics_SolveConstraints_8 */
int Physics_SolveConstraints_8(void);
/* 00509880 Physics_CalculateSplineLength_9 */
int Physics_CalculateSplineLength_9(void);
/* 00509890 Physics_InterpolateWaypoint_9 */
int Physics_InterpolateWaypoint_9(void * a1, int a2);
/* 005098A0 Physics_EvaluateAreaCriteria_9 */
int Physics_EvaluateAreaCriteria_9(void);
/* 005098B0 Physics_Local */
int Physics_Local(void);
/* 005098D0 Physics_Local_2 */
int Physics_Local_2(void);
/* 005098F0 Physics_SimulateRigidBody_9 */
int Physics_SimulateRigidBody_9(FILETIME* a1, FILETIME* a2);
/* 00509910 Physics_CheckHullCollision_9 */
int Physics_CheckHullCollision_9(void);
/* 00509920 Physics_ApplyImpulse_9 */
int Physics_ApplyImpulse_9(void);
/* 00509930 Physics_QvertexDrawstrip */
int Physics_QvertexDrawstrip(void);
/* 00509960 Physics_UpdateForces_9 */
int Physics_UpdateForces_9(void);
/* 00509980 Physics_CouldNotCreateDirect */
int Physics_CouldNotCreateDirect(void);
/* 00509A40 Physics_SolveConstraints_9 */
int __stdcall Physics_SolveConstraints_9(void * a1);
/* 00509CC0 Physics_CalculateSplineLength_10 */
int Physics_CalculateSplineLength_10(int a1);
/* 00509CF0 Physics_InterpolateWaypoint_10 */
void Physics_InterpolateWaypoint_10(void);
/* 00509E90 Physics_EvaluateAreaCriteria_10 */
int* Physics_EvaluateAreaCriteria_10(void);
/* 00509F00 Physics_SimulateRigidBody_10 */
int Physics_SimulateRigidBody_10(int a1);
/* 0050A050 Physics_CheckHullCollision_10 */
HANDLE Physics_CheckHullCollision_10(int a1, int a2, int a3, int a4);
/* 0050A450 Physics_ApplyImpulse_10 */
unsigned int Physics_ApplyImpulse_10(void * a1, char * a2, unsigned int a3);
/* 0050A490 Physics_UpdateForces_10 */
unsigned int Physics_UpdateForces_10(void * a1, char * a2, unsigned int a3);
/* 0050A510 Physics_SolveConstraints_10 */
void * Physics_SolveConstraints_10(void * a1);
/* 0050A550 Physics_CalculateSplineLength_11 */
void * Physics_CalculateSplineLength_11(void * a1);
/* 0050A5D0 Physics_InterpolateWaypoint_11 */
int Physics_InterpolateWaypoint_11(int* a1, PSTR a2);
/* 0050A620 Physics_EvaluateAreaCriteria_11 */
long double Physics_EvaluateAreaCriteria_11(int* a1, int a2, int a3);
/* 0050A670 Physics_SimulateRigidBody_11 */
void * Physics_SimulateRigidBody_11(int* a1);
/* 0050A6A0 Physics_CheckHullCollision_11 */
int Physics_CheckHullCollision_11(void * a1);
/* 0050A6C0 Physics_ApplyImpulse_11 */
int* Physics_ApplyImpulse_11(void);
/* 0050A830 Physics_UpdateForces_11 */
int* Physics_UpdateForces_11(int* a1);
/* 0050A940 Physics_SolveConstraints_11 */
void ** Physics_SolveConstraints_11(void ** a1);
/* 0050AA70 Physics_CalculateSplineLength_12 */
int* Physics_CalculateSplineLength_12(int a1, int a2, float a3);
/* 0050AC90 Physics_CouldnTGetSurfaceDes */
int Physics_CouldnTGetSurfaceDes(int* a1);
/* 0050AD90 Physics_InterpolateWaypoint_12 */
int Physics_InterpolateWaypoint_12(int* a1);
/* 0050B4C0 Physics_EvaluateAreaCriteria_12 */
int Physics_EvaluateAreaCriteria_12(int a1, int a2);
/* 0050B4F0 Physics_CouldnTGetSurfacedes */
int Physics_CouldnTGetSurfacedes(int* a1, int a2, int a3, int* a4, int* a5, int* a6);
/* 0050BC00 Physics_SimulateRigidBody_12 */
int __stdcall Physics_SimulateRigidBody_12(int a1);
/* 0050BD70 Physics_CheckHullCollision_12 */
int Physics_CheckHullCollision_12(void);
/* 0050BD80 Physics_ApplyImpulse_12 */
int Physics_ApplyImpulse_12(void);
/* 0050BE10 Physics_UpdateForces_12 */
void * Physics_UpdateForces_12(int* a1);
/* 0050BE70 Physics_SolveConstraints_12 */
int Physics_SolveConstraints_12(void * a1);
/* 0050BF20 Physics_CalculateSplineLength_13 */
int Physics_CalculateSplineLength_13(float a1, int a2, float a3, int a4, float a5, int a6, int a7, int a8, int a9);
/* 0050D4C0 Physics_InterpolateWaypoint_13 */
int** Physics_InterpolateWaypoint_13(int* a1);
/* 0050D7E0 Physics_EvaluateAreaCriteria_13 */
int Physics_EvaluateAreaCriteria_13(void * a1);
/* 0050DC30 Physics_SimulateRigidBody_13 */
int Physics_SimulateRigidBody_13(void);
/* 0050DE00 Physics_CheckHullCollision_13 */
int Physics_CheckHullCollision_13(void * a1);
/* 0050E1E0 Physics_ApplyImpulse_13 */
void * Physics_ApplyImpulse_13(void * a1);
/* 0050E520 Physics_UpdateForces_13 */
void * Physics_UpdateForces_13(void * a1);
/* 0050E7F0 Physics_SolveConstraints_13 */
int Physics_SolveConstraints_13(void * a1);
/* 0050EC00 Physics_CalculateSplineLength_14 */
int Physics_CalculateSplineLength_14(void);
/* 0050EC40 Physics_InterpolateWaypoint_14 */
int* Physics_InterpolateWaypoint_14(void * a1);
/* 0050EDC0 Physics_EvaluateAreaCriteria_14 */
void Physics_EvaluateAreaCriteria_14(float a1);
/* 0050F070 Physics_Offscreenbuffersprit */
int Physics_Offscreenbuffersprit(void * a1);
/* 0050F770 Physics_SimulateRigidBody_14 */
int Physics_SimulateRigidBody_14(void * a1);
/* 0050FAC0 Physics_CheckHullCollision_14 */
int Physics_CheckHullCollision_14(void);
/* 0050FAE0 Physics_ApplyImpulse_14 */
int* Physics_ApplyImpulse_14(void * a1);
/* 0050FD00 Physics_UpdateForces_14 */
void * Physics_UpdateForces_14(void * a1);
/* 0050FD20 Physics_SolveConstraints_14 */
int Physics_SolveConstraints_14(int* a1, float a2);
/* 0050FE40 Physics_CalculateSplineLength_15 */
int Physics_CalculateSplineLength_15(int* a1);
/* 0050FE60 Physics_InterpolateWaypoint_15 */
int Physics_InterpolateWaypoint_15(void);
/* 00510010 Terrain_RenderQuadtree */
int Terrain_RenderQuadtree(void);
/* 00511500 Terrain_UpdateWaterWaves */
int Terrain_UpdateWaterWaves(void);
/* 005116B0 Terrain_RenderWaterSurface */
void * Terrain_RenderWaterSurface(void * a1);
/* 005116D0 Terrain_ConnectGraphNode */
int Terrain_ConnectGraphNode(double* a1);
/* 00512040 Terrain_SampleHeightmap */
int Terrain_SampleHeightmap(int a1, int a2, int a3, int a4, int a5, int a6, int* a7, int* a8, int* a9, char a10, char a11, char a12);
/* 005122B0 Terrain_CalculateNormals */
int Terrain_CalculateNormals(int a1, int a2);
/* 005124C0 BoneDynCubeObj_LoadParameters */
int BoneDynCubeObj_LoadParameters(void * a1);
/* 005125A0 Terrain_BuildMipMaps */
int Terrain_BuildMipMaps(void);
/* 005125C0 Terrain_RenderQuadtree_2 */
float Terrain_RenderQuadtree_2(float a1, void * a2) __location("result");
/* 005127D0 Terrain_SelectTerrainLOD_2 */
unsigned int Terrain_SelectTerrainLOD_2(void);
/* 005127E0 Terrain_UpdateWaterWaves_2 */
int Terrain_UpdateWaterWaves_2(void * a1);
/* 00512820 Terrain_Glowreadbufferprimit */
int Terrain_Glowreadbufferprimit(void);
/* 00512920 Terrain_RenderWaterSurface_2 */
int Terrain_RenderWaterSurface_2(void);
/* 00512940 Terrain_ConnectGraphNode_2 */
int Terrain_ConnectGraphNode_2(int a1);
/* 00512BA0 Terrain_SampleHeightmap_2 */
int Terrain_SampleHeightmap_2(void);
/* 00512C30 Terrain_Draw */
int __stdcall Terrain_Draw(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, double a9, double a10, double a11, double a12);
/* 005144E0 Terrain_UnknownBlendmode */
int Terrain_UnknownBlendmode(int a1);
/* 00514680 Terrain_OutOfTerrainRenderch */
int* Terrain_OutOfTerrainRenderch(int a1, int a2);
/* 00514760 Terrain_BuildMipMaps_2 */
unsigned int Terrain_BuildMipMaps_2(char a1, char a2, int a3, int* a4);
/* 00516600 Terrain_RenderQuadtree_3 */
int* Terrain_RenderQuadtree_3(void);
/* 00516640 Terrain_SelectTerrainLOD_3 */
int Terrain_SelectTerrainLOD_3(void);
/* 005166F0 Terrain_UpdateWaterWaves_3 */
int Terrain_UpdateWaterWaves_3(void);
/* 00516770 Terrain_RenderWaterSurface_3 */
char * Terrain_RenderWaterSurface_3(char * a1);
/* 00516810 Terrain_ConnectGraphNode_3 */
int80_t Terrain_ConnectGraphNode_3(long double a1) __location("fp0");
/* 0051682D Terrain_SampleHeightmap_3 */
long double __convention Terrain_SampleHeightmap_3("regparm")(int a1, short a2, long double a3, int a4, int a5);
/* 005168E0 Terrain_CalculateNormals_3 */
int80_t Terrain_CalculateNormals_3(long double a1) __location("fp0");
/* 005168FD Terrain_BuildMipMaps_3 */
long double __convention Terrain_BuildMipMaps_3("regparm")(int a1, short a2, long double a3, int a4, int a5);
/* 005169B0 Terrain_RenderQuadtree_4 */
char * Terrain_RenderQuadtree_4(char * a1, char * a2, int a3);
/* 00516AD3 Terrain_SelectTerrainLOD_4 */
long double Terrain_SelectTerrainLOD_4(char * a1);
/* 00516B20 Terrain_UpdateWaterWaves_4 */
char * Terrain_UpdateWaterWaves_4(char * a1, char * a2, char * a3, char * a4, char * a5);
/* 00516C67 Terrain_RenderWaterSurface_4 */
int Terrain_RenderWaterSurface_4(PSTR a1);
/* 00516C91 Terrain_ConnectGraphNode_4 */
unsigned int Terrain_ConnectGraphNode_4(char * a1, int a2, unsigned int a3, int* a4);
/* 00516D79 Terrain_SampleHeightmap_4 */
unsigned int Terrain_SampleHeightmap_4(char * a1, int a2, unsigned int a3, int* a4);
/* 00516E83 Terrain_CalculateNormals_4 */
int Terrain_CalculateNormals_4(int a1);
/* 00516F14 Terrain_BuildMipMaps_4 */
char * Terrain_BuildMipMaps_4(char * a1, char * a2, int a3);
/* 00517260 Terrain_SelectTerrainLOD_5 */
int Terrain_SelectTerrainLOD_5(int a1, void ** a2, char * a3, int a4);
/* 00517510 Terrain_UpdateWaterWaves_5 */
int Terrain_UpdateWaterWaves_5(char * a1);
/* 00517570 Terrain_RenderWaterSurface_5 */
int80_t Terrain_RenderWaterSurface_5(char * a1) __location("fp0");
/* 00517580 Terrain_ConnectGraphNode_5 */
int Terrain_ConnectGraphNode_5(char * a1);
/* 005175A0 Terrain_TextureFileNotOfRequ */
int* Terrain_TextureFileNotOfRequ(int* a1);
/* 005177F0 Terrain_SampleHeightmap_5 */
int Terrain_SampleHeightmap_5(void * a1);
/* 00517840 Terrain_CalculateNormals_5 */
void Terrain_CalculateNormals_5(int* a1);
/* 00517890 Terrain_BuildMipMaps_5 */
void ** Terrain_BuildMipMaps_5(void ** a1, int a2);
/* 005178E0 Terrain_RenderQuadtree_6 */
void ** Terrain_RenderQuadtree_6(void ** a1, int a2);
/* 00517940 Terrain_SelectTerrainLOD_6 */
void ** Terrain_SelectTerrainLOD_6(void * a1, int a2);
/* 00517980 Terrain_UpdateWaterWaves_6 */
int* Terrain_UpdateWaterWaves_6(int* a1, int a2);
/* 005179C0 Terrain_RenderWaterSurface_6 */
int Terrain_RenderWaterSurface_6(void * a1);
/* 005179D0 Terrain_ConnectGraphNode_6 */
int Terrain_ConnectGraphNode_6(char * a1);
/* 00517A00 Terrain_SampleHeightmap_6 */
int* Terrain_SampleHeightmap_6(char * a1);
/* 00517A30 Terrain_CalculateNormals_6 */
int* Terrain_CalculateNormals_6(int* a1, int a2, int a3);
/* 00517B00 Terrain_BuildMipMaps_6 */
int Terrain_BuildMipMaps_6(int a1, int* a2, int* a3, int a4);
/* 00517C90 Terrain_RenderQuadtree_7 */
short* Terrain_RenderQuadtree_7(char * a1, int a2, short* a3, short* a4, int a5, int a6, int* a7);
/* 00517DD0 Terrain_SelectTerrainLOD_7 */
short* Terrain_SelectTerrainLOD_7(char * a1, int a2, short* a3, short* a4, int a5, int a6, int* a7);
/* 00517F00 Terrain_UpdateWaterWaves_7 */
int* Terrain_UpdateWaterWaves_7(int* a1, int a2, int* a3, int a4, int a5, int a6, int* a7);
/* 00517FD0 Terrain_RenderWaterSurface_7 */
void * Terrain_RenderWaterSurface_7(void * a1, int a2, int a3, int a4, char * a5, int a6, int* a7, int a8, int* a9);
/* 00518130 Terrain_ConnectGraphNode_7 */
double* Terrain_ConnectGraphNode_7(double* a1, int a2, int a3, double a4, double a5, double a6);
/* 00518190 Terrain_SampleHeightmap_7 */
long double Terrain_SampleHeightmap_7(double* a1, double a2);
/* 005181C0 Terrain_CalculateNormals_7 */
long double Terrain_CalculateNormals_7(double* a1, double a2);
/* 005181F0 Terrain_BuildMipMaps_7 */
void * Terrain_BuildMipMaps_7(void ** a1);
/* 00518230 Terrain_RenderQuadtree_8 */
int Terrain_RenderQuadtree_8(int a1);
/* 00518240 Terrain_SelectTerrainLOD_8 */
int Terrain_SelectTerrainLOD_8(void);
/* 00518250 Terrain_UpdateWaterWaves_8 */
int Terrain_UpdateWaterWaves_8(int a1);
/* 00518260 Terrain_RenderWaterSurface_8 */
int Terrain_RenderWaterSurface_8(void);
/* 00518290 Terrain_ConnectGraphNode_8 */
int Terrain_ConnectGraphNode_8(void);
/* 005182B0 Terrain_SampleHeightmap_8 */
int Terrain_SampleHeightmap_8(int* a1, float* a2, float* a3);
/* 005183D0 Terrain_CalculateNormals_8 */
int Terrain_CalculateNormals_8(void);
/* 00518550 Terrain_BuildMipMaps_8 */
int Terrain_BuildMipMaps_8(void);
/* 005186C0 Terrain_RenderQuadtree_9 */
int Terrain_RenderQuadtree_9(int* a1);
/* 00518720 Terrain_SelectTerrainLOD_9 */
int Terrain_SelectTerrainLOD_9(int a1);
/* 00518760 GraphNode_Init */
int* GraphNode_Init(void);
/* 00518890 GraphNode_LoadParameters */
void * GraphNode_LoadParameters(void * a1);
/* 00518900 GraphNode_OnEvent */
unsigned int GraphNode_OnEvent(void);
/* 00518930 Water_Process */
int Water_Process(void * a1, float a2);
/* 00518CA0 Water_Setup */
double* Water_Setup(void * a1, int* a2);
/* 00518EF0 Water_Init */
int* Water_Init(void);
/* 00519290 Water_LoadParameters */
void * Water_LoadParameters(void * a1);
/* 00519650 Terrain_UpdateWaterWaves_9 */
unsigned int Terrain_UpdateWaterWaves_9(void);
/* 00519690 Terrain_RenderWaterSurface_9 */
void * Terrain_RenderWaterSurface_9(int a1);
/* 005196D0 Terrain_ConnectGraphNode_9 */
int Terrain_ConnectGraphNode_9(int* a1);
/* 00519710 GFXCapsViewer_Init */
int GFXCapsViewer_Init(void);
/* 00519750 GFXCapsViewer_Update */
unsigned int GFXCapsViewer_Update(void);
/* 00519760 ShadowTask_Init */
int* ShadowTask_Init(void);
/* 00519820 ShadowTask_Update */
unsigned int ShadowTask_Update(void);
/* 00519850 SplinePathNodeQTask_Init */
int* SplinePathNodeQTask_Init(void);
/* 00519A60 SplinePathNodeQTask_Setup */
int SplinePathNodeQTask_Setup(void * a1);
/* 00519AD0 SplinePathNodeQTask_LoadParameters */
int SplinePathNodeQTask_LoadParameters(void * a1);
/* 00519BA0 Terrain_SampleHeightmap_9 */
unsigned int Terrain_SampleHeightmap_9(void);
/* 00519BD0 Terrain_CalculateNormals_9 */
float Terrain_CalculateNormals_9(float a1) __location("result");
/* 0051A0C0 Terrain_BuildMipMaps_9 */
long double Terrain_BuildMipMaps_9(int a1, float a2);
/* 0051A110 Terrain_RenderQuadtree_10 */
void * Terrain_RenderQuadtree_10(void * a1);
/* 0051A160 Terrain_SelectTerrainLOD_10 */
int Terrain_SelectTerrainLOD_10(float a1, int a2);
/* 0051A1D0 SplinePathDynCubeObj_Init */
int SplinePathDynCubeObj_Init(void);
/* 0051A260 SplinePathDynCubeObj_Update */
unsigned int SplinePathDynCubeObj_Update(void);
/* 0051A280 SplinePathDynCubeObj_OnEvent */
int SplinePathDynCubeObj_OnEvent(int a1, float a2, int a3, float a4);
/* 0051A370 SplinePathDynCubeObj_Process */
float* SplinePathDynCubeObj_Process(float* a1, float a2, float a3, float a4);
/* 0051A4A0 Terrain_UpdateWaterWaves_10 */
float* Terrain_UpdateWaterWaves_10(float a1, float* a2, float a3, float a4);
/* 0051A8C0 Terrain_RenderWaterSurface_10 */
void Terrain_RenderWaterSurface_10(float a1);
/* 0051ACB0 Terrain_ConnectGraphNode_10 */
int Terrain_ConnectGraphNode_10(void * a1);
/* 0051AEB0 SplinePathGuideQTask_LoadParameters */
void SplinePathGuideQTask_LoadParameters(float a1);
/* 0051B0B0 Terrain_SampleHeightmap_10 */
void * Terrain_SampleHeightmap_10(void * a1);
/* 0051B140 SplinePathGuideQTask_Init */
int* SplinePathGuideQTask_Init(void);
/* 0051B2C0 SplinePathGuideQTask_Setup */
void * SplinePathGuideQTask_Setup(void * a1);
/* 0051B3A0 Terrain_CalculateNormals_10 */
unsigned int Terrain_CalculateNormals_10(void);
/* 0051B400 AnimSound_Init */
void * AnimSound_Init(void);
/* 0051B4F0 AnimSound_Process */
struct status_msg* AnimSound_Process(int* a1);
/* 0051B530 AnimSound_OnEvent */
unsigned int AnimSound_OnEvent(void);
/* 0051B540 EditorMagicObj_LoadParameters */
int EditorMagicObj_LoadParameters(void * a1, void * a2);
/* 0051B960 EditorMagicObj_Init */
void * EditorMagicObj_Init(void);
/* 0051BAB0 EditorMagicObj_Update */
unsigned int EditorMagicObj_Update(void);
/* 0051BAC0 LevelTimer_Init */
void * LevelTimer_Init(void);
/* 0051BC60 LevelTimer_LoadParameters */
int LevelTimer_LoadParameters(void * a1);
/* 0051BCC0 LevelTimer_Update */
int LevelTimer_Update(void * a1);
/* 0051BD40 LevelTimer_OnEvent */
int LevelTimer_OnEvent(void * a1);
/* 0051BDB0 LevelTimer_Process */
char * LevelTimer_Process(void * a1);
/* 0051BE10 LevelTimer_Tick */
int LevelTimer_Tick(int80_t a1, void * a2);
/* 0051BF90 Terrain_BuildMipMaps_10 */
unsigned int Terrain_BuildMipMaps_10(void);
/* 0051BFB0 SoundManager_Init */
int* SoundManager_Init(void);
/* 0051C100 SoundManager_LoadParameters */
int* SoundManager_LoadParameters(char * a1, char * a2);
/* 0051C290 Terrain_RenderQuadtree_11 */
int Terrain_RenderQuadtree_11(void);
/* 0051C2B0 FlatWater_Init */
int* FlatWater_Init(void);
/* 0051C5B0 FlatWater_LoadParameters */
void * FlatWater_LoadParameters(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, int a10, float a11, float a12);
/* 0051DB80 FlatSky_OnEvent */
int FlatSky_OnEvent(void * a1);
/* 0051DBF0 FlatSky_Cleanup */
int FlatSky_Cleanup(void * a1);
/* 0051DDB0 Terrain_RenderWaterSurface_11 */
unsigned int Terrain_RenderWaterSurface_11(void);
/* 0051DDF0 FlatSky_Init */
int* FlatSky_Init(void);
/* 0051E1F0 FlatSky_Process */
float FlatSky_Process(void * a1) __location("result");
/* 0051EA10 FlatSky_LoadParameters */
int FlatSky_LoadParameters(void * a1);
/* 0051EB00 FlatSky_Setup */
void * FlatSky_Setup(void * a1);
/* 0051EB40 FlatSky_Update */
int FlatSky_Update(void * a1);
/* 0051EC30 FlatSky_Action */
int FlatSky_Action(void * a1);
/* 0051EC70 Terrain_ConnectGraphNode_11 */
unsigned int Terrain_ConnectGraphNode_11(void);
/* 0051ECB0 MipMapControl_Init */
int* MipMapControl_Init(void);
/* 0051EE10 MipMapControl_LoadParameters */
int MipMapControl_LoadParameters(void * a1);
/* 0051EEC0 Terrain_SampleHeightmap_11 */
unsigned int Terrain_SampleHeightmap_11(void);
/* 0051EEE0 SmoothQTask_Init */
void * SmoothQTask_Init(void);
/* 0051F140 SmoothQTask_LoadParameters */
int SmoothQTask_LoadParameters(void * a1);
/* 0051F1F0 SmoothQTask_Update */
int SmoothQTask_Update(void * a1);
/* 0051F270 SmoothQTask_OnEvent */
int SmoothQTask_OnEvent(void * a1);
/* 0051F2E0 SmoothQTask_Process */
char * SmoothQTask_Process(void * a1);
/* 0051F340 SmoothQTask_Setup */
int* SmoothQTask_Setup(long double a1, int a2);
/* 0051F560 Terrain_CalculateNormals_11 */
unsigned int Terrain_CalculateNormals_11(void);
/* 0051F580 MoveRigidObj_Init */
void * MoveRigidObj_Init(void);
/* 0051F810 MoveRigidObj_LoadParameters */
int* MoveRigidObj_LoadParameters(unsigned int a1);
/* 0051F980 MoveRigidObj_Update */
int MoveRigidObj_Update(void * a1);
/* 0051F9E0 MoveRigidObj_OnEvent */
int MoveRigidObj_OnEvent(void * a1);
/* 0051FA30 MoveRigidObj_Process */
int MoveRigidObj_Process(void * a1);
/* 0051FAA0 MoveRigidObj_Setup */
int MoveRigidObj_Setup(int80_t a1, float a2);
/* 0051FBA0 Terrain_BuildMipMaps_11 */
int Terrain_BuildMipMaps_11(float a1, void * a2, int a3);
/* 0051FED0 Terrain_RenderQuadtree_12 */
unsigned int Terrain_RenderQuadtree_12(void);
/* 0051FEF0 NoiseQTask_Init */
int* NoiseQTask_Init(void);
/* 00520200 NoiseQTask_LoadParameters */
int NoiseQTask_LoadParameters(void * a1);
/* 005202F0 NoiseQTask_Update */
int NoiseQTask_Update(void * a1);
/* 00520350 NoiseQTask_OnEvent */
int NoiseQTask_OnEvent(void * a1);
/* 005203A0 NoiseQTask_Process */
char * NoiseQTask_Process(void * a1);
/* 00520400 NoiseQTask_Setup */
int NoiseQTask_Setup(long double a1, void * a2);
/* 00520710 Light_RenderLensflare */
unsigned int Light_RenderLensflare(void);
/* 005207A0 Origo_Init */
int* Origo_Init(void);
/* 00520B90 Light_ApplyLightmap */
unsigned int Light_ApplyLightmap(void);
/* 00520BB0 Lensflare_Init */
int Lensflare_Init(void);
/* 00520F50 Lensflare_LoadParameters */
void * Lensflare_LoadParameters(void * a1);
/* 00520FF0 Light_UpdateGlobalLight */
unsigned int Light_UpdateGlobalLight(void);
/* 00521030 Light_CalculateAttenuation */
int Light_CalculateAttenuation(void);
/* 00521040 Light_SetLightColor */
void * Light_SetLightColor(void);
/* 005210C0 Light_Lightmaps */
int Light_Lightmaps(void);
/* 005210E0 Light_LightmapsRes */
int Light_LightmapsRes(void);
/* 00521110 Light_SampleLightmap */
float* Light_SampleLightmap(int a1, int a2, int a3, int a4, void * a5, float* a6, int a7, float* a8, int a9, float* a10, float* a11, float* a12, float* a13, int a14, float* a15, int a16, int a17);
/* 00521960 Light_ComputeDirectionalLight_2 */
float* Light_ComputeDirectionalLight_2(int a1, int a2, int a3, int a4, void * a5, float* a6, int a7, float* a8, int a9, float* a10, float a11, float a12, float a13, float a14, float* a15, float* a16, float* a17, int a18, float* a19, int a20, int a21);
/* 00521E40 Light_RenderLensflare_2 */
unsigned int Light_RenderLensflare_2(void * a1, double* a2, float* a3, float* a4, void * a5, int a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22);
/* 00523110 Light_ApplyLightmap_2 */
int* Light_ApplyLightmap_2(int a1);
/* 005233A0 Light_UpdateGlobalLight_2 */
int Light_UpdateGlobalLight_2(void * a1);
/* 005235A0 Light_CalculateAttenuation_2 */
int Light_CalculateAttenuation_2(void * a1);
/* 00523670 Light_SetLightColor_2 */
int Light_SetLightColor_2(int* a1);
/* 005237E0 Light_SampleLightmap_2 */
int Light_SampleLightmap_2(void * a1);
/* 00523900 Light_ComputeDirectionalLight_3 */
void * Light_ComputeDirectionalLight_3(int* a1);
/* 00523930 LightmapInfo_LoadParameters */
int LightmapInfo_LoadParameters(void * a1);
/* 00523D40 Light_RenderLensflare_3 */
int* Light_RenderLensflare_3(void * a1, int a2, int a3, int a4, int a5);
/* 005251D0 Light_CalculateAttenuation_4 */
float* Light_CalculateAttenuation_4(float* a1, float a2, float* a3, float a4, float a5);
/* 00525320 Light_SetLightColor_4 */
int Light_SetLightColor_4(int* a1);
/* 00525380 LightmapInfo_Update */
int* LightmapInfo_Update(void * a1);
/* 005253D0 Light_ComputeDirectionalLight_5 */
int* Light_ComputeDirectionalLight_5(int* a1);
/* 00525410 Light_RenderLensflare_5 */
int Light_RenderLensflare_5(void * a1);
/* 00525460 LightmapInfo_Setup */
int LightmapInfo_Setup(void * a1, int* a2);
/* 00526150 LightmapInfo_Process */
int LightmapInfo_Process(void * a1, int* a2);
/* 00526330 LightmapInfo_Init */
int LightmapInfo_Init(void);
/* 00526860 Light_ApplyLightmap_5 */
unsigned int Light_ApplyLightmap_5(void);
/* 005268E0 Light_UpdateGlobalLight_5 */
int* Light_UpdateGlobalLight_5(int a1);
/* 00526920 Light_LightsourceNotFound */
int Light_LightsourceNotFound(int a1);
/* 005269C0 Light_CalculateAttenuation_5 */
int* Light_CalculateAttenuation_5(float a1);
/* 00526EE0 Dirlight_Init */
int* Dirlight_Init(void);
/* 005271E0 Dirlight_Setup */
int Dirlight_Setup(void * a1);
/* 00527270 Dirlight_Process */
int Dirlight_Process(void * a1);
/* 00527480 Light_SetLightColor_5 */
unsigned int Light_SetLightColor_5(void);
/* 005274C0 Light_SampleLightmap_5 */
int Light_SampleLightmap_5(void);
/* 005274D0 Light_ComputeDirectionalLight_6 */
int Light_ComputeDirectionalLight_6(float a1);
/* 00527520 Light_RenderLensflare_6 */
int* Light_RenderLensflare_6(void * a1);
/* 00527C90 GlobalLight_Init */
int* GlobalLight_Init(void);
/* 00528180 GlobalLight_Setup */
int GlobalLight_Setup(void * a1);
/* 005282C0 GlobalLight_Process */
int GlobalLight_Process(void * a1);
/* 00528420 Light_ApplyLightmap_6 */
unsigned int Light_ApplyLightmap_6(void);
/* 00528460 Light_UpdateGlobalLight_6 */
void Light_UpdateGlobalLight_6(float a1);
/* 005284A0 AnimCam_Init */
int* AnimCam_Init(void);
/* 00528850 Light_CalculateAttenuation_6 */
void * Light_CalculateAttenuation_6(void * a1);
/* 00528930 Light_SetLightColor_6 */
void * Light_SetLightColor_6(void * a1);
/* 00528D00 AnimCam_Process */
int* AnimCam_Process(void * a1, int** a2);
/* 00529010 Light_SampleLightmap_6 */
float Light_SampleLightmap_6(void * a1) __location("result");
/* 00529A10 Light_RenderLensflare_7 */
int* Light_RenderLensflare_7(void * a1);
/* 00529AA0 AnimCam_Update */
int AnimCam_Update(void * a1, int* a2);
/* 00529AE0 Light_ApplyLightmap_7 */
void * Light_ApplyLightmap_7(void * a1);
/* 00529C20 Light_UpdateGlobalLight_7 */
int* Light_UpdateGlobalLight_7(void * a1, void ** a2);
/* 0052A010 Light_U2F */
int __convention Light_U2F("regparm")(int a1, int a2, int a3, void * a4);
/* 0052A210 Light_CalculateAttenuation_7 */
unsigned int Light_CalculateAttenuation_7(void);
/* 0052A230 AnimRigidDynCubeObj_Update */
int AnimRigidDynCubeObj_Update(void * a1, int* a2);
/* 0052AAF0 AnimRigidDynCubeObj_Init */
int AnimRigidDynCubeObj_Init(void);
/* 0052AC10 AnimRigidDynCubeObj_OnEvent */
int AnimRigidDynCubeObj_OnEvent(int a1, int* a2);
/* 0052AC50 AnimRigidDynCubeObj_Action */
int AnimRigidDynCubeObj_Action(void * a1, int* a2);
/* 0052AD00 Light_SetLightColor_7 */
unsigned int Light_SetLightColor_7(void);
/* 0052AD10 AnimScaleTask_Init */
int* AnimScaleTask_Init(void);
/* 0052AE50 AnimScaleTask_LoadParameters */
void * AnimScaleTask_LoadParameters(void * a1);
/* 0052AF10 AnimScaleTask_Setup */
char AnimScaleTask_Setup(int80_t a1, int a2);
/* 0052AFB0 Light_SampleLightmap_7 */
unsigned int Light_SampleLightmap_7(void);
/* 0052B040 EditHazinglayer_Init */
int* EditHazinglayer_Init(void);
/* 0052B1D0 EditHazinglayer_LoadParameters */
int EditHazinglayer_LoadParameters(void * a1);
/* 0052B300 Light_RenderLensflare_8 */
unsigned int Light_RenderLensflare_8(void);
/* 0052B3B0 CubeModifier_Init */
int* CubeModifier_Init(void);
/* 0052B510 CubeModifier_LoadParameters */
int CubeModifier_LoadParameters(int a1);
/* 0052B6A0 Light_ApplyLightmap_8 */
unsigned int Light_ApplyLightmap_8(void);
/* 0052B6C0 DiscardTerrainArea_Init */
int* DiscardTerrainArea_Init(void);
/* 0052B840 DiscardTerrainArea_Setup */
void * DiscardTerrainArea_Setup(int a1);
/* 0052B9F0 Light_UpdateGlobalLight_8 */
void * Light_UpdateGlobalLight_8(void * a1, int a2, int a3, void * a4);
/* 0052BCC0 Light_SetLightColor_8 */
int Light_SetLightColor_8(int a1, int a2, void * a3);
/* 0052BEE0 Light_SampleLightmap_8 */
unsigned int Light_SampleLightmap_8(void);
/* 0052C000 DiscardTerrain_LoadParameters */
int DiscardTerrain_LoadParameters(int* a1);
/* 0052C0C0 DiscardTerrain_Init */
int* DiscardTerrain_Init(void);
/* 0052C290 DiscardTerrain_Setup */
int DiscardTerrain_Setup(int a1, char * a2);
/* 0052C5A0 DiscardTerrain_Process */
int DiscardTerrain_Process(int* a1, void * a2);
/* 0052C5F0 Light_ComputeDirectionalLight_9 */
unsigned int Light_ComputeDirectionalLight_9(void);
/* 0052C610 Light_RenderLensflare_9 */
struct status_msg* Light_RenderLensflare_9(void * a1, int a2, int a3);
/* 0052C6B0 SkyTask_Init */
int* SkyTask_Init(void);
/* 0052C7F0 SkyTask_Update */
unsigned int SkyTask_Update(void);
/* 0052C820 LevelScript_Init */
int* LevelScript_Init(void);
/* 0052C900 LevelScript_LoadParameters */
void * LevelScript_LoadParameters(void * a1);
/* 0052CA00 LevelScript_OnEvent */
int LevelScript_OnEvent(void);
/* 0052CA30 SimBoneDynCubeObj_Init */
int SimBoneDynCubeObj_Init(void);
/* 0052CA60 SimBoneDynCubeObj_Update */
unsigned int SimBoneDynCubeObj_Update(void);
/* 0052CA70 PushButton_Init */
int PushButton_Init(void);
/* 0052CAF0 PushButton_LoadParameters */
int PushButton_LoadParameters(void * a1, int* a2);
/* 0052CB20 PushButton_OnEvent */
unsigned int PushButton_OnEvent(void);
/* 0052CB30 PushButton_Process */
float* PushButton_Process(void);
/* 0052CC40 Light_ComputeDirectional */
int Light_ComputeDirectional(float* a1);
/* 0052CE90 Light_ApplyLightmap_9 */
int Light_ApplyLightmap_9(float* a1, float* a2, float* a3, float* a4, float a5, float a6);
/* 0052CFA0 Light_UpdateGlobalLight_9 */
short* Light_UpdateGlobalLight_9(void * a1);
/* 0052D030 Light_CalculateAttenuation_9 */
int Light_CalculateAttenuation_9(void * a1);
/* 0052D060 Light_SetLightColor_9 */
int Light_SetLightColor_9(void * a1);
/* 0052D2B0 Light_SampleLightmap_9 */
int Light_SampleLightmap_9(int* a1, int* a2, int* a3, int* a4, int* a5, int* a6);
/* 0052D350 Light_ComputeDirectionalLight_10 */
void * Light_ComputeDirectionalLight_10(void * a1, float a2);
/* 0052D360 Light_RenderLensflare_10 */
int* Light_RenderLensflare_10(void);
/* 0052D400 Light_ApplyLightmap_10 */
int Light_ApplyLightmap_10(int* a1);
/* 0052D420 Light_UpdateGlobalLight_10 */
void * Light_UpdateGlobalLight_10(void);
/* 0052D440 Light_CalculateAttenuation_10 */
unsigned int* Light_CalculateAttenuation_10(unsigned int* a1);
/* 0052D4B0 Light_SetLightColor_10 */
int Light_SetLightColor_10(int* a1, char * a2, int a3, int a4, int a5, int a6);
/* 0052D5B0 Light_SampleLightmap_10 */
int Light_SampleLightmap_10(int* a1, char * a2);
/* 0052D5E0 Light_ComputeDirectionalLight_11 */
int Light_ComputeDirectionalLight_11(void * a1, char * a2);
/* 0052D610 Light_RenderLensflare_11 */
int Light_RenderLensflare_11(void * a1, char * a2);
/* 0052D630 Light_ApplyLightmap_11 */
int Light_ApplyLightmap_11(int* a1, int* a2);
/* 0052D6C0 Light_UpdateGlobalLight_11 */
void * Light_UpdateGlobalLight_11(int a1);
/* 0052D9F0 Light_CalculateAttenuation_11 */
unsigned int Light_CalculateAttenuation_11(int a1);
/* 0052DAE0 Light_SetLightColor_11 */
int Light_SetLightColor_11(float a1, void * a2, double* a3);
/* 0052DCB0 Light_SampleLightmap_11 */
long double Light_SampleLightmap_11(float a1, float a2, int a3);
/* 0052DD70 Light_Watermesh */
int Light_Watermesh(void);
/* 0052DD90 Light_ComputeDirectionalLight_12 */
int Light_ComputeDirectionalLight_12(void * a1);
/* 0052E180 Light_RenderLensflare_12 */
void * Light_RenderLensflare_12(void * a1, float* a2, float a3);
/* 0052E2D0 Light_ApplyLightmap_12 */
int Light_ApplyLightmap_12(int a1, float a2);
/* 0052E660 Light_UpdateGlobalLight_12 */
float Light_UpdateGlobalLight_12(float a1, int* a2, int a3, int a4, int a5) __location("result");
/* 0052F3D0 Light_CalculateAttenuation_12 */
float* Light_CalculateAttenuation_12(float* a1, float* a2, double* a3, int* a4);
/* 0052F630 Light_SetLightColor_12 */
void * Light_SetLightColor_12(float* a1, void * a2, double* a3, void * a4, void * a5, int a6);
/* 0052FBA0 Light_SampleLightmap_12 */
int Light_SampleLightmap_12(void * a1, int a2, int a3, int a4);
/* 0052FE60 Light_RenderLensflare_13 */
unsigned int Light_RenderLensflare_13(void * a1, double* a2);
/* 0052FFA0 Light_ApplyLightmap_13 */
unsigned int Light_ApplyLightmap_13(void * a1, double* a2);
/* 00530210 Particle_UpdateParticlePhysics */
int Particle_UpdateParticlePhysics(void);
/* 00530220 CamTask_Init */
int CamTask_Init(void);
/* 00530250 CamTask_Update */
unsigned int CamTask_Update(void);
/* 00530260 CamTask_OnEvent */
int CamTask_OnEvent(void);
/* 00530270 CamTask_Process */
int CamTask_Process(void);
/* 005302A0 CamTask_Action */
int CamTask_Action(void);
/* 005302D0 CamTask_OnTick */
int CamTask_OnTick(int a1, int* a2, int* a3);
/* 00530470 Particle_Render3DSprites */
short* Particle_Render3DSprites(void * a1, short a2);
/* 005304B0 Particle_TriggerMuzzleFlash */
short* Particle_TriggerMuzzleFlash(int a1, short a2);
/* 00530520 Particle_RenderTrails */
short* Particle_RenderTrails(int a1, short a2, short a3);
/* 00530580 Particle_FadeParticles */
int Particle_FadeParticles(int a1, short a2, short a3);
/* 005305F0 Particle_ResetEmitters */
int Particle_ResetEmitters(int a1, short a2);
/* 00530630 Particle_EmitParticles_2 */
int Particle_EmitParticles_2(int a1, int a2, short a3, short* a4);
/* 00530740 Particle_UpdateParticlePhysics_2 */
int Particle_UpdateParticlePhysics_2(int* a1, int* a2);
/* 00530800 Particle_Render3DSprites_2 */
int Particle_Render3DSprites_2(void);
/* 00530810 Particle_TriggerMuzzleFlash_2 */
int* Particle_TriggerMuzzleFlash_2(int* a1, int a2);
/* 00530850 Particle_RenderTrails_2 */
int* Particle_RenderTrails_2(int* a1, int a2, int* a3);
/* 005308B0 Particle_FadeParticles_2 */
int Particle_FadeParticles_2(int* a1);
/* 005308F0 Particle_ResetEmitters_2 */
int Particle_ResetEmitters_2(int* a1, char a2);
/* 00530950 Particle_EmitParticles_3 */
int Particle_EmitParticles_3(int a1, int a2);
/* 00530960 Particle_UpdateParticlePhysics_3 */
int Particle_UpdateParticlePhysics_3(void);
/* 00530980 Particle_Render3DSprites_3 */
unsigned int Particle_Render3DSprites_3(void);
/* 005309C0 Particle_TriggerMuzzleFlash_3 */
int Particle_TriggerMuzzleFlash_3(void);
/* 00530A20 Particle_RenderTrails_3 */
int Particle_RenderTrails_3(void);
/* 00530A80 FlashTask_Init */
int FlashTask_Init(void);
/* 00530AD0 FlashTask_LoadParameters */
int FlashTask_LoadParameters(float a1);
/* 00530C60 FlashTask_OnEvent */
unsigned int FlashTask_OnEvent(void);
/* 00530C80 ParticleSystemDynCubeObj_Init */
int* ParticleSystemDynCubeObj_Init(void);
/* 00530CD0 ParticleSystemDynCubeObj_LoadParameters */
int ParticleSystemDynCubeObj_LoadParameters(void * a1);
/* 00530F20 Particle_FadeParticles_3 */
int Particle_FadeParticles_3(double* a1, float a2);
/* 00531090 ParticleSystemDynCubeObj_Setup */
int ParticleSystemDynCubeObj_Setup(void * a1);
/* 005310C0 Particle_ResetEmitters_3 */
unsigned int Particle_ResetEmitters_3(void);
/* 005310D0 Particle_EmitParticles_4 */
int Particle_EmitParticles_4(void);
/* 005310E0 FreeCamera_Init */
int FreeCamera_Init(void);
/* 00531130 FreeCamera_LoadParameters */
int FreeCamera_LoadParameters(void * a1);
/* 00531180 FreeCamera_OnEvent */
unsigned int FreeCamera_OnEvent(void);
/* 00531190 SpriteParticleSystemDynCubeObj_Init */
int SpriteParticleSystemDynCubeObj_Init(void);
/* 005311C0 SpriteParticleSystemDynCubeObj_Update */
unsigned int SpriteParticleSystemDynCubeObj_Update(void);
/* 005311E0 SpriteParticleSystemDynCubeObj_OnEvent */
int SpriteParticleSystemDynCubeObj_OnEvent(void);
/* 005311F0 SpriteParticleSystemDynCubeObj_Process */
int SpriteParticleSystemDynCubeObj_Process(void);
/* 00531250 SpriteParticleSystemDynCubeObj_Action */
int SpriteParticleSystemDynCubeObj_Action(int a1, int* a2);
/* 005312D0 SpriteParticleSystemDynCubeObj_OnTick */
int SpriteParticleSystemDynCubeObj_OnTick(void * a1, void * a2, double* a3, float a4);
/* 00531300 PointlightDynCubeObj_Init */
int PointlightDynCubeObj_Init(void);
/* 005314F0 PointlightDynCubeObj_Update */
unsigned int PointlightDynCubeObj_Update(void);
/* 00531540 Particle_UpdateParticlePhysics_4 */
int Particle_UpdateParticlePhysics_4(void);
/* 005315B0 Particle_Render3DSprites_4 */
int Particle_Render3DSprites_4(void);
/* 00531620 BoneMagicObj_LoadParameters */
int BoneMagicObj_LoadParameters(void * a1);
/* 005317B0 BoneMagicObj_OnEvent */
void * BoneMagicObj_OnEvent(void * a1);
/* 005317D0 BoneMagicObj_Init */
void * BoneMagicObj_Init(void);
/* 005318D0 BoneMagicObj_Setup */
int BoneMagicObj_Setup(int* a1, int* a2);
/* 005319B0 BoneMagicObj_Process */
void * BoneMagicObj_Process(void * a1, int* a2);
/* 00531CD0 BoneMagicObj_Update */
int BoneMagicObj_Update(int* a1);
/* 00531D10 Particle_RenderTrails_4 */
unsigned int Particle_RenderTrails_4(void);
/* 00531D30 Particle_FadeParticles_4 */
int Particle_FadeParticles_4(void);
/* 00531D70 Particle_ResetEmitters_4 */
int Particle_ResetEmitters_4(void);
/* 00531DB0 Particle_EmitParticles_5 */
int Particle_EmitParticles_5(void);
/* 00531DC0 Particle_UpdateParticlePhysics_5 */
int Particle_UpdateParticlePhysics_5(void);
/* 00531DD0 Particle_Render3DSprites_5 */
int Particle_Render3DSprites_5(void);
/* 00531DF0 Particle_TriggerMuzzleFlash_5 */
int Particle_TriggerMuzzleFlash_5(void);
/* 00531E10 Sprite3D_LoadParameters */
int Sprite3D_LoadParameters(float a1);
/* 00531EF0 Sprite3D_Init */
int Sprite3D_Init(void);
/* 00531F40 Sprite3D_Update */
unsigned int Sprite3D_Update(void);
/* 00531F60 TransparencyList_LoadParameters */
int TransparencyList_LoadParameters(void * a1);
/* 00531FA0 TransparencyList_Init */
int TransparencyList_Init(void);
/* 00532030 TransparencyList_Setup */
int* TransparencyList_Setup(int* a1);
/* 005321C0 Particle_RenderTrails_5 */
int Particle_RenderTrails_5(void);
/* 005321F0 Particle_FadeParticles_5 */
void Particle_FadeParticles_5(void ** a1, int* a2, void * a3, int a4);
/* 00532344 Particle_ResetEmitters_5 */
char * Particle_ResetEmitters_5(char * a1, char * a2, int a3, int a4);
/* 00532392 Particle_EmitParticles_6 */
char * Particle_EmitParticles_6(char * a1, char * a2, int a3);
/* 005323C0 Particle_UpdateParticlePhysics_6 */
int Particle_UpdateParticlePhysics_6(void);
/* 005323D0 Particle_Render3DSprites_6 */
int Particle_Render3DSprites_6(void);
/* 005323E0 Particle_TriggerMuzzleFlash_6 */
int Particle_TriggerMuzzleFlash_6(void);
/* 005323F0 Particle_RenderTrails_6 */
int Particle_RenderTrails_6(void);
/* 00532400 Particle_FadeParticles_6 */
int Particle_FadeParticles_6(void);
/* 00532490 Particle_ResetEmitters_6 */
int Particle_ResetEmitters_6(void);


/* --- Newly Discovered & Verified IGI1 Natives --- */
/* 00406D00 AIConfig_CreateHumanTask */
int32_t* AIConfig_CreateHumanTask(int32_t* arg1);
/* 0040FD70 HumanPlayer_GetTeam */
void* HumanPlayer_GetTeam(void* arg1, int32_t arg2);
/* 0040FDF0 HumanPlayer_SetTeam */
void HumanPlayer_SetTeam(void* arg1, void* arg2);
/* 00413730 HumanPlayer_LoadParameters_14 */
int32_t HumanPlayer_LoadParameters_14(void* arg1, float arg2);
/* 004150E0 MovieSubtitle_RegisterMedia */
int32_t MovieSubtitle_RegisterMedia(void* arg1, int32_t* arg2);
/* 00418AA0 Menu_TaskNew */
void* Menu_TaskNew(void* arg1);
/* 00420BB0 MenuText_Init_2 */
int32_t* MenuText_Init_2(int32_t* arg1);
/* 004213D0 MenuButton_Init_2 */
int32_t* MenuButton_Init_2(int32_t* arg1);
/* 004216F0 MenuScreen_Init_2 */
int32_t* MenuScreen_Init_2(int32_t* arg1);
/* 00422FB0 ControlsMenu_SetState */
int32_t* ControlsMenu_SetState(int32_t* arg1);
/* 00422FC0 ControlsMenu_OnEvent_2 */
void* ControlsMenu_OnEvent_2(void* arg1);
/* 00423EB0 ControlsMenu_InitOffsets */
void* ControlsMenu_InitOffsets(void* arg1);
/* 00426590 CarDoor_Init_2 */
int32_t* CarDoor_Init_2(int32_t* arg1);
/* 00427240 HeliDoor_Init_2 */
int32_t HeliDoor_Init_2(long double arg1 , long double arg2 , int32_t* arg3);
/* 004369E0 EnvironmentSound_Init_2 */
char* EnvironmentSound_Init_2(void* arg1);
/* 00436A40 EnvironmentSound_Update_2 */
int32_t* EnvironmentSound_Update_2(int32_t* arg1);
/* 004387B0 PlaceExplosiveTBA_Init_2 */
int32_t* PlaceExplosiveTBA_Init_2(long double arg1 , int32_t* arg2);
/* 00439750 AlarmLight_Init_2 */
void* AlarmLight_Init_2(void* arg1);
/* 00439770 AlarmLight_Trigger */
int32_t AlarmLight_Trigger(void* arg1, int32_t* arg2);
/* 00439790 AlarmLight_Update_2 */
int32_t* AlarmLight_Update_2(int32_t* arg1);
/* 0043AD20 Radio_Init_2 */
char* Radio_Init_2(void* arg1);
/* 0043AD30 Radio_PlaySound */
int32_t* Radio_PlaySound(int32_t* arg1);
/* 0043AD40 Radio_StopSound */
int32_t Radio_StopSound(void* arg1);
/* 0043B650 Generator_CheckTimer */
char* Generator_CheckTimer(void* arg1);
/* 0043B680 Generator_UpdateTimer */
int32_t* Generator_UpdateTimer(int32_t* arg1);
/* 0043B690 Generator_ResetTimer */
int32_t Generator_ResetTimer(void* arg1, int32_t arg2);
/* 0043BE80 ExplodeMagicObj_Init_2 */
int32_t* ExplodeMagicObj_Init_2(float arg1, int32_t* arg2);
/* 004406C0 AlarmControl_Create */
int32_t* AlarmControl_Create(int32_t* arg1);
/* 004406D0 AlarmControl_Init_2 */
int32_t AlarmControl_Init_2(int32_t* arg1);
/* 00440970 AlarmControl_TriggerAlarm */
char* AlarmControl_TriggerAlarm(void* arg1);
/* 004409E0 AlarmControl_CheckTrigger */
int32_t* AlarmControl_CheckTrigger(int32_t* arg1);
/* 004409F0 AlarmControl_SetTrigger */
int32_t AlarmControl_SetTrigger(void* arg1, int32_t arg2);
/* 00443D70 Cabinet_Create */
int32_t* Cabinet_Create(int32_t* arg1);
/* 00443D80 Cabinet_Init_2 */
void* Cabinet_Init_2(void* arg1);
/* 00443DA0 Cabinet_Open */
int32_t Cabinet_Open(int32_t* arg1);
/* 00443DC0 Cabinet_Update_2 */
int32_t Cabinet_Update_2(float arg1, int32_t arg2);
/* 004464B0 Door_Create */
bool* Door_Create(bool* arg1);
/* 00449220 Siren_Init_2 */
int32_t Siren_Init_2(long double arg1 , long double arg2 , int32_t* arg3);
/* 00449260 Siren_Trigger */
void* Siren_Trigger(void* arg1);
/* 00449270 Siren_PlaySound */
int32_t Siren_PlaySound(void* arg1, int32_t* arg2);
/* 004492A0 Siren_Stop */
int32_t* Siren_Stop(void* arg1, int32_t arg2);
/* 00449330 Siren_Create */
char* Siren_Create(void* arg1);
/* 004505C0 HumanAI_LoadScript */
int32_t* HumanAI_LoadScript(int32_t* arg1);
/* 00453470 PatrolPath_Create */
void* PatrolPath_Create(void* arg1);
/* 00453480 PatrolPath_Init_2 */
int32_t* PatrolPath_Init_2(int32_t* arg1);
/* 00453490 PatrolPath_Update_2 */
int32_t PatrolPath_Update_2(void* arg1);
/* 004547B0 HumanAI_FindAnimation */
void* HumanAI_FindAnimation(void* arg1, void* arg2);
/* 00454EE0 HumanAI_VerifyAnimation */
int32_t HumanAI_VerifyAnimation(int32_t arg1);
/* 00454F00 HumanAI_PlayAnimation */
int32_t* HumanAI_PlayAnimation(int32_t* arg1);
/* 00456920 HumanAI_ValidateAnimEntry */
void* HumanAI_ValidateAnimEntry(void* arg1, void* arg2);
/* 00456A10 HumanSoldierRPG_Init_2 */
void* HumanSoldierRPG_Init_2(void* arg1, void* arg2);
/* 00456E40 HumanAI_ResetAnimation */
int32_t* HumanAI_ResetAnimation(int32_t* arg1);
/* 00459680 HumanAI_CheckAnimProgress */
void* HumanAI_CheckAnimProgress(void* arg1, void* arg2);
/* 0045C700 HumanAI_ProcessAnimFrame */
void* HumanAI_ProcessAnimFrame(void* arg1, void* arg2);
/* 0045C740 HumanAI_CompleteAnimation */
void* HumanAI_CompleteAnimation(void* arg1);
/* 0045C9B0 HumanSoldier_Init_2 */
void* HumanSoldier_Init_2(void* arg1, void* arg2);
/* 0045CA80 HumanSoldier_Update */
void* HumanSoldier_Update(void* arg1, int32_t arg2);
/* 0045E3D0 Human_Create */
char* Human_Create(char* arg1);
/* 00466F10 ComputerObjective_Define */
int32_t ComputerObjective_Define(int32_t arg1);
/* 00466F20 ComputerObjective_Init */
int32_t ComputerObjective_Init(void);
/* 00466F30 ComputerObjective_SetState */
int32_t* ComputerObjective_SetState(int32_t* arg1);
/* 00469660 ComputerMap_Init_2 */
int32_t ComputerMap_Init_2(void* arg1, int32_t arg2);
/* 0046AA80 ComputerMenu_Init_2 */
int32_t* ComputerMenu_Init_2(void* arg1);
/* 0046B940 Computer_Create */
void* Computer_Create(void* arg1, int32_t* arg2);
/* 0046DC20 GunX2_Open */
void* GunX2_Open(void* arg1);
/* 0046DCA0 GunX2_Init */
int32_t* GunX2_Init(int32_t* arg1);
/* 0046DCB0 GunX2_Setup */
void* GunX2_Setup(void* arg1);
/* 0046DDC0 KnifeStab_Open */
int32_t* KnifeStab_Open(void* arg1, int32_t* arg2);
/* 0046DE70 KnifeStab_Init_2 */
void* KnifeStab_Init_2(void* arg1);
/* 0046DEE0 KnifeStab_Setup */
int32_t KnifeStab_Setup(void* arg1);
/* 0046E210 AIStationaryGunHolder_Init_2 */
int32_t* AIStationaryGunHolder_Init_2(float arg1);
/* 00472CA0 GunDragunov_Init */
int32_t GunDragunov_Init(void* arg1);
/* 004732F0 GunM16A2_Init_2 */
int32_t GunM16A2_Init_2(int32_t arg1);
/* 004737E0 GunM16A2_ConfigM203 */
int32_t* GunM16A2_ConfigM203(int32_t* arg1);
/* 004752B0 ProximityMine_Init_2 */
int32_t ProximityMine_Init_2(void* arg1, char* arg2);
/* 00484CE0 HumanCamera_CleanupList */
void* HumanCamera_CleanupList(void* arg1);
/* 00485220 StatusMessage_Init_2 */
int32_t StatusMessage_Init_2(void* arg1);
/* 00488560 SubLevel_Process */
void* SubLevel_Process(void* arg1, int32_t arg2);
/* 004886F0 EditVariable_Create */
void* EditVariable_Create(void* arg1);
/* 00488700 EditVariable_Init_2 */
void* EditVariable_Init_2(void* arg1);
/* 00488770 EditVariable_Update */
int32_t* EditVariable_Update(int32_t* arg1);
/* 00488A90 LevelFlow_Init_2 */
int32_t* LevelFlow_Init_2(int32_t* arg1);
/* 00488ED0 LevelFlow_CheckState */
int32_t* LevelFlow_CheckState(void* arg1);
/* 0048AB70 AI_CombatFemaleStand */
void* AI_CombatFemaleStand(void* arg1);
/* 0048AC90 AI_CombatFemaleWaitStand */
void* AI_CombatFemaleWaitStand(void* arg1, void* arg2);
/* 0048C750 AI_CombatReposition */
void* AI_CombatReposition(void* arg1);
/* 0048CAA0 AI_CombatLookForTarget */
void* AI_CombatLookForTarget(void* arg1);
/* 0048CB40 AI_CombatRPGStand */
int32_t* AI_CombatRPGStand(void* arg1, void* arg2);
/* 0048D2C0 AI_CombatGunnerStand */
int32_t* AI_CombatGunnerStand(void* arg1, void* arg2);
/* 0048E510 AI_ActivateCombat */
void* AI_ActivateCombat(void* arg1);
/* 0048E540 AI_TriggerCombatState */
void* AI_TriggerCombatState(void* arg1);
/* 0048E5F0 AI_ValidateCombatTask */
int32_t* AI_ValidateCombatTask(void* arg1);
/* 0048E8C0 AI_PatrolDelayStandAction */
int32_t* AI_PatrolDelayStandAction(int32_t arg1, void* arg2);
/* 0048EDE0 AI_FireAtTask */
void* AI_FireAtTask(void* arg1);
/* 0048F950 Input_CheckDIErrCode */
int32_t Input_CheckDIErrCode(void);
/* 0048F960 Input_FormatDIErrString */
int32_t Input_FormatDIErrString(void);
/* 0048F970 Input_GetDIErrStr */
LRESULT __stdcall Input_GetDIErrStr(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4);
/* 0048FED0 Input_InitKeyboard */
int32_t Input_InitKeyboard(int32_t arg1 , int32_t arg2);
/* 004924D0 Display_InitDirectDraw */
void* const __stdcall Display_InitDirectDraw(int32_t* arg1 @ 0x101a0);
/* 00492B70 Display_GetDDErrStr */
int32_t __stdcall Display_GetDDErrStr(void* arg1, char* arg2);
/* 004D9970 MagicObj_Init */
void* MagicObj_Init(void* arg1);
/* 004D99E0 MagicObj_ValidateVirModel */
int32_t MagicObj_ValidateVirModel(int32_t arg1);
/* 004DE970 EditCamera_Init_2 */
int32_t EditCamera_Init_2(void* arg1, int32_t arg2);
/* 004E5EC0 SoundSys_RegisterDefs */
int32_t* SoundSys_RegisterDefs(int32_t arg1, void* arg2);
/* 004E5F50 SoundSysController_Create */
int32_t SoundSysController_Create(int32_t arg1);
/* 004E5F70 SoundSys_InitController */
void* SoundSys_InitController(void* arg1, int32_t arg2);
/* 004E6000 SoundSysController_SetParent */
int32_t SoundSysController_SetParent(int32_t arg1, int32_t arg2);
/* 004E8310 SoundDefSound_Init_2 */
void SoundDefSound_Init_2(void* arg1);
/* 004E88E0 SoundSys_DefineSound */
void* SoundSys_DefineSound(void* arg1);
/* 004E8900 SoundSys_FormatSoundDef */
void* SoundSys_FormatSoundDef(void* arg1);
/* 004E9360 GlowTask_Create */
int32_t GlowTask_Create(void* arg1);
/* 004E93A0 GlowTask_Reset */
int32_t GlowTask_Reset(void* arg1);
/* 004E93B0 GlowTask_Init_2 */
int32_t GlowTask_Init_2(void);
/* 004EB9C0 SoundSys_RegisterGroup */
void* SoundSys_RegisterGroup(void* arg1, int32_t arg2);
/* 004EDAA0 PhysicsObj_LoadLodQsc */
void* PhysicsObj_LoadLodQsc(void* arg1);
/* 004EDB20 PhysicsObj_ParseLodQsc */
int32_t* PhysicsObj_ParseLodQsc(int32_t* arg1);
/* 004EDB30 PhysicsObj_InitLod */
int32_t PhysicsObj_InitLod(void* arg1);
/* 004EDBD0 PhysicsObj_DefineType */
void* PhysicsObj_DefineType(void* arg1);
/* 004EDBF0 PhysicsObj_DefineLod */
int32_t* PhysicsObj_DefineLod(int32_t* arg1);
/* 004EDC00 PhysicsObj_RegisterLod */
int32_t* PhysicsObj_RegisterLod(int32_t arg1);
/* 004EDC50 PhysicsObj_DefineTypeEntry */
int32_t PhysicsObj_DefineTypeEntry(void);
/* 004F4160 Vehicle_CreateHandler */
int32_t Vehicle_CreateHandler(void);
/* 004F4170 Vehicle_DeleteHandler */
int32_t Vehicle_DeleteHandler(void);
/* 004F4180 Vehicle_RunHandler */
int32_t Vehicle_RunHandler(void);
/* 004F82B0 TerrainLightMap_Init_2 */
void* TerrainLightMap_Init_2(void* arg1);
/* 004F8320 TerrainLightMap_Render */
void* TerrainLightMap_Render(void* arg1);
/* 004FB080 PhysicsObj_Create */
char* PhysicsObj_Create(int32_t* arg1);
/* 004FB0B0 PhysicsObj_Init_2 */
char* PhysicsObj_Init_2(int32_t* arg1);
/* 004FB290 PhysicsObj_CreateHandler */
int32_t PhysicsObj_CreateHandler(void);
/* 004FB2A0 PhysicsObj_DeleteHandler */
int32_t PhysicsObj_DeleteHandler(void);
/* 004FB2B0 PhysicsObj_RunHandler */
int32_t PhysicsObj_RunHandler(void);
/* 00505510 MenuItem_Init_2 */
void* MenuItem_Init_2(void* arg1, int32_t arg2);
/* 00505A10 MenuItem_Move */
void* MenuItem_Move(void* arg1, int32_t* arg2);
/* 00505A60 MenuItem_MoveUp */
void* MenuItem_MoveUp(void* arg1, void* arg2);
/* 00505AB0 MenuItem_MoveDown */
void* MenuItem_MoveDown(int32_t arg1, void* arg2);
/* 00505E40 TextureModifier_Push */
void* TextureModifier_Push(void* arg1);
/* 00505ED0 TextureModifier_Create */
void* TextureModifier_Create(void* arg1);
/* 00505F20 TextureModifier_Init_2 */
void* TextureModifier_Init_2(void* arg1);
/* 00508E30 AIGraph_Init_2 */
int32_t AIGraph_Init_2(void);
/* 00518E50 Water_Init_2 */
int32_t Water_Init_2(void* arg1, int32_t* arg2);
/* 005196F0 GFXCapsViewer_Init_2 */
int32_t* GFXCapsViewer_Init_2(int32_t* arg1);
/* 00519810 SplinePathNodeQTask_Init_2 */
int32_t* SplinePathNodeQTask_Init_2(int32_t* arg1);
/* 0051B390 AnimSound_Init_2 */
int32_t* AnimSound_Init_2(int32_t* arg1);
/* 0051B850 EditorMagicObj_Create */
int32_t* EditorMagicObj_Create(void* arg1, float arg2);
/* 0051B940 EditorMagicObj_Init_2 */
void* EditorMagicObj_Init_2(void* arg1);
/* 0051BA60 LevelTimer_Init_2 */
int32_t LevelTimer_Init_2(long double arg1 , int32_t* arg2);
/* 0051BAA0 LevelTimer_Update_2 */
int32_t* LevelTimer_Update_2(int32_t* arg1);
/* 0051BEE0 SoundManager_Init_2 */
int32_t SoundManager_Init_2(void* arg1, char* arg2);
/* 0051C280 FlatWater_Init_2 */
int32_t* FlatWater_Init_2(int32_t* arg1);
/* 0051EE80 SmoothQTask_Create */
void* SmoothQTask_Create(void* arg1);
/* 0051EEB0 SmoothQTask_Init_2 */
int32_t* SmoothQTask_Init_2(int32_t* arg1);
/* 005283F0 AnimCam_Init_2 */
int32_t* AnimCam_Init_2(int32_t* arg1);
/* 00528400 AnimCam_Update_2 */
void* AnimCam_Update_2(void* arg1);
/* 0052ABD0 AnimScaleTask_Init_2 */
int32_t AnimScaleTask_Init_2(int32_t* arg1);
/* 0052AC00 AnimScaleTask_Update */
int32_t* AnimScaleTask_Update(int32_t* arg1);
/* 0052B620 DiscardTerrainArea_Create */
int32_t* DiscardTerrainArea_Create(int32_t* arg1);
/* 0052B630 DiscardTerrainArea_Init_2 */
void* DiscardTerrainArea_Init_2(int32_t arg1, void* arg2);
/* 0052BFE0 DiscardTerrain_Prepare */
int32_t* DiscardTerrain_Prepare(int32_t* arg1);
/* 0052C0B0 DiscardTerrain_Init_2 */
int32_t DiscardTerrain_Init_2(void);
/* 0052C580 SkyTask_Init_2 */
void* SkyTask_Init_2(void* arg1, int32_t* arg2);
/* 0052C790 LevelScript_Create */
int32_t* LevelScript_Create(int32_t* arg1);
/* 0052C7A0 LevelScript_Init_2 */
void* LevelScript_Init_2(void* arg1);
/* 0052C7C0 LevelScript_Execute */
void* LevelScript_Execute(void* arg1);
/* 005309A0 __allshl */
int32_t __allshl(void);
/* 005316F0 BoneMagicObj_Init_2 */
int32_t BoneMagicObj_Init_2(void* arg1, void* arg2);
/* 00486CD0 StatusScreen_OnEvent1 */
int32_t StatusScreen_OnEvent1(void* arg1);
/* 00486D70 StatusScreen_OnEvent2 */
int32_t StatusScreen_OnEvent2(void* arg1);
/* 00413A90 WeaponType_Open_2 */
void* WeaponType_Open_2(struct weapon_ctx* ctx);


/* --- Full Codebase Engine Coverage Natives (Sound, Physics, Weapon, Weather, Anim, Script, AI, Render, UI) --- */
/* 00402070 QTask_ProcessLOCALconfigqsc */
int32_t QTask_ProcessLOCALconfigqsc(struct frames_ctx* arg1);
/* 00402240 QTask_InvokeRestoreDevice */
int32_t QTask_InvokeRestoreDevice(int32_t arg1);
/* 00402740 QTask_ProcessLOCALconfigqsc_402740 */
int32_t QTask_ProcessLOCALconfigqsc_402740(void);
/* 00406B60 AIConfig_GetContext_406B60 */
int32_t* AIConfig_GetContext_406B60(int32_t* arg1);
/* 00406B70 AIConfig_ProcessStep_406B70 */
int32_t AIConfig_ProcessStep_406B70(void* arg1, int32_t* arg2);
/* 00407B50 AIConfig_GetContext_407B50 */
int32_t AIConfig_GetContext_407B50(void* arg1);
/* 00407B90 AIConfig_InvokeApplyProfile */
int32_t* AIConfig_InvokeApplyProfile(int32_t* arg1);
/* 00407BA0 AIConfig_InvokeApplyProfile_407BA0 */
int32_t AIConfig_InvokeApplyProfile_407BA0(void* arg1);
/* 00407CF0 AIConfig_Invoke10 */
int32_t* AIConfig_Invoke10(int32_t* arg1);
/* 004087B0 HumanPlayer_ExecutePipeline_4087B0 */
int32_t HumanPlayer_ExecutePipeline_4087B0(void* arg1, void* arg2);
/* 00409A80 HumanPlayer_ExecutePipeline_409A80 */
int32_t HumanPlayer_ExecutePipeline_409A80(void* arg1, void* arg2);
/* 00409C90 HumanPlayer_ExecutePipeline_409C90 */
int32_t HumanPlayer_ExecutePipeline_409C90(void* arg1, void* arg2);
/* 00409E80 HumanPlayer_ExecutePipeline_409E80 */
int32_t HumanPlayer_ExecutePipeline_409E80(void* arg1, void* arg2);
/* 0040A090 HumanPlayer_ExecutePipeline_40A090 */
int32_t HumanPlayer_ExecutePipeline_40A090(void* arg1, void* arg2);
/* 0040A2A0 HumanPlayer_ExecutePipeline_40A2A0 */
int32_t HumanPlayer_ExecutePipeline_40A2A0(void* arg1, void* arg2);
/* 0040A490 HumanPlayer_ExecutePipeline_40A490 */
int32_t HumanPlayer_ExecutePipeline_40A490(void* arg1, void* arg2);
/* 0040A670 HumanPlayer_ExecutePipeline_40A670 */
int32_t HumanPlayer_ExecutePipeline_40A670(void* arg1, void* arg2);
/* 0040A870 HumanPlayer_ExecutePipeline_40A870 */
int32_t HumanPlayer_ExecutePipeline_40A870(void* arg1, void* arg2);
/* 0040AA30 HumanPlayer_InvokeStateAnimation */
void* HumanPlayer_InvokeStateAnimation(void* arg1, int32_t arg2);
/* 0040AAC0 HumanPlayer_InvokeStateAnimation_40AAC0 */
void* HumanPlayer_InvokeStateAnimation_40AAC0(void* arg1, int32_t arg2);
/* 0040AB60 HumanPlayer_ExecutePipeline_40AB60 */
void* HumanPlayer_ExecutePipeline_40AB60(void* arg1, int32_t arg2);
/* 0040AD20 HumanPlayer_ExecutePipeline_40AD20 */
void* HumanPlayer_ExecutePipeline_40AD20(void* arg1, int32_t arg2);
/* 0040AEF0 HumanPlayer_ExecutePipeline_40AEF0 */
void* HumanPlayer_ExecutePipeline_40AEF0(void* arg1, int32_t arg2);
/* 0040B0A0 HumanPlayer_ExecutePipeline_40B0A0 */
void* HumanPlayer_ExecutePipeline_40B0A0(void* arg1, int32_t arg2);
/* 0040B240 HumanPlayer_ExecutePipeline_40B240 */
void* HumanPlayer_ExecutePipeline_40B240(void* arg1, int32_t arg2);
/* 0040B410 HumanPlayer_ExecutePipeline_40B410 */
void* HumanPlayer_ExecutePipeline_40B410(void* arg1, int32_t arg2);
/* 0040B5C0 HumanPlayer_ExecutePipeline_40B5C0 */
void* HumanPlayer_ExecutePipeline_40B5C0(void* arg1, int32_t arg2);
/* 0040B760 HumanPlayer_ExecutePipeline_40B760 */
void* HumanPlayer_ExecutePipeline_40B760(void* arg1, int32_t arg2);
/* 0040B920 HumanPlayer_ExecutePipeline_40B920 */
void* HumanPlayer_ExecutePipeline_40B920(void* arg1, int32_t arg2);
/* 0040C160 HumanPlayer_Processpickloopend */
int32_t HumanPlayer_Processpickloopend(void* arg1, void* arg2);
/* 0040C870 HumanPlayer_Processtypecompend */
int32_t HumanPlayer_Processtypecompend(void* arg1, void* arg2);
/* 0040CAE0 HumanPlayer_Invoke21 */
void* HumanPlayer_Invoke21(void* arg1, void* arg2);
/* 0040D580 HumanPlayer_Invoke21_40D580 */
int32_t HumanPlayer_Invoke21_40D580(void* arg1, void* arg2);
/* 0040DD00 HumanPlayer_InvokeStateAnimation_40DD00 */
void* HumanPlayer_InvokeStateAnimation_40DD00(void* arg1, void* arg2);
/* 0040DDA0 HumanPlayer_Processwiredragd */
struct status_msg* HumanPlayer_Processwiredragd(void* arg1, void* arg2);
/* 0040DFC0 HumanPlayer_ExecutePipeline_40DFC0 */
float HumanPlayer_ExecutePipeline_40DFC0(float arg1 ) __location("eax");
/* 0040E980 HumanPlayer_Invoke9 */
int32_t HumanPlayer_Invoke9(void* arg1, void* arg2);
/* 0040EF5C HumanPlayer_GetContext_40EF5C */
void* HumanPlayer_GetContext_40EF5C(void* arg1);
/* 0040F100 HumanPlayer_Invoke12 */
int32_t HumanPlayer_Invoke12(void* arg1, void* arg2);
/* 0040F3F0 HumanPlayer_Invoke20 */
int32_t HumanPlayer_Invoke20(void* arg1, void* arg2);
/* 0040FB90 HumanPlayer_Invoke12_40FB90 */
void* HumanPlayer_Invoke12_40FB90(void* arg1, void* arg2);
/* 00410360 HumanPlayer_DefaultHandler_410360 */
int32_t HumanPlayer_DefaultHandler_410360(void);
/* 004105C0 HumanPlayer_ExecutePipeline_4105C0 */
int32_t HumanPlayer_ExecutePipeline_4105C0(void* arg1, void* arg2);
/* 00410700 HumanPlayer_ExecutePipeline_410700 */
int32_t HumanPlayer_ExecutePipeline_410700(void* arg1, void* arg2);
/* 004108B0 HumanPlayer_Invoke8 */
int32_t* HumanPlayer_Invoke8(int32_t* arg1);
/* 004108C0 HumanPlayer_Invoke8_4108C0 */
int32_t HumanPlayer_Invoke8_4108C0(int32_t arg1, int32_t arg2);
/* 00410900 HumanPlayer_Invoke29 */
int32_t HumanPlayer_Invoke29(void* arg1, int32_t arg2);
/* 00410960 HumanPlayer_InvokeRunUpdate */
void* HumanPlayer_InvokeRunUpdate(int32_t arg1, void* arg2);
/* 004123F0 HumanPlayer_ProcessNoactiveplayerpr */
void* HumanPlayer_ProcessNoactiveplayerpr(int32_t* arg1);
/* 00412420 HumanPlayer_Invoke16 */
int32_t HumanPlayer_Invoke16(int32_t* arg1);
/* 00415B10 LevelMission_Invoke4 */
int32_t LevelMission_Invoke4(char* arg1);
/* 00416110 LevelMission_ProcessLOCALcommontextu */
void* LevelMission_ProcessLOCALcommontextu(void* arg1);
/* 00416A90 LevelMission_Invoke11 */
char* LevelMission_Invoke11(int32_t arg1, char* arg2);
/* 00416AB0 LevelMission_GetParam_416AB0 */
bool* LevelMission_GetParam_416AB0(int32_t arg1, bool* arg2);
/* 00417E20 LevelMission_Invoke6 */
int32_t LevelMission_Invoke6(int32_t* arg1, void* arg2);
/* 00418070 MenuUI_GetContext_418070 */
int32_t* MenuUI_GetContext_418070(int32_t* arg1);
/* 00418080 MenuUI_Invokemusic */
void* __fastcall MenuUI_Invokemusic(int32_t arg1);
/* 00418A80 MenuUI_Invoke4 */
void* MenuUI_Invoke4(void* arg1);
/* 004191F0 MenuUI_Invoke6 */
void* MenuUI_Invoke6(void* arg1);
/* 004192A0 MenuUI_Invoke4_4192A0 */
int32_t* MenuUI_Invoke4_4192A0(int32_t* arg1);
/* 004197F0 MenuUI_GetContext_4197F0 */
void* MenuUI_GetContext_4197F0(void* arg1);
/* 00419800 MenuUI_GetContext_419800 */
void* MenuUI_GetContext_419800(void* arg1);
/* 00419BE0 MenuUI_Invoke13 */
int32_t MenuUI_Invoke13(void* arg1, int32_t arg2);
/* 00419C20 MenuUI_Invoke6_419C20 */
int32_t MenuUI_Invoke6_419C20(void* arg1);
/* 00419C50 MenuUI_Invoke8 */
int32_t MenuUI_Invoke8(int32_t arg1, int32_t arg2);
/* 00419C90 MenuUI_Invoke13_419C90 */
int32_t MenuUI_Invoke13_419C90(int32_t arg1);
/* 0041A110 MenuUI_GetContext_41A110 */
int32_t* MenuUI_GetContext_41A110(int32_t* arg1);
/* 0041A120 MenuUI_ProcessTypeWriterBox */
void* MenuUI_ProcessTypeWriterBox(void* arg1);
/* 0041A370 MenuUI_Invoke13_41A370 */
int32_t MenuUI_Invoke13_41A370(void* arg1, int32_t arg2);
/* 0041A410 MenuUI_Processfont1fnt */
int32_t MenuUI_Processfont1fnt(void* arg1);
/* 0041A600 MenuUI_Invoke13_41A600 */
void* MenuUI_Invoke13_41A600(void* arg1);
/* 0041A9E0 MenuUI_GetContext_41A9E0 */
int32_t* MenuUI_GetContext_41A9E0(int32_t* arg1);
/* 0041AA80 MenuUI_Invoke4_41AA80 */
void* MenuUI_Invoke4_41AA80(void* arg1);
/* 0041AAA0 MenuUI_ProcessTextBox */
void* MenuUI_ProcessTextBox(void* arg1);
/* 0041ACA0 MenuUI_Invoke13_41ACA0 */
int32_t* MenuUI_Invoke13_41ACA0(void* arg1, int32_t arg2);
/* 0041B160 MenuUI_GetContext_41B160 */
int32_t* MenuUI_GetContext_41B160(int32_t* arg1);
/* 0041B490 MenuUI_Invoke13_41B490 */
int32_t* MenuUI_Invoke13_41B490(void* arg1, int32_t arg2);
/* 0041B830 MenuUI_Invoke4_41B830 */
int32_t* MenuUI_Invoke4_41B830(int32_t* arg1);
/* 0041BB10 MenuUI_Invoke13_41BB10 */
struct status_msg* MenuUI_Invoke13_41BB10(void* arg1, int32_t arg2);
/* 0041BCA0 MenuUI_ProcessABCDEFGHIJKLMNOP */
int32_t MenuUI_ProcessABCDEFGHIJKLMNOP(void* arg1, int32_t arg2);
/* 0041C300 MenuUI_Invoke7 */
int32_t* MenuUI_Invoke7(int32_t* arg1);
/* 0041C8D0 MenuUI_Invoke13_41C8D0 */
struct status_msg* MenuUI_Invoke13_41C8D0(void* arg1, int32_t arg2);
/* 0041CC40 MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40 */
int32_t MenuUI_ProcessABCDEFGHIJKLMNOP_41CC40(void* arg1, int32_t arg2);
/* 0041D000 MenuUI_GetContext_41D000 */
int32_t* MenuUI_GetContext_41D000(int32_t* arg1);
/* 0041D010 MenuUI_Invoke4_41D010 */
void* MenuUI_Invoke4_41D010(void* arg1);
/* 0041D030 MenuUI_ProcessInputBox */
void* MenuUI_ProcessInputBox(void* arg1);
/* 0041D290 MenuUI_Invoke13_41D290 */
int32_t MenuUI_Invoke13_41D290(void* arg1, int32_t arg2);
/* 0041D450 MenuUI_Processmenuk01 */
int32_t MenuUI_Processmenuk01(void* arg1);
/* 0041D9D0 MenuUI_Invoke6_41D9D0 */
int32_t* MenuUI_Invoke6_41D9D0(int32_t* arg1);
/* 0041DDD0 MenuUI_Invoke13_41DDD0 */
int32_t* MenuUI_Invoke13_41DDD0(void* arg1, int32_t arg2);
/* 0041DF30 MenuUI_Processfont4fnt */
int32_t MenuUI_Processfont4fnt(void* arg1, int32_t arg2);
/* 0041E410 MenuUI_Invoke6_41E410 */
int32_t* MenuUI_Invoke6_41E410(int32_t* arg1);
/* 0041E420 MenuUI_Invoke6_41E420 */
void* MenuUI_Invoke6_41E420(void* arg1);
/* 0041E8C0 MenuUI_Invoke13_41E8C0 */
int32_t MenuUI_Invoke13_41E8C0(void* arg1, int32_t arg2);
/* 0041F020 MenuUI_Invoke9 */
int32_t* MenuUI_Invoke9(int32_t* arg1);
/* 0041FF20 MenuUI_Invoke6_41FF20 */
int32_t* MenuUI_Invoke6_41FF20(int32_t* arg1);
/* 00420140 MenuUI_ProcesssvValue */
void* MenuUI_ProcesssvValue(void* arg1);
/* 00420550 MenuUI_Invoke13_420550 */
int32_t* MenuUI_Invoke13_420550(void* arg1, int32_t arg2);
/* 00420E90 MenuUI_Invoke13_420E90 */
int32_t* MenuUI_Invoke13_420E90(void* arg1, int32_t arg2);
/* 00420F40 MenuUI_Processglowspr */
int32_t MenuUI_Processglowspr(int32_t arg1, int32_t arg2);
/* 00421510 MenuUI_Invoke13_421510 */
int32_t MenuUI_Invoke13_421510(void* arg1, int32_t arg2);
/* 004215D0 MenuUI_Invoke14 */
char* MenuUI_Invoke14(void* arg1);
/* 004219B0 MenuUI_Invoke13_4219B0 */
int32_t* MenuUI_Invoke13_4219B0(void* arg1, int32_t arg2);
/* 00421C20 MenuUI_Invoke13_421C20 */
int32_t MenuUI_Invoke13_421C20(void* arg1);
/* 00422180 MenuUI_GetContext_422180 */
int32_t* MenuUI_GetContext_422180(int32_t* arg1);
/* 00422B00 MenuUI_Invoke4_422B00 */
int32_t* MenuUI_Invoke4_422B00(int32_t* arg1);
/* 00422F10 MenuUI_InvokeGetUpdateCounter */
int32_t MenuUI_InvokeGetUpdateCounter(int32_t arg1);
/* 00423350 MenuUI_Processfont1fnt_423350 */
int32_t MenuUI_Processfont1fnt_423350(void* arg1);
/* 00423CA0 MenuUI_GetContext_423CA0 */
int32_t* MenuUI_GetContext_423CA0(int32_t* arg1);
/* 004241C0 MenuUI_Invoke13_4241C0 */
void* MenuUI_Invoke13_4241C0(void* arg1, int32_t arg2);
/* 00424260 MenuUI_Invoke5 */
char* MenuUI_Invoke5(void* arg1, char* arg2);
/* 00424280 MenuUI_InvokeOnEvent */
void* MenuUI_InvokeOnEvent(void* arg1);
/* 00424300 MenuUI_Invoke13_424300 */
void* MenuUI_Invoke13_424300(void* arg1);
/* 00424380 MenuUI_Invoke14_424380 */
void* MenuUI_Invoke14_424380(void* arg1);
/* 00424400 MenuUI_GetContext_424400 */
char* MenuUI_GetContext_424400(void* arg1, char* arg2);
/* 00424420 MenuUI_UpdateState_424420 */
char* MenuUI_UpdateState_424420(void* arg1, char* arg2);
/* 00424C10 MenuUI_GetContext_424C10 */
void* MenuUI_GetContext_424C10(void* arg1, int32_t arg2);
/* 00424C40 MenuUI_Invoke14_424C40 */
int32_t MenuUI_Invoke14_424C40(int32_t arg1);
/* 00424CA0 MenuUI_Invoke23 */
int32_t MenuUI_Invoke23(int32_t arg1 , int32_t arg2 @ 0x10);
/* 00425390 MenuUI_InvokeIsexists */
int32_t* MenuUI_InvokeIsexists(int32_t* arg1);
/* 004253A0 MenuUI_InvokeIsexists_4253A0 */
int32_t MenuUI_InvokeIsexists_4253A0(void* arg1);
/* 00425D90 MenuUI_GetContext_425D90 */
void* MenuUI_GetContext_425D90(void* arg1);
/* 00426860 VehiclePhysics_Invoke9 */
void* VehiclePhysics_Invoke9(void* arg1);
/* 00426CD0 VehiclePhysics_InvokeGetArg */
int32_t VehiclePhysics_InvokeGetArg(long double arg1 , long double arg2 , int32_t* arg3);
/* 00426D30 VehiclePhysics_ProcessHeliWheel */
int32_t VehiclePhysics_ProcessHeliWheel(void* arg1, char* arg2);
/* 004273B0 VehiclePhysics_ExecutePipeline_4273B0 */
void* VehiclePhysics_ExecutePipeline_4273B0(void* arg1);
/* 004277C0 VehiclePhysics_InvokeGetArg_4277C0 */
int32_t VehiclePhysics_InvokeGetArg_4277C0(long double arg1 , long double arg2 , int32_t* arg3);
/* 00427D40 VehiclePhysics_InvokeGetArg_427D40 */
int32_t VehiclePhysics_InvokeGetArg_427D40(int32_t* arg1);
/* 00427D70 VehiclePhysics_Invoke2 */
int32_t* VehiclePhysics_Invoke2(int32_t* arg1);
/* 00427F30 VehiclePhysics_GetContext_427F30 */
void* VehiclePhysics_GetContext_427F30(void* arg1);
/* 00427F50 VehiclePhysics_InvokeValueSet */
int32_t VehiclePhysics_InvokeValueSet(long double arg1 , long double arg2 , int32_t* arg3);
/* 00427F80 VehiclePhysics_GetContext_427F80 */
int32_t* VehiclePhysics_GetContext_427F80(int32_t* arg1);
/* 00427F90 VehiclePhysics_GetContext_427F90 */
void* VehiclePhysics_GetContext_427F90(int32_t* arg1);
/* 00427FC0 VehiclePhysics_ProcessMissile */
char* VehiclePhysics_ProcessMissile(void* arg1, char* arg2);
/* 00428270 VehiclePhysics_Invoke18 */
int32_t VehiclePhysics_Invoke18(float arg1);
/* 00429720 VehiclePhysics_Invoke18_429720 */
int32_t* VehiclePhysics_Invoke18_429720(int32_t* arg1);
/* 00429890 VehiclePhysics_GetContext_429890 */
int32_t* VehiclePhysics_GetContext_429890(int32_t* arg1);
/* 004298A0 VehiclePhysics_GetContext_4298A0 */
struct status_msg* VehiclePhysics_GetContext_4298A0(int32_t* arg1);
/* 00429910 VehiclePhysics_GetContext_429910 */
int32_t* VehiclePhysics_GetContext_429910(int32_t* arg1);
/* 00429F80 VehiclePhysics_Invoke4 */
int32_t* VehiclePhysics_Invoke4(float arg1);
/* 0042B030 VehiclePhysics_GetContext_42B030 */
int32_t* VehiclePhysics_GetContext_42B030(int32_t* arg1);
/* 0042B220 VehiclePhysics_GetContext_42B220 */
int32_t* VehiclePhysics_GetContext_42B220(void* arg1, int32_t* arg2);
/* 0042B240 VehiclePhysics_DefaultHandler_42B240 */
int32_t* VehiclePhysics_DefaultHandler_42B240(void* arg1, int32_t* arg2);
/* 0042B280 VehiclePhysics_GetContext_42B280 */
char* VehiclePhysics_GetContext_42B280(void* arg1, int32_t* arg2);
/* 0042B2C0 VehiclePhysics_ProcessStep_42B2C0 */
void* VehiclePhysics_ProcessStep_42B2C0(int32_t* arg1);
/* 0042B2F0 VehiclePhysics_ExecutePipeline_42B2F0 */
int32_t* VehiclePhysics_ExecutePipeline_42B2F0(int32_t* arg1);
/* 0042BB60 VehiclePhysics_Invoke12 */
int32_t VehiclePhysics_Invoke12(int32_t arg1, int32_t arg2);
/* 0042BBA0 VehiclePhysics_Invoke12_42BBA0 */
int32_t* VehiclePhysics_Invoke12_42BBA0(void* arg1, int32_t arg2);
/* 0042C4B0 VehiclePhysics_GetContext_42C4B0 */
int32_t VehiclePhysics_GetContext_42C4B0(void* arg1);
/* 0042D9B0 VehiclePhysics_Invoke3 */
int32_t VehiclePhysics_Invoke3(void* arg1, int32_t arg2);
/* 0042D9F0 VehiclePhysics_InvokeGetArg_42D9F0 */
char* VehiclePhysics_InvokeGetArg_42D9F0(long double arg1 , long double arg2 , int32_t* arg3);
/* 0042DA60 VehiclePhysics_Invoke2_42DA60 */
int32_t* VehiclePhysics_Invoke2_42DA60(int32_t* arg1);
/* 0042DCE0 VehiclePhysics_Invoke5 */
int32_t* VehiclePhysics_Invoke5(int32_t* arg1);
/* 0042EA00 VehiclePhysics_GetContext_42EA00 */
int32_t* VehiclePhysics_GetContext_42EA00(int32_t* arg1);
/* 0042F850 VehiclePhysics_GetContext_42F850 */
int32_t* VehiclePhysics_GetContext_42F850(void* arg1, int32_t* arg2);
/* 0042F870 VehiclePhysics_ProcessStep_42F870 */
void* VehiclePhysics_ProcessStep_42F870(int32_t* arg1);
/* 0042F8A0 VehiclePhysics_ExecutePipeline_42F8A0 */
void* VehiclePhysics_ExecutePipeline_42F8A0(void* arg1, uint32_t arg2);
/* 0042FA60 VehiclePhysics_Invoke17 */
int32_t VehiclePhysics_Invoke17(void* arg1, float arg2);
/* 0042FB10 VehiclePhysics_InvokeLoadParameters */
int32_t VehiclePhysics_InvokeLoadParameters(void* arg1, int32_t* arg2);
/* 0042FC50 VehiclePhysics_Invoke12_42FC50 */
char* VehiclePhysics_Invoke12_42FC50(int32_t arg1, char* arg2);
/* 0042FC70 VehiclePhysics_Invoke12_42FC70 */
int32_t VehiclePhysics_Invoke12_42FC70(int32_t arg1, int32_t* arg2);
/* 0042FE80 VehiclePhysics_Invoke23 */
int32_t VehiclePhysics_Invoke23(long double arg1 , long double arg2 , int32_t* arg3);
/* 0042FEF0 VehiclePhysics_ProcessWheel */
int32_t* VehiclePhysics_ProcessWheel(int32_t* arg1);
/* 00431B60 VehiclePhysics_GetContext_431B60 */
int32_t* VehiclePhysics_GetContext_431B60(int32_t* arg1);
/* 00432BB0 VehiclePhysics_GetContext_432BB0 */
int32_t* VehiclePhysics_GetContext_432BB0(void* arg1, int32_t* arg2);
/* 00432BD0 VehiclePhysics_GetContext_432BD0 */
int32_t* VehiclePhysics_GetContext_432BD0(int32_t* arg1);
/* 00432BE0 VehiclePhysics_ProcessStep_432BE0 */
void* VehiclePhysics_ProcessStep_432BE0(int32_t* arg1);
/* 00432C10 VehiclePhysics_ExecutePipeline_432C10 */
void* VehiclePhysics_ExecutePipeline_432C10(void* arg1, uint32_t arg2);
/* 00432F20 VehiclePhysics_Invoke17_432F20 */
int32_t VehiclePhysics_Invoke17_432F20(void* arg1, int32_t* arg2);
/* 00432F40 VehiclePhysics_InvokeLoadParameters_432F40 */
int32_t* VehiclePhysics_InvokeLoadParameters_432F40(void* arg1, int32_t* arg2);
/* 00432F60 VehiclePhysics_Invoke3_432F60 */
int32_t VehiclePhysics_Invoke3_432F60(int32_t* arg1);
/* 00432F80 VehiclePhysics_Invoke12_432F80 */
int32_t* VehiclePhysics_Invoke12_432F80(int32_t* arg1);
/* 00432F90 VehiclePhysics_Invoke12_432F90 */
int32_t* VehiclePhysics_Invoke12_432F90(void* arg1, int32_t arg2);
/* 00433000 VehiclePhysics_Invoke4_433000 */
int32_t VehiclePhysics_Invoke4_433000(int32_t arg1, int32_t* arg2);
/* 004337D0 VehiclePhysics_GetContext_4337D0 */
int32_t* VehiclePhysics_GetContext_4337D0(int32_t* arg1);
/* 00434A30 VehiclePhysics_GetContext_434A30 */
int32_t* VehiclePhysics_GetContext_434A30(void* arg1, int32_t* arg2);
/* 00434A50 VehiclePhysics_ProcessStep_434A50 */
void* VehiclePhysics_ProcessStep_434A50(int32_t* arg1);
/* 00434A80 VehiclePhysics_ExecutePipeline_434A80 */
void* VehiclePhysics_ExecutePipeline_434A80(void* arg1, uint32_t arg2);
/* 00434CD0 VehiclePhysics_Invoke17_434CD0 */
int32_t VehiclePhysics_Invoke17_434CD0(void* arg1, float arg2);
/* 00434DA0 VehiclePhysics_InvokeLoadParameters_434DA0 */
int32_t VehiclePhysics_InvokeLoadParameters_434DA0(void* arg1, int32_t* arg2);
/* 00434E10 VehiclePhysics_ProcessVirModelsnotavai */
int32_t VehiclePhysics_ProcessVirModelsnotavai(int32_t* arg1, float arg2);
/* 004352A0 VehiclePhysics_UpdateState_4352A0 */
void* VehiclePhysics_UpdateState_4352A0(void* arg1);
/* 00435460 VehiclePhysics_ProcessVirModelsnotavai_435460 */
int32_t VehiclePhysics_ProcessVirModelsnotavai_435460(int32_t* arg1, float arg2);
/* 00435930 VehiclePhysics_ExecutePipeline_435930 */
float* VehiclePhysics_ExecutePipeline_435930(void* arg1);
/* 00435C50 VehiclePhysics_ProcessVirModelsnotavai_435C50 */
int32_t VehiclePhysics_ProcessVirModelsnotavai_435C50(int32_t* arg1, float arg2);
/* 00435E50 VehiclePhysics_ExecutePipeline_435E50 */
float* VehiclePhysics_ExecutePipeline_435E50(void* arg1);
/* 00436090 WeatherEnv_InvokeValueSet */
int32_t WeatherEnv_InvokeValueSet(long double arg1 , int32_t* arg2);
/* 00436740 WeatherEnv_InvokeGetArg */
int32_t WeatherEnv_InvokeGetArg(long double arg1 , int32_t* arg2);
/* 00436950 WeatherEnv_GetContext_436950 */
int32_t* WeatherEnv_GetContext_436950(void* arg1);
/* 00436C60 WeatherEnv_Processrain2 */
int32_t* WeatherEnv_Processrain2(void* arg1);
/* 004374C0 WeatherEnv_InvokeUpdate */
int32_t* WeatherEnv_InvokeUpdate(int32_t* arg1);
/* 004374D0 WeatherEnv_InvokeUpdate_4374D0 */
int32_t* WeatherEnv_InvokeUpdate_4374D0(void* arg1);
/* 00437B90 WeatherEnv_GetContext_437B90 */
int32_t* WeatherEnv_GetContext_437B90(void* arg1);
/* 00437DA0 WeatherEnv_GetContext_437DA0 */
int32_t* WeatherEnv_GetContext_437DA0(int32_t* arg1);
/* 004389A0 ExplosionObj_Invoke10 */
int32_t ExplosionObj_Invoke10(void* arg1, int32_t arg2);
/* 00438BF0 ExplosionObj_GetContext_438BF0 */
int32_t* ExplosionObj_GetContext_438BF0(int32_t* arg1);
/* 00438C00 ExplosionObj_Invoke4 */
int32_t* ExplosionObj_Invoke4(int32_t* arg1);
/* 00438C30 ExplosionObj_Invoke4_438C30 */
int32_t* ExplosionObj_Invoke4_438C30(float arg1);
/* 0043A0E0 ExplosionObj_Invoke6 */
int32_t* ExplosionObj_Invoke6(float arg1);
/* 0043A440 ExplosionObj_InvokeMissing */
int32_t* ExplosionObj_InvokeMissing(int32_t* arg1);
/* 0043A5E0 ExplosionObj_Invoke1009011 */
int32_t ExplosionObj_Invoke1009011(void* arg1);
/* 0043AB50 ExplosionObj_GetContext_43AB50 */
int32_t* ExplosionObj_GetContext_43AB50(void* arg1);
/* 0043AF20 ExplosionObj_InvokeTrailUpdate */
char* ExplosionObj_InvokeTrailUpdate(void* arg1, int32_t arg2);
/* 0043B110 ExplosionObj_InvokeTrailUpdate_43B110 */
char* ExplosionObj_InvokeTrailUpdate_43B110(void* arg1);
/* 0043B160 ExplosionObj_Invoke8 */
int32_t* ExplosionObj_Invoke8(int32_t* arg1);
/* 0043B170 ExplosionObj_Invoke8_43B170 */
int32_t ExplosionObj_Invoke8_43B170(void* arg1, int32_t arg2);
/* 0043B490 ExplosionObj_InvokeTrailUpdate_43B490 */
int32_t* ExplosionObj_InvokeTrailUpdate_43B490(void* arg1, int32_t arg2);
/* 0043BE50 ExplosionObj_Invoke4_43BE50 */
int32_t* ExplosionObj_Invoke4_43BE50(int32_t* arg1);
/* 0043C2A0 ExplosionObj_GetContext_43C2A0 */
int32_t* ExplosionObj_GetContext_43C2A0(int32_t* arg1);
/* 0043C2B0 ExplosionObj_GetContext_43C2B0 */
void* ExplosionObj_GetContext_43C2B0(void* arg1, void* arg2);
/* 0043CB60 ExplosionObj_InvokeMissing_43CB60 */
int32_t* ExplosionObj_InvokeMissing_43CB60(int32_t* arg1);
/* 0043DCF0 ExplosionObj_Invoke7 */
void* ExplosionObj_Invoke7(void* arg1);
/* 0043DDA0 ExplosionObj_InvokeMissing_43DDA0 */
int32_t* ExplosionObj_InvokeMissing_43DDA0(int32_t* arg1);
/* 0043DDB0 ExplosionObj_InvokeMissing_43DDB0 */
float ExplosionObj_InvokeMissing_43DDB0(float arg1, char* arg2) __location("eax");
/* 0043EAA0 ExplosionObj_InvokeUpdate */
void* ExplosionObj_InvokeUpdate(float arg1);
/* 0043EC20 ExplosionObj_Invoke29 */
int32_t* ExplosionObj_Invoke29(int32_t* arg1);
/* 0043F340 ExplosionObj_GetContext_43F340 */
void* ExplosionObj_GetContext_43F340(void* arg1);
/* 0043F3C0 ExplosionObj_GetContext_43F3C0 */
int32_t* ExplosionObj_GetContext_43F3C0(int32_t* arg1);
/* 0043F6C0 ExplosionObj_GetContext_43F6C0 */
int32_t* ExplosionObj_GetContext_43F6C0(int32_t* arg1);
/* 0043F6D0 ExplosionObj_Invoke9 */
void* ExplosionObj_Invoke9(void* arg1);
/* 0043F6E0 ExplosionObj_Invoke9_43F6E0 */
int32_t ExplosionObj_Invoke9_43F6E0(int32_t* arg1);
/* 0043FE90 ExplosionObj_InvokeMissing_43FE90 */
int32_t* ExplosionObj_InvokeMissing_43FE90(int32_t* arg1);
/* 0043FF70 ExplosionObj_Invoke2 */
int32_t* ExplosionObj_Invoke2(void* arg1, int32_t* arg2);
/* 00440230 DoorCabinet_Invoke9 */
int32_t DoorCabinet_Invoke9(int32_t* arg1);
/* 00440840 DoorCabinet_Invoke3 */
int32_t* DoorCabinet_Invoke3(void* arg1, int32_t arg2);
/* 00440D30 DoorCabinet_Invoke3_440D30 */
int32_t* DoorCabinet_Invoke3_440D30(void* arg1, int32_t arg2);
/* 00440DE0 DoorCabinet_Invoke3_440DE0 */
char* DoorCabinet_Invoke3_440DE0(void* arg1);
/* 00440E40 DoorCabinet_Invoke8 */
int32_t* DoorCabinet_Invoke8(int32_t* arg1);
/* 00440E50 DoorCabinet_Invoke8_440E50 */
int32_t DoorCabinet_Invoke8_440E50(void* arg1, int32_t arg2);
/* 004422B0 DoorCabinet_ProcessStep_4422B0 */
void* DoorCabinet_ProcessStep_4422B0(void* arg1, void* arg2);
/* 004423C0 DoorCabinet_Invoke13 */
int32_t DoorCabinet_Invoke13(void* arg1, char* arg2);
/* 00442730 DoorCabinet_InvokeMissing */
int32_t* DoorCabinet_InvokeMissing(int32_t* arg1);
/* 00443840 DoorCabinet_Invoke3_443840 */
int32_t* DoorCabinet_Invoke3_443840(void* arg1, int32_t arg2);
/* 00443A00 DoorCabinet_Invoke8_443A00 */
int32_t* DoorCabinet_Invoke8_443A00(int32_t* arg1);
/* 00443A10 DoorCabinet_Invoke8_443A10 */
int32_t DoorCabinet_Invoke8_443A10(void* arg1, int32_t arg2);
/* 004446D0 DoorCabinet_InvokeMissing_4446D0 */
int32_t* DoorCabinet_InvokeMissing_4446D0(int32_t* arg1);
/* 00444940 DoorCabinet_ProcesssisInUse */
void* DoorCabinet_ProcesssisInUse(void* arg1, void* arg2);
/* 004449A0 DoorCabinet_Invoke9_4449A0 */
int32_t DoorCabinet_Invoke9_4449A0(int32_t* arg1);
/* 004452E0 DoorCabinet_InvokeMissing_4452E0 */
int32_t* DoorCabinet_InvokeMissing_4452E0(int32_t* arg1);
/* 00445820 DoorCabinet_Invoke9_445820 */
int32_t DoorCabinet_Invoke9_445820(int32_t* arg1);
/* 00445840 DoorCabinet_ProcesssisOn */
void* DoorCabinet_ProcesssisOn(void* arg1);
/* 004468F0 DoorCabinet_Invoke3_4468F0 */
char* DoorCabinet_Invoke3_4468F0(float arg1);
/* 00446CE0 DoorCabinet_Invoke9_446CE0 */
int32_t DoorCabinet_Invoke9_446CE0(void* arg1, int32_t* arg2);
/* 00447A80 DoorCabinet_GetContext_447A80 */
int32_t* DoorCabinet_GetContext_447A80(int32_t* arg1);
/* 00447FF0 DoorCabinet_Invoke3_447FF0 */
int32_t* DoorCabinet_Invoke3_447FF0(void* arg1, int32_t arg2);
/* 004481F0 DoorCabinet_Invoke8_4481F0 */
int32_t* DoorCabinet_Invoke8_4481F0(int32_t* arg1);
/* 00448200 DoorCabinet_Invoke8_448200 */
int32_t DoorCabinet_Invoke8_448200(void* arg1, int32_t arg2);
/* 004484F0 DoorCabinet_GetContext_4484F0 */
void* DoorCabinet_GetContext_4484F0(void* arg1);
/* 00448510 DoorCabinet_Invoke9_448510 */
int32_t DoorCabinet_Invoke9_448510(void* arg1, int32_t* arg2);
/* 00448880 DoorCabinet_Invoke15 */
int32_t* DoorCabinet_Invoke15(int32_t* arg1);
/* 00448B70 DoorCabinet_ProcessVirModelsnotavai */
struct status_msg* DoorCabinet_ProcessVirModelsnotavai(void* arg1, float arg2);
/* 00449180 DoorCabinet_Invoke8_449180 */
void* DoorCabinet_Invoke8_449180(void* arg1, char* arg2);
/* 00449600 DoorCabinet_Invoke8_449600 */
int32_t* DoorCabinet_Invoke8_449600(int32_t* arg1);
/* 00449610 DoorCabinet_Invoke8_449610 */
int32_t DoorCabinet_Invoke8_449610(void* arg1, int32_t arg2);
/* 004497B0 DoorCabinet_GetContext_4497B0 */
int32_t* DoorCabinet_GetContext_4497B0(int32_t arg1, int32_t* arg2);
/* 004497F0 DoorCabinet_ProcessVirModelsnotavai_4497F0 */
int32_t* DoorCabinet_ProcessVirModelsnotavai_4497F0(float arg1, int32_t* arg2);
/* 00449B00 DoorCabinet_Invoke333333333 */
int32_t DoorCabinet_Invoke333333333(void* arg1, int32_t* arg2);
/* 00449CB0 DoorCabinet_Invoke333333333Glassshatte */
struct status_msg* DoorCabinet_Invoke333333333Glassshatte(struct status_msg* arg1, int32_t* arg2);
/* 0044A1A0 DoorCabinet_InvokeFindType */
int32_t DoorCabinet_InvokeFindType(void* arg1);
/* 0044C2C0 DoorCabinet_ProcessStep_44C2C0 */
int32_t* DoorCabinet_ProcessStep_44C2C0(void* arg1);
/* 0044C730 DoorCabinet_GetContext_44C730 */
int32_t* DoorCabinet_GetContext_44C730(int32_t* arg1);
/* 00453630 HumanAI_GetContext_453630 */
void* HumanAI_GetContext_453630(void* arg1);
/* 00453650 HumanAI_Invoke33 */
int32_t* HumanAI_Invoke33(int32_t* arg1);
/* 00453670 HumanAI_Invoke4 */
int32_t* HumanAI_Invoke4(int32_t* arg1);
/* 00453680 HumanAI_Invoke4_453680 */
void* HumanAI_Invoke4_453680(void* arg1);
/* 00453AE0 HumanAI_ExecutePipeline_453AE0 */
void* HumanAI_ExecutePipeline_453AE0(void* arg1, int32_t arg2);
/* 00453CB0 HumanAI_ExecutePipeline_453CB0 */
void* HumanAI_ExecutePipeline_453CB0(void* arg1, int32_t arg2);
/* 00453E50 HumanAI_ExecutePipeline_453E50 */
void* HumanAI_ExecutePipeline_453E50(void* arg1, int32_t arg2);
/* 00454220 HumanAI_InvokeStateAnimation */
void* HumanAI_InvokeStateAnimation(void* arg1, int32_t arg2);
/* 00454330 HumanAI_InvokeStateAnimation_454330 */
void* HumanAI_InvokeStateAnimation_454330(void* arg1, int32_t arg2);
/* 00454410 HumanAI_InvokeStateAnimation_454410 */
void* HumanAI_InvokeStateAnimation_454410(void* arg1, int32_t arg2);
/* 00454B10 HumanAI_Invoke17 */
int32_t* HumanAI_Invoke17(void* arg1, int32_t arg2);
/* 00455070 HumanAI_InvokeSpeedZMS2F */
int32_t HumanAI_InvokeSpeedZMS2F(int32_t arg1, void* arg2);
/* 00455A40 HumanAI_ExecutePipeline_455A40 */
void* HumanAI_ExecutePipeline_455A40(void* arg1, int32_t arg2);
/* 00455BE0 HumanAI_ExecutePipeline_455BE0 */
void* HumanAI_ExecutePipeline_455BE0(void* arg1, int32_t arg2);
/* 00455D80 HumanAI_ExecutePipeline_455D80 */
void* HumanAI_ExecutePipeline_455D80(void* arg1, int32_t arg2);
/* 00456010 HumanAI_InvokeStateAnimation_456010 */
void* HumanAI_InvokeStateAnimation_456010(void* arg1, int32_t arg2);
/* 004560F0 HumanAI_InvokeStateAnimation_4560F0 */
void* HumanAI_InvokeStateAnimation_4560F0(void* arg1, int32_t arg2);
/* 004561A0 HumanAI_InvokeStateAnimation_4561A0 */
void* HumanAI_InvokeStateAnimation_4561A0(void* arg1, int32_t arg2);
/* 00456250 HumanAI_InvokeStateAnimation_456250 */
void* HumanAI_InvokeStateAnimation_456250(void* arg1, int32_t arg2);
/* 004565A0 HumanAI_InvokeStateAnimation_4565A0 */
void* HumanAI_InvokeStateAnimation_4565A0(void* arg1, int32_t arg2);
/* 00456C70 HumanAI_Invoke17_456C70 */
int32_t HumanAI_Invoke17_456C70(void* arg1, int32_t arg2);
/* 00456CF0 HumanAI_ExecutePipeline_456CF0 */
int32_t HumanAI_ExecutePipeline_456CF0(void* arg1, void* arg2);
/* 00456FB0 HumanAI_Invoke2 */
int32_t HumanAI_Invoke2(int32_t arg1, void* arg2);
/* 00457A00 HumanAI_ExecutePipeline_457A00 */
void* HumanAI_ExecutePipeline_457A00(void* arg1, int32_t arg2);
/* 00457D30 HumanAI_ExecutePipeline_457D30 */
void* HumanAI_ExecutePipeline_457D30(void* arg1, int32_t arg2);
/* 00457FC0 HumanAI_ExecutePipeline_457FC0 */
void* HumanAI_ExecutePipeline_457FC0(void* arg1, int32_t arg2);
/* 004582C0 HumanAI_ExecutePipeline_4582C0 */
void* HumanAI_ExecutePipeline_4582C0(void* arg1, int32_t arg2);
/* 00458810 HumanAI_InvokeStateAnimation_458810 */
void* HumanAI_InvokeStateAnimation_458810(void* arg1, int32_t arg2);
/* 00458950 HumanAI_InvokeStateAnimation_458950 */
void* HumanAI_InvokeStateAnimation_458950(void* arg1, int32_t arg2);
/* 00458A30 HumanAI_InvokeStateAnimation_458A30 */
void* HumanAI_InvokeStateAnimation_458A30(void* arg1, int32_t arg2);
/* 00458B10 HumanAI_InvokeStateAnimation_458B10 */
void* HumanAI_InvokeStateAnimation_458B10(void* arg1, int32_t arg2);
/* 00458BF0 HumanAI_ExecutePipeline_458BF0 */
void* HumanAI_ExecutePipeline_458BF0(void* arg1, int32_t arg2);
/* 00458DD0 HumanAI_InvokeStateAnimation_458DD0 */
void* HumanAI_InvokeStateAnimation_458DD0(void* arg1, int32_t arg2);
/* 00458EB0 HumanAI_InvokeStateAnimation_458EB0 */
int32_t HumanAI_InvokeStateAnimation_458EB0(void* arg1, void* arg2);
/* 00459040 HumanAI_InvokeStateAnimation_459040 */
void* HumanAI_InvokeStateAnimation_459040(void* arg1, int32_t arg2);
/* 00459A20 HumanAI_Invoke17_459A20 */
int32_t* HumanAI_Invoke17_459A20(void* arg1, int32_t arg2);
/* 00459F00 HumanAI_GetContext_459F00 */
int32_t* HumanAI_GetContext_459F00(int32_t* arg1);
/* 00459F10 HumanAI_Invoke3 */
int32_t HumanAI_Invoke3(int32_t arg1, void* arg2);
/* 0045AD10 HumanAI_ExecutePipeline_45AD10 */
void* HumanAI_ExecutePipeline_45AD10(void* arg1, int32_t arg2);
/* 0045B6E0 HumanAI_InvokeStateAnimation_45B6E0 */
void* HumanAI_InvokeStateAnimation_45B6E0(void* arg1, int32_t arg2);
/* 0045B820 HumanAI_InvokeStateAnimation_45B820 */
void* HumanAI_InvokeStateAnimation_45B820(void* arg1, int32_t arg2);
/* 0045B900 HumanAI_InvokeStateAnimation_45B900 */
void* HumanAI_InvokeStateAnimation_45B900(void* arg1, int32_t arg2);
/* 0045B9C0 HumanAI_InvokeStateAnimation_45B9C0 */
void* HumanAI_InvokeStateAnimation_45B9C0(void* arg1, int32_t arg2);
/* 0045BA80 HumanAI_InvokeStateAnimation_45BA80 */
void* HumanAI_InvokeStateAnimation_45BA80(void* arg1, int32_t arg2);
/* 0045BB40 HumanAI_InvokeStateAnimation_45BB40 */
void* HumanAI_InvokeStateAnimation_45BB40(void* arg1, int32_t arg2);
/* 0045BDC0 HumanAI_InvokeStateAnimation_45BDC0 */
void* HumanAI_InvokeStateAnimation_45BDC0(void* arg1, int32_t arg2);
/* 0045BED0 HumanAI_InvokeStateAnimation_45BED0 */
void* HumanAI_InvokeStateAnimation_45BED0(void* arg1, int32_t arg2);
/* 0045BF90 HumanAI_InvokeStateAnimation_45BF90 */
void* HumanAI_InvokeStateAnimation_45BF90(void* arg1, int32_t arg2);
/* 0045C0C0 HumanAI_InvokeStateAnimation_45C0C0 */
int32_t HumanAI_InvokeStateAnimation_45C0C0(void* arg1, void* arg2);
/* 0045CC50 HumanAI_Invoke17_45CC50 */
int32_t* HumanAI_Invoke17_45CC50(void* arg1, int32_t arg2);
/* 0045D030 HumanAI_GetContext_45D030 */
int32_t* HumanAI_GetContext_45D030(int32_t* arg1);
/* 0045D040 HumanAI_Invoke4_45D040 */
int32_t HumanAI_Invoke4_45D040(int32_t arg1, void* arg2);
/* 0045DCB0 HumanAI_GetContext_45DCB0 */
int32_t* HumanAI_GetContext_45DCB0(void* arg1);
/* 0045DF40 HumanAI_GetContext_45DF40 */
int32_t* HumanAI_GetContext_45DF40(int32_t* arg1);
/* 0045EB30 HumanAI_InvokeQtasklistIsFull */
int32_t* HumanAI_InvokeQtasklistIsFull(void* arg1);
/* 0045EEA0 HumanAI_InvokeFindType */
char* HumanAI_InvokeFindType(int32_t* arg1);
/* 0045EF40 HumanAI_Invoke4_45EF40 */
int32_t HumanAI_Invoke4_45EF40(void* arg1);
/* 0045F880 HumanAI_InvokeMissing */
int32_t* HumanAI_InvokeMissing(int32_t* arg1);
/* 0045F900 HumanAI_GetContext_45F900 */
int32_t HumanAI_GetContext_45F900(int32_t arg1, int32_t* arg2);
/* 0045F910 HumanAI_GetContext_45F910 */
int32_t HumanAI_GetContext_45F910(int32_t arg1, int32_t* arg2);
/* 0045F920 HumanAI_GetParam_45F920 */
char* HumanAI_GetParam_45F920(char* arg1);
/* 0045FDA0 HumanAI_InvokeCheckHearing */
void* HumanAI_InvokeCheckHearing(void* arg1, void* arg2);
/* 0045FE30 HumanAI_Invoke22 */
int32_t HumanAI_Invoke22(void* arg1, int32_t* arg2);
/* 00460070 HumanAI_Invoke12 */
int32_t HumanAI_Invoke12(int32_t arg1);
/* 00460090 HumanAI_ProcessStep_460090 */
int32_t* HumanAI_ProcessStep_460090(void* arg1, int32_t* arg2);
/* 004600C0 HumanAI_ProcessStep_4600C0 */
int32_t* HumanAI_ProcessStep_4600C0(void* arg1, int32_t* arg2);
/* 004601A0 HumanAI_ProcessStep_4601A0 */
void* HumanAI_ProcessStep_4601A0(void* arg1, double* arg2);
/* 00460210 HumanAI_ProcessStep_460210 */
void* HumanAI_ProcessStep_460210(void* arg1, double* arg2);
/* 004606D0 HumanAI_GetContext_4606D0 */
int32_t* HumanAI_GetContext_4606D0(int32_t arg1, int32_t* arg2);
/* 004609F0 HumanAI_Invoke18 */
int32_t HumanAI_Invoke18(int32_t arg1, bool* arg2);
/* 00460A10 HumanAI_Invoke18_460A10 */
double* HumanAI_Invoke18_460A10(int32_t* arg1);
/* 00460A70 HumanAI_Invoke18_460A70 */
double* HumanAI_Invoke18_460A70(int32_t* arg1);
/* 004643A0 HumanAI_Invoke22_4643A0 */
void* HumanAI_Invoke22_4643A0(void* arg1);
/* 004645B0 HumanAI_Invoke005011 */
int32_t* HumanAI_Invoke005011(int32_t* arg1);
/* 004645D0 HumanAI_GetContext_4645D0 */
int32_t* HumanAI_GetContext_4645D0(int32_t arg1, int32_t* arg2);
/* 00465AC0 PickupTrigger_InvokeLoadParameters */
int32_t PickupTrigger_InvokeLoadParameters(int32_t* arg1, int32_t arg2);
/* 00465AE0 PickupTrigger_InvokeFindType */
int32_t* PickupTrigger_InvokeFindType(int32_t* arg1);
/* 00465B80 PickupTrigger_ProcessDeathZone */
int32_t PickupTrigger_ProcessDeathZone(void* arg1, char* arg2);
/* 00466C60 PickupTrigger_ProcessStep_466C60 */
void* PickupTrigger_ProcessStep_466C60(void* arg1);
/* 004673B0 PickupTrigger_Invoke6 */
int32_t* PickupTrigger_Invoke6(void* arg1);
/* 00467520 PickupTrigger_InvokeIsexists */
int32_t* PickupTrigger_InvokeIsexists(int32_t* arg1);
/* 004678F0 PickupTrigger_InvokeNoMoreQcubeCallbacks */
int32_t* PickupTrigger_InvokeNoMoreQcubeCallbacks(void);
/* 00467960 PickupTrigger_InvokeCallbackNotFound */
void** PickupTrigger_InvokeCallbackNotFound(void);
/* 00467C60 PickupTrigger_Invoke27 */
int32_t PickupTrigger_Invoke27(float arg1, float arg2);
/* 004684F0 PickupTrigger_ProcessMARKERNONE */
int32_t* PickupTrigger_ProcessMARKERNONE(void* arg1);
/* 004685B0 PickupTrigger_Invoke25 */
int32_t* PickupTrigger_Invoke25(int32_t* arg1);
/* 004685C0 PickupTrigger_Invoke25_4685C0 */
int32_t PickupTrigger_Invoke25_4685C0(void* arg1);
/* 00468B00 PickupTrigger_Invoke28 */
int32_t PickupTrigger_Invoke28(int32_t* arg1);
/* 00468B30 PickupTrigger_Invoke28_468B30 */
int32_t PickupTrigger_Invoke28_468B30(void* arg1, int32_t* arg2);
/* 00468BB0 PickupTrigger_InvokeGetActiveMode */
int32_t PickupTrigger_InvokeGetActiveMode(void);
/* 00469030 PickupTrigger_Invoke28_469030 */
int32_t PickupTrigger_Invoke28_469030(int32_t* arg1);
/* 00469060 PickupTrigger_Invoke28_469060 */
void* PickupTrigger_Invoke28_469060(void* arg1, int32_t* arg2);
/* 00469D70 PickupTrigger_Invoke28_469D70 */
int32_t PickupTrigger_Invoke28_469D70(int32_t* arg1);
/* 0046A0D0 PickupTrigger_Invoke29 */
void* PickupTrigger_Invoke29(float arg1);
/* 0046ABE0 PickupTrigger_InvokeGetActiveMode_46ABE0 */
void* PickupTrigger_InvokeGetActiveMode_46ABE0(void* arg1);
/* 0046AE20 PickupTrigger_Invoke29_46AE20 */
int32_t PickupTrigger_Invoke29_46AE20(void);
/* 0046B5A0 PickupTrigger_Invoke18 */
int32_t* PickupTrigger_Invoke18(void* arg1);
/* 0046B880 PickupTrigger_Invoke18_46B880 */
int32_t PickupTrigger_Invoke18_46B880(void* arg1);
/* 0046C2B0 PickupTrigger_Invoke5 */
int32_t PickupTrigger_Invoke5(float arg1);
/* 0046C480 PickupTrigger_InvokeMissing */
int32_t* PickupTrigger_InvokeMissing(int32_t* arg1);
/* 0046D040 PickupTrigger_InvokeInit */
int32_t* PickupTrigger_InvokeInit(int32_t* arg1);
/* 0046D050 PickupTrigger_InvokeInit_46D050 */
int32_t* PickupTrigger_InvokeInit_46D050(float arg1);
/* 0046D740 PickupTrigger_InvokeFindType_46D740 */
int32_t* PickupTrigger_InvokeFindType_46D740(int32_t* arg1);
/* 0046D7C0 PickupTrigger_InvokeInit_46D7C0 */
int32_t* PickupTrigger_InvokeInit_46D7C0(int32_t* arg1);
/* 0046D7D0 PickupTrigger_InvokeInit_46D7D0 */
int32_t* PickupTrigger_InvokeInit_46D7D0(float arg1);
/* 0046DF70 PickupTrigger_InvokeUpdate */
int32_t PickupTrigger_InvokeUpdate(int32_t* arg1);
/* 0046E9D0 PickupTrigger_GetContext_46E9D0 */
int32_t* PickupTrigger_GetContext_46E9D0(int32_t* arg1);
/* 0046E9E0 PickupTrigger_GetContext_46E9E0 */
int32_t PickupTrigger_GetContext_46E9E0(int32_t arg1, int32_t* arg2);
/* 0046E9F0 PickupTrigger_ProcessVirModelsnotavai */
int32_t PickupTrigger_ProcessVirModelsnotavai(float arg1, int32_t arg2);
/* 0046FB50 PickupTrigger_GetContext_46FB50 */
int32_t* PickupTrigger_GetContext_46FB50(int32_t* arg1);
/* 0046FB60 PickupTrigger_UpdateState_46FB60 */
void* PickupTrigger_UpdateState_46FB60(void* arg1, char* arg2);
/* 00470500 WeaponGun_Invoke5 */
int32_t WeaponGun_Invoke5(void* arg1, int32_t arg2);
/* 00470540 WeaponGun_InvokeValueSet */
int32_t WeaponGun_InvokeValueSet(long double arg1 , int32_t* arg2);
/* 00470C80 WeaponGun_Invoke8 */
int32_t* WeaponGun_Invoke8(void* arg1, int32_t arg2);
/* 00471120 WeaponGun_ProcessWNES */
int32_t __convention WeaponGun_ProcessWNES("regparm")(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4);
/* 004723D0 WeaponGun_InvokeIsexists */
int32_t* WeaponGun_InvokeIsexists(int32_t* arg1);
/* 004723E0 WeaponGun_InvokeIsexists_4723E0 */
int32_t WeaponGun_InvokeIsexists_4723E0(void* arg1);
/* 00472400 WeaponGun_GetContext_472400 */
int32_t WeaponGun_GetContext_472400(void* arg1);
/* 00472AE0 WeaponGun_Invoke8_472AE0 */
int32_t WeaponGun_Invoke8_472AE0(int32_t* arg1, int32_t* arg2);
/* 00472E10 WeaponGun_Invoke5_472E10 */
int32_t WeaponGun_Invoke5_472E10(void* arg1, int32_t arg2);
/* 004734D0 WeaponGun_Invoke5_4734D0 */
int32_t WeaponGun_Invoke5_4734D0(void* arg1, int32_t arg2);
/* 00473AB0 WeaponGun_Invoke5_473AB0 */
int32_t WeaponGun_Invoke5_473AB0(void* arg1, int32_t arg2);
/* 00473D30 WeaponGun_ProcessWEAPONIDM2HB */
int32_t WeaponGun_ProcessWEAPONIDM2HB(float arg1);
/* 00474980 WeaponGun_InvokeMissing */
float* WeaponGun_InvokeMissing(float arg1);
/* 00474ED0 WeaponGun_GetContext_474ED0 */
int32_t* WeaponGun_GetContext_474ED0(int32_t* arg1);
/* 00474EE0 WeaponGun_Invoke9 */
int32_t* WeaponGun_Invoke9(void* arg1, int32_t* arg2);
/* 00474F10 WeaponGun_Invoke9_474F10 */
int32_t WeaponGun_Invoke9_474F10(int32_t* arg1);
/* 00474F30 WeaponGun_GetContext_474F30 */
int32_t WeaponGun_GetContext_474F30(void* arg1, int32_t* arg2);
/* 00474F50 WeaponGun_GetContext_474F50 */
int32_t* WeaponGun_GetContext_474F50(int32_t* arg1);
/* 00475460 WeaponGun_Invoke5_475460 */
int32_t WeaponGun_Invoke5_475460(void* arg1, int32_t arg2);
/* 004754A0 WeaponGun_Invoke5_4754A0 */
int32_t WeaponGun_Invoke5_4754A0(int32_t arg1);
/* 00475CC0 WeaponGun_InvokeTrailUpdate */
int32_t WeaponGun_InvokeTrailUpdate(int32_t* arg1);
/* 00475D80 WeaponGun_Invoke8_475D80 */
int32_t* WeaponGun_Invoke8_475D80(int32_t* arg1);
/* 00476EA0 WeaponGun_GetContext_476EA0 */
void* WeaponGun_GetContext_476EA0(void* arg1);
/* 00476F70 WeaponGun_InvokeValueSet_476F70 */
int32_t WeaponGun_InvokeValueSet_476F70(long double arg1 , int32_t* arg2);
/* 004776A0 WeaponGun_InvokeGetList */
int32_t WeaponGun_InvokeGetList(int32_t arg1);
/* 004782D0 WeaponGun_ProcessStep_4782D0 */
int32_t WeaponGun_ProcessStep_4782D0(float arg1);
/* 004784F0 WeaponGun_Invoke4 */
void* WeaponGun_Invoke4(void* arg1);
/* 00478510 WeaponGun_Invoke12 */
void* WeaponGun_Invoke12(int32_t arg1);
/* 00478540 WeaponGun_InvokeGetList_478540 */
struct status_msg* WeaponGun_InvokeGetList_478540(uint32_t arg1);
/* 004789B0 WeaponGun_GetContext_4789B0 */
int32_t* WeaponGun_GetContext_4789B0(int32_t* arg1);
/* 00478A80 WeaponGun_GetContext_478A80 */
int32_t WeaponGun_GetContext_478A80(int32_t arg1, int32_t* arg2);
/* 00479AA0 WeaponGun_Invoke8_479AA0 */
int32_t* WeaponGun_Invoke8_479AA0(int32_t* arg1, int32_t* arg2);
/* 00479C10 WeaponGun_Invoke5_479C10 */
int32_t WeaponGun_Invoke5_479C10(void* arg1);
/* 00479C20 WeaponGun_Invoke5_479C20 */
struct status_msg** WeaponGun_Invoke5_479C20(void* arg1, struct status_msg** arg2);
/* 00479C80 WeaponGun_GetContext_479C80 */
void* WeaponGun_GetContext_479C80(void* arg1, int32_t* arg2);
/* 0047A940 WeaponGun_GetContext_47A940 */
void* WeaponGun_GetContext_47A940(void* arg1, int32_t* arg2);
/* 0047D060 WeaponGun_InvokeOnEvent */
void* WeaponGun_InvokeOnEvent(void* arg1, int32_t arg2);
/* 0047D320 WeaponGun_ProcessStep_47D320 */
int32_t WeaponGun_ProcessStep_47D320(void* arg1);
/* 0047D380 WeaponGun_InvokeFindType */
int32_t WeaponGun_InvokeFindType(void* arg1, int32_t* arg2);
/* 00480F30 CombatState_GetContext_480F30 */
void* CombatState_GetContext_480F30(void* arg1);
/* 00481C30 CombatState_GetContext_481C30 */
int32_t* CombatState_GetContext_481C30(int32_t* arg1);
/* 00481E60 CombatState_ProcessStep_481E60 */
void* CombatState_ProcessStep_481E60(void* arg1, void* arg2);
/* 00482650 CombatState_GetContext_482650 */
void* CombatState_GetContext_482650(void* arg1);
/* 00482700 CombatState_InvokeErrorInHumancameraHu */
int32_t* CombatState_InvokeErrorInHumancameraHu(void* arg1);
/* 00485570 CombatState_DefaultHandler_485570 */
int32_t* CombatState_DefaultHandler_485570(void* arg1);
/* 00485740 CombatState_InvokeIsexists */
int32_t* CombatState_InvokeIsexists(int32_t* arg1);
/* 00485B20 CombatState_Invoke7 */
int32_t CombatState_Invoke7(void* arg1);
/* 00485B40 CombatState_Invoke7_485B40 */
int32_t CombatState_Invoke7_485B40(void* arg1);
/* 00486010 CombatState_Invoke7_486010 */
int32_t CombatState_Invoke7_486010(void* arg1);
/* 00487790 CombatState_InvokeIsexists_487790 */
int32_t* CombatState_InvokeIsexists_487790(int32_t* arg1);
/* 004877D0 CombatState_Invoke25 */
void* CombatState_Invoke25(void* arg1, int32_t arg2);
/* 004879E0 CombatState_Invoke6 */
void* CombatState_Invoke6(void* arg1, int32_t arg2);
/* 00487D90 CombatState_Invoke12 */
void* CombatState_Invoke12(void* arg1, int32_t arg2);
/* 00487E20 CombatState_Invoke12_487E20 */
void* CombatState_Invoke12_487E20(void* arg1, int32_t arg2);
/* 004881F0 CombatState_InvokeIsexists_4881F0 */
int32_t* CombatState_InvokeIsexists_4881F0(int32_t* arg1);
/* 00489200 CombatState_Invoke6_489200 */
int32_t CombatState_Invoke6_489200(void* arg1);
/* 00489280 CombatState_Invoke5 */
int32_t* CombatState_Invoke5(int32_t* arg1);
/* 0048A730 CombatState_Invoke16 */
int32_t CombatState_Invoke16(int32_t arg1 , int32_t arg2);
/* 0048C508 CombatState_GetContext_48C508 */
void* CombatState_GetContext_48C508(void* arg1, void* arg2);
/* 0048DEA0 CombatState_GetContext_48DEA0 */
void* CombatState_GetContext_48DEA0(void* arg1);
/* 0048DF70 CombatState_GetContext_48DF70 */
void* CombatState_GetContext_48DF70(void* arg1);
/* 0048DFE0 CombatState_Invoke8 */
int32_t* CombatState_Invoke8(void* arg1, int32_t* arg2);
/* 0048E080 CombatState_GetContext_48E080 */
void* CombatState_GetContext_48E080(void* arg1);
/* 0048E130 CombatState_GetContext_48E130 */
void* CombatState_GetContext_48E130(void* arg1);
/* 0048E1E0 CombatState_GetContext_48E1E0 */
int32_t* CombatState_GetContext_48E1E0(void* arg1, int32_t* arg2);
/* 0048E230 CombatState_ProcessKickgrenade */
int32_t* CombatState_ProcessKickgrenade(void* arg1);
/* 0048E270 CombatState_ProcessRunPanickingstac */
int32_t* CombatState_ProcessRunPanickingstac(void* arg1, int32_t* arg2);
/* 0048E7A0 CombatState_Invoke18 */
int32_t CombatState_Invoke18(void* arg1, int32_t* arg2, int32_t* arg3);
/* 0048EB2C CombatState_Invoke2 */
void* CombatState_Invoke2(void* arg1);
/* 0048EB40 CombatState_GetContext_48EB40 */
void* CombatState_GetContext_48EB40(void* arg1);
/* 0048EBE0 CombatState_ProcessWalkToNoded */
void* CombatState_ProcessWalkToNoded(void* arg1);
/* 0048EC40 CombatState_ProcessRunToNoded */
void* CombatState_ProcessRunToNoded(void* arg1);
/* 0048ECA0 CombatState_GetContext_48ECA0 */
void* CombatState_GetContext_48ECA0(void* arg1);
/* 0048F350 CombatState_Invoke23 */
int32_t CombatState_Invoke23(void);
/* 0048F920 CombatState_ProcessGermany */
int32_t CombatState_ProcessGermany(void);
/* 0048F930 CombatState_ProcessGermany_48F930 */
int32_t CombatState_ProcessGermany_48F930(void);
/* 00490120 DisplayRender_InvokeOpenDevice */
int32_t DisplayRender_InvokeOpenDevice(int32_t arg1 , int32_t arg2, int32_t arg3);
/* 00490530 DisplayRender_InvokeRestoreDevice */
int32_t DisplayRender_InvokeRestoreDevice(int32_t arg1 , int32_t arg2);
/* 00491890 DisplayRender_Invoke4 */
int32_t DisplayRender_Invoke4(PSTR arg1);
/* 004918F0 DisplayRender_Invoke4_4918F0 */
int32_t DisplayRender_Invoke4_4918F0(PSTR arg1);
/* 00491910 DisplayRender_Invoke3 */
int32_t DisplayRender_Invoke3(int32_t* arg1, int32_t* arg2);
/* 00492400 DisplayRender_ProcessCouldntwaitforvb */
int32_t DisplayRender_ProcessCouldntwaitforvb(void);
/* 00492450 DisplayRender_ProcessCouldntclearscre */
int32_t* DisplayRender_ProcessCouldntclearscre(void);
/* 00492670 DisplayRender_ExecutePipeline_492670 */
int32_t __stdcall DisplayRender_ExecutePipeline_492670(void* arg1, char* arg2);
/* 004927B0 DisplayRender_ProcessCouldntgetdevice */
int32_t DisplayRender_ProcessCouldntgetdevice(char* arg1);
/* 00493820 DisplayRender_Invoke6 */
int32_t DisplayRender_Invoke6(void);
/* 00493A60 DisplayRender_ProcessCouldntsetrender */
int32_t DisplayRender_ProcessCouldntsetrender(void);
/* 00493AC0 DisplayRender_ProcessCouldntsetrender_493AC0 */
int32_t DisplayRender_ProcessCouldntsetrender_493AC0(void);
/* 00493B20 DisplayRender_DefaultHandler_493B20 */
int32_t DisplayRender_DefaultHandler_493B20(void);
/* 00493B30 DisplayRender_ProcessCouldntsetcooper */
int32_t* DisplayRender_ProcessCouldntsetcooper(void);
/* 00494700 DisplayRender_ProcessCouldntevicttext */
int32_t* DisplayRender_ProcessCouldntevicttext(void);
/* 00497920 DisplayRender_Invoke2 */
int32_t DisplayRender_Invoke2(int32_t* arg1, int32_t* arg2);
/* 00497950 DisplayRender_Invoke2_497950 */
int32_t DisplayRender_Invoke2_497950(int32_t* arg1);
/* 00497970 DisplayRender_ProcessTransContextPrim */
int32_t DisplayRender_ProcessTransContextPrim(void* arg1);
/* 00497D00 DisplayRender_DefaultHandler_497D00 */
int32_t DisplayRender_DefaultHandler_497D00(int32_t* arg1);
/* 00498140 DisplayRender_ExecutePipeline_498140 */
int32_t DisplayRender_ExecutePipeline_498140(void* arg1);
/* 00498230 DisplayRender_DefaultHandler_498230 */
int32_t DisplayRender_DefaultHandler_498230(void);
/* 00498260 DisplayRender_DefaultHandler_498260 */
int32_t DisplayRender_DefaultHandler_498260(void);
/* 00498290 DisplayRender_Invoke2_498290 */
void* DisplayRender_Invoke2_498290(void* arg1);
/* 00498930 DisplayRender_Invoke24 */
int32_t DisplayRender_Invoke24(void);
/* 00498B00 DisplayRender_ProcessStep_498B00 */
void* DisplayRender_ProcessStep_498B00(void);
/* 00498B80 DisplayRender_Invoke7 */
int32_t DisplayRender_Invoke7(float arg1);
/* 00499430 DisplayRender_Invoke5 */
int32_t* DisplayRender_Invoke5(int32_t arg1 @ ebp, int32_t* arg2);
/* 0049A5E0 DisplayRender_DefaultHandler_49A5E0 */
int32_t DisplayRender_DefaultHandler_49A5E0(void);
/* 0049C800 DisplayRender_InvokeSkinBones */
int32_t DisplayRender_InvokeSkinBones(void);
/* 0049C850 DisplayRender_InvokeSkinBones_49C850 */
int32_t* DisplayRender_InvokeSkinBones_49C850(int32_t* arg1);
/* 0049D0B0 DisplayRender_ExecutePipeline_49D0B0 */
int32_t DisplayRender_ExecutePipeline_49D0B0(double* arg1);
/* 0049D730 DisplayRender_DefaultHandler_49D730 */
int32_t DisplayRender_DefaultHandler_49D730(void);
/* 0049D960 DisplayRender_DefaultHandler_49D960 */
int32_t DisplayRender_DefaultHandler_49D960(void);
/* 0049DB10 DisplayRender_DefaultHandler_49DB10 */
int32_t DisplayRender_DefaultHandler_49DB10(void);
/* 0049DF60 DisplayRender_Processmodelsnotconvert */
int32_t* DisplayRender_Processmodelsnotconvert(int32_t* arg1);
/* 0049FAF0 DisplayRender_GetContext_49FAF0 */
void* DisplayRender_GetContext_49FAF0(void* arg1);
/* 0049FE60 DisplayRender_ProcessMeshformatnotsup */
int32_t DisplayRender_ProcessMeshformatnotsup(int32_t* arg1);
/* 004A14B0 DisplayRender_Processmodelsnotconvert_4A14B0 */
void* DisplayRender_Processmodelsnotconvert_4A14B0(void* arg1, double* arg2);
/* 004A36B0 DisplayRender_Invoke19 */
int32_t DisplayRender_Invoke19(void* arg1);
/* 004A4C90 DisplayRender_InvokeRestoreDevice_4A4C90 */
int32_t DisplayRender_InvokeRestoreDevice_4A4C90(void* arg1);
/* 004A4CB0 DisplayRender_InvokeRestoreDevice_4A4CB0 */
int32_t DisplayRender_InvokeRestoreDevice_4A4CB0(int32_t arg1);
/* 004A56D0 MathSys_Invoke16 */
int32_t MathSys_Invoke16(void);
/* 004A5D20 MathSys_Invoke7 */
int32_t MathSys_Invoke7(int32_t arg1, int32_t arg2, int32_t* arg3 @ 0x10);
/* 004A5DAA MathSys_ProcessStep_4A5DAA */
int32_t MathSys_ProcessStep_4A5DAA(void);
/* 004A67E4 MathSys_Invoke7_4A67E4 */
int32_t __convention MathSys_Invoke7_4A67E4("regparm")(char* arg1, int16_t arg2, void* arg3 @ 0x4, void* arg4 , int32_t arg5 @ 0xc);
/* 004A722A MathSys_Invoke25 */
char* MathSys_Invoke25(char* arg1);
/* 004A7278 MathSys_Invoke25_4A7278 */
int32_t MathSys_Invoke25_4A7278(double* arg1);
/* 004A7FA0 MathSys_Invoke12 */
int32_t MathSys_Invoke12(void);
/* 004A8BD6 MathSys_DefaultHandler_4A8BD6 */
int32_t MathSys_DefaultHandler_4A8BD6(void);
/* 004A8BDB MathSys_DefaultHandler_4A8BDB */
int32_t MathSys_DefaultHandler_4A8BDB(void);
/* 004A8C78 MathSys_ProcessStep_4A8C78 */
int80_t __fastcall MathSys_ProcessStep_4A8C78(char arg1, void* arg2 @ ebp) __location("st0");
/* 004A8C93 MathSys_ProcessStep_4A8C93 */
int32_t MathSys_ProcessStep_4A8C93(void);
/* 004A8DCA MathSys_DefaultHandler_4A8DCA */
int32_t MathSys_DefaultHandler_4A8DCA(void);
/* 004A8DD5 MathSys_DefaultHandler_4A8DD5 */
int32_t MathSys_DefaultHandler_4A8DD5(void);
/* 004A8DE0 MathSys_Invoke16_4A8DE0 */
int32_t MathSys_Invoke16_4A8DE0(void);
/* 004A8DE6 MathSys_Invoke16_4A8DE6 */
int32_t MathSys_Invoke16_4A8DE6(void);
/* 004A8DEC MathSys_Invoke16_4A8DEC */
int32_t MathSys_Invoke16_4A8DEC(void);
/* 004A8DF2 MathSys_Invoke16_4A8DF2 */
int80_t MathSys_Invoke16_4A8DF2(long double arg1 , int80_t arg2 ) __location("st0");
/* 004A8E0E MathSys_Invoke16_4A8E0E */
int32_t MathSys_Invoke16_4A8E0E(void);
/* 004A8E29 MathSys_Invoke16_4A8E29 */
int32_t MathSys_Invoke16_4A8E29(void);
/* 004A8E4A MathSys_Invoke16_4A8E4A */
int80_t MathSys_Invoke16_4A8E4A(int80_t arg1 , long double arg2 ) __location("st0");
/* 004A8E5A MathSys_Invoke16_4A8E5A */
long double MathSys_Invoke16_4A8E5A(long double arg1 , int80_t arg2);
/* 004A8E6E MathSys_Invoke16_4A8E6E */
int80_t MathSys_Invoke16_4A8E6E(long double arg1 , int80_t arg2 ) __location("st0");
/* 004A8E7E MathSys_Invoke16_4A8E7E */
int80_t MathSys_Invoke16_4A8E7E(long double arg1 , int80_t arg2 @ st2) __location("st0");
/* 004A8E9E MathSys_Invoke16_4A8E9E */
int32_t MathSys_Invoke16_4A8E9E(void);
/* 004A8EBD MathSys_Invoke16_4A8EBD */
int32_t MathSys_Invoke16_4A8EBD(void);
/* 004A8EE2 MathSys_Invoke16_4A8EE2 */
int80_t MathSys_Invoke16_4A8EE2(int80_t arg1 , int80_t arg2 , long double arg3 @ st2) __location("st0");
/* 004A8EF6 MathSys_Invoke16_4A8EF6 */
long double MathSys_Invoke16_4A8EF6(long double arg1 , int80_t arg2 @ st2);
/* 004A8F0E MathSys_Invoke16_4A8F0E */
int80_t MathSys_Invoke16_4A8F0E(long double arg1 , int80_t arg2 , int80_t arg3 @ st2) __location("st0");
/* 004A8F22 MathSys_Invoke16_4A8F22 */
int80_t MathSys_Invoke16_4A8F22(long double arg1 , int80_t arg2 @ st3) __location("st0");
/* 004A8F42 MathSys_Invoke16_4A8F42 */
int32_t MathSys_Invoke16_4A8F42(void);
/* 004A8F61 MathSys_Invoke16_4A8F61 */
int32_t MathSys_Invoke16_4A8F61(void);
/* 004A8F86 MathSys_Invoke16_4A8F86 */
int32_t MathSys_Invoke16_4A8F86(int80_t arg1 , long double arg2 @ st3);
/* 004A8F9A MathSys_Invoke16_4A8F9A */
int32_t MathSys_Invoke16_4A8F9A(long double arg1 , int80_t arg2 @ st3);
/* 004A8FB2 MathSys_Invoke16_4A8FB2 */
int32_t MathSys_Invoke16_4A8FB2(long double arg1 , int80_t arg2 @ st3);
/* 004A8FC6 MathSys_Invoke16_4A8FC6 */
int80_t MathSys_Invoke16_4A8FC6(long double arg1 , int80_t arg2 @ st4) __location("st0");
/* 004A8FE6 MathSys_Invoke16_4A8FE6 */
int32_t MathSys_Invoke16_4A8FE6(void);
/* 004A9005 MathSys_Invoke16_4A9005 */
int32_t MathSys_Invoke16_4A9005(void);
/* 004A902A MathSys_Invoke16_4A902A */
int32_t MathSys_Invoke16_4A902A(int80_t arg1 , long double arg2 @ st4);
/* 004A903E MathSys_Invoke16_4A903E */
int32_t MathSys_Invoke16_4A903E(long double arg1 , int80_t arg2 @ st4);
/* 004A9056 MathSys_Invoke16_4A9056 */
int32_t MathSys_Invoke16_4A9056(long double arg1 , int80_t arg2 @ st4);
/* 004A906A MathSys_Invoke16_4A906A */
int80_t MathSys_Invoke16_4A906A(long double arg1 , int80_t arg2 @ st5) __location("st0");
/* 004A908A MathSys_Invoke16_4A908A */
int32_t MathSys_Invoke16_4A908A(void);
/* 004A90A9 MathSys_Invoke16_4A90A9 */
int32_t MathSys_Invoke16_4A90A9(void);
/* 004A90CE MathSys_Invoke16_4A90CE */
int32_t MathSys_Invoke16_4A90CE(int80_t arg1 , long double arg2 @ st5);
/* 004A90E2 MathSys_Invoke16_4A90E2 */
int32_t MathSys_Invoke16_4A90E2(long double arg1 , int80_t arg2 @ st5);
/* 004A90FA MathSys_Invoke16_4A90FA */
int32_t MathSys_Invoke16_4A90FA(long double arg1 , int80_t arg2 @ st5);
/* 004A910E MathSys_Invoke16_4A910E */
int80_t MathSys_Invoke16_4A910E(long double arg1 , int80_t arg2 @ st6) __location("st0");
/* 004A912E MathSys_Invoke16_4A912E */
int32_t MathSys_Invoke16_4A912E(void);
/* 004A914D MathSys_Invoke16_4A914D */
int32_t MathSys_Invoke16_4A914D(void);
/* 004A9172 MathSys_Invoke16_4A9172 */
int32_t MathSys_Invoke16_4A9172(int80_t arg1 , long double arg2 @ st6);
/* 004A9186 MathSys_Invoke16_4A9186 */
int32_t MathSys_Invoke16_4A9186(long double arg1 , int80_t arg2 @ st6);
/* 004A919E MathSys_Invoke16_4A919E */
int32_t MathSys_Invoke16_4A919E(long double arg1 , int80_t arg2 @ st6);
/* 004A91B2 MathSys_Invoke16_4A91B2 */
int80_t MathSys_Invoke16_4A91B2(long double arg1 , int80_t arg2 @ st7) __location("st0");
/* 004A91D2 MathSys_Invoke16_4A91D2 */
int32_t MathSys_Invoke16_4A91D2(void);
/* 004A91F1 MathSys_Invoke16_4A91F1 */
int32_t MathSys_Invoke16_4A91F1(void);
/* 004A9216 MathSys_Invoke16_4A9216 */
int32_t MathSys_Invoke16_4A9216(int80_t arg1 , long double arg2 @ st7);
/* 004A922A MathSys_Invoke16_4A922A */
int32_t MathSys_Invoke16_4A922A(long double arg1 , int80_t arg2 @ st7);
/* 004A9242 MathSys_Invoke16_4A9242 */
int32_t MathSys_Invoke16_4A9242(long double arg1 , int80_t arg2 @ st7);
/* 004A927C MathSys_Invoke16_4A927C */
long double __stdcall MathSys_Invoke16_4A927C(long double arg1 , float arg2);
/* 004A92C8 MathSys_Invoke16_4A92C8 */
long double __stdcall MathSys_Invoke16_4A92C8(long double arg1 , double arg2, int32_t arg3);
/* 004A9314 MathSys_Invoke16_4A9314 */
int80_t __stdcall MathSys_Invoke16_4A9314(long double arg1 , int16_t arg2) __location("st0");
/* 004A9348 MathSys_Invoke16_4A9348 */
int80_t __stdcall MathSys_Invoke16_4A9348(long double arg1 , int32_t arg2) __location("st0");
/* 004A937C MathSys_Invoke16_4A937C */
long double __stdcall MathSys_Invoke16_4A937C(long double arg1 , float arg2);
/* 004A93C8 MathSys_Invoke16_4A93C8 */
long double __stdcall MathSys_Invoke16_4A93C8(long double arg1 , double arg2, int32_t arg3);
/* 004A9414 MathSys_Invoke16_4A9414 */
int80_t __stdcall MathSys_Invoke16_4A9414(long double arg1 , int16_t arg2) __location("st0");
/* 004A9448 MathSys_Invoke16_4A9448 */
int80_t __stdcall MathSys_Invoke16_4A9448(long double arg1 , int32_t arg2) __location("st0");
/* 004A947C MathSys_Invoke16_4A947C */
int80_t MathSys_Invoke16_4A947C(long double arg1 , long double arg2 ) __location("st0");
/* 004A9A19 MathSys_Invoke16_4A9A19 */
int80_t MathSys_Invoke16_4A9A19() __location("st0");
/* 004A9A1F MathSys_Invoke17 */
int80_t MathSys_Invoke17() __location("st0");
/* 004A9A25 MathSys_DefaultHandler_4A9A25 */
long double MathSys_DefaultHandler_4A9A25(long double arg1 , long double arg2);
/* 004A9A28 MathSys_DefaultHandler_4A9A28 */
int32_t MathSys_DefaultHandler_4A9A28(long double arg1);
/* 004A9A30 MathSys_Invoke17_4A9A30 */
int32_t __fastcall MathSys_Invoke17_4A9A30(int16_t arg1, void* arg2 @ ebp, long double arg3 , long double arg4);
/* 004A9A4E MathSys_Invoke17_4A9A4E */
int80_t MathSys_Invoke17_4A9A4E(void* arg1 @ ebp, long double arg2 , long double arg3 @ st2) __location("st0");
/* 004A9A9E MathSys_Thunk_4A9A9E */
long double MathSys_Thunk_4A9A9E(void);
/* 004A9AA8 MathSys_DefaultHandler_4A9AA8 */
int80_t MathSys_DefaultHandler_4A9AA8(void* arg1 @ ebp) __location("st0");
/* 004A9AD4 MathSys_DefaultHandler_4A9AD4 */
int32_t MathSys_DefaultHandler_4A9AD4(void* arg1 @ ebp) __location("st0");
/* 004A9AE4 MathSys_Invoke17_4A9AE4 */
int32_t __fastcall MathSys_Invoke17_4A9AE4(char arg1);
/* 004A9AE9 MathSys_Invoke17_4A9AE9 */
int80_t MathSys_Invoke17_4A9AE9() __location("st0");
/* 004A9AED MathSys_Invoke17_4A9AED */
int80_t MathSys_Invoke17_4A9AED() __location("st0");
/* 004A9AEF MathSys_Invoke17_4A9AEF */
int32_t __fastcall MathSys_Invoke17_4A9AEF(char arg1, long double arg2 , long double arg3);
/* 004A9AF8 MathSys_Invoke17_4A9AF8 */
long double MathSys_Invoke17_4A9AF8(void);
/* 004A9AFD MathSys_Invoke17_4A9AFD */
long double __fastcall MathSys_Invoke17_4A9AFD(int16_t arg1, void* arg2 @ ebp);
/* 004A9B39 MathSys_DefaultHandler_4A9B39 */
int32_t MathSys_DefaultHandler_4A9B39(void);
/* 004A9B6F MathSys_DefaultHandler_4A9B6F */
int80_t MathSys_DefaultHandler_4A9B6F(void* arg1 @ ebp) __location("st0");
/* 004A9C05 MathSys_Invoke18 */
long double MathSys_Invoke18(int16_t arg1 @ x87control, int16_t arg2 @ x87status, int16_t arg3 @ x87tag, long double arg4 , long double arg5);
/* 004AA0A6 MathSys_Invoke19 */
void* __convention MathSys_Invoke19("regparm")(int32_t arg1, char* arg2 @ 0x4);
/* 004AAA44 MathSys_Invoke21 */
int32_t __convention MathSys_Invoke21("regparm")(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, void* arg5 @ esi, void* arg6 @ edi, int32_t arg7);
/* 004AD004 MathSys_Invoke3 */
int32_t __convention MathSys_Invoke3("regparm")(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, void* arg5 @ esi, void* arg6 @ edi, int32_t arg7);
/* 004AD8BA MathSys_Invoke4 */
int32_t MathSys_Invoke4(void);
/* 004B7100 Qvm_Invoke18 */
int32_t Qvm_Invoke18(void* arg1);
/* 004BC950 Qvm_ProcessInstructionnotim */
int32_t Qvm_ProcessInstructionnotim(void);
/* 004BD730 Qvm_Invoke28 */
int32_t __fastcall Qvm_Invoke28(float arg1 @ ecx);
/* 004BDC40 Qvm_Invoke5 */
int32_t __stdcall Qvm_Invoke5(int32_t* arg1 @ 0x1028);
/* 004BE6A0 Qvm_Invoke29 */
void* __fastcall Qvm_Invoke29(float arg1 @ ecx);
/* 004BE980 Qvm_GetContext_4BE980 */
int32_t* Qvm_GetContext_4BE980(int32_t* arg1);
/* 004BEC08 Qvm_GetContext_4BEC08 */
int32_t Qvm_GetContext_4BEC08(void* arg1, int32_t arg2);
/* 004BEC70 Qvm_GetContext_4BEC70 */
void* Qvm_GetContext_4BEC70(void* arg1);
/* 004BEC80 Qvm_GetContext_4BEC80 */
void* Qvm_GetContext_4BEC80(void* arg1);
/* 004BEC90 Qvm_GetContext_4BEC90 */
void* Qvm_GetContext_4BEC90(void* arg1);
/* 004BECB0 Qvm_ProcessPUSH */
int32_t Qvm_ProcessPUSH(int32_t arg1, int32_t arg2 @ 0xc);
/* 004BEFE0 Qvm_ExecutePipeline_4BEFE0 */
int32_t Qvm_ExecutePipeline_4BEFE0(int32_t* arg1);
/* 004C0F50 Qvm_Invoke4 */
int32_t Qvm_Invoke4(int32_t* arg1, void* arg2, char arg3);
/* 004C1210 Qvm_GetContext_4C1210 */
int32_t Qvm_GetContext_4C1210(int32_t* arg1, int32_t* arg2);
/* 004C12E0 Qvm_DefaultHandler_4C12E0 */
int32_t Qvm_DefaultHandler_4C12E0(int32_t* arg1, int32_t* arg2);
/* 004C1340 Qvm_InvokeDataSymbolLoad */
int32_t Qvm_InvokeDataSymbolLoad(int32_t* arg1, int32_t* arg2);
/* 004C13A0 Qvm_GetContext_4C13A0 */
int32_t Qvm_GetContext_4C13A0(int32_t* arg1, int32_t* arg2);
/* 004C1400 Qvm_ProcessOpcodenotimpleme */
int32_t Qvm_ProcessOpcodenotimpleme(int32_t* arg1, int32_t* arg2, int32_t arg3);
/* 004C3110 Qvm_ProcessRigidObject */
int32_t Qvm_ProcessRigidObject(float arg1, void* arg2);
/* 004C35D0 Qvm_GetParam_4C35D0 */
bool* Qvm_GetParam_4C35D0(int32_t arg1, bool* arg2);
/* 004D4780 PhysicsRigid_Invoke8 */
float PhysicsRigid_Invoke8(int32_t arg1, float arg2, void* arg3) __location("eax");
/* 004D5080 PhysicsRigid_Invoke8_4D5080 */
int32_t PhysicsRigid_Invoke8_4D5080(void* arg1);
/* 004D5180 PhysicsRigid_ExecutePipeline_4D5180 */
int32_t PhysicsRigid_ExecutePipeline_4D5180(int32_t* arg1, int32_t* arg2, int32_t* arg3);
/* 004D57C0 PhysicsRigid_ProcessStep_4D57C0 */
int32_t PhysicsRigid_ProcessStep_4D57C0(int32_t arg1);
/* 004D5820 PhysicsRigid_Invoke7 */
int32_t PhysicsRigid_Invoke7(float arg1, float arg2, float arg3);
/* 004D63A0 PhysicsRigid_GetContext_4D63A0 */
long double PhysicsRigid_GetContext_4D63A0(void* arg1);
/* 004D63B0 PhysicsRigid_Invoke10 */
int32_t PhysicsRigid_Invoke10(float* arg1);
/* 004D63F0 PhysicsRigid_Invoke10_4D63F0 */
int32_t PhysicsRigid_Invoke10_4D63F0(int32_t arg1);
/* 004D9480 PhysicsRigid_ProcessBoneObject */
int32_t* PhysicsRigid_ProcessBoneObject(void* arg1, void* arg2);
/* 004D9B10 PhysicsRigid_ProcessVirModelsnotavai */
int32_t* PhysicsRigid_ProcessVirModelsnotavai(void* arg1, float arg2);
/* 004DA240 PhysicsRigid_GetContext_4DA240 */
void* PhysicsRigid_GetContext_4DA240(void* arg1);
/* 004DA270 PhysicsRigid_ProcessStep_4DA270 */
int32_t PhysicsRigid_ProcessStep_4DA270(void* arg1);
/* 004DA2A0 PhysicsRigid_DefaultHandler_4DA2A0 */
void* PhysicsRigid_DefaultHandler_4DA2A0(void* arg1);
/* 004DA2C0 PhysicsRigid_Invoke2 */
void* PhysicsRigid_Invoke2(void* arg1);
/* 004DBF00 PhysicsRigid_InvokeGetTypeId */
void* PhysicsRigid_InvokeGetTypeId(void* arg1, int32_t* arg2);
/* 004DCC20 PhysicsRigid_Invoke2_4DCC20 */
int32_t PhysicsRigid_Invoke2_4DCC20(int32_t* arg1, int32_t* arg2);
/* 004DDF60 PhysicsRigid_Invoke6 */
int32_t PhysicsRigid_Invoke6(void* arg1);
/* 004DE240 PhysicsRigid_UpdateState_4DE240 */
int32_t* PhysicsRigid_UpdateState_4DE240(void* arg1, int32_t arg2);
/* 004DE2D0 PhysicsRigid_UpdateState_4DE2D0 */
int32_t* PhysicsRigid_UpdateState_4DE2D0(void* arg1, int32_t arg2);
/* 004DE360 PhysicsRigid_UpdateState_4DE360 */
int32_t* PhysicsRigid_UpdateState_4DE360(void* arg1, int32_t arg2);
/* 004DE3F0 PhysicsRigid_ExecutePipeline_4DE3F0 */
int32_t* PhysicsRigid_ExecutePipeline_4DE3F0(void* arg1, void* arg2);
/* 004DE770 PhysicsRigid_Invoke12 */
void* PhysicsRigid_Invoke12(void* arg1, int32_t arg2);
/* 004E0890 Sound_ProcessShadow */
void* Sound_ProcessShadow(void* arg1, int32_t arg2);
/* 004E09C0 Sound_InvokeFindType */
int32_t Sound_InvokeFindType(void* arg1);
/* 004E4280 Sound_Invoke13 */
char* Sound_Invoke13(char* arg1);
/* 004E62B0 Sound_Invoke4 */
int32_t Sound_Invoke4(void);
/* 004E67B0 Sound_InvokeSoundFileSNotValidFo */
int32_t Sound_InvokeSoundFileSNotValidFo(int32_t* arg1);
/* 004E7400 Sound_InvokeSetMode */
int32_t Sound_InvokeSetMode(void* arg1);
/* 004E7900 Sound_Invoke20 */
int32_t* Sound_Invoke20(void);
/* 004E7950 Sound_Invoke13_4E7950 */
int32_t Sound_Invoke13_4E7950(void);
/* 004E7960 Sound_ProcessLOCALdebugfnt */
int32_t Sound_ProcessLOCALdebugfnt(void);
/* 004E7A60 Sound_Invoke20_4E7A60 */
int32_t* Sound_Invoke20_4E7A60(void);
/* 004E85E0 Sound_Invoke13_4E85E0 */
int32_t Sound_Invoke13_4E85E0(void* arg1, int32_t* arg2);
/* 004E8AA0 Sound_Invoke15 */
int32_t Sound_Invoke15(void* arg1, int32_t* arg2);
/* 004E8B00 Sound_ProcessStep_4E8B00 */
char* Sound_ProcessStep_4E8B00(void* arg1, char** arg2);
/* 004E8B20 Sound_Invoke15_4E8B20 */
float Sound_Invoke15_4E8B20(void* arg1, float* arg2) __location("eax");
/* 004E8B60 Sound_GetContext_4E8B60 */
int32_t* Sound_GetContext_4E8B60(void* arg1, int32_t* arg2);
/* 004E94D0 Sound_Invoke2 */
int32_t Sound_Invoke2(void);
/* 004E9B60 Sound_Invoke8 */
void* Sound_Invoke8(void* arg1);
/* 004E9D30 Sound_Invoke15_4E9D30 */
int32_t Sound_Invoke15_4E9D30(void* arg1, int32_t* arg2);
/* 004E9D90 Sound_Invoke15_4E9D90 */
char* Sound_Invoke15_4E9D90(void* arg1, char** arg2);
/* 004E9DB0 Sound_GetContext_4E9DB0 */
int32_t* Sound_GetContext_4E9DB0(void* arg1, int32_t* arg2);
/* 004E9E70 Sound_Invoke2_4E9E70 */
void* Sound_Invoke2_4E9E70(void* arg1);
/* 004EA880 Sound_InvokeFindType_4EA880 */
int32_t Sound_InvokeFindType_4EA880(int32_t* arg1);
/* 004EA8A0 Sound_Invoke8_4EA8A0 */
void* Sound_Invoke8_4EA8A0(void* arg1);
/* 004EA8C0 Sound_GetContext_4EA8C0 */
void* Sound_GetContext_4EA8C0(void* arg1);
/* 004EAB30 Sound_Invoke15_4EAB30 */
int32_t Sound_Invoke15_4EAB30(void* arg1, int32_t* arg2);
/* 004EAB90 Sound_ProcessStep_4EAB90 */
char* Sound_ProcessStep_4EAB90(void* arg1, char** arg2);
/* 004EABB0 Sound_GetParam_4EABB0 */
int32_t Sound_GetParam_4EABB0(int32_t arg1, int32_t arg2);
/* 004EABD0 Sound_Invoke15_4EABD0 */
float Sound_Invoke15_4EABD0(void* arg1, float* arg2) __location("eax");
/* 004EAC10 Sound_GetContext_4EAC10 */
int32_t* Sound_GetContext_4EAC10(void* arg1, int32_t* arg2);
/* 004EAC20 Sound_Invoke15_4EAC20 */
void* Sound_Invoke15_4EAC20(void* arg1, char* arg2);
/* 004EB360 Sound_ProcessStep_4EB360 */
void Sound_ProcessStep_4EB360(void* arg1, int32_t* arg2);
/* 004EB460 Sound_GetContext_4EB460 */
void* Sound_GetContext_4EB460(void* arg1);
/* 004EB740 Sound_ProcessStep_4EB740 */
char* Sound_ProcessStep_4EB740(void* arg1, char** arg2);
/* 004EB760 Sound_GetParam_4EB760 */
int32_t Sound_GetParam_4EB760(int32_t arg1, int32_t arg2);
/* 004EB780 Sound_Invoke5 */
void* Sound_Invoke5(void* arg1, int32_t arg2);
/* 004EB810 Sound_Invoke6 */
void* Sound_Invoke6(void* arg1, int32_t arg2);
/* 004EB8A0 Sound_Invoke6_4EB8A0 */
void* Sound_Invoke6_4EB8A0(void* arg1, int32_t arg2);
/* 004EB930 Sound_Invoke6_4EB930 */
void* Sound_Invoke6_4EB930(void* arg1, int32_t arg2);
/* 004EDA70 PhysicsTerrain_GetContext_4EDA70 */
void* PhysicsTerrain_GetContext_4EDA70(void* arg1);
/* 004EE530 PhysicsTerrain_GetContext_4EE530 */
void* PhysicsTerrain_GetContext_4EE530(void* arg1);
/* 004EE540 PhysicsTerrain_ProcessLOCALgrab */
int32_t PhysicsTerrain_ProcessLOCALgrab(void);
/* 004EE5E0 PhysicsTerrain_ProcessLOCALgrab_4EE5E0 */
int32_t PhysicsTerrain_ProcessLOCALgrab_4EE5E0(void* arg1);
/* 004EE680 PhysicsTerrain_Invoke4 */
int32_t* PhysicsTerrain_Invoke4(int32_t* arg1);
/* 004EF7F0 PhysicsTerrain_Invoke5 */
int32_t* PhysicsTerrain_Invoke5(int32_t arg1, int32_t* arg2);
/* 004EF830 PhysicsTerrain_InvokeLoadParameters */
int32_t* PhysicsTerrain_InvokeLoadParameters(int32_t arg1, int32_t* arg2);
/* 004EF850 PhysicsTerrain_InvokeTooFewParametersInLi */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi(int32_t* arg1);
/* 004EF8B0 PhysicsTerrain_GetContext_4EF8B0 */
int32_t* PhysicsTerrain_GetContext_4EF8B0(int32_t* arg1);
/* 004EF990 PhysicsTerrain_GetContext_4EF990 */
int32_t* PhysicsTerrain_GetContext_4EF990(int32_t arg1, int32_t* arg2);
/* 004EF9B0 PhysicsTerrain_GetContext_4EF9B0 */
int32_t* PhysicsTerrain_GetContext_4EF9B0(int32_t arg1, int32_t* arg2);
/* 004EF9D0 PhysicsTerrain_InvokeTooFewParametersInLi_4EF9D0 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4EF9D0(int32_t* arg1);
/* 004EFA10 PhysicsTerrain_GetContext_4EFA10 */
int32_t* PhysicsTerrain_GetContext_4EFA10(int32_t* arg1);
/* 004EFA20 PhysicsTerrain_InvokeDataSymbolLoad */
int32_t PhysicsTerrain_InvokeDataSymbolLoad(float* arg1, void* arg2);
/* 004EFA90 PhysicsTerrain_GetContext_4EFA90 */
int32_t PhysicsTerrain_GetContext_4EFA90(int32_t* arg1, int32_t* arg2);
/* 004EFAA0 PhysicsTerrain_InvokeTooFewParametersInLi_4EFAA0 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4EFAA0(int32_t* arg1, int32_t* arg2);
/* 004EFAB0 PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0 */
int32_t PhysicsTerrain_InvokeTooFewParametersInLi_4EFAB0(long double arg1 , long double arg2 , long double arg3 @ st2, float* arg4, int32_t* arg5);
/* 004EFB00 PhysicsTerrain_GetContext_4EFB00 */
int32_t* PhysicsTerrain_GetContext_4EFB00(int32_t* arg1);
/* 004EFB10 PhysicsTerrain_InvokeDataSymbolLoad_4EFB10 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4EFB10(float* arg1, void* arg2);
/* 004EFB60 PhysicsTerrain_GetContext_4EFB60 */
int32_t PhysicsTerrain_GetContext_4EFB60(int32_t* arg1, int32_t* arg2);
/* 004EFB80 PhysicsTerrain_GetContext_4EFB80 */
int32_t PhysicsTerrain_GetContext_4EFB80(int32_t* arg1, int32_t* arg2);
/* 004EFC10 PhysicsTerrain_Processfffffffff */
int32_t PhysicsTerrain_Processfffffffff(float* arg1, void* arg2);
/* 004EFC90 PhysicsTerrain_GetContext_4EFC90 */
int32_t* PhysicsTerrain_GetContext_4EFC90(int32_t arg1, int32_t* arg2);
/* 004EFCB0 PhysicsTerrain_GetContext_4EFCB0 */
int32_t* PhysicsTerrain_GetContext_4EFCB0(int32_t arg1, int32_t* arg2);
/* 004EFCD0 PhysicsTerrain_InvokeTooFewParametersInLi_4EFCD0 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4EFCD0(int32_t* arg1);
/* 004EFD50 PhysicsTerrain_ExecutePipeline_4EFD50 */
int32_t PhysicsTerrain_ExecutePipeline_4EFD50(float arg1, float arg2);
/* 004EFEE0 PhysicsTerrain_GetContext_4EFEE0 */
int32_t* PhysicsTerrain_GetContext_4EFEE0(int32_t arg1, int32_t* arg2);
/* 004EFF00 PhysicsTerrain_GetContext_4EFF00 */
int32_t* PhysicsTerrain_GetContext_4EFF00(int32_t arg1, int32_t* arg2);
/* 004EFF20 PhysicsTerrain_InvokeTooFewParametersInLi_4EFF20 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4EFF20(int32_t* arg1);
/* 004EFF60 PhysicsTerrain_InvokeDataSymbolLoad_4EFF60 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4EFF60(int32_t* arg1, void* arg2);
/* 004EFF90 PhysicsTerrain_GetContext_4EFF90 */
int32_t PhysicsTerrain_GetContext_4EFF90(int32_t* arg1, int32_t* arg2);
/* 004EFFB0 PhysicsTerrain_GetContext_4EFFB0 */
int32_t* PhysicsTerrain_GetContext_4EFFB0(int32_t* arg1, int32_t* arg2);
/* 004EFFD0 PhysicsTerrain_InvokeTooFewParametersInLi_4EFFD0 */
int32_t PhysicsTerrain_InvokeTooFewParametersInLi_4EFFD0(long double arg1 , long double arg2 , long double arg3 @ st2, double* arg4, int32_t* arg5);
/* 004F0020 PhysicsTerrain_InvokeDataSymbolLoad_4F0020 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0020(int32_t* arg1, void* arg2);
/* 004F0060 PhysicsTerrain_GetContext_4F0060 */
int32_t* PhysicsTerrain_GetContext_4F0060(int32_t arg1, int32_t* arg2);
/* 004F0080 PhysicsTerrain_GetContext_4F0080 */
int32_t* PhysicsTerrain_GetContext_4F0080(int32_t arg1, int32_t* arg2);
/* 004F00A0 PhysicsTerrain_InvokeTooFewParametersInLi_4F00A0 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4F00A0(int32_t* arg1);
/* 004F00E0 PhysicsTerrain_InvokeDataSymbolLoad_4F00E0 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F00E0(int32_t* arg1, void* arg2);
/* 004F0140 PhysicsTerrain_InvokeDataSymbolLoad_4F0140 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0140(int16_t* arg1, void* arg2);
/* 004F0170 PhysicsTerrain_GetContext_4F0170 */
int32_t* PhysicsTerrain_GetContext_4F0170(int16_t* arg1, int32_t* arg2);
/* 004F0190 PhysicsTerrain_GetContext_4F0190 */
int16_t* PhysicsTerrain_GetContext_4F0190(int16_t* arg1, int32_t* arg2);
/* 004F01B0 PhysicsTerrain_GetContext_4F01B0 */
int32_t* PhysicsTerrain_GetContext_4F01B0(int32_t* arg1);
/* 004F0270 PhysicsTerrain_Invoke2 */
int32_t* PhysicsTerrain_Invoke2(int32_t* arg1, int32_t* arg2);
/* 004F02B0 PhysicsTerrain_Invoke2_4F02B0 */
int32_t PhysicsTerrain_Invoke2_4F02B0(int32_t* arg1, int32_t* arg2);
/* 004F0320 PhysicsTerrain_InvokeTooFewParametersInLi_4F0320 */
int32_t* PhysicsTerrain_InvokeTooFewParametersInLi_4F0320(int32_t* arg1, int32_t* arg2);
/* 004F03D0 PhysicsTerrain_GetContext_4F03D0 */
int32_t PhysicsTerrain_GetContext_4F03D0(int32_t arg1, int32_t* arg2);
/* 004F0430 PhysicsTerrain_InvokeDataSymbolLoad_4F0430 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0430(int32_t arg1, void* arg2);
/* 004F04A0 PhysicsTerrain_InvokeDataSymbolLoad_4F04A0 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F04A0(int32_t* arg1, void* arg2);
/* 004F0530 PhysicsTerrain_InvokeDataSymbolLoad_4F0530 */
int32_t PhysicsTerrain_InvokeDataSymbolLoad_4F0530(char* arg1, void* arg2);
/* 004F0560 PhysicsTerrain_GetContext_4F0560 */
int32_t* PhysicsTerrain_GetContext_4F0560(char* arg1, int32_t* arg2);
/* 004F0570 PhysicsTerrain_GetContext_4F0570 */
char* PhysicsTerrain_GetContext_4F0570(char* arg1, int32_t* arg2);
/* 004F0580 PhysicsTerrain_ExecutePipeline_4F0580 */
void* PhysicsTerrain_ExecutePipeline_4F0580(void* arg1);
/* 004F0600 PhysicsTerrain_GetParam_4F0600 */
int32_t PhysicsTerrain_GetParam_4F0600(int32_t arg1);
/* 004F0610 PhysicsTerrain_DefaultHandler_4F0610 */
int32_t PhysicsTerrain_DefaultHandler_4F0610(void);
/* 004F0620 PhysicsTerrain_ProcessStep_4F0620 */
int32_t PhysicsTerrain_ProcessStep_4F0620(int32_t arg1);
/* 004F0640 PhysicsTerrain_ProcessStep_4F0640 */
int32_t PhysicsTerrain_ProcessStep_4F0640(void);
/* 004F0660 PhysicsTerrain_ExecutePipeline_4F0660 */
void* PhysicsTerrain_ExecutePipeline_4F0660(void* arg1);
/* 004F06E0 PhysicsTerrain_GetParam_4F06E0 */
int32_t PhysicsTerrain_GetParam_4F06E0(int32_t arg1);
/* 004F06F0 PhysicsTerrain_DefaultHandler_4F06F0 */
int32_t PhysicsTerrain_DefaultHandler_4F06F0(void);
/* 004F0700 PhysicsTerrain_GetParam_4F0700 */
int32_t PhysicsTerrain_GetParam_4F0700(int32_t arg1);
/* 004F0710 PhysicsTerrain_DefaultHandler_4F0710 */
int32_t PhysicsTerrain_DefaultHandler_4F0710(void);
/* 004F0720 PhysicsTerrain_GetParam_4F0720 */
int32_t PhysicsTerrain_GetParam_4F0720(int32_t arg1);
/* 004F0730 PhysicsTerrain_DefaultHandler_4F0730 */
int32_t PhysicsTerrain_DefaultHandler_4F0730(void);
/* 004F1CF0 PhysicsTerrain_Invoke25 */
int32_t PhysicsTerrain_Invoke25(int32_t arg1);
/* 004F1D10 PhysicsTerrain_Invoke3 */
void PhysicsTerrain_Invoke3(int32_t arg1, int32_t* arg2, int32_t arg3);
/* 004F2B80 PhysicsTerrain_GetContext_4F2B80 */
int32_t* PhysicsTerrain_GetContext_4F2B80(int32_t* arg1);
/* 004F3630 PhysicsTerrain_GetContext_4F3630 */
void* PhysicsTerrain_GetContext_4F3630(void* arg1, int32_t* arg2);
/* 004F3670 PhysicsTerrain_GetContext_4F3670 */
void* PhysicsTerrain_GetContext_4F3670(void* arg1, int32_t* arg2);
/* 004F36B0 PhysicsTerrain_Invoke5_4F36B0 */
int32_t* PhysicsTerrain_Invoke5_4F36B0(int32_t* arg1);
/* 004F3940 PhysicsTerrain_Invoke8 */
int32_t PhysicsTerrain_Invoke8(int32_t arg1, char* arg2);
/* 004F39F0 PhysicsTerrain_GetContext_4F39F0 */
int32_t* PhysicsTerrain_GetContext_4F39F0(int32_t* arg1);
/* 004F3A00 PhysicsTerrain_DefaultHandler_4F3A00 */
void* PhysicsTerrain_DefaultHandler_4F3A00(void* arg1);
/* 004F3CA0 PhysicsTerrain_Invoke4_4F3CA0 */
int32_t* PhysicsTerrain_Invoke4_4F3CA0(void* arg1, int32_t* arg2);
/* 004F42D0 PhysicsTerrain_InvokeComputeNormals */
int32_t PhysicsTerrain_InvokeComputeNormals(float arg1, void* arg2);
/* 004F4390 PhysicsTerrain_GetParam_4F4390 */
char* PhysicsTerrain_GetParam_4F4390(int32_t arg1, char* arg2);
/* 004F43B0 PhysicsTerrain_Invoke2_4F43B0 */
int32_t PhysicsTerrain_Invoke2_4F43B0(int32_t* arg1);
/* 004F43D0 PhysicsTerrain_Invoke12 */
int32_t* PhysicsTerrain_Invoke12(int32_t* arg1);
/* 004F44A0 PhysicsTerrain_Invoke12_4F44A0 */
int32_t PhysicsTerrain_Invoke12_4F44A0(void* arg1, int32_t arg2);
/* 004F4560 PhysicsTerrain_Invoke3_4F4560 */
int32_t* PhysicsTerrain_Invoke3_4F4560(int32_t* arg1);
/* 004F51C0 WeatherLightmap_GetContext_4F51C0 */
int32_t* WeatherLightmap_GetContext_4F51C0(int32_t* arg1);
/* 004F64E0 WeatherLightmap_GetContext_4F64E0 */
int32_t* WeatherLightmap_GetContext_4F64E0(int32_t* arg1);
/* 004F64F0 WeatherLightmap_GetContext_4F64F0 */
void* WeatherLightmap_GetContext_4F64F0(void* arg1);
/* 004F6500 WeatherLightmap_Invoke18 */
int32_t* WeatherLightmap_Invoke18(void* arg1, int32_t* arg2);
/* 004F71F0 WeatherLightmap_ProcessRainDynCubeObj */
char* WeatherLightmap_ProcessRainDynCubeObj(void* arg1, void* arg2);
/* 004F7620 WeatherLightmap_GetContext_4F7620 */
int32_t* WeatherLightmap_GetContext_4F7620(int32_t* arg1);
/* 004F8190 WeatherLightmap_DefaultHandler_4F8190 */
int32_t WeatherLightmap_DefaultHandler_4F8190(void* arg1);
/* 004F8770 WeatherLightmap_GetContext_4F8770 */
int32_t* WeatherLightmap_GetContext_4F8770(int32_t* arg1);
/* 004FADB0 WeatherLightmap_ProcessMISSIONgraphsgra */
int32_t WeatherLightmap_ProcessMISSIONgraphsgra(void* arg1);
/* 004FAE40 WeatherLightmap_GetContext_4FAE40 */
int32_t* WeatherLightmap_GetContext_4FAE40(int32_t* arg1);
/* 004FAF50 WeatherLightmap_Invoke24 */
char* WeatherLightmap_Invoke24(int32_t* arg1);
/* 004FAF80 WeatherLightmap_Invoke24_4FAF80 */
char* WeatherLightmap_Invoke24_4FAF80(int32_t* arg1);
/* 004FAFA0 WeatherLightmap_Invoke24_4FAFA0 */
char* WeatherLightmap_Invoke24_4FAFA0(int32_t* arg1);
/* 004FAFC0 WeatherLightmap_Invoke24_4FAFC0 */
char* WeatherLightmap_Invoke24_4FAFC0(int32_t* arg1);
/* 004FD5E0 WeatherLightmap_GetContext_4FD5E0 */
void* WeatherLightmap_GetContext_4FD5E0(void* arg1);
/* 004FEA60 WeatherLightmap_Invoke3 */
void WeatherLightmap_Invoke3(void* arg1);
/* 004FEAA0 WeatherLightmap_Invoke3_4FEAA0 */
void* WeatherLightmap_Invoke3_4FEAA0(void* arg1);
/* 004FEAE0 WeatherLightmap_Invoke2 */
int32_t* WeatherLightmap_Invoke2(int32_t* arg1);
/* 004FEAF0 WeatherLightmap_Invoke2_4FEAF0 */
void* WeatherLightmap_Invoke2_4FEAF0(void* arg1);
/* 004FEB10 WeatherLightmap_Invoke3_4FEB10 */
int32_t* WeatherLightmap_Invoke3_4FEB10(int32_t* arg1);
/* 004FEB20 WeatherLightmap_Invoke3_4FEB20 */
void* WeatherLightmap_Invoke3_4FEB20(void* arg1);
/* 004FEB40 WeatherLightmap_Invoke4 */
int32_t* WeatherLightmap_Invoke4(int32_t* arg1);
/* 004FEB50 WeatherLightmap_Invoke4_4FEB50 */
void* WeatherLightmap_Invoke4_4FEB50(void* arg1);
/* 004FEB70 WeatherLightmap_Invoke4_4FEB70 */
int32_t* WeatherLightmap_Invoke4_4FEB70(int32_t* arg1);
/* 00500DE0 WeatherLightmap_Invoke2_500DE0 */
int32_t* WeatherLightmap_Invoke2_500DE0(int32_t* arg1);
/* 005026E0 WeatherLightmap_GetContext_5026E0 */
void* WeatherLightmap_GetContext_5026E0(void* arg1);
/* 00502E80 WeatherLightmap_Invoke2_502E80 */
int32_t* WeatherLightmap_Invoke2_502E80(int32_t* arg1);
/* 00502E90 WeatherLightmap_Invoke2_502E90 */
int32_t WeatherLightmap_Invoke2_502E90(float arg1, void* arg2);
/* 00502F90 WeatherLightmap_GetContext_502F90 */
int32_t* WeatherLightmap_GetContext_502F90(int32_t* arg1);
/* 00502FA0 WeatherLightmap_InvokeComputeNormals */
int32_t WeatherLightmap_InvokeComputeNormals(float arg1, void* arg2);
/* 00503B60 WeatherLightmap_Invoke6 */
void* WeatherLightmap_Invoke6(void* arg1);
/* 00503B90 WeatherLightmap_Invoke7 */
void* WeatherLightmap_Invoke7(void* arg1);
/* 00503BB0 WeatherLightmap_InvokeFindType */
int32_t WeatherLightmap_InvokeFindType(int32_t* arg1);
/* 00504250 WeatherLightmap_Invoke2_504250 */
int32_t WeatherLightmap_Invoke2_504250(void* arg1, char* arg2);
/* 00504890 WeatherLightmap_GetContext_504890 */
int32_t* WeatherLightmap_GetContext_504890(int32_t* arg1);
/* 005049D0 WeatherLightmap_GetContext_5049D0 */
void* WeatherLightmap_GetContext_5049D0(void* arg1);
/* 00504C40 WeatherLightmap_Invoke5 */
int32_t* WeatherLightmap_Invoke5(int32_t* arg1);
/* 005053B0 WeatherLightmap_DefaultHandler_5053B0 */
int32_t* WeatherLightmap_DefaultHandler_5053B0(void* arg1, int32_t* arg2);
/* 005053F0 WeatherLightmap_Invoke7_5053F0 */
void* WeatherLightmap_Invoke7_5053F0(void* arg1, int32_t arg2);
/* 00505480 WeatherLightmap_InvokeProcess */
void* WeatherLightmap_InvokeProcess(void* arg1, int32_t arg2);
/* 005057C0 WeatherLightmap_InvokeMenuitemMoveCalledWi */
void* WeatherLightmap_InvokeMenuitemMoveCalledWi(void* arg1, int32_t* arg2);
/* 00505840 WeatherLightmap_GetContext_505840 */
int32_t* WeatherLightmap_GetContext_505840(int32_t arg1, int32_t* arg2);
/* 00505850 WeatherLightmap_InvokeOnTick */
void* WeatherLightmap_InvokeOnTick(void* arg1, int32_t arg2);
/* 00505D50 WeatherLightmap_GetContext_505D50 */
int32_t WeatherLightmap_GetContext_505D50(void* arg1);
/* 00506240 WeatherLightmap_Invoke9 */
void* WeatherLightmap_Invoke9(void* arg1);
/* 00506290 WeatherLightmap_GetContext_506290 */
int32_t* WeatherLightmap_GetContext_506290(int32_t* arg1);
/* 00506DE0 WeatherLightmap_GetContext_506DE0 */
int32_t WeatherLightmap_GetContext_506DE0(void* arg1);
/* 00506F60 WeatherLightmap_ProcessHeightMap */
void* WeatherLightmap_ProcessHeightMap(void* arg1);
/* 00507400 WeatherLightmap_GetContext_507400 */
int32_t* WeatherLightmap_GetContext_507400(int32_t* arg1);
/* 00507D00 WeatherLightmap_Invoke4_507D00 */
void* WeatherLightmap_Invoke4_507D00(void* arg1);
/* 00508290 AnimSpline_GetContext_508290 */
void* AnimSpline_GetContext_508290(void* arg1);
/* 00508400 AnimSpline_Invoke22 */
int32_t* AnimSpline_Invoke22(int32_t* arg1);
/* 00508E00 AnimSpline_GetContext_508E00 */
void* AnimSpline_GetContext_508E00(void* arg1);
/* 005093B0 AnimSpline_Invoke7 */
void* AnimSpline_Invoke7(void* arg1);
/* 00509440 AnimSpline_GetContext_509440 */
int32_t* AnimSpline_GetContext_509440(int32_t* arg1);
/* 00509450 AnimSpline_Invoke27 */
int32_t AnimSpline_Invoke27(void* arg1, int32_t* arg2);
/* 00509570 AnimSpline_InvokeLoadParameters */
int32_t AnimSpline_InvokeLoadParameters(void* arg1, int32_t arg2);
/* 00509F50 AnimSpline_Invoke3 */
int32_t AnimSpline_Invoke3(int32_t arg1);
/* 0050A040 AnimSpline_Invoke4 */
int32_t AnimSpline_Invoke4(PSTR arg1);
/* 0050A370 AnimSpline_ProcessIllegalopenmodeX */
PSTR AnimSpline_ProcessIllegalopenmodeX(PSTR arg1 , int32_t arg2);
/* 0050A430 AnimSpline_Invoke4_50A430 */
int32_t AnimSpline_Invoke4_50A430(void* arg1);
/* 0050A4D0 AnimSpline_Invoke4_50A4D0 */
int32_t AnimSpline_Invoke4_50A4D0(void* arg1 , void* arg2, int32_t arg3);
/* 0050A570 AnimSpline_Invoke11 */
int32_t AnimSpline_Invoke11(int32_t arg1, void* arg2);
/* 0050A5A0 AnimSpline_GetContext_50A5A0 */
int32_t AnimSpline_GetContext_50A5A0(void* arg1);
/* 0050A5B0 AnimSpline_GetContext_50A5B0 */
int32_t AnimSpline_GetContext_50A5B0(void* arg1);
/* 0050A5C0 AnimSpline_ProcessStep_50A5C0 */
int32_t AnimSpline_ProcessStep_50A5C0(void);
/* 0050AB50 AnimSpline_InvokeCouldnTGetSurfaceDes */
int32_t AnimSpline_InvokeCouldnTGetSurfaceDes(void* arg1);
/* 0050BB80 AnimSpline_ProcessStep_50BB80 */
uint32_t AnimSpline_ProcessStep_50BB80(uint32_t* arg1);
/* 0050BBB0 AnimSpline_GetContext_50BBB0 */
int32_t* AnimSpline_GetContext_50BBB0(int32_t* arg1);
/* 0050BBC0 AnimSpline_GetContext_50BBC0 */
int32_t* AnimSpline_GetContext_50BBC0(int32_t* arg1);
/* 0050BBD0 AnimSpline_GetContext_50BBD0 */
int32_t* AnimSpline_GetContext_50BBD0(int32_t* arg1);
/* 0050BBE0 AnimSpline_DefaultHandler_50BBE0 */
int32_t AnimSpline_DefaultHandler_50BBE0(void);
/* 0050BE90 AnimSpline_ProcessStep_50BE90 */
char* AnimSpline_ProcessStep_50BE90(int32_t* arg1);
/* 0050BF10 AnimSpline_GetContext_50BF10 */
void* AnimSpline_GetContext_50BF10(void* arg1);
/* 0050DCC0 AnimSpline_UpdateState_50DCC0 */
int32_t AnimSpline_UpdateState_50DCC0(int32_t* arg1);
/* 0050E000 AnimSpline_UpdateState_50E000 */
int32_t AnimSpline_UpdateState_50E000(int32_t* arg1);
/* 0050E0D0 AnimSpline_Invoke13 */
int32_t** AnimSpline_Invoke13(int32_t* arg1);
/* 0050E450 AnimSpline_Invoke13_50E450 */
void AnimSpline_Invoke13_50E450(int32_t* arg1, int32_t* arg2);
/* 0050E730 AnimSpline_ProcessStep_50E730 */
int32_t** AnimSpline_ProcessStep_50E730(int32_t* arg1, int32_t* arg2);
/* 0050EDA0 AnimSpline_InvokeOffscreenbuffersprit */
int32_t AnimSpline_InvokeOffscreenbuffersprit(float arg1);
/* 005166C0 AnimSpline_Invoke2 */
int32_t AnimSpline_Invoke2(void);
/* 00518870 WeatherWaterSky_GetContext_518870 */
void* WeatherWaterSky_GetContext_518870(void* arg1, int32_t* arg2);
/* 005188B0 WeatherWaterSky_InvokeFindType */
int32_t* WeatherWaterSky_InvokeFindType(int32_t* arg1);
/* 005188C0 WeatherWaterSky_InvokeFindType_5188C0 */
int32_t WeatherWaterSky_InvokeFindType_5188C0(int32_t* arg1);
/* 005188D0 WeatherWaterSky_Invoke18 */
int32_t* WeatherWaterSky_Invoke18(int32_t* arg1);
/* 00518A00 WeatherWaterSky_Invoke5 */
void* WeatherWaterSky_Invoke5(void* arg1);
/* 00518AB0 WeatherWaterSky_ProcessStep_518AB0 */
void* WeatherWaterSky_ProcessStep_518AB0(void);
/* 00518B00 WeatherWaterSky_GetContext_518B00 */
void* WeatherWaterSky_GetContext_518B00(void* arg1);
/* 00518B40 WeatherWaterSky_Processjohan */
void* WeatherWaterSky_Processjohan(void);
/* 00518B90 WeatherWaterSky_Processjohan_518B90 */
int32_t WeatherWaterSky_Processjohan_518B90(int32_t* arg1);
/* 00518C90 WeatherWaterSky_GetContext_518C90 */
void* WeatherWaterSky_GetContext_518C90(void* arg1);
/* 005191E0 WeatherWaterSky_Invoke9 */
int32_t WeatherWaterSky_Invoke9(void* arg1);
/* 00519210 WeatherWaterSky_GetContext_519210 */
int32_t* WeatherWaterSky_GetContext_519210(int32_t* arg1);
/* 00519220 WeatherWaterSky_GetContext_519220 */
void* WeatherWaterSky_GetContext_519220(int32_t arg1, void* arg2);
/* 005199D0 WeatherWaterSky_ProcessSplinePathNode */
int32_t* WeatherWaterSky_ProcessSplinePathNode(int32_t arg1, void* arg2);
/* 00519A50 WeatherWaterSky_GetContext_519A50 */
int32_t* WeatherWaterSky_GetContext_519A50(int32_t* arg1);
/* 00519B80 WeatherWaterSky_Invoke10 */
int32_t WeatherWaterSky_Invoke10(void* arg1);
/* 0051A230 WeatherWaterSky_GetContext_51A230 */
int32_t* WeatherWaterSky_GetContext_51A230(int32_t* arg1);
/* 0051A240 WeatherWaterSky_DefaultHandler_51A240 */
int32_t WeatherWaterSky_DefaultHandler_51A240(void* arg1);
/* 0051AE50 WeatherWaterSky_GetContext_51AE50 */
int32_t* WeatherWaterSky_GetContext_51AE50(void* arg1);
/* 0051AE90 WeatherWaterSky_InvokeTryingToRemoveUnrigi */
int32_t WeatherWaterSky_InvokeTryingToRemoveUnrigi(int32_t arg1);
/* 0051B4B0 WeatherWaterSky_Invoke23 */
int32_t WeatherWaterSky_Invoke23(int32_t* arg1);
/* 0051B4E0 WeatherWaterSky_InvokeFormatString */
int32_t* WeatherWaterSky_InvokeFormatString(int32_t* arg1);
/* 0051BE00 WeatherWaterSky_GetContext_51BE00 */
int32_t* WeatherWaterSky_GetContext_51BE00(int32_t* arg1);
/* 0051C090 WeatherWaterSky_InvokeUpdateList */
void* WeatherWaterSky_InvokeUpdateList(void* arg1);
/* 0051C0A0 WeatherWaterSky_InvokeUpdateList_51C0A0 */
int32_t* WeatherWaterSky_InvokeUpdateList_51C0A0(void* arg1);
/* 0051C0C0 WeatherWaterSky_Invoke5_51C0C0 */
int32_t WeatherWaterSky_Invoke5_51C0C0(void* arg1, int32_t arg2);
/* 0051D840 WeatherWaterSky_DefaultHandler_51D840 */
int32_t WeatherWaterSky_DefaultHandler_51D840(void* arg1);
/* 0051D8B0 WeatherWaterSky_Invoke7 */
void* WeatherWaterSky_Invoke7(void* arg1);
/* 0051D8E0 WeatherWaterSky_GetContext_51D8E0 */
int32_t* WeatherWaterSky_GetContext_51D8E0(int32_t* arg1);
/* 0051D8F0 WeatherWaterSky_Invoke2 */
int32_t* WeatherWaterSky_Invoke2(int32_t arg1);
/* 0051DA90 WeatherWaterSky_UpdateState_51DA90 */
int32_t WeatherWaterSky_UpdateState_51DA90(float arg1);
/* 0051DDA0 WeatherWaterSky_Invoke4 */
int32_t* WeatherWaterSky_Invoke4(int32_t* arg1);
/* 0051EB30 WeatherWaterSky_GetContext_51EB30 */
int32_t* WeatherWaterSky_GetContext_51EB30(int32_t* arg1);
/* 0051EC60 WeatherWaterSky_Invoke4_51EC60 */
int32_t* WeatherWaterSky_Invoke4_51EC60(int32_t* arg1);
/* 0051F330 WeatherWaterSky_GetContext_51F330 */
int32_t* WeatherWaterSky_GetContext_51F330(int32_t* arg1);
/* 0051F4B0 WeatherWaterSky_ProcessMoveRigidObj */
int32_t WeatherWaterSky_ProcessMoveRigidObj(void* arg1, char* arg2);
/* 0051FA90 WeatherWaterSky_GetContext_51FA90 */
int32_t* WeatherWaterSky_GetContext_51FA90(int32_t* arg1);
/* 0051FD60 WeatherWaterSky_Invoke11 */
int32_t WeatherWaterSky_Invoke11(float arg1, char* arg2);
/* 005203F0 WeatherWaterSky_GetContext_5203F0 */
int32_t* WeatherWaterSky_GetContext_5203F0(int32_t* arg1);
/* 00520630 WeatherWaterSky_Processjohan_520630 */
int32_t WeatherWaterSky_Processjohan_520630(void* arg1, char* arg2);
/* 00520730 WeatherWaterSky_Processjohan_520730 */
int32_t WeatherWaterSky_Processjohan_520730(int32_t* arg1);
/* 00520910 WeatherWaterSky_InvokeComputeNormals */
int32_t WeatherWaterSky_InvokeComputeNormals(float arg1, void* arg2);
/* 005209E0 WeatherWaterSky_Invoke9_5209E0 */
void* WeatherWaterSky_Invoke9_5209E0(void* arg1);
/* 00520A00 WeatherWaterSky_GetContext_520A00 */
int32_t* WeatherWaterSky_GetContext_520A00(int32_t* arg1);
/* 00520A10 WeatherWaterSky_ProcessStep_520A10 */
int32_t WeatherWaterSky_ProcessStep_520A10(void* arg1);
/* 00520E40 WeatherWaterSky_GetContext_520E40 */
void* WeatherWaterSky_GetContext_520E40(void* arg1);
/* 00520E70 WeatherWaterSky_GetContext_520E70 */
int32_t* WeatherWaterSky_GetContext_520E70(int32_t* arg1);
/* 00520E80 WeatherWaterSky_Invoke8 */
void* WeatherWaterSky_Invoke8(void* arg1);
/* 00520EC0 WeatherWaterSky_GetContext_520EC0 */
void* WeatherWaterSky_GetContext_520EC0(void* arg1);
/* 00520F20 WeatherWaterSky_Invoke7_520F20 */
void* WeatherWaterSky_Invoke7_520F20(void* arg1);
/* 00520F40 WeatherWaterSky_Invoke4_520F40 */
int32_t* WeatherWaterSky_Invoke4_520F40(int32_t* arg1);
/* 00523420 WeatherWaterSky_Invoke6 */
int32_t* WeatherWaterSky_Invoke6(int32_t* arg1);
/* 00523450 WeatherWaterSky_InvokeLightmapsRes */
int32_t WeatherWaterSky_InvokeLightmapsRes(void* arg1);
/* 005236C0 WeatherWaterSky_Invoke7_5236C0 */
int32_t __convention WeatherWaterSky_Invoke7_5236C0("regparm")(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4);
/* 00525370 RenderLight_GetContext_525370 */
int32_t* RenderLight_GetContext_525370(int32_t* arg1);
/* 00525450 RenderLight_GetContext_525450 */
int32_t* RenderLight_GetContext_525450(int32_t* arg1);
/* 00527160 RenderLight_GetContext_527160 */
int32_t* RenderLight_GetContext_527160(void* arg1);
/* 00527260 RenderLight_GetContext_527260 */
int32_t* RenderLight_GetContext_527260(int32_t* arg1);
/* 005272F0 RenderLight_GetContext_5272F0 */
void* RenderLight_GetContext_5272F0(void* arg1);
/* 00527320 RenderLight_Invoke12 */
int32_t RenderLight_Invoke12(void* arg1);
/* 00527460 RenderLight_GetContext_527460 */
int32_t* RenderLight_GetContext_527460(int32_t* arg1);
/* 00527470 RenderLight_Invoke2 */
void* RenderLight_Invoke2(void* arg1);
/* 005280E0 RenderLight_Invoke9 */
int32_t* RenderLight_Invoke9(void* arg1);
/* 00528160 RenderLight_DefaultHandler_528160 */
int32_t RenderLight_DefaultHandler_528160(void);
/* 00528170 RenderLight_GetContext_528170 */
int32_t* RenderLight_GetContext_528170(int32_t* arg1);
/* 00528260 RenderLight_ProcessStep_528260 */
int32_t* RenderLight_ProcessStep_528260(void* arg1);
/* 00528760 RenderLight_DefaultHandler_528760 */
void* RenderLight_DefaultHandler_528760(void* arg1);
/* 00528CF0 RenderLight_GetContext_528CF0 */
int32_t* RenderLight_GetContext_528CF0(int32_t* arg1);
/* 00528FF0 RenderLight_GetContext_528FF0 */
void* RenderLight_GetContext_528FF0(void* arg1);
/* 00529A70 RenderLight_Invoke7 */
void* RenderLight_Invoke7(int32_t* arg1);
/* 0052A180 RenderLight_Invoke7_52A180 */
int32_t* RenderLight_Invoke7_52A180(void* arg1);
/* 0052A1C0 RenderLight_GetContext_52A1C0 */
int32_t* RenderLight_GetContext_52A1C0(int32_t* arg1);
/* 0052A1D0 RenderLight_GetContext_52A1D0 */
int32_t RenderLight_GetContext_52A1D0(int32_t arg1, int32_t* arg2);
/* 0052A1F0 RenderLight_GetContext_52A1F0 */
int32_t RenderLight_GetContext_52A1F0(int32_t arg1, int32_t* arg2);
/* 0052AFE0 RenderLight_GetContext_52AFE0 */
void* RenderLight_GetContext_52AFE0(void* arg1);
/* 0052B1C0 RenderLight_Invoke12_52B1C0 */
int32_t RenderLight_Invoke12_52B1C0(void* arg1);
/* 0052B2F0 RenderLight_Invoke4 */
int32_t* RenderLight_Invoke4(int32_t* arg1);
/* 0052B320 RenderLight_InvokeDataSymbolLoad */
int32_t* RenderLight_InvokeDataSymbolLoad(void* arg1);
/* 0052B4D0 RenderLight_ProcessStep_52B4D0 */
int32_t* RenderLight_ProcessStep_52B4D0(int32_t arg1);
/* 0052B7F0 RenderLight_GetContext_52B7F0 */
void* RenderLight_GetContext_52B7F0(void* arg1);
/* 0052BE60 RenderLight_GetContext_52BE60 */
int32_t* RenderLight_GetContext_52BE60(int32_t* arg1);
/* 0052BE70 RenderLight_GetContext_52BE70 */
void* RenderLight_GetContext_52BE70(int32_t arg1, void* arg2);
/* 0052BF00 RenderLight_ExecutePipeline_52BF00 */
int32_t RenderLight_ExecutePipeline_52BF00(void* arg1, int32_t* arg2);
/* 0052BFF0 RenderLight_Thunk_52BFF0 */
int32_t RenderLight_Thunk_52BFF0(void);
/* 0052C500 RenderLight_GetContext_52C500 */
int32_t* RenderLight_GetContext_52C500(int32_t* arg1);
/* 0052C510 RenderLight_GetContext_52C510 */
void* RenderLight_GetContext_52C510(int32_t arg1, void* arg2);
/* 0052C8E0 RenderLight_GetContext_52C8E0 */
int32_t* RenderLight_GetContext_52C8E0(int32_t* arg1);
/* 0052C8F0 RenderLight_GetContext_52C8F0 */
void* RenderLight_GetContext_52C8F0(void* arg1);
/* 0052CAD0 RenderLight_Invoke18 */
int32_t RenderLight_Invoke18(void* arg1);
/* 0052D370 RenderLight_ProcessStep_52D370 */
float* RenderLight_ProcessStep_52D370(void);
/* 00530C40 RenderLight_InvokeAction */
int32_t RenderLight_InvokeAction(void* arg1);
/* 00531200 RenderLight_Invoke13 */
int32_t RenderLight_Invoke13(void* arg1);
/* 00531220 RenderLight_Invoke13_531220 */
int32_t RenderLight_Invoke13_531220(void* arg1);
/* 005313F0 RenderLight_ProcessPointlight */
int32_t* RenderLight_ProcessPointlight(void* arg1, void* arg2);
/* 00531470 RenderLight_Thunk_531470 */
int32_t RenderLight_Thunk_531470(void);
/* 00531480 RenderLight_ProcessSpotlight */
int32_t* RenderLight_ProcessSpotlight(void* arg1, void* arg2);
/* 00531CA0 RenderLight_InvokeGetArg */
int32_t RenderLight_InvokeGetArg(void* arg1, char* arg2);
/* 005320D0 RenderLight_Invoke14 */
int32_t RenderLight_Invoke14(float* arg1, float* arg2);
/* 00532100 RenderLight_GetContext_532100 */
int32_t RenderLight_GetContext_532100(void* arg1);
/* 00532140 RenderLight_Invoke14_532140 */
int32_t* RenderLight_Invoke14_532140(void* arg1);
