#include "gi_platform.h"

#include <stdatomic.h>

/* Global variables storage */
uint32_t g_4aa908 = 0;
uint32_t g_4acec8 = 0;
uint32_t g_53337c = 0;
uint32_t g_5333b0 = 0;
uint32_t g_5333b8 = 0;
uint32_t g_5333bc = 0;
uint32_t g_5333c8 = 0;
uint32_t g_5333e0 = 0;
uint32_t g_5333e8 = 0;
uint32_t g_5333ec = 0;
uint32_t g_5333f8 = 0;
uint32_t g_533400 = 0;
uint32_t g_533468 = 0;
uint32_t g_533480 = 0;
uint32_t g_533488 = 0;
uint32_t g_533498 = 0;
uint32_t g_5334a8 = 0;
uint32_t g_5334b0 = 0;
uint32_t g_533504 = 0;
uint32_t g_533514 = 0;
uint32_t g_533520 = 0;
uint32_t g_533548 = 0;
/* Retail .rdata[0x5335a8]: IEEE-754 0.9f, the movement damping scalar. */
uint32_t g_5335a8 = 0x3f666666;
uint32_t g_5335ac = 0;
uint32_t g_5335c0 = 0;
uint32_t g_5335f8 = 0;
uint32_t g_533608 = 0;
uint32_t g_533610 = 0;
uint32_t g_533618 = 0;
uint32_t g_533658 = 0;
uint32_t g_533678 = 0;
uint32_t g_53367c = 0;
uint32_t g_533684 = 0;
uint32_t g_533688 = 0;
uint32_t g_533690 = 0;
uint32_t g_5336c0 = 0;
uint32_t g_5336cc = 0;
uint32_t g_5336d0 = 0;
uint32_t g_5336d4 = 0;
uint32_t g_533700 = 0;
uint32_t g_533708 = 0;
uint32_t g_5337e8 = 0;
uint32_t g_5337f4 = 0;
uint32_t g_533818 = 0;
uint32_t g_533834 = 0;
uint32_t g_533838 = 0;
uint32_t g_533840 = 0;
uint32_t g_53387c = 0;
uint32_t g_533880 = 0;
uint32_t g_5338b0 = 0;
uint32_t g_5338e0 = 0;
uint32_t g_533924 = 0;
uint32_t g_533930 = 0;
uint32_t g_533938 = 0;
uint32_t g_533954 = 0;
uint32_t g_533988 = 0;
uint32_t g_533990 = 0;
uint32_t g_5339c0 = 0;
uint32_t g_5339c8 = 0;
uint32_t g_5339cc = 0;
uint32_t g_5339d0 = 0;
uint32_t g_5339fc = 0;
uint32_t g_533a00 = 0;
uint32_t g_533a0c = 0;
uint32_t g_533a10 = 0;
uint32_t g_533a14 = 0;
uint32_t g_533a18 = 0;
uint32_t g_533a1c = 0;
uint32_t g_533a20 = 0;
uint32_t g_533a24 = 0;
uint32_t g_533a28 = 0;
uint32_t g_533a30 = 0;
uint32_t g_533a38 = 0;
uint32_t g_533a40 = 0;
uint32_t g_533a80 = 0;
uint32_t g_534110 = 0;
uint32_t g_534240 = 0;
uint32_t g_534244 = 0;
uint32_t g_534364 = 0;
uint32_t g_534650 = 0;
uint32_t g_534860 = 0;
uint32_t g_534864 = 0;
uint32_t g_5348e0 = 0;
uint32_t g_5348f0 = 0;
uint32_t g_5349e0 = 0;
uint32_t g_5349f0 = 0;
uint32_t g_534a00 = 0;
uint32_t g_534a10 = 0;
uint32_t g_534a70 = 0;
uint32_t g_534b38 = 0;
uint32_t g_534b3c = 0;
uint32_t g_534b88 = 0;
uint32_t g_534ba0 = 0;
uint32_t g_534ba8 = 0;
uint32_t g_534be4 = 0;
uint32_t g_534be8 = 0;
uint32_t g_534bf0 = 0;





































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































/* Default weak stubs matching exact prototypes */
__attribute__((weak)) int QTask_CreateTask(void) { return 0; }
__attribute__((weak)) int QTask_OpenEvent(int a1) { return 0; }
__attribute__((weak)) int QTask_CloseEvent(void) { return 0; }
__attribute__((weak)) int QTask_DispatchEvent(void) { return 0; }
__attribute__((weak)) void * QTask_Init(void) { return 0; }
__attribute__((weak)) int* QTask_Update(void) { return 0; }
__attribute__((weak)) void QTask_OnEvent(void) { return; }
__attribute__((weak)) int QTask_Process(void) { return 0; }
__attribute__((weak)) void QTask_Action(void) { return; }
__attribute__((weak)) void QTask_OnTick(void) { return; }
__attribute__((weak)) struct status_msg* QTask_HandleInput(void * ctx, int kind, int flags) { return 0; }
__attribute__((weak)) int* QTask_LinkEventHandler(int a1, short a2) { return 0; }
__attribute__((weak)) int* QTask_RegisterEventCallback(void * a1, short a2, int a3) { return 0; }
__attribute__((weak)) int QTask_RemoveEventCallback(short a1, int a2, int a3) { return 0; }
__attribute__((weak)) int QTask_DeleteTask(void) { return 0; }
__attribute__((weak)) int QTask_ChangeParent(short a1) { return 0; }
__attribute__((weak)) int QTask_TriggerEvent(short a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* QTask_AllocateEvent(int* a1) { return 0; }
__attribute__((weak)) int QTask_FindType(int* a1) { return 0; }
__attribute__((weak)) int* QTask_CleanupTypes(void * a1) { return 0; }
__attribute__((weak)) int QTask_UnableToAllocateEven(short a1) { return 0; }
__attribute__((weak)) int QTask_UnableToAllocateEven_2(short a1) { return 0; }
__attribute__((weak)) unsigned int QTask_CleanupEvents(short a1, char a2) { return 0; }
__attribute__((weak)) int QTask_ProcessQueue(short a1, int a2) { return 0; }
__attribute__((weak)) unsigned int QTask_InitContext(char a1) { return 0; }
__attribute__((weak)) unsigned int QTask_CreateTask_2(int a1) { return 0; }
__attribute__((weak)) int QTask_OpenEvent_2(void) { return 0; }
__attribute__((weak)) int TaskType_Register(const char * a1, int a2, short a3, int a4) { return 0; }
__attribute__((weak)) unsigned int QTask_CloseEvent_2(short a1) { return 0; }
__attribute__((weak)) int QTask_DispatchEvent_2(void) { return 0; }
__attribute__((weak)) int QTask_QtaskTypeSNotDefined(char * a1) { return 0; }
__attribute__((weak)) int* QTask_LinkEventHandler_2(void * a1) { return 0; }
__attribute__((weak)) int Qtask_UpdateList(int* a1) { return 0; }
__attribute__((weak)) int QTask_RegisterEventCallback_2(short a1) { return 0; }
__attribute__((weak)) void * QTask_RemoveEventCallback_2(int* a1, void * a2) { return 0; }
__attribute__((weak)) int* QTask_DeleteTask_2(void * a1, short a2) { return 0; }
__attribute__((weak)) void * const QTask_ChangeParent_2(void * a1, short a2) { return 0; }
__attribute__((weak)) int* QTask_TriggerEvent_2(int* a1, short a2) { return 0; }
__attribute__((weak)) void * const QTask_AllocateEvent_2(void * a1, short a2) { return 0; }
__attribute__((weak)) void * QTask_FindType_2(void * a1, short a2) { return 0; }
__attribute__((weak)) int TaskType_IsDerivedFrom(int a1, short a2) { return 0; }
__attribute__((weak)) int QTask_CleanupTypes_2(char a1, void * a2) { return 0; }
__attribute__((weak)) int QTask_CleanupEvents_2(char a1) { return 0; }
__attribute__((weak)) int QTask_ProcessQueue_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * QTask_InitContext_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int QTask_CreateTask_3(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int QTask_OpenEvent_3(int a1) { return 0; }
__attribute__((weak)) int* QTask_CloseEvent_3(int* a1, int* a2) { return 0; }
__attribute__((weak)) int QTask_DispatchEvent_3(int a1) { return 0; }
__attribute__((weak)) int QTask_LinkEventHandler_3(int a1) { return 0; }
__attribute__((weak)) unsigned int QTask_RegisterEventCallback_3(short a1, int a2) { return 0; }
__attribute__((weak)) void * Flow_Init(void) { return 0; }
__attribute__((weak)) void * Flow_LoadParameters(unsigned int a1) { return 0; }
__attribute__((weak)) int Flow_RequestEvent(int a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Flow_InitEvents(void) { return 0; }
__attribute__((weak)) int Flow_RequestEvent_2(void) { return 0; }
__attribute__((weak)) struct status_msg* Flow_CreateHandler(void * a1) { return 0; }
__attribute__((weak)) void Frames_Set(int frames) { return; }
__attribute__((weak)) int Frames_Get(void) { return 0; }
__attribute__((weak)) struct frames_ctx* Game_GetContext(void) { return 0; }
__attribute__((weak)) int Game_GetScriptContext(void) { return 0; }
__attribute__((weak)) int Flow_SetState(int a1) { return 0; }
__attribute__((weak)) unsigned int Frames_GetUpdateCounter(void) { return 0; }
__attribute__((weak)) unsigned int Frames_GetTaskCounter(void) { return 0; }
__attribute__((weak)) int Game_TimingBegin(void) { return 0; }
__attribute__((weak)) int Game_TimingEnd(void) { return 0; }
__attribute__((weak)) int Flow_RunHandler(void) { return 0; }
__attribute__((weak)) int Flow_DeleteHandler(void) { return 0; }
__attribute__((weak)) int __fastcall Config_YmbeAfp(int a1) { return 0; }
__attribute__((weak)) int Config_FillPlayerProfileListBox_2(void) { return 0; }
__attribute__((weak)) int GOStart(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_Player(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_ActiveMission(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_InRemap(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_InMouInv(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_InMouSens(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int GO_GfxDisp(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_GameLang(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_GameDiff(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_IsGermany(int a1) { return 0; }
__attribute__((weak)) int Config_ResetGraphicOptions(int a1) { return 0; }
__attribute__((weak)) int GO_ContentControlPW(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GetContentControlPassword(int a1) { return 0; }
__attribute__((weak)) int Config_VerifyContentControlPassword(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_IsContentControlPasswordEnabled(int a1) { return 0; }
__attribute__((weak)) int GO_IsBlood(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_SoundSpeech(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int GO_SoundMusic(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int GO_SoundFX(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int GO_GfxDevice(int a1, float a2) { return 0; }
__attribute__((weak)) int GO_GfxGamma(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int GO_GfxPerformance(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputSetInvertMouse(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputGetInvertMouse(int a1) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputSetMouseSensitivity(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputGetMouseSensitivity(int a1) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputSetBloodEnabled(int80_t a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_GameOptionsInputGetBloodEnabled(int a1) { return 0; }
__attribute__((weak)) void * Config_RegisterOptions(void * a1) { return 0; }
__attribute__((weak)) int Config_FillScreenResolutionListBox(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsSetResolution(int a1, float a2) { return 0; }
__attribute__((weak)) void * Config_GetActiveGraphicOptions(void) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetResolution(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_FillRenderDeviceListBox(int a1) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetDevice(int a1) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsSetDevice(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsSetGamma(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetGamma(int a1) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsSetTransparency(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetTransparency(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetSoundsEffects(int a1, float a2) { return 0; }
__attribute__((weak)) void * Config_SaveGameOptions(void) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetSoundsEffects(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetSoundsEffectsVolume(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetSoundsEffectsVolume(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetMusic(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetMusic(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetMusicVolume(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetMusicVolume(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetSpeech(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetSpeech(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetSpeechVolume(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetSpeechVolume(int a1) { return 0; }
__attribute__((weak)) int Config_SoundOptionsSetReverseStereo(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_SoundOptionsGetReverseStereo(int a1) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsSetPerformanceFlags(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetPerformanceFlags(int a1) { return 0; }
__attribute__((weak)) int Config_FillPlayerProfileListBox(int a1) { return 0; }
__attribute__((weak)) int Config_GetActivePlayerProfileIndex(int a1) { return 0; }
__attribute__((weak)) int Config_SetActivePlayerProfileIndex(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_CreateNewPlayerProfile(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_SaveGraphicOptions(void) { return 0; }
__attribute__((weak)) int Config_DeletePlayerProfile(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GetNumberOfPlayerProfiles(int a1) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetPerfLevelFromFlags(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsGetPerfFlagsFromLevel(int a1, float a2) { return 0; }
__attribute__((weak)) int Config_GraphicOptionsNumPerfLevels(int a1) { return 0; }
__attribute__((weak)) int Config_FillMissionSelectionBox(int a1) { return 0; }
__attribute__((weak)) int Config_FillMissionPictureBox(int a1) { return 0; }
__attribute__((weak)) int Config_FillMissionTextBox(int a1) { return 0; }
__attribute__((weak)) int Config_PlayerGetActiveMission(int a1, int a2) { return 0; }
__attribute__((weak)) int Config_Language(void) { return 0; }
__attribute__((weak)) int Config_Read(void * a1) { return 0; }
__attribute__((weak)) int Config_SaveSoundOptions(void) { return 0; }
__attribute__((weak)) int Config_NoD3DDriversWithHard(void) { return 0; }
__attribute__((weak)) int Config_Language_2(void) { return 0; }
__attribute__((weak)) int Config_Write(void * a1) { return 0; }
__attribute__((weak)) int Config_SaveInputOptions(int* a1) { return 0; }
__attribute__((weak)) int Config_Goplayer(int* a1, int a2) { return 0; }
__attribute__((weak)) int Config_English(int* a1, int a2) { return 0; }
__attribute__((weak)) int Config_Gosoundspeech(int* a1, int a2) { return 0; }
__attribute__((weak)) int Config_Gogfxdisp(int* a1, int a2) { return 0; }
__attribute__((weak)) int KEY_A(int* a1, int a2) { return 0; }
__attribute__((weak)) int Config_Gocontentcontrolpw(int* a1) { return 0; }
__attribute__((weak)) void Config_SavePlayerProfile(void) { return; }
__attribute__((weak)) void * Config_SetGamma(void) { return 0; }
__attribute__((weak)) int Config_SetResolution(void) { return 0; }
__attribute__((weak)) int Config_SetVolume(int a1) { return 0; }
__attribute__((weak)) void * Config_GetActivePlayerProfileRecord(void) { return 0; }
__attribute__((weak)) int KEY_ANGLE(int a1, int* a2, void ** a3) { return 0; }
__attribute__((weak)) void Config_SetDifficulty(void) { return; }
__attribute__((weak)) int Config_Moveleft(int a1, int* a2, void ** a3) { return 0; }
__attribute__((weak)) void Config_ValidatePassword(void) { return; }
__attribute__((weak)) long double Config_RegisterOptions_2(void) { return 0; }
__attribute__((weak)) long double Config_SaveGameOptions_2(void) { return 0; }
__attribute__((weak)) int Config_SaveGraphicOptions_2(void) { return 0; }
__attribute__((weak)) int Config_SaveSoundOptions_2(int a1) { return 0; }
__attribute__((weak)) void Config_SaveInputOptions_2(void) { return; }
__attribute__((weak)) void Config_English_2(void) { return; }
__attribute__((weak)) void Config_SavePlayerProfile_2(void) { return; }
__attribute__((weak)) void * Config_SetGamma_2(int a1) { return 0; }
__attribute__((weak)) int __fastcall Config_SetResolution_2(int a1) { return 0; }
__attribute__((weak)) int* HumanAIConfig_Init(void) { return 0; }
__attribute__((weak)) int HumanAIConfig_OnEvent(void * a1) { return 0; }
__attribute__((weak)) void AIConfig_RegisterConfig(void * a1) { return; }
__attribute__((weak)) unsigned int AIConfig_InitItem(void) { return 0; }
__attribute__((weak)) int AIConfig_GetDetectionRange(void) { return 0; }
__attribute__((weak)) int AIConfig_SetDifficulty(void) { return 0; }
__attribute__((weak)) void * AIConfig_UnableToCreateHumana(void * a1) { return 0; }
__attribute__((weak)) int AIConfig_NoHumanaiconfigTaskF(void * a1) { return 0; }
__attribute__((weak)) int AIConfig_LoadSettings(void) { return 0; }
__attribute__((weak)) void * Weapon_ConfigRead(int a1, void * a2) { return 0; }
__attribute__((weak)) int* WeaponConfig_Init(void) { return 0; }
__attribute__((weak)) int AIConfig_ApplyProfile(void * a1) { return 0; }
__attribute__((weak)) int* WeaponConfig_Setup(void * a1) { return 0; }
__attribute__((weak)) int AIConfig_RegisterConfig_2(int a1) { return 0; }
__attribute__((weak)) unsigned int AIConfig_InitItem_2(void) { return 0; }
__attribute__((weak)) void * HumanPlayer_Setactivematerial(void) { return 0; }
__attribute__((weak)) int SetActiveMaterial(int a1, float a2) { return 0; }
__attribute__((weak)) int DefineQ_Material(long double a1, long double a2, long double a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Define_GameMaterial(long double a1, long double a2, long double a3, long double a4, int a5, float a6) { return 0; }
__attribute__((weak)) unsigned int HumanPlayer_LoadParameters_2(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateMotion(void) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina(void) { return 0; }
__attribute__((weak)) int GameMaterial_LoadParameters(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth(int a1) { return 0; }
__attribute__((weak)) int HumanPlayer_HandleInput(short a1, int a2, int a3, int a4, int* a5) { return 0; }
__attribute__((weak)) void * HumanPlayer_ApplyPhysics(void * a1) { return 0; }
__attribute__((weak)) int FallLanding(float a1) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_PlaySound(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_TakeDamage(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckCollision(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateMotion_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround_2(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth_2(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_HandleInput_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyPhysics_2(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlaySound_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_TakeDamage_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckCollision_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil_2(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_4(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateMotion_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_HandleInput_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyPhysics_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlaySound_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_TakeDamage_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckCollision_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_5(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateMotion_4(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround_4(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina_4(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth_4(void * a1, float a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_HandleInput_4(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyPhysics_4(void * a1, float a2) { return 0; }
__attribute__((weak)) float HumanPlayer_PlayFootstep_4(void * a1, void * a2)  { return 0; }
__attribute__((weak)) int HumanPlayer_PlaySound_4(void * a1, float a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_TakeDamage_4(void * a1, float a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateAnimation_4(void * a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_CheckCollision_4(void * a1) { return 0; }
__attribute__((weak)) int* HumanPlayer_ApplyRecoil_4(int a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_LoadParameters_6(void * a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateMotion_5(void * a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_CheckGround_5(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina_5(void * a1, int a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_UpdateHealth_5(void * a1, float a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_HandleInput_5(void * a1, float a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_ApplyPhysics_5(void * a1, float a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_PlayFootstep_5(int* a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_PlaySound_5(void * a1, int a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_TakeDamage_5(void * a1, float a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateAnimation_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_CheckCollision_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Ladder_ClimbTick(void * a1, void * a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_ApplyRecoil_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* Ladder_GetOnTop(void * a1, void * a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_LoadParameters_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_UpdateMotion_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_WireSlide1(void * a1, void * a2) { return 0; }
__attribute__((weak)) void HumanPlayer_CheckGround_6(void * a1, void * a2) { return; }
__attribute__((weak)) void ** HumanPlayer_UpdateStamina_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_UpdateHealth_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_HandleInput_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_ApplyPhysics_6(void * a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_PlayFootstep_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_TakeDamage_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_CheckCollision_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayerDeath(void * a1, void * a2) { return 0; }
__attribute__((weak)) char HumanPlayer_LoadParameters_8(void * a1, float a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_UpdateMotion_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) short HumanPlayer_CheckGround_7(void * a1, float a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_UpdateStamina_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateHealth_7(void * a1) { return 0; }
__attribute__((weak)) int* HumanPlayer_HandleInput_7(void * a1, int* a2) { return 0; }
__attribute__((weak)) void ** HumanPlayer_PlayFootstep_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_GunsDry1(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_PlaySound_7(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_TakeDamage_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateAnimation_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckCollision_7(void * a1, int* a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_LoadParameters_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateMotion_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_GrenadeTick1(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_UpdateStamina_8(void * a1, int* a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth_8(int* a1, int a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_HandleInput_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_ApplyPhysics_8(void * a1, int* a2) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_PlaySound_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckCollision_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanPlayer_ApplyRecoil_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_LoadParameters_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_Init(void) { return 0; }
__attribute__((weak)) int DefineHumanPlayerGeneral(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, int a9, float a10) { return 0; }
__attribute__((weak)) int Define_HumanPlayerWeaponCycle(int a1, int* a2) { return 0; }
__attribute__((weak)) int Define_HumanPlayerWeaponCategory(int a1, float a2) { return 0; }
__attribute__((weak)) int Define_HumanPlayerAmmoLimit(int a1, int* a2) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_11(int* a1, int a2) { return 0; }
__attribute__((weak)) int HumanPlayer_Setup(void * a1) { return 0; }
__attribute__((weak)) void * Human_RunUpdate(int* a1) { return 0; }
__attribute__((weak)) int* HumanPlayer_UpdateStamina_9(void * a1) { return 0; }
__attribute__((weak)) int* HumanPlayer_UpdateHealth_9(int* a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_Earcandy(void * a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_HandleInput_9(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyPhysics_9(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep_9(void * a1) { return 0; }
__attribute__((weak)) double* Ladder_Mount(float a1) { return 0; }
__attribute__((weak)) int* HumanPlayer_PlaySound_9(float a1) { return 0; }
__attribute__((weak)) int HumanPlayer_TakeDamage_9(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_WireSlide1_2(float* a1) { return 0; }
__attribute__((weak)) float Human_DamageApply(float a1, int* a2)  { return 0; }
__attribute__((weak)) int HumanPlayer_Update(float a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_OnEvent(float a1, float* a2) { return 0; }
__attribute__((weak)) struct status_msg* HumanPlayer_Action(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_Cleanup(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_Cleanup_2(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int HumanPlayer_UpdateAnimation_9(void) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters(void) { return 0; }
__attribute__((weak)) void ** HumanPlayer_CheckCollision_9(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyRecoil_9(void * a1, int a2) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_12(void) { return 0; }
__attribute__((weak)) long double HumanPlayer_UpdateMotion_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_CheckGround_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateStamina_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateHealth_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_HandleInput_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_ApplyPhysics_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_PlayFootstep_10(void) { return 0; }
__attribute__((weak)) int HumanPlayer_PlaySound_10(void) { return 0; }
__attribute__((weak)) int Weapon_TypeOpen(void) { return 0; }
__attribute__((weak)) void HumanPlayer_TakeDamage_10(void) { return; }
__attribute__((weak)) int Weapons_CountGet(void) { return 0; }
__attribute__((weak)) int HumanPlayer_UpdateAnimation_10(void) { return 0; }
__attribute__((weak)) int* HumanPlayer_CheckCollision_10(int a1) { return 0; }
__attribute__((weak)) void * HumanPlayer_ApplyRecoil_10(char * a1) { return 0; }
__attribute__((weak)) int HumanPlayer_LoadParameters_13(int a1, int a2, int a3, void * a4) { return 0; }
__attribute__((weak)) int* HumanPlayer_UpdateMotion_11(int* a1, int a2) { return 0; }
__attribute__((weak)) void * HumanPlayer_CheckGround_11(int a1, int a2, int a3, int a4, int a5, int a6, void * a7, int a8, int a9) { return 0; }
__attribute__((weak)) void HumanPlayer_UpdateStamina_11(void) { return; }
__attribute__((weak)) void HumanPlayer_UpdateHealth_11(void) { return; }
__attribute__((weak)) void HumanPlayer_HandleInput_11(void) { return; }
__attribute__((weak)) void HumanPlayer_ApplyPhysics_11(void) { return; }
__attribute__((weak)) void * WEAPONTYPE_GUN(void) { return 0; }
__attribute__((weak)) int DefineWeaponType(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, int a9, float a10) { return 0; }
__attribute__((weak)) unsigned int WeaponType_RegisterType(void) { return 0; }
__attribute__((weak)) int WeaponType_InitType(int a1, int a2, double a3) { return 0; }
__attribute__((weak)) int WeaponType_GetConfig(int a1, int a2) { return 0; }
__attribute__((weak)) int WeaponType_CycleWeapon(int a1, double* a2) { return 0; }
__attribute__((weak)) float* WeaponType_SetCategory(float* a1, int* a2) { return 0; }
__attribute__((weak)) double* WeaponType_UpdateAnim(double* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) void ** WeaponType_RegisterType_2(void ** a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int WeaponType_InitType_2(int a1, void * a2, int a3, char * a4) { return 0; }
__attribute__((weak)) int WeaponType_GetConfig_2(void * a1) { return 0; }
__attribute__((weak)) int DEBUG_KEYSENABLEINVALID(void * a1) { return 0; }
__attribute__((weak)) int IntroScreen_Init(void) { return 0; }
__attribute__((weak)) int IntroScreen_Update(int a1, void * a2) { return 0; }
__attribute__((weak)) int MovieSubtitle_RegisterFont(int a1, int a2, float a3) { return 0; }
__attribute__((weak)) int MovieSubtitle_RegisterText(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, int a7, char * a8, float a9) { return 0; }
__attribute__((weak)) int IntroScreen_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) void * IntroScreen_Setup(void * a1) { return 0; }
__attribute__((weak)) int WeaponType_LocalScreensIntro(void) { return 0; }
__attribute__((weak)) struct status_msg* WeaponType_InvalidIntroscreenMo(void * a1, int a2, char a3) { return 0; }
__attribute__((weak)) int Game_Init(void) { return 0; }
__attribute__((weak)) int Game_DisablePlayerInput(int a1) { return 0; }
__attribute__((weak)) int Game_EnablePlayerInput(int a1) { return 0; }
__attribute__((weak)) int Game_SetMission(int a1, float a2) { return 0; }
__attribute__((weak)) int Game_UpdateVolume(int a1) { return 0; }
__attribute__((weak)) int Game_SetMusicVolume(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Game_SetSFXVolume(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Game_EnableMusic(int a1) { return 0; }
__attribute__((weak)) int Game_DisableMusic(int a1) { return 0; }
__attribute__((weak)) int Game_CutsceneDelete(int a1) { return 0; }
__attribute__((weak)) int Level_Start(void * a1) { return 0; }
__attribute__((weak)) unsigned int Level_LoadObjects_2(void) { return 0; }
__attribute__((weak)) int Level_LocalCommonTextures(void) { return 0; }
__attribute__((weak)) int Level_LocalCommonSprites(void) { return 0; }
__attribute__((weak)) int Game_Setup(int* a1) { return 0; }
__attribute__((weak)) void * Level_TimeSpentRedrawing2F(void) { return 0; }
__attribute__((weak)) int Game_DeleteHandler(void) { return 0; }
__attribute__((weak)) int Level_CheckQTaskID(void) { return 0; }
__attribute__((weak)) int Level_SetMission(void) { return 0; }
__attribute__((weak)) int Level_StartMission(void) { return 0; }
__attribute__((weak)) int Level_LoadLevel_2(void) { return 0; }
__attribute__((weak)) int Level_LoadObjects_3(void) { return 0; }
__attribute__((weak)) int Level_InitTextures_2(void) { return 0; }
__attribute__((weak)) int Level_InitSprites_2(void) { return 0; }
__attribute__((weak)) int Level_CheckQTaskID_2(void) { return 0; }
__attribute__((weak)) int Level_SetMission_2(void) { return 0; }
__attribute__((weak)) int Level_StartMission_2(void) { return 0; }
__attribute__((weak)) int Level_LoadLevel_3(void) { return 0; }
__attribute__((weak)) int Level_LoadObjects_4(void) { return 0; }
__attribute__((weak)) int Level_InitTextures_3(void) { return 0; }
__attribute__((weak)) int Level_InitSprites_3(void) { return 0; }
__attribute__((weak)) int Level_CheckQTaskID_3(void) { return 0; }
__attribute__((weak)) int Level_SetMission_3(void) { return 0; }
__attribute__((weak)) int Level_StartMission_3(void) { return 0; }
__attribute__((weak)) int Level_LoadLevel_4(void) { return 0; }
__attribute__((weak)) int Level_LoadObjects_5(void) { return 0; }
__attribute__((weak)) int Level_InitTextures_4(void) { return 0; }
__attribute__((weak)) int Level_InitSprites_4(void) { return 0; }
__attribute__((weak)) int Level_CheckQTaskID_4(void) { return 0; }
__attribute__((weak)) int Level_SetMission_4(void * a1) { return 0; }
__attribute__((weak)) int Level_StartMission_4(void) { return 0; }
__attribute__((weak)) char * Level_LoadLevel_5(char * a1) { return 0; }
__attribute__((weak)) char * Level_LoadObjects_6(char * a1) { return 0; }
__attribute__((weak)) int Level_InitTextures_5(int a1) { return 0; }
__attribute__((weak)) int Level_InitSprites_5(long double a1, long double a2, long double a3, long double a4, void * a5, int a6, float a7) { return 0; }
__attribute__((weak)) long double Level_CheckQTaskID_5(float a1, double* a2, float a3) { return 0; }
__attribute__((weak)) int Level_SetMission_5(void) { return 0; }
__attribute__((weak)) int Level_StartMission_5(void) { return 0; }
__attribute__((weak)) int Level_LoadLevel_6(void) { return 0; }
__attribute__((weak)) void * Level_LoadObjects_7(void) { return 0; }
__attribute__((weak)) int Level_InitTextures_6(char a1) { return 0; }
__attribute__((weak)) void * Human_HitDamage(void) { return 0; }
__attribute__((weak)) void * Level_InitSprites_6(void) { return 0; }
__attribute__((weak)) void * Level_CheckQTaskID_6(void * a1) { return 0; }
__attribute__((weak)) int* Level_SetMission_6(void) { return 0; }
__attribute__((weak)) int Level_LoadLevel_7(void) { return 0; }
__attribute__((weak)) int Level_LoadObjects_8(void) { return 0; }
__attribute__((weak)) int Game_Restart(void) { return 0; }
__attribute__((weak)) void Level_InitTextures_7(void) { return; }
__attribute__((weak)) int* MenuManager_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* MenuManager_LoadParameters(int a1) { return 0; }
__attribute__((weak)) int MenuManager_RequestScreen(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int Menu_UpdateLanguage(void * a1) { return 0; }
__attribute__((weak)) int Menu_FormatScreen(void * a1, int a2) { return 0; }
__attribute__((weak)) void Menu_PlayMusic(void * a1) { return; }
__attribute__((weak)) int MenuManager_PushScreen(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_PopScreen(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_LeaveMenus(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_SetLanguage(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_ForceUpdateWindow(int a1, float a2) { return 0; }
__attribute__((weak)) int MenuManager_ActivatePopupScreen(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_DeactivatePopuScreen(int a1, void * a2) { return 0; }
__attribute__((weak)) int MenuManager_SetEnabled(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int MenuManager_Setup(void * a1) { return 0; }
__attribute__((weak)) int Menu_LocalMenusystemSound(void * a1) { return 0; }
__attribute__((weak)) int MenuManager_Process(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Menu_LocalMenusystemSound_2(void * a1) { return 0; }
__attribute__((weak)) int Menu_LocalLanguageSS(void * a1, int a2) { return 0; }
__attribute__((weak)) int menu_music(void * a1) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_2(void * a1) { return 0; }
__attribute__((weak)) void * Menu_LeaveMenus_2(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_2(void * a1) { return 0; }
__attribute__((weak)) void * Menu_PlayMusic_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * Menu_HandleInput_2(void * a1) { return 0; }
__attribute__((weak)) void * Menu_RequestScreen_3(void * a1) { return 0; }
__attribute__((weak)) int MenuManager_Update(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_LeaveMenus_3(void) { return 0; }
__attribute__((weak)) int Menu_UpdateLanguage_3(void) { return 0; }
__attribute__((weak)) int* Menu_Manager(void * a1, void * a2, char a3, char a4, char a5) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_3(int* a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_3(void * a1, char * a2) { return 0; }
__attribute__((weak)) void * Menu_DrawWidget_3(void * a1, char * a2) { return 0; }
__attribute__((weak)) void * Menu_HandleInput_3(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* Menu_LocalSS(void * a1, int a2) { return 0; }
__attribute__((weak)) void Menu_RequestScreen_4(void) { return; }
__attribute__((weak)) void * Menu_LeaveMenus_4(void * a1) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_4(void * a1) { return 0; }
__attribute__((weak)) int menu_high(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_4(void * a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_4(void * a1) { return 0; }
__attribute__((weak)) void * Menu_DrawWidget_4(void * a1) { return 0; }
__attribute__((weak)) int Menu_HandleInput_4(void * a1) { return 0; }
__attribute__((weak)) void * Menu_RequestScreen_5(void * a1) { return 0; }
__attribute__((weak)) void * Menu_LeaveMenus_5(void * a1) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_5(void * a1) { return 0; }
__attribute__((weak)) void * Menu_FormatScreen_5(void * a1) { return 0; }
__attribute__((weak)) int* MenuLoader_Init(void) { return 0; }
__attribute__((weak)) int* MenuLoader_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int MenuLoader_OnEvent(void) { return 0; }
__attribute__((weak)) float* Menu_PlayMusic_5(float* a1, float a2, float a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_5(int* a1, float* a2) { return 0; }
__attribute__((weak)) int Menu_HandleInput_5(int* a1, float* a2) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_6(float* a1, float* a2) { return 0; }
__attribute__((weak)) int BackgroundFX_Init(void) { return 0; }
__attribute__((weak)) int BackgroundFX_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int BackgroundFX_OnEvent(float a1) { return 0; }
__attribute__((weak)) int BackgroundFX_Process(int* a1, float* a2) { return 0; }
__attribute__((weak)) unsigned int Menu_LeaveMenus_6(void) { return 0; }
__attribute__((weak)) struct status_msg* Menu_UpdateLanguage_6(void * a1) { return 0; }
__attribute__((weak)) int* DialogWindow_Init(void) { return 0; }
__attribute__((weak)) int DialogWindow_LoadParameters(int a1) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_6(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Menu_PlayMusic_6(void) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_6(void * a1) { return 0; }
__attribute__((weak)) int* TypeWriterBox_Init(void) { return 0; }
__attribute__((weak)) int TypeWriterBox_Setup(void * a1) { return 0; }
__attribute__((weak)) int TypeWriterBox_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) int TypeWriterBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void TypeWriterBox_Update(void * a1) { return; }
__attribute__((weak)) unsigned int Menu_RequestScreen_7(void) { return 0; }
__attribute__((weak)) int* TextBox_Init(void) { return 0; }
__attribute__((weak)) char * TextBox_Process(void * a1) { return 0; }
__attribute__((weak)) int TextBox_OnEvent(void * a1, int a2) { return 0; }
__attribute__((weak)) int TextBox_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int TextBox_Setup(int a1) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_7(int a1, int a2, int a3, char * a4, void * a5, int* a6, int a7) { return 0; }
__attribute__((weak)) int TextBox_Update(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_UpdateLanguage_7(void) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_7(int a1, int a2) { return 0; }
__attribute__((weak)) int* PictureBox_Init(void) { return 0; }
__attribute__((weak)) char * PictureBox_Process(void * a1) { return 0; }
__attribute__((weak)) int PictureBox_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int* PictureBox_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int PictureBox_Setup(int a1) { return 0; }
__attribute__((weak)) int PictureBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_PlayMusic_7(void) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_7(int a1, int a2) { return 0; }
__attribute__((weak)) int* ScrollListBox_Init(void) { return 0; }
__attribute__((weak)) int* Menu_HandleInput_7(void * a1) { return 0; }
__attribute__((weak)) int ScrollListBox_Process(void * a1) { return 0; }
__attribute__((weak)) int ScrollListBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int ScrollListBox_Setup(int a1) { return 0; }
__attribute__((weak)) void * ScrollListBox_Update(void * a1) { return 0; }
__attribute__((weak)) int* ScrollListBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int ScrollListBox_Action(void * a1) { return 0; }
__attribute__((weak)) int ScrollListBox_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_RequestScreen_8(void) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_8(int a1, int a2) { return 0; }
__attribute__((weak)) int* AsciiBox_Init(void) { return 0; }
__attribute__((weak)) int AsciiBox_Process(void * a1) { return 0; }
__attribute__((weak)) int* AsciiBox_Update(void * a1) { return 0; }
__attribute__((weak)) int Menu_UpdateLanguage_8(int* a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int AsciiBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int AsciiBox_Setup(int a1) { return 0; }
__attribute__((weak)) unsigned int Menu_FormatScreen_8(void) { return 0; }
__attribute__((weak)) int* InputBox_Init(void) { return 0; }
__attribute__((weak)) int InputBox_Setup(void * a1) { return 0; }
__attribute__((weak)) int** InputBox_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) int menu_k01(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_MenuK01D(void * a1, int a2, char a3) { return 0; }
__attribute__((weak)) int InputBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* InputBox_Update(void * a1) { return 0; }
__attribute__((weak)) int* InputBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int InputBox_Action(void * a1) { return 0; }
__attribute__((weak)) int InputBox_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_HandleInput_8(void) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_9(int a1) { return 0; }
__attribute__((weak)) int* ToggleBox_Init(void) { return 0; }
__attribute__((weak)) int ToggleBox_Process(void * a1) { return 0; }
__attribute__((weak)) int ToggleBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int ToggleBox_Setup(int a1) { return 0; }
__attribute__((weak)) int* ToggleBox_Update(void * a1) { return 0; }
__attribute__((weak)) int ToggleBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int ToggleBox_Action(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_LeaveMenus_9(void) { return 0; }
__attribute__((weak)) int* ListBox_Init(void) { return 0; }
__attribute__((weak)) int* Menu_UpdateLanguage_9(void * a1) { return 0; }
__attribute__((weak)) int ListBox_Process(void * a1) { return 0; }
__attribute__((weak)) int ListBox_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int ListBox_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int ListBox_Setup(void * a1) { return 0; }
__attribute__((weak)) int* ListBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int* ListBox_Action(void * a1) { return 0; }
__attribute__((weak)) int ListBox_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int ListBox_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_PlayMusic_9(void) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_9(int a1, int a2) { return 0; }
__attribute__((weak)) int* SlideBar_Init(void) { return 0; }
__attribute__((weak)) int* SlideBar_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int SlideBar_Process(void * a1) { return 0; }
__attribute__((weak)) int SlideBar_OnEvent(long double a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int SlideBar_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int SlideBar_Setup(int a1) { return 0; }
__attribute__((weak)) int SlideBar_Action(int80_t a1, int a2) { return 0; }
__attribute__((weak)) int* SlideBar_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int SlideBar_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_LeaveMenus_10(void) { return 0; }
__attribute__((weak)) struct status_msg* Menu_Slidevert(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_10(void * a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_10(int a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_10(int a1, int a2) { return 0; }
__attribute__((weak)) int* MenuTextConditional_Init(void) { return 0; }
__attribute__((weak)) int MenuTextConditional_Action(void * a1, int a2) { return 0; }
__attribute__((weak)) char * MenuTextConditional_Process(void * a1) { return 0; }
__attribute__((weak)) int MenuTextConditional_Update(int80_t a1, int a2, int a3) { return 0; }
__attribute__((weak)) int MenuTextConditional_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int MenuTextConditional_Setup(int a1) { return 0; }
__attribute__((weak)) void * MenuText_Update(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_DrawWidget_10(void) { return 0; }
__attribute__((weak)) void * MenuText_Init(void) { return 0; }
__attribute__((weak)) char * MenuText_Process(void * a1) { return 0; }
__attribute__((weak)) int MenuText_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int MenuText_Setup(int a1) { return 0; }
__attribute__((weak)) unsigned int TEXT_BLACK(void) { return 0; }
__attribute__((weak)) int* MenuButton_Init(void) { return 0; }
__attribute__((weak)) int MenuButton_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) int MenuButton_LoadParameters(int a1) { return 0; }
__attribute__((weak)) unsigned int Menu_RequestScreen_11(void) { return 0; }
__attribute__((weak)) struct status_msg* Menu_LeaveMenus_11(int a1) { return 0; }
__attribute__((weak)) int* MenuScreen_Init(void) { return 0; }
__attribute__((weak)) int MenuScreen_Setup(void * a1) { return 0; }
__attribute__((weak)) int MenuScreen_Process(int a1, int a2) { return 0; }
__attribute__((weak)) int Menu_UpdateLanguage_11(void * a1) { return 0; }
__attribute__((weak)) int MenuScreen_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * MenuScreen_Update(void * a1) { return 0; }
__attribute__((weak)) int MenuScreen_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int* MenuScreen_Action(void * a1) { return 0; }
__attribute__((weak)) int* MenuScreen_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_FormatScreen_11(void) { return 0; }
__attribute__((weak)) int* MenuFrame_Init(void) { return 0; }
__attribute__((weak)) int MenuFrame_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int MenuFrame_OnEvent(void * a1, int a2) { return 0; }
__attribute__((weak)) int MenuFrame_Setup(void * a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_11(void * a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_11(int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) int MenuFrame_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_HandleInput_11(void) { return 0; }
__attribute__((weak)) int* ModelViewBox_Init(void) { return 0; }
__attribute__((weak)) int ModelViewBox_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) int ModelViewBox_Setup(void * a1) { return 0; }
__attribute__((weak)) void * ModelViewBox_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int ModelViewBox_LoadParameters(int a1) { return 0; }
__attribute__((weak)) int ModelViewBox_OnEvent(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_RequestScreen_12(void) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_12(int a1) { return 0; }
__attribute__((weak)) void * ControlsMenu_Init(void) { return 0; }
__attribute__((weak)) int ControlsMenu_ConvertFloatFromOffset(int a1, int a2) { return 0; }
__attribute__((weak)) int ControlsMenu_ConvertOffsetFromFloat(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int* ControlsMenu_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) int ControlsMenu_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) int ControlsMenu_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_12(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) void * Menu_FormatScreen_12(void * a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_12(int a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_12(int a1, int a2) { return 0; }
__attribute__((weak)) int ControlsMenu_Setup(int a1) { return 0; }
__attribute__((weak)) int Menu_HandleInput_12(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_13(int a1, float a2) { return 0; }
__attribute__((weak)) int ControlsMenu_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int ControlsMenu_Action(void * a1) { return 0; }
__attribute__((weak)) int ControlsMenu_Cleanup(void) { return 0; }
__attribute__((weak)) unsigned int ControlsMenu_ConvertFloatFromOffset_2(void) { return 0; }
__attribute__((weak)) void * MenuWindow_Init(void) { return 0; }
__attribute__((weak)) void * Menu_LeaveMenus_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int MenuWindow_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int LINEUPMODE_NONE(void) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_13(void) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_13(void) { return 0; }
__attribute__((weak)) int Menu_HandleInput_13(void) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_14(void) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_14(void) { return 0; }
__attribute__((weak)) char * Menu_UpdateLanguage_14(void * a1, void * a2, int a3, char * a4, int a5, int* a6, char ** a7) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_14(void * a1, float a2, float a3, int a4) { return 0; }
__attribute__((weak)) struct status_msg* Menu_HandleInput_14(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_15(void) { return 0; }
__attribute__((weak)) void * Cursor_Init(void) { return 0; }
__attribute__((weak)) int Cursor_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_LeaveMenus_15(void) { return 0; }
__attribute__((weak)) struct status_msg* Menu_UpdateLanguage_15(int a1) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_15(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_15(void * a1, int* a2, int* a3, int* a4, int* a5) { return 0; }
__attribute__((weak)) int* ConditionalSound_Init(void) { return 0; }
__attribute__((weak)) int ConditionalSound_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* ConditionalSound_Tick(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int* ConditionalSound_Stop(void * a1) { return 0; }
__attribute__((weak)) struct status_msg* ConditionalSound_Start(void * a1) { return 0; }
__attribute__((weak)) int* Menu_DrawWidget_15(void * a1) { return 0; }
__attribute__((weak)) char * ConditionalSound_Process(void * a1) { return 0; }
__attribute__((weak)) int ConditionalSound_Update(void * a1) { return 0; }
__attribute__((weak)) int ConditionalSound_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int* ConditionalSound_Action(void * a1) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_16(void) { return 0; }
__attribute__((weak)) int* Menu_LeaveMenus_16(long double a1, double* a2) { return 0; }
__attribute__((weak)) void Menu_UpdateLanguage_16(void) { return; }
__attribute__((weak)) void Menu_FormatScreen_16(void) { return; }
__attribute__((weak)) int* Menu_PlayMusic_16(long double a1, void * a2) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_16(void * a1) { return 0; }
__attribute__((weak)) double* Menu_CaraiErrorInGraphDNo(double* a1, void * a2, int* a3, int a4, void * a5) { return 0; }
__attribute__((weak)) int* Menu_CaraiErrorInGraphDNo_2(int* a1, void * a2, int a3, void * a4) { return 0; }
__attribute__((weak)) int* CarAI_Init(void) { return 0; }
__attribute__((weak)) int* CarAI_Run(int a1) { return 0; }
__attribute__((weak)) int Menu_HandleInput_16(void * a1) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_17(void * a1, int a2) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_17(long double a1, long double a2, float a3) { return 0; }
__attribute__((weak)) int* Menu_UpdateLanguage_17(float* a1, int* a2, void * a3) { return 0; }
__attribute__((weak)) int CarAI_Combat(long double a1, float a2) { return 0; }
__attribute__((weak)) int CarAI_UpdateCar(void * a1, int a2, int a3, int a4, float a5) { return 0; }
__attribute__((weak)) int CarAI_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_FormatScreen_17(void) { return 0; }
__attribute__((weak)) void * CarDoor_Init(void) { return 0; }
__attribute__((weak)) int CarDoor_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) int CarDoor_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Menu_PlayMusic_17(void) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_17(void) { return 0; }
__attribute__((weak)) int Menu_HandleInput_17(void * a1, char a2) { return 0; }
__attribute__((weak)) void * HeliWheel_Init(void) { return 0; }
__attribute__((weak)) int HeliWheel_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) int HeliWheel_Process(float a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Menu_RequestScreen_18(void) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_18(void) { return 0; }
__attribute__((weak)) void * HeliDoor_Init(void) { return 0; }
__attribute__((weak)) int HeliDoor_Setup(float a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Menu_UpdateLanguage_18(void) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_18(void) { return 0; }
__attribute__((weak)) void * RocketPod_Init(void) { return 0; }
__attribute__((weak)) unsigned int RocketPod_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) int RocketPod_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_PlayMusic_18(void) { return 0; }
__attribute__((weak)) void * HitZone_Init(void) { return 0; }
__attribute__((weak)) unsigned int Menu_DrawWidget_18(void) { return 0; }
__attribute__((weak)) int* Missile_Init(void) { return 0; }
__attribute__((weak)) int Menu_HandleInput_18(float a1) { return 0; }
__attribute__((weak)) int Missile_Run(int* a1) { return 0; }
__attribute__((weak)) void * Menu_RequestScreen_19(void * a1) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_19(float a1) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_19(void * a1) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_19(void * a1) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_19(int a1) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_19(void * a1, double* a2) { return 0; }
__attribute__((weak)) int Menu_HandleInput_19(void * a1, double* a2) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_20(long double a1, long double a2, void * a3, double* a4) { return 0; }
__attribute__((weak)) void * Missile_Setup(void * a1) { return 0; }
__attribute__((weak)) void * Menu_UpdateLanguage_20(float a1) { return 0; }
__attribute__((weak)) int* Missile_Process(void * a1) { return 0; }
__attribute__((weak)) char * Missile_Update(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, int* a9) { return 0; }
__attribute__((weak)) int Missile_OnEvent(int* a1) { return 0; }
__attribute__((weak)) int* Missile_Action(int* a1) { return 0; }
__attribute__((weak)) unsigned int Menu_FormatScreen_20(void) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_20(void) { return 0; }
__attribute__((weak)) struct status_msg* Menu_VirmodelSNotAvailabl(void * a1, void * a2, void * a3, double* a4, void * a5, float a6, double* a7, void * a8, char * a9, int a10) { return 0; }
__attribute__((weak)) struct status_msg* Menu_DrawWidget_20(void * a1) { return 0; }
__attribute__((weak)) int Menu_HandleInput_20(float a1) { return 0; }
__attribute__((weak)) void * Menu_RequestScreen_21(void * a1) { return 0; }
__attribute__((weak)) int Train_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Train_Setup(void * a1, char * a2) { return 0; }
__attribute__((weak)) char * Menu_LeaveMenus_21(void * a1, int a2) { return 0; }
__attribute__((weak)) int* Menu_UpdateLanguage_21(void * a1, double* a2, int a3) { return 0; }
__attribute__((weak)) int* Train_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int* Train_Init(void) { return 0; }
__attribute__((weak)) float Train_ReceiveChannels(void * a1, int* a2)  { return 0; }
__attribute__((weak)) int Train_Process(float a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Train_Update(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) void * Train_Action(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int Menu_FormatScreen_21(void) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_21(void) { return 0; }
__attribute__((weak)) int* Afterburner_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) int** Afterburner_Update(void * a1) { return 0; }
__attribute__((weak)) void * Afterburner_Init(void) { return 0; }
__attribute__((weak)) int Afterburner_Setup(float a1) { return 0; }
__attribute__((weak)) int Afterburner_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Menu_DrawWidget_21(void) { return 0; }
__attribute__((weak)) int* Rotor_Setup(int* a1, int* a2) { return 0; }
__attribute__((weak)) void * Rotor_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Rotor_OnEvent(void * a1) { return 0; }
__attribute__((weak)) void * Rotor_Init(void) { return 0; }
__attribute__((weak)) void * Rotor_Tick(float a1) { return 0; }
__attribute__((weak)) void * Rotor_Update(void * a1, float a2) { return 0; }
__attribute__((weak)) void * PhysicsObj_Setup(int* a1) { return 0; }
__attribute__((weak)) int Menu_HandleInput_21(void) { return 0; }
__attribute__((weak)) int Menu_RequestScreen_22(void) { return 0; }
__attribute__((weak)) char * Menu_LeaveMenus_22(int a1, int* a2) { return 0; }
__attribute__((weak)) void * Car_Init(void) { return 0; }
__attribute__((weak)) int* Car_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int* Menu_UpdateLanguage_22(float a1) { return 0; }
__attribute__((weak)) unsigned int Car_Run(double* a1) { return 0; }
__attribute__((weak)) int* Car_ExplosionTick(double* a1) { return 0; }
__attribute__((weak)) int* Menu_FormatScreen_22(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int* Menu_PlayMusic_22(int80_t a1, int a2) { return 0; }
__attribute__((weak)) int* Car_Process(void * a1) { return 0; }
__attribute__((weak)) int* Car_ReceiveChannels(void * a1, float a2) { return 0; }
__attribute__((weak)) void * Menu_DrawWidget_22(void * a1) { return 0; }
__attribute__((weak)) void * Car_Tick(int a1) { return 0; }
__attribute__((weak)) int Car_WheelSweep(float* a1) { return 0; }
__attribute__((weak)) int Car_Update(void * a1) { return 0; }
__attribute__((weak)) void * Menu_HandleInput_22(void * a1) { return 0; }
__attribute__((weak)) int* Car_WeaponCollision(void * a1, float a2) { return 0; }
__attribute__((weak)) void ** Car_Action(void * a1, void ** a2) { return 0; }
__attribute__((weak)) void * Car_WeaponHit(void * a1) { return 0; }
__attribute__((weak)) int* Car_Cleanup(void * a1, int a2) { return 0; }
__attribute__((weak)) int Car_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) int Car_Cleanup_3(void * a1) { return 0; }
__attribute__((weak)) unsigned int Menu_RequestScreen_23(void) { return 0; }
__attribute__((weak)) int Menu_LeaveMenus_23(void) { return 0; }
__attribute__((weak)) int* Menu_UpdateLanguage_23(void * a1) { return 0; }
__attribute__((weak)) double* Menu_FormatScreen_23(double* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) int Menu_PlayMusic_23(void) { return 0; }
__attribute__((weak)) void * Wheel_Init(void) { return 0; }
__attribute__((weak)) int Wheel_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) void * Wheel_Process(void * a1) { return 0; }
__attribute__((weak)) int Wheel_Tick(float a1) { return 0; }
__attribute__((weak)) long double Vehicle_InitPlane(float a1, int a2) { return 0; }
__attribute__((weak)) void ** Vehicle_UpdateRudder(void * a1, int a2, float a3, float a4) { return 0; }
__attribute__((weak)) int Wheel_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit(void) { return 0; }
__attribute__((weak)) int Vehicle_CheckFlightDynamics(void) { return 0; }
__attribute__((weak)) void * Wheel_FrictionDrive(float* a1, float* a2, float* a3, float* a4, float a5, float a6, float a7) { return 0; }
__attribute__((weak)) void * Car_WheelDrive(float* a1, float a2, float a3) { return 0; }
__attribute__((weak)) void * Heli_Init(void) { return 0; }
__attribute__((weak)) int* Heli_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int* Vehicle_InitHeli_2(float a1) { return 0; }
__attribute__((weak)) char * Heli_Setup(int80_t a1, char * a2) { return 0; }
__attribute__((weak)) int* Vehicle_InitPlane_2(void * a1) { return 0; }
__attribute__((weak)) int* Vehicle_UpdateRudder_2(void * a1) { return 0; }
__attribute__((weak)) int* Heli_Process(void * a1) { return 0; }
__attribute__((weak)) int Heli_ReceiveChannels(float a1, int* a2) { return 0; }
__attribute__((weak)) int Vehicle_DeployGear_2(float a1) { return 0; }
__attribute__((weak)) int* Vehicle_UpdateCockpit_2(void * a1) { return 0; }
__attribute__((weak)) int Heli_Update(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_CheckFlightDynamics_2(void) { return 0; }
__attribute__((weak)) int Vehicle_InitHeli_3(float* a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int* Plane_Init(void) { return 0; }
__attribute__((weak)) int* Plane_LoadParameters(float a1) { return 0; }
__attribute__((weak)) float Vehicle_InitPlane_3(float a1)  { return 0; }
__attribute__((weak)) float Vehicle_UpdateRudder_3(float a1)  { return 0; }
__attribute__((weak)) float Vehicle_DeployGear_3(float a1)  { return 0; }
__attribute__((weak)) struct status_msg* Plane_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int* Vehicle_UpdateCockpit_3(void * a1) { return 0; }
__attribute__((weak)) int* Plane_Process(void * a1) { return 0; }
__attribute__((weak)) void * Plane_ReceiveChannels(float a1, int* a2) { return 0; }
__attribute__((weak)) void * FUN_00433B50(double* a1) { return 0; }
__attribute__((weak)) int* Vehicle_CheckFlightDynamics_3(double* a1) { return 0; }
__attribute__((weak)) int Plane_Update(float a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_DeployGear_4(void) { return 0; }
__attribute__((weak)) int Vehicle_UpdateCockpit_4(void * a1, float* a2) { return 0; }
__attribute__((weak)) void * CockpitShield_Init(void) { return 0; }
__attribute__((weak)) int CockpitShield_LoadParameters(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_CheckFlightDynamics_4(void) { return 0; }
__attribute__((weak)) int Vehicle_InitHeli_5(void * a1, float* a2) { return 0; }
__attribute__((weak)) void * Gear_Init(void) { return 0; }
__attribute__((weak)) int Gear_LoadParameters(void * a1, float a2) { return 0; }
__attribute__((weak)) int Gear_Setup(long double a1, long double a2, long double a3, long double a4, int* a5) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitPlane_5(void) { return 0; }
__attribute__((weak)) int Vehicle_UpdateRudder_5(void) { return 0; }
__attribute__((weak)) void * Hatch_Init(void) { return 0; }
__attribute__((weak)) int Hatch_LoadParameters(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_DeployGear_5(void) { return 0; }
__attribute__((weak)) int Rudder_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) void * Rudder_Init(void) { return 0; }
__attribute__((weak)) float* Rudder_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit_5(void) { return 0; }
__attribute__((weak)) char * RainEffect_Init(void) { return 0; }
__attribute__((weak)) int RainEffect_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int RainEffect_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_CheckFlightDynamics_5(void) { return 0; }
__attribute__((weak)) int* EnvironmentSound_Init(void) { return 0; }
__attribute__((weak)) int* EnvironmentSound_Update(void * a1) { return 0; }
__attribute__((weak)) int EnvironmentSound_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int Vehicle_LeftEcco2F2F2F2F(void * a1) { return 0; }
__attribute__((weak)) int Vehicle_AmbientRain(float a1) { return 0; }
__attribute__((weak)) int Vehicle_InitHeli_6(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitPlane_6(void) { return 0; }
__attribute__((weak)) int Vehicle_UpdateRudder_6(int a1) { return 0; }
__attribute__((weak)) char * Smoke_Init(void) { return 0; }
__attribute__((weak)) void * Smoke_Action(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Smoke_Update(void * a1) { return 0; }
__attribute__((weak)) int Smoke_OnEvent(void * a1) { return 0; }
__attribute__((weak)) char * Smoke_Setup(void * a1) { return 0; }
__attribute__((weak)) int Smoke_LoadParameters(long double a1, void * a2) { return 0; }
__attribute__((weak)) void * Smoke_Process(void * a1) { return 0; }
__attribute__((weak)) void * Vehicle_DeployGear_6(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit_6(void) { return 0; }
__attribute__((weak)) char * GunShotEffect_Init(void) { return 0; }
__attribute__((weak)) int GunShotEffect_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_CheckFlightDynamics_6(void) { return 0; }
__attribute__((weak)) int Vehicle_InitHeli_7(void * a1) { return 0; }
__attribute__((weak)) int* PlaceExplosiveTBA_Init(void) { return 0; }
__attribute__((weak)) int PlaceExplosiveTBA_LoadParameters(long double a1, long double a2, long double a3, long double a4, float a5, void * a6) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitPlane_7(void) { return 0; }
__attribute__((weak)) char * RotatingObject_Setup(void * a1) { return 0; }
__attribute__((weak)) int* RotatingObject_Init(void) { return 0; }
__attribute__((weak)) void * RotatingObject_LoadParameters(int80_t a1, float a2) { return 0; }
__attribute__((weak)) int RotatingObject_Process(float a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateRudder_7(void) { return 0; }
__attribute__((weak)) char * AlarmLight_Init(void) { return 0; }
__attribute__((weak)) int* AlarmLight_Cleanup(int* a1, float a2) { return 0; }
__attribute__((weak)) int AlarmLight_Cleanup_2(float a1) { return 0; }
__attribute__((weak)) void * AlarmLight_Cleanup_3(float a1, int a2) { return 0; }
__attribute__((weak)) float Vehicle_DeployGear_7(float a1, float a2)  { return 0; }
__attribute__((weak)) struct status_msg* AlarmLight_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) void * AlarmLight_Setup(void * a1) { return 0; }
__attribute__((weak)) int AlarmLight_Parsed(float a1, char * a2) { return 0; }
__attribute__((weak)) int Vehicle_1009011(void * a1) { return 0; }
__attribute__((weak)) int AlarmLight_Update(float a1, float a2) { return 0; }
__attribute__((weak)) int AlarmLight_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int AlarmLight_Action(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit_7(void) { return 0; }
__attribute__((weak)) int* MineField_Init(void) { return 0; }
__attribute__((weak)) int MineField_LoadParameters(long double a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* Vehicle_1009011_2(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_CheckFlightDynamics_7(void) { return 0; }
__attribute__((weak)) int* Radio_Init(void) { return 0; }
__attribute__((weak)) int* Radio_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int Radio_Setup(void * a1) { return 0; }
__attribute__((weak)) int Radio_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitHeli_8(void) { return 0; }
__attribute__((weak)) int* Generator_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* Generator_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int Generator_Setup(void * a1) { return 0; }
__attribute__((weak)) int Generator_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitPlane_8(void) { return 0; }
__attribute__((weak)) int* SimpointObjGenerator_Init(void) { return 0; }
__attribute__((weak)) int SimpointObjGenerator_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int SimpointObjGenerator_Setup(void * a1) { return 0; }
__attribute__((weak)) int SimpointObjGenerator_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateRudder_8(void) { return 0; }
__attribute__((weak)) void * ExplodeMagicObj_Init(void) { return 0; }
__attribute__((weak)) int ExplodeMagicObj_LoadParameters_2(void * a1) { return 0; }
__attribute__((weak)) int ExplodeMagicObj_LoadParameters(long double a1, long double a2, long double a3, long double a4, long double a5, int* a6) { return 0; }
__attribute__((weak)) int ExplodeMagicObj_Update(float a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_DeployGear_8(void) { return 0; }
__attribute__((weak)) void * ElevatorFloorIndicator_Action(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* ElevatorFloorIndicator_Init(void) { return 0; }
__attribute__((weak)) int* ElevatorFloorIndicator_LoadParameters(float a1) { return 0; }
__attribute__((weak)) struct status_msg* ElevatorFloorIndicator_Setup(int80_t a1, int a2) { return 0; }
__attribute__((weak)) void * ElevatorFloorIndicator_Process(void * a1) { return 0; }
__attribute__((weak)) int ElevatorFloorIndicator_Update(float a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit_8(void) { return 0; }
__attribute__((weak)) int* Elevator_Init(void) { return 0; }
__attribute__((weak)) char * Elevator_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) unsigned int Elevator_Setup(int* a1) { return 0; }
__attribute__((weak)) float Vehicle_CheckFlightDynamics_8(float a1)  { return 0; }
__attribute__((weak)) int* Vehicle_InitHeli_9(void * a1) { return 0; }
__attribute__((weak)) int Vehicle_InitPlane_9(float a1) { return 0; }
__attribute__((weak)) int Elevator_Process(void * a1) { return 0; }
__attribute__((weak)) int Elevator_Update(void * a1) { return 0; }
__attribute__((weak)) void * Elevator_OnEvent(float a1) { return 0; }
__attribute__((weak)) void * Elevator_Action(void * a1, void ** a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateRudder_9(void) { return 0; }
__attribute__((weak)) int Vehicle_DeployGear_9(void) { return 0; }
__attribute__((weak)) void * GenericPhysicsMagicObj_Init(void) { return 0; }
__attribute__((weak)) float* GenericPhysicsMagicObj_LoadParameters(float a1) { return 0; }
__attribute__((weak)) float* GenericPhysicsMagicObj_OnEvent(float a1) { return 0; }
__attribute__((weak)) void * GenericPhysicsMagicObj_Setup(void * a1) { return 0; }
__attribute__((weak)) void * GenericPhysicsMagicObj_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * GenericPhysicsMagicObj_Update(void * a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateCockpit_9(void) { return 0; }
__attribute__((weak)) void * GenericPhysicsObj_Init(void) { return 0; }
__attribute__((weak)) void * GenericPhysicsObj_Update(float a1) { return 0; }
__attribute__((weak)) float* GenericPhysicsObj_LoadParameters(float a1) { return 0; }
__attribute__((weak)) float* Vehicle_CheckFlightDynamics_9(float a1) { return 0; }
__attribute__((weak)) int GenericPhysicsObj_Process(void * a1) { return 0; }
__attribute__((weak)) void * GenericPhysicsObj_Update_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Vehicle_InitHeli_10(void) { return 0; }
__attribute__((weak)) struct status_msg* Vehicle_InitPlane_10(void * a1, int a2, int a3, int a4, int* a5) { return 0; }
__attribute__((weak)) int* Wire_Init(void) { return 0; }
__attribute__((weak)) int Wire_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) void * Wire_Setup(void * a1) { return 0; }
__attribute__((weak)) int Wire_Process(float a1) { return 0; }
__attribute__((weak)) int Wire_Update(double* a1, void * a2) { return 0; }
__attribute__((weak)) int Wire_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int Wire_Action(void * a1) { return 0; }
__attribute__((weak)) unsigned int Vehicle_UpdateRudder_10(void) { return 0; }
__attribute__((weak)) float* Vehicle_DeployGear_10(float* a1, double* a2) { return 0; }
__attribute__((weak)) int Vehicle_UpdateCockpit_10(float a1) { return 0; }
__attribute__((weak)) void * Fence_Init(void) { return 0; }
__attribute__((weak)) int* Fence_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int* Fence_Setup(void * a1) { return 0; }
__attribute__((weak)) char * Fence_Process(void * a1) { return 0; }
__attribute__((weak)) int Fence_Update(float a1) { return 0; }
__attribute__((weak)) int Fence_OnEvent(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Env_TriggerAlarm(void) { return 0; }
__attribute__((weak)) void Env_UpdateCameraLens(void) { return; }
__attribute__((weak)) int Ladder_LoadParameters(float a1, int* a2) { return 0; }
__attribute__((weak)) void * Ladder_Setup(void * a1) { return 0; }
__attribute__((weak)) void * Ladder_Init(void) { return 0; }
__attribute__((weak)) int Ladder_Update(double* a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Env_CheckAmbientArea(void) { return 0; }
__attribute__((weak)) int* AlarmControl_Init(void) { return 0; }
__attribute__((weak)) int AlarmControl_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int AlarmControl_Setup(void * a1) { return 0; }
__attribute__((weak)) int AlarmControl_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_ScanViewCone(void) { return 0; }
__attribute__((weak)) void * Env_ActivateEntity(void * a1) { return 0; }
__attribute__((weak)) void * Env_InitLadder_2(void * a1) { return 0; }
__attribute__((weak)) int* SCameraControl_Init(void) { return 0; }
__attribute__((weak)) char SCameraControl_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int SCameraControl_Setup(void * a1) { return 0; }
__attribute__((weak)) int SCameraControl_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_TriggerAlarm_2(void) { return 0; }
__attribute__((weak)) int SCamera_Init(void) { return 0; }
__attribute__((weak)) char * SCamera_Cleanup(float a1) { return 0; }
__attribute__((weak)) int SCameraLens_Tick(double* a1) { return 0; }
__attribute__((weak)) struct status_msg* Env_CameraBeepS(void * a1) { return 0; }
__attribute__((weak)) struct status_msg* camera_move(long double a1, float a2) { return 0; }
__attribute__((weak)) int Env_UpdateCameraLens_2(int* a1, void * a2) { return 0; }
__attribute__((weak)) int* SCamera_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) int SCamera_Cleanup_3(float a1) { return 0; }
__attribute__((weak)) void * SCamera_Cleanup_4(float a1, float a2) { return 0; }
__attribute__((weak)) int* SCamera_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int* SCamera_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) void * SCamera_Process(void * a1) { return 0; }
__attribute__((weak)) char * SCamera_Parsed(float a1, char * a2) { return 0; }
__attribute__((weak)) int SCamera_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int SCamera_Action(void * a1) { return 0; }
__attribute__((weak)) void * SCamera_Cleanup_5(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SCamera_Cleanup_6(float a1) { return 0; }
__attribute__((weak)) int SCamera_Cleanup_7(int a1, double** a2) { return 0; }
__attribute__((weak)) void * SCamera_Cleanup_8(double* a1, float a2) { return 0; }
__attribute__((weak)) int SCamera_Cleanup_9(float a1, void * a2) { return 0; }
__attribute__((weak)) void * SCamera_Cleanup_10(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SCamera_Cleanup_11(float a1, void * a2) { return 0; }
__attribute__((weak)) int Env_ScanViewCone_2(void) { return 0; }
__attribute__((weak)) int Env_ActivateEntity_2(void) { return 0; }
__attribute__((weak)) int Env_InitLadder_3(void) { return 0; }
__attribute__((weak)) int* Terminal_Init(void) { return 0; }
__attribute__((weak)) char Terminal_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * Terminal_Setup(void * a1) { return 0; }
__attribute__((weak)) int Terminal_Process(void * a1) { return 0; }
__attribute__((weak)) int Terminal_Update(void * a1) { return 0; }
__attribute__((weak)) int GenericTBA_OnEvent(double* a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Env_TriggerAlarm_3(void) { return 0; }
__attribute__((weak)) int Env_UpdateCameraLens_3(void) { return 0; }
__attribute__((weak)) int Env_CheckAmbientArea_3(void) { return 0; }
__attribute__((weak)) void * Env_ScanViewCone_3(void * a1) { return 0; }
__attribute__((weak)) void * Cabinet_Init(void) { return 0; }
__attribute__((weak)) int Cabinet_Cleanup(double* a1, float a2) { return 0; }
__attribute__((weak)) int Cabinet_Cleanup_2(float a1) { return 0; }
__attribute__((weak)) int Cabinet_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) void * Cabinet_Setup(void * a1) { return 0; }
__attribute__((weak)) void * Cabinet_Process(void * a1) { return 0; }
__attribute__((weak)) char * Cabinet_Update(float a1, char * a2) { return 0; }
__attribute__((weak)) int Cabinet_OnEvent(double* a1, void * a2) { return 0; }
__attribute__((weak)) int Cabinet_Cleanup_3(void * a1) { return 0; }
__attribute__((weak)) int Cabinet_Cleanup_4(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_ScanViewCone_5(void) { return 0; }
__attribute__((weak)) double* Env_ActivateEntity_5(double* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) long double Env_InitLadder_6(void * a1) { return 0; }
__attribute__((weak)) void * Env_TriggerAlarm_6(void * a1) { return 0; }
__attribute__((weak)) void * Env_UpdateCameraLens_6(void * a1) { return 0; }
__attribute__((weak)) void * Env_CheckAmbientArea_6(void * a1) { return 0; }
__attribute__((weak)) int* Switch_Init(void) { return 0; }
__attribute__((weak)) int* Switch_LoadParameters(float a1) { return 0; }
__attribute__((weak)) void * Switch_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) void * Switch_Process(void * a1) { return 0; }
__attribute__((weak)) float* Switch_Update(float a1) { return 0; }
__attribute__((weak)) float* Env_CheckAmbientArea_7(void * a1) { return 0; }
__attribute__((weak)) int Switch_OnEvent(double* a1, void * a2) { return 0; }
__attribute__((weak)) int Switch_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int Switch_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) void * Switch_Cleanup_3(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Env_ScanViewCone_7(void) { return 0; }
__attribute__((weak)) int Door_Cleanup(float a1, int* a2) { return 0; }
__attribute__((weak)) int Env_ActivateEntity_7(float a1) { return 0; }
__attribute__((weak)) int Env_InitLadder_8(void * a1) { return 0; }
__attribute__((weak)) int Env_TriggerAlarm_8(int* a1, int a2) { return 0; }
__attribute__((weak)) int Door_Cleanup_2(void * a1, double* a2) { return 0; }
__attribute__((weak)) int* Door_Init(void) { return 0; }
__attribute__((weak)) void * Door_Setup(void * a1) { return 0; }
__attribute__((weak)) int Door_Update(double* a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* Door_LoadParameters(long double a1, void * a2) { return 0; }
__attribute__((weak)) float* Env_UpdateCameraLens_8(void * a1) { return 0; }
__attribute__((weak)) int* Door_Process(unsigned int a1, char * a2) { return 0; }
__attribute__((weak)) int Door_Action(void * a1) { return 0; }
__attribute__((weak)) int Door_Cleanup_3(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_CheckAmbientArea_8(void) { return 0; }
__attribute__((weak)) int Env_ScanViewCone_8(void) { return 0; }
__attribute__((weak)) long double Env_ActivateEntity_8(void * a1) { return 0; }
__attribute__((weak)) void * Env_InitLadder_9(void * a1) { return 0; }
__attribute__((weak)) void * Env_TriggerAlarm_9(void * a1) { return 0; }
__attribute__((weak)) int Env_UpdateCameraLens_9(void * a1, char a2) { return 0; }
__attribute__((weak)) int Env_CheckAmbientArea_9(void * a1) { return 0; }
__attribute__((weak)) void * Env_ScanViewCone_9(void * a1) { return 0; }
__attribute__((weak)) int* GenericTBA_Init(void) { return 0; }
__attribute__((weak)) char GenericTBA_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * GenericTBA_Setup(void * a1) { return 0; }
__attribute__((weak)) int GenericTBA_Process(void * a1) { return 0; }
__attribute__((weak)) int GenericTBA_Update(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_ActivateEntity_9(void) { return 0; }
__attribute__((weak)) int Env_InitLadder_10(void) { return 0; }
__attribute__((weak)) int Env_TriggerAlarm_10(void) { return 0; }
__attribute__((weak)) double* Env_UpdateCameraLens_10(double* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) long double Env_CheckAmbientArea_10(void * a1) { return 0; }
__attribute__((weak)) void * Env_ScanViewCone_10(void * a1) { return 0; }
__attribute__((weak)) void * Building_Init(void) { return 0; }
__attribute__((weak)) int Building_LoadParameters(int* a1, int a2) { return 0; }
__attribute__((weak)) int Building_Setup(void * a1) { return 0; }
__attribute__((weak)) float Building_Process(float a1)  { return 0; }
__attribute__((weak)) int Building_OnEvent(float a1, void * a2) { return 0; }
__attribute__((weak)) void * Building_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Env_ActivateEntity_10(void) { return 0; }
__attribute__((weak)) int* RadarDish_Setup(void * a1) { return 0; }
__attribute__((weak)) void * RadarDish_Init(void) { return 0; }
__attribute__((weak)) void * RadarDish_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_InitLadder_11(void) { return 0; }
__attribute__((weak)) int* Siren_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* Siren_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int Siren_Setup(void * a1) { return 0; }
__attribute__((weak)) int Siren_Process(void * a1) { return 0; }
__attribute__((weak)) int Env_TriggerAlarm_11(void) { return 0; }
__attribute__((weak)) void * ExplodeMagicObj_Setup(void * a1) { return 0; }
__attribute__((weak)) void * Glass_Init(void) { return 0; }
__attribute__((weak)) int Glass_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int Glass_Update(float a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Env_UpdateCameraLens_11(void) { return 0; }
__attribute__((weak)) int Env_CheckAmbientArea_11(void) { return 0; }
__attribute__((weak)) int GlassShatter_Init(void) { return 0; }
__attribute__((weak)) int GlassShatter_LoadParameters(float a1) { return 0; }
__attribute__((weak)) unsigned int Env_ScanViewCone_11(void) { return 0; }
__attribute__((weak)) struct status_msg* Env_333333333(unsigned int a1, int* a2, double* a3, float* a4, void * a5) { return 0; }
__attribute__((weak)) struct status_msg* Env_GlassCrush1(int a1) { return 0; }
__attribute__((weak)) void * Env_ActivateEntity_11(float* a1, float* a2, float* a3) { return 0; }
__attribute__((weak)) struct status_msg* Env_333333333Glassshatte(unsigned int a1, float* a2, double* a3, double* a4, float a5) { return 0; }
__attribute__((weak)) int* AmbientArea_Init(void) { return 0; }
__attribute__((weak)) int AmbientArea_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * AmbientArea_Setup(void * a1) { return 0; }
__attribute__((weak)) int AmbientArea_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Env_InitLadder_12(void) { return 0; }
__attribute__((weak)) struct status_msg* Env_TriggerAlarm_12(void * a1) { return 0; }
__attribute__((weak)) int Env_UpdateCameraLens_12(int a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) void * Env_CheckAmbientArea_12(void) { return 0; }
__attribute__((weak)) void * HumanAI_Init(void) { return 0; }
__attribute__((weak)) void * AIAction_Patrol_2(void) { return 0; }
__attribute__((weak)) int AIAction_Patrol(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_Combat(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_Dead(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_FallFlat(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIAction_Activate(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_WalkToNode(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_RunToNode(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_FireAtNode(long double a1, long double a2, int a3, float a4) { return 0; }
__attribute__((weak)) int AIAction_FireAtTask(long double a1, long double a2, int a3, float a4) { return 0; }
__attribute__((weak)) int AIAction_PlayAnimation(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_PlaySound(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_MoveToEvent(int a1, float a2) { return 0; }
__attribute__((weak)) int* Env_ScanViewCone_12(int a1) { return 0; }
__attribute__((weak)) int AIAction_LookAtEvent(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIAction_Stunned(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIAction_KickGrenade(int a1, int a2) { return 0; }
__attribute__((weak)) int AIAction_RunPanicking(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIAction_Idle(int a1, float a2) { return 0; }
__attribute__((weak)) int AIAction_SetCombat(int a1, int a2) { return 0; }
__attribute__((weak)) int AIFunction_RemoveAlarmActions(int a1) { return 0; }
__attribute__((weak)) int AIFunction_SetViewLength(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetAlarmViewLength(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetViewAlpha(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetViewGamma(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetSecondaryViewLength(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetSecondaryAlarmViewLength(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetSecondaryViewAlpha(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_SetSecondaryViewGamma(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_GetCurrentEventType(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetRandomValue(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_DefaultHandler(int a1) { return 0; }
__attribute__((weak)) int AIFunction_SetEventPriority(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetInvulnerability(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetInstantDeath(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetDeathAnimation(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetAlarmTriggerID(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetAlarmControlID(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetAlarmAccess(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_SetGunnerID(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_GetAlarmTriggerID(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetAlarmControlID(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetAlarmAccess(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetGunnerID(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetAlarmControlStatus(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetGunnerStatus(int a1) { return 0; }
__attribute__((weak)) int AIFunction_SetScriptIntegerValue(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_GetScriptIntegerValue(int a1, int a2) { return 0; }
__attribute__((weak)) int AIFunction_SetScriptRealValue(int80_t a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_GetScriptRealValue(int a1, float a2) { return 0; }
__attribute__((weak)) int AIFunction_IsEventBehind(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetEventDistance(int a1) { return 0; }
__attribute__((weak)) int AIFunction_GetAlarmTriggerDistance(int a1) { return 0; }
__attribute__((weak)) int AIFunction_SetAnimationInterval(long double a1, long double a2, int a3, float a4) { return 0; }
__attribute__((weak)) int AIFunction_AddAnimationEntry(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int AIFunction_GetAnimationToPlay(int a1) { return 0; }
__attribute__((weak)) int AIFunction_SendResponse(int a1) { return 0; }
__attribute__((weak)) void * AIEVENT_CREATE(void) { return 0; }
__attribute__((weak)) int HumanAI_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * Env_ActivateEntity_12(void * a1) { return 0; }
__attribute__((weak)) void * HumanAI_Setup(int a1) { return 0; }
__attribute__((weak)) void Env_WeaponNotInitialized(void * a1) { return; }
__attribute__((weak)) int HumanAI_EventDispatch(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Env_InitLadder_13(int* a1) { return 0; }
__attribute__((weak)) int Env_TriggerAlarm_13(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int* HumanAI_RunActions(void * a1) { return 0; }
__attribute__((weak)) int* Env_UpdateCameraLens_13(void * a1) { return 0; }
__attribute__((weak)) void * Env_CheckAmbientArea_13(void * a1) { return 0; }
__attribute__((weak)) int* HumanAI_Process(void * a1) { return 0; }
__attribute__((weak)) int* AI_CombatTarget(void * a1) { return 0; }
__attribute__((weak)) double* HumanAI_EventOffer(void * a1, double** a2) { return 0; }
__attribute__((weak)) double* AI_TestViewCones(long double a1, long double a2, long double a3, void * a4, double* a5, char a6) { return 0; }
__attribute__((weak)) int* HumanAI_EventQueued(void * a1, int* a2) { return 0; }
__attribute__((weak)) int HumanAI_OnEvent(int* a1) { return 0; }
__attribute__((weak)) int HumanAI_Action(void * a1) { return 0; }
__attribute__((weak)) int HumanAI_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int* AI_CheckVisibility(void) { return 0; }
__attribute__((weak)) int AIAction_Patrol_3(void) { return 0; }
__attribute__((weak)) int AIEVENT_CREATE_2(void) { return 0; }
__attribute__((weak)) int AI_CheckHearing(void) { return 0; }
__attribute__((weak)) int AI_FireWeapon(void) { return 0; }
__attribute__((weak)) int AI_MoveToNode(void) { return 0; }
__attribute__((weak)) int* AI_EventBroadcast(int a1) { return 0; }
__attribute__((weak)) int AI_TakeCover(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * AI_AlertAllies(void * a1) { return 0; }
__attribute__((weak)) void * AI_ActionstackFull(void * a1) { return 0; }
__attribute__((weak)) void * AI_SelectTarget(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int AI_UpdateSensors(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AI_CheckSector(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* AI_CombatTarget_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AI_CheckVisibility_2(void * a1) { return 0; }
__attribute__((weak)) void * AI_CheckHearing_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AI_FireWeapon_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* AI_MoveToNode_2(int* a1) { return 0; }
__attribute__((weak)) int Combat_SetAimMode(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int AI_TakeCover_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_2(void * a1, int a2) { return 0; }
__attribute__((weak)) int* AI_AlertAllies_2(int* a1, void * a2, char a3) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_2(void * a1) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_2(void * a1) { return 0; }
__attribute__((weak)) int* AI_CheckSector_2(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_3(void * a1) { return 0; }
__attribute__((weak)) int AI_AFCaF(long double a1, float a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_3(void * a1) { return 0; }
__attribute__((weak)) int AI_SteerHuman(long double a1, long double a2, void * a3) { return 0; }
__attribute__((weak)) int* AI_ExpandRoute(void * a1, int a2, double* a3, char a4) { return 0; }
__attribute__((weak)) int* AI_CheckHearing_3(void * a1) { return 0; }
__attribute__((weak)) int AI_FireWeapon_3(double* a1, void * a2, double* a3, double* a4, char a5) { return 0; }
__attribute__((weak)) int* AI_MoveToNode_3(void * a1, int a2, double* a3, char a4) { return 0; }
__attribute__((weak)) int AI_CaFCgF(long double a1, long double a2, void * a3, int a4, float a5, char a6) { return 0; }
__attribute__((weak)) int AI_TakeCover_3(void * a1, int a2, float a3, char a4) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_3(void * a1, int a2, float a3, char a4) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_3(int a1) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_3(int a1) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_3(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckSector_3(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_4(int a1) { return 0; }
__attribute__((weak)) void AI_CombatTarget_4(void) { return; }
__attribute__((weak)) float* AI_CheckVisibility_4(long double a1, int a2, float* a3, float a4, double* a5, float a6) { return 0; }
__attribute__((weak)) int* AI_CheckHearing_4(void * a1, int a2, int a3, char a4) { return 0; }
__attribute__((weak)) int* AI_FireWeapon_4(int a1, int a2) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_4(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* AI_TakeCover_4(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int* AI_UpdateOrders_4(int* a1, int* a2, double* a3, void * a4, int a5, double* a6) { return 0; }
__attribute__((weak)) int AI_AlertAllies_4(int* a1, int* a2, void * a3, int a4) { return 0; }
__attribute__((weak)) int* AI_HumanmonitorNoTarget(int* a1) { return 0; }
__attribute__((weak)) int* AI_SelectTarget_4(int* a1) { return 0; }
__attribute__((weak)) void AI_UpdateSensors_4(void) { return; }
__attribute__((weak)) int* AI_CheckSector_4(int a1) { return 0; }
__attribute__((weak)) int* AI_UpdatePatrol_5(int a1, char a2) { return 0; }
__attribute__((weak)) int* AI_CombatTarget_5(void * a1) { return 0; }
__attribute__((weak)) int* PatrolPathCommand_Init(void) { return 0; }
__attribute__((weak)) void PatrolPathCommand_Update(void * a1) { return; }
__attribute__((weak)) int PatrolPathCommand_OnEvent(void) { return 0; }
__attribute__((weak)) int PatrolPathCommand_Process(void * a1) { return 0; }
__attribute__((weak)) int PatrolPath_Init(void) { return 0; }
__attribute__((weak)) void * PatrolPath_Update(void) { return 0; }
__attribute__((weak)) int PatrolPath_OnEvent(void * a1) { return 0; }
__attribute__((weak)) unsigned int PatrolPath_Process(void) { return 0; }
__attribute__((weak)) int PatrolPath_Action(void * a1) { return 0; }
__attribute__((weak)) int* PatrolPath_OnTick(int* a1) { return 0; }
__attribute__((weak)) int* PatrolCursor_Advance(int* a1) { return 0; }
__attribute__((weak)) int* PatrolCursor_Start(void ** a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * const PatrolPath_Find(int a1) { return 0; }
__attribute__((weak)) void AI_CheckVisibility_5(void) { return; }
__attribute__((weak)) int* AI_CheckHearing_5(int* a1, int a2) { return 0; }
__attribute__((weak)) void AI_WalkRain1D(void * a1) { return; }
__attribute__((weak)) int AI_AnimationDNotFound(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_5(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_5(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_5(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_TakeCover_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AiDeath(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AnimationDNotFound_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanSoldierFemale_Init(void) { return 0; }
__attribute__((weak)) int* AI_CheckSector_6(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AI_CheckVisibility_7(void * a1) { return 0; }
__attribute__((weak)) int HumanSoldierFemale_Setup(int* a1, int a2) { return 0; }
__attribute__((weak)) int AI_SpeedZMS2F(float* a1) { return 0; }
__attribute__((weak)) int HumanSoldierFemale_Process(float a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int HumanSoldierFemale_Update(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanSoldierFemale_OnEvent(void * a1, float* a2) { return 0; }
__attribute__((weak)) unsigned int AI_UpdateOrders_7(void) { return 0; }
__attribute__((weak)) int AI_AlertAllies_7(void) { return 0; }
__attribute__((weak)) int AI_AnimationDNotFound_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_7(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_8(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* AI_CombatTarget_9(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanSoldierRPG_Init(void) { return 0; }
__attribute__((weak)) int HumanSoldier_Process(int* a1, int a2) { return 0; }
__attribute__((weak)) int AI_SpeedZMS2F_2(float* a1) { return 0; }
__attribute__((weak)) int HumanSoldierRPG_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int HumanSoldierRPG_Update(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanSoldierRPG_OnEvent(void * a1, float* a2) { return 0; }
__attribute__((weak)) unsigned int AI_CheckHearing_9(void) { return 0; }
__attribute__((weak)) int AI_FireWeapon_9(void) { return 0; }
__attribute__((weak)) void AI_WalkRain1D_2(void * a1) { return; }
__attribute__((weak)) int AI_AnimationDNotFound_4(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_9(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_TakeCover_9(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_9(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_9(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_9(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) void AI_FireWeapon_10(void * a1, void * a2) { return; }
__attribute__((weak)) int AI_MoveToNode_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_11(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_11(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_UpdatePatrol_12(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_12(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckVisibility_12(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckHearing_12(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * AI_AiDeath_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AiDeath_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AnimationDNotFound_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_12(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_12(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanSoldierPistol_Init(void) { return 0; }
__attribute__((weak)) int* AI_TakeCover_12(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AI_UpdateOrders_12(void * a1) { return 0; }
__attribute__((weak)) int HumanSoldier_Setup(void * a1) { return 0; }
__attribute__((weak)) int AI_SpeedZMS2F_3(float* a1) { return 0; }
__attribute__((weak)) int HumanSoldierPistol_Process(float a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int HumanSoldier_OnEvent(void * a1, float a2) { return 0; }
__attribute__((weak)) int HumanSoldier_Action(void * a1, float* a2) { return 0; }
__attribute__((weak)) unsigned int AI_AlertAllies_12(void) { return 0; }
__attribute__((weak)) int AI_SelectTarget_12(void) { return 0; }
__attribute__((weak)) void AI_WalkRain1D_3(void * a1) { return; }
__attribute__((weak)) int AI_AnimationDNotFound_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_12(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_CheckSector_12(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckVisibility_13(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_CheckHearing_13(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_13(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_13(void * a1, void * a2) { return 0; }
__attribute__((weak)) struct status_msg* AI_CheckSector_13(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* AI_CombatTarget_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_14(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckVisibility_15(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_FireWeapon_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckSector_15(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_16(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * Soldier_Execute(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * Soldier_DeathStateA(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * Soldier_DeathStateB(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AnimationDNotFound_7(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_16(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckVisibility_16(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_16(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* HumanSoldier_Init(void) { return 0; }
__attribute__((weak)) int* AI_FireWeapon_16(void * a1, int* a2) { return 0; }
__attribute__((weak)) int HumanSoldier_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int AI_SpeedZMS2F_4(float* a1) { return 0; }
__attribute__((weak)) int* AI_MoveToNode_16(int* a1) { return 0; }
__attribute__((weak)) int Human_DamageHandler(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int AI_TakeCover_16(void) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_16(void) { return 0; }
__attribute__((weak)) double* Soldier_DeathFallSolver(double* a1, void * a2, int* a3, int* a4) { return 0; }
__attribute__((weak)) int AI_AlertAllies_16(long double a1, void * a2, double* a3) { return 0; }
__attribute__((weak)) int* HumanPlayerInput_Init(void) { return 0; }
__attribute__((weak)) int HumanPlayerInput_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * HumanPlayerInput_Setup(void * a1) { return 0; }
__attribute__((weak)) int HumanPlayerInput_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int AI_UpdateSensors_16(void) { return 0; }
__attribute__((weak)) int AI_CheckSector_16(int a1) { return 0; }
__attribute__((weak)) void AI_UpdatePatrol_17(void) { return; }
__attribute__((weak)) void Human_Action(void * a1, char * a2) { return; }
__attribute__((weak)) int Human_Init(void) { return 0; }
__attribute__((weak)) int Human_GetCutSceneDeltaTime(int a1) { return 0; }
__attribute__((weak)) int AI_CombatTarget_17(void * a1) { return 0; }
__attribute__((weak)) int* AI_CheckVisibility_17(void * a1) { return 0; }
__attribute__((weak)) int* Human_Setup(float a1, int a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_17(float a1) { return 0; }
__attribute__((weak)) int AI_FireWeapon_17(float a1) { return 0; }
__attribute__((weak)) unsigned int Human_LoadParameters(float a1, int a2) { return 0; }
__attribute__((weak)) char * Human_Process(float a1, int* a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_17(void * a1, double* a2, double* a3, int a4) { return 0; }
__attribute__((weak)) char * Human_Update(float a1, int* a2) { return 0; }
__attribute__((weak)) float* Human_OnEvent(float a1) { return 0; }
__attribute__((weak)) int Human_BaseDamage(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Human_Cleanup(void * a1, float a2) { return 0; }
__attribute__((weak)) void * Human_Cleanup_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Human_Cleanup_3(void * a1, void * a2) { return 0; }
__attribute__((weak)) void Human_Cleanup_4(void * a1, int* a2) { return; }
__attribute__((weak)) int Weapon_AmmoPickup(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Weapon_GunPickup(void * a1, int* a2) { return 0; }
__attribute__((weak)) double* Human_Cleanup_5(float a1) { return 0; }
__attribute__((weak)) int HealthFraction(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Human_Cleanup_6(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Human_Cleanup_7(void * a1) { return 0; }
__attribute__((weak)) int Human_Cleanup_8(void * a1) { return 0; }
__attribute__((weak)) int Human_Cleanup_9(void * a1, int a2) { return 0; }
__attribute__((weak)) int Human_Cleanup_10(void * a1, int a2) { return 0; }
__attribute__((weak)) int Human_Cleanup_11(void * a1) { return 0; }
__attribute__((weak)) int AI_HumanTeamGood(void) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_17(void) { return 0; }
__attribute__((weak)) int AI_AlertAllies_17(void) { return 0; }
__attribute__((weak)) int AI_SelectTarget_17(void) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_17(void) { return 0; }
__attribute__((weak)) int AI_CheckSector_17(void) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_18(void) { return 0; }
__attribute__((weak)) int AI_CombatTarget_18(void) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_18(void * a1, int a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_18(int a1, char * a2) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_18(void * a1) { return 0; }
__attribute__((weak)) float* AI_MoveToNode_18(float* a1) { return 0; }
__attribute__((weak)) int* AI_TakeCover_18(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_18(float a1) { return 0; }
__attribute__((weak)) int AI_AlertAllies_18(void * a1) { return 0; }
__attribute__((weak)) void Human_MovementIntegrator(void *human_object) { (void)human_object; }
__attribute__((weak)) void Human_WallSweep(void *human_object,
                                           const double starting_position[3],
                                           double destination_position[3],
                                           float movement_delta[3],
                                           uint32_t *movement_flags)
{
    (void)human_object;
    (void)starting_position;
    (void)destination_position;
    (void)movement_delta;
    (void)movement_flags;
}
__attribute__((weak)) void Human_GroundQuery(void *human_object,
                                             const double starting_position[3],
                                             double destination_position[3],
                                             float movement_delta[3],
                                             uint32_t *movement_flags,
                                             float ground_query_distance)
{
    (void)human_object;
    (void)starting_position;
    (void)destination_position;
    (void)movement_delta;
    (void)movement_flags;
    (void)ground_query_distance;
}
__attribute__((weak)) void Human_Separation(void *human_character,
                                           const double start_position[3],
                                           double destination_position[3],
                                           float movement_delta[3])
{
    (void)human_character;
    (void)start_position;
    (void)destination_position;
    (void)movement_delta;
}
__attribute__((weak)) int Human_AttachedMovement(void * a1) { return 0; }
__attribute__((weak)) void * Muzzle_Eye(void * a1) { return 0; }
__attribute__((weak)) int* AI_UpdateSensors_18(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckSector_18(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_19(void * a1) { return 0; }
__attribute__((weak)) int AI_CombatTarget_19(void * a1) { return 0; }
__attribute__((weak)) void AI_CheckVisibility_19(void) { return; }
__attribute__((weak)) int AI_CheckHearing_19(int a1) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_19(void * a1) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_19(void * a1) { return 0; }
__attribute__((weak)) void * AI_TakeCover_19(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_19(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AI_AlertAllies_19(void * a1, float a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_19(void * a1) { return 0; }
__attribute__((weak)) int* AI_UpdateSensors_19(void * a1) { return 0; }
__attribute__((weak)) void * Human_SetParent(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_CheckSector_19(void * a1) { return 0; }
__attribute__((weak)) void * AI_UpdatePatrol_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_CombatTarget_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_CheckVisibility_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_CheckHearing_20(void * a1) { return 0; }
__attribute__((weak)) int AI_FireWeapon_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_TakeCover_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_UpdateOrders_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_20(void * a1) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_20(void * a1) { return 0; }
__attribute__((weak)) int* AI_UpdateSensors_20(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AI_CheckSector_20(void * a1) { return 0; }
__attribute__((weak)) int* AI_UpdatePatrol_21(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AI_CombatTarget_21(void * a1) { return 0; }
__attribute__((weak)) int* AI_CheckVisibility_21(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AI_CheckHearing_21(void * a1) { return 0; }
__attribute__((weak)) int Human_ViewCam(void * a1, int a2) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_21(void * a1) { return 0; }
__attribute__((weak)) unsigned int AI_MoveToNode_21(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) struct status_msg* AI_TakeCover_21(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void AI_WalkRain1D_4(void * a1) { return; }
__attribute__((weak)) void * AI_UpdateOrders_21(void * a1, int* a2, int a3) { return 0; }
__attribute__((weak)) int AI_AlertAllies_21(float a1) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_21(void * a1) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_21(void * a1) { return 0; }
__attribute__((weak)) int AI_CombatTarget_22(void) { return 0; }
__attribute__((weak)) int HumanView_Init(void) { return 0; }
__attribute__((weak)) int HumanView_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* HumanView_Setup(void * a1, int a2) { return 0; }
__attribute__((weak)) int HumanView_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int AI_CheckVisibility_22(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_CheckHearing_22(void * a1) { return 0; }
__attribute__((weak)) int AI_005011(int* a1) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_22(void * a1) { return 0; }
__attribute__((weak)) void * AI_TakeCover_22(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_22(int a1) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_22(void * a1) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_22(void * a1, float a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_22(void * a1, float a2, int a3) { return 0; }
__attribute__((weak)) int AI_CheckSector_22(void * a1) { return 0; }
__attribute__((weak)) float AI_UpdatePatrol_23(float a1, float a2)  { return 0; }
__attribute__((weak)) int AI_CombatTarget_23(void * a1, void * a2) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_23(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckHearing_23(void * a1) { return 0; }
__attribute__((weak)) int AI_FireWeapon_23(int a1, int a2) { return 0; }
__attribute__((weak)) int AI_MoveToNode_23(int* a1, void * a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_23(int a1, int a2) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_23(int* a1, void * a2) { return 0; }
__attribute__((weak)) void * AI_AlertAllies_23(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_23(void * a1) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_23(void * a1, int a2, char a3) { return 0; }
__attribute__((weak)) void * AI_CheckSector_23(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) void * AI_UpdatePatrol_24(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_CombatTarget_24(void * a1) { return 0; }
__attribute__((weak)) void * Human_TaskViewReset(void * a1) { return 0; }
__attribute__((weak)) int HumanAttach_Init(void) { return 0; }
__attribute__((weak)) int HumanAttach_LoadParameters(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int HumanAttach_OnEvent(void) { return 0; }
__attribute__((weak)) int DeathZone_Init(void) { return 0; }
__attribute__((weak)) int DeathZone_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) int DeathZone_Setup(void * a1) { return 0; }
__attribute__((weak)) int DeathZone_Process(float a1, double** a2) { return 0; }
__attribute__((weak)) unsigned int AI_CheckVisibility_24(void) { return 0; }
__attribute__((weak)) int AI_CheckHearing_24(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_FireWeapon_24(unsigned int a1, unsigned int a2, int a3, void ** a4, int* a5, int* a6, unsigned int a7) { return 0; }
__attribute__((weak)) int ComputerStartup_Process(void * a1) { return 0; }
__attribute__((weak)) int AI_MoveToNode_24(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * AI_TakeCover_24(void * a1) { return 0; }
__attribute__((weak)) int ComputerStartup_Init(void) { return 0; }
__attribute__((weak)) int ComputerStartup_Update(void * a1) { return 0; }
__attribute__((weak)) void ComputerStartup_Setup(void * a1) { return; }
__attribute__((weak)) void ComputerStartup_LoadParameters(int a1) { return; }
__attribute__((weak)) unsigned int AI_UpdateOrders_24(void) { return 0; }
__attribute__((weak)) int* DefineComputerLimit_Init(void) { return 0; }
__attribute__((weak)) int DefineComputerLimit_Update(void) { return 0; }
__attribute__((weak)) int DefineComputerLimit_OnEvent(void) { return 0; }
__attribute__((weak)) int* DefineComputerObjective_Init(void) { return 0; }
__attribute__((weak)) char DefineComputerObjective_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * DefineComputerObjective_Setup(void * a1) { return 0; }
__attribute__((weak)) int DefineComputerObjective_Process(void * a1) { return 0; }
__attribute__((weak)) int AI_AlertAllies_24(void) { return 0; }
__attribute__((weak)) int AI_SelectTarget_24(int a1) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_24(float* a1, float a2, void * a3) { return 0; }
__attribute__((weak)) float* AI_CheckSector_24(float* a1, float* a2, float a3, float a4) { return 0; }
__attribute__((weak)) void * ComputerObject_Init(void) { return 0; }
__attribute__((weak)) int* ComputerObject_Setup(double* a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_25(int* a1) { return 0; }
__attribute__((weak)) int* ComputerObject_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int AI_CombatTarget_25(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_CheckVisibility_25(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckHearing_25(void) { return 0; }
__attribute__((weak)) int AI_FireWeapon_25(void) { return 0; }
__attribute__((weak)) int AI_MoveToNode_25(void) { return 0; }
__attribute__((weak)) void AI_TakeCover_25(int a1) { return; }
__attribute__((weak)) void AI_UpdateOrders_25(float a1) { return; }
__attribute__((weak)) int AI_RmS(int* a1) { return 0; }
__attribute__((weak)) int AI_AlertAllies_25(void * a1, int a2) { return 0; }
__attribute__((weak)) int* ComputerHilight_Init(void) { return 0; }
__attribute__((weak)) void * ComputerHilight_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int AI_SelectTarget_25(void * a1) { return 0; }
__attribute__((weak)) int ComputerHilight_Setup(int80_t a1, int* a2, void * a3) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_25(void) { return 0; }
__attribute__((weak)) int AI_CheckSector_25(void) { return 0; }
__attribute__((weak)) int ComputerLog_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* ComputerLog_LoadParameters(float a1) { return 0; }
__attribute__((weak)) void * ComputerLog_Setup(float a1) { return 0; }
__attribute__((weak)) unsigned int AI_UpdatePatrol_26(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_CombatTarget_26(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_26(void) { return 0; }
__attribute__((weak)) int AI_CheckHearing_26(int a1) { return 0; }
__attribute__((weak)) int ComputerObjectives_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* ComputerObjectives_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * ComputerObjectives_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int AI_FireWeapon_26(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_MoveToNode_26(void * a1) { return 0; }
__attribute__((weak)) int AI_TakeCover_26(int a1, int a2, int a3, int a4, char * a5, void * a6, int a7) { return 0; }
__attribute__((weak)) void * ComputerMap_Init(void) { return 0; }
__attribute__((weak)) void * ComputerMap_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) double* AI_UpdateOrders_26(void * a1, void * a2) { return 0; }
__attribute__((weak)) double* AI_AlertAllies_26(void * a1, double* a2) { return 0; }
__attribute__((weak)) int AI_SelectTarget_26(void * a1, int* a2) { return 0; }
__attribute__((weak)) int mapcomp_05(void * a1, float a2) { return 0; }
__attribute__((weak)) void * AI_UpdateSensors_26(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* AI_CheckSector_26(void * a1) { return 0; }
__attribute__((weak)) double* AI_UpdatePatrol_27(void) { return 0; }
__attribute__((weak)) double* AI_CombatTarget_27(void * a1) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_27(void * a1) { return 0; }
__attribute__((weak)) double* AI_CheckHearing_27(double* a1) { return 0; }
__attribute__((weak)) int* AI_FireWeapon_27(void * a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int AI_MoveToNode_27(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_TakeCover_27(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_27(void) { return 0; }
__attribute__((weak)) int AI_AlertAllies_27(void) { return 0; }
__attribute__((weak)) int AI_SelectTarget_27(void) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_27(void) { return 0; }
__attribute__((weak)) int AI_CheckSector_27(int a1) { return 0; }
__attribute__((weak)) int ComputerMenu_Init(void) { return 0; }
__attribute__((weak)) void * ComputerMenu_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int ComputerMenu_Setup(int a1) { return 0; }
__attribute__((weak)) int AI_Computer(void) { return 0; }
__attribute__((weak)) int AI_NoNewFunctionForMenu(int a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_28(void) { return 0; }
__attribute__((weak)) int AI_CombatTarget_28(void) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_28(void) { return 0; }
__attribute__((weak)) void * AI_CheckHearing_28(int a1) { return 0; }
__attribute__((weak)) int* AI_ComputerComputerRes(void) { return 0; }
__attribute__((weak)) int AI_FireWeapon_28(void) { return 0; }
__attribute__((weak)) void AI_MoveToNode_28(void) { return; }
__attribute__((weak)) void * AI_TakeCover_28(int a1) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_28(void) { return 0; }
__attribute__((weak)) int AI_AlertAllies_28(void) { return 0; }
__attribute__((weak)) int ComputerButtonItem_Init(void) { return 0; }
__attribute__((weak)) int ComputerButtonItem_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int ComputerButtonItem_OnEvent(void) { return 0; }
__attribute__((weak)) struct status_msg* ComputerButtonItem_Process_2(float a1, int a2, int a3, int a4, int a5, int a6, char a7, float a8, float a9, char a10, void * a11, char * a12, unsigned int a13, unsigned int a14, unsigned int a15, int a16) { return 0; }
__attribute__((weak)) void * AI_SelectTarget_28(void * a1, float a2, int a3) { return 0; }
__attribute__((weak)) int ComputerTextItem_Init(void) { return 0; }
__attribute__((weak)) int ComputerTextItem_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int ComputerTextItem_OnEvent(void) { return 0; }
__attribute__((weak)) struct status_msg* ComputerTextItem_Process_2(void * a1, int a2, int a3, int a4, int a5, int a6, char a7, unsigned int a8, unsigned int a9, void * a10, char * a11, unsigned int a12, int a13) { return 0; }
__attribute__((weak)) int Computer_Init(void) { return 0; }
__attribute__((weak)) int Computer_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Computer_Setup(void * a1) { return 0; }
__attribute__((weak)) int Computer_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int AI_UpdateSensors_28(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_CheckSector_28(void * a1) { return 0; }
__attribute__((weak)) int AI_UpdatePatrol_29(void) { return 0; }
__attribute__((weak)) int AI_CombatTarget_29(void) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_29(void) { return 0; }
__attribute__((weak)) int AI_CheckHearing_29(void) { return 0; }
__attribute__((weak)) int AI_FireWeapon_29(int a1) { return 0; }
__attribute__((weak)) int AI_MoveToNode_29(void) { return 0; }
__attribute__((weak)) int* GenericPickup_Init(void) { return 0; }
__attribute__((weak)) int GenericPickup_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int GenericPickup_Setup(void * a1) { return 0; }
__attribute__((weak)) void * GenericPickup_Process(float a1) { return 0; }
__attribute__((weak)) int GenericPickup_Update(void * a1) { return 0; }
__attribute__((weak)) int GenericPickup_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int GenericPickup_Action(void * a1, void * a2) { return 0; }
__attribute__((weak)) int GenericPickup_Cleanup(float a1, int a2) { return 0; }
__attribute__((weak)) void * GenericPickup_Cleanup_2(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int AI_TakeCover_29(void) { return 0; }
__attribute__((weak)) int AI_UpdateOrders_29(void) { return 0; }
__attribute__((weak)) struct status_msg* AI_AlertAllies_29(void * a1, int a2, float* a3, int a4) { return 0; }
__attribute__((weak)) int* GunPickup_Init(void) { return 0; }
__attribute__((weak)) int GunPickup_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int GunPickup_Setup(float a1) { return 0; }
__attribute__((weak)) int GunPickup_Update(void * a1) { return 0; }
__attribute__((weak)) int GunPickup_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int GunPickup_Action(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int AI_SelectTarget_29(void) { return 0; }
__attribute__((weak)) int AI_UpdateSensors_29(void) { return 0; }
__attribute__((weak)) int* AmmoPickup_Init(void) { return 0; }
__attribute__((weak)) int AmmoPickup_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int AmmoPickup_Setup(void * a1) { return 0; }
__attribute__((weak)) int AmmoPickup_Process(void * a1) { return 0; }
__attribute__((weak)) int AmmoPickup_Update(void * a1) { return 0; }
__attribute__((weak)) int AmmoPickup_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int AI_CheckSector_29(void) { return 0; }
__attribute__((weak)) int* AddAmmo_Init(void) { return 0; }
__attribute__((weak)) int AddAmmo_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) unsigned int AddAmmo_OnEvent(void) { return 0; }
__attribute__((weak)) void * Gunx2_Init(void) { return 0; }
__attribute__((weak)) unsigned int AI_UpdatePatrol_30(void) { return 0; }
__attribute__((weak)) void * KnifeStab_Init(void) { return 0; }
__attribute__((weak)) int KnifeStab_Update(int* a1, float a2) { return 0; }
__attribute__((weak)) unsigned int AI_CombatTarget_30(void) { return 0; }
__attribute__((weak)) int* AIStationaryGunHolder_Init(void) { return 0; }
__attribute__((weak)) void * AIStationaryGunHolder_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int* AIStationaryGunHolder_Setup(void * a1) { return 0; }
__attribute__((weak)) char * AIStationaryGunHolder_Process(float a1) { return 0; }
__attribute__((weak)) int AI_CheckVisibility_30(void) { return 0; }
__attribute__((weak)) int AI_CheckHearing_30(void) { return 0; }
__attribute__((weak)) int* AIStationaryGun_LoadParameters(double* a1, float a2) { return 0; }
__attribute__((weak)) void * AI_FireWeapon_30(double* a1, float* a2) { return 0; }
__attribute__((weak)) void * AIStationaryGun_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* AIStationaryGun_Setup(long double a1, float a2) { return 0; }
__attribute__((weak)) void * AI_MoveToNode_30(int a1, char a2) { return 0; }
__attribute__((weak)) int AI_TakeCover_30(void * a1) { return 0; }
__attribute__((weak)) int AIStationaryGun_Process(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int* a8) { return 0; }
__attribute__((weak)) int AIStationaryGun_Update(double* a1, int* a2) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip(double* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_ComputeAccuracy(void) { return 0; }
__attribute__((weak)) int Weapon_EjectShell(void) { return 0; }
__attribute__((weak)) void * Medipack_Init(void) { return 0; }
__attribute__((weak)) void * Medipack_Update(int* a1) { return 0; }
__attribute__((weak)) unsigned int Medipack_OnEvent(void) { return 0; }
__attribute__((weak)) void * Binocular_Init(void) { return 0; }
__attribute__((weak)) int* Binocular_LoadParameters(void * a1, int a2) { return 0; }
__attribute__((weak)) int Binocular_Setup(void * a1) { return 0; }
__attribute__((weak)) int* Binocular_Process(void * a1) { return 0; }
__attribute__((weak)) int Binocular_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int* Binocular_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* Binocular_Action(void * a1, int a2) { return 0; }
__attribute__((weak)) int Binocular_Cleanup_2(int a1) { return 0; }
__attribute__((weak)) float Binocular_Cleanup_3(int* a1)  { return 0; }
__attribute__((weak)) unsigned int Weapon_UpdateRecoil(void) { return 0; }
__attribute__((weak)) float* Weapon_UpdateMuzzleFlash(float* a1, float* a2, float* a3, double* a4) { return 0; }
__attribute__((weak)) void * Weapon_UpdateBarrel(void * a1, float* a2, float* a3, float a4) { return 0; }
__attribute__((weak)) int* BinocularOverlay_Init(void) { return 0; }
__attribute__((weak)) int Weapon_EjectMagazine(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Weapon_UpdateZoom(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* BinocularOverlay_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int* BinocularOverlay_Action(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int BinocularOverlay_Setup(void * a1) { return 0; }
__attribute__((weak)) int* BinocularOverlay_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int BinocularOverlay_Process(void * a1) { return 0; }
__attribute__((weak)) int Weapon_WeaponsStringsBinocu(void * a1) { return 0; }
__attribute__((weak)) int Weapon_CycleFireMode(float* a1, int* a2) { return 0; }
__attribute__((weak)) int Weapon_CheckAmmo(float a1, float a2, float a3, float a4, float a5, float a6, int a7) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_2(void * a1) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip_2(void * a1, int a2, float a3, int a4, int* a5, int a6, int a7, int a8) { return 0; }
__attribute__((weak)) int Weapon_ComputeAccuracy_2(void * a1) { return 0; }
__attribute__((weak)) int BinocularOverlay_Update(void * a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_EjectShell_2(void) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_UpdateRecoil_2(void * a1) { return 0; }
__attribute__((weak)) int Weapon_UpdateMuzzleFlash_2(int a1, int a2) { return 0; }
__attribute__((weak)) int* Weapon_UpdateBarrel_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * GunCABarrel_Init(void) { return 0; }
__attribute__((weak)) int* GunCABarrel_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * GunCABarrel_Update(void * a1) { return 0; }
__attribute__((weak)) void * GunCABarrel_OnEvent(double* a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_EjectMagazine_2(void) { return 0; }
__attribute__((weak)) void * GunSPAS12_Init(void) { return 0; }
__attribute__((weak)) unsigned int Weapon_UpdateZoom_2(void) { return 0; }
__attribute__((weak)) char * GunDRAGUNOV_Init(void) { return 0; }
__attribute__((weak)) void * GunDRAGUNOV_LoadParameters(float* a1, void * a2) { return 0; }
__attribute__((weak)) int GunDRAGUNOV_Setup(float a1, int a2) { return 0; }
__attribute__((weak)) float* GunDRAGUNOV_Process(float a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_CycleFireMode_2(void) { return 0; }
__attribute__((weak)) void * GunM16A2_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* GunM16A2_LoadParameters(void * a1, void * a2) { return 0; }
__attribute__((weak)) int GunM16A2_Setup(int a1, float a2) { return 0; }
__attribute__((weak)) int GunM16A2_Process(long double a1, long double a2, long double a3, int* a4) { return 0; }
__attribute__((weak)) void * GunM16A2_Update(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_CheckAmmo_2(void) { return 0; }
__attribute__((weak)) int GunMP5SD_Process(void * a1) { return 0; }
__attribute__((weak)) void * GunMP5SD_Init(void) { return 0; }
__attribute__((weak)) float GunMP5SD_LoadParameters(float* a1, float a2)  { return 0; }
__attribute__((weak)) float* GunMP5SD_Setup(float a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_FireBullet_3(void) { return 0; }
__attribute__((weak)) int* StationaryGun_Init(void) { return 0; }
__attribute__((weak)) unsigned int StationaryGun_LoadParameters(float a1) { return 0; }
__attribute__((weak)) void * Gun_SpawnRound(void * a1, char a2) { return 0; }
__attribute__((weak)) void * Weapon_ComputeAccuracy_3(double* a1) { return 0; }
__attribute__((weak)) float Weapon_EjectShell_3(float a1)  { return 0; }
__attribute__((weak)) void * StationaryGun_Setup(void * a1) { return 0; }
__attribute__((weak)) float* Weapon_UpdateRecoil_3(void * a1) { return 0; }
__attribute__((weak)) int StationaryGun_Process(double* a1, void * a2) { return 0; }
__attribute__((weak)) void * StationaryGun_Update(double* a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_CycleFireMode_3(void) { return 0; }
__attribute__((weak)) int Weapon_CheckAmmo_3(void) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_4(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip_4(void * a1) { return 0; }
__attribute__((weak)) void * Weapon_ComputeAccuracy_4(void * a1) { return 0; }
__attribute__((weak)) void * ProximityMine_Init(void) { return 0; }
__attribute__((weak)) int Binocular_Process_2(float a1, int* a2) { return 0; }
__attribute__((weak)) void * ProximityMine_Setup(void * a1, char * a2) { return 0; }
__attribute__((weak)) int ProximityMine_Process(long double a1, long double a2, long double a3, long double a4, int* a5) { return 0; }
__attribute__((weak)) int* ProximityMine_Update(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_EjectShell_4(void) { return 0; }
__attribute__((weak)) void * Mine_Init(void) { return 0; }
__attribute__((weak)) int Mine_LoadParameters(void * a1, int a2) { return 0; }
__attribute__((weak)) int Mine_Setup(int a1) { return 0; }
__attribute__((weak)) int Mine_Process(void * a1, int a2) { return 0; }
__attribute__((weak)) struct status_msg* Mine_Update(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Mine_OnEvent(float a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_UpdateRecoil_4(void) { return 0; }
__attribute__((weak)) int Weapon_UpdateMuzzleFlash_4(void) { return 0; }
__attribute__((weak)) struct status_msg* Mine_ProximityCreate(void * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9) { return 0; }
__attribute__((weak)) char * M203_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* M203_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int M203_Setup(int* a1) { return 0; }
__attribute__((weak)) int* M203_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_UpdateBarrel_4(void) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EjectMagazine_4(void * a1, void * a2, void * a3, int a4, int a5, int* a6, char * a7, int a8, int a9) { return 0; }
__attribute__((weak)) void * Grenade_Init(void) { return 0; }
__attribute__((weak)) int* Grenade_Action(int* a1) { return 0; }
__attribute__((weak)) int* Grenade_LoadParameters(float a1) { return 0; }
__attribute__((weak)) unsigned int Grenade_Setup(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_GrenadeBnc1(void * a1) { return 0; }
__attribute__((weak)) int* Weapon_UpdateZoom_4(int a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) float Weapon_CycleFireMode_4(float a1)  { return 0; }
__attribute__((weak)) int Grenade_Process(void * a1) { return 0; }
__attribute__((weak)) int Grenade_Update(float a1, float a2) { return 0; }
__attribute__((weak)) struct status_msg* Grenade_OnEvent(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_CheckAmmo_4(void) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_5(void) { return 0; }
__attribute__((weak)) struct status_msg* Throwable_Create(float a1, void * a2, double* a3, int a4, int* a5, void * a6, int a7) { return 0; }
__attribute__((weak)) void * GunClip_Init(void) { return 0; }
__attribute__((weak)) int GunClip_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * GunClip_Action(void * a1, int* a2) { return 0; }
__attribute__((weak)) int GunClip_OnEvent(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Weapon_FlameUpdate(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* GunClip_Cleanup(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * GunCABarrel_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_ReloadClip_5(void) { return 0; }
__attribute__((weak)) int Weapon_ComputeAccuracy_5(void) { return 0; }
__attribute__((weak)) int Weapon_EjectShell_5(void) { return 0; }
__attribute__((weak)) int Weapon_FiringStateGet(void) { return 0; }
__attribute__((weak)) int Weapon_UpdateRecoil_5(void) { return 0; }
__attribute__((weak)) int Weapon_UpdateMuzzleFlash_5(void) { return 0; }
__attribute__((weak)) int Weapon_UpdateBarrel_5(void) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EntityCreate(void * a1, short a2, int* a3, int a4, char a5) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EjectMagazine_5(float a1, float a2, int* a3, int a4, char * a5) { return 0; }
__attribute__((weak)) void * Gun_Init(void) { return 0; }
__attribute__((weak)) void * Gun_Cleanup(void * a1) { return 0; }
__attribute__((weak)) void * Weapon_UpdateZoom_5(void * a1) { return 0; }
__attribute__((weak)) unsigned int Gun_Tick(int* a1) { return 0; }
__attribute__((weak)) int Gun_Setup(void * a1) { return 0; }
__attribute__((weak)) int Weapon_CycleFireMode_5(void * a1) { return 0; }
__attribute__((weak)) int Weapon_FireUpdate(int a1, int* a2) { return 0; }
__attribute__((weak)) void * Gun_Update(void * a1) { return 0; }
__attribute__((weak)) int* Gun_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int Gun_Cleanup_2(float a1, double** a2) { return 0; }
__attribute__((weak)) struct status_msg* Gun_Fire(double* a1, char * a2) { return 0; }
__attribute__((weak)) int Gun_FireMessage(float a1, void * a2) { return 0; }
__attribute__((weak)) char * Gun_MagFill(int* a1, char * a2) { return 0; }
__attribute__((weak)) void ** Weapon_ReloadStart(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Gun_Cleanup_3(float a1) { return 0; }
__attribute__((weak)) void ** Gun_Cleanup_4(void * a1, float* a2) { return 0; }
__attribute__((weak)) int Gun_Cleanup_5(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Weapon_CheckAmmo_5(int* a1, int a2) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_6(void * a1, float a2) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip_6(int* a1, float a2) { return 0; }
__attribute__((weak)) int Weapon_ComputeAccuracy_6(int a1, float a2) { return 0; }
__attribute__((weak)) int Gun_Cleanup_6(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* Gun_Cleanup_7(void * a1, int a2) { return 0; }
__attribute__((weak)) int Gun_Cleanup_8(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_EjectShell_6(void) { return 0; }
__attribute__((weak)) int Weapon_UpdateRecoil_6(float* a1, float* a2, int a3, int a4) { return 0; }
__attribute__((weak)) void * GunShot_Update(int a1) { return 0; }
__attribute__((weak)) int Weapon_UpdateBarrel_6(void) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EjectMagazine_6(void * a1, void * a2, void * a3) { return 0; }
__attribute__((weak)) int* Weapon_UpdateZoom_6(int* a1, int a2) { return 0; }
__attribute__((weak)) int GunShot_TakeSlot(void * a1, int a2, int* a3, void * a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Weapon_CycleFireMode_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Weapon_CheckAmmo_6(double* a1, int a2, void * a3, double* a4) { return 0; }
__attribute__((weak)) void * GunShot_Init(void) { return 0; }
__attribute__((weak)) void * GunShot_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int GunShot_Setup(int* a1) { return 0; }
__attribute__((weak)) int Gun_CastRound(void * a1) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_7(int a1) { return 0; }
__attribute__((weak)) void * GunShot_Process(void * a1) { return 0; }
__attribute__((weak)) int GunShot_Unpack(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_ReloadClip_7(void) { return 0; }
__attribute__((weak)) void * Weapon_ComputeAccuracy_7(void * a1, int a2, int a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Weapon_EjectShell_7(void * a1) { return 0; }
__attribute__((weak)) int* Weapon_UpdateRecoil_7(float* a1, int* a2, int a3, int a4, int a5, int a6, int a7, int a8, int* a9) { return 0; }
__attribute__((weak)) void * Weapon_UpdateMuzzleFlash_7(void * a1, int a2) { return 0; }
__attribute__((weak)) void AmmoType_Open(void) { return; }
__attribute__((weak)) int Ammo_TypeOpen(void) { return 0; }
__attribute__((weak)) int Define_AmmoType(long double a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Weapon_UpdateBarrel_7(void) { return 0; }
__attribute__((weak)) int Weapon_LocalAmmo(void) { return 0; }
__attribute__((weak)) void Weapon_EjectMagazine_7(void) { return; }
__attribute__((weak)) int Weapon_UpdateZoom_7(void) { return 0; }
__attribute__((weak)) int* Weapon_CycleFireMode_7(int a1) { return 0; }
__attribute__((weak)) void * Weapon_CheckAmmo_7(int a1) { return 0; }
__attribute__((weak)) int Weapon_FireBullet_8(int a1) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip_8(void) { return 0; }
__attribute__((weak)) int* Weapon_ComputeAccuracy_8(int* a1) { return 0; }
__attribute__((weak)) int* Weapon_EjectShell_8(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) void ** Weapon_UpdateRecoil_8(int* a1, int a2, void * a3) { return 0; }
__attribute__((weak)) int* Weapon_UpdateMuzzleFlash_8(int* a1, int a2) { return 0; }
__attribute__((weak)) void Weapon_UpdateBarrel_8(void) { return; }
__attribute__((weak)) int Weapon_AmmoId(void) { return 0; }
__attribute__((weak)) unsigned int Weapon_EjectMagazine_8(void) { return 0; }
__attribute__((weak)) int BulletHole_Init(void) { return 0; }
__attribute__((weak)) int BulletHole_Setup(void * a1, int a2) { return 0; }
__attribute__((weak)) int Weapon_UpdateZoom_8(double* a1, float* a2, void * a3, int* a4, void * a5, int a6, int a7, float a8) { return 0; }
__attribute__((weak)) int BulletHole_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Weapon_CycleFireMode_8(void) { return 0; }
__attribute__((weak)) int Weapon_CheckAmmo_8(void) { return 0; }
__attribute__((weak)) char * FlashBang_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* FlashBang_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int FlashBang_Setup(int* a1) { return 0; }
__attribute__((weak)) unsigned int Weapon_FireBullet_9(void) { return 0; }
__attribute__((weak)) int Weapon_ReloadClip_9(void) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_ComputeAccuracy_9(int* a1, int* a2, unsigned int a3, unsigned int a4) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EjectShell_9(int a1, int a2, int* a3, int a4, short a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Weapon_UpdateRecoil_9(void * a1, float a2) { return 0; }
__attribute__((weak)) int Weapon_UpdateMuzzleFlash_9(void * a1) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_UpdateBarrel_9(void * a1, int a2, int a3, int a4, float a5) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_EjectMagazine_9(int a1, unsigned int a2, unsigned int a3) { return 0; }
__attribute__((weak)) struct status_msg* Weapon_1006011(int* a1) { return 0; }
__attribute__((weak)) struct status_msg* FX_VirmodelIsNull(double* a1, char * a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) char * Explosion0_Init(void) { return 0; }
__attribute__((weak)) int Explosion0_Cleanup(int a1) { return 0; }
__attribute__((weak)) int Explosion0_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) int Explosion0_Process(float a1) { return 0; }
__attribute__((weak)) int Explosion0_OnEvent(int a1) { return 0; }
__attribute__((weak)) int Explosion0_Update(float a1) { return 0; }
__attribute__((weak)) void * Explosion0_Action(void * a1) { return 0; }
__attribute__((weak)) unsigned int Explosion0_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) unsigned int FX_FragmentSimulate(void) { return 0; }
__attribute__((weak)) struct status_msg* FX_SmokeEmit(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7, unsigned int a8, unsigned int a9, int* a10, int a11, int a12, int* a13, int a14, int a15, unsigned int a16) { return 0; }
__attribute__((weak)) struct status_msg* FX_DebrisSpawn(int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, int a7, unsigned int a8, unsigned int a9, int* a10, int a11, int a12, int* a13, int a14, int a15, int* a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20) { return 0; }
__attribute__((weak)) int FX_TrailUpdate(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_2(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_2(void * a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int* ExplodeObject_Init(void) { return 0; }
__attribute__((weak)) int* ExplodeObject_LoadParameters(float a1) { return 0; }
__attribute__((weak)) void * ExplodeObject_Setup(int80_t a1, double* a2) { return 0; }
__attribute__((weak)) struct status_msg* FX_1009011(double* a1) { return 0; }
__attribute__((weak)) void * ExplodeObject_Process(void * a1) { return 0; }
__attribute__((weak)) float* ExplodeObject_Update(void * a1) { return 0; }
__attribute__((weak)) int ExplodeObject_OnEvent(float a1, float a2) { return 0; }
__attribute__((weak)) int ExplodeObject_Action(void * a1) { return 0; }
__attribute__((weak)) int ExplodeObject_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int ExplodeObject_Cleanup_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) int ExplodeObject_Cleanup_3(float a1, void * a2) { return 0; }
__attribute__((weak)) void * ExplodeObject_Cleanup_4(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int FX_SmokeEmit_2(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_2(void * a1) { return 0; }
__attribute__((weak)) char * HumanCamera_Init(void) { return 0; }
__attribute__((weak)) int* FX_ErrorInHumancameraHu(void * a1) { return 0; }
__attribute__((weak)) void * Human_FindNextCamera(void * a1) { return 0; }
__attribute__((weak)) int FX_ErrorInHumancameraHu_2(void * a1) { return 0; }
__attribute__((weak)) void * FX_ErrorInHumancameraHu_3(void * a1) { return 0; }
__attribute__((weak)) void * FX_TrailUpdate_2(void * a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_3(void * a1) { return 0; }
__attribute__((weak)) void * FX_FireBallUpdate_3(void * a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_3(void * a1) { return 0; }
__attribute__((weak)) float FX_SmokeEmit_3(void * a1)  { return 0; }
__attribute__((weak)) float* FX_DebrisSpawn_3(float* a1, double* a2, double* a3) { return 0; }
__attribute__((weak)) void * FX_TrailUpdate_3(void * a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_4(void * a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_4(void * a1) { return 0; }
__attribute__((weak)) int* FX_FragmentSimulate_4(void * a1, double* a2) { return 0; }
__attribute__((weak)) void * FX_SmokeEmit_4(void * a1) { return 0; }
__attribute__((weak)) int* FX_DebrisSpawn_4(void * a1) { return 0; }
__attribute__((weak)) int* FX_TrailUpdate_4(void * a1, float a2, float a3) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_5(void * a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_5(void * a1) { return 0; }
__attribute__((weak)) char * FX_HumancameraHumanlist(void) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_5(void) { return 0; }
__attribute__((weak)) struct status_msg* FX_SmokeEmit_5(void * a1, unsigned int a2) { return 0; }
__attribute__((weak)) void * FX_ErrorInHumancameraHu_4(void * a1, int a2) { return 0; }
__attribute__((weak)) int* FX_DebrisSpawn_5(void * a1) { return 0; }
__attribute__((weak)) int* FX_ErrorInHumancameraHu_5(int a1) { return 0; }
__attribute__((weak)) int Mission_Open(int* a1) { return 0; }
__attribute__((weak)) int FX_Definemission(void) { return 0; }
__attribute__((weak)) int Define_Mission(int a1, float a2) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_5(void) { return 0; }
__attribute__((weak)) int FX_LocalMissions(void) { return 0; }
__attribute__((weak)) void * FX_ExplosionSpawn_6(int a1) { return 0; }
__attribute__((weak)) int GameScreen_Init(void) { return 0; }
__attribute__((weak)) unsigned int GameScreen_Update(void) { return 0; }
__attribute__((weak)) struct status_msg* GameScreen_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int GameScreen_Process(void * a1) { return 0; }
__attribute__((weak)) int* StatusMessage_Init(void) { return 0; }
__attribute__((weak)) int* StatusMessage_LoadParameters(long double a1, int* a2) { return 0; }
__attribute__((weak)) void * StatusMessage_Setup(void * a1) { return 0; }
__attribute__((weak)) int StatusMessage_Process(void * a1) { return 0; }
__attribute__((weak)) int StatusMessage_Update_2(void * a1) { return 0; }
__attribute__((weak)) int StatusMessage_OnEvent_2(void * a1) { return 0; }
__attribute__((weak)) unsigned int FX_FireBallUpdate_6(void) { return 0; }
__attribute__((weak)) struct status_msg* StatusMessage_ShowFull(void * ctx, char * message, char * sprite, char * style) { return 0; }
__attribute__((weak)) void * StatusMessageScreen_Init(void) { return 0; }
__attribute__((weak)) void StatusMessageScreen_ClearMessages(void) { return; }
__attribute__((weak)) int StatusMessageScreen_OnEvent(int a1, int a2) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_6(int a1, int a2) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_6(int a1, int a2) { return 0; }
__attribute__((weak)) char * __stdcall FX_DebrisSpawn_6(int a1, int a2, float a3) { return 0; }
__attribute__((weak)) void * FX_Font4Fnt(int a1, int a2) { return 0; }
__attribute__((weak)) int StatusMessageScreen_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_6(int a1, int a2, float a3, float a4) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_7(int a1, int a2, float a3, float a4, int a5) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_7(int a1, int a2, int a3, float a4) { return 0; }
__attribute__((weak)) unsigned int FX_FragmentSimulate_7(void) { return 0; }
__attribute__((weak)) struct status_msg* FX_SmokeEmit_7(void * a1) { return 0; }
__attribute__((weak)) char * FX_RmS(char (** a1)[0x16], void * a2) { return 0; }
__attribute__((weak)) int* FX_LanguageMessagesRes(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_7(void) { return 0; }
__attribute__((weak)) void FX_TrailUpdate_7(void * a1) { return; }
__attribute__((weak)) int StatusScreen_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* StatusScreen_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* StatusScreen_Setup(void) { return 0; }
__attribute__((weak)) int FX_Statusscreen(void) { return 0; }
__attribute__((weak)) struct status_msg* FX_FragmentSimulate_8(void * a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_8(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_8(void) { return 0; }
__attribute__((weak)) void FX_TrailUpdate_8(void) { return; }
__attribute__((weak)) void FX_ExplosionSpawn_9(void) { return; }
__attribute__((weak)) int FX_FireBallUpdate_9(void * a1, int a2) { return 0; }
__attribute__((weak)) void * FX_FragmentSimulate_9(void * a1) { return 0; }
__attribute__((weak)) int* ConditionalContainer_Init(void) { return 0; }
__attribute__((weak)) int* ConditionalContainer_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* ConditionalContainer_Tick(int* a1) { return 0; }
__attribute__((weak)) char * ConditionalContainer_Process(void * a1) { return 0; }
__attribute__((weak)) int ConditionalContainer_Update(void * a1) { return 0; }
__attribute__((weak)) int ConditionalContainer_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int ConditionalContainer_Action(void * a1) { return 0; }
__attribute__((weak)) int ConditionalContainer_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int ConditionalContainer_Cleanup_2(void * a1, int a2) { return 0; }
__attribute__((weak)) int ConditionalContainer_Cleanup_3(void * a1, int a2) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_9(void) { return 0; }
__attribute__((weak)) int* GuardGenerator_Init(void) { return 0; }
__attribute__((weak)) int GuardGenerator_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* GuardGenerator_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) void * FX_TrailUpdate_9(void * a1) { return 0; }
__attribute__((weak)) unsigned int FX_ExplosionSpawn_10(struct status_msg* a1, void * a2) { return 0; }
__attribute__((weak)) char * GuardGenerator_Process(void * a1) { return 0; }
__attribute__((weak)) void * FX_FireBallUpdate_10(void * a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_10(void * a1) { return 0; }
__attribute__((weak)) int GuardGenerator_Update(void * a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_10(void * a1) { return 0; }
__attribute__((weak)) void ** FX_DebrisSpawn_10(void * a1, void * a2) { return 0; }
__attribute__((weak)) int GuardGenerator_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int GuardGenerator_Action(void * a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_10(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_11(void) { return 0; }
__attribute__((weak)) int* SubLevel_Init(void) { return 0; }
__attribute__((weak)) int* SubLevel_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int SubLevel_OnEvent(void) { return 0; }
__attribute__((weak)) int* EditVariable_Init(void) { return 0; }
__attribute__((weak)) int EditVariable_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* EditVariable_Setup(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) char * EditVariable_Process(void * a1) { return 0; }
__attribute__((weak)) int EditVariable_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int EditVariable_Action(void * a1) { return 0; }
__attribute__((weak)) int EditVariable_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int FX_FireBallUpdate_11(void) { return 0; }
__attribute__((weak)) void * LevelFlow_Init(void) { return 0; }
__attribute__((weak)) int LevelFlow_GetBreakCutSceneKey(int a1) { return 0; }
__attribute__((weak)) int LevelFlow_LevelFailed(int a1) { return 0; }
__attribute__((weak)) int LevelFlow_IsCountryUSA(int a1) { return 0; }
__attribute__((weak)) int LevelFlow_Process(void * a1) { return 0; }
__attribute__((weak)) int LevelFlow_Update(void * a1) { return 0; }
__attribute__((weak)) int LevelFlow_LoadParameters(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int LevelFlow_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int FX_FragmentSimulate_11(void) { return 0; }
__attribute__((weak)) void * FX_SmokeEmit_11(void) { return 0; }
__attribute__((weak)) void * FX_DebrisSpawn_11(void) { return 0; }
__attribute__((weak)) long double FX_TrailUpdate_11(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_12(void) { return 0; }
__attribute__((weak)) int* FX_FireBallUpdate_12(int* a1) { return 0; }
__attribute__((weak)) int* FX_FragmentSimulate_12(int a1, void * a2, void * a3, int a4) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_12(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_12(void) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_12(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_13(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_13(void) { return 0; }
__attribute__((weak)) int FX_AidetectionQtaskMask(short a1) { return 0; }
__attribute__((weak)) int* FX_FragmentSimulate_13(int a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_13(int a1) { return 0; }
__attribute__((weak)) char * FX_DebrisSpawn_13(int* a1, int a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) void * Car_DetectionSweep(void * a1, double* a2, float a3, int a4) { return 0; }
__attribute__((weak)) int AI_TestCandidate(void * a1, void * a2, double* a3, double* a4, float a5) { return 0; }
__attribute__((weak)) int AI_BuildEyeSnapshot(long double a1, long double a2, long double a3, double* a4, double* a5) { return 0; }
__attribute__((weak)) int AI_LineOfSight(float a1, double* a2, int a3, double* a4) { return 0; }
__attribute__((weak)) int* FX_TrailUpdate_13(void * a1) { return 0; }
__attribute__((weak)) int* FX_ExplosionSpawn_14(void * a1, int a2) { return 0; }
__attribute__((weak)) int* FX_FireBallUpdate_14(void * a1, int a2) { return 0; }
__attribute__((weak)) int FX_000011(void * a1, int* a2) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_14(void * a1, int a2) { return 0; }
__attribute__((weak)) int* FX_SmokeEmit_14(void * a1) { return 0; }
__attribute__((weak)) int Human_StateAnimation(void * a1, int a2, float a3) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_14(int a1, int a2, int a3, float a4) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_14(int a1, int a2, int a3, float a4) { return 0; }
__attribute__((weak)) void ** FX_ExplosionSpawn_15(void * a1, float a2) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_15(void * a1, int a2, int a3, float a4) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_15(void * a1) { return 0; }
__attribute__((weak)) float FX_SmokeEmit_15(float a1)  { return 0; }
__attribute__((weak)) void * FX_DebrisSpawn_15(void * a1) { return 0; }
__attribute__((weak)) void * FX_TrailUpdate_15(void * a1) { return 0; }
__attribute__((weak)) float* FX_ExplosionSpawn_16(float* a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int* LoadingScreen_Show(int a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_16(void * a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_16(int* a1, int a2) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_16(int a1) { return 0; }
__attribute__((weak)) void * FX_DebrisSpawn_16(void) { return 0; }
__attribute__((weak)) int* FX_TrailUpdate_16(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_17(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_17(void) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_17(void) { return 0; }
__attribute__((weak)) int* FX_SmokeEmit_17(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* FX_DebrisSpawn_17(void * a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_17(float a1) { return 0; }
__attribute__((weak)) int* Patrol_CombatStart(void * a1, void * a2) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_18(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* Named_Combat(int* a1, int* a2) { return 0; }
__attribute__((weak)) void * FX_FireBallUpdate_18(int a1, void * a2, int a3, int a4) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_18(int* a1, void * a2) { return 0; }
__attribute__((weak)) void * __stdcall FX_FindfreepositionStac(void ** a1, int* a2, char a3, void * a4) { return 0; }
__attribute__((weak)) void * FX_SmokeEmit_18(void * a1, int* a2, char a3, char a4) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_18(float a1, void * a2) { return 0; }
__attribute__((weak)) int* FX_TrailUpdate_18(void * a1, void * a2, int* a3, int a4, int a5) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_19(void * a1) { return 0; }
__attribute__((weak)) unsigned int Combat_BeginBurst(int a1, char a2) { return 0; }
__attribute__((weak)) void * Combat_MobileC(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* CombatStand(int* a1, int* a2) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_19(void * a1, void * a2) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_19(int* a1, void * a2) { return 0; }
__attribute__((weak)) void * Combat_MobileA(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* CombatKneel(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* CombatLieDown_Dispatch(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* RePosition(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * CombatFollow_Install(void * a1) { return 0; }
__attribute__((weak)) int* Combat_Follow(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* LookForTarget(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* RPG_CombatStand(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* RPG_CombatKneel(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Guard_CombatStart(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* Guard_CombatStand(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Gunner_Combat(long double a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_19(void * a1) { return 0; }
__attribute__((weak)) bool FX_StandRollLeft(void * a1) { return 0; }
__attribute__((weak)) bool FX_StandRollRight(void * a1) { return 0; }
__attribute__((weak)) bool StandFire(void * a1) { return 0; }
__attribute__((weak)) int Combat_RunFire(void * a1) { return 0; }
__attribute__((weak)) int Combat_Reload(void * a1) { return 0; }
__attribute__((weak)) bool CloseCombat(void * a1) { return 0; }
__attribute__((weak)) int FX_StandThrowingGrenade(void * a1) { return 0; }
__attribute__((weak)) bool FX_KneelRollLeft(void * a1) { return 0; }
__attribute__((weak)) bool FX_KneelRollRight(void * a1) { return 0; }
__attribute__((weak)) bool FX_KneelFire(void * a1) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_19(void * a1) { return 0; }
__attribute__((weak)) bool FX_LiedownFire(void * a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_19(void * a1) { return 0; }
__attribute__((weak)) int CombatPlayAnimation(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AIAction_PlaySound_Run(void * a1, int* a2) { return 0; }
__attribute__((weak)) int FX_MoveToEventD(int a1, int* a2) { return 0; }
__attribute__((weak)) int* FX_ExplosionSpawn_20(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* AIAction_Stunned_Run(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AIAction_KickGrenade_Run(int a1) { return 0; }
__attribute__((weak)) int* __stdcall FX_FireBallUpdate_20(void * a1, int* a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_20(void * a1, int* a2, double* a3) { return 0; }
__attribute__((weak)) int FX_RunPanicking(void * a1, int* a2) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_20(float a1) { return 0; }
__attribute__((weak)) int* SetCombat_Run(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* FX_LevelQtaskIdDNotDefi(int* a1, void * const a2) { return 0; }
__attribute__((weak)) int* FX_DebrisSpawn_20(int a1, int* a2) { return 0; }
__attribute__((weak)) int* FX_TrailUpdate_20(void * a1) { return 0; }
__attribute__((weak)) int* Patrol_Tick(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* FX_ExplosionSpawn_21(void * a1, int* a2) { return 0; }
__attribute__((weak)) int FX_WalkToNodeD(int a1, int* a2) { return 0; }
__attribute__((weak)) int FX_RunToNodeD(int a1, int* a2) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_21(int a1, int* a2) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_21(int a1, int* a2) { return 0; }
__attribute__((weak)) void * AI_WriteChannel(void * a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Locomotion_GetState(void * a1, int a2) { return 0; }
__attribute__((weak)) int FX_Germany(void) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_21(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_21(void) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_21(void) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_22(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_22(void) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_22(int a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_22(int a1) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_22(int a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_22(int a1) { return 0; }
__attribute__((weak)) BOOL FX_ExplosionSpawn_23(BOOL a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_23(char a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_23(void) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_23(int a1) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_23(void) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_23(int a1, int a2) { return 0; }
__attribute__((weak)) int App_ContextSetDebugged(char a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_24(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_24(char a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_24(void) { return 0; }
__attribute__((weak)) int App_ContextSetDebugtextState(char a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_24(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_24(int a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_24(int a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_25(void) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_25(void) { return 0; }
__attribute__((weak)) int App_ContextSetLightmapsUsed(char a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_25(void) { return 0; }
__attribute__((weak)) int App_ContextSetTerrainLightmapsUsed(char a1) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_25(void) { return 0; }
__attribute__((weak)) int FX_DebrisSpawn_25(int a1) { return 0; }
__attribute__((weak)) int FX_TrailUpdate_25(int a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_26(int a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_26(int a1) { return 0; }
__attribute__((weak)) int FX_FragmentSimulate_26(void) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_26(void) { return 0; }
__attribute__((weak)) void FX_DebrisSpawn_26(void) { return; }
__attribute__((weak)) int FX_TrailUpdate_26(int a1) { return 0; }
__attribute__((weak)) int FX_ExplosionSpawn_27(int a1) { return 0; }
__attribute__((weak)) int FX_FireBallUpdate_27(void) { return 0; }
__attribute__((weak)) void * FX_FragmentSimulate_27(char * a1, int a2) { return 0; }
__attribute__((weak)) int FX_SmokeEmit_27(char a1) { return 0; }
__attribute__((weak)) void * FX_FailedToRegisterWinp(int a1) { return 0; }
__attribute__((weak)) int* FX_UnableToRemoveWinpro(int a1) { return 0; }
__attribute__((weak)) WPARAM __stdcall FX_Igimutex(HINSTANCE a1, int a2) { return 0; }
__attribute__((weak)) int DIERR_GENERIC(int a1) { return 0; }
__attribute__((weak)) int FX_FailedGetMouseStateS(void) { return 0; }
__attribute__((weak)) int FX_CouldNotGetMouseCaps(void) { return 0; }
__attribute__((weak)) void * FX_CouldNotCreateDirect(void) { return 0; }
__attribute__((weak)) int* FX_DebrisSpawn_27(void) { return 0; }
__attribute__((weak)) void * FX_CouldNotCreateDirect_2(void) { return 0; }
__attribute__((weak)) int Display_OpenDevice(int a1, int a2) { return 0; }
__attribute__((weak)) int Display_CloseDevice(void) { return 0; }
__attribute__((weak)) int* Display_SetDisplayMode(void) { return 0; }
__attribute__((weak)) int Display_SyncVSync(void) { return 0; }
__attribute__((weak)) int Display_SwapBuffers(char a1) { return 0; }
__attribute__((weak)) unsigned int Display_ClearSurfaces(void) { return 0; }
__attribute__((weak)) int Display_RestoreDevice(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities(void) { return 0; }
__attribute__((weak)) void __stdcall Display_SetGammaRamp(void) { return; }
__attribute__((weak)) int Display_CreateSurface(void * a1) { return 0; }
__attribute__((weak)) int Display_OpenDevice_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) HRESULT Display_CloseDevice_2(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * Display_CouldnTReadPixelForm(void * a1) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_2(void * a1, int a2) { return 0; }
__attribute__((weak)) bool Display_SyncVSync_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) HRESULT Display_SwapBuffers_2(int a1, int a2, float a3) { return 0; }
__attribute__((weak)) HRESULT Display_ClearSurfaces_2(void * a1, int a2, unsigned int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_2(float a1) { return 0; }
__attribute__((weak)) int Display_CouldnTReadPixelForm_2(void * a1) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_2(void) { return 0; }
__attribute__((weak)) void Display_SetGammaRamp_2(int a1, int a2, int* a3) { return; }
__attribute__((weak)) char * Display_CreateSurface_2(char * a1, int* a2) { return 0; }
__attribute__((weak)) char * Display_OpenDevice_3(char * a1, int* a2) { return 0; }
__attribute__((weak)) int Display_CloseDevice_3(int a1, int a2) { return 0; }
__attribute__((weak)) int* Display_SetDisplayMode_3(int a1) { return 0; }
__attribute__((weak)) int* Display_NoMoreDisplayCallbac(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Display_SyncVSync_3(int a1) { return 0; }
__attribute__((weak)) int* Display_SwapBuffers_3(int a1) { return 0; }
__attribute__((weak)) int* Display_ClearSurfaces_3(int a1) { return 0; }
__attribute__((weak)) int Display_DisplayCanOnlyBeOpen(void) { return 0; }
__attribute__((weak)) int* Display_RestoreDevice_3(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_3(void) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_3(void * a1, char a2, int a3) { return 0; }
__attribute__((weak)) int Display_CreateSurface_3(void) { return 0; }
__attribute__((weak)) int Display_OpenDevice_4(int a1) { return 0; }
__attribute__((weak)) int Display_SetMode(void * a1) { return 0; }
__attribute__((weak)) void Display_CloseDevice_4(int* a1) { return; }
__attribute__((weak)) int Display_SetDisplayMode_4(void) { return 0; }
__attribute__((weak)) void Display_GetActiveMode(void) { return; }
__attribute__((weak)) int Display_SyncVSync_4(void) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_4(void) { return 0; }
__attribute__((weak)) long double Display_ClearSurfaces_4(void) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_4(void * a1) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_4(int a1) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_4(void) { return 0; }
__attribute__((weak)) int Display_CreateSurface_4(void) { return 0; }
__attribute__((weak)) int Display_OpenDevice_5(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_5(void) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_5(void) { return 0; }
__attribute__((weak)) int Display_SyncVSync_5(void) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_5(void) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_5(void) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_5(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_5(void) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_5(void) { return 0; }
__attribute__((weak)) int Display_CreateSurface_5(void) { return 0; }
__attribute__((weak)) unsigned int Display_SetBackgroundColourFn(char a1, char a2, char a3) { return 0; }
__attribute__((weak)) int Display_OpenDevice_6(int a1, int a2) { return 0; }
__attribute__((weak)) HRESULT Display_CloseDevice_6(int a1) { return 0; }
__attribute__((weak)) int __stdcall Display_SetDisplayMode_6(GUID* a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int __stdcall Display_SyncVSync_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int __stdcall Display_SwapBuffers_6(char * a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int Display_08X04X04X02X02X02X02(char * a1, int a2, short a3, short a4, char a5, char a6, char a7, char a8, char a9, char a10, char a11, char a12) { return 0; }
__attribute__((weak)) int DDERR_GENERIC(int a1) { return 0; }
__attribute__((weak)) int* Display_Direct3D(void) { return 0; }
__attribute__((weak)) int Display_CouldnTCreateDynamic(void) { return 0; }
__attribute__((weak)) int* Display_ClearSurfaces_6(void) { return 0; }
__attribute__((weak)) int Display_CouldnTSetClippingWi(void * a1) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_6(void * a1) { return 0; }
__attribute__((weak)) int Display_Display(int a1, int a2, int a3, int a4, void * a5, int* a6) { return 0; }
__attribute__((weak)) int __stdcall Display_CreateSurface_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Display_OpenDevice_7(void) { return 0; }
__attribute__((weak)) int Display_FailedToLockFramebuf(void * a1) { return 0; }
__attribute__((weak)) void * Display_SyncVSync_7(void * a1) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_7(HWND a1, int a2, int a3, void * a4) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_7(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_7(void) { return 0; }
__attribute__((weak)) int* Display_SetGammaRamp_7(int* a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int* Display_CreateSurface_7(int a1) { return 0; }
__attribute__((weak)) int* Display_NoMoreDirect3DCallba(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Display_OpenDevice_8(int a1) { return 0; }
__attribute__((weak)) int* Display_CloseDevice_8(int a1) { return 0; }
__attribute__((weak)) int* Display_SetDisplayMode_8(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Display_SyncVSync_8(int a1) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_8(void) { return 0; }
__attribute__((weak)) unsigned int Display_Cdaudio(void) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_8(void) { return 0; }
__attribute__((weak)) int* Display_CheckCapabilities_8(void * a1) { return 0; }
__attribute__((weak)) int* Display_SetGammaRamp_8(int* a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Display_CdAudio(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_9(void) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_9(void) { return 0; }
__attribute__((weak)) int Display_SyncVSync_9(void) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_9(void) { return 0; }
__attribute__((weak)) unsigned int Display_ClearSurfaces_9(HMIXEROBJ a1, void * a2, void * a3, int a4, int a5) { return 0; }
__attribute__((weak)) int* Display_RestoreDevice_9(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_9(void) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_9(int a1) { return 0; }
__attribute__((weak)) int Display_CreateSurface_9(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Display_OpenDevice_10(void) { return 0; }
__attribute__((weak)) int __fastcall Display_CloseDevice_10(int a1) { return 0; }
__attribute__((weak)) int Music_SetVolume(float a1, float a2) { return 0; }
__attribute__((weak)) int Music_SetSfxVolume(int a1) { return 0; }
__attribute__((weak)) unsigned int __fastcall Display_SetDisplayMode_10(int a1) { return 0; }
__attribute__((weak)) int Display_SoundFileSNotValidFo(int* a1) { return 0; }
__attribute__((weak)) int Display_SyncVSync_10(int a1, int a2, int a3, void ** a4) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_10(char * a1, char * a2, int a3, short* a4) { return 0; }
__attribute__((weak)) short* Display_ClearSurfaces_10(short* a1, short a2) { return 0; }
__attribute__((weak)) int* Display_RestoreDevice_10(int a1, int a2) { return 0; }
__attribute__((weak)) int* Display_CheckCapabilities_10(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_10(void * a1, int* a2, char a3) { return 0; }
__attribute__((weak)) int* Display_CreateSurface_10(int* a1) { return 0; }
__attribute__((weak)) int* Display_OpenDevice_11(int* a1) { return 0; }
__attribute__((weak)) int Display_CloseDevice_11(int* a1) { return 0; }
__attribute__((weak)) int* Display_SetDisplayMode_11(int* a1, int** a2) { return 0; }
__attribute__((weak)) int Display_SyncVSync_11(int a1, int a2, int a3, void * a4) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_11(int a1, int a2, int a3, int* a4) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_11(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_11(int a1, int a2) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_11(char * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int Display_CreateSurface_11(int a1, void * a2, int a3, int a4) { return 0; }
__attribute__((weak)) long double Display_OpenDevice_12(int a1, int a2) { return 0; }
__attribute__((weak)) int Display_CloseDevice_12(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_12(void * a1) { return 0; }
__attribute__((weak)) char Display_SyncVSync_12(int a1, int* a2) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_12(int a1) { return 0; }
__attribute__((weak)) char * Display_SoundInvalidFilename(char * a1, char * a2) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_12(char * a1) { return 0; }
__attribute__((weak)) unsigned int Display_CheckCapabilities_12(char * a1) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_12(int* a1) { return 0; }
__attribute__((weak)) int* Display_CreateSurface_12(int* a1) { return 0; }
__attribute__((weak)) int Display_OpenDevice_13(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_13(void * a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_13(void) { return 0; }
__attribute__((weak)) int* Display_SyncVSync_13(void * a1, int a2) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_13(void * a1) { return 0; }
__attribute__((weak)) int* Display_ClearSurfaces_13(int* a1, int a2) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_13(void) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_13(void * a1, int* a2) { return 0; }
__attribute__((weak)) void Display_SetGammaRamp_13(void) { return; }
__attribute__((weak)) int** Display_CreateSurface_13(int a1, int a2) { return 0; }
__attribute__((weak)) int Display_OpenDevice_14(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_14(int a1) { return 0; }
__attribute__((weak)) void Display_SetDisplayMode_14(void ** a1) { return; }
__attribute__((weak)) int Display_SyncVSync_14(void * a1) { return 0; }
__attribute__((weak)) int* Display_SwapBuffers_14(int* a1, int a2) { return 0; }
__attribute__((weak)) int** Display_ClearSurfaces_14(int a1, int* a2) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_14(int a1) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_14(int a1) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_14(int a1, int a2) { return 0; }
__attribute__((weak)) int Display_CreateSurface_14(int a1) { return 0; }
__attribute__((weak)) int Display_Transcontextprimitiv(void) { return 0; }
__attribute__((weak)) int Display_CouldnTSetViewport(void ** a1) { return 0; }
__attribute__((weak)) int Display_OpenDevice_15(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_15(int* a1, int a2, int a3, float a4) { return 0; }
__attribute__((weak)) void * Display_SetDisplayMode_15(void * a1, float a2) { return 0; }
__attribute__((weak)) int Transcontext_SetActiveTransContext(int* a1) { return 0; }
__attribute__((weak)) int Display_SyncVSync_15(void) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_15(void) { return 0; }
__attribute__((weak)) int** Display_ClearSurfaces_15(int a1) { return 0; }
__attribute__((weak)) float* Display_RestoreDevice_15(float* a1, float* a2, double* a3) { return 0; }
__attribute__((weak)) float* Display_CheckCapabilities_15(float* a1, float* a2) { return 0; }
__attribute__((weak)) float* Display_SetGammaRamp_15(float* a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Display_CreateSurface_15(void) { return 0; }
__attribute__((weak)) int Display_Offscreenbuffer(void) { return 0; }
__attribute__((weak)) int Display_OpenDevice_16(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_16(void) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_16(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Display_SyncVSync_16(void * a1) { return 0; }
__attribute__((weak)) int* Display_SwapBuffers_16(int* a1) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_16(short a1) { return 0; }
__attribute__((weak)) BOOL Display_DinputDll(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_16(PSTR a1) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_16(void) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_16(void) { return 0; }
__attribute__((weak)) struct status_msg* Display_CreateSurface_16(unsigned int a1, int a2, int a3, float a4, float a5) { return 0; }
__attribute__((weak)) int Display_OpenDevice_17(int* a1, void * a2) { return 0; }
__attribute__((weak)) int* Rain_Init(void) { return 0; }
__attribute__((weak)) int Rain_Update(void * a1) { return 0; }
__attribute__((weak)) int Display_CloseDevice_17(float a1) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_17(float a1) { return 0; }
__attribute__((weak)) int Display_SyncVSync_17(void * a1, double a2) { return 0; }
__attribute__((weak)) unsigned int Display_SwapBuffers_17(void) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_17(float a1) { return 0; }
__attribute__((weak)) int Display_RestoreDevice_17(void * a1, char a2) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_17(void * a1, float a2) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_17(int a1) { return 0; }
__attribute__((weak)) int Display_CreateSurface_17(void) { return 0; }
__attribute__((weak)) void Display_OpenDevice_18(void) { return; }
__attribute__((weak)) int* Display_CloseDevice_18(int a1) { return 0; }
__attribute__((weak)) void * Display_SetDisplayMode_18(float a1, int a2, void * a3, int* a4) { return 0; }
__attribute__((weak)) int Display_SyncVSync_18(void) { return 0; }
__attribute__((weak)) void * PolyListDynCubeObj_Setup(void * a1) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_18(int* a1) { return 0; }
__attribute__((weak)) void ** PolyListDynCubeObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Display_ClearSurfaces_18(int a1, int a2) { return 0; }
__attribute__((weak)) struct status_msg* Display_RestoreDevice_18(unsigned int a1, void * a2, int a3, int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, char * a10, unsigned int a11) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_18(void * a1, int a2) { return 0; }
__attribute__((weak)) int PolyListDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) int PolyListDynCubeObj_OnEvent(void) { return 0; }
__attribute__((weak)) int PolyListDynCubeObj_Process(int a1, void * a2) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_18(void) { return 0; }
__attribute__((weak)) int Display_CreateSurface_18(float a1, float a2) { return 0; }
__attribute__((weak)) void * Display_OpenDevice_19(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * Display_MeshFormatNotSupport(void * a1) { return 0; }
__attribute__((weak)) int Bone_PaletteSkinner(void * a1, int a2, float a3, int a4) { return 0; }
__attribute__((weak)) int Display_CloseDevice_19(void) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_19(void) { return 0; }
__attribute__((weak)) int* Display_SyncVSync_19(void * a1, void * a2) { return 0; }
__attribute__((weak)) void Display_ClearSurfaces_19(void) { return; }
__attribute__((weak)) int Display_RestoreDevice_19(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Display_CheckCapabilities_19(int* a1, float a2) { return 0; }
__attribute__((weak)) int Display_SetGammaRamp_19(void) { return 0; }
__attribute__((weak)) int Display_CreateSurface_19(void) { return 0; }
__attribute__((weak)) int Display_OpenDevice_20(void) { return 0; }
__attribute__((weak)) int Display_CloseDevice_20(void) { return 0; }
__attribute__((weak)) int Display_SetDisplayMode_20(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* Display_SyncVSync_20(double* a1) { return 0; }
__attribute__((weak)) int Display_SwapBuffers_20(double* a1) { return 0; }
__attribute__((weak)) int* Mesh_SkinBones(int* a1) { return 0; }
__attribute__((weak)) int* Display_ClearSurfaces_20(int* a1) { return 0; }
__attribute__((weak)) int* Display_RestoreDevice_20(float a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform(void) { return 0; }
__attribute__((weak)) int RigidDynCubeObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView(float a1, int a2, float a3, int a4, float a5, int a6, float* a7, float a8) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter(void) { return 0; }
__attribute__((weak)) int* Camera_ApplyBandFilter(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Camera_ApplyHandiCam(void) { return 0; }
__attribute__((weak)) struct status_msg* Camera_ApplyWideScreen(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6) { return 0; }
__attribute__((weak)) struct status_msg* Camera_ApplyPostProcess(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10) { return 0; }
__attribute__((weak)) struct status_msg* Camera_UpdateViewCone(void * a1, unsigned int a2, float a3, float a4, float a5, unsigned int a6, unsigned int a7, unsigned int a8) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix(void * a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_2(void * a1) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_2(unsigned int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_2(void * a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_2(int a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_2(void) { return 0; }
__attribute__((weak)) struct status_msg* Camera_ApplyWideScreen_2(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup_2(void * a1) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_2(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_2(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int BandFilter_Init(void) { return 0; }
__attribute__((weak)) int DrawLineFilter(int a1, void * a2) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup_3(void * a1) { return 0; }
__attribute__((weak)) void * BandFilter_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup_4(void * a1) { return 0; }
__attribute__((weak)) int** BandFilter_Update(void * a1) { return 0; }
__attribute__((weak)) void * BandFilter_Action(float a1) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup_5(int a1) { return 0; }
__attribute__((weak)) float DrawBandFilter(int* a1)  { return 0; }
__attribute__((weak)) int DrawHandiCamFilter(int a1, void * a2) { return 0; }
__attribute__((weak)) int BandFilter_Cleanup_6(int a1) { return 0; }
__attribute__((weak)) unsigned int Camera_UpdateTransform_3(void) { return 0; }
__attribute__((weak)) void * Camera_SetFieldOfView_3(void * a1, float a2) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_3(int a1, int a2, int a3, int* a4, int a5, struct _EXCEPTION_REGISTRATION_RECORD* a6, int a7) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_3(int* a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_3(void) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_3(int a1) { return 0; }
__attribute__((weak)) void Camera_ResetMatrix_3(void) { return; }
__attribute__((weak)) int Camera_UpdateTransform_4(int* a1) { return 0; }
__attribute__((weak)) unsigned int Camera_SetFieldOfView_4(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_4(int* a1, void * a2, enum SET_FILE_POINTER_MOVE_METHOD a3) { return 0; }
__attribute__((weak)) int* Camera_ApplyBandFilter_4(PSTR a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int* File_Open(PSTR a1, char * a2) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_4(void) { return 0; }
__attribute__((weak)) void Camera_ApplyWideScreen_4(void) { return; }
__attribute__((weak)) int Camera_ApplyPostProcess_4(void) { return 0; }
__attribute__((weak)) int Game_DataSymbolLoad(char * a1, char * a2) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_4(char * a1) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_4(char * a1) { return 0; }
__attribute__((weak)) void * const Camera_UpdateTransform_5(int a1) { return 0; }
__attribute__((weak)) char * Camera_SetFieldOfView_5(int a1, char a2) { return 0; }
__attribute__((weak)) char * Camera_ApplyLineFilter_5(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) long double Camera_ApplyBandFilter_5(double a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_5(void) { return 0; }
__attribute__((weak)) long double Camera_ApplyWideScreen_5(long double a1, long double a2) { return 0; }
__attribute__((weak)) int String_VFormat(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int80_t Camera_ApplyPostProcess_5(long double a1, long double a2)  { return 0; }
__attribute__((weak)) long double Camera_UpdateViewCone_5(int a1, short a2, short a3, long double a4, int a5, int a6, int a7, char a8, int a9) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_5(long double a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_6(int a1, int a2, int a3, char * a4, char * a5) { return 0; }
__attribute__((weak)) void * Camera_SetFieldOfView_6(char * a1, char * a2) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_6(void) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_6(unsigned int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_6(unsigned int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_6(unsigned int a1, int a2, int a3) { return 0; }
__attribute__((weak)) void Camera_ApplyPostProcess_6(int* a1, int a2) { return; }
__attribute__((weak)) char * Camera_UpdateViewCone_6(char * a1, char * a2) { return 0; }
__attribute__((weak)) long double Camera_ResetMatrix_6(double a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_7(int a1) { return 0; }
__attribute__((weak)) void * Camera_SetFieldOfView_7(void * a1, int a2) { return 0; }
__attribute__((weak)) void Camera_ApplyLineFilter_7(int a1, void * a2) { return; }
__attribute__((weak)) int Camera_ApplyBandFilter_7(void) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_7(void * a1) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_7(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_7(int a1, EXCEPTION_POINTERS* a2) { return 0; }
__attribute__((weak)) int* Camera_UpdateViewCone_7(int a1) { return 0; }
__attribute__((weak)) char * Camera_ResetMatrix_7(void) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_8(void) { return 0; }
__attribute__((weak)) int __fastcall Camera_SetFieldOfView_8(int a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyLineFilter_8(char * a1, int* a2, char * a3, int* a4, int* a5) { return 0; }
__attribute__((weak)) PSTR Camera_ApplyBandFilter_8(void) { return 0; }
__attribute__((weak)) unsigned int Camera_ApplyHandiCam_8(void) { return 0; }
__attribute__((weak)) HMODULE Camera_ApplyWideScreen_8(int* a1) { return 0; }
__attribute__((weak)) int Camera_MsvcrtHeapSelect(void) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_8(int a1) { return 0; }
__attribute__((weak)) void * __stdcall Camera_UpdateViewCone_8(int* a1) { return 0; }
__attribute__((weak)) int* Camera_ResetMatrix_8(void) { return 0; }
__attribute__((weak)) int* Camera_ProgramNameUnknown(int a1) { return 0; }
__attribute__((weak)) void __fastcall Camera_UpdateTransform_9(void ** a1) { return; }
__attribute__((weak)) int Camera_SetFieldOfView_9(int a1) { return 0; }
__attribute__((weak)) char Camera_ApplyLineFilter_9(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_9(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_9(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_9(void) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_9(int a1) { return 0; }
__attribute__((weak)) unsigned int Camera_UpdateViewCone_9(int* a1) { return 0; }
__attribute__((weak)) unsigned int Camera_ResetMatrix_9(int a1, int a2, enum SET_FILE_POINTER_MOVE_METHOD a3) { return 0; }
__attribute__((weak)) void * Camera_UpdateTransform_10(int* a1) { return 0; }
__attribute__((weak)) int* Camera_SetFieldOfView_10(PSTR a1, char * a2, int a3, int* a4) { return 0; }
__attribute__((weak)) int* Camera_ApplyLineFilter_10(void) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_10(void) { return 0; }
__attribute__((weak)) void Camera_ApplyHandiCam_10(void) { return; }
__attribute__((weak)) int Camera_Kernel32(void) { return 0; }
__attribute__((weak)) unsigned int Camera_ApplyWideScreen_10(char * a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyPostProcess_10(int a1, int a2, int a3, int a4, int* a5) { return 0; }
__attribute__((weak)) char * Camera_E000(double* a1, char * a2, void * a3, int a4) { return 0; }
__attribute__((weak)) char * Camera_UpdateViewCone_10(double* a1, char * a2, int a3) { return 0; }
__attribute__((weak)) char * Camera_ResetMatrix_10(double* a1, char * a2, int a3, int a4) { return 0; }
__attribute__((weak)) char * Camera_UpdateTransform_11(double* a1, char * a2, void * a3, int a4) { return 0; }
__attribute__((weak)) char * Camera_SetFieldOfView_11(double* a1, char * a2, int a3) { return 0; }
__attribute__((weak)) char * Camera_ApplyLineFilter_11(double* a1, char * a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) void Camera_ApplyBandFilter_11(char * a1, int a2) { return; }
__attribute__((weak)) unsigned int Camera_ApplyHandiCam_11(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_11(int* a1, char * a2) { return 0; }
__attribute__((weak)) int* Camera_ApplyPostProcess_11(int a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int* Camera_UpdateViewCone_11(int a1, int* a2, int* a3, int* a4) { return 0; }
__attribute__((weak)) int* Camera_ResetMatrix_11(char * a1, int* a2, int* a3, int* a4) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_12(int* a1) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_12(int* a1) { return 0; }
__attribute__((weak)) void * Camera_ApplyLineFilter_12(int* a1) { return 0; }
__attribute__((weak)) BOOL Camera_ApplyBandFilter_12(int a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) long double Camera_ApplyHandiCam_12(int a1, int a2, int a3, int a4, double a5, int a6) { return 0; }
__attribute__((weak)) long double Camera_ApplyWideScreen_12(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) void Camera_ApplyPostProcess_12(void) { return; }
__attribute__((weak)) int Camera_UpdateViewCone_12(int a1, double* a2, char a3) { return 0; }
__attribute__((weak)) long double Camera_ResetMatrix_12(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_13(int a1) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_13(int a1) { return 0; }
__attribute__((weak)) void Camera_ApplyLineFilter_13(void) { return; }
__attribute__((weak)) void Camera_ApplyBandFilter_13(void) { return; }
__attribute__((weak)) void Camera_ApplyHandiCam_13(void) { return; }
__attribute__((weak)) void Camera_ApplyWideScreen_13(void) { return; }
__attribute__((weak)) long double Camera_ApplyPostProcess_13(double a1, int* a2) { return 0; }
__attribute__((weak)) void Camera_UpdateViewCone_13(void) { return; }
__attribute__((weak)) int Camera_ResetMatrix_13(void) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_14(short a1, int a2, int a3) { return 0; }
__attribute__((weak)) void Camera_SetFieldOfView_14(int80_t a1, char a2) { return; }
__attribute__((weak)) int80_t Camera_ApplyLineFilter_14(short a1, long double a2, long double a3)  { return 0; }
__attribute__((weak)) int80_t Camera_ApplyBandFilter_14(short a1, long double a2)  { return 0; }
__attribute__((weak)) long double Camera_ApplyHandiCam_14(short a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_14(void) { return 0; }
__attribute__((weak)) void Camera_ApplyPostProcess_14(void * a1, long double a2) { return; }
__attribute__((weak)) long double Camera_UpdateViewCone_14(short a1, int a2, int a3) { return 0; }
__attribute__((weak)) void Camera_ResetMatrix_14(void) { return; }
__attribute__((weak)) int __fastcall Camera_UpdateTransform_15(int a1, void * a2, void * a3, long double a4) { return 0; }
__attribute__((weak)) int __fastcall Camera_SetFieldOfView_15(int a1, void * a2, void * a3, long double a4, long double a5) { return 0; }
__attribute__((weak)) void Camera_ApplyLineFilter_15(void) { return; }
__attribute__((weak)) long double Camera_ApplyWideScreen_15(void * a1, int80_t a2) { return 0; }
__attribute__((weak)) long double Camera_ApplyPostProcess_15(void * a1, long double a2, int80_t a3) { return 0; }
__attribute__((weak)) long double Camera_ResetMatrix_15(void * a1, int80_t a2, long double a3) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_16(void) { return 0; }
__attribute__((weak)) int __fastcall Camera_SetFieldOfView_16(char a1, void * a2) { return 0; }
__attribute__((weak)) long double Camera_ApplyLineFilter_16(short a1, long double a2, long double a3) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_16(int a1) { return 0; }
__attribute__((weak)) int80_t Camera_ApplyHandiCam_16(long double a1, long double a2)  { return 0; }
__attribute__((weak)) int80_t Camera_ApplyWideScreen_16(long double a1, long double a2)  { return 0; }
__attribute__((weak)) int80_t Camera_ApplyPostProcess_16(long double a1, long double a2)  { return 0; }
__attribute__((weak)) long double Camera_UpdateViewCone_16(int a1, int a2, short a3, long double a4, int a5, long double a6, long double a7) { return 0; }
__attribute__((weak)) long double Camera_ResetMatrix_16(short a1, long double a2, long double a3) { return 0; }
__attribute__((weak)) long double Camera_UpdateTransform_17(int a1, int a2, short a3, long double a4, int a5, long double a6, long double a7) { return 0; }
__attribute__((weak)) long double Camera_SetFieldOfView_17(short a1, long double a2, long double a3) { return 0; }
__attribute__((weak)) int80_t Camera_ApplyLineFilter_17(void * a1, long double a2)  { return 0; }
__attribute__((weak)) int80_t __fastcall Camera_ApplyBandFilter_17(char a1)  { return 0; }
__attribute__((weak)) void __fastcall Camera_ApplyHandiCam_17(short a1, void * a2, long double a3) { return; }
__attribute__((weak)) int Camera_ApplyWideScreen_17(long double a1) { return 0; }
__attribute__((weak)) long double Camera_ApplyPostProcess_17(int a1, int a2, long double a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) long double Camera_UpdateViewCone_17(int a1, int a2, long double a3, int a4, int a5) { return 0; }
__attribute__((weak)) long double Camera_ResetMatrix_17(long double a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_18(int a1) { return 0; }
__attribute__((weak)) void Camera_SetFieldOfView_18(void) { return; }
__attribute__((weak)) long double __fastcall Camera_ApplyLineFilter_18(int a1, double* a2) { return 0; }
__attribute__((weak)) void Camera_ApplyBandFilter_18(void) { return; }
__attribute__((weak)) int Camera_ResetMatrix_18(double a1, int a2, int a3, double* a4) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_19(int a1, int a2, int a3, double a4) { return 0; }
__attribute__((weak)) unsigned int __fastcall Camera_SetFieldOfView_19(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_19(char a1) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_19(char a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_19(char a1, int a2, char a3) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_19(unsigned int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_19(int a1) { return 0; }
__attribute__((weak)) void Camera_UpdateViewCone_19(void) { return; }
__attribute__((weak)) int Camera_ResetMatrix_19(void) { return 0; }
__attribute__((weak)) void * Camera_UpdateTransform_20(void) { return 0; }
__attribute__((weak)) void Camera_SetFieldOfView_20(void) { return; }
__attribute__((weak)) char * Camera_ApplyLineFilter_20(char * a1, char * a2) { return 0; }
__attribute__((weak)) char * Camera_ApplyBandFilter_20(char * a1, char * a2) { return 0; }
__attribute__((weak)) void * Camera_ApplyHandiCam_20(int* a1) { return 0; }
__attribute__((weak)) void * Camera_ApplyWideScreen_20(int* a1, int a2) { return 0; }
__attribute__((weak)) void * Camera_ApplyPostProcess_20(int* a1) { return 0; }
__attribute__((weak)) void * Camera_UpdateViewCone_20(char * a1) { return 0; }
__attribute__((weak)) char * Camera_ResetMatrix_20(char * a1, char * a2, void * a3) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_21(char * a1, void ** a2, int a3) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_21(char * a1, void ** a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_21(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_21(int a1) { return 0; }
__attribute__((weak)) void * Camera_ApplyHandiCam_21(int a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyWideScreen_21(int* a1, int* a2) { return 0; }
__attribute__((weak)) void * Camera_ApplyPostProcess_21(int* a1) { return 0; }
__attribute__((weak)) int* Camera_UpdateViewCone_21(void) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_21(void * a1) { return 0; }
__attribute__((weak)) void ** Camera_UpdateTransform_22(void) { return 0; }
__attribute__((weak)) BOOL Camera_SetFieldOfView_22(int* a1) { return 0; }
__attribute__((weak)) void Camera_ApplyLineFilter_22(int a1) { return; }
__attribute__((weak)) int Camera_ApplyBandFilter_22(int a1, void *** a2, int* a3) { return 0; }
__attribute__((weak)) int* Camera_ApplyHandiCam_22(void * a1, int a2, char * a3) { return 0; }
__attribute__((weak)) void * Camera_ApplyWideScreen_22(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_22(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Camera_User32Dll(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Camera_UpdateViewCone_22(int a1) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_22(void) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_23(int a1, HANDLE a2) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_23(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_23(int a1) { return 0; }
__attribute__((weak)) enum WIN32_ERROR Camera_ApplyBandFilter_23(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_23(enum WIN32_ERROR a1, char * a2, unsigned int a3) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_23(void) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_23(void) { return 0; }
__attribute__((weak)) void * Camera_UpdateViewCone_23(int a1, unsigned int a2, unsigned int a3) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_23(int* a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_24(PSTR a1, int a2, char a3) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_24(short a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_24(int a1, int a2) { return 0; }
__attribute__((weak)) void Camera_ApplyBandFilter_24(void) { return; }
__attribute__((weak)) void Camera_ApplyWideScreen_24(void) { return; }
__attribute__((weak)) int Camera_ApplyPostProcess_24(int a1, int a2) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_24(int a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_24(int a1, int* a2) { return 0; }
__attribute__((weak)) int* Camera_UpdateTransform_25(int a1, int* a2) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_25(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyLineFilter_25(int* a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyBandFilter_25(int* a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_25(short* a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_25(short* a1, int* a2) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_25(short* a1, int* a2) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_25(int* a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_25(int* a1, int a2) { return 0; }
__attribute__((weak)) char * Camera_UpdateTransform_26(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int Camera_SetFieldOfView_26(void) { return 0; }
__attribute__((weak)) int* Camera_ApplyLineFilter_26(int* a1, int* a2) { return 0; }
__attribute__((weak)) char * Camera_ApplyBandFilter_26(char * a1, char a2, int a3) { return 0; }
__attribute__((weak)) char * Camera_ApplyHandiCam_26(char * a1, char * a2, void * a3) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_26(void) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_26(int a1) { return 0; }
__attribute__((weak)) BOOL Camera_UpdateViewCone_26(BOOL a1, wchar16 a2) { return 0; }
__attribute__((weak)) void Camera_ResetMatrix_26(void) { return; }
__attribute__((weak)) void Camera_UpdateTransform_27(void) { return; }
__attribute__((weak)) BOOL Camera_SetFieldOfView_27(unsigned int a1, unsigned char * a2, int a3, unsigned short* a4, unsigned int a5, unsigned int a6, int a7) { return 0; }
__attribute__((weak)) void Camera_ApplyLineFilter_27(void) { return; }
__attribute__((weak)) void Camera_ApplyHandiCam_27(void) { return; }
__attribute__((weak)) int Camera_ApplyWideScreen_27(int a1, int* a2, unsigned int a3) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_27(double a1, int a2) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_27(unsigned int a1, unsigned int a2, unsigned char * a3, void * a4, PSTR a5, int a6, unsigned int a7, int a8) { return 0; }
__attribute__((weak)) void Camera_ResetMatrix_27(void) { return; }
__attribute__((weak)) void Camera_SetFieldOfView_28(void) { return; }
__attribute__((weak)) void * Camera_ApplyBandFilter_28(char * a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_28(int a1) { return 0; }
__attribute__((weak)) unsigned int __fastcall Camera_ApplyWideScreen_28(int a1) { return 0; }
__attribute__((weak)) char * Camera_ApplyPostProcess_28(unsigned int a1, int a2) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_28(unsigned int a1, int a2) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_28(int a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_29(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* Camera_SetFieldOfView_29(int* a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyLineFilter_29(int* a1) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_29(char * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_29(short* a1, char ** a2, int a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Camera_1Snan(short a1, char * a2, char a3, char * a4) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_29(int a1, int a2) { return 0; }
__attribute__((weak)) short* Camera_ApplyPostProcess_29(short* a1, int* a2) { return 0; }
__attribute__((weak)) void Camera_UpdateViewCone_29(int a1, int a2, int a3) { return; }
__attribute__((weak)) void __stdcall Camera_ResetMatrix_29(void * TargetFrame, void * TargetIp, EXCEPTION_RECORD* ExceptionRecord, void * ReturnValue) { return; }
__attribute__((weak)) int Camera_SetFieldOfView_30(void) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_30(void) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_30(void) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyWideScreen_30(LPDDENUMCALLBACKEXA lpCallback, void * lpContext, unsigned int dwFlags) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyPostProcess_30(GUID* lpGuid, void ** lplpDD, GUID* iid, struct IUnknown pUnkOuter) { return 0; }
__attribute__((weak)) void __stdcall Camera_UpdateViewCone_30(void) { return; }
__attribute__((weak)) void __stdcall Camera_ResetMatrix_30(void) { return; }
__attribute__((weak)) unsigned int __stdcall Camera_UpdateTransform_31(struct IAVIFile pfile) { return 0; }
__attribute__((weak)) unsigned int __stdcall Camera_SetFieldOfView_31(struct IAVIStream pavi) { return 0; }
__attribute__((weak)) LRESULT __stdcall Camera_ApplyLineFilter_31(HIC hic) { return 0; }
__attribute__((weak)) LRESULT __stdcall Camera_ApplyBandFilter_31(HIC hic, unsigned int msg, unsigned int dw1, unsigned int dw2) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyHandiCam_31(struct IAVIStream pavi, int lPos, void * lpFormat, int* lpcbFormat) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyWideScreen_31(struct IAVIStream pavi, struct AVISTREAMINFOA* psi, int lSize) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyPostProcess_31(struct IAVIFile pfile, struct IAVIStream* ppavi, unsigned int fccType, int lParam) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_UpdateViewCone_31(struct IAVIFile pfile, struct AVIFILEINFOA* pfi, int lSize) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ResetMatrix_31(struct IAVIFile* ppfile, PSTR szFile, unsigned int uMode, GUID* lpHandler) { return 0; }
__attribute__((weak)) HIC __stdcall Camera_UpdateTransform_32(unsigned int fccType, unsigned int fccHandler, BITMAPINFOHEADER* lpbiIn, BITMAPINFOHEADER* lpbiOut, unsigned short wFlags) { return 0; }
__attribute__((weak)) unsigned int __stdcall Camera_SetFieldOfView_32(HIC hic, unsigned int dwFlags, BITMAPINFOHEADER* lpbiFormat, void * lpData, BITMAPINFOHEADER* lpbi, void * lpBits) { return 0; }
__attribute__((weak)) HRESULT __stdcall Camera_ApplyLineFilter_32(struct IAVIStream pavi, int lStart, int lSamples, void * lpBuffer, int cbBuffer, int* plBytes, int* plSamples) { return 0; }
__attribute__((weak)) int Error_Show(char * a1) { return 0; }
__attribute__((weak)) int Warning_Show(char * a1) { return 0; }
__attribute__((weak)) int Camera_ApplyBandFilter_32(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyHandiCam_32(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyWideScreen_32(int a1) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_32(int a1) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_32(int a1) { return 0; }
__attribute__((weak)) int Camera_ResetMatrix_32(int a1) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_33(void) { return 0; }
__attribute__((weak)) void * Camera_SetFieldOfView_33(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int* Camera_ApplyLineFilter_33(int* a1, int* a2) { return 0; }
__attribute__((weak)) void ** Camera_ApplyBandFilter_33(int* a1) { return 0; }
__attribute__((weak)) int* Camera_ApplyHandiCam_33(int* a1) { return 0; }
__attribute__((weak)) void * Camera_ApplyWideScreen_33(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int Camera_ApplyPostProcess_33(int* a1) { return 0; }
__attribute__((weak)) int Camera_UpdateViewCone_33(int* a1, int* a2, char * a3) { return 0; }
__attribute__((weak)) int* Camera_ResetMatrix_33(int a1, int* a2) { return 0; }
__attribute__((weak)) int Camera_UpdateTransform_34(int a1, char * a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory(int* a1, int* a2, int a3, int* a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Sys_FreeMemory(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream(int a1, int* a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock(int a1, int* a2, int* a3, int* a4, int* a5, int* a6) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode(int* a1, int* a2, int* a3, int a4, int* a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode(int* a1, int* a2, int* a3, char * a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Sys_PushStack(int* a1, int* a2, char * a3, int a4, int a5) { return 0; }
__attribute__((weak)) char * Sys_PopStack(char * a1, char * a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol(int* a1, int* a2, int* a3, char * a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Sys_CheckHeap(char * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_2(int a1, int a2, char * a3, int a4) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_2(int* allocation_record, int entry_size_bytes, int entry_count, int requested_alignment) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_2(int* a1) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_2(void) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_2(void) { return 0; }
__attribute__((weak)) int Mem_DeallocAll(void) { return 0; }
__attribute__((weak)) void * Mem_Alloc(int allocation_size_bytes, int requested_alignment) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_2(void * a1) { return 0; }
__attribute__((weak)) int QHash_ValueSet(void) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_2(void) { return 0; }
__attribute__((weak)) void * Qhash_Init(char a1) { return 0; }
__attribute__((weak)) void * Qhash_Reset(void) { return 0; }
__attribute__((weak)) int QHash_ValueGet(void) { return 0; }
__attribute__((weak)) int Sys_PushStack_2(void) { return 0; }
__attribute__((weak)) int Sys_RendermodeFailedToCr(int a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_2(int a1) { return 0; }
__attribute__((weak)) int Sys_RendermodeFailedToCr_2(int a1) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_2(int a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_2(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_3(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_3(int a1) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_3(void) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_3(void) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_3(void) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_3(int a1) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_3(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int QFile_AliasResolve(char * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int Sys_PushStack_3(void) { return 0; }
__attribute__((weak)) int QFile_DeviceIndex(void * a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_3(void) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_3(void) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_3(int a1, int a2) { return 0; }
__attribute__((weak)) int* Sys_AllocateMemory_4(void) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_4(char * a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_4(char * a1) { return 0; }
__attribute__((weak)) int Sys_IllegalDeviceNameInP(void * a1, int a2, void * a3) { return 0; }
__attribute__((weak)) int* QFile_ReadWrite(void * a1, char * a2) { return 0; }
__attribute__((weak)) int QFile_DeviceHandlerLookup(char * a1) { return 0; }
__attribute__((weak)) void Sys_ReadFileBlock_4(int* a1) { return; }
__attribute__((weak)) int Resource_Unpack(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_4(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_4(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_4(int* a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_4(int* a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_4(int* a1) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_4(int* a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_4(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_5(int a1, void * a2) { return 0; }
__attribute__((weak)) void * Resource_PackUnpack(void * a1, int* a2) { return 0; }
__attribute__((weak)) void ** Sys_FreeMemory_5(int a1) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_5(void * a1) { return 0; }
__attribute__((weak)) int* Sys_NoFilesLoadedAtAddre(int a1) { return 0; }
__attribute__((weak)) int QScript_Cleanup(void * a1) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_5(int a1) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_PushStack_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_5(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_PushStack_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_6(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_6(int a1, int a2) { return 0; }
__attribute__((weak)) void Sys_CheckHeap_6(void) { return; }
__attribute__((weak)) char * Sys_AllocateMemory_7(char * a1, int a2, char * a3) { return 0; }
__attribute__((weak)) char * Sys_FreeMemory_7(char * a1) { return 0; }
__attribute__((weak)) char * Sys_OpenFileStream_7(char * a1, int a2, int a3) { return 0; }
__attribute__((weak)) char * Sys_ReadFileBlock_7(char * a1, int a2, char * a3) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_7(int a1, int a2) { return 0; }
__attribute__((weak)) void Sys_ExecuteBytecode_7(void) { return; }
__attribute__((weak)) int Sys_DispatchOpcode_7(void * a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_7(void * a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_7(void * a1, int* a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_Alloctexture(void) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_7(void) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_7(int* a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_8(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_8(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_8(int a1, int a2, int a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Sys_SIsNotAValidTextureF(int* a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_8(int a1, int a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_8(void) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_8(int a1) { return 0; }
__attribute__((weak)) int __fastcall Sys_DispatchOpcode_8(int a1) { return 0; }
__attribute__((weak)) int __fastcall Sys_PushStack_8(int a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_8(void) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_8(void) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_8(void) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_9(void) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_9(void) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_9(void) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_9(void) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_9(int a1) { return 0; }
__attribute__((weak)) int* Sys_ExecuteBytecode_9(int* a1) { return 0; }
__attribute__((weak)) int80_t Sys_DispatchOpcode_9(float a1)  { return 0; }
__attribute__((weak)) int80_t Sys_PushStack_9(float a1)  { return 0; }
__attribute__((weak)) int80_t Sys_PopStack_9(double a1)  { return 0; }
__attribute__((weak)) int80_t Sys_ResolveSymbol_9(double a1)  { return 0; }
__attribute__((weak)) int Sys_CheckHeap_9(float* a1) { return 0; }
__attribute__((weak)) long double Sys_AllocateMemory_10(float* a1) { return 0; }
__attribute__((weak)) long double Sys_FreeMemory_10(float* a1, float* a2) { return 0; }
__attribute__((weak)) long double Sys_OpenFileStream_10(float* a1, float* a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_10(double* a1) { return 0; }
__attribute__((weak)) long double Sys_CloseFileStream_10(double* a1) { return 0; }
__attribute__((weak)) long double Sys_ExecuteBytecode_10(double* a1, double* a2) { return 0; }
__attribute__((weak)) long double Sys_DispatchOpcode_10(int* a1) { return 0; }
__attribute__((weak)) long double Sys_PushStack_10(float a1, float* a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_10(int* a1, float* a2, float* a3, float* a4) { return 0; }
__attribute__((weak)) float* Sys_ResolveSymbol_10(float* a1, float* a2, float* a3) { return 0; }
__attribute__((weak)) float* Sys_CheckHeap_10(float* a1, float* a2, float* a3, float* a4, float* a5, int* a6) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_11(double* a1, double a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_11(double* a1) { return 0; }
__attribute__((weak)) long double Sys_OpenFileStream_11(double* a1) { return 0; }
__attribute__((weak)) long double Sys_ReadFileBlock_11(double* a1) { return 0; }
__attribute__((weak)) double* Sys_CloseFileStream_11(int a1, double* a2, double* a3) { return 0; }
__attribute__((weak)) long double Sys_ExecuteBytecode_11(double* a1, double* a2) { return 0; }
__attribute__((weak)) long double Sys_DispatchOpcode_11(double* a1, double* a2) { return 0; }
__attribute__((weak)) long double Sys_PushStack_11(double* a1, double* a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_11(double* a1) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_11(double* a1, double* a2) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_11(int a1, float* a2, float a3, float a4, float a5) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_12(int a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_12(int a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_12(int a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_12(float* a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) int* Sys_CloseFileStream_12(int* a1, float a2) { return 0; }
__attribute__((weak)) float* Sys_ExecuteBytecode_12(float* a1, float a2) { return 0; }
__attribute__((weak)) float* Sys_DispatchOpcode_12(float* a1, float a2) { return 0; }
__attribute__((weak)) float* Sys_PushStack_12(float* a1, float a2, int a3, int a4) { return 0; }
__attribute__((weak)) float* Sys_Atan2UndefinedInOrig(float* a1, float* a2, float* a3, float* a4) { return 0; }
__attribute__((weak)) float* Sys_PopStack_12(float* a1, float a2, float a3) { return 0; }
__attribute__((weak)) float Sys_ResolveSymbol_12(int a1, int* a2)  { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_13(int a1, float a2) { return 0; }
__attribute__((weak)) float* Sys_CloseFileStream_13(float a1, float* a2, float* a3, float* a4, float* a5) { return 0; }
__attribute__((weak)) long double Sys_ExecuteBytecode_13(float* a1, float* a2) { return 0; }
__attribute__((weak)) float* Sys_DispatchOpcode_13(float* a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) float* Sys_PushStack_13(float* a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Sys_PopStack_13(void) { return 0; }
__attribute__((weak)) int* Sys_ResolveSymbol_13(int* a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_13(int* a1) { return 0; }
__attribute__((weak)) long double Sys_AllocateMemory_14(int* a1) { return 0; }
__attribute__((weak)) unsigned int Sys_FreeMemory_14(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_14(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, int a8, int a9, int a10, int a11) { return 0; }
__attribute__((weak)) int Sys_PushStack_14(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_14(int* a1, int a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_14(int* a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_15(int* a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10, int a11) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_15(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, float a10, float a11, float a12, int a13, int a14, int a15) { return 0; }
__attribute__((weak)) int Qsprite_Register4Az(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, float a10, float a11, float a12, int a13, int a14, int a15, int a16, int a17) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_15(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, float a20, int a21, int a22, int a23, int a24, int a25) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_15(float a1, float a2, int a3, float a4, float a5, int a6, float a7, float a8, float a9, float a10, float a11, float a12, int a13, int a14, int a15) { return 0; }
__attribute__((weak)) float Sys_DispatchOpcode_15(float* a1, float a2, float a3, float a4, int a5, float a6, float a7, float a8, int a9, float a10, float a11, float a12, int a13, int a14)  { return 0; }
__attribute__((weak)) int Sys_QvertexRegisterstrip(void) { return 0; }
__attribute__((weak)) int Sys_PushStack_15(void) { return 0; }
__attribute__((weak)) int* Sys_PopStack_15(char * a1, int a2, int* a3, int a4, int a5, int* a6) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_15(char * a1, char * a2) { return 0; }
__attribute__((weak)) unsigned int Sys_CheckHeap_15(char * a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_16(void * a1) { return 0; }
__attribute__((weak)) int Is_ResourceLoaded(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_16(int* a1) { return 0; }
__attribute__((weak)) void * Sys_OpenFileStream_16(void * a1, int a2, void * a3) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_16(void) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_16(void) { return 0; }
__attribute__((weak)) int* Sys_ExecuteBytecode_16(void) { return 0; }
__attribute__((weak)) int* Resource_Load(int a1, int a2, void * a3, int* a4) { return 0; }
__attribute__((weak)) int* Sys_Resource(char * a1, int* a2, void * a3) { return 0; }
__attribute__((weak)) int Sys_ErrorInResourceFileS(int a1, void * a2, void * a3, int* a4) { return 0; }
__attribute__((weak)) int Resource_Unload(int* a1) { return 0; }
__attribute__((weak)) int Resource_Flush(int a1) { return 0; }
__attribute__((weak)) int* Sys_DispatchOpcode_16(char * a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int Sys_PushStack_16(int* a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_16(FILETIME* a1, FILETIME* a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_16(int* a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_16(void * a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_17(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_17(void * a1, int a2, int a3, short a4, short a5, short a6, short a7, short a8, int a9, float a10, float a11, float a12, float a13) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_17(int* a1, char a2, short a3, short a4, short a5, short a6, short a7, int a8, int a9, int a10, int a11) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_17(int* a1) { return 0; }
__attribute__((weak)) int* Sys_IlfFileCorruptS(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_17(void * a1) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_17(void * a1) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_17(void * a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_17(void * a1) { return 0; }
__attribute__((weak)) int* Sys_PopStack_17(void * a1, int a2) { return 0; }
__attribute__((weak)) int* Sys_ResolveSymbol_17(int* a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_17(int* a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_18(int* a1) { return 0; }
__attribute__((weak)) int Picture_GetWidth(int* a1) { return 0; }
__attribute__((weak)) int Picture_GetHeight(int* a1) { return 0; }
__attribute__((weak)) void * Sys_FreeMemory_18(int* a1, char * a2) { return 0; }
__attribute__((weak)) int** Sys_OpenFileStream_18(void * a1, int a2, int a3, char * a4) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_18(int* a1) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_18(int* a1) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_18(int a1, float* a2) { return 0; }
__attribute__((weak)) int* Sys_DispatchOpcode_18(int* a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_18(int* a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_18(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_18(void * a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_18(void) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_19(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Sys_FreeMemory_19(int a1) { return 0; }
__attribute__((weak)) int** Sys_OpenFileStream_19(int a1) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_19(int a1) { return 0; }
__attribute__((weak)) int Sys_Sortrender(void) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_19(void) { return 0; }
__attribute__((weak)) int* Sys_ExecuteBytecode_19(int a1) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_19(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_PushStack_19(int a1, int a2) { return 0; }
__attribute__((weak)) void * Sys_PopStack_19(void * a1) { return 0; }
__attribute__((weak)) void * Sys_ResolveSymbol_19(void * a1) { return 0; }
__attribute__((weak)) void * Sys_CheckHeap_19(void * a1, void * a2) { return 0; }
__attribute__((weak)) void Sys_AllocateMemory_20(int* a1, int* a2, void * a3) { return; }
__attribute__((weak)) int Sys_FreeMemory_20(void * a1) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_20(int* a1) { return 0; }
__attribute__((weak)) int* Sys_ReadFileBlock_20(int* a1, int a2) { return 0; }
__attribute__((weak)) int* Sys_CloseFileStream_20(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* Sys_DispatchOpcode_20(int a1, int a2, void * a3) { return 0; }
__attribute__((weak)) int Sys_PushStack_20(void * a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_20(void * a1, int a2, int a3, char a4) { return 0; }
__attribute__((weak)) void * Sys_ResolveSymbol_20(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * Sys_CheckHeap_20(int* a1, void * a2) { return 0; }
__attribute__((weak)) void * Sys_AllocateMemory_21(int* a1, char * a2, int a3, void * a4) { return 0; }
__attribute__((weak)) char * Sys_FreeMemory_21(char * a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_21(float a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_21(void * a1) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_21(void * a1) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_21(void * a1) { return 0; }
__attribute__((weak)) int Sys_Allocpalette(void) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_21(void) { return 0; }
__attribute__((weak)) int Sys_PushStack_21(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_PopStack_21(int* a1) { return 0; }
__attribute__((weak)) int Sys_SIsNotAValidPaletteF(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_21(int* a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_21(int* a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_22(int* a1) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_22(char * a1) { return 0; }
__attribute__((weak)) void * SymbolRegister_Int16(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_22(int a1, int* a2) { return 0; }
__attribute__((weak)) void * SymbolRegister_Bool8(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_22(int a1, int a2) { return 0; }
__attribute__((weak)) void * Sys_CloseFileStream_22(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_22(int a1, int a2) { return 0; }
__attribute__((weak)) void * SymbolRegister_Int32(int* a1, int a2) { return 0; }
__attribute__((weak)) void * SymbolRegister_Real32(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_22(int a1, double* a2) { return 0; }
__attribute__((weak)) void * Sys_PushStack_22(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_PopStack_22(int a1, int a2) { return 0; }
__attribute__((weak)) int Game_DataSymbolRemoveThunk(char * a1) { return 0; }
__attribute__((weak)) int* Qvm_Load(void * a1) { return 0; }
__attribute__((weak)) int Qvm_Cleanup(int* a1) { return 0; }
__attribute__((weak)) int Qsc_Compile(void * a1) { return 0; }
__attribute__((weak)) int Qvm_Execute(void * a1) { return 0; }
__attribute__((weak)) char * Sys_ResolveSymbol_22(int a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_22(int a1) { return 0; }
__attribute__((weak)) void * TaskType_Set(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_23(int a1, int a2) { return 0; }
__attribute__((weak)) void * Sys_FreeMemory_23(int* a1, int a2) { return 0; }
__attribute__((weak)) void * Game_DefineOptions(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) void * Sys_OpenFileStream_23(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) void * Sys_ReadFileBlock_23(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_23(char * a1) { return 0; }
__attribute__((weak)) int Script_SetSymbolContext(char * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_23(int a1) { return 0; }
__attribute__((weak)) int Sys_ScriptStackUnderflow(int a1) { return 0; }
__attribute__((weak)) int Sys_ScriptStackOverflow(void) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_23(int a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_23(int a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_23(int a1) { return 0; }
__attribute__((weak)) int Script_GetArg(float a1, int a2) { return 0; }
__attribute__((weak)) int Profile_ValueSet(float a1, float a2) { return 0; }
__attribute__((weak)) char * Sys_ResolveSymbol_23(float a1, int a2, char * a3, char * a4) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_23(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_24(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_False(void) { return 0; }
__attribute__((weak)) int Break_Script(int a1) { return 0; }
__attribute__((weak)) int Script_SetWarningLevel(int a1, float a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_24(void) { return 0; }
__attribute__((weak)) char * Sys_SyntaxErrorInStringE(char * a1, short* a2, char * a3) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_24(long double a1, char * a2, void * a3) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_24(char * a1) { return 0; }
__attribute__((weak)) void Sys_DispatchOpcode_24(long double a1, long double a2, int a3) { return; }
__attribute__((weak)) void Sys_PushStack_24(char * a1) { return; }
__attribute__((weak)) int Sys_PopStack_24(int* a1, char ** a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_24(int* a1, char ** a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_24(int a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_25(int a1) { return 0; }
__attribute__((weak)) int Sys_ScriptInternalErrorU(int a1) { return 0; }
__attribute__((weak)) int* Sys_TooManyArgumentsToFu(int* a1, void * a2) { return 0; }
__attribute__((weak)) char * Sys_ScriptInternalErrorI(int a1, int* a2, int a3, char * a4) { return 0; }
__attribute__((weak)) int* Sys_FreeMemory_25(int a1) { return 0; }
__attribute__((weak)) void * Q_TaskHashTableSet(int* a1, int a2, int a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Sys_UndefinedSymbolS(char * a1) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_25(char * a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_25(void) { return 0; }
__attribute__((weak)) void ** Sys_ExecuteBytecode_25(char * a1) { return 0; }
__attribute__((weak)) void * Sys_DispatchOpcode_25(int a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_25(int* a1) { return 0; }
__attribute__((weak)) int Sys_PopStack_25(void) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_25(void) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_25(int* a1) { return 0; }
__attribute__((weak)) int* Sys_AllocateMemory_26(void * a1, int a2) { return 0; }
__attribute__((weak)) int* Sys_DuplicateLabelS(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_26(char * a1) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_26(int a1, int a2, int a3, void * a4, char * a5) { return 0; }
__attribute__((weak)) void ** Sys_ReadFileBlock_26(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_26(void * a1, void * a2) { return 0; }
__attribute__((weak)) char * Sys_ExecuteBytecode_26(int a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_26(int* a1, char * a2) { return 0; }
__attribute__((weak)) int Sys_PushStack_26(void * a1, int* a2) { return 0; }
__attribute__((weak)) int QScript_Assemble(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Log_Add(char * a1) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_26(void) { return 0; }
__attribute__((weak)) int QScript_ParseAndAssemble(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_26(char * a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_27(char * a1) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_27(int a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_27(int* a1) { return 0; }
__attribute__((weak)) int Sys_InternalErrorUnknown(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_27(char * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_27(int* a1, int a2) { return 0; }
__attribute__((weak)) void Sys_UnknownExpressionTyp(int* a1, char * a2) { return; }
__attribute__((weak)) int Sys_ExecuteBytecode_27(int* a1) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_27(int* a1, char * a2) { return 0; }
__attribute__((weak)) int Sys_PopStack_27(int* a1, int a2) { return 0; }
__attribute__((weak)) int Sys_ResolveSymbol_27(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_27(void) { return 0; }
__attribute__((weak)) int Sys_UnknownDataType(void * a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_28(int a1, int a2, int a3, float a4, int a5) { return 0; }
__attribute__((weak)) int Sys_UnknownDataType_2(char * a1, int a2, float a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_28(char * a1, int* a2, int* a3, int* a4) { return 0; }
__attribute__((weak)) int Sys_UnknownDataType_3(void * a1, int* a2, int* a3, int* a4) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_28(char * a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_28(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_28(int* a1, int* a2, float* a3) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_28(int* a1) { return 0; }
__attribute__((weak)) long double Sys_DispatchOpcode_28(int a1, int a2, float a3, float a4, int a5) { return 0; }
__attribute__((weak)) char * Sys_PushStack_28(float a1, int a2, char * a3, int a4) { return 0; }
__attribute__((weak)) void Sys_PopStack_28(void) { return; }
__attribute__((weak)) int Sys_UndefinedError(int* a1) { return 0; }
__attribute__((weak)) void ** Sys_ResolveSymbol_28(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_28(void * a1) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_29(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_29(int a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_29(void) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_29(void * a1) { return 0; }
__attribute__((weak)) void * Sys_CloseFileStream_29(int* a1) { return 0; }
__attribute__((weak)) void * Sys_ExecuteBytecode_29(void * a1) { return 0; }
__attribute__((weak)) void * Sys_DispatchOpcode_29(void * a1) { return 0; }
__attribute__((weak)) int Sys_PushStack_29(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Sys_PopStack_29(void * a1, float a2) { return 0; }
__attribute__((weak)) void * Sys_ResolveSymbol_29(int a1) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_29(int* a1, int* a2, int* a3, float* a4, float* a5) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_30(void * a1) { return 0; }
__attribute__((weak)) int Sys_FreeMemory_30(void * a1) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_30(void * a1) { return 0; }
__attribute__((weak)) int Sys_InternalError(int* a1) { return 0; }
__attribute__((weak)) int Sys_InternalError_2(int* a1) { return 0; }
__attribute__((weak)) int Sys_InternalError_3(int* a1) { return 0; }
__attribute__((weak)) int Sys_ReadFileBlock_30(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_30(int* a1) { return 0; }
__attribute__((weak)) int Sys_UnhandledOpcode(int* a1) { return 0; }
__attribute__((weak)) char * Sys_UnhandledOpcode_2(int* a1) { return 0; }
__attribute__((weak)) int Sys_ExecuteBytecode_30(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sys_DispatchOpcode_30(void * a1, int a2) { return 0; }
__attribute__((weak)) int* Sys_PushStack_30(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Sys_PopStack_30(void * a1) { return 0; }
__attribute__((weak)) int* Sys_ResolveSymbol_30(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Sys_CheckHeap_30(int a1) { return 0; }
__attribute__((weak)) int Sys_UnexpectedEndOfFile(int* a1, void ** a2) { return 0; }
__attribute__((weak)) int Sys_AllocateMemory_31(int* a1) { return 0; }
__attribute__((weak)) int Sys_While(void * a1) { return 0; }
__attribute__((weak)) int Sys_SyntaxErrorInLineD(int* a1, void ** a2) { return 0; }
__attribute__((weak)) int Sys_UnexpectedEndOfFile_2(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Sys_OpenFileStream_31(int* a1, int** a2) { return 0; }
__attribute__((weak)) void Sys_UnknownBlockType(void * a1) { return; }
__attribute__((weak)) int Sys_UnknownBlockType_2(void * a1) { return 0; }
__attribute__((weak)) void * Sys_ReadFileBlock_31(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Sys_CloseFileStream_31(int* a1, int* a2) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol(void * a1) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem(void * a1) { return 0; }
__attribute__((weak)) int* Script_BufInit(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem(int* a1) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject(int* a1) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile(void) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* DynObj_RemoveSymbol(int a1) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_2(int* a1) { return 0; }
__attribute__((weak)) void DynObj_FindSymbol_2(int* a1) { return; }
__attribute__((weak)) int Symbol_Remove(int* a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int DynObj_InsertHashItem_2(int* a1, int** a2, char * a3) { return 0; }
__attribute__((weak)) unsigned int DynObj_LookupHashItem_2(char * a1, int a2) { return 0; }
__attribute__((weak)) int Symbol_CheckRegister(int* a1, int* a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_2(int* a1, int* a2, char * a3) { return 0; }
__attribute__((weak)) int* DynObj_ParseConfigFile_2(int* a1) { return 0; }
__attribute__((weak)) void * DynObj_UpdateDynTree_2(void * a1, char * a2, int a3, int a4) { return 0; }
__attribute__((weak)) int* DynObj_LinkDynamicCube_2(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * DynObj_RemoveSymbol_2(void * a1) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_3(int a1, int a2, int a3, void * a4, int* a5) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_3(char * a1) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_3(void) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_3(int* a1, int* a2) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_3(int* a1, int* a2, char a3) { return 0; }
__attribute__((weak)) void ** DynObj_ParseConfigFile_3(void ** a1, int* a2) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_3(void) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_3(int* a1) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_3(float a1, int* a2) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_4(void * a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_4(int* a1, char * a2) { return 0; }
__attribute__((weak)) void * DynObj_InsertHashItem_4(int* a1, int* a2) { return 0; }
__attribute__((weak)) void AnimSound_LoadParameters(void) { return; }
__attribute__((weak)) int* DynObj_QtasklistIsFull(int* a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_TryingToRemoveUnrigi(int* a1, int a2) { return 0; }
__attribute__((weak)) int* DynObj_LookupHashItem_4(int a1) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_4(void * a1) { return 0; }
__attribute__((weak)) int* RigidDynCubeObj_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_4(int* a1) { return 0; }
__attribute__((weak)) void RigidDynCubeObj_Action(int* a1, float a2) { return; }
__attribute__((weak)) void * RigidDynCubeObj_Cleanup(void) { return 0; }
__attribute__((weak)) void DynObj_UpdateDynTree_4(void) { return; }
__attribute__((weak)) unsigned int RigidDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) void * RigidDynCubeObj_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Define_MagicObj(int a1, float a2) { return 0; }
__attribute__((weak)) void RigidDynCubeObj_Cleanup_2(int* a1, float a2) { return; }
__attribute__((weak)) int RigidDynCubeObj_Cleanup_3(float a1, double* a2) { return 0; }
__attribute__((weak)) unsigned int DynObj_FindSymbol_5(void) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_5(void) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_5(void * a1, int a2) { return 0; }
__attribute__((weak)) char * Rigid_DyncubeObjRead(char * a1) { return 0; }
__attribute__((weak)) int Magic_ObjLoad(void * a1) { return 0; }
__attribute__((weak)) int* Car_GunCreate(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_5(void) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_6(void) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_6(void) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_6(void) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_6(int a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_6(void) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_6(void) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_6(void) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_6(void) { return 0; }
__attribute__((weak)) int DynObj_InvalidDyncubetree(int a1) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_6(void) { return 0; }
__attribute__((weak)) void * DynObj_RegisterSymbol_7(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int DynObj_FindSymbol_7(void) { return 0; }
__attribute__((weak)) void * DynObj_InsertHashItem_7(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_LookupHashItem_7(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_7(int* a1) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_7(void * a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_7(void * a1) { return 0; }
__attribute__((weak)) void * DynObj_Createterrainmateria(void * a1, int a2) { return 0; }
__attribute__((weak)) int CreateTerrainMaterial(int a1, float a2) { return 0; }
__attribute__((weak)) int Create_TerrainTileMap(int a1, float a2) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_7(int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) void * DynObj_RemoveSymbol_7(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) void * DynObj_RegisterSymbol_8(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int WorldObject_CommitTransform(void * a1, void * a2, double* a3, float a4) { return 0; }
__attribute__((weak)) int* DynObj_FindSymbol_8(void * a1, int a2, int a3, int* a4) { return 0; }
__attribute__((weak)) void * DynObj_InsertHashItem_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * DynObj_LookupHashItem_8(void * a1, int* a2, void * a3, int a4, int a5, int a6, void * a7) { return 0; }
__attribute__((weak)) void * DynObj_ParseConfigFile_8(void * a1, void * a2) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_8(void * a1, void * a2, double* a3, double* a4, double* a5) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_8(void * a1, int* a2, double* a3, float a4, int a5) { return 0; }
__attribute__((weak)) int DynObj_InvalidCategory(int a1, short a2) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_8(void * a1, int* a2, double* a3, double* a4, double* a5, int a6) { return 0; }
__attribute__((weak)) void * DynObj_RegisterSymbol_9(int a1, void * a2) { return 0; }
__attribute__((weak)) void * const DynObj_FindSymbol_9(int a1, void * a2) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_9(int a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_9(void * a1) { return 0; }
__attribute__((weak)) unsigned int DynObj_CreateMagicObject_9(int a1, char a2, int a3, double* a4, double* a5, int a6, int a7) { return 0; }
__attribute__((weak)) unsigned int DynObj_ParseConfigFile_9(float a1, double* a2, void * const a3, float a4, double* a5, double* a6, char a7) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_9(short* a1, double* a2, double* a3, char a4, int* a5, int a6) { return 0; }
__attribute__((weak)) unsigned int DynObj_RemoveSymbol_9(int a1, int* a2, double* a3, unsigned int a4, char a5, int a6, int a7) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_10(void * a1, int* a2, double* a3, int a4) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_10(int* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_10(short* a1, double* a2, double* a3, double* a4, char a5, int* a6, int a7, int a8, float* a9) { return 0; }
__attribute__((weak)) int* DynObj_LookupHashItem_10(int a1, int* a2, double* a3, double* a4, double* a5, char a6, double* a7, int a8) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_10(void * a1, int* a2, double* a3, int a4, int a5, int a6, int a7) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_10(float a1, double* a2) { return 0; }
__attribute__((weak)) int* DynObj_UpdateDynTree_10(int a1, int* a2, double* a3, int* a4, double* a5, char a6, double* a7, int a8) { return 0; }
__attribute__((weak)) int* DynObj_RemoveSymbol_10(int a1, int* a2, double* a3, int* a4, double* a5, char a6, double* a7, int a8, int a9) { return 0; }
__attribute__((weak)) int* DynObj_FindSymbol_11(int a1, int* a2, double* a3, double* a4, int* a5, char a6, double* a7, int a8) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_11(int* a1, int a2, double* a3, int a4, int a5, int a6, int a7, int a8, void * a9, void * a10, int a11, int a12) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_11(short* a1, double* a2, double* a3, double* a4, int a5, char a6, int* a7, int* a8, int a9, float* a10) { return 0; }
__attribute__((weak)) int* World_TraceBatch(int world_context,
                                             int* hit_records,
                                             double* ray_start_positions,
                                             double* ray_end_positions,
                                             int ray_count,
                                             char trace_flags,
                                             double* trace_auxiliary,
                                             int collision_mask,
                                             int trace_mode)
{
    static atomic_flag missing_provider_warning_written = ATOMIC_FLAG_INIT;
    struct timespec current_time;
    struct tm utc_time;
    char timestamp[32] = "time-unavailable";

    (void)world_context;
    (void)hit_records;
    (void)ray_start_positions;
    (void)ray_end_positions;
    (void)ray_count;
    (void)trace_flags;
    (void)trace_auxiliary;
    (void)collision_mask;
    (void)trace_mode;

    if (!atomic_flag_test_and_set_explicit(&missing_provider_warning_written,
                                           memory_order_relaxed))
    {
        if (clock_gettime(CLOCK_REALTIME, &current_time) == 0 &&
            gmtime_r(&current_time.tv_sec, &utc_time) != NULL)
        {
            (void)strftime(timestamp, sizeof(timestamp), "%Y-%m-%dT%H:%M:%SZ", &utc_time);
        }

        (void)fprintf(stderr,
                      "%s [ERROR] [Physics/WorldTrace] No world-trace provider is installed; "
                      "collision queries return no hits.\n",
                      timestamp);
    }

    return 0;
}
__attribute__((weak)) unsigned int DynObj_CreateMagicObject_11(int a1, char a2, int a3, double* a4, int a5, int a6) { return 0; }
__attribute__((weak)) unsigned int DynObj_ParseConfigFile_11(int a1, char a2, int a3, double* a4, int a5) { return 0; }
__attribute__((weak)) void * DynObj_UpdateDynTree_11(void * a1) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_11(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_11(int a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_12(float a1, double* a2, double* a3, char a4, float a5, int a6, int a7, float* a8) { return 0; }
__attribute__((weak)) short* DynObj_FindSymbol_12(int a1, void * a2) { return 0; }
__attribute__((weak)) short* DynObj_InsertHashItem_12(int a1, int a2) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_12(int a1, int a2) { return 0; }
__attribute__((weak)) int* DynObj_CreateMagicObject_12(int* a1, int a2) { return 0; }
__attribute__((weak)) int* DynObj_ParseConfigFile_12(int a1, int* a2, int a3, int a4) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_12(void) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_12(void) { return 0; }
__attribute__((weak)) int* DynObj_RemoveSymbol_12(void * a1) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_13(void) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_13(void) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_13(void) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_13(void) { return 0; }
__attribute__((weak)) void * DynObj_CreateMagicObject_13(void * a1, int a2, int* a3) { return 0; }
__attribute__((weak)) void * DynObj_MtpNlodvirmodelD(int a1) { return 0; }
__attribute__((weak)) void * DynObj_Missing(char * a1) { return 0; }
__attribute__((weak)) void * DynObj_Johan(char * a1) { return 0; }
__attribute__((weak)) int* DynObj_Johan_2(int* a1) { return 0; }
__attribute__((weak)) int* DynObj_ParseConfigFile_13(char * a1) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_13(void) { return 0; }
__attribute__((weak)) int DynObj_Initmodels(void) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_13(void) { return 0; }
__attribute__((weak)) int* DynObj_RemoveSymbol_13(void) { return 0; }
__attribute__((weak)) int* DynObj_RegisterSymbol_14(int a1) { return 0; }
__attribute__((weak)) int* DynObj_FindSymbol_14(void) { return 0; }
__attribute__((weak)) int* DynObj_InsertHashItem_14(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* DynObj_LookupHashItem_14(int* a1, int a2) { return 0; }
__attribute__((weak)) int* DynObj_CreateMagicObject_14(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_LocalModelsSMef(int a1) { return 0; }
__attribute__((weak)) int* DynObj_ParseConfigFile_14(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_UpdateDynTree_14(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_LocalTexturesSTex(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_LinkDynamicCube_14(void * a1) { return 0; }
__attribute__((weak)) void ** DynObj_RemoveSymbol_14(void * a1) { return 0; }
__attribute__((weak)) int* DynObj_RegisterSymbol_15(int* a1) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_15(int* a1) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_15(int* a1) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_15(int a1) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_15(int a1) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_15(void) { return 0; }
__attribute__((weak)) int DynObj_UpdateDynTree_15(void) { return 0; }
__attribute__((weak)) int DynObj_LinkDynamicCube_15(void) { return 0; }
__attribute__((weak)) int DynObj_RemoveSymbol_15(void) { return 0; }
__attribute__((weak)) int DynObj_RegisterSymbol_16(void) { return 0; }
__attribute__((weak)) int DynObj_FindSymbol_16(void) { return 0; }
__attribute__((weak)) int DynObj_InsertHashItem_16(void) { return 0; }
__attribute__((weak)) int DynObj_LookupHashItem_16(void) { return 0; }
__attribute__((weak)) int DynObj_CreateMagicObject_16(float a1) { return 0; }
__attribute__((weak)) int DynObj_ParseConfigFile_16(float a1) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh(float a1) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh(float a1, int a2) { return 0; }
__attribute__((weak)) int Render_DrawLightmapMesh(float a1, int a2) { return 0; }
__attribute__((weak)) int Render_SkinBones(void * a1, int a2) { return 0; }
__attribute__((weak)) int Render_TransformVertices(int a1) { return 0; }
__attribute__((weak)) long double Render_ComputeNormals(int* a1) { return 0; }
__attribute__((weak)) void ** Render_SetupLighting(void ** a1, void * a2, int a3) { return 0; }
__attribute__((weak)) void ** Render_BindTexture(void ** a1, void * a2, int a3, char * a4) { return 0; }
__attribute__((weak)) double* Render_ClipMesh(double* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) int Render_Genericuvfromrenderm(void) { return 0; }
__attribute__((weak)) unsigned int Render_DrawRigidMesh_2(void) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_2(void * a1, int a2) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh_2(void * a1) { return 0; }
__attribute__((weak)) int Render_DrawLightmapMesh_2(void * a1) { return 0; }
__attribute__((weak)) void * Render_SkinBones_2(int* a1) { return 0; }
__attribute__((weak)) int Render_TransformVertices_2(void) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_2(void * a1) { return 0; }
__attribute__((weak)) int Render_SetupLighting_2(void * a1, int a2) { return 0; }
__attribute__((weak)) int Render_BindTexture_2(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Render_ClipMesh_2(void * a1) { return 0; }
__attribute__((weak)) int* Render_DrawRigidMesh_3(void * a1) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_3(void * a1) { return 0; }
__attribute__((weak)) void Render_DrawSplineMesh_3(void * a1, void * a2) { return; }
__attribute__((weak)) void Render_DrawLightmapMesh_3(void * a1, int* a2) { return; }
__attribute__((weak)) int Render_SkinBones_3(int a1) { return 0; }
__attribute__((weak)) void ** Render_TransformVertices_3(void) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_3(void) { return 0; }
__attribute__((weak)) int Render_SetupLighting_3(void) { return 0; }
__attribute__((weak)) int Render_BindTexture_3(void) { return 0; }
__attribute__((weak)) int Render_ClipMesh_3(int a1) { return 0; }
__attribute__((weak)) void Render_DrawRigidMesh_4(int* a1, int a2) { return; }
__attribute__((weak)) int Render_DrawBoneMesh_4(void) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh_4(void) { return 0; }
__attribute__((weak)) int Render_ShouldHaveAllocatedD(void * a1) { return 0; }
__attribute__((weak)) int Render_DrawLightmapMesh_4(void * a1) { return 0; }
__attribute__((weak)) char * Render_SkinBones_4(int a1, char * a2, int a3) { return 0; }
__attribute__((weak)) void Render_ComputeNormals_4(void * a1) { return; }
__attribute__((weak)) int Render_ClosestZ2F(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Render_IllegalAllocInfo(void) { return 0; }
__attribute__((weak)) int* Render_NoMoreQcubeCallbacks(int a1) { return 0; }
__attribute__((weak)) void ** Render_CallbackNotFound(int a1) { return 0; }
__attribute__((weak)) int Render_SetupLighting_4(int a1) { return 0; }
__attribute__((weak)) int Render_BindTexture_4(void) { return 0; }
__attribute__((weak)) int Render_ClipMesh_4(void) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_5(float a1) { return 0; }
__attribute__((weak)) long double Render_DrawBoneMesh_5(void) { return 0; }
__attribute__((weak)) void * Render_FailedToCreateBoneob(int* a1, int a2) { return 0; }
__attribute__((weak)) void * Render_DrawSplineMesh_5(int* a1) { return 0; }
__attribute__((weak)) int* Render_DrawLightmapMesh_5(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Render_SkinBones_5(void * a1, void * a2) { return 0; }
__attribute__((weak)) int* Render_TransformVertices_5(int* a1, int* a2, void * a3) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_5(long double a1, float* a2, float* a3, float a4) { return 0; }
__attribute__((weak)) float* Render_SetupLighting_5(float* a1, float* a2, float* a3, float a4) { return 0; }
__attribute__((weak)) int Render_BindTexture_5(float* a1, float* a2, int* a3) { return 0; }
__attribute__((weak)) int Render_ClipMesh_5(int a1, int* a2) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_6(int a1, int a2, void * a3, void * a4) { return 0; }
__attribute__((weak)) int Render_BlendbranchToIllegal(int a1, int a2, void * a3, int* a4) { return 0; }
__attribute__((weak)) int Render_BoneobjDeleteblendno(int a1, int a2) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_6(void * a1) { return 0; }
__attribute__((weak)) int* Render_DrawSplineMesh_6(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) { return 0; }
__attribute__((weak)) int* Render_DrawLightmapMesh_6(void) { return 0; }
__attribute__((weak)) int* Render_SkinBones_6(int* a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12) { return 0; }
__attribute__((weak)) int Render_TransformVertices_6(void * a1) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_6(void * a1) { return 0; }
__attribute__((weak)) void AIGraph_LoadParameters(void) { return; }
__attribute__((weak)) void Render_SetupLighting_6(void) { return; }
__attribute__((weak)) int* Render_BindTexture_6(void * a1) { return 0; }
__attribute__((weak)) int* Render_ClipMesh_6(int* a1) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_7(int a1, int a2) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_7(int a1, void * a2) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh_7(float* a1, float a2, float* a3, float a4, float a5) { return 0; }
__attribute__((weak)) float Render_DrawLightmapMesh_7(long double a1, float a2, float a3)  { return 0; }
__attribute__((weak)) int* Render_SkinBones_7(int* a1, int* a2) { return 0; }
__attribute__((weak)) float Render_TransformVertices_7(float a1, int a2, float a3, float a4, float a5, float a6)  { return 0; }
__attribute__((weak)) int Render_ComputeNormals_7(float* a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) float Render_SetupLighting_7(int a1, float a2, int* a3)  { return 0; }
__attribute__((weak)) int* Render_BindTexture_7(int a1) { return 0; }
__attribute__((weak)) int Render_ClipMesh_7(void) { return 0; }
__attribute__((weak)) int* Render_DrawRigidMesh_8(int* a1, int a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) void * Render_DrawBoneMesh_8(void * a1) { return 0; }
__attribute__((weak)) int* Render_DrawSplineMesh_8(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Render_DrawLightmapMesh_8(int* a1, int* a2, float a3) { return 0; }
__attribute__((weak)) float Render_SkinBones_8(int a1, float a2, float a3, float a4)  { return 0; }
__attribute__((weak)) int Render_ComputeNormals_8(int a1, int a2, int* a3, void * a4, float a5, float a6) { return 0; }
__attribute__((weak)) int Render_SetupLighting_8(void) { return 0; }
__attribute__((weak)) int* Render_BindTexture_8(int* a1, int* a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Render_ClipMesh_8(void * a1) { return 0; }
__attribute__((weak)) int* Render_DrawRigidMesh_9(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_9(void) { return 0; }
__attribute__((weak)) int* Render_DrawSplineMesh_9(int* a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Render_DrawLightmapMesh_9(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Render_SkinBones_9(void) { return 0; }
__attribute__((weak)) int* Render_TransformVertices_9(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_9(int* a1, int a2, float a3, int a4) { return 0; }
__attribute__((weak)) int Render_SetupLighting_9(float a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Render_BindTexture_9(float a1, int a2, int a3, int a4, int a5, int a6, float a7) { return 0; }
__attribute__((weak)) int Bones_PlayAnimation(float a1, int a2, int a3, int a4, float a5) { return 0; }
__attribute__((weak)) void ** Render_ClipMesh_9(void * a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_10(int a1) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_10(void * a1, int a2) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh_10(void * a1, int a2) { return 0; }
__attribute__((weak)) long double Render_DrawLightmapMesh_10(void * a1, int a2) { return 0; }
__attribute__((weak)) long double Render_SkinBones_10(void * a1, int a2) { return 0; }
__attribute__((weak)) long double Render_TransformVertices_10(void * a1, float a2) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_10(void * a1) { return 0; }
__attribute__((weak)) int Render_SetupLighting_10(void * a1, int a2, float a3) { return 0; }
__attribute__((weak)) void * Render_BindTexture_10(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Render_ClipMesh_10(void) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_11(int a1) { return 0; }
__attribute__((weak)) void Render_DrawBoneMesh_11(int a1) { return; }
__attribute__((weak)) int Render_FileSIsNotIffFile(int* a1) { return 0; }
__attribute__((weak)) int* Render_DrawSplineMesh_11(int* a1) { return 0; }
__attribute__((weak)) int* Render_DrawLightmapMesh_11(int* a1, int* a2, int* a3, int a4, int a5) { return 0; }
__attribute__((weak)) int Render_SkinBones_11(int a1, int a2) { return 0; }
__attribute__((weak)) int Render_TransformVertices_11(int a1, int a2) { return 0; }
__attribute__((weak)) float Render_ComputeNormals_11(float a1, float a2, float a3, int a4, int a5)  { return 0; }
__attribute__((weak)) long double Render_SetupLighting_11(int a1, int a2) { return 0; }
__attribute__((weak)) int Render_BindTexture_11(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int BoneDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) int* BoneDynCubeObj_Setup(float a1, int* a2, float a3, float a4, float a5, double a6, short* a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15) { return 0; }
__attribute__((weak)) int* BoneDynCubeObj_Process(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12) { return 0; }
__attribute__((weak)) void BoneDynCubeObj_Update(int* a1, int* a2) { return; }
__attribute__((weak)) int BoneDynCubeObj_OnEvent(void * a1, double* a2) { return 0; }
__attribute__((weak)) unsigned int Render_ClipMesh_11(void) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_12(void) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_12(void * a1, short a2, int* a3) { return 0; }
__attribute__((weak)) void * Render_DrawSplineMesh_12(void * a1) { return 0; }
__attribute__((weak)) int Render_VirmodelIsNull(void * a1, int* a2) { return 0; }
__attribute__((weak)) int QObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int QObj_Update(void) { return 0; }
__attribute__((weak)) int QObj_OnEvent(void) { return 0; }
__attribute__((weak)) int Qtask_SetCallbackData(void * a1, int a2) { return 0; }
__attribute__((weak)) int Qtask_GetCallbackData(void * a1) { return 0; }
__attribute__((weak)) int* Qtask_Initialize(void) { return 0; }
__attribute__((weak)) int Qtask_Shutdown(void) { return 0; }
__attribute__((weak)) int Qtask_GetEventId(void) { return 0; }
__attribute__((weak)) int Qtask_GetList(void) { return 0; }
__attribute__((weak)) int* Camera_SubmitFrame(void * a1, int a2, int a3, int a4, int a5, int* a6, int a7, int a8, float a9) { return 0; }
__attribute__((weak)) void * Camera_ResetFrameCounters(void * a1) { return 0; }
__attribute__((weak)) void * MagicObj_Initialize(void) { return 0; }
__attribute__((weak)) void * MagicObj_ParentTransform(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int MagicObj_Shutdown(void) { return 0; }
__attribute__((weak)) int MagicObj_GetTypeId(void) { return 0; }
__attribute__((weak)) int MagicObj_GetEventId(void) { return 0; }
__attribute__((weak)) struct status_msg* Render_DrawLightmapMesh_12(double* a1, double* a2, int* a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8) { return 0; }
__attribute__((weak)) int Render_SkinBones_12(void * a1, double* a2, double* a3, int* a4, float a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int Render_TransformVertices_12(int* a1) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_12(void ** a1, int* a2) { return 0; }
__attribute__((weak)) int Hazinglayers_Init(void) { return 0; }
__attribute__((weak)) unsigned int Hazinglayers_Update(void) { return 0; }
__attribute__((weak)) int Hazinglayers_OnEvent(void) { return 0; }
__attribute__((weak)) void ** Hazinglayers_Process(int* a1, int* a2, double* a3, double* a4, void ** a5, int a6) { return 0; }
__attribute__((weak)) unsigned int Render_SetupLighting_12(float* a1, double* a2, float a3, float a4, void ** a5) { return 0; }
__attribute__((weak)) int Render_BindTexture_12(void) { return 0; }
__attribute__((weak)) int Render_ClipMesh_12(void) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_13(void) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_13(int a1, int* a2, int a3) { return 0; }
__attribute__((weak)) void Render_DrawSplineMesh_13(int a1, int* a2, int a3, int* a4, float a5) { return; }
__attribute__((weak)) int Render_DrawLightmapMesh_13(void) { return 0; }
__attribute__((weak)) void * Render_SkinBones_13(int* a1) { return 0; }
__attribute__((weak)) int* Render_TransformVertices_13(int* a1, int* a2, int* a3, char a4, char a5) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_13(int a1) { return 0; }
__attribute__((weak)) int Render_SetupLighting_13(int a1, int a2, int a3, void ** a4, float a5) { return 0; }
__attribute__((weak)) int Sector_Cleanup(int* a1, int* a2) { return 0; }
__attribute__((weak)) void Render_BindTexture_13(int* a1, void ** a2) { return; }
__attribute__((weak)) void Render_ClipMesh_13(int* a1, void ** a2) { return; }
__attribute__((weak)) void Render_DrawRigidMesh_14(int* a1, int a2, int* a3, int a4) { return; }
__attribute__((weak)) void Render_DrawBoneMesh_14(int* a1, int a2, int* a3) { return; }
__attribute__((weak)) void Render_DrawSplineMesh_14(int* a1) { return; }
__attribute__((weak)) void Render_DrawLightmapMesh_14(void ** a1) { return; }
__attribute__((weak)) int* Sector_Cleanup_2(int* a1, int* a2) { return 0; }
__attribute__((weak)) int* Render_SkinBones_14(float a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) void * Render_TransformVertices_14(int* a1, void * a2) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_14(int a1, void * a2, double* a3) { return 0; }
__attribute__((weak)) int Render_SetupLighting_14(void * a1) { return 0; }
__attribute__((weak)) int Render_BindTexture_14(int a1, void * a2, double* a3) { return 0; }
__attribute__((weak)) int Sector_Init(void) { return 0; }
__attribute__((weak)) int Sector_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) float Sector_OnEvent(float a1)  { return 0; }
__attribute__((weak)) int* Render_ClipMesh_14(void * a1, float* a2, int* a3, int a4) { return 0; }
__attribute__((weak)) int Render_DrawRigidMesh_15(int a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int Render_DrawBoneMesh_15(void * a1, float* a2, float* a3, int a4) { return 0; }
__attribute__((weak)) int Render_DrawSplineMesh_15(void * a1, int a2, int a3, float* a4, float* a5, float* a6, float* a7) { return 0; }
__attribute__((weak)) int* Sector_Cleanup_3(void * a1) { return 0; }
__attribute__((weak)) void * Render_SkinBones_15(void * a1) { return 0; }
__attribute__((weak)) int Sector_Cleanup_4(void * a1) { return 0; }
__attribute__((weak)) int Sector_Setup(unsigned int a1, int* a2) { return 0; }
__attribute__((weak)) int Sector_Process(void * a1) { return 0; }
__attribute__((weak)) void * Sector_Update(void * a1, int a2) { return 0; }
__attribute__((weak)) void Sector_Cleanup_5(int* a1, int a2) { return; }
__attribute__((weak)) int Sector_Cleanup_6(void * a1, int a2) { return 0; }
__attribute__((weak)) int Sector_Cleanup_7(float a1, void * a2) { return 0; }
__attribute__((weak)) int Sector_Cleanup_8(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Render_TransformVertices_15(void) { return 0; }
__attribute__((weak)) int Render_ComputeNormals_15(void) { return 0; }
__attribute__((weak)) void * Render_SetupLighting_15(void * a1, char * a2) { return 0; }
__attribute__((weak)) float Render_BindTexture_15(float a1)  { return 0; }
__attribute__((weak)) int* Render_ClipMesh_15(float a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) int* Render_MagicObjectTypeSNotD(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample(int a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition(void) { return 0; }
__attribute__((weak)) int MagicObjContainer_Init(void) { return 0; }
__attribute__((weak)) unsigned int MagicObjContainer_Update(void) { return 0; }
__attribute__((weak)) struct status_msg* CarGun_Create(void * a1, unsigned int a2) { return 0; }
__attribute__((weak)) int Shadow_Init(void) { return 0; }
__attribute__((weak)) int* Shadow_LoadParameters(float a1) { return 0; }
__attribute__((weak)) unsigned int SoundSys_SetMasterVolume(void) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_SetFrequency(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample(int a1, int a2, int* a3, float a4, int* a5, float a6) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef(int a1, int a2, int* a3, float a4, int* a5, float a6) { return 0; }
__attribute__((weak)) int* SoundSys_EvaluateTrigger(float a1, int* a2) { return 0; }
__attribute__((weak)) int* SplineObjSegment_Process(float a1, int* a2) { return 0; }
__attribute__((weak)) void * SplineObjSegment_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * SplineObjSegment_Action(float a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int SplineObjSegment_Init(void) { return 0; }
__attribute__((weak)) int SplineObjSegment_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int SoundSys_InitSoundSys_2(void) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_PlaySoundSample_2(float a1, void * a2, int* a3, double* a4, float* a5, float* a6, char a7, char a8, int a9, int a10, char * a11) { return 0; }
__attribute__((weak)) int* SoundSys_Update3DPosition_2(float a1, int* a2, double* a3, float* a4, float* a5, char a6, char a7, int a8, char * a9) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_2(void) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_2(void) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_2(void) { return 0; }
__attribute__((weak)) int DynCubeObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int DynCubeObj_Update(void) { return 0; }
__attribute__((weak)) int* DynCubeObj_OnEvent(int a1, int a2, int a3, double* a4, float a5) { return 0; }
__attribute__((weak)) int DynCubeObj_Action(int* a1) { return 0; }
__attribute__((weak)) int DynCubeObj_OnTick(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_3(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_3(void) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_3(void) { return 0; }
__attribute__((weak)) unsigned int SoundSys_SetMasterVolume_3(void) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_3(float a1, float a2, float a3, int a4, float a5, int a6, float a7) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_3(void * a1, float a2, float a3, float a4, float a5) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_3(void) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_3(void) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_4(void) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_4(void) { return 0; }
__attribute__((weak)) unsigned int SoundSys_Update3DPosition_4(void) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_4(int a1) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_4(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_4(char a1) { return 0; }
__attribute__((weak)) int SoundSysController_Init(void) { return 0; }
__attribute__((weak)) int* SoundSys_LoadSoundDef_4(int* a1, int* a2) { return 0; }
__attribute__((weak)) void SoundSys_EvaluateTrigger_4(void) { return; }
__attribute__((weak)) int* SoundSys_AttachLipsync_4(int* a1, void ** a2) { return 0; }
__attribute__((weak)) int SoundSys_Definegroup(void) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_InitSoundSys_5(void * a1) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_PlaySoundSample_5(void * a1, int a2) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_Update3DPosition_5(void * a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_5(void) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_5(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_5(void) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_5(void) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_5(void) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_5(void) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_6(void) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_6(void) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_6(void) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_6(void) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_6(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_6(int* a1) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_6(int* a1) { return 0; }
__attribute__((weak)) int* SoundSys_EvaluateTrigger_6(int* a1) { return 0; }
__attribute__((weak)) int Sound_Load(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_6(int* a1) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_7(void * a1) { return 0; }
__attribute__((weak)) int* SoundSys_PlaySoundSample_7(int* a1) { return 0; }
__attribute__((weak)) int* SoundSys_Update3DPosition_7(int a1) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_SetMasterVolume_7(void * a1, char * a2) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_7(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_7(void * a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_7(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_7(void * a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_7(void * a1, char a2) { return 0; }
__attribute__((weak)) int* SoundSys_InitSoundSys_8(int a1) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_8(int a1) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_8(int* a1) { return 0; }
__attribute__((weak)) void SoundSys_SetMasterVolume_8(int a1, int a2, int a3, int a4, float* a5) { return; }
__attribute__((weak)) void * SoundSys_SetFrequency_8(void * a1) { return 0; }
__attribute__((weak)) long double SoundSys_StopSoundSample_8(float* a1) { return 0; }
__attribute__((weak)) int* SoundSys_LoadSoundDef_8(int* a1, int* a2, float a3) { return 0; }
__attribute__((weak)) void SoundSys_EvaluateTrigger_8(void) { return; }
__attribute__((weak)) int SoundSys_AttachLipsync_8(char * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Sound_EventTrigger(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_9(void) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_9(char a1) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_9(int a1) { return 0; }
__attribute__((weak)) int Screen_Init(void) { return 0; }
__attribute__((weak)) unsigned int Screen_Update(void) { return 0; }
__attribute__((weak)) int Screen_OnEvent(void) { return 0; }
__attribute__((weak)) int Screen_Process(int a1, char a2) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_SetMasterVolume_9(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_9(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_9(void) { return 0; }
__attribute__((weak)) void * SoundSys_LoadSoundDef_9(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * SoundSys_EvaluateTrigger_9(int* a1) { return 0; }
__attribute__((weak)) int** SoundSys_AttachLipsync_9(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_10(int* a1) { return 0; }
__attribute__((weak)) int* SoundSys_PlaySoundSample_10(int* a1) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_10(int* a1, char * a2, int a3) { return 0; }
__attribute__((weak)) void SoundSys_SetMasterVolume_10(int* a1, char * a2) { return; }
__attribute__((weak)) char * SoundSys_SetFrequency_10(int* a1, int a2) { return 0; }
__attribute__((weak)) char * SoundSys_StopSoundSample_10(int* a1) { return 0; }
__attribute__((weak)) char * SoundSys_LoadSoundDef_10(int* a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_10(void * a1, char a2) { return 0; }
__attribute__((weak)) int* DebugText_Init(void) { return 0; }
__attribute__((weak)) int* DebugText_Update(void) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_10(void * a1, char a2) { return 0; }
__attribute__((weak)) int SoundSys_LocalDebugFnt(void) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_11(int a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_11(void) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_11(char * a1) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_11(char * a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_11(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_11(void) { return 0; }
__attribute__((weak)) int CameraControlTask_Init(void) { return 0; }
__attribute__((weak)) void CameraControlTask_LoadParameters(void * a1) { return; }
__attribute__((weak)) unsigned int CameraControlTask_OnEvent(void) { return 0; }
__attribute__((weak)) struct status_msg* CameraControlTask_Process(void * a1, unsigned int a2) { return 0; }
__attribute__((weak)) struct status_msg* CameraControlTask_Action(void * a1, void * a2, unsigned int a3) { return 0; }
__attribute__((weak)) int ViewportQTask_Init(void) { return 0; }
__attribute__((weak)) int ViewportQTask_Process(void) { return 0; }
__attribute__((weak)) int ViewportQTask_Setup(void * a1) { return 0; }
__attribute__((weak)) int ViewportQTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int SoundSys_LoadSoundDef_11(void) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_11(void) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_AttachLipsync_11(void * a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_12(void) { return 0; }
__attribute__((weak)) void SoundSys_PlaySoundSample_12(void) { return; }
__attribute__((weak)) int SoundSys_Update3DPosition_12(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_12(int a1, int a2, char a3) { return 0; }
__attribute__((weak)) void SoundSys_SetFrequency_12(void) { return; }
__attribute__((weak)) int SoundSys_StopSoundSample_12(void * a1, char a2) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_12(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_12(void * a1, int a2) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_12(void) { return 0; }
__attribute__((weak)) int* SoundSys_InitSoundSys_13(int a1) { return 0; }
__attribute__((weak)) int TerraDrawTask_Init(void) { return 0; }
__attribute__((weak)) unsigned int TerraDrawTask_Update(void) { return 0; }
__attribute__((weak)) struct status_msg* TerraDrawTask_OnEvent(void * a1, unsigned int a2) { return 0; }
__attribute__((weak)) int SoundDefSound_Init(void) { return 0; }
__attribute__((weak)) int* SoundDefSound_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * SoundSys_PlaySoundSample_13(void * a1) { return 0; }
__attribute__((weak)) int SoundDefSound_LoadParameters(int a1) { return 0; }
__attribute__((weak)) int SoundDefSound_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefSound_Update(void * a1, float* a2) { return 0; }
__attribute__((weak)) float SoundDefSound_OnEvent(int a1, int* a2)  { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_13(void) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_13(void) { return 0; }
__attribute__((weak)) int Define_Sound(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, void * a9, float a10) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_13(void * a1) { return 0; }
__attribute__((weak)) int* SoundSys_StopSoundSample_13(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_13(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_13(void * a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_13(void * a1) { return 0; }
__attribute__((weak)) int FadeOutEnd_Init(void) { return 0; }
__attribute__((weak)) unsigned int FadeOutEnd_Update(void) { return 0; }
__attribute__((weak)) struct status_msg* FadeOutEnd_OnEvent(void * a1) { return 0; }
__attribute__((weak)) struct status_msg* FadeOutEnd_Process(void * a1) { return 0; }
__attribute__((weak)) int GlowTask_Init(void) { return 0; }
__attribute__((weak)) unsigned int GlowTask_Update(void) { return 0; }
__attribute__((weak)) struct status_msg* GlowTask_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int SoundDefTriggerOnce_Init(void) { return 0; }
__attribute__((weak)) int* SoundDefTriggerOnce_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefTriggerOnce_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * SoundSys_InitSoundSys_14(void * a1) { return 0; }
__attribute__((weak)) int SoundDefTriggerOnce_Setup(int a1) { return 0; }
__attribute__((weak)) int SoundDefTriggerOnce_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefTriggerOnce_OnEvent(void * a1, float* a2) { return 0; }
__attribute__((weak)) float SoundDefTriggerOnce_Action(int a1, int* a2)  { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_14(void) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_14(void) { return 0; }
__attribute__((weak)) int Define_TriggerOnce(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, int a8, void * a9, float a10) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_14(void * a1) { return 0; }
__attribute__((weak)) int SoundDefGraph_Init(void) { return 0; }
__attribute__((weak)) int* SoundDefGraph_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefGraph_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * SoundSys_SetFrequency_14(void * a1) { return 0; }
__attribute__((weak)) int SoundDefGraph_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefGraph_Update(void * a1, float* a2) { return 0; }
__attribute__((weak)) float SoundDefGraph_OnEvent(int a1, int* a2)  { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_14(void) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_14(void) { return 0; }
__attribute__((weak)) int Define_Graph(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, int a7, void * a8, float a9) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_14(void * a1) { return 0; }
__attribute__((weak)) int SoundDefGroup_Init(void) { return 0; }
__attribute__((weak)) int* SoundDefGroup_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int SoundDefGroup_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundDefGroup_Update(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int SoundDefGroup_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_14(void) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_15(void) { return 0; }
__attribute__((weak)) int Define_Group(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) struct status_msg* SoundSys_PlaySoundSample_15(void * a1, unsigned int a2) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_15(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSysMicrophone_Init(void) { return 0; }
__attribute__((weak)) int* SoundSysMicrophone_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int SoundSysMicrophone_OnEvent(void) { return 0; }
__attribute__((weak)) int SoundSysMicrophone_Process(void) { return 0; }
__attribute__((weak)) void SoundSysMicrophone_Action(void) { return; }
__attribute__((weak)) int SoundSysMicrophone_OnTick(int* a1) { return 0; }
__attribute__((weak)) void * SoundSys_Defineanimtrigger(void) { return 0; }
__attribute__((weak)) int DefineAnimTrigger(int a1, float a2) { return 0; }
__attribute__((weak)) unsigned int SoundSys_SetMasterVolume_15(void) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_15(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_15(void) { return 0; }
__attribute__((weak)) int SoundSys_LoadSoundDef_15(void) { return 0; }
__attribute__((weak)) char * AnimTrigger_ParseConfigFile(char * a1) { return 0; }
__attribute__((weak)) int Anim_TriggerLoad(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_15(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_15(void) { return 0; }
__attribute__((weak)) unsigned int SoundSys_InitSoundSys_16(void) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_16(int* a1, int a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_16(void * a1, int a2) { return 0; }
__attribute__((weak)) float SoundSys_SetMasterVolume_16(void * a1, int a2, float a3, void * a4, float* a5, float a6)  { return 0; }
__attribute__((weak)) int* SoundSys_SetFrequency_16(int* a1, int a2, int a3, int a4, int a5, float a6, float a7, float a8) { return 0; }
__attribute__((weak)) void * SoundSys_StopSoundSample_16(void * a1, int a2) { return 0; }
__attribute__((weak)) void * SoundSys_LoadSoundDef_16(int* a1, float a2, float a3, float a4, float a5) { return 0; }
__attribute__((weak)) void * SoundSys_EvaluateTrigger_16(void * a1) { return 0; }
__attribute__((weak)) void * SoundSys_AttachLipsync_16(void * a1) { return 0; }
__attribute__((weak)) int ForceAccumulator_Integrate(void * a1, float* a2) { return 0; }
__attribute__((weak)) float SoundSys_InitSoundSys_17(void * a1)  { return 0; }
__attribute__((weak)) void * SoundSys_PlaySoundSample_17(int* a1, float a2, float a3, float a4, float a5, int a6) { return 0; }
__attribute__((weak)) void * SoundSys_Update3DPosition_17(int* a1, float a2, float a3, float a4, float a5) { return 0; }
__attribute__((weak)) void * ForceAccumulator_Add(void * a1, int a2) { return 0; }
__attribute__((weak)) void * SoundSys_SetMasterVolume_17(float* a1, void * a2, float* a3) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_17(void) { return 0; }
__attribute__((weak)) void * SoundSys_StopSoundSample_17(void * a1) { return 0; }
__attribute__((weak)) int InputPort_Init(void) { return 0; }
__attribute__((weak)) short* InputPort_LoadParameters(int a1) { return 0; }
__attribute__((weak)) unsigned int InputPort_OnEvent(void) { return 0; }
__attribute__((weak)) struct status_msg* InputPort_Process(void * a1) { return 0; }
__attribute__((weak)) int InputPort_Action(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15) { return 0; }
__attribute__((weak)) int* LODSettings_Init(void) { return 0; }
__attribute__((weak)) float* LODSettings_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int SoundSys_LoadSoundDef_17(void) { return 0; }
__attribute__((weak)) int SoundSys_EvaluateTrigger_17(void) { return 0; }
__attribute__((weak)) int SoundSys_AttachLipsync_17(void) { return 0; }
__attribute__((weak)) void * SoundSys_Definephysicsobjtype(void) { return 0; }
__attribute__((weak)) int DefinePhysicsObjType(long double a1, long double a2, long double a3, long double a4, int a5, char * a6) { return 0; }
__attribute__((weak)) unsigned int SoundSys_InitSoundSys_18(void) { return 0; }
__attribute__((weak)) char * PhysicsObjType_ParseConfigFile(char * a1) { return 0; }
__attribute__((weak)) int Physics_ObjLoad(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_PlaySoundSample_18(int* a1) { return 0; }
__attribute__((weak)) int SoundSys_Update3DPosition_18(void) { return 0; }
__attribute__((weak)) int SoundSys_SetMasterVolume_18(void) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_18(void) { return 0; }
__attribute__((weak)) int SoundSys_StopSoundSample_18(void) { return 0; }
__attribute__((weak)) void SoundSys_LoadSoundDef_18(void) { return; }
__attribute__((weak)) void * SoundSys_EvaluateTrigger_18(char * a1) { return 0; }
__attribute__((weak)) void * SoundSys_AttachLipsync_18(void * a1) { return 0; }
__attribute__((weak)) int SoundSys_InitSoundSys_19(void * a1) { return 0; }
__attribute__((weak)) int __fastcall SoundSys_PlaySoundSample_19(short* a1) { return 0; }
__attribute__((weak)) int* ScreenGrab_Init(void) { return 0; }
__attribute__((weak)) int* ScreenGrab_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int SoundSys_Update3DPosition_19(void) { return 0; }
__attribute__((weak)) void * SoundSys_LocalGrab(int a1) { return 0; }
__attribute__((weak)) char * SoundSys_SetMasterVolume_19(int* a1, char * a2, short a3, short a4) { return 0; }
__attribute__((weak)) int SoundSys_SetFrequency_19(void) { return 0; }
__attribute__((weak)) void SoundSys_StopSoundSample_19(void) { return; }
__attribute__((weak)) int* CameraBase_Init(void) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup(float* a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_2(float* a1, void * a2) { return 0; }
__attribute__((weak)) int CameraBase_Update_2(long double a1, float* a2, int* a3) { return 0; }
__attribute__((weak)) int CameraBase_OnEvent(long double a1, long double a2, long double a3, float* a4, float a5) { return 0; }
__attribute__((weak)) int CameraBase_Process(long double a1, long double a2, long double a3, float* a4, float a5) { return 0; }
__attribute__((weak)) int CameraBase_Action(long double a1, double* a2, int* a3) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_3(int* a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_4(short* a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_5(int* a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_6(char * a1, int* a2) { return 0; }
__attribute__((weak)) int* CameraBase_Cleanup_7(int a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_8(char * a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_9(char * a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_10(int* a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_11(int a1, int* a2) { return 0; }
__attribute__((weak)) int CameraBase_Cleanup_12(char * a1, int* a2) { return 0; }
__attribute__((weak)) int Task_DeclareParameters(int a1) { return 0; }
__attribute__((weak)) int Task_New(int a1, void * a2, float a3) { return 0; }
__attribute__((weak)) int* Script_ParseEnumInt32(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32(int* a1) { return 0; }
__attribute__((weak)) struct status_msg* Script_ParseEnumString(void * a1) { return 0; }
__attribute__((weak)) int* Script_ExecuteLevelScript(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler(int a1) { return 0; }
__attribute__((weak)) int Config_Compile(int a1, void * a2, char a3) { return 0; }
__attribute__((weak)) int Task_New_2(int a1, int a2, int a3, void * a4, int a5) { return 0; }
__attribute__((weak)) int Level_LoadObjects(int a1, int a2) { return 0; }
__attribute__((weak)) int Script_Init(int a1, char a2, int a3, char a4) { return 0; }
__attribute__((weak)) int* Qtask_Update(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition(void) { return 0; }
__attribute__((weak)) int Script_FormatString(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_2(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_2(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_2(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_2(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_2(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_2(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_2(void) { return 0; }
__attribute__((weak)) int Script_FormatString_2(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_3(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_3(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_3(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_3(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_3(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_3(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_3(void) { return 0; }
__attribute__((weak)) int Script_FormatString_3(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_4(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_4(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_4(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_4(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_4(int a1) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_4(int a1) { return 0; }
__attribute__((weak)) int Script_FormatString_4(void) { return 0; }
__attribute__((weak)) int* Script_LevelqtaskidDAlready(int a1, void * a2) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_5(int a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_5(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_5(void) { return 0; }
__attribute__((weak)) void * Script_ParseEnumString_5(int a1) { return 0; }
__attribute__((weak)) int* Script_ExecuteLevelScript_5(int a1) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_5(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_5(void) { return 0; }
__attribute__((weak)) int Script_FormatString_5(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_6(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_6(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_6(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_6(char * a1, void * a2) { return 0; }
__attribute__((weak)) int* Script_ExecuteLevelScript_6(int* a1) { return 0; }
__attribute__((weak)) char * Script_CallNativeHandler_6(int* a1) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_6(void * a1, void * a2) { return 0; }
__attribute__((weak)) int Script_Isexists(int* a1, void * a2) { return 0; }
__attribute__((weak)) int* Script_FormatString_6(int* a1) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_7(int* a1, void * a2) { return 0; }
__attribute__((weak)) char * Script_ParseEnumInt32_7(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_7(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_7(char * a1) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_7(void) { return 0; }
__attribute__((weak)) unsigned int Script_CallNativeHandler_7(void) { return 0; }
__attribute__((weak)) int* Script_EvaluateCondition_7(int a1) { return 0; }
__attribute__((weak)) int* Script_FormatString_7(int* a1, int a2) { return 0; }
__attribute__((weak)) int Script_UnableToAllocatePara(int a1, int a2) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_8(int a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_8(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_8(void) { return 0; }
__attribute__((weak)) int* Script_UndefinedParameterTy(int* a1, int a2, int a3, int a4, char a5, int a6) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_8(int a1, int a2, char a3, int a4) { return 0; }
__attribute__((weak)) int Script_UnableToAllocatePara_2(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_8(char a1) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_8(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_8(void) { return 0; }
__attribute__((weak)) int Script_FormatString_8(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_9(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_9(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_9(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_9(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) void Script_TooFewParametersInLi(int* a1, int a2) { return; }
__attribute__((weak)) int Script_ExecuteLevelScript_9(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_9(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_9(void) { return 0; }
__attribute__((weak)) int** Script_FormatString_9(int** a1) { return 0; }
__attribute__((weak)) int** Script_SpawnNewTask_10(int** a1, int a2) { return 0; }
__attribute__((weak)) int* Script_ParseEnumInt32_10(int* a1) { return 0; }
__attribute__((weak)) void * Script_ParseEnumReal32_10(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_10(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_10(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_10(void) { return 0; }
__attribute__((weak)) int Script_Enumint32(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_10(void) { return 0; }
__attribute__((weak)) int Script_FormatString_10(void) { return 0; }
__attribute__((weak)) unsigned int Script_SpawnNewTask_11(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_11(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_11(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_11(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_11(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_11(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_11(void) { return 0; }
__attribute__((weak)) int Script_FormatString_11(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_12(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_12(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_12(int* a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_12(int a1, int a2) { return 0; }
__attribute__((weak)) void * Script_ExecuteLevelScript_12(int a1, char * a2, void * a3) { return 0; }
__attribute__((weak)) int** Script_CallNativeHandler_12(int a1, char * a2) { return 0; }
__attribute__((weak)) void Script_EvaluateCondition_12(void * a1) { return; }
__attribute__((weak)) int Script_FormatString_12(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_13(void * a1, char a2) { return 0; }
__attribute__((weak)) void * Script_ParseEnumInt32_13(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_13(void * a1, int a2) { return 0; }
__attribute__((weak)) int EditRigidObj_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * EditRigidObj_Init(void) { return 0; }
__attribute__((weak)) int EditRigidObj_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) void * EditRigidObj_Setup(void * a1) { return 0; }
__attribute__((weak)) void * EditRigidObj_Process(void * a1) { return 0; }
__attribute__((weak)) float* EditRigidObj_Update(float a1) { return 0; }
__attribute__((weak)) float* Script_ParseEnumString_13(void * a1) { return 0; }
__attribute__((weak)) int EditRigidObj_Cleanup(float a1, void * a2) { return 0; }
__attribute__((weak)) void * EditRigidObj_Cleanup_2(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Script_ExecuteLevelScript_13(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_13(void) { return 0; }
__attribute__((weak)) struct status_msg* Script_EvaluateCondition_13(void * a1, int a2, int a3, int a4, int* a5, int* a6) { return 0; }
__attribute__((weak)) int AnimTask_Init(void) { return 0; }
__attribute__((weak)) int AnimTask_LoadParameters(void * a1, int a2) { return 0; }
__attribute__((weak)) int AnimTask_Process(int* a1) { return 0; }
__attribute__((weak)) int Script_FormatString_13(void) { return 0; }
__attribute__((weak)) int* Script_SpawnNewTask_14(void * a1) { return 0; }
__attribute__((weak)) char Script_ParseEnumInt32_14(int80_t a1, int a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_14(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_14(void * a1) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_14(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* Script_CallNativeHandler_14(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Script_EvaluateCondition_14(void) { return 0; }
__attribute__((weak)) void * const Script_FormatString_14(int a1, int a2) { return 0; }
__attribute__((weak)) void * Script_SpawnNewTask_15(int a1) { return 0; }
__attribute__((weak)) void * AnimTask_SendChannels(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_15(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_15(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_15(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_15(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_15(void) { return 0; }
__attribute__((weak)) int Script_FormatString_15(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_16(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_16(void) { return 0; }
__attribute__((weak)) void Script_ParseEnumReal32_16(void) { return; }
__attribute__((weak)) int Vehicle_Init(void) { return 0; }
__attribute__((weak)) int Vehicle_Setup(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Script_ParseEnumString_16(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_16(void) { return 0; }
__attribute__((weak)) void * Script_CallNativeHandler_16(void * a1) { return 0; }
__attribute__((weak)) void * Script_EvaluateCondition_16(void * a1) { return 0; }
__attribute__((weak)) void * VehicleChild_Dispatch(void * a1) { return 0; }
__attribute__((weak)) int Script_FormatString_16(unsigned int a1) { return 0; }
__attribute__((weak)) int* Vehicle_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_17(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* CarGun_ConstructPath(unsigned int a1) { return 0; }
__attribute__((weak)) int* Script_ParseEnumInt32_17(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_17(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_17(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_17(int a1) { return 0; }
__attribute__((weak)) int* Script_EvaluateCondition_17(int a1, int* a2, int* a3, int* a4, float a5) { return 0; }
__attribute__((weak)) void Script_FormatString_17(void) { return; }
__attribute__((weak)) void * Script_SpawnNewTask_18(float a1, void * a2) { return 0; }
__attribute__((weak)) int* CutScene_TaskCreate(void) { return 0; }
__attribute__((weak)) int CutScene_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int CutScene_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int CutScene_Action(void * a1) { return 0; }
__attribute__((weak)) int* CutScene_Process(void * a1) { return 0; }
__attribute__((weak)) int* CutScene_TaskUpdate(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) int* Script_ParseEnumInt32_18(void * a1) { return 0; }
__attribute__((weak)) int* CutScene_ApplyFrame(void * a1, int* a2, int a3, int a4, double a5, char a6) { return 0; }
__attribute__((weak)) int80_t Script_ParseEnumString_18(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)  { return 0; }
__attribute__((weak)) int CutScene_PostLoad(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* CutScene_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Script_ExecuteLevelScript_18(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_18(int a1) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_18(int a1) { return 0; }
__attribute__((weak)) int Script_FormatString_18(int a1) { return 0; }
__attribute__((weak)) double* Script_SpawnNewTask_19(void * a1, float a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_19(void * a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) void Script_ParseEnumReal32_19(void * a1, int* a2, int* a3, float a4, float a5, int a6) { return; }
__attribute__((weak)) void * Script_ParseEnumString_19(void * a1) { return 0; }
__attribute__((weak)) int* RainDynCubeObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_19(long double a1, float a2) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_19(void * a1) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_19(void * a1) { return 0; }
__attribute__((weak)) void * Script_FormatString_19(void * a1, int a2) { return 0; }
__attribute__((weak)) int RainDynCubeObj_Setup(long double a1, float a2) { return 0; }
__attribute__((weak)) void * RainDynCubeObj_Process(void * a1) { return 0; }
__attribute__((weak)) int RainDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) int RainDynCubeObj_Action(void * a1) { return 0; }
__attribute__((weak)) int** RainDynCubeObj_Update(void * a1) { return 0; }
__attribute__((weak)) int** Script_ParseEnumInt32_20(int a1) { return 0; }
__attribute__((weak)) int Script_VisibleCubesD(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_20(void * a1) { return 0; }
__attribute__((weak)) long double Script_ParseEnumString_20(void * a1, float a2, float a3) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_20(void * a1, float a2) { return 0; }
__attribute__((weak)) void * RainDynCubeObj_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_20(void * a1) { return 0; }
__attribute__((weak)) unsigned int Script_EvaluateCondition_20(void) { return 0; }
__attribute__((weak)) int Script_FormatString_20(int a1) { return 0; }
__attribute__((weak)) long double Script_SpawnNewTask_21(float a1) { return 0; }
__attribute__((weak)) void * Script_ParseEnumInt32_21(int a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int* TerrainLightMap_Init(void) { return 0; }
__attribute__((weak)) int TerrainLightMap_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int TerrainLightMap_Setup(int* a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_21(int a1) { return 0; }
__attribute__((weak)) unsigned int Script_ParseEnumString_21(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_21(void) { return 0; }
__attribute__((weak)) struct status_msg* Script_CallNativeHandler_21(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int* Graph_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * Graph_Process(void * a1) { return 0; }
__attribute__((weak)) int Graph_Update(void * a1) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_21(void) { return 0; }
__attribute__((weak)) int Script_FormatString_21(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_22(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_22(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_22(void) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_22(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_22(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_22(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_22(void) { return 0; }
__attribute__((weak)) void * Script_FormatString_22(int a1) { return 0; }
__attribute__((weak)) double* Script_SpawnNewTask_23(double* a1, void * a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_23(void * a1, double* a2) { return 0; }
__attribute__((weak)) short* Script_NoFreeNodesizeElemen(short a1, int a2) { return 0; }
__attribute__((weak)) int Script_UndefinedGraphnodeda(void * a1) { return 0; }
__attribute__((weak)) int* Script_GraphnodeIdAlreadyUs(void * a1, int a2, int a3, int a4, float a5, int a6, int a7) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_23(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_23(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Script_ExecuteLevelScript_23(void * a1, int a2) { return 0; }
__attribute__((weak)) double* Script_CallNativeHandler_23(double* a1, void * a2) { return 0; }
__attribute__((weak)) void * Script_EvaluateCondition_23(float* a1, void * a2, char a3) { return 0; }
__attribute__((weak)) int Script_FormatString_23(double* a1, void * a2, double a3, char a4) { return 0; }
__attribute__((weak)) int* Script_SpawnNewTask_24(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) int Script_GraphnodeLinklimitRe(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_24(int* a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_24(void * a1, int a2) { return 0; }
__attribute__((weak)) char * Script_ParseEnumString_24(int* a1, double* a2, int a3) { return 0; }
__attribute__((weak)) void * Script_GraphstreamCollision(char * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_24(char * a1) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_24(void * a1, char * a2, int a3, int* a4, int a5) { return 0; }
__attribute__((weak)) int Graph_Open(void * a1) { return 0; }
__attribute__((weak)) int* Script_FormatString_24(int a1) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_25(void * a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int __fastcall Script_ParseEnumInt32_25(unsigned int a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_25(int a1, int a2, int a3, void * a4, char a5) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_25(int a1, int a2, int a3, void * a4, char a5) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_25(int a1, int a2, int a3, void * a4, short a5) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_25(int a1, int a2, int a3, void * a4, short a5) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_25(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_FormatString_25(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_26(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_26(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_26(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_26(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_26(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) char * Script_CallNativeHandler_26(void * a1, char * a2) { return 0; }
__attribute__((weak)) short* Script_EvaluateCondition_26(void * a1, short* a2) { return 0; }
__attribute__((weak)) int* Script_FormatString_26(void * a1, int* a2) { return 0; }
__attribute__((weak)) float* Script_SpawnNewTask_27(void * a1, float* a2) { return 0; }
__attribute__((weak)) double* Script_ParseEnumInt32_27(void * a1, double* a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_27(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Script_ParseEnumString_27(void * a1, int a2) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_27(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) unsigned int Script_CallNativeHandler_27(void * a1) { return 0; }
__attribute__((weak)) void * Graph_Init(void) { return 0; }
__attribute__((weak)) int Graph_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* Graph_Action(int* a1) { return 0; }
__attribute__((weak)) int Graph_Cleanup(int a1, int a2, int a3, int* a4) { return 0; }
__attribute__((weak)) int* Graph_Cleanup_2(int* a1) { return 0; }
__attribute__((weak)) int* Graph_Cleanup_3(int* a1) { return 0; }
__attribute__((weak)) unsigned int Script_EvaluateCondition_27(void) { return 0; }
__attribute__((weak)) int PhysicsObj_Init(void) { return 0; }
__attribute__((weak)) int PhysicsObj_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Script_FormatString_27(void) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_28(void) { return 0; }
__attribute__((weak)) void * Script_ParseEnumInt32_28(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_28(void * a1, char * a2) { return 0; }
__attribute__((weak)) void * Script_ParseEnumString_28(void * a1) { return 0; }
__attribute__((weak)) int* Body_ResolveCollision(float a1, float a2) { return 0; }
__attribute__((weak)) float Script_ExecuteLevelScript_28(void * a1, float a2, float* a3, float* a4, int a5, int a6)  { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_28(void * a1, float a2, float a3, int a4, float a5) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_28(void * a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) float* Script_FormatString_28(float a1, float a2, float a3, float a4, float a5, int a6, double* a7) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_29(void * a1, int a2, char a3, double* a4) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_29(void * a1) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_29(void) { return 0; }
__attribute__((weak)) int Script_ExecuteLevelScript_29(void) { return 0; }
__attribute__((weak)) int Script_CallNativeHandler_29(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_29(float* a1, void * a2, float* a3, float* a4) { return 0; }
__attribute__((weak)) float Script_FormatString_29(float a1, float* a2, float a3, float* a4, float a5, float a6)  { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_30(void * a1, float a2, float a3, float a4, float a5) { return 0; }
__attribute__((weak)) int Particle2DDynCubeObjTask_Init(void) { return 0; }
__attribute__((weak)) int Particle2DDynCubeObjTask_Process(float a1) { return 0; }
__attribute__((weak)) float Script_ParseEnumInt32_30(void * a1, float a2)  { return 0; }
__attribute__((weak)) void * Particle2DDynCubeObjTask_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) long double Script_ParseEnumReal32_30(void * a1) { return 0; }
__attribute__((weak)) double* Script_ParseEnumString_30(double* a1, void * a2) { return 0; }
__attribute__((weak)) void Script_ExecuteLevelScript_30(void * a1, int a2) { return; }
__attribute__((weak)) int Particle2DDynCubeObjTask_Setup(void * a1) { return 0; }
__attribute__((weak)) int Particle2DDynCubeObjTask_Update(float a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Script_CallNativeHandler_30(void) { return 0; }
__attribute__((weak)) int Script_EvaluateCondition_30(void) { return 0; }
__attribute__((weak)) struct status_msg* Script_FormatString_30(void * a1, void * a2, unsigned int a3, int* a4, int* a5, int* a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13) { return 0; }
__attribute__((weak)) int Script_SpawnNewTask_31(void * a1, int a2, int* a3, int a4, int a5, int a6, int a7, short a8, int a9) { return 0; }
__attribute__((weak)) int Script_ParseEnumInt32_31(void * a1, int a2, int* a3, float a4, float a5, float a6, int a7, int a8, int a9, int a10, short a11, int a12) { return 0; }
__attribute__((weak)) int Script_ParseEnumReal32_31(void * a1, char a2) { return 0; }
__attribute__((weak)) int Script_ParseEnumString_31(void * a1, int a2) { return 0; }
__attribute__((weak)) double* Script_ExecuteLevelScript_31(void * a1, double* a2) { return 0; }
__attribute__((weak)) struct status_msg* Script_CallNativeHandler_31(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) struct status_msg* Script_EvaluateCondition_31(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* Script_FormatString_31(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* TagItem_Init(void) { return 0; }
__attribute__((weak)) void * Script_SpawnNewTask_32(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Script_ParseEnumInt32_32(void) { return 0; }
__attribute__((weak)) char * Script_ParseEnumReal32_32(int a1, float* a2, int* a3, char * a4, float a5, int a6, float* a7) { return 0; }
__attribute__((weak)) int SplineObj_Process(float a1) { return 0; }
__attribute__((weak)) float* SplineObj_Update(int* a1) { return 0; }
__attribute__((weak)) float* Physics_EvaluateAreaCriteria(void * a1) { return 0; }
__attribute__((weak)) long double Physics_SimulateRigidBody(float a1) { return 0; }
__attribute__((weak)) void * Physics_CheckHullCollision(int a1) { return 0; }
__attribute__((weak)) long double Physics_ApplyImpulse(float a1, int a2) { return 0; }
__attribute__((weak)) int* Physics_UpdateForces(int a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* SplineObj_Init(void) { return 0; }
__attribute__((weak)) int SplineObj_Setup(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* SplineObj_OnEvent(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * SplineObj_Cleanup(void * a1, int a2) { return 0; }
__attribute__((weak)) void * SplineObj_Cleanup_2(void * a1, int a2) { return 0; }
__attribute__((weak)) void * SplineObj_Cleanup_3(void * a1, int a2) { return 0; }
__attribute__((weak)) void * SplineObj_Cleanup_4(void * a1, int a2) { return 0; }
__attribute__((weak)) int Physics_SolveConstraints(void) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_2(long double a1, long double a2, long double a3, long double a4, long double a5, long double a6, long double a7, long double a8, float* a9, int* a10, float a11) { return 0; }
__attribute__((weak)) int EditorRigidObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int EditorRigidObj_Update(void) { return 0; }
__attribute__((weak)) int EditorRigidObj_OnEvent(void) { return 0; }
__attribute__((weak)) int* SimpointObj_Init(void) { return 0; }
__attribute__((weak)) int* SimpointObj_Process(int* a1) { return 0; }
__attribute__((weak)) unsigned int Physics_EvaluateAreaCriteria_2(void) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_2(void) { return 0; }
__attribute__((weak)) struct status_msg* Physics_CheckHullCollision_2(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, int* a8, char a9) { return 0; }
__attribute__((weak)) struct status_msg* Physics_VirmodelIsNull(void * a1, int a2, int a3, int a4, int* a5) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_2(void * a1, char a2) { return 0; }
__attribute__((weak)) void * PhysicsMagicObj_Init(void) { return 0; }
__attribute__((weak)) int* PhysicsMagicObj_LoadParameters(int* a1, float a2) { return 0; }
__attribute__((weak)) void * PhysicsMagicObj_Setup(void * a1, float a2) { return 0; }
__attribute__((weak)) unsigned int Physics_SolveConstraints_2(void) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_3(void) { return 0; }
__attribute__((weak)) double* Physics_InterpolateWaypoint_3(void * a1, double* a2) { return 0; }
__attribute__((weak)) int* AreaActivate_Init(void) { return 0; }
__attribute__((weak)) int AreaActivate_Update(void * a1) { return 0; }
__attribute__((weak)) int AreaActivate_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int AreaActivate_Setup(void * a1) { return 0; }
__attribute__((weak)) int AreaActivate_Process(void * a1) { return 0; }
__attribute__((weak)) void * AreaActivate_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Physics_SimulateRigidBody_3(void) { return 0; }
__attribute__((weak)) int Physics_UnableToRegisterArea(int* a1, int a2) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_3(int a1) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_3(void * a1) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_Process(void * a1) { return 0; }
__attribute__((weak)) int* EditRigidObjAttachedToBone_Init(void) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_Update(void) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_OnEvent(void) { return 0; }
__attribute__((weak)) void * EditRigidObjAttachedToBone_Process_2(int* a1, int* a2) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_Action(void) { return 0; }
__attribute__((weak)) int EditRigidObjAttachedToBone_OnTick(void) { return 0; }
__attribute__((weak)) int MenuItemTask_Init(void) { return 0; }
__attribute__((weak)) void * MenuItemTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Physics_SolveConstraints_3(void) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_4(void * a1, int a2) { return 0; }
__attribute__((weak)) struct status_msg* Physics_InterpolateWaypoint_4(void * a1) { return 0; }
__attribute__((weak)) int MenuItem_Init(void) { return 0; }
__attribute__((weak)) int MenuItem_LoadParameters(void * a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Physics_EvaluateAreaCriteria_4(void) { return 0; }
__attribute__((weak)) void * const Physics_SimulateRigidBody_4(int a1, int a2, void * a3, void * a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_4(void * a1, int a2) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_4(void * a1) { return 0; }
__attribute__((weak)) int Physics_UpdateForces_4(void * a1) { return 0; }
__attribute__((weak)) int Physics_MenuitemMoveCalledWi(void * a1, int a2) { return 0; }
__attribute__((weak)) void * Physics_SolveConstraints_4(void * a1, int a2, int a3, int a4, int a5, int a6, char a7, int a8) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_5(void) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_5(void) { return 0; }
__attribute__((weak)) int Physics_EvaluateAreaCriteria_5(void) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_5(void) { return 0; }
__attribute__((weak)) int Container_Init(void) { return 0; }
__attribute__((weak)) unsigned int Container_Update(void) { return 0; }
__attribute__((weak)) int Container_OnEvent(void) { return 0; }
__attribute__((weak)) int* TextureModifier_Init(void) { return 0; }
__attribute__((weak)) int TextureModifier_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) void Physics_ApplyImpulse_5(void) { return; }
__attribute__((weak)) unsigned int Physics_UpdateForces_5(void) { return 0; }
__attribute__((weak)) struct status_msg* Physics_SolveConstraints_5(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) void * HeightMap_Enter(void * a1) { return 0; }
__attribute__((weak)) int* HeightMap_Init(void) { return 0; }
__attribute__((weak)) void * HeightMap_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int HeightMap_Setup(int* a1) { return 0; }
__attribute__((weak)) unsigned int Physics_InterpolateWaypoint_6(void) { return 0; }
__attribute__((weak)) struct status_msg* Physics_EvaluateAreaCriteria_6(void * a1, void * a2, int a3) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_6(void) { return 0; }
__attribute__((weak)) unsigned int Physics_CheckHullCollision_6(void) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_6(int* a1, int a2) { return 0; }
__attribute__((weak)) short* Physics_UpdateForces_6(int* a1, int a2) { return 0; }
__attribute__((weak)) void * EditCamera_Init(void) { return 0; }
__attribute__((weak)) int* EditCamera_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) char * EditCamera_OnParsed(void * a1, char * a2) { return 0; }
__attribute__((weak)) int* Physics_SolveConstraints_6(void) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_7(void) { return 0; }
__attribute__((weak)) float* Physics_InterpolateWaypoint_7(double* a1, float* a2, int a3) { return 0; }
__attribute__((weak)) float* Physics_EvaluateAreaCriteria_7(double* a1, float* a2, double* a3, float* a4, int a5) { return 0; }
__attribute__((weak)) void Physics_SimulateRigidBody_7(void) { return; }
__attribute__((weak)) int Sync_Init(void) { return 0; }
__attribute__((weak)) int Sync_Setup(int* a1) { return 0; }
__attribute__((weak)) unsigned int Sync_OnEvent(void) { return 0; }
__attribute__((weak)) int Sync_Process(void) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_7(void) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_7(void) { return 0; }
__attribute__((weak)) int Physics_UpdateForces_7(void) { return 0; }
__attribute__((weak)) void * AIGraph_Init(void) { return 0; }
__attribute__((weak)) char * AIGraph_Cleanup(int* a1) { return 0; }
__attribute__((weak)) void * Physics_SolveConstraints_7(void * a1) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_8(void * a1) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_8(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int AIGraph_Cleanup_2(void * a1, int a2) { return 0; }
__attribute__((weak)) int AIGraph_Action(void * a1) { return 0; }
__attribute__((weak)) int AIGraph_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AIGraph_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Physics_EvaluateAreaCriteria_8(void) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_8(void) { return 0; }
__attribute__((weak)) void * Physics_CheckHullCollision_8(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_8(int* a1, void * a2, double* a3) { return 0; }
__attribute__((weak)) int Physics_UpdateForces_8(void) { return 0; }
__attribute__((weak)) int Physics_SolveConstraints_8(void) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_9(void) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_9(void * a1, int a2) { return 0; }
__attribute__((weak)) int Physics_EvaluateAreaCriteria_9(void) { return 0; }
__attribute__((weak)) int Physics_Local(void) { return 0; }
__attribute__((weak)) int Physics_Local_2(void) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_9(FILETIME* a1, FILETIME* a2) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_9(void) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_9(void) { return 0; }
__attribute__((weak)) int Physics_QvertexDrawstrip(void) { return 0; }
__attribute__((weak)) int Physics_UpdateForces_9(void) { return 0; }
__attribute__((weak)) int Physics_CouldNotCreateDirect(void) { return 0; }
__attribute__((weak)) int __stdcall Physics_SolveConstraints_9(void * a1) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_10(int a1) { return 0; }
__attribute__((weak)) void Physics_InterpolateWaypoint_10(void) { return; }
__attribute__((weak)) int* Physics_EvaluateAreaCriteria_10(void) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_10(int a1) { return 0; }
__attribute__((weak)) HANDLE Physics_CheckHullCollision_10(int a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) unsigned int Physics_ApplyImpulse_10(void * a1, char * a2, unsigned int a3) { return 0; }
__attribute__((weak)) unsigned int Physics_UpdateForces_10(void * a1, char * a2, unsigned int a3) { return 0; }
__attribute__((weak)) void * Physics_SolveConstraints_10(void * a1) { return 0; }
__attribute__((weak)) void * Physics_CalculateSplineLength_11(void * a1) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_11(int* a1, PSTR a2) { return 0; }
__attribute__((weak)) long double Physics_EvaluateAreaCriteria_11(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) void * Physics_SimulateRigidBody_11(int* a1) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_11(void * a1) { return 0; }
__attribute__((weak)) int* Physics_ApplyImpulse_11(void) { return 0; }
__attribute__((weak)) int* Physics_UpdateForces_11(int* a1) { return 0; }
__attribute__((weak)) void ** Physics_SolveConstraints_11(void ** a1) { return 0; }
__attribute__((weak)) int* Physics_CalculateSplineLength_12(int a1, int a2, float a3) { return 0; }
__attribute__((weak)) int Physics_CouldnTGetSurfaceDes(int* a1) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_12(int* a1) { return 0; }
__attribute__((weak)) int Physics_EvaluateAreaCriteria_12(int a1, int a2) { return 0; }
__attribute__((weak)) int Physics_CouldnTGetSurfacedes(int* a1, int a2, int a3, int* a4, int* a5, int* a6) { return 0; }
__attribute__((weak)) int __stdcall Physics_SimulateRigidBody_12(int a1) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_12(void) { return 0; }
__attribute__((weak)) int Physics_ApplyImpulse_12(void) { return 0; }
__attribute__((weak)) void * Physics_UpdateForces_12(int* a1) { return 0; }
__attribute__((weak)) int Physics_SolveConstraints_12(void * a1) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_13(float a1, int a2, float a3, int a4, float a5, int a6, int a7, int a8, int a9) { return 0; }
__attribute__((weak)) int** Physics_InterpolateWaypoint_13(int* a1) { return 0; }
__attribute__((weak)) int Physics_EvaluateAreaCriteria_13(void * a1) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_13(void) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_13(void * a1) { return 0; }
__attribute__((weak)) void * Physics_ApplyImpulse_13(void * a1) { return 0; }
__attribute__((weak)) void * Physics_UpdateForces_13(void * a1) { return 0; }
__attribute__((weak)) int Physics_SolveConstraints_13(void * a1) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_14(void) { return 0; }
__attribute__((weak)) int* Physics_InterpolateWaypoint_14(void * a1) { return 0; }
__attribute__((weak)) void Physics_EvaluateAreaCriteria_14(float a1) { return; }
__attribute__((weak)) int Physics_Offscreenbuffersprit(void * a1) { return 0; }
__attribute__((weak)) int Physics_SimulateRigidBody_14(void * a1) { return 0; }
__attribute__((weak)) int Physics_CheckHullCollision_14(void) { return 0; }
__attribute__((weak)) int* Physics_ApplyImpulse_14(void * a1) { return 0; }
__attribute__((weak)) void * Physics_UpdateForces_14(void * a1) { return 0; }
__attribute__((weak)) int Physics_SolveConstraints_14(int* a1, float a2) { return 0; }
__attribute__((weak)) int Physics_CalculateSplineLength_15(int* a1) { return 0; }
__attribute__((weak)) int Physics_InterpolateWaypoint_15(void) { return 0; }
__attribute__((weak)) int Terrain_RenderQuadtree(void) { return 0; }
__attribute__((weak)) int Terrain_UpdateWaterWaves(void) { return 0; }
__attribute__((weak)) void * Terrain_RenderWaterSurface(void * a1) { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode(double* a1) { return 0; }
__attribute__((weak)) int Terrain_SampleHeightmap(int a1, int a2, int a3, int a4, int a5, int a6, int* a7, int* a8, int* a9, char a10, char a11, char a12) { return 0; }
__attribute__((weak)) int Terrain_CalculateNormals(int a1, int a2) { return 0; }
__attribute__((weak)) int BoneDynCubeObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Terrain_BuildMipMaps(void) { return 0; }
__attribute__((weak)) float Terrain_RenderQuadtree_2(float a1, void * a2)  { return 0; }
__attribute__((weak)) unsigned int Terrain_SelectTerrainLOD_2(void) { return 0; }
__attribute__((weak)) int Terrain_UpdateWaterWaves_2(void * a1) { return 0; }
__attribute__((weak)) int Terrain_Glowreadbufferprimit(void) { return 0; }
__attribute__((weak)) int Terrain_RenderWaterSurface_2(void) { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode_2(int a1) { return 0; }
__attribute__((weak)) int Terrain_SampleHeightmap_2(void) { return 0; }
__attribute__((weak)) int __stdcall Terrain_Draw(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, double a9, double a10, double a11, double a12) { return 0; }
__attribute__((weak)) int Terrain_UnknownBlendmode(int a1) { return 0; }
__attribute__((weak)) int* Terrain_OutOfTerrainRenderch(int a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Terrain_BuildMipMaps_2(char a1, char a2, int a3, int* a4) { return 0; }
__attribute__((weak)) int* Terrain_RenderQuadtree_3(void) { return 0; }
__attribute__((weak)) int Terrain_SelectTerrainLOD_3(void) { return 0; }
__attribute__((weak)) int Terrain_UpdateWaterWaves_3(void) { return 0; }
__attribute__((weak)) char * Terrain_RenderWaterSurface_3(char * a1) { return 0; }
__attribute__((weak)) int80_t Terrain_ConnectGraphNode_3(long double a1)  { return 0; }
__attribute__((weak)) long double Terrain_SampleHeightmap_3(int a1, short a2, long double a3, int a4, int a5) { return 0; }
__attribute__((weak)) int80_t Terrain_CalculateNormals_3(long double a1)  { return 0; }
__attribute__((weak)) long double Terrain_BuildMipMaps_3(int a1, short a2, long double a3, int a4, int a5) { return 0; }
__attribute__((weak)) char * Terrain_RenderQuadtree_4(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) long double Terrain_SelectTerrainLOD_4(char * a1) { return 0; }
__attribute__((weak)) char * Terrain_UpdateWaterWaves_4(char * a1, char * a2, char * a3, char * a4, char * a5) { return 0; }
__attribute__((weak)) int Terrain_RenderWaterSurface_4(PSTR a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_ConnectGraphNode_4(char * a1, int a2, unsigned int a3, int* a4) { return 0; }
__attribute__((weak)) unsigned int Terrain_SampleHeightmap_4(char * a1, int a2, unsigned int a3, int* a4) { return 0; }
__attribute__((weak)) int Terrain_CalculateNormals_4(int a1) { return 0; }
__attribute__((weak)) char * Terrain_BuildMipMaps_4(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int Terrain_SelectTerrainLOD_5(int a1, void ** a2, char * a3, int a4) { return 0; }
__attribute__((weak)) int Terrain_UpdateWaterWaves_5(char * a1) { return 0; }
__attribute__((weak)) int80_t Terrain_RenderWaterSurface_5(char * a1)  { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode_5(char * a1) { return 0; }
__attribute__((weak)) int* Terrain_TextureFileNotOfRequ(int* a1) { return 0; }
__attribute__((weak)) int Terrain_SampleHeightmap_5(void * a1) { return 0; }
__attribute__((weak)) void Terrain_CalculateNormals_5(int* a1) { return; }
__attribute__((weak)) void ** Terrain_BuildMipMaps_5(void ** a1, int a2) { return 0; }
__attribute__((weak)) void ** Terrain_RenderQuadtree_6(void ** a1, int a2) { return 0; }
__attribute__((weak)) void ** Terrain_SelectTerrainLOD_6(void * a1, int a2) { return 0; }
__attribute__((weak)) int* Terrain_UpdateWaterWaves_6(int* a1, int a2) { return 0; }
__attribute__((weak)) int Terrain_RenderWaterSurface_6(void * a1) { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode_6(char * a1) { return 0; }
__attribute__((weak)) int* Terrain_SampleHeightmap_6(char * a1) { return 0; }
__attribute__((weak)) int* Terrain_CalculateNormals_6(int* a1, int a2, int a3) { return 0; }
__attribute__((weak)) int Terrain_BuildMipMaps_6(int a1, int* a2, int* a3, int a4) { return 0; }
__attribute__((weak)) short* Terrain_RenderQuadtree_7(char * a1, int a2, short* a3, short* a4, int a5, int a6, int* a7) { return 0; }
__attribute__((weak)) short* Terrain_SelectTerrainLOD_7(char * a1, int a2, short* a3, short* a4, int a5, int a6, int* a7) { return 0; }
__attribute__((weak)) int* Terrain_UpdateWaterWaves_7(int* a1, int a2, int* a3, int a4, int a5, int a6, int* a7) { return 0; }
__attribute__((weak)) void * Terrain_RenderWaterSurface_7(void * a1, int a2, int a3, int a4, char * a5, int a6, int* a7, int a8, int* a9) { return 0; }
__attribute__((weak)) double* Terrain_ConnectGraphNode_7(double* a1, int a2, int a3, double a4, double a5, double a6) { return 0; }
__attribute__((weak)) long double Terrain_SampleHeightmap_7(double* a1, double a2) { return 0; }
__attribute__((weak)) long double Terrain_CalculateNormals_7(double* a1, double a2) { return 0; }
__attribute__((weak)) void * Terrain_BuildMipMaps_7(void ** a1) { return 0; }
__attribute__((weak)) int Terrain_RenderQuadtree_8(int a1) { return 0; }
__attribute__((weak)) int Terrain_SelectTerrainLOD_8(void) { return 0; }
__attribute__((weak)) int Terrain_UpdateWaterWaves_8(int a1) { return 0; }
__attribute__((weak)) int Terrain_RenderWaterSurface_8(void) { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode_8(void) { return 0; }
__attribute__((weak)) int Terrain_SampleHeightmap_8(int* a1, float* a2, float* a3) { return 0; }
__attribute__((weak)) int Terrain_CalculateNormals_8(void) { return 0; }
__attribute__((weak)) int Terrain_BuildMipMaps_8(void) { return 0; }
__attribute__((weak)) int Terrain_RenderQuadtree_9(int* a1) { return 0; }
__attribute__((weak)) int Terrain_SelectTerrainLOD_9(int a1) { return 0; }
__attribute__((weak)) int* GraphNode_Init(void) { return 0; }
__attribute__((weak)) void * GraphNode_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int GraphNode_OnEvent(void) { return 0; }
__attribute__((weak)) int Water_Process(void * a1, float a2) { return 0; }
__attribute__((weak)) double* Water_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) int* Water_Init(void) { return 0; }
__attribute__((weak)) void * Water_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_UpdateWaterWaves_9(void) { return 0; }
__attribute__((weak)) void * Terrain_RenderWaterSurface_9(int a1) { return 0; }
__attribute__((weak)) int Terrain_ConnectGraphNode_9(int* a1) { return 0; }
__attribute__((weak)) int GFXCapsViewer_Init(void) { return 0; }
__attribute__((weak)) unsigned int GFXCapsViewer_Update(void) { return 0; }
__attribute__((weak)) int* ShadowTask_Init(void) { return 0; }
__attribute__((weak)) unsigned int ShadowTask_Update(void) { return 0; }
__attribute__((weak)) int* SplinePathNodeQTask_Init(void) { return 0; }
__attribute__((weak)) int SplinePathNodeQTask_Setup(void * a1) { return 0; }
__attribute__((weak)) int SplinePathNodeQTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_SampleHeightmap_9(void) { return 0; }
__attribute__((weak)) float Terrain_CalculateNormals_9(float a1)  { return 0; }
__attribute__((weak)) long double Terrain_BuildMipMaps_9(int a1, float a2) { return 0; }
__attribute__((weak)) void * Terrain_RenderQuadtree_10(void * a1) { return 0; }
__attribute__((weak)) int Terrain_SelectTerrainLOD_10(float a1, int a2) { return 0; }
__attribute__((weak)) int SplinePathDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int SplinePathDynCubeObj_Update(void) { return 0; }
__attribute__((weak)) int SplinePathDynCubeObj_OnEvent(int a1, float a2, int a3, float a4) { return 0; }
__attribute__((weak)) float* SplinePathDynCubeObj_Process(float* a1, float a2, float a3, float a4) { return 0; }
__attribute__((weak)) float* Terrain_UpdateWaterWaves_10(float a1, float* a2, float a3, float a4) { return 0; }
__attribute__((weak)) void Terrain_RenderWaterSurface_10(float a1) { return; }
__attribute__((weak)) int Terrain_ConnectGraphNode_10(void * a1) { return 0; }
__attribute__((weak)) void SplinePathGuideQTask_LoadParameters(float a1) { return; }
__attribute__((weak)) void * Terrain_SampleHeightmap_10(void * a1) { return 0; }
__attribute__((weak)) int* SplinePathGuideQTask_Init(void) { return 0; }
__attribute__((weak)) void * SplinePathGuideQTask_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_CalculateNormals_10(void) { return 0; }
__attribute__((weak)) void * AnimSound_Init(void) { return 0; }
__attribute__((weak)) struct status_msg* AnimSound_Process(int* a1) { return 0; }
__attribute__((weak)) unsigned int AnimSound_OnEvent(void) { return 0; }
__attribute__((weak)) int EditorMagicObj_LoadParameters(void * a1, void * a2) { return 0; }
__attribute__((weak)) void * EditorMagicObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int EditorMagicObj_Update(void) { return 0; }
__attribute__((weak)) void * LevelTimer_Init(void) { return 0; }
__attribute__((weak)) int LevelTimer_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int LevelTimer_Update(void * a1) { return 0; }
__attribute__((weak)) int LevelTimer_OnEvent(void * a1) { return 0; }
__attribute__((weak)) char * LevelTimer_Process(void * a1) { return 0; }
__attribute__((weak)) int LevelTimer_Tick(int80_t a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Terrain_BuildMipMaps_10(void) { return 0; }
__attribute__((weak)) int* SoundManager_Init(void) { return 0; }
__attribute__((weak)) int* SoundManager_LoadParameters(char * a1, char * a2) { return 0; }
__attribute__((weak)) int Terrain_RenderQuadtree_11(void) { return 0; }
__attribute__((weak)) int* FlatWater_Init(void) { return 0; }
__attribute__((weak)) void * FlatWater_LoadParameters(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, int a10, float a11, float a12) { return 0; }
__attribute__((weak)) int FlatSky_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int FlatSky_Cleanup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_RenderWaterSurface_11(void) { return 0; }
__attribute__((weak)) int* FlatSky_Init(void) { return 0; }
__attribute__((weak)) float FlatSky_Process(void * a1)  { return 0; }
__attribute__((weak)) int FlatSky_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * FlatSky_Setup(void * a1) { return 0; }
__attribute__((weak)) int FlatSky_Update(void * a1) { return 0; }
__attribute__((weak)) int FlatSky_Action(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_ConnectGraphNode_11(void) { return 0; }
__attribute__((weak)) int* MipMapControl_Init(void) { return 0; }
__attribute__((weak)) int MipMapControl_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Terrain_SampleHeightmap_11(void) { return 0; }
__attribute__((weak)) void * SmoothQTask_Init(void) { return 0; }
__attribute__((weak)) int SmoothQTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int SmoothQTask_Update(void * a1) { return 0; }
__attribute__((weak)) int SmoothQTask_OnEvent(void * a1) { return 0; }
__attribute__((weak)) char * SmoothQTask_Process(void * a1) { return 0; }
__attribute__((weak)) int* SmoothQTask_Setup(long double a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Terrain_CalculateNormals_11(void) { return 0; }
__attribute__((weak)) void * MoveRigidObj_Init(void) { return 0; }
__attribute__((weak)) int* MoveRigidObj_LoadParameters(unsigned int a1) { return 0; }
__attribute__((weak)) int MoveRigidObj_Update(void * a1) { return 0; }
__attribute__((weak)) int MoveRigidObj_OnEvent(void * a1) { return 0; }
__attribute__((weak)) int MoveRigidObj_Process(void * a1) { return 0; }
__attribute__((weak)) int MoveRigidObj_Setup(int80_t a1, float a2) { return 0; }
__attribute__((weak)) int Terrain_BuildMipMaps_11(float a1, void * a2, int a3) { return 0; }
__attribute__((weak)) unsigned int Terrain_RenderQuadtree_12(void) { return 0; }
__attribute__((weak)) int* NoiseQTask_Init(void) { return 0; }
__attribute__((weak)) int NoiseQTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int NoiseQTask_Update(void * a1) { return 0; }
__attribute__((weak)) int NoiseQTask_OnEvent(void * a1) { return 0; }
__attribute__((weak)) char * NoiseQTask_Process(void * a1) { return 0; }
__attribute__((weak)) int NoiseQTask_Setup(long double a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Light_RenderLensflare(void) { return 0; }
__attribute__((weak)) int* Origo_Init(void) { return 0; }
__attribute__((weak)) unsigned int Light_ApplyLightmap(void) { return 0; }
__attribute__((weak)) int Lensflare_Init(void) { return 0; }
__attribute__((weak)) void * Lensflare_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Light_UpdateGlobalLight(void) { return 0; }
__attribute__((weak)) int Light_CalculateAttenuation(void) { return 0; }
__attribute__((weak)) void * Light_SetLightColor(void) { return 0; }
__attribute__((weak)) int Light_Lightmaps(void) { return 0; }
__attribute__((weak)) int Light_LightmapsRes(void) { return 0; }
__attribute__((weak)) float* Light_SampleLightmap(int a1, int a2, int a3, int a4, void * a5, float* a6, int a7, float* a8, int a9, float* a10, float* a11, float* a12, float* a13, int a14, float* a15, int a16, int a17) { return 0; }
__attribute__((weak)) float* Light_ComputeDirectionalLight_2(int a1, int a2, int a3, int a4, void * a5, float* a6, int a7, float* a8, int a9, float* a10, float a11, float a12, float a13, float a14, float* a15, float* a16, float* a17, int a18, float* a19, int a20, int a21) { return 0; }
__attribute__((weak)) unsigned int Light_RenderLensflare_2(void * a1, double* a2, float* a3, float* a4, void * a5, int a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22) { return 0; }
__attribute__((weak)) int* Light_ApplyLightmap_2(int a1) { return 0; }
__attribute__((weak)) int Light_UpdateGlobalLight_2(void * a1) { return 0; }
__attribute__((weak)) int Light_CalculateAttenuation_2(void * a1) { return 0; }
__attribute__((weak)) int Light_SetLightColor_2(int* a1) { return 0; }
__attribute__((weak)) int Light_SampleLightmap_2(void * a1) { return 0; }
__attribute__((weak)) void * Light_ComputeDirectionalLight_3(int* a1) { return 0; }
__attribute__((weak)) int LightmapInfo_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int* Light_RenderLensflare_3(void * a1, int a2, int a3, int a4, int a5) { return 0; }
__attribute__((weak)) float* Light_CalculateAttenuation_4(float* a1, float a2, float* a3, float a4, float a5) { return 0; }
__attribute__((weak)) int Light_SetLightColor_4(int* a1) { return 0; }
__attribute__((weak)) int* LightmapInfo_Update(void * a1) { return 0; }
__attribute__((weak)) int* Light_ComputeDirectionalLight_5(int* a1) { return 0; }
__attribute__((weak)) int Light_RenderLensflare_5(void * a1) { return 0; }
__attribute__((weak)) int LightmapInfo_Setup(void * a1, int* a2) { return 0; }
__attribute__((weak)) int LightmapInfo_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int LightmapInfo_Init(void) { return 0; }
__attribute__((weak)) unsigned int Light_ApplyLightmap_5(void) { return 0; }
__attribute__((weak)) int* Light_UpdateGlobalLight_5(int a1) { return 0; }
__attribute__((weak)) int Light_LightsourceNotFound(int a1) { return 0; }
__attribute__((weak)) int* Light_CalculateAttenuation_5(float a1) { return 0; }
__attribute__((weak)) int* Dirlight_Init(void) { return 0; }
__attribute__((weak)) int Dirlight_Setup(void * a1) { return 0; }
__attribute__((weak)) int Dirlight_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Light_SetLightColor_5(void) { return 0; }
__attribute__((weak)) int Light_SampleLightmap_5(void) { return 0; }
__attribute__((weak)) int Light_ComputeDirectionalLight_6(float a1) { return 0; }
__attribute__((weak)) int* Light_RenderLensflare_6(void * a1) { return 0; }
__attribute__((weak)) int* GlobalLight_Init(void) { return 0; }
__attribute__((weak)) int GlobalLight_Setup(void * a1) { return 0; }
__attribute__((weak)) int GlobalLight_Process(void * a1) { return 0; }
__attribute__((weak)) unsigned int Light_ApplyLightmap_6(void) { return 0; }
__attribute__((weak)) void Light_UpdateGlobalLight_6(float a1) { return; }
__attribute__((weak)) int* AnimCam_Init(void) { return 0; }
__attribute__((weak)) void * Light_CalculateAttenuation_6(void * a1) { return 0; }
__attribute__((weak)) void * Light_SetLightColor_6(void * a1) { return 0; }
__attribute__((weak)) int* AnimCam_Process(void * a1, int** a2) { return 0; }
__attribute__((weak)) float Light_SampleLightmap_6(void * a1)  { return 0; }
__attribute__((weak)) int* Light_RenderLensflare_7(void * a1) { return 0; }
__attribute__((weak)) int AnimCam_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) void * Light_ApplyLightmap_7(void * a1) { return 0; }
__attribute__((weak)) int* Light_UpdateGlobalLight_7(void * a1, void ** a2) { return 0; }
__attribute__((weak)) int Light_U2F(int a1, int a2, int a3, void * a4) { return 0; }
__attribute__((weak)) unsigned int Light_CalculateAttenuation_7(void) { return 0; }
__attribute__((weak)) int AnimRigidDynCubeObj_Update(void * a1, int* a2) { return 0; }
__attribute__((weak)) int AnimRigidDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) int AnimRigidDynCubeObj_OnEvent(int a1, int* a2) { return 0; }
__attribute__((weak)) int AnimRigidDynCubeObj_Action(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int Light_SetLightColor_7(void) { return 0; }
__attribute__((weak)) int* AnimScaleTask_Init(void) { return 0; }
__attribute__((weak)) void * AnimScaleTask_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) char AnimScaleTask_Setup(int80_t a1, int a2) { return 0; }
__attribute__((weak)) unsigned int Light_SampleLightmap_7(void) { return 0; }
__attribute__((weak)) int* EditHazinglayer_Init(void) { return 0; }
__attribute__((weak)) int EditHazinglayer_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int Light_RenderLensflare_8(void) { return 0; }
__attribute__((weak)) int* CubeModifier_Init(void) { return 0; }
__attribute__((weak)) int CubeModifier_LoadParameters(int a1) { return 0; }
__attribute__((weak)) unsigned int Light_ApplyLightmap_8(void) { return 0; }
__attribute__((weak)) int* DiscardTerrainArea_Init(void) { return 0; }
__attribute__((weak)) void * DiscardTerrainArea_Setup(int a1) { return 0; }
__attribute__((weak)) void * Light_UpdateGlobalLight_8(void * a1, int a2, int a3, void * a4) { return 0; }
__attribute__((weak)) int Light_SetLightColor_8(int a1, int a2, void * a3) { return 0; }
__attribute__((weak)) unsigned int Light_SampleLightmap_8(void) { return 0; }
__attribute__((weak)) int DiscardTerrain_LoadParameters(int* a1) { return 0; }
__attribute__((weak)) int* DiscardTerrain_Init(void) { return 0; }
__attribute__((weak)) int DiscardTerrain_Setup(int a1, char * a2) { return 0; }
__attribute__((weak)) int DiscardTerrain_Process(int* a1, void * a2) { return 0; }
__attribute__((weak)) unsigned int Light_ComputeDirectionalLight_9(void) { return 0; }
__attribute__((weak)) struct status_msg* Light_RenderLensflare_9(void * a1, int a2, int a3) { return 0; }
__attribute__((weak)) int* SkyTask_Init(void) { return 0; }
__attribute__((weak)) unsigned int SkyTask_Update(void) { return 0; }
__attribute__((weak)) int* LevelScript_Init(void) { return 0; }
__attribute__((weak)) void * LevelScript_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int LevelScript_OnEvent(void) { return 0; }
__attribute__((weak)) int SimBoneDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int SimBoneDynCubeObj_Update(void) { return 0; }
__attribute__((weak)) int PushButton_Init(void) { return 0; }
__attribute__((weak)) int PushButton_LoadParameters(void * a1, int* a2) { return 0; }
__attribute__((weak)) unsigned int PushButton_OnEvent(void) { return 0; }
__attribute__((weak)) float* PushButton_Process(void) { return 0; }
__attribute__((weak)) int Light_ComputeDirectional(float* a1) { return 0; }
__attribute__((weak)) int Light_ApplyLightmap_9(float* a1, float* a2, float* a3, float* a4, float a5, float a6) { return 0; }
__attribute__((weak)) short* Light_UpdateGlobalLight_9(void * a1) { return 0; }
__attribute__((weak)) int Light_CalculateAttenuation_9(void * a1) { return 0; }
__attribute__((weak)) int Light_SetLightColor_9(void * a1) { return 0; }
__attribute__((weak)) int Light_SampleLightmap_9(int* a1, int* a2, int* a3, int* a4, int* a5, int* a6) { return 0; }
__attribute__((weak)) void * Light_ComputeDirectionalLight_10(void * a1, float a2) { return 0; }
__attribute__((weak)) int* Light_RenderLensflare_10(void) { return 0; }
__attribute__((weak)) int Light_ApplyLightmap_10(int* a1) { return 0; }
__attribute__((weak)) void * Light_UpdateGlobalLight_10(void) { return 0; }
__attribute__((weak)) unsigned int* Light_CalculateAttenuation_10(unsigned int* a1) { return 0; }
__attribute__((weak)) int Light_SetLightColor_10(int* a1, char * a2, int a3, int a4, int a5, int a6) { return 0; }
__attribute__((weak)) int Light_SampleLightmap_10(int* a1, char * a2) { return 0; }
__attribute__((weak)) int Light_ComputeDirectionalLight_11(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Light_RenderLensflare_11(void * a1, char * a2) { return 0; }
__attribute__((weak)) int Light_ApplyLightmap_11(int* a1, int* a2) { return 0; }
__attribute__((weak)) void * Light_UpdateGlobalLight_11(int a1) { return 0; }
__attribute__((weak)) unsigned int Light_CalculateAttenuation_11(int a1) { return 0; }
__attribute__((weak)) int Light_SetLightColor_11(float a1, void * a2, double* a3) { return 0; }
__attribute__((weak)) long double Light_SampleLightmap_11(float a1, float a2, int a3) { return 0; }
__attribute__((weak)) int Light_Watermesh(void) { return 0; }
__attribute__((weak)) int Light_ComputeDirectionalLight_12(void * a1) { return 0; }
__attribute__((weak)) void * Light_RenderLensflare_12(void * a1, float* a2, float a3) { return 0; }
__attribute__((weak)) int Light_ApplyLightmap_12(int a1, float a2) { return 0; }
__attribute__((weak)) float Light_UpdateGlobalLight_12(float a1, int* a2, int a3, int a4, int a5)  { return 0; }
__attribute__((weak)) float* Light_CalculateAttenuation_12(float* a1, float* a2, double* a3, int* a4) { return 0; }
__attribute__((weak)) void * Light_SetLightColor_12(float* a1, void * a2, double* a3, void * a4, void * a5, int a6) { return 0; }
__attribute__((weak)) int Light_SampleLightmap_12(void * a1, int a2, int a3, int a4) { return 0; }
__attribute__((weak)) unsigned int Light_RenderLensflare_13(void * a1, double* a2) { return 0; }
__attribute__((weak)) unsigned int Light_ApplyLightmap_13(void * a1, double* a2) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics(void) { return 0; }
__attribute__((weak)) int CamTask_Init(void) { return 0; }
__attribute__((weak)) unsigned int CamTask_Update(void) { return 0; }
__attribute__((weak)) int CamTask_OnEvent(void) { return 0; }
__attribute__((weak)) int CamTask_Process(void) { return 0; }
__attribute__((weak)) int CamTask_Action(void) { return 0; }
__attribute__((weak)) int CamTask_OnTick(int a1, int* a2, int* a3) { return 0; }
__attribute__((weak)) short* Particle_Render3DSprites(void * a1, short a2) { return 0; }
__attribute__((weak)) short* Particle_TriggerMuzzleFlash(int a1, short a2) { return 0; }
__attribute__((weak)) short* Particle_RenderTrails(int a1, short a2, short a3) { return 0; }
__attribute__((weak)) int Particle_FadeParticles(int a1, short a2, short a3) { return 0; }
__attribute__((weak)) int Particle_ResetEmitters(int a1, short a2) { return 0; }
__attribute__((weak)) int Particle_EmitParticles_2(int a1, int a2, short a3, short* a4) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics_2(int* a1, int* a2) { return 0; }
__attribute__((weak)) int Particle_Render3DSprites_2(void) { return 0; }
__attribute__((weak)) int* Particle_TriggerMuzzleFlash_2(int* a1, int a2) { return 0; }
__attribute__((weak)) int* Particle_RenderTrails_2(int* a1, int a2, int* a3) { return 0; }
__attribute__((weak)) int Particle_FadeParticles_2(int* a1) { return 0; }
__attribute__((weak)) int Particle_ResetEmitters_2(int* a1, char a2) { return 0; }
__attribute__((weak)) int Particle_EmitParticles_3(int a1, int a2) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics_3(void) { return 0; }
__attribute__((weak)) unsigned int Particle_Render3DSprites_3(void) { return 0; }
__attribute__((weak)) int Particle_TriggerMuzzleFlash_3(void) { return 0; }
__attribute__((weak)) int Particle_RenderTrails_3(void) { return 0; }
__attribute__((weak)) int FlashTask_Init(void) { return 0; }
__attribute__((weak)) int FlashTask_LoadParameters(float a1) { return 0; }
__attribute__((weak)) unsigned int FlashTask_OnEvent(void) { return 0; }
__attribute__((weak)) int* ParticleSystemDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) int ParticleSystemDynCubeObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int Particle_FadeParticles_3(double* a1, float a2) { return 0; }
__attribute__((weak)) int ParticleSystemDynCubeObj_Setup(void * a1) { return 0; }
__attribute__((weak)) unsigned int Particle_ResetEmitters_3(void) { return 0; }
__attribute__((weak)) int Particle_EmitParticles_4(void) { return 0; }
__attribute__((weak)) int FreeCamera_Init(void) { return 0; }
__attribute__((weak)) int FreeCamera_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) unsigned int FreeCamera_OnEvent(void) { return 0; }
__attribute__((weak)) int SpriteParticleSystemDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int SpriteParticleSystemDynCubeObj_Update(void) { return 0; }
__attribute__((weak)) int SpriteParticleSystemDynCubeObj_OnEvent(void) { return 0; }
__attribute__((weak)) int SpriteParticleSystemDynCubeObj_Process(void) { return 0; }
__attribute__((weak)) int SpriteParticleSystemDynCubeObj_Action(int a1, int* a2) { return 0; }
__attribute__((weak)) int SpriteParticleSystemDynCubeObj_OnTick(void * a1, void * a2, double* a3, float a4) { return 0; }
__attribute__((weak)) int PointlightDynCubeObj_Init(void) { return 0; }
__attribute__((weak)) unsigned int PointlightDynCubeObj_Update(void) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics_4(void) { return 0; }
__attribute__((weak)) int Particle_Render3DSprites_4(void) { return 0; }
__attribute__((weak)) int BoneMagicObj_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) void * BoneMagicObj_OnEvent(void * a1) { return 0; }
__attribute__((weak)) void * BoneMagicObj_Init(void) { return 0; }
__attribute__((weak)) int BoneMagicObj_Setup(int* a1, int* a2) { return 0; }
__attribute__((weak)) void * BoneMagicObj_Process(void * a1, int* a2) { return 0; }
__attribute__((weak)) int BoneMagicObj_Update(int* a1) { return 0; }
__attribute__((weak)) unsigned int Particle_RenderTrails_4(void) { return 0; }
__attribute__((weak)) int Particle_FadeParticles_4(void) { return 0; }
__attribute__((weak)) int Particle_ResetEmitters_4(void) { return 0; }
__attribute__((weak)) int Particle_EmitParticles_5(void) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics_5(void) { return 0; }
__attribute__((weak)) int Particle_Render3DSprites_5(void) { return 0; }
__attribute__((weak)) int Particle_TriggerMuzzleFlash_5(void) { return 0; }
__attribute__((weak)) int Sprite3D_LoadParameters(float a1) { return 0; }
__attribute__((weak)) int Sprite3D_Init(void) { return 0; }
__attribute__((weak)) unsigned int Sprite3D_Update(void) { return 0; }
__attribute__((weak)) int TransparencyList_LoadParameters(void * a1) { return 0; }
__attribute__((weak)) int TransparencyList_Init(void) { return 0; }
__attribute__((weak)) int* TransparencyList_Setup(int* a1) { return 0; }
__attribute__((weak)) int Particle_RenderTrails_5(void) { return 0; }
__attribute__((weak)) void Particle_FadeParticles_5(void ** a1, int* a2, void * a3, int a4) { return; }
__attribute__((weak)) char * Particle_ResetEmitters_5(char * a1, char * a2, int a3, int a4) { return 0; }
__attribute__((weak)) char * Particle_EmitParticles_6(char * a1, char * a2, int a3) { return 0; }
__attribute__((weak)) int Particle_UpdateParticlePhysics_6(void) { return 0; }
__attribute__((weak)) int Particle_Render3DSprites_6(void) { return 0; }
__attribute__((weak)) int Particle_TriggerMuzzleFlash_6(void) { return 0; }
__attribute__((weak)) int Particle_RenderTrails_6(void) { return 0; }
__attribute__((weak)) int Particle_FadeParticles_6(void) { return 0; }
__attribute__((weak)) int Particle_ResetEmitters_6(void) { return 0; }
__attribute__((weak)) int ADJ() { return 0; }
__attribute__((weak)) int AI() { return 0; }
__attribute__((weak)) int AIACTIONFLAG() { return 0; }
__attribute__((weak)) int AVIFileExit() { return 0; }
__attribute__((weak)) int AVIFileGetStream() { return 0; }
__attribute__((weak)) int AVIFileInfoA() { return 0; }
__attribute__((weak)) int AVIFileInit() { return 0; }
__attribute__((weak)) int AVIFileOpenA() { return 0; }
__attribute__((weak)) int AVIFileRelease() { return 0; }
__attribute__((weak)) int AVIStreamInfoA() { return 0; }
__attribute__((weak)) int AVIStreamRead() { return 0; }
__attribute__((weak)) int AVIStreamReadFormat() { return 0; }
__attribute__((weak)) int AVIStreamRelease() { return 0; }
__attribute__((weak)) int AdjustWindowRect() { return 0; }
__attribute__((weak)) int CHAR() { return 0; }
__attribute__((weak)) int COLOUR() { return 0; }
__attribute__((weak)) int COMBINE() { return 0; }
__attribute__((weak)) int CONTROL() { return 0; }
__attribute__((weak)) int ClientToScreen() { return 0; }
__attribute__((weak)) int CloseHandle() { return 0; }
__attribute__((weak)) int CoCreateInstance() { return 0; }
__attribute__((weak)) int CoInitialize() { return 0; }
__attribute__((weak)) int CoUninitialize() { return 0; }
__attribute__((weak)) int Collision_Reset() { return 0; }
__attribute__((weak)) int CompareFileTime() { return 0; }
__attribute__((weak)) int Config_SetContentControlPassword() { return 0; }
__attribute__((weak)) int CreateFileA() { return 0; }
__attribute__((weak)) int CreateICA() { return 0; }
__attribute__((weak)) int CreateMutexA() { return 0; }
__attribute__((weak)) int CreateWindowExA() { return 0; }
__attribute__((weak)) int CutScene() { return 0; }
__attribute__((weak)) int Define() { return 0; }
__attribute__((weak)) int DeleteDC() { return 0; }
__attribute__((weak)) int DeleteFileA() { return 0; }
__attribute__((weak)) int DestroyWindow() { return 0; }
__attribute__((weak)) int DirectDrawCreateEx() { return 0; }
__attribute__((weak)) int DirectDrawEnumerateExA() { return 0; }
__attribute__((weak)) int DirectInputCreateA() { return 0; }
__attribute__((weak)) int DirectInputCreateEx() { return 0; }
__attribute__((weak)) int DispatchMessageA() { return 0; }
__attribute__((weak)) int ErrorShow() { return 0; }
__attribute__((weak)) int ExitProcess() { return 0; }
__attribute__((weak)) int FOV() { return 0; }
__attribute__((weak)) int FUN_004017C0() { return 0; }
__attribute__((weak)) int FUN_004C1800() { return 0; }
__attribute__((weak)) int FindClose() { return 0; }
__attribute__((weak)) int FindFirstFileA() { return 0; }
__attribute__((weak)) int FindNextFileA() { return 0; }
__attribute__((weak)) int FlushFileBuffers() { return 0; }
__attribute__((weak)) int FreeEnvironmentStringsA() { return 0; }
__attribute__((weak)) int FreeEnvironmentStringsW() { return 0; }
__attribute__((weak)) int FreeLibrary() { return 0; }
__attribute__((weak)) int GRAPH() { return 0; }
__attribute__((weak)) int GetACP() { return 0; }
__attribute__((weak)) int GetCPInfo() { return 0; }
__attribute__((weak)) int GetClientRect() { return 0; }
__attribute__((weak)) int GetCommandLineA() { return 0; }
__attribute__((weak)) int GetCurrentProcess() { return 0; }
__attribute__((weak)) int GetDC() { return 0; }
__attribute__((weak)) int GetDeviceCaps() { return 0; }
__attribute__((weak)) int GetDriveTypeA() { return 0; }
__attribute__((weak)) int GetEnvironmentStrings() { return 0; }
__attribute__((weak)) int GetEnvironmentStringsW() { return 0; }
__attribute__((weak)) int GetEnvironmentVariableA() { return 0; }
__attribute__((weak)) int GetFileTime() { return 0; }
__attribute__((weak)) int GetFileType() { return 0; }
__attribute__((weak)) int GetForegroundWindow() { return 0; }
__attribute__((weak)) int GetLastError() { return 0; }
__attribute__((weak)) int GetLocalTime() { return 0; }
__attribute__((weak)) int GetLocaleInfoA() { return 0; }
__attribute__((weak)) int GetMessageA() { return 0; }
__attribute__((weak)) int GetModuleFileNameA() { return 0; }
__attribute__((weak)) int GetModuleHandleA() { return 0; }
__attribute__((weak)) int GetOEMCP() { return 0; }
__attribute__((weak)) int GetProcAddress() { return 0; }
__attribute__((weak)) int GetStartupInfoA() { return 0; }
__attribute__((weak)) int GetStdHandle() { return 0; }
__attribute__((weak)) int GetStringTypeA() { return 0; }
__attribute__((weak)) int GetStringTypeW() { return 0; }
__attribute__((weak)) int GetSystemMetrics() { return 0; }
__attribute__((weak)) int GetVersion() { return 0; }
__attribute__((weak)) int GetVersionExA() { return 0; }
__attribute__((weak)) int GetWindowLongA() { return 0; }
__attribute__((weak)) int HIGHD() { return 0; }
__attribute__((weak)) int HeapAlloc() { return 0; }
__attribute__((weak)) int HeapCreate() { return 0; }
__attribute__((weak)) int HeapDestroy() { return 0; }
__attribute__((weak)) int HeapFree() { return 0; }
__attribute__((weak)) int HeapReAlloc() { return 0; }
__attribute__((weak)) int Heap_FreeEntry() { return 0; }
__attribute__((weak)) int ICClose() { return 0; }
__attribute__((weak)) int ICDecompress() { return 0; }
__attribute__((weak)) int ICLocate() { return 0; }
__attribute__((weak)) int ICSendMessage() { return 0; }
__attribute__((weak)) int ID() { return 0; }
__attribute__((weak)) int IDLE() { return 0; }
__attribute__((weak)) int InvalidateRect() { return 0; }
__attribute__((weak)) int IsResourceLoaded() { return 0; }
__attribute__((weak)) int LAYOUT() { return 0; }
__attribute__((weak)) int LCMapStringA() { return 0; }
__attribute__((weak)) int LCMapStringW() { return 0; }
__attribute__((weak)) int LOWD() { return 0; }
__attribute__((weak)) int Large() { return 0; }
__attribute__((weak)) int Level_Load() { return 0; }
__attribute__((weak)) int LoadCursorA() { return 0; }
__attribute__((weak)) int LoadIconA() { return 0; }
__attribute__((weak)) int LoadLibraryA() { return 0; }
__attribute__((weak)) int Mem_Alloc8() { return 0; }
__attribute__((weak)) int MenuItem_Move() { return 0; }
__attribute__((weak)) int MessageBoxA() { return 0; }
__attribute__((weak)) int MultiByteToWideChar() { return 0; }
__attribute__((weak)) int ON() { return 0; }
__attribute__((weak)) int OffscreenBufferSprite_RenderSprite() { return 0; }
__attribute__((weak)) int Ordinal_DSOUND_1() { return 0; }
__attribute__((weak)) int OutputDebugStringA() { return 0; }
__attribute__((weak)) int PeekMessageA() { return 0; }
__attribute__((weak)) int QHash_Init() { return 0; }
__attribute__((weak)) int QTask_UnableToAllocateEvent() { return 0; }
__attribute__((weak)) int QvmLoad() { return 0; }
__attribute__((weak)) int REAL32() { return 0; }
__attribute__((weak)) int ROLB() { return 0; }
__attribute__((weak)) int RRCD() { return 0; }
__attribute__((weak)) int RaiseException() { return 0; }
__attribute__((weak)) int ReadFile() { return 0; }
__attribute__((weak)) int RegisterClassA() { return 0; }
__attribute__((weak)) int ReleaseDC() { return 0; }
__attribute__((weak)) int ReleaseMutex() { return 0; }
__attribute__((weak)) int ResourceLoad() { return 0; }
__attribute__((weak)) int RigidDynCubeObj_ParseConfigFile() { return 0; }
__attribute__((weak)) int RtlUnwind() { return 0; }
__attribute__((weak)) int SET() { return 0; }
__attribute__((weak)) int Script_RegisterNamespace() { return 0; }
__attribute__((weak)) int SetEndOfFile() { return 0; }
__attribute__((weak)) int SetFilePointer() { return 0; }
__attribute__((weak)) int SetFocus() { return 0; }
__attribute__((weak)) int SetForegroundWindow() { return 0; }
__attribute__((weak)) int SetHandleCount() { return 0; }
__attribute__((weak)) int SetStdHandle() { return 0; }
__attribute__((weak)) int SetWindowPos() { return 0; }
__attribute__((weak)) int SetWindowTextA() { return 0; }
__attribute__((weak)) int ShowCursor() { return 0; }
__attribute__((weak)) int ShowWindow() { return 0; }
__attribute__((weak)) int Sleep() { return 0; }
__attribute__((weak)) int StatusList_Clear() { return 0; }
__attribute__((weak)) int StatusMessage_Enqueue() { return 0; }
__attribute__((weak)) int StatusScreen_Get() { return 0; }
__attribute__((weak)) int StatusScreen_GetEvent() { return 0; }
__attribute__((weak)) int StatusScreen_OnEvent3() { return 0; }
__attribute__((weak)) int StatusScreen_OnLoad() { return 0; }
__attribute__((weak)) int Struct_Clear36() { return 0; }
__attribute__((weak)) int TASKTYPE_CUTSCENE() { return 0; }
__attribute__((weak)) int TEST_BITB() { return 0; }
__attribute__((weak)) int Table_GetAt() { return 0; }
__attribute__((weak)) int TerminateProcess() { return 0; }
__attribute__((weak)) int Timer_Commit() { return 0; }
__attribute__((weak)) int Timer_Now() { return 0; }
__attribute__((weak)) int Timer_SetLimit() { return 0; }
__attribute__((weak)) int TranslateMessage() { return 0; }
__attribute__((weak)) int UnhandledExceptionFilter() { return 0; }
__attribute__((weak)) int UnregisterClassA() { return 0; }
__attribute__((weak)) int UpdateWindow() { return 0; }
__attribute__((weak)) int VirtualAlloc() { return 0; }
__attribute__((weak)) int VirtualFree() { return 0; }
__attribute__((weak)) int WideCharToMultiByte() { return 0; }
__attribute__((weak)) int WriteFile() { return 0; }
__attribute__((weak)) int Z() { return 0; }
__attribute__((weak)) int __aulldiv() { return 0; }
__attribute__((weak)) int __aullrem() { return 0; }
__attribute__((weak)) int __bsf_gprv_memv() { return 0; }
__attribute__((weak)) int __bsr_gprv_memv() { return 0; }
__attribute__((weak)) int __checkTOS_withFB() { return 0; }
__attribute__((weak)) int __convertTOStoQNaN() { return 0; }
__attribute__((weak)) int __f2xm1() { return 0; }
__attribute__((weak)) int __fcos() { return 0; }
__attribute__((weak)) int __fldcw_memmem16() { return 0; }
__attribute__((weak)) int __fldenv_memmem28() { return 0; }
__attribute__((weak)) int __fload() { return 0; }
__attribute__((weak)) int __fload_withFB() { return 0; }
__attribute__((weak)) int __fnclex() { return 0; }
__attribute__((weak)) int __fnsave_memmem108() { return 0; }
__attribute__((weak)) int __fnstcw_memmem16() { return 0; }
__attribute__((weak)) int __fnstenv_memmem28() { return 0; }
__attribute__((weak)) int __fpatan() { return 0; }
__attribute__((weak)) int __fprem() { return 0; }
__attribute__((weak)) int __fprem1() { return 0; }
__attribute__((weak)) int __fptan() { return 0; }
__attribute__((weak)) int __frag() { return 0; }
__attribute__((weak)) int __frstor_memmem108() { return 0; }
__attribute__((weak)) int __fscale() { return 0; }
__attribute__((weak)) int __fsin() { return 0; }
__attribute__((weak)) int __fxam() { return 0; }
__attribute__((weak)) int __fyl2x() { return 0; }
__attribute__((weak)) int __load_CW() { return 0; }
__attribute__((weak)) int __memfill_u16() { return 0; }
__attribute__((weak)) int __memfill_u32() { return 0; }
__attribute__((weak)) int __offset() { return 0; }
__attribute__((weak)) int __startOneArgErrorHandling() { return 0; }
__attribute__((weak)) int __startTwoArgErrorHandling() { return 0; }
__attribute__((weak)) int __trandisp1() { return 0; }
__attribute__((weak)) int __trandisp2() { return 0; }
__attribute__((weak)) int __twoToTOS() { return 0; }
__attribute__((weak)) int _isintTOS() { return 0; }
__attribute__((weak)) int _start() { return 0; }
__attribute__((weak)) int _test_whether_TOS_is_int() { return 0; }
__attribute__((weak)) int a1() { return 0; }
__attribute__((weak)) int a2() { return 0; }
__attribute__((weak)) int a3() { return 0; }
__attribute__((weak)) int a4() { return 0; }
__attribute__((weak)) int a5() { return 0; }
__attribute__((weak)) int a8() { return 0; }
__attribute__((weak)) int action() { return 0; }
__attribute__((weak)) int active() { return 0; }
__attribute__((weak)) int activeProfileIndex() { return 0; }
__attribute__((weak)) int arming() { return 0; }
__attribute__((weak)) int away() { return 0; }
__attribute__((weak)) int binding() { return 0; }
__attribute__((weak)) int bitmask() { return 0; }
__attribute__((weak)) int block() { return 0; }
__attribute__((weak)) int bounds() { return 0; }
__attribute__((weak)) int briefings() { return 0; }
__attribute__((weak)) int build() { return 0; }
__attribute__((weak)) int callback() { return 0; }
__attribute__((weak)) int calls() { return 0; }
__attribute__((weak)) int chain() { return 0; }
__attribute__((weak)) int channel() { return 0; }
__attribute__((weak)) int control() { return 0; }
__attribute__((weak)) int ctxB1() { return 0; }
__attribute__((weak)) int ctxB3() { return 0; }
__attribute__((weak)) int defined() { return 0; }
__attribute__((weak)) int device() { return 0; }
__attribute__((weak)) int directly() { return 0; }
__attribute__((weak)) int dstD1() { return 0; }
__attribute__((weak)) int dstD2() { return 0; }
__attribute__((weak)) int dstD3() { return 0; }
__attribute__((weak)) int dwords() { return 0; }
__attribute__((weak)) int enhancers() { return 0; }
__attribute__((weak)) int entries() { return 0; }
__attribute__((weak)) int entry() { return 0; }
__attribute__((weak)) int error() { return 0; }
__attribute__((weak)) int event() { return 0; }
__attribute__((weak)) int exe() { return 0; }
__attribute__((weak)) int explicitly() { return 0; }
__attribute__((weak)) int fabs0f() { return 0; }
__attribute__((weak)) int failure() { return 0; }
__attribute__((weak)) int falloff() { return 0; }
__attribute__((weak)) int flag() { return 0; }
__attribute__((weak)) int flow() { return 0; }
__attribute__((weak)) int form() { return 0; }
__attribute__((weak)) int globally() { return 0; }
__attribute__((weak)) int globals() { return 0; }
__attribute__((weak)) int grammar() { return 0; }
__attribute__((weak)) int ground() { return 0; }
__attribute__((weak)) int handled() { return 0; }
__attribute__((weak)) int handlers() { return 0; }
__attribute__((weak)) int hard() { return 0; }
__attribute__((weak)) int header() { return 0; }
__attribute__((weak)) int id() { return 0; }
__attribute__((weak)) int init() { return 0; }
__attribute__((weak)) int input() { return 0; }
__attribute__((weak)) int instantly() { return 0; }
__attribute__((weak)) int j_AVIFileExit() { return 0; }
__attribute__((weak)) int j_AnimSound_LoadParameters() { return 0; }
__attribute__((weak)) int j_DynObj_FindSymbol_5() { return 0; }
__attribute__((weak)) int j_DynObj_UpdateDynTree_3() { return 0; }
__attribute__((weak)) int j_Render_ClipMesh_11() { return 0; }
__attribute__((weak)) int length() { return 0; }
__attribute__((weak)) int list() { return 0; }
__attribute__((weak)) int load() { return 0; }
__attribute__((weak)) int manager() { return 0; }
__attribute__((weak)) int mapping() { return 0; }
__attribute__((weak)) int material() { return 0; }
__attribute__((weak)) int mciSendCommandA() { return 0; }
__attribute__((weak)) int menus() { return 0; }
__attribute__((weak)) int mixerClose() { return 0; }
__attribute__((weak)) int mixerGetControlDetailsA() { return 0; }
__attribute__((weak)) int mixerGetDevCapsA() { return 0; }
__attribute__((weak)) int mixerGetLineControlsA() { return 0; }
__attribute__((weak)) int mixerGetLineInfoA() { return 0; }
__attribute__((weak)) int mixerGetNumDevs() { return 0; }
__attribute__((weak)) int mixerOpen() { return 0; }
__attribute__((weak)) int mixerSetControlDetails() { return 0; }
__attribute__((weak)) int mode() { return 0; }
__attribute__((weak)) int modifier() { return 0; }
__attribute__((weak)) int name() { return 0; }
__attribute__((weak)) int native() { return 0; }
__attribute__((weak)) int node() { return 0; }
__attribute__((weak)) int objC1() { return 0; }
__attribute__((weak)) int objC10() { return 0; }
__attribute__((weak)) int objC12() { return 0; }
__attribute__((weak)) int objC13() { return 0; }
__attribute__((weak)) int objC14() { return 0; }
__attribute__((weak)) int objC2() { return 0; }
__attribute__((weak)) int objC21() { return 0; }
__attribute__((weak)) int objC24() { return 0; }
__attribute__((weak)) int objC28() { return 0; }
__attribute__((weak)) int objC3() { return 0; }
__attribute__((weak)) int objC4() { return 0; }
__attribute__((weak)) int objC5() { return 0; }
__attribute__((weak)) int objC6() { return 0; }
__attribute__((weak)) int objC7() { return 0; }
__attribute__((weak)) int objC8() { return 0; }
__attribute__((weak)) int object() { return 0; }
__attribute__((weak)) int operand() { return 0; }
__attribute__((weak)) int opt_str() { return 0; }
__attribute__((weak)) int output() { return 0; }
__attribute__((weak)) int pair() { return 0; }
__attribute__((weak)) int parameters() { return 0; }
__attribute__((weak)) int parsed() { return 0; }
__attribute__((weak)) int parser() { return 0; }
__attribute__((weak)) int parsing() { return 0; }
__attribute__((weak)) int player() { return 0; }
__attribute__((weak)) int point() { return 0; }
__attribute__((weak)) int post() { return 0; }
__attribute__((weak)) int prefix() { return 0; }
__attribute__((weak)) int profile() { return 0; }
__attribute__((weak)) int profiles() { return 0; }
__attribute__((weak)) int program() { return 0; }
__attribute__((weak)) int radius() { return 0; }
__attribute__((weak)) int real() { return 0; }
__attribute__((weak)) int result() { return 0; }
__attribute__((weak)) int running() { return 0; }
__attribute__((weak)) int s() { return 0; }
__attribute__((weak)) int screen() { return 0; }
__attribute__((weak)) int script() { return 0; }
__attribute__((weak)) int scripts() { return 0; }
__attribute__((weak)) int set() { return 0; }
__attribute__((weak)) int sites() { return 0; }
__attribute__((weak)) int slot() { return 0; }
__attribute__((weak)) int slots() { return 0; }
__attribute__((weak)) int sound() { return 0; }
__attribute__((weak)) int srcS3() { return 0; }
__attribute__((weak)) int srcS4() { return 0; }
__attribute__((weak)) int srcS8() { return 0; }
__attribute__((weak)) int stack() { return 0; }
__attribute__((weak)) int start() { return 0; }
__attribute__((weak)) int state() { return 0; }
__attribute__((weak)) int string() { return 0; }
__attribute__((weak)) int structure() { return 0; }
__attribute__((weak)) int styling() { return 0; }
__attribute__((weak)) int sub_4a8bd6() { return 0; }
__attribute__((weak)) int sub_4a8c78() { return 0; }
__attribute__((weak)) int sub_4a9a4e() { return 0; }
__attribute__((weak)) int sub_4aa0a6() { return 0; }
__attribute__((weak)) int sub_4ad8ba() { return 0; }
__attribute__((weak)) int subtitles() { return 0; }
__attribute__((weak)) int t() { return 0; }
__attribute__((weak)) int table() { return 0; }
__attribute__((weak)) int text() { return 0; }
__attribute__((weak)) int thunk() { return 0; }
__attribute__((weak)) int tmpD() { return 0; }
__attribute__((weak)) int tmpD1() { return 0; }
__attribute__((weak)) int tmpD16() { return 0; }
__attribute__((weak)) int tmpD6() { return 0; }
__attribute__((weak)) int type() { return 0; }
__attribute__((weak)) int unknown() { return 0; }
__attribute__((weak)) int valA() { return 0; }
__attribute__((weak)) int valA1() { return 0; }
__attribute__((weak)) int valA10() { return 0; }
__attribute__((weak)) int valA11() { return 0; }
__attribute__((weak)) int valA12() { return 0; }
__attribute__((weak)) int valA13() { return 0; }
__attribute__((weak)) int valA14() { return 0; }
__attribute__((weak)) int valA15() { return 0; }
__attribute__((weak)) int valA16() { return 0; }
__attribute__((weak)) int valA17() { return 0; }
__attribute__((weak)) int valA18() { return 0; }
__attribute__((weak)) int valA19() { return 0; }
__attribute__((weak)) int valA2() { return 0; }
__attribute__((weak)) int valA20() { return 0; }
__attribute__((weak)) int valA21() { return 0; }
__attribute__((weak)) int valA22() { return 0; }
__attribute__((weak)) int valA23() { return 0; }
__attribute__((weak)) int valA25() { return 0; }
__attribute__((weak)) int valA26() { return 0; }
__attribute__((weak)) int valA27() { return 0; }
__attribute__((weak)) int valA28() { return 0; }
__attribute__((weak)) int valA29() { return 0; }
__attribute__((weak)) int valA3() { return 0; }
__attribute__((weak)) int valA30() { return 0; }
__attribute__((weak)) int valA31() { return 0; }
__attribute__((weak)) int valA32() { return 0; }
__attribute__((weak)) int valA33() { return 0; }
__attribute__((weak)) int valA35() { return 0; }
__attribute__((weak)) int valA36() { return 0; }
__attribute__((weak)) int valA37() { return 0; }
__attribute__((weak)) int valA4() { return 0; }
__attribute__((weak)) int valA40() { return 0; }
__attribute__((weak)) int valA41() { return 0; }
__attribute__((weak)) int valA44() { return 0; }
__attribute__((weak)) int valA46() { return 0; }
__attribute__((weak)) int valA49() { return 0; }
__attribute__((weak)) int valA5() { return 0; }
__attribute__((weak)) int valA53() { return 0; }
__attribute__((weak)) int valA56() { return 0; }
__attribute__((weak)) int valA57() { return 0; }
__attribute__((weak)) int valA6() { return 0; }
__attribute__((weak)) int valA65() { return 0; }
__attribute__((weak)) int valA66() { return 0; }
__attribute__((weak)) int valA68() { return 0; }
__attribute__((weak)) int valA7() { return 0; }
__attribute__((weak)) int valA70() { return 0; }
__attribute__((weak)) int valA8() { return 0; }
__attribute__((weak)) int valA80() { return 0; }
__attribute__((weak)) int valA9() { return 0; }
__attribute__((weak)) int value() { return 0; }
__attribute__((weak)) int values() { return 0; }
__attribute__((weak)) int velocity() { return 0; }
__attribute__((weak)) int volume() { return 0; }
__attribute__((weak)) int volumes() { return 0; }
__attribute__((weak)) int vpath() { return 0; }
__attribute__((weak)) int when() { return 0; }
__attribute__((weak)) int window() { return 0; }
