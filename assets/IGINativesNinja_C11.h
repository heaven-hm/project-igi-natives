#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

/* IGI1 4645 Ninja-confirmed methods, readable C11. Full bodies from Binary Ninja. */

/* 0x00401000 QTask_CreateTask -> QTask_CreateTask */
uint32_t QTask_CreateTask(void);
/* 0x00401050 QTask_OpenEvent -> QTask_OpenEvent */
void QTask_OpenEvent(void);
/* 0x004010a0 QTask_CloseEvent -> QTask_CloseEvent */
void QTask_CloseEvent(void);
/* 0x004010b0 QTask_DispatchEvent -> QTask_DispatchEvent */
void QTask_DispatchEvent(void);
/* 0x004010d0 QTask_Init -> QTask_Init */
void QTask_Init(void);
/* 0x004011b0 QTask_Update -> QTask_Update */
void QTask_Update(void);
/* 0x004011d0 QTask_OnEvent -> QTask_OnEvent */
void QTask_OnEvent(void);
/* 0x004011f0 QTask_Process -> QTask_Process */
void QTask_Process(void);
/* 0x00401230 QTask_Action -> QTask_Action */
void QTask_Action(void);
/* 0x00401270 QTask_OnTick -> QTask_OnTick */
void QTask_OnTick(void);
/* 0x004012a0 QTask_HandleInput -> QTask_HandleInput */
int QTask_HandleInput(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004012f0 QTask_LinkEventHandler -> QTask_LinkEventHandler */
uint32_t * QTask_LinkEventHandler(uint32_t param_1, uint16_t param_2);
/* 0x004013b0 QTask_RegisterEventCallback -> QTask_RegisterEventCallback */
int QTask_RegisterEventCallback(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x00401400 QTask_RemoveEventCallback -> QTask_RemoveEventCallback */
void QTask_RemoveEventCallback(uint16_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004014b0 QTask_DeleteTask -> QTask_DeleteTask */
void QTask_DeleteTask(void);
/* 0x004014e0 QTask_ChangeParent -> QTask_ChangeParent */
uint32_t QTask_ChangeParent(uint32_t param_1);
/* 0x00401530 QTask_TriggerEvent -> QTask_TriggerEvent */
void QTask_TriggerEvent(uint16_t param_1, int param_2, uint32_t param_3);
/* 0x004015d0 QTask_AllocateEvent -> QTask_AllocateEvent */
void QTask_AllocateEvent(int param_1);
/* 0x004015f0 QTask_FindType -> QTask_FindType */
void QTask_FindType(uint32_t *param_1);
/* 0x00401780 QTask_CleanupTypes -> QTask_CleanupTypes */
void QTask_CleanupTypes(int param_1);
/* 0x004017c0 QTask_UnableToAllocateEven -> QTask_UnableToAllocateEvent */
void QTask_UnableToAllocateEvent(uint16_t param_1);
/* 0x00401810 QTask_UnableToAllocateEven_2 -> QTask_UnableToAllocateEvent_2 */
void QTask_UnableToAllocateEvent_2(uint16_t param_1);
/* 0x00401860 QTask_CleanupEvents -> QTask_CleanupEvents */
void QTask_CleanupEvents(uint16_t param_1, uint32_t param_2);
/* 0x00401890 QTask_ProcessQueue -> QTask_ProcessQueue */
void QTask_ProcessQueue(uint16_t param_1, int param_2);
/* 0x004018c0 QTask_InitContext -> QTask_InitContext */
void QTask_InitContext(uint32_t param_1);
/* 0x004018e0 QTask_CreateTask_2 -> QTask_CreateTask_2 */
void QTask_CreateTask_2(uint32_t param_1);
/* 0x004018f0 QTask_OpenEvent_2 -> QTask_OpenEvent_2 */
uint16_t QTask_OpenEvent_2(void);
/* 0x00401900 TaskType_Register -> TaskType_Register */
uint16_t TaskType_Register(uint32_t p1, uint32_t p2, uint16_t parentType, uint32_t p4);
/* 0x00401a20 QTask_CloseEvent_2 -> QTask_CloseEvent_2 */
void QTask_CloseEvent_2(uint32_t param_1);
/* 0x00401a60 QTask_DispatchEvent_2 -> QTask_DispatchEvent_2 */
uint32_t QTask_DispatchEvent_2(void);
/* 0x00401a70 QTask_QtaskTypeSNotDefined -> QTask_QtaskTypeSNotDefined */
uint32_t QTask_QtaskTypeSNotDefined(byte *param_1);
/* 0x00401ae0 QTask_LinkEventHandler_2 -> QTask_LinkEventHandler_2 */
void QTask_LinkEventHandler_2(int param_1);
/* 0x00401b20 Qtask_UpdateList -> Qtask_UpdateList */
void Qtask_UpdateList(int* p1);
/* 0x00401b90 QTask_RegisterEventCallback_2 -> QTask_RegisterEventCallback_2 */
uint32_t QTask_RegisterEventCallback_2(uint32_t param_1);
/* 0x00401bb0 QTask_RemoveEventCallback_2 -> QTask_RemoveEventCallback_2 */
void QTask_RemoveEventCallback_2(int param_1, int param_2);
/* 0x00401be0 QTask_DeleteTask_2 -> QTask_DeleteTask_2 */
uint32_t * QTask_DeleteTask_2(int param_1, short param_2);
/* 0x00401c10 QTask_ChangeParent_2 -> QTask_ChangeParent_2 */
int QTask_ChangeParent_2(int param_1, short param_2);
/* 0x00401c40 QTask_TriggerEvent_2 -> QTask_TriggerEvent_2 */
int * QTask_TriggerEvent_2(int *param_1, short param_2);
/* 0x00401c80 QTask_AllocateEvent_2 -> QTask_AllocateEvent_2 */
int QTask_AllocateEvent_2(int param_1, short param_2);
/* 0x00401cc0 QTask_FindType_2 -> QTask_FindType_2 */
int QTask_FindType_2(int param_1, uint32_t param_2);
/* 0x00401cf0 TaskType_IsDerivedFrom -> TaskType_IsDerivedFrom */
bool TaskType_IsDerivedFrom(uint16_t typeId, uint16_t baseTypeId);
/* 0x00401d30 QTask_CleanupTypes_2 -> QTask_CleanupTypes_2 */
void QTask_CleanupTypes_2(byte param_1, int param_2);
/* 0x00401d50 QTask_CleanupEvents_2 -> QTask_CleanupEvents_2 */
void QTask_CleanupEvents_2(uint32_t param_1);
/* 0x00401d80 QTask_ProcessQueue_2 -> QTask_ProcessQueue_2 */
void QTask_ProcessQueue_2(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x00401e30 QTask_InitContext_2 -> QTask_InitContext_2 */
void QTask_InitContext_2(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x00401e70 QTask_CreateTask_3 -> QTask_CreateTask_3 */
void QTask_CreateTask_3(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x00401f30 QTask_OpenEvent_3 -> QTask_OpenEvent_3 */
void QTask_OpenEvent_3(uint32_t param_1);
/* 0x00401f40 QTask_CloseEvent_3 -> QTask_CloseEvent_3 */
void QTask_CloseEvent_3(uint32_t *param_1, uint32_t *param_2);
/* 0x00401f60 QTask_DispatchEvent_3 -> QTask_DispatchEvent_3 */
void QTask_DispatchEvent_3(uint32_t param_1);
/* 0x00401f80 QTask_LinkEventHandler_3 -> QTask_LinkEventHandler_3 */
void QTask_LinkEventHandler_3(uint32_t param_1);
/* 0x00401fa0 QTask_RegisterEventCallback_3 -> QTask_RegisterEventCallback_3 */
void QTask_RegisterEventCallback_3(uint32_t param_1, uint32_t param_2);
/* 0x00401fc0 Flow_Init -> Flow_Init */
void Flow_Init(void);
/* 0x00402260 Flow_LoadParameters -> Flow_LoadParameters */
void Flow_LoadParameters(void);
/* 0x00402780 Flow_RequestEvent -> Flow_RequestEvent */
void Flow_RequestEvent(int eventId);
/* 0x004027e0 Flow_InitEvents -> Flow_InitEvents */
void Flow_InitEvents(void);
/* 0x004027f0 Flow_RequestEvent_2 -> Flow_RequestEvent_2 */
uint16_t Flow_RequestEvent_2(void);
/* 0x00402800 Flow_CreateHandler -> Flow_CreateHandler */
void Flow_CreateHandler(uint32_t param_1);
/* 0x00402820 Frames_Set -> Frames_Set */
void Frames_Set(int frames);
/* 0x00402870 Frames_Get -> Frames_Get */
int Frames_Get(void);
/* 0x00402880 Game_GetContext -> Game_GetContext */
void* Game_GetContext(void);
/* 0x00402890 Game_GetScriptContext -> Game_GetScriptContext */
void* Game_GetScriptContext(void);
/* 0x004028a0 Flow_SetState -> Flow_SetState */
void Flow_SetState(int stateId);
/* 0x004028b0 Frames_GetUpdateCounter -> Frames_GetUpdateCounter */
int Frames_GetUpdateCounter(void);
/* 0x004028c0 Frames_GetTaskCounter -> Frames_GetTaskCounter */
int Frames_GetTaskCounter(void);
/* 0x004028d0 Game_TimingBegin -> Game_TimingBegin */
void Game_TimingBegin(void);
/* 0x004028f0 Game_TimingEnd -> Game_TimingEnd */
void Game_TimingEnd(void);
/* 0x00402930 Flow_RunHandler -> Flow_RunHandler */
void Flow_RunHandler(void);
/* 0x00402c40 Flow_DeleteHandler -> Flow_DeleteHandler */
void Flow_DeleteHandler(void);
/* 0x00402f50 Config_YmbeAfp -> Config_YmbeAfp */
void Config_YmbeAfp(void);
/* 0x00402ff0 Config_FillPlayerProfileListBox_2 -> Config_FillPlayerProfileListBox_2 */
void Config_FillPlayerProfileListBox_2(void);
/* 0x00403660 GOStart -> GOStart */
unknown GOStart(unknown param1, unknown* out_buffer);
/* 0x004036b0 GO_Player -> GO_Player */
int GO_Player(char* name);
/* 0x00403750 GO_ActiveMission -> GO_ActiveMission */
int GO_ActiveMission(int mission);
/* 0x004037c0 GO_InRemap -> GO_InRemap */
int GO_InRemap(int key1, int key2, int action);
/* 0x00403870 GO_InMouInv -> GO_InMouInv */
int GO_InMouInv(int invert);
/* 0x004038e0 GO_InMouSens -> GO_InMouSens */
float GO_InMouSens(float sensitivity);
/* 0x00403950 GO_GfxDisp -> GO_GfxDisp */
int GO_GfxDisp(int displayMode);
/* 0x00403a00 GO_GameLang -> GO_GameLang */
int GO_GameLang(int language);
/* 0x00403ac0 GO_GameDiff -> GO_GameDiff */
int GO_GameDiff(int difficulty);
/* 0x00403b30 Config_IsGermany -> Config_IsGermany */
int Config_IsGermany();
/* 0x00403b70 Config_ResetGraphicOptions -> Config_ResetGraphicOptions */
void Config_ResetGraphicOptions();
/* 0x00403c10 GO_ContentControlPW -> GO_ContentControlPW */
int GO_ContentControlPW();
/* 0x00403c70 Config_GetContentControlPassword -> Config_GetContentControlPassword */
char* Config_GetContentControlPassword();
/* 0x00403cc0 Config_VerifyContentControlPassword -> Config_VerifyContentControlPassword */
int Config_VerifyContentControlPassword(char* password);
/* 0x00403d90 Config_IsContentControlPasswordEnabled -> Config_IsContentControlPasswordEnabled */
int Config_IsContentControlPasswordEnabled();
/* 0x00403df0 GO_IsBlood -> GO_IsBlood */
int GO_IsBlood(int blood);
/* 0x00403e60 GO_SoundSpeech -> GO_SoundSpeech */
int GO_SoundSpeech(float volume);
/* 0x00403ef0 GO_SoundMusic -> GO_SoundMusic */
int GO_SoundMusic(float volume);
/* 0x00403f80 GO_SoundFX -> GO_SoundFX */
int GO_SoundFX(float volume);
/* 0x00404010 GO_GfxDevice -> GO_GfxDevice */
int GO_GfxDevice(int deviceIndex);
/* 0x00404080 GO_GfxGamma -> GO_GfxGamma */
int GO_GfxGamma(float gamma);
/* 0x004040f0 GO_GfxPerformance -> GO_GfxPerformance */
int GO_GfxPerformance(int flags);
/* 0x00404160 Config_GameOptionsInputSetInvertMouse -> Config_GameOptionsInputSetInvertMouse */
void Config_GameOptionsInputSetInvertMouse(int invert);
/* 0x004041d0 Config_GameOptionsInputGetInvertMouse -> Config_GameOptionsInputGetInvertMouse */
int Config_GameOptionsInputGetInvertMouse();
/* 0x00404230 Config_GameOptionsInputSetMouseSensitivity -> Config_GameOptionsInputSetMouseSensitivity */
void Config_GameOptionsInputSetMouseSensitivity(int value);
/* 0x00404290 Config_GameOptionsInputGetMouseSensitivity -> Config_GameOptionsInputGetMouseSensitivity */
int Config_GameOptionsInputGetMouseSensitivity();
/* 0x004042e0 Config_GameOptionsInputSetBloodEnabled -> Config_GameOptionsInputSetBloodEnabled */
void Config_GameOptionsInputSetBloodEnabled(int blood);
/* 0x00404340 Config_GameOptionsInputGetBloodEnabled -> Config_GameOptionsInputGetBloodEnabled */
int Config_GameOptionsInputGetBloodEnabled();
/* 0x00404390 Config_RegisterOptions -> Config_RegisterOptions */
void Config_RegisterOptions(int param_1);
/* 0x00404450 Config_FillScreenResolutionListBox -> Config_FillScreenResolutionListBox */
void Config_FillScreenResolutionListBox(int deviceIndex);
/* 0x00404510 Config_GraphicOptionsSetResolution -> Config_GraphicOptionsSetResolution */
void Config_GraphicOptionsSetResolution(int modeIndex);
/* 0x00404590 Config_GetActiveGraphicOptions -> Config_GetActiveGraphicOptions */
GraphicOptions* Config_GetActiveGraphicOptions();
/* 0x004045b0 Config_GraphicOptionsGetResolution -> Config_GraphicOptionsGetResolution */
int Config_GraphicOptionsGetResolution();
/* 0x004046a0 Config_FillRenderDeviceListBox -> Config_FillRenderDeviceListBox */
void Config_FillRenderDeviceListBox();
/* 0x00404710 Config_GraphicOptionsGetDevice -> Config_GraphicOptionsGetDevice */
int Config_GraphicOptionsGetDevice();
/* 0x004047f0 Config_GraphicOptionsSetDevice -> Config_GraphicOptionsSetDevice */
void Config_GraphicOptionsSetDevice(int deviceIndex);
/* 0x004048b0 Config_GraphicOptionsSetGamma -> Config_GraphicOptionsSetGamma */
void Config_GraphicOptionsSetGamma(float gamma);
/* 0x00404910 Config_GraphicOptionsGetGamma -> Config_GraphicOptionsGetGamma */
float Config_GraphicOptionsGetGamma();
/* 0x00404960 Config_GraphicOptionsSetTransparency -> Config_GraphicOptionsSetTransparency */
void Config_GraphicOptionsSetTransparency(int onOff);
/* 0x004049c0 Config_GraphicOptionsGetTransparency -> Config_GraphicOptionsGetTransparency */
int Config_GraphicOptionsGetTransparency();
/* 0x00404a10 Config_SoundOptionsSetSoundsEffects -> Config_SoundOptionsSetSoundsEffects */
void Config_SoundOptionsSetSoundsEffects(int onOff);
/* 0x00404a70 Config_SaveGameOptions -> Config_SaveGameOptions */
uint32_t * Config_SaveGameOptions(void);
/* 0x00404a90 Config_SoundOptionsGetSoundsEffects -> Config_SoundOptionsGetSoundsEffects */
int Config_SoundOptionsGetSoundsEffects();
/* 0x00404ae0 Config_SoundOptionsSetSoundsEffectsVolume -> Config_SoundOptionsSetSoundsEffectsVolume */
void Config_SoundOptionsSetSoundsEffectsVolume(float volume);
/* 0x00404b40 Config_SoundOptionsGetSoundsEffectsVolume -> Config_SoundOptionsGetSoundsEffectsVolume */
float Config_SoundOptionsGetSoundsEffectsVolume();
/* 0x00404b90 Config_SoundOptionsSetMusic -> Config_SoundOptionsSetMusic */
void Config_SoundOptionsSetMusic(int onOff);
/* 0x00404bf0 Config_SoundOptionsGetMusic -> Config_SoundOptionsGetMusic */
int Config_SoundOptionsGetMusic();
/* 0x00404c40 Config_SoundOptionsSetMusicVolume -> Config_SoundOptionsSetMusicVolume */
void Config_SoundOptionsSetMusicVolume(float volume);
/* 0x00404ca0 Config_SoundOptionsGetMusicVolume -> Config_SoundOptionsGetMusicVolume */
float Config_SoundOptionsGetMusicVolume();
/* 0x00404cf0 Config_SoundOptionsSetSpeech -> Config_SoundOptionsSetSpeech */
void Config_SoundOptionsSetSpeech(int onOff);
/* 0x00404d50 Config_SoundOptionsGetSpeech -> Config_SoundOptionsGetSpeech */
int Config_SoundOptionsGetSpeech();
/* 0x00404da0 Config_SoundOptionsSetSpeechVolume -> Config_SoundOptionsSetSpeechVolume */
void Config_SoundOptionsSetSpeechVolume(float volume);
/* 0x00404e00 Config_SoundOptionsGetSpeechVolume -> Config_SoundOptionsGetSpeechVolume */
float Config_SoundOptionsGetSpeechVolume();
/* 0x00404e50 Config_SoundOptionsSetReverseStereo -> Config_SoundOptionsSetReverseStereo */
void Config_SoundOptionsSetReverseStereo(int onOff);
/* 0x00404eb0 Config_SoundOptionsGetReverseStereo -> Config_SoundOptionsGetReverseStereo */
int Config_SoundOptionsGetReverseStereo();
/* 0x00404f00 Config_GraphicOptionsSetPerformanceFlags -> Config_GraphicOptionsSetPerformanceFlags */
void Config_GraphicOptionsSetPerformanceFlags(int flags);
/* 0x00404f60 Config_GraphicOptionsGetPerformanceFlags -> Config_GraphicOptionsGetPerformanceFlags */
int Config_GraphicOptionsGetPerformanceFlags();
/* 0x00404fa0 Config_FillPlayerProfileListBox -> Config_FillPlayerProfileListBox */
void Config_FillPlayerProfileListBox();
/* 0x00405010 Config_GetActivePlayerProfileIndex -> Config_GetActivePlayerProfileIndex */
int Config_GetActivePlayerProfileIndex();
/* 0x00405050 Config_SetActivePlayerProfileIndex -> Config_SetActivePlayerProfileIndex */
void Config_SetActivePlayerProfileIndex(int index);
/* 0x004050a0 Config_CreateNewPlayerProfile -> Config_CreateNewPlayerProfile */
int Config_CreateNewPlayerProfile(char* name, int sourceIndex);
/* 0x00405300 Config_SaveGraphicOptions -> Config_SaveGraphicOptions */
void Config_SaveGraphicOptions(void);
/* 0x00405400 Config_DeletePlayerProfile -> Config_DeletePlayerProfile */
int Config_DeletePlayerProfile(int index);
/* 0x004054f0 Config_GetNumberOfPlayerProfiles -> Config_GetNumberOfPlayerProfiles */
int Config_GetNumberOfPlayerProfiles();
/* 0x00405530 Config_GraphicOptionsGetPerfLevelFromFlags -> Config_GraphicOptionsGetPerfLevelFromFlags */
int Config_GraphicOptionsGetPerfLevelFromFlags(int flags);
/* 0x004055c0 Config_GraphicOptionsGetPerfFlagsFromLevel -> Config_GraphicOptionsGetPerfFlagsFromLevel */
int Config_GraphicOptionsGetPerfFlagsFromLevel(int level);
/* 0x00405620 Config_GraphicOptionsNumPerfLevels -> Config_GraphicOptionsNumPerfLevels */
int Config_GraphicOptionsNumPerfLevels();
/* 0x00405660 Config_FillMissionSelectionBox -> Config_FillMissionSelectionBox */
void Config_FillMissionSelectionBox();
/* 0x004056f0 Config_FillMissionPictureBox -> Config_FillMissionPictureBox */
void Config_FillMissionPictureBox();
/* 0x00405760 Config_FillMissionTextBox -> Config_FillMissionTextBox */
void Config_FillMissionTextBox();
/* 0x004057d0 Config_PlayerGetActiveMission -> Config_PlayerGetActiveMission */
int Config_PlayerGetActiveMission(int profileIndex);
/* 0x00405830 Config_Language -> Config_Language */
void Config_Language(void);
/* 0x00405850 Config_Read -> Config_Read */
int Config_Read(char* cfg_file);
/* 0x004058a0 Config_SaveSoundOptions -> Config_SaveSoundOptions */
void Config_SaveSoundOptions(void);
/* 0x00405980 Config_NoD3DDriversWithHard -> Config_NoD3DDriversWithHard */
void Config_NoD3DDriversWithHard(void);
/* 0x00405b30 Config_Language_2 -> Config_Language_2 */
void Config_Language_2(void);
/* 0x00405bd0 Config_Write -> Config_Write */
void Config_Write(char* cfg_file);
/* 0x00405c50 Config_SaveInputOptions -> Config_SaveInputOptions */
void Config_SaveInputOptions(uint32_t param_1);
/* 0x00405c90 Config_Goplayer -> Config_Goplayer */
void Config_Goplayer(uint32_t param_1, int param_2);
/* 0x00405d40 Config_English -> Config_English */
void Config_English(uint32_t param_1, int param_2);
/* 0x00405e00 Config_Gosoundspeech -> Config_Gosoundspeech */
void Config_Gosoundspeech(uint32_t param_1, int param_2);
/* 0x00405ec0 Config_Gogfxdisp -> Config_Gogfxdisp */
void Config_Gogfxdisp(uint32_t param_1, int param_2);
/* 0x00405f90 KEY_A -> KEY_A */
void KEY_A(uint32_t param_1, int param_2);
/* 0x00406170 Config_Gocontentcontrolpw -> Config_Gocontentcontrolpw */
void Config_Gocontentcontrolpw(uint32_t param_1);
/* 0x004061b0 Config_SavePlayerProfile -> Config_SavePlayerProfile */
uint32_t * Config_SavePlayerProfile(void);
/* 0x004061c0 Config_SetGamma -> Config_SetGamma */
uint32_t * Config_SetGamma(void);
/* 0x004061e0 Config_SetResolution -> Config_SetResolution */
uint32_t Config_SetResolution(void);
/* 0x00406200 Config_SetVolume -> Config_SetVolume */
void Config_SetVolume(uint32_t param_1);
/* 0x00406220 Config_GetActivePlayerProfileRecord -> Config_GetActivePlayerProfileRecord */
ProfileRecord* Config_GetActivePlayerProfileRecord();
/* 0x00406240 KEY_ANGLE -> KEY_ANGLE */
void KEY_ANGLE(int param_1, uint32_t *param_2, int *param_3);
/* 0x00406270 Config_SetDifficulty -> Config_SetDifficulty */
uint32_t Config_SetDifficulty(void);
/* 0x00406280 Config_Moveleft -> Config_Moveleft */
void Config_Moveleft(int param_1, uint32_t *param_2, int *param_3);
/* 0x004062b0 Config_ValidatePassword -> Config_ValidatePassword */
uint32_t Config_ValidatePassword(void);
/* 0x004062c0 Config_RegisterOptions_2 -> Config_RegisterOptions_2 */
float10 Config_RegisterOptions_2(void);
/* 0x004062d0 Config_SaveGameOptions_2 -> Config_SaveGameOptions_2 */
float10 Config_SaveGameOptions_2(void);
/* 0x004062e0 Config_SaveGraphicOptions_2 -> Config_SaveGraphicOptions_2 */
uint32_t Config_SaveGraphicOptions_2(void);
/* 0x004062f0 Config_SaveSoundOptions_2 -> Config_SaveSoundOptions_2 */
void Config_SaveSoundOptions_2(uint32_t param_1);
/* 0x00406310 Config_SaveInputOptions_2 -> Config_SaveInputOptions_2 */
uint32_t Config_SaveInputOptions_2(void);
/* 0x00406320 Config_English_2 -> Config_English_2 */
char * Config_English_2(int param_1);
/* 0x00406330 Config_SavePlayerProfile_2 -> Config_SavePlayerProfile_2 */
uint32_t * Config_SavePlayerProfile_2(int param_1);
/* 0x00406340 Config_SetGamma_2 -> Config_SetGamma_2 */
void Config_SetGamma_2(int param_1);
/* 0x00406390 Config_SetResolution_2 -> Config_SetResolution_2 */
void Config_SetResolution_2(void);
/* 0x00406450 HumanAIConfig_Init -> HumanAIConfig_Init */
void HumanAIConfig_Init(void);
/* 0x00406d10 HumanAIConfig_OnEvent -> HumanAIConfig_OnEvent */
void HumanAIConfig_OnEvent(int param_1);
/* 0x00406d40 AIConfig_RegisterConfig -> AIConfig_RegisterConfig */
void AIConfig_RegisterConfig(int param_1);
/* 0x00406d90 AIConfig_InitItem -> AIConfig_InitItem */
void AIConfig_InitItem(void);
/* 0x00406dd0 AIConfig_GetDetectionRange -> AIConfig_GetDetectionRange */
uint16_t AIConfig_GetDetectionRange(void);
/* 0x00406de0 AIConfig_SetDifficulty -> AIConfig_SetDifficulty */
uint16_t AIConfig_SetDifficulty(void);
/* 0x00406df0 AIConfig_UnableToCreateHumana -> AIConfig_UnableToCreateHumana */
void AIConfig_UnableToCreateHumana(int param_1);
/* 0x00406f70 AIConfig_NoHumanaiconfigTaskF -> AIConfig_NoHumanaiconfigTaskF */
void AIConfig_NoHumanaiconfigTaskF(int param_1);
/* 0x004071d0 AIConfig_LoadSettings -> AIConfig_LoadSettings */
uint8_t AIConfig_LoadSettings(void);
/* 0x004071e0 Weapon_ConfigRead -> Weapon_ConfigRead */
int Weapon_ConfigRead(int context, char* cfgText);
/* 0x00407290 WeaponConfig_Init -> WeaponConfig_Init */
void WeaponConfig_Init(void);
/* 0x00407bb0 AIConfig_ApplyProfile -> AIConfig_ApplyProfile */
void AIConfig_ApplyProfile(int param_1);
/* 0x00407be0 WeaponConfig_Setup -> WeaponConfig_Setup */
void WeaponConfig_Setup(void);
/* 0x00407cd0 AIConfig_RegisterConfig_2 -> AIConfig_RegisterConfig_2 */
int AIConfig_RegisterConfig_2(int param_1);
/* 0x00407d00 AIConfig_InitItem_2 -> AIConfig_InitItem_2 */
void AIConfig_InitItem_2(void);
/* 0x00407d60 HumanPlayer_Setactivematerial -> HumanPlayer_Setactivematerial */
void HumanPlayer_Setactivematerial(void);
/* 0x00407de0 SetActiveMaterial -> SetActiveMaterial */
unknown SetActiveMaterial(unknown param1, unknown param2);
/* 0x00407e30 DefineQ_Material -> DefineQ_Material */
void DefineQ_Material(...);
/* 0x00407f50 Define_GameMaterial -> Define_GameMaterial */
void Define_GameMaterial(...);
/* 0x004082b0 HumanPlayer_LoadParameters_2 -> HumanPlayer_LoadParameters_2 */
void HumanPlayer_LoadParameters_2(void);
/* 0x00408320 HumanPlayer_UpdateMotion -> HumanPlayer_UpdateMotion */
uint8_t HumanPlayer_UpdateMotion(void);
/* 0x00408330 HumanPlayer_CheckGround -> HumanPlayer_CheckGround */
uint8_t HumanPlayer_CheckGround(void);
/* 0x00408340 HumanPlayer_UpdateStamina -> HumanPlayer_UpdateStamina */
uint8_t HumanPlayer_UpdateStamina(void);
/* 0x00408350 GameMaterial_LoadParameters -> GameMaterial_LoadParameters */
void GameMaterial_LoadParameters(void);
/* 0x00408390 HumanPlayer_UpdateHealth -> HumanPlayer_UpdateHealth */
void HumanPlayer_UpdateHealth(uint32_t param_1);
/* 0x004083c0 HumanPlayer_HandleInput -> HumanPlayer_HandleInput */
void HumanPlayer_HandleInput(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t *param_5);
/* 0x00408420 HumanPlayer_ApplyPhysics -> HumanPlayer_ApplyPhysics */
void HumanPlayer_ApplyPhysics(int param_1);
/* 0x00408460 FallLanding -> FallLanding */
void FallLanding();
/* 0x00408720 HumanPlayer_PlayFootstep -> HumanPlayer_PlayFootstep */
int HumanPlayer_PlayFootstep(uint32_t param_1);
/* 0x00408770 HumanPlayer_PlaySound -> HumanPlayer_PlaySound */
void HumanPlayer_PlaySound(int param_1, int param_2);
/* 0x00408a40 HumanPlayer_TakeDamage -> HumanPlayer_TakeDamage */
void HumanPlayer_TakeDamage(int param_1, int param_2);
/* 0x00408aa0 HumanPlayer_UpdateAnimation -> HumanPlayer_UpdateAnimation */
void HumanPlayer_UpdateAnimation(int param_1, int param_2);
/* 0x00408c30 HumanPlayer_CheckCollision -> HumanPlayer_CheckCollision */
void HumanPlayer_CheckCollision(int param_1, int param_2);
/* 0x00408c80 HumanPlayer_ApplyRecoil -> HumanPlayer_ApplyRecoil */
void HumanPlayer_ApplyRecoil(int param_1, int param_2);
/* 0x00408df0 HumanPlayer_LoadParameters_3 -> HumanPlayer_LoadParameters_3 */
void HumanPlayer_LoadParameters_3(void);
/* 0x00408e70 HumanPlayer_UpdateMotion_2 -> HumanPlayer_UpdateMotion_2 */
void HumanPlayer_UpdateMotion_2(int param_1, int param_2);
/* 0x00408fe0 HumanPlayer_CheckGround_2 -> HumanPlayer_CheckGround_2 */
void HumanPlayer_CheckGround_2(int param_1, int param_2);
/* 0x00409090 HumanPlayer_UpdateStamina_2 -> HumanPlayer_UpdateStamina_2 */
void HumanPlayer_UpdateStamina_2(int param_1, int param_2);
/* 0x00409220 HumanPlayer_UpdateHealth_2 -> HumanPlayer_UpdateHealth_2 */
void HumanPlayer_UpdateHealth_2(void);
/* 0x004092a0 HumanPlayer_HandleInput_2 -> HumanPlayer_HandleInput_2 */
void HumanPlayer_HandleInput_2(int param_1, int param_2);
/* 0x00409410 HumanPlayer_ApplyPhysics_2 -> HumanPlayer_ApplyPhysics_2 */
void HumanPlayer_ApplyPhysics_2(void);
/* 0x00409490 HumanPlayer_PlayFootstep_2 -> HumanPlayer_PlayFootstep_2 */
void HumanPlayer_PlayFootstep_2(int param_1, int param_2);
/* 0x00409600 HumanPlayer_PlaySound_2 -> HumanPlayer_PlaySound_2 */
void HumanPlayer_PlaySound_2(int param_1, int param_2);
/* 0x00409660 HumanPlayer_TakeDamage_2 -> HumanPlayer_TakeDamage_2 */
void HumanPlayer_TakeDamage_2(int param_1, int param_2);
/* 0x004097f0 HumanPlayer_UpdateAnimation_2 -> HumanPlayer_UpdateAnimation_2 */
void HumanPlayer_UpdateAnimation_2(int param_1, int param_2);
/* 0x00409850 HumanPlayer_CheckCollision_2 -> HumanPlayer_CheckCollision_2 */
void HumanPlayer_CheckCollision_2(int param_1, int param_2);
/* 0x004099e0 HumanPlayer_ApplyRecoil_2 -> HumanPlayer_ApplyRecoil_2 */
void HumanPlayer_ApplyRecoil_2(void);
/* 0x00409c10 HumanPlayer_LoadParameters_4 -> HumanPlayer_LoadParameters_4 */
void HumanPlayer_LoadParameters_4(void);
/* 0x00409e00 HumanPlayer_UpdateMotion_3 -> HumanPlayer_UpdateMotion_3 */
void HumanPlayer_UpdateMotion_3(void);
/* 0x00409ff0 HumanPlayer_CheckGround_3 -> HumanPlayer_CheckGround_3 */
void HumanPlayer_CheckGround_3(void);
/* 0x0040a220 HumanPlayer_UpdateStamina_3 -> HumanPlayer_UpdateStamina_3 */
void HumanPlayer_UpdateStamina_3(void);
/* 0x0040a410 HumanPlayer_UpdateHealth_3 -> HumanPlayer_UpdateHealth_3 */
void HumanPlayer_UpdateHealth_3(void);
/* 0x0040a600 HumanPlayer_HandleInput_3 -> HumanPlayer_HandleInput_3 */
void HumanPlayer_HandleInput_3(void);
/* 0x0040a800 HumanPlayer_ApplyPhysics_3 -> HumanPlayer_ApplyPhysics_3 */
void HumanPlayer_ApplyPhysics_3(void);
/* 0x0040aa00 HumanPlayer_PlayFootstep_3 -> HumanPlayer_PlayFootstep_3 */
void HumanPlayer_PlayFootstep_3(void);
/* 0x0040aa90 HumanPlayer_PlaySound_3 -> HumanPlayer_PlaySound_3 */
void HumanPlayer_PlaySound_3(void);
/* 0x0040ab20 HumanPlayer_TakeDamage_3 -> HumanPlayer_TakeDamage_3 */
void HumanPlayer_TakeDamage_3(int param_1, int param_2);
/* 0x0040acb0 HumanPlayer_UpdateAnimation_3 -> HumanPlayer_UpdateAnimation_3 */
void HumanPlayer_UpdateAnimation_3(void);
/* 0x0040ae70 HumanPlayer_CheckCollision_3 -> HumanPlayer_CheckCollision_3 */
void HumanPlayer_CheckCollision_3(void);
/* 0x0040b020 HumanPlayer_ApplyRecoil_3 -> HumanPlayer_ApplyRecoil_3 */
void HumanPlayer_ApplyRecoil_3(void);
/* 0x0040b1d0 HumanPlayer_LoadParameters_5 -> HumanPlayer_LoadParameters_5 */
void HumanPlayer_LoadParameters_5(void);
/* 0x0040b390 HumanPlayer_UpdateMotion_4 -> HumanPlayer_UpdateMotion_4 */
void HumanPlayer_UpdateMotion_4(void);
/* 0x0040b540 HumanPlayer_CheckGround_4 -> HumanPlayer_CheckGround_4 */
void HumanPlayer_CheckGround_4(void);
/* 0x0040b6f0 HumanPlayer_UpdateStamina_4 -> HumanPlayer_UpdateStamina_4 */
void HumanPlayer_UpdateStamina_4(void);
/* 0x0040b8b0 HumanPlayer_UpdateHealth_4 -> HumanPlayer_UpdateHealth_4 */
void HumanPlayer_UpdateHealth_4(void);
/* 0x0040ba70 HumanPlayer_HandleInput_4 -> HumanPlayer_HandleInput_4 */
void HumanPlayer_HandleInput_4(void);
/* 0x0040bbd0 HumanPlayer_ApplyPhysics_4 -> HumanPlayer_ApplyPhysics_4 */
void HumanPlayer_ApplyPhysics_4(int param_1, int param_2);
/* 0x0040bdb0 HumanPlayer_PlayFootstep_4 -> HumanPlayer_PlayFootstep_4 */
void HumanPlayer_PlayFootstep_4(void);
/* 0x0040be40 HumanPlayer_PlaySound_4 -> HumanPlayer_PlaySound_4 */
void HumanPlayer_PlaySound_4(int param_1, int param_2);
/* 0x0040bed0 HumanPlayer_TakeDamage_4 -> HumanPlayer_TakeDamage_4 */
void HumanPlayer_TakeDamage_4(void);
/* 0x0040c140 HumanPlayer_UpdateAnimation_4 -> HumanPlayer_UpdateAnimation_4 */
void HumanPlayer_UpdateAnimation_4(int param_1);
/* 0x0040c150 HumanPlayer_CheckCollision_4 -> HumanPlayer_CheckCollision_4 */
void HumanPlayer_CheckCollision_4(int param_1);
/* 0x0040c270 HumanPlayer_ApplyRecoil_4 -> HumanPlayer_ApplyRecoil_4 */
void HumanPlayer_ApplyRecoil_4(uint32_t param_1, int param_2);
/* 0x0040c2d0 HumanPlayer_LoadParameters_6 -> HumanPlayer_LoadParameters_6 */
void HumanPlayer_LoadParameters_6(int param_1);
/* 0x0040c2e0 HumanPlayer_UpdateMotion_5 -> HumanPlayer_UpdateMotion_5 */
void HumanPlayer_UpdateMotion_5(int param_1);
/* 0x0040c2f0 HumanPlayer_CheckGround_5 -> HumanPlayer_CheckGround_5 */
void HumanPlayer_CheckGround_5(void);
/* 0x0040c510 HumanPlayer_UpdateStamina_5 -> HumanPlayer_UpdateStamina_5 */
void HumanPlayer_UpdateStamina_5(void);
/* 0x0040c670 HumanPlayer_UpdateHealth_5 -> HumanPlayer_UpdateHealth_5 */
void HumanPlayer_UpdateHealth_5(void);
/* 0x0040c970 HumanPlayer_HandleInput_5 -> HumanPlayer_HandleInput_5 */
void HumanPlayer_HandleInput_5(void);
/* 0x0040cb90 HumanPlayer_ApplyPhysics_5 -> HumanPlayer_ApplyPhysics_5 */
void HumanPlayer_ApplyPhysics_5(void);
/* 0x0040ccc0 HumanPlayer_PlayFootstep_5 -> HumanPlayer_PlayFootstep_5 */
void HumanPlayer_PlayFootstep_5(int param_1, int param_2);
/* 0x0040cd30 HumanPlayer_PlaySound_5 -> HumanPlayer_PlaySound_5 */
void HumanPlayer_PlaySound_5(int param_1, uint32_t param_2);
/* 0x0040cf70 HumanPlayer_TakeDamage_5 -> HumanPlayer_TakeDamage_5 */
void HumanPlayer_TakeDamage_5(void);
/* 0x0040d180 HumanPlayer_UpdateAnimation_5 -> HumanPlayer_UpdateAnimation_5 */
void HumanPlayer_UpdateAnimation_5(void);
/* 0x0040d660 HumanPlayer_CheckCollision_5 -> HumanPlayer_CheckCollision_5 */
void HumanPlayer_CheckCollision_5(int param_1, int param_2);
/* 0x0040d6b0 Ladder_ClimbTick -> Ladder_ClimbTick */
void Ladder_ClimbTick(...);
/* 0x0040d8e0 HumanPlayer_ApplyRecoil_5 -> HumanPlayer_ApplyRecoil_5 */
void HumanPlayer_ApplyRecoil_5(int param_1, int param_2);
/* 0x0040d920 Ladder_GetOnTop -> Ladder_GetOnTop */
void Ladder_GetOnTop(...);
/* 0x0040da40 HumanPlayer_LoadParameters_7 -> HumanPlayer_LoadParameters_7 */
void HumanPlayer_LoadParameters_7(int param_1, int param_2);
/* 0x0040da80 HumanPlayer_UpdateMotion_6 -> HumanPlayer_UpdateMotion_6 */
void HumanPlayer_UpdateMotion_6(void);
/* 0x0040dba0 HumanPlayer_WireSlide1 -> HumanPlayer_WireSlide1 */
void HumanPlayer_WireSlide1(int param_1, int param_2);
/* 0x0040dbf0 HumanPlayer_CheckGround_6 -> HumanPlayer_CheckGround_6 */
void HumanPlayer_CheckGround_6(int param_1, int param_2);
/* 0x0040dca0 HumanPlayer_UpdateStamina_6 -> HumanPlayer_UpdateStamina_6 */
void HumanPlayer_UpdateStamina_6(void);
/* 0x0040dd60 HumanPlayer_UpdateHealth_6 -> HumanPlayer_UpdateHealth_6 */
void HumanPlayer_UpdateHealth_6(int param_1, int param_2);
/* 0x0040de90 HumanPlayer_HandleInput_6 -> HumanPlayer_HandleInput_6 */
void HumanPlayer_HandleInput_6(void);
/* 0x0040def0 HumanPlayer_ApplyPhysics_6 -> HumanPlayer_ApplyPhysics_6 */
void HumanPlayer_ApplyPhysics_6(uint32_t param_1, int param_2);
/* 0x0040df70 HumanPlayer_PlayFootstep_6 -> HumanPlayer_PlayFootstep_6 */
void HumanPlayer_PlayFootstep_6(void);
/* 0x0040e370 HumanPlayer_TakeDamage_6 -> HumanPlayer_TakeDamage_6 */
void HumanPlayer_TakeDamage_6(int param_1, int param_2);
/* 0x0040e3c0 HumanPlayer_UpdateAnimation_6 -> HumanPlayer_UpdateAnimation_6 */
void HumanPlayer_UpdateAnimation_6(int param_1, int param_2);
/* 0x0040e470 HumanPlayer_CheckCollision_6 -> HumanPlayer_CheckCollision_6 */
void HumanPlayer_CheckCollision_6(int param_1, int param_2);
/* 0x0040e4d0 HumanPlayer_ApplyRecoil_6 -> HumanPlayer_ApplyRecoil_6 */
void HumanPlayer_ApplyRecoil_6(int param_1, uint32_t param_2);
/* 0x0040e560 HumanPlayer_PlayerDeath -> HumanPlayer_PlayerDeath */
void HumanPlayer_PlayerDeath(int param_1, int param_2);
/* 0x0040e620 HumanPlayer_LoadParameters_8 -> HumanPlayer_LoadParameters_8 */
void HumanPlayer_LoadParameters_8(int param_1, int param_2);
/* 0x0040e6e0 HumanPlayer_UpdateMotion_7 -> HumanPlayer_UpdateMotion_7 */
void HumanPlayer_UpdateMotion_7(void);
/* 0x0040e740 HumanPlayer_CheckGround_7 -> HumanPlayer_CheckGround_7 */
void HumanPlayer_CheckGround_7(void);
/* 0x0040e960 HumanPlayer_UpdateStamina_7 -> HumanPlayer_UpdateStamina_7 */
void HumanPlayer_UpdateStamina_7(void);
/* 0x0040e9b0 HumanPlayer_UpdateHealth_7 -> HumanPlayer_UpdateHealth_7 */
void HumanPlayer_UpdateHealth_7(void);
/* 0x0040e9c0 HumanPlayer_HandleInput_7 -> HumanPlayer_HandleInput_7 */
void HumanPlayer_HandleInput_7(void);
/* 0x0040ef70 HumanPlayer_PlayFootstep_7 -> HumanPlayer_PlayFootstep_7 */
void HumanPlayer_PlayFootstep_7(void);
/* 0x0040f0d0 HumanPlayer_GunsDry1 -> HumanPlayer_GunsDry1 */
void HumanPlayer_GunsDry1(int param_1, int param_2);
/* 0x0040f170 HumanPlayer_PlaySound_7 -> HumanPlayer_PlaySound_7 */
void HumanPlayer_PlaySound_7(void);
/* 0x0040f180 HumanPlayer_TakeDamage_7 -> HumanPlayer_TakeDamage_7 */
void HumanPlayer_TakeDamage_7(void);
/* 0x0040f230 HumanPlayer_UpdateAnimation_7 -> HumanPlayer_UpdateAnimation_7 */
void HumanPlayer_UpdateAnimation_7(int param_1, int param_2);
/* 0x0040f280 HumanPlayer_CheckCollision_7 -> HumanPlayer_CheckCollision_7 */
void HumanPlayer_CheckCollision_7(int param_1, int param_2);
/* 0x0040f300 HumanPlayer_ApplyRecoil_7 -> HumanPlayer_ApplyRecoil_7 */
void HumanPlayer_ApplyRecoil_7(int param_1, int param_2);
/* 0x0040f370 HumanPlayer_LoadParameters_9 -> HumanPlayer_LoadParameters_9 */
void HumanPlayer_LoadParameters_9(int param_1, int param_2);
/* 0x0040f4a0 HumanPlayer_UpdateMotion_8 -> HumanPlayer_UpdateMotion_8 */
void HumanPlayer_UpdateMotion_8(int param_1, int param_2);
/* 0x0040f4f0 HumanPlayer_CheckGround_8 -> HumanPlayer_CheckGround_8 */
void HumanPlayer_CheckGround_8(void);
/* 0x0040f590 HumanPlayer_GrenadeTick1 -> HumanPlayer_GrenadeTick1 */
void HumanPlayer_GrenadeTick1(int param_1, int param_2);
/* 0x0040f640 HumanPlayer_UpdateStamina_8 -> HumanPlayer_UpdateStamina_8 */
void HumanPlayer_UpdateStamina_8(void);
/* 0x0040f760 HumanPlayer_UpdateHealth_8 -> HumanPlayer_UpdateHealth_8 */
void HumanPlayer_UpdateHealth_8(int param_1, int param_2);
/* 0x0040f930 HumanPlayer_HandleInput_8 -> HumanPlayer_HandleInput_8 */
void HumanPlayer_HandleInput_8(void);
/* 0x0040f950 HumanPlayer_ApplyPhysics_8 -> HumanPlayer_ApplyPhysics_8 */
void HumanPlayer_ApplyPhysics_8(void);
/* 0x0040fa20 HumanPlayer_PlayFootstep_8 -> HumanPlayer_PlayFootstep_8 */
void HumanPlayer_PlayFootstep_8(int param_1, int param_2);
/* 0x0040fa60 HumanPlayer_PlaySound_8 -> HumanPlayer_PlaySound_8 */
void HumanPlayer_PlaySound_8(void);
/* 0x0040fa80 HumanPlayer_UpdateAnimation_8 -> HumanPlayer_UpdateAnimation_8 */
void HumanPlayer_UpdateAnimation_8(void);
/* 0x0040fb30 HumanPlayer_CheckCollision_8 -> HumanPlayer_CheckCollision_8 */
void HumanPlayer_CheckCollision_8(int param_1, int param_2);
/* 0x0040fbe0 HumanPlayer_ApplyRecoil_8 -> HumanPlayer_ApplyRecoil_8 */
void HumanPlayer_ApplyRecoil_8(void);
/* 0x0040fda0 HumanPlayer_LoadParameters_10 -> HumanPlayer_LoadParameters_10 */
void HumanPlayer_LoadParameters_10(int param_1, int param_2);
/* 0x0040fe30 HumanPlayer_Init -> HumanPlayer_Init */
void HumanPlayer_Init(void);
/* 0x00410070 DefineHumanPlayerGeneral -> DefineHumanPlayerGeneral */
unknown DefineHumanPlayerGeneral(unknown param1, unknown param2);
/* 0x004101c0 Define_HumanPlayerWeaponCycle -> Define_HumanPlayerWeaponCycle */
void Define_HumanPlayerWeaponCycle(...);
/* 0x00410240 Define_HumanPlayerWeaponCategory -> Define_HumanPlayerWeaponCategory */
void Define_HumanPlayerWeaponCategory(...);
/* 0x004102d0 Define_HumanPlayerAmmoLimit -> Define_HumanPlayerAmmoLimit */
void Define_HumanPlayerAmmoLimit(...);
/* 0x00410370 HumanPlayer_LoadParameters_11 -> HumanPlayer_LoadParameters_11 */
void HumanPlayer_LoadParameters_11(void);
/* 0x00410840 HumanPlayer_Setup -> HumanPlayer_Setup */
void HumanPlayer_Setup(int param_1);
/* 0x004109a0 Human_RunUpdate -> Human_RunUpdate */
void Human_RunUpdate(HumanPlayer* human);
/* 0x00410f70 HumanPlayer_UpdateStamina_9 -> HumanPlayer_UpdateStamina_9 */
void HumanPlayer_UpdateStamina_9(int param_1);
/* 0x00411000 HumanPlayer_UpdateHealth_9 -> HumanPlayer_UpdateHealth_9 */
void HumanPlayer_UpdateHealth_9(int param_1);
/* 0x00411240 HumanPlayer_Earcandy -> HumanPlayer_Earcandy */
void HumanPlayer_Earcandy(int param_1);
/* 0x00411300 HumanPlayer_HandleInput_9 -> HumanPlayer_HandleInput_9 */
void HumanPlayer_HandleInput_9(int param_1);
/* 0x00411350 HumanPlayer_ApplyPhysics_9 -> HumanPlayer_ApplyPhysics_9 */
void HumanPlayer_ApplyPhysics_9(int param_1);
/* 0x004113c0 HumanPlayer_PlayFootstep_9 -> HumanPlayer_PlayFootstep_9 */
void HumanPlayer_PlayFootstep_9(int param_1);
/* 0x004113e0 Ladder_Mount -> Ladder_Mount */
void Ladder_Mount();
/* 0x00411770 HumanPlayer_PlaySound_9 -> HumanPlayer_PlaySound_9 */
void HumanPlayer_PlaySound_9(float param_1);
/* 0x00411ae0 HumanPlayer_TakeDamage_9 -> HumanPlayer_TakeDamage_9 */
void HumanPlayer_TakeDamage_9(int param_1);
/* 0x00411f20 HumanPlayer_WireSlide1_2 -> HumanPlayer_WireSlide1_2 */
void HumanPlayer_WireSlide1_2(int param_1);
/* 0x00412440 Human_DamageApply -> Human_DamageApply */
void Human_DamageApply(HumanPlayer* human);
/* 0x00412990 HumanPlayer_Update -> HumanPlayer_Update */
void HumanPlayer_Update(void);
/* 0x00412ce0 HumanPlayer_OnEvent -> HumanPlayer_OnEvent */
void HumanPlayer_OnEvent(void);
/* 0x00412f80 HumanPlayer_Action -> HumanPlayer_Action */
void HumanPlayer_Action(void);
/* 0x00413090 HumanPlayer_Cleanup -> HumanPlayer_Cleanup */
void HumanPlayer_Cleanup(void);
/* 0x00413120 HumanPlayer_Cleanup_2 -> HumanPlayer_Cleanup_2 */
void HumanPlayer_Cleanup_2(void);
/* 0x00413770 HumanPlayer_UpdateAnimation_9 -> HumanPlayer_UpdateAnimation_9 */
void HumanPlayer_UpdateAnimation_9(void);
/* 0x004137a0 HumanPlayer_LoadParameters -> HumanPlayer_LoadParameters */
void HumanPlayer_LoadParameters(void);
/* 0x004137e0 HumanPlayer_CheckCollision_9 -> HumanPlayer_CheckCollision_9 */
void HumanPlayer_CheckCollision_9(int param_1, int param_2);
/* 0x00413a60 HumanPlayer_ApplyRecoil_9 -> HumanPlayer_ApplyRecoil_9 */
void HumanPlayer_ApplyRecoil_9(int param_1, uint32_t param_2);
/* 0x00413a70 HumanPlayer_LoadParameters_12 -> HumanPlayer_LoadParameters_12 */
uint16_t HumanPlayer_LoadParameters_12(void);
/* 0x00413a80 HumanPlayer_UpdateMotion_10 -> HumanPlayer_UpdateMotion_10 */
float10 HumanPlayer_UpdateMotion_10(void);
/* 0x00413b00 HumanPlayer_CheckGround_10 -> HumanPlayer_CheckGround_10 */
uint8_t HumanPlayer_CheckGround_10(void);
/* 0x00413b10 HumanPlayer_UpdateStamina_10 -> HumanPlayer_UpdateStamina_10 */
uint8_t HumanPlayer_UpdateStamina_10(void);
/* 0x00413b20 HumanPlayer_UpdateHealth_10 -> HumanPlayer_UpdateHealth_10 */
uint8_t HumanPlayer_UpdateHealth_10(void);
/* 0x00413b30 HumanPlayer_HandleInput_10 -> HumanPlayer_HandleInput_10 */
uint8_t HumanPlayer_HandleInput_10(void);
/* 0x00413b40 HumanPlayer_ApplyPhysics_10 -> HumanPlayer_ApplyPhysics_10 */
uint8_t HumanPlayer_ApplyPhysics_10(void);
/* 0x00413b50 HumanPlayer_PlayFootstep_10 -> HumanPlayer_PlayFootstep_10 */
uint8_t HumanPlayer_PlayFootstep_10(void);
/* 0x00413b60 HumanPlayer_PlaySound_10 -> HumanPlayer_PlaySound_10 */
uint8_t HumanPlayer_PlaySound_10(void);
/* 0x00413b70 Weapon_TypeOpen -> Weapon_TypeOpen */
void Weapon_TypeOpen(void);
/* 0x00413b90 HumanPlayer_TakeDamage_10 -> HumanPlayer_TakeDamage_10 */
uint32_t * HumanPlayer_TakeDamage_10(int param_1);
/* 0x00413bb0 Weapons_CountGet -> Weapons_CountGet */
int Weapons_CountGet();
/* 0x00413bc0 HumanPlayer_UpdateAnimation_10 -> HumanPlayer_UpdateAnimation_10 */
uint32_t HumanPlayer_UpdateAnimation_10(void);
/* 0x00413bd0 HumanPlayer_CheckCollision_10 -> HumanPlayer_CheckCollision_10 */
int * HumanPlayer_CheckCollision_10(int param_1);
/* 0x00413c00 HumanPlayer_ApplyRecoil_10 -> HumanPlayer_ApplyRecoil_10 */
int HumanPlayer_ApplyRecoil_10(byte *param_1);
/* 0x00413c80 HumanPlayer_LoadParameters_13 -> HumanPlayer_LoadParameters_13 */
uint32_t HumanPlayer_LoadParameters_13(int param_1);
/* 0x00413cc0 HumanPlayer_UpdateMotion_11 -> HumanPlayer_UpdateMotion_11 */
int * HumanPlayer_UpdateMotion_11(int param_1, int param_2);
/* 0x00413d10 HumanPlayer_CheckGround_11 -> HumanPlayer_CheckGround_11 */
void HumanPlayer_CheckGround_11(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, int param_7, uint32_t param_8, uint32_t param_9);
/* 0x00413db0 HumanPlayer_UpdateStamina_11 -> HumanPlayer_UpdateStamina_11 */
uint32_t * HumanPlayer_UpdateStamina_11(void);
/* 0x00413dc0 HumanPlayer_UpdateHealth_11 -> HumanPlayer_UpdateHealth_11 */
uint32_t * HumanPlayer_UpdateHealth_11(void);
/* 0x00413dd0 HumanPlayer_HandleInput_11 -> HumanPlayer_HandleInput_11 */
uint32_t * HumanPlayer_HandleInput_11(void);
/* 0x00413de0 HumanPlayer_ApplyPhysics_11 -> HumanPlayer_ApplyPhysics_11 */
uint32_t * HumanPlayer_ApplyPhysics_11(void);
/* 0x00413df0 WEAPONTYPE_GUN -> WEAPONTYPE_GUN */
void WEAPONTYPE_GUN(void);
/* 0x00413f90 DefineWeaponType -> DefineWeaponType */
unknown DefineWeaponType(unknown param1, unknown param2);
/* 0x00414810 WeaponType_RegisterType -> WeaponType_RegisterType */
void WeaponType_RegisterType(void);
/* 0x004148f0 WeaponType_InitType -> WeaponType_InitType */
float10 WeaponType_InitType(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, double param_5);
/* 0x00414950 WeaponType_GetConfig -> WeaponType_GetConfig */
float10 WeaponType_GetConfig(double param_1, uint32_t param_2, uint32_t param_3);
/* 0x004149b0 WeaponType_CycleWeapon -> WeaponType_CycleWeapon */
void WeaponType_CycleWeapon(uint32_t param_1, int param_2);
/* 0x00414a60 WeaponType_SetCategory -> WeaponType_SetCategory */
void WeaponType_SetCategory(float *param_1, float *param_2);
/* 0x00414e20 WeaponType_UpdateAnim -> WeaponType_UpdateAnim */
void WeaponType_UpdateAnim(uint32_t *param_1, int param_2, int param_3);
/* 0x00414ed0 WeaponType_RegisterType_2 -> WeaponType_RegisterType_2 */
void WeaponType_RegisterType_2(uint32_t *param_1, int param_2, int param_3);
/* 0x00414f40 WeaponType_InitType_2 -> WeaponType_InitType_2 */
void WeaponType_InitType_2(uint32_t *param_1, int param_2, int param_3, uint32_t param_4);
/* 0x00414fd0 WeaponType_GetConfig_2 -> WeaponType_GetConfig_2 */
uint32_t WeaponType_GetConfig_2(int param_1);
/* 0x00415020 DEBUG_KEYSENABLEINVALID -> DEBUG_KEYSENABLEINVALID */
void DEBUG_KEYSENABLEINVALID();
/* 0x00415070 IntroScreen_Init -> IntroScreen_Init */
void IntroScreen_Init(void);
/* 0x00415170 IntroScreen_Update -> IntroScreen_Update */
uint32_t IntroScreen_Update(uint32_t param_1, uint32_t param_2);
/* 0x004151e0 MovieSubtitle_RegisterFont -> MovieSubtitle_RegisterFont */
void MovieSubtitle_RegisterFont(...);
/* 0x00415260 MovieSubtitle_RegisterText -> MovieSubtitle_RegisterText */
void MovieSubtitle_RegisterText(...);
/* 0x00415380 IntroScreen_LoadParameters -> IntroScreen_LoadParameters */
void IntroScreen_LoadParameters(int param_1);
/* 0x00415450 IntroScreen_Setup -> IntroScreen_Setup */
void IntroScreen_Setup(int param_1);
/* 0x00415480 WeaponType_LocalScreensIntro -> WeaponType_LocalScreensIntro */
void WeaponType_LocalScreensIntro(void);
/* 0x004154b0 WeaponType_InvalidIntroscreenMo -> WeaponType_InvalidIntroscreenMo */
void __fastcall WeaponType_InvalidIntroscreenMo(uint32_t param_1, uint32_t param_2, uint32_t param_3, int param_4, uint8_t param_5);
/* 0x00415530 Game_Init -> Game_Init */
void Game_Init(void);
/* 0x004157d0 Game_DisablePlayerInput -> Game_DisablePlayerInput */
void Game_DisablePlayerInput(void);
/* 0x00415830 Game_EnablePlayerInput -> Game_EnablePlayerInput */
void Game_EnablePlayerInput(void);
/* 0x00415890 Game_SetMission -> Game_SetMission */
void Game_SetMission(int mission);
/* 0x004158e0 Game_UpdateVolume -> Game_UpdateVolume */
void Game_UpdateVolume(void);
/* 0x00415950 Game_SetMusicVolume -> Game_SetMusicVolume */
void Game_SetMusicVolume(float volume);
/* 0x004159b0 Game_SetSFXVolume -> Game_SetSFXVolume */
void Game_SetSFXVolume(float volume);
/* 0x00415a10 Game_EnableMusic -> Game_EnableMusic */
void Game_EnableMusic(void);
/* 0x00415a60 Game_DisableMusic -> Game_DisableMusic */
void Game_DisableMusic(void);
/* 0x00415ab0 Game_CutsceneDelete -> Game_CutsceneDelete */
void Game_CutsceneDelete(void);
/* 0x00415b30 Level_Start -> Level_Start */
void Level_Start(int p1);
/* 0x00416010 Level_LoadObjects_2 -> Level_LoadObjects_2 */
void Level_LoadObjects_2(void);
/* 0x00416130 Level_LocalCommonTextures -> Level_LocalCommonTextures */
void Level_LocalCommonTextures(void);
/* 0x004161d0 Level_LocalCommonSprites -> Level_LocalCommonSprites */
void Level_LocalCommonSprites(void);
/* 0x00416260 Game_Setup -> Game_Setup */
void Game_Setup(int param_1);
/* 0x004163e0 Level_TimeSpentRedrawing2F -> Level_TimeSpentRedrawing2F */
void Level_TimeSpentRedrawing2F(void);
/* 0x00416550 Game_DeleteHandler -> Game_DeleteHandler */
void Game_DeleteHandler(void);
/* 0x00416660 Level_CheckQTaskID -> Level_CheckQTaskID */
void Level_CheckQTaskID(void);
/* 0x00416690 Level_SetMission -> Level_SetMission */
void Level_SetMission(void);
/* 0x004166c0 Level_StartMission -> Level_StartMission */
void Level_StartMission(void);
/* 0x004167d0 Level_LoadLevel_2 -> Level_LoadLevel_2 */
uint8_t Level_LoadLevel_2(void);
/* 0x004167e0 Level_LoadObjects_3 -> Level_LoadObjects_3 */
uint8_t Level_LoadObjects_3(void);
/* 0x004167f0 Level_InitTextures_2 -> Level_InitTextures_2 */
uint8_t Level_InitTextures_2(void);
/* 0x00416800 Level_InitSprites_2 -> Level_InitSprites_2 */
uint8_t Level_InitSprites_2(void);
/* 0x00416810 Level_CheckQTaskID_2 -> Level_CheckQTaskID_2 */
uint8_t Level_CheckQTaskID_2(void);
/* 0x00416820 Level_SetMission_2 -> Level_SetMission_2 */
uint8_t Level_SetMission_2(void);
/* 0x00416830 Level_StartMission_2 -> Level_StartMission_2 */
uint8_t Level_StartMission_2(void);
/* 0x00416840 Level_LoadLevel_3 -> Level_LoadLevel_3 */
uint8_t Level_LoadLevel_3(void);
/* 0x00416850 Level_LoadObjects_4 -> Level_LoadObjects_4 */
uint8_t Level_LoadObjects_4(void);
/* 0x00416860 Level_InitTextures_3 -> Level_InitTextures_3 */
uint8_t Level_InitTextures_3(void);
/* 0x00416870 Level_InitSprites_3 -> Level_InitSprites_3 */
uint8_t Level_InitSprites_3(void);
/* 0x00416880 Level_CheckQTaskID_3 -> Level_CheckQTaskID_3 */
uint8_t Level_CheckQTaskID_3(void);
/* 0x00416890 Level_SetMission_3 -> Level_SetMission_3 */
uint8_t Level_SetMission_3(void);
/* 0x004168a0 Level_StartMission_3 -> Level_StartMission_3 */
uint32_t Level_StartMission_3(void);
/* 0x004168b0 Level_LoadLevel_4 -> Level_LoadLevel_4 */
uint32_t Level_LoadLevel_4(void);
/* 0x004168c0 Level_LoadObjects_5 -> Level_LoadObjects_5 */
uint32_t Level_LoadObjects_5(void);
/* 0x004168d0 Level_InitTextures_4 -> Level_InitTextures_4 */
uint32_t Level_InitTextures_4(void);
/* 0x004168e0 Level_InitSprites_4 -> Level_InitSprites_4 */
uint32_t Level_InitSprites_4(void);
/* 0x004168f0 Level_CheckQTaskID_4 -> Level_CheckQTaskID_4 */
uint32_t Level_CheckQTaskID_4(void);
/* 0x00416900 Level_SetMission_4 -> Level_SetMission_4 */
uint32_t Level_SetMission_4(uint32_t param_1);
/* 0x00416920 Level_StartMission_4 -> Level_StartMission_4 */
uint32_t Level_StartMission_4(void);
/* 0x00416930 Level_LoadLevel_5 -> Level_LoadLevel_5 */
byte * Level_LoadLevel_5(byte *param_1);
/* 0x004169d0 Level_LoadObjects_6 -> Level_LoadObjects_6 */
byte * Level_LoadObjects_6(byte *param_1);
/* 0x00416a70 Level_InitTextures_5 -> Level_InitTextures_5 */
uint32_t Level_InitTextures_5(int param_1);
/* 0x00416ad0 Level_InitSprites_5 -> Level_InitSprites_5 */
uint32_t Level_InitSprites_5(int param_1, uint32_t param_2, double *param_3);
/* 0x00416c90 Level_CheckQTaskID_5 -> Level_CheckQTaskID_5 */
float10 Level_CheckQTaskID_5(int param_1, uint32_t param_2, double *param_3, float param_4);
/* 0x00416d20 Level_SetMission_5 -> Level_SetMission_5 */
int Level_SetMission_5(void);
/* 0x00416d30 Level_StartMission_5 -> Level_StartMission_5 */
int Level_StartMission_5(void);
/* 0x00416d40 Level_LoadLevel_6 -> Level_LoadLevel_6 */
uint32_t Level_LoadLevel_6(void);
/* 0x00416d50 Level_LoadObjects_7 -> Level_LoadObjects_7 */
uint32_t Level_LoadObjects_7(void);
/* 0x00416d60 Level_InitTextures_6 -> Level_InitTextures_6 */
void Level_InitTextures_6(uint8_t param_1);
/* 0x00416d80 Human_HitDamage -> Human_HitDamage */
uint32_t Human_HitDamage(void);
/* 0x00416d90 Level_InitSprites_6 -> Level_InitSprites_6 */
void Level_InitSprites_6(void);
/* 0x00416ef0 Level_CheckQTaskID_6 -> Level_CheckQTaskID_6 */
void Level_CheckQTaskID_6(int param_1);
/* 0x00416f40 Level_SetMission_6 -> Level_SetMission_6 */
void Level_SetMission_6(void);
/* 0x00416fb0 Level_LoadLevel_7 -> Level_LoadLevel_7 */
int Level_LoadLevel_7(void);
/* 0x00416fc0 Level_LoadObjects_8 -> Level_LoadObjects_8 */
void Level_LoadObjects_8(void);
/* 0x00416fe0 Game_Restart -> Game_Restart */
void Game_Restart(void);
/* 0x00417090 Level_InitTextures_7 -> Level_InitTextures_7 */
uint32_t Level_InitTextures_7(void);
/* 0x004170a0 MenuManager_Init -> MenuManager_Init */
void MenuManager_Init(void);
/* 0x00417260 MenuManager_LoadParameters -> MenuManager_LoadParameters */
void MenuManager_LoadParameters(void);
/* 0x004174a0 MenuManager_RequestScreen -> MenuManager_RequestScreen */
void MenuManager_RequestScreen(int screenId, int flags);
/* 0x00417520 Menu_UpdateLanguage -> Menu_UpdateLanguage */
void Menu_UpdateLanguage(int param_1);
/* 0x00417590 Menu_FormatScreen -> Menu_FormatScreen */
void Menu_FormatScreen(int param_1, int param_2);
/* 0x00417660 Menu_PlayMusic -> Menu_PlayMusic */
void Menu_PlayMusic(uint32_t param_1, int param_2);
/* 0x00417690 MenuManager_PushScreen -> MenuManager_PushScreen */
void MenuManager_PushScreen(int screenId);
/* 0x00417710 MenuManager_PopScreen -> MenuManager_PopScreen */
void MenuManager_PopScreen(int param);
/* 0x00417790 MenuManager_LeaveMenus -> MenuManager_LeaveMenus */
void MenuManager_LeaveMenus(int param1, int param2);
/* 0x00417810 MenuManager_SetLanguage -> MenuManager_SetLanguage */
void MenuManager_SetLanguage(int langIndex);
/* 0x00417880 MenuManager_ForceUpdateWindow -> MenuManager_ForceUpdateWindow */
void MenuManager_ForceUpdateWindow(int param);
/* 0x00417900 MenuManager_ActivatePopupScreen -> MenuManager_ActivatePopupScreen */
void MenuManager_ActivatePopupScreen(int popupId);
/* 0x00417960 MenuManager_DeactivatePopuScreen -> MenuManager_DeactivatePopuScreen */
void MenuManager_DeactivatePopuScreen();
/* 0x004179b0 MenuManager_SetEnabled -> MenuManager_SetEnabled */
void MenuManager_SetEnabled(int enabled);
/* 0x00417a20 MenuManager_Setup -> MenuManager_Setup */
void MenuManager_Setup(int param_1);
/* 0x00417b80 Menu_LocalMenusystemSound -> Menu_LocalMenusystemSound */
void Menu_LocalMenusystemSound(int param_1);
/* 0x00417cf0 MenuManager_Process -> MenuManager_Process */
void MenuManager_Process(int param_1, char *param_2);
/* 0x00417d50 Menu_LocalMenusystemSound_2 -> Menu_LocalMenusystemSound_2 */
void Menu_LocalMenusystemSound_2(int param_1);
/* 0x00417ff0 Menu_LocalLanguageSS -> Menu_LocalLanguageSS */
void Menu_LocalLanguageSS(int param_1, uint32_t param_2);
/* 0x00418520 menu_music -> menu_music */
void menu_music(int param_1);
/* 0x00418580 Menu_RequestScreen_2 -> Menu_RequestScreen_2 */
void Menu_RequestScreen_2(void);
/* 0x004186e0 Menu_LeaveMenus_2 -> Menu_LeaveMenus_2 */
void Menu_LeaveMenus_2(int param_1, int param_2);
/* 0x00418710 Menu_UpdateLanguage_2 -> Menu_UpdateLanguage_2 */
void Menu_UpdateLanguage_2(int param_1, uint32_t param_2, int param_3);
/* 0x00418790 Menu_FormatScreen_2 -> Menu_FormatScreen_2 */
void Menu_FormatScreen_2(int param_1);
/* 0x004187f0 Menu_PlayMusic_2 -> Menu_PlayMusic_2 */
void Menu_PlayMusic_2(int param_1, uint32_t param_2);
/* 0x00418840 Menu_DrawWidget_2 -> Menu_DrawWidget_2 */
void Menu_DrawWidget_2(int param_1, int param_2);
/* 0x004188b0 Menu_HandleInput_2 -> Menu_HandleInput_2 */
void Menu_HandleInput_2(int param_1);
/* 0x00418940 Menu_RequestScreen_3 -> Menu_RequestScreen_3 */
void Menu_RequestScreen_3(int param_1);
/* 0x00418970 MenuManager_Update -> MenuManager_Update */
void MenuManager_Update(int param_1);
/* 0x00418ac0 Menu_LeaveMenus_3 -> Menu_LeaveMenus_3 */
void Menu_LeaveMenus_3(void);
/* 0x00418af0 Menu_UpdateLanguage_3 -> Menu_UpdateLanguage_3 */
uint16_t Menu_UpdateLanguage_3(void);
/* 0x00418b00 Menu_Manager -> Menu_Manager */
int* Menu_Manager(int p1, char *menu_str, char p3, char p4, int p5);
/* 0x00418d70 Menu_FormatScreen_3 -> Menu_FormatScreen_3 */
void Menu_FormatScreen_3(uint32_t param_1);
/* 0x00418d80 Menu_PlayMusic_3 -> Menu_PlayMusic_3 */
uint32_t Menu_PlayMusic_3(int param_1, char *param_2);
/* 0x00418de0 Menu_DrawWidget_3 -> Menu_DrawWidget_3 */
int Menu_DrawWidget_3(int param_1, char *param_2);
/* 0x00418e40 Menu_HandleInput_3 -> Menu_HandleInput_3 */
int Menu_HandleInput_3(int param_1, char *param_2);
/* 0x00418ea0 Menu_LocalSS -> Menu_LocalSS */
char * Menu_LocalSS(int param_1, uint32_t param_2);
/* 0x00418fb0 Menu_RequestScreen_4 -> Menu_RequestScreen_4 */
int Menu_RequestScreen_4(int param_1);
/* 0x00418fc0 Menu_LeaveMenus_4 -> Menu_LeaveMenus_4 */
void Menu_LeaveMenus_4(int param_1);
/* 0x00418fd0 Menu_UpdateLanguage_4 -> Menu_UpdateLanguage_4 */
void Menu_UpdateLanguage_4(int param_1);
/* 0x00418fe0 menu_high -> menu_high */
void menu_high(int param_1, int param_2);
/* 0x00419030 Menu_FormatScreen_4 -> Menu_FormatScreen_4 */
uint32_t Menu_FormatScreen_4(int param_1);
/* 0x00419040 Menu_PlayMusic_4 -> Menu_PlayMusic_4 */
uint32_t Menu_PlayMusic_4(int param_1);
/* 0x00419050 Menu_DrawWidget_4 -> Menu_DrawWidget_4 */
void Menu_DrawWidget_4(int param_1);
/* 0x00419070 Menu_HandleInput_4 -> Menu_HandleInput_4 */
uint32_t Menu_HandleInput_4(int param_1);
/* 0x00419090 Menu_RequestScreen_5 -> Menu_RequestScreen_5 */
void Menu_RequestScreen_5(int param_1);
/* 0x004190b0 Menu_LeaveMenus_5 -> Menu_LeaveMenus_5 */
void Menu_LeaveMenus_5(int param_1);
/* 0x004190c0 Menu_UpdateLanguage_5 -> Menu_UpdateLanguage_5 */
void Menu_UpdateLanguage_5(int param_1);
/* 0x004190d0 Menu_FormatScreen_5 -> Menu_FormatScreen_5 */
void Menu_FormatScreen_5(int param_1);
/* 0x004190e0 MenuLoader_Init -> MenuLoader_Init */
void MenuLoader_Init(void);
/* 0x00419210 MenuLoader_Setup -> MenuLoader_Setup */
void MenuLoader_Setup(int param_1);
/* 0x004192b0 MenuLoader_OnEvent -> MenuLoader_OnEvent */
void MenuLoader_OnEvent(void);
/* 0x004192e0 Menu_PlayMusic_5 -> Menu_PlayMusic_5 */
void Menu_PlayMusic_5(float *param_1, float param_2, float param_3, float param_4, float param_5);
/* 0x00419330 Menu_DrawWidget_5 -> Menu_DrawWidget_5 */
void Menu_DrawWidget_5(int *param_1, float *param_2);
/* 0x00419540 Menu_HandleInput_5 -> Menu_HandleInput_5 */
void Menu_HandleInput_5(int *param_1, float *param_2);
/* 0x00419630 Menu_RequestScreen_6 -> Menu_RequestScreen_6 */
void Menu_RequestScreen_6(float *param_1, float *param_2);
/* 0x00419760 BackgroundFX_Init -> BackgroundFX_Init */
void BackgroundFX_Init(void);
/* 0x00419820 BackgroundFX_LoadParameters -> BackgroundFX_LoadParameters */
void BackgroundFX_LoadParameters(int param_1);
/* 0x00419860 BackgroundFX_OnEvent -> BackgroundFX_OnEvent */
void BackgroundFX_OnEvent(uint32_t param_1, float param_2);
/* 0x00419950 BackgroundFX_Process -> BackgroundFX_Process */
void BackgroundFX_Process(int *param_1, uint32_t param_2);
/* 0x004199b0 Menu_LeaveMenus_6 -> Menu_LeaveMenus_6 */
void Menu_LeaveMenus_6(void);
/* 0x004199d0 Menu_UpdateLanguage_6 -> Menu_UpdateLanguage_6 */
void Menu_UpdateLanguage_6(uint32_t param_1);
/* 0x004199f0 DialogWindow_Init -> DialogWindow_Init */
void DialogWindow_Init(void);
/* 0x00419cb0 DialogWindow_LoadParameters -> DialogWindow_LoadParameters */
void DialogWindow_LoadParameters(float param_1);
/* 0x00419d30 Menu_FormatScreen_6 -> Menu_FormatScreen_6 */
void Menu_FormatScreen_6(int param_1, float param_2);
/* 0x0041a1a0 Menu_PlayMusic_6 -> Menu_PlayMusic_6 */
void Menu_PlayMusic_6(void);
/* 0x0041a1d0 Menu_DrawWidget_6 -> Menu_DrawWidget_6 */
int Menu_DrawWidget_6(int param_1);
/* 0x0041a1e0 TypeWriterBox_Init -> TypeWriterBox_Init */
void TypeWriterBox_Init(void);
/* 0x0041a3c0 TypeWriterBox_Setup -> TypeWriterBox_Setup */
void TypeWriterBox_Setup(int param_1);
/* 0x0041a4d0 TypeWriterBox_Process -> TypeWriterBox_Process */
void TypeWriterBox_Process(void);
/* 0x0041a6d0 TypeWriterBox_LoadParameters -> TypeWriterBox_LoadParameters */
void TypeWriterBox_LoadParameters(void);
/* 0x0041a9f0 TypeWriterBox_Update -> TypeWriterBox_Update */
void TypeWriterBox_Update(int param_1);
/* 0x0041aac0 Menu_RequestScreen_7 -> Menu_RequestScreen_7 */
void Menu_RequestScreen_7(void);
/* 0x0041aaf0 TextBox_Init -> TextBox_Init */
void TextBox_Init(void);
/* 0x0041ad20 TextBox_Process -> TextBox_Process */
void TextBox_Process(int param_1);
/* 0x0041ad70 TextBox_OnEvent -> TextBox_OnEvent */
void TextBox_OnEvent(int param_1, uint32_t param_2);
/* 0x0041ae20 TextBox_LoadParameters -> TextBox_LoadParameters */
void TextBox_LoadParameters(void);
/* 0x0041aea0 TextBox_Setup -> TextBox_Setup */
void TextBox_Setup(float param_1);
/* 0x0041afb0 Menu_LeaveMenus_7 -> Menu_LeaveMenus_7 */
int Menu_LeaveMenus_7(int param_1, int param_2, uint32_t param_3, int param_4, uint32_t param_5, char *param_6, uint32_t param_7, int param_8, uint32_t param_9);
/* 0x0041b170 TextBox_Update -> TextBox_Update */
void TextBox_Update(int param_1);
/* 0x0041b260 Menu_UpdateLanguage_7 -> Menu_UpdateLanguage_7 */
void Menu_UpdateLanguage_7(void);
/* 0x0041b290 Menu_FormatScreen_7 -> Menu_FormatScreen_7 */
void Menu_FormatScreen_7(char *param_1, int param_2);
/* 0x0041b310 PictureBox_Init -> PictureBox_Init */
void PictureBox_Init(void);
/* 0x0041b500 PictureBox_Process -> PictureBox_Process */
void PictureBox_Process(int param_1);
/* 0x0041b530 PictureBox_Update -> PictureBox_Update */
void PictureBox_Update(int param_1, uint32_t param_2);
/* 0x0041b590 PictureBox_LoadParameters -> PictureBox_LoadParameters */
void PictureBox_LoadParameters(void);
/* 0x0041b5f0 PictureBox_Setup -> PictureBox_Setup */
void PictureBox_Setup(void);
/* 0x0041b750 PictureBox_OnEvent -> PictureBox_OnEvent */
void PictureBox_OnEvent(int param_1);
/* 0x0041b840 Menu_PlayMusic_7 -> Menu_PlayMusic_7 */
void Menu_PlayMusic_7(void);
/* 0x0041b870 Menu_DrawWidget_7 -> Menu_DrawWidget_7 */
void Menu_DrawWidget_7(char *param_1, int param_2);
/* 0x0041b8e0 ScrollListBox_Init -> ScrollListBox_Init */
void ScrollListBox_Init(void);
/* 0x0041bbd0 Menu_HandleInput_7 -> Menu_HandleInput_7 */
void Menu_HandleInput_7(int param_1);
/* 0x0041bc00 ScrollListBox_Process -> ScrollListBox_Process */
void ScrollListBox_Process(int param_1);
/* 0x0041bdd0 ScrollListBox_LoadParameters -> ScrollListBox_LoadParameters */
void ScrollListBox_LoadParameters(void);
/* 0x0041c080 ScrollListBox_Setup -> ScrollListBox_Setup */
void ScrollListBox_Setup(void);
/* 0x0041c310 ScrollListBox_Update -> ScrollListBox_Update */
void ScrollListBox_Update(void);
/* 0x0041c500 ScrollListBox_OnEvent -> ScrollListBox_OnEvent */
void ScrollListBox_OnEvent(int param_1);
/* 0x0041c5a0 ScrollListBox_Action -> ScrollListBox_Action */
void ScrollListBox_Action(void);
/* 0x0041c600 ScrollListBox_Cleanup -> ScrollListBox_Cleanup */
void ScrollListBox_Cleanup(void);
/* 0x0041c660 Menu_RequestScreen_8 -> Menu_RequestScreen_8 */
void Menu_RequestScreen_8(void);
/* 0x0041c690 Menu_LeaveMenus_8 -> Menu_LeaveMenus_8 */
void Menu_LeaveMenus_8(char *param_1, int param_2);
/* 0x0041c700 AsciiBox_Init -> AsciiBox_Init */
void AsciiBox_Init(void);
/* 0x0041c940 AsciiBox_Process -> AsciiBox_Process */
void AsciiBox_Process(int param_1);
/* 0x0041c9d0 AsciiBox_Update -> AsciiBox_Update */
void AsciiBox_Update(int param_1);
/* 0x0041cb40 Menu_UpdateLanguage_8 -> Menu_UpdateLanguage_8 */
int Menu_UpdateLanguage_8(uint32_t param_1, uint32_t param_2, char *param_3, int param_4);
/* 0x0041cd20 AsciiBox_LoadParameters -> AsciiBox_LoadParameters */
void AsciiBox_LoadParameters(int param_1);
/* 0x0041cdf0 AsciiBox_Setup -> AsciiBox_Setup */
void AsciiBox_Setup(void);
/* 0x0041d050 Menu_FormatScreen_8 -> Menu_FormatScreen_8 */
void Menu_FormatScreen_8(void);
/* 0x0041d080 InputBox_Init -> InputBox_Init */
void InputBox_Init(void);
/* 0x0041d330 InputBox_Setup -> InputBox_Setup */
void InputBox_Setup(int param_1);
/* 0x0041d3a0 InputBox_Process -> InputBox_Process */
void InputBox_Process(int param_1, uint32_t param_2);
/* 0x0041d660 menu_k01 -> menu_k01 */
void menu_k01(int param_1, int param_2);
/* 0x0041d6a0 Menu_MenuK01D -> Menu_MenuK01D */
void Menu_MenuK01D(int param_1, int param_2, char param_3);
/* 0x0041d720 InputBox_LoadParameters -> InputBox_LoadParameters */
void InputBox_LoadParameters(void);
/* 0x0041d9e0 InputBox_Update -> InputBox_Update */
void InputBox_Update(int param_1);
/* 0x0041da90 InputBox_OnEvent -> InputBox_OnEvent */
void InputBox_OnEvent(int param_1);
/* 0x0041db30 InputBox_Action -> InputBox_Action */
void InputBox_Action(void);
/* 0x0041db90 InputBox_Cleanup -> InputBox_Cleanup */
void InputBox_Cleanup(void);
/* 0x0041dbf0 Menu_HandleInput_8 -> Menu_HandleInput_8 */
void Menu_HandleInput_8(void);
/* 0x0041dc20 Menu_RequestScreen_9 -> Menu_RequestScreen_9 */
void Menu_RequestScreen_9(char *param_1);
/* 0x0041dc50 ToggleBox_Init -> ToggleBox_Init */
void ToggleBox_Init(void);
/* 0x0041deb0 ToggleBox_Process -> ToggleBox_Process */
void ToggleBox_Process(int param_1);
/* 0x0041e020 ToggleBox_LoadParameters -> ToggleBox_LoadParameters */
void ToggleBox_LoadParameters(int param_1);
/* 0x0041e130 ToggleBox_Setup -> ToggleBox_Setup */
void ToggleBox_Setup(void);
/* 0x0041e500 ToggleBox_Update -> ToggleBox_Update */
void ToggleBox_Update(int param_1);
/* 0x0041e5a0 ToggleBox_OnEvent -> ToggleBox_OnEvent */
void ToggleBox_OnEvent(void);
/* 0x0041e600 ToggleBox_Action -> ToggleBox_Action */
void ToggleBox_Action(void);
/* 0x0041e660 Menu_LeaveMenus_9 -> Menu_LeaveMenus_9 */
void Menu_LeaveMenus_9(void);
/* 0x0041e690 ListBox_Init -> ListBox_Init */
void ListBox_Init(void);
/* 0x0041e990 Menu_UpdateLanguage_9 -> Menu_UpdateLanguage_9 */
void Menu_UpdateLanguage_9(int param_1);
/* 0x0041e9d0 ListBox_Process -> ListBox_Process */
void ListBox_Process(int param_1);
/* 0x0041ea70 ListBox_Update -> ListBox_Update */
void ListBox_Update(void);
/* 0x0041ec70 ListBox_LoadParameters -> ListBox_LoadParameters */
void ListBox_LoadParameters(int param_1);
/* 0x0041ed70 ListBox_Setup -> ListBox_Setup */
void ListBox_Setup(void);
/* 0x0041f030 ListBox_OnEvent -> ListBox_OnEvent */
void ListBox_OnEvent(void);
/* 0x0041f140 ListBox_Action -> ListBox_Action */
void ListBox_Action(int param_1);
/* 0x0041f1e0 ListBox_Cleanup -> ListBox_Cleanup */
void ListBox_Cleanup(void);
/* 0x0041f240 ListBox_Cleanup_2 -> ListBox_Cleanup_2 */
void ListBox_Cleanup_2(void);
/* 0x0041f2a0 Menu_PlayMusic_9 -> Menu_PlayMusic_9 */
void Menu_PlayMusic_9(void);
/* 0x0041f2d0 Menu_DrawWidget_9 -> Menu_DrawWidget_9 */
void Menu_DrawWidget_9(char *param_1, int param_2);
/* 0x0041f340 SlideBar_Init -> SlideBar_Init */
void SlideBar_Init(void);
/* 0x0041f5a0 SlideBar_Update -> SlideBar_Update */
void SlideBar_Update(int param_1, int param_2);
/* 0x0041f6c0 SlideBar_Process -> SlideBar_Process */
void SlideBar_Process(int param_1);
/* 0x0041f740 SlideBar_OnEvent -> SlideBar_OnEvent */
void SlideBar_OnEvent(void);
/* 0x0041fa10 SlideBar_LoadParameters -> SlideBar_LoadParameters */
void SlideBar_LoadParameters(void);
/* 0x0041fce0 SlideBar_Setup -> SlideBar_Setup */
void SlideBar_Setup(void);
/* 0x0041ff30 SlideBar_Action -> SlideBar_Action */
void SlideBar_Action(void);
/* 0x00420020 SlideBar_Cleanup -> SlideBar_Cleanup */
void SlideBar_Cleanup(int param_1);
/* 0x004200c0 SlideBar_Cleanup_2 -> SlideBar_Cleanup_2 */
void SlideBar_Cleanup_2(void);
/* 0x004201b0 Menu_LeaveMenus_10 -> Menu_LeaveMenus_10 */
void Menu_LeaveMenus_10(void);
/* 0x004201e0 Menu_Slidevert -> Menu_Slidevert */
void Menu_Slidevert(uint32_t param_1, uint32_t param_2);
/* 0x00420240 Menu_UpdateLanguage_10 -> Menu_UpdateLanguage_10 */
void Menu_UpdateLanguage_10(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, int param_5, uint32_t param_6);
/* 0x00420290 Menu_FormatScreen_10 -> Menu_FormatScreen_10 */
uint32_t Menu_FormatScreen_10(int param_1);
/* 0x004202d0 Menu_PlayMusic_10 -> Menu_PlayMusic_10 */
void Menu_PlayMusic_10(int param_1, int param_2);
/* 0x00420300 MenuTextConditional_Init -> MenuTextConditional_Init */
void MenuTextConditional_Init(void);
/* 0x00420500 MenuTextConditional_Action -> MenuTextConditional_Action */
void MenuTextConditional_Action(int param_1, uint32_t param_2);
/* 0x004205f0 MenuTextConditional_Process -> MenuTextConditional_Process */
void MenuTextConditional_Process(int param_1);
/* 0x00420640 MenuTextConditional_Update -> MenuTextConditional_Update */
void MenuTextConditional_Update(void);
/* 0x004207e0 MenuTextConditional_LoadParameters -> MenuTextConditional_LoadParameters */
void MenuTextConditional_LoadParameters(void);
/* 0x004208f0 MenuTextConditional_Setup -> MenuTextConditional_Setup */
void MenuTextConditional_Setup(void);
/* 0x00420bc0 MenuText_Update -> MenuText_Update */
void MenuText_Update(int param_1);
/* 0x00420c90 Menu_DrawWidget_10 -> Menu_DrawWidget_10 */
void Menu_DrawWidget_10(void);
/* 0x00420cc0 MenuText_Init -> MenuText_Init */
void MenuText_Init(void);
/* 0x00420f00 MenuText_Process -> MenuText_Process */
void MenuText_Process(int param_1);
/* 0x00421070 MenuText_LoadParameters -> MenuText_LoadParameters */
void MenuText_LoadParameters(int param_1);
/* 0x00421130 MenuText_Setup -> MenuText_Setup */
void MenuText_Setup(void);
/* 0x004213e0 TEXT_BLACK -> TEXT_BLACK */
void TEXT_BLACK(void);
/* 0x00421430 MenuButton_Init -> MenuButton_Init */
void MenuButton_Init(void);
/* 0x00421550 MenuButton_Process -> MenuButton_Process */
void MenuButton_Process(int param_1, uint32_t param_2);
/* 0x00421600 MenuButton_LoadParameters -> MenuButton_LoadParameters */
void MenuButton_LoadParameters(void);
/* 0x00421700 Menu_RequestScreen_11 -> Menu_RequestScreen_11 */
void Menu_RequestScreen_11(void);
/* 0x00421730 Menu_LeaveMenus_11 -> Menu_LeaveMenus_11 */
void Menu_LeaveMenus_11(uint32_t param_1);
/* 0x00421750 MenuScreen_Init -> MenuScreen_Init */
void MenuScreen_Init(void);
/* 0x00421a10 MenuScreen_Setup -> MenuScreen_Setup */
void MenuScreen_Setup(int param_1);
/* 0x00421a70 MenuScreen_Process -> MenuScreen_Process */
void MenuScreen_Process(void);
/* 0x00421cd0 Menu_UpdateLanguage_11 -> Menu_UpdateLanguage_11 */
void Menu_UpdateLanguage_11(int param_1);
/* 0x00422110 MenuScreen_LoadParameters -> MenuScreen_LoadParameters */
void MenuScreen_LoadParameters(int param_1);
/* 0x00422190 MenuScreen_Update -> MenuScreen_Update */
void MenuScreen_Update(void);
/* 0x00422200 MenuScreen_OnEvent -> MenuScreen_OnEvent */
void MenuScreen_OnEvent(void);
/* 0x00422260 MenuScreen_Action -> MenuScreen_Action */
void MenuScreen_Action(int param_1);
/* 0x00422300 MenuScreen_Cleanup -> MenuScreen_Cleanup */
void MenuScreen_Cleanup(int param_1);
/* 0x004223a0 Menu_FormatScreen_11 -> Menu_FormatScreen_11 */
void Menu_FormatScreen_11(void);
/* 0x004223d0 MenuFrame_Init -> MenuFrame_Init */
void MenuFrame_Init(void);
/* 0x004225f0 MenuFrame_Update -> MenuFrame_Update */
void MenuFrame_Update(void);
/* 0x00422640 MenuFrame_OnEvent -> MenuFrame_OnEvent */
void MenuFrame_OnEvent(void);
/* 0x004226d0 MenuFrame_Setup -> MenuFrame_Setup */
void MenuFrame_Setup(void);
/* 0x004227a0 Menu_PlayMusic_11 -> Menu_PlayMusic_11 */
int Menu_PlayMusic_11(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8);
/* 0x004229a0 Menu_DrawWidget_11 -> Menu_DrawWidget_11 */
void Menu_DrawWidget_11(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
/* 0x00422a50 MenuFrame_LoadParameters -> MenuFrame_LoadParameters */
void MenuFrame_LoadParameters(void);
/* 0x00422b10 Menu_HandleInput_11 -> Menu_HandleInput_11 */
void Menu_HandleInput_11(void);
/* 0x00422b40 ModelViewBox_Init -> ModelViewBox_Init */
void ModelViewBox_Init(void);
/* 0x00422c90 ModelViewBox_Process -> ModelViewBox_Process */
void ModelViewBox_Process(void);
/* 0x00422df0 ModelViewBox_Setup -> ModelViewBox_Setup */
void ModelViewBox_Setup(int param_1);
/* 0x00422e40 ModelViewBox_Update -> ModelViewBox_Update */
void ModelViewBox_Update(void);
/* 0x00422f30 ModelViewBox_LoadParameters -> ModelViewBox_LoadParameters */
void ModelViewBox_LoadParameters(float param_1);
/* 0x00423000 ModelViewBox_OnEvent -> ModelViewBox_OnEvent */
void ModelViewBox_OnEvent(void);
/* 0x00423050 Menu_RequestScreen_12 -> Menu_RequestScreen_12 */
void Menu_RequestScreen_12(void);
/* 0x00423080 Menu_LeaveMenus_12 -> Menu_LeaveMenus_12 */
uint32_t Menu_LeaveMenus_12(uint32_t param_1);
/* 0x004230a0 ControlsMenu_Init -> ControlsMenu_Init */
void ControlsMenu_Init(void);
/* 0x004231e0 ControlsMenu_ConvertFloatFromOffset -> ControlsMenu_ConvertFloatFromOffset */
float ControlsMenu_ConvertFloatFromOffset(int offset);
/* 0x00423240 ControlsMenu_ConvertOffsetFromFloat -> ControlsMenu_ConvertOffsetFromFloat */
int ControlsMenu_ConvertOffsetFromFloat(float value);
/* 0x004232b0 ControlsMenu_Process -> ControlsMenu_Process */
void ControlsMenu_Process(void);
/* 0x004233d0 ControlsMenu_Update -> ControlsMenu_Update */
void ControlsMenu_Update(void);
/* 0x004234e0 ControlsMenu_LoadParameters -> ControlsMenu_LoadParameters */
void ControlsMenu_LoadParameters(void);
/* 0x00423770 Menu_UpdateLanguage_12 -> Menu_UpdateLanguage_12 */
void Menu_UpdateLanguage_12(int param_1, int param_2, uint32_t param_3);
/* 0x004237c0 Menu_FormatScreen_12 -> Menu_FormatScreen_12 */
void Menu_FormatScreen_12(uint32_t param_1);
/* 0x00423810 Menu_PlayMusic_12 -> Menu_PlayMusic_12 */
int Menu_PlayMusic_12(uint32_t param_1);
/* 0x00423860 Menu_DrawWidget_12 -> Menu_DrawWidget_12 */
int Menu_DrawWidget_12(uint32_t param_1, uint32_t param_2);
/* 0x004238b0 ControlsMenu_Setup -> ControlsMenu_Setup */
void ControlsMenu_Setup(float param_1);
/* 0x00423930 Menu_HandleInput_12 -> Menu_HandleInput_12 */
void Menu_HandleInput_12(int param_1, uint32_t param_2);
/* 0x00423ac0 Menu_RequestScreen_13 -> Menu_RequestScreen_13 */
void Menu_RequestScreen_13(int param_1, float param_2);
/* 0x00423cb0 ControlsMenu_OnEvent -> ControlsMenu_OnEvent */
void ControlsMenu_OnEvent(void);
/* 0x00423d30 ControlsMenu_Action -> ControlsMenu_Action */
void ControlsMenu_Action(void);
/* 0x00423db0 ControlsMenu_Cleanup -> ControlsMenu_Cleanup */
void ControlsMenu_Cleanup(void);
/* 0x00423f90 ControlsMenu_ConvertFloatFromOffset_2 -> ControlsMenu_ConvertFloatFromOffset_2 */
void ControlsMenu_ConvertFloatFromOffset_2(void);
/* 0x00423fc0 MenuWindow_Init -> MenuWindow_Init */
void MenuWindow_Init(void);
/* 0x00424220 Menu_LeaveMenus_13 -> Menu_LeaveMenus_13 */
void Menu_LeaveMenus_13(int param_1, int param_2);
/* 0x004244b0 MenuWindow_Setup -> MenuWindow_Setup */
void MenuWindow_Setup(void);
/* 0x00424790 LINEUPMODE_NONE -> LINEUPMODE_NONE */
void LINEUPMODE_NONE(void);
/* 0x00424850 Menu_PlayMusic_13 -> Menu_PlayMusic_13 */
uint16_t Menu_PlayMusic_13(void);
/* 0x00424860 Menu_DrawWidget_13 -> Menu_DrawWidget_13 */
uint32_t Menu_DrawWidget_13(void);
/* 0x00424870 Menu_HandleInput_13 -> Menu_HandleInput_13 */
uint32_t Menu_HandleInput_13(void);
/* 0x00424880 Menu_RequestScreen_14 -> Menu_RequestScreen_14 */
uint32_t Menu_RequestScreen_14(void);
/* 0x00424890 Menu_LeaveMenus_14 -> Menu_LeaveMenus_14 */
uint32_t Menu_LeaveMenus_14(void);
/* 0x004248a0 Menu_UpdateLanguage_14 -> Menu_UpdateLanguage_14 */
void Menu_UpdateLanguage_14(int param_1, int param_2, int param_3, int param_4, int param_5, uint32_t *param_6, uint32_t *param_7);
/* 0x00424980 Menu_DrawWidget_14 -> Menu_DrawWidget_14 */
void Menu_DrawWidget_14(int param_1, float param_2, float param_3, int param_4);
/* 0x00424b60 Menu_HandleInput_14 -> Menu_HandleInput_14 */
void Menu_HandleInput_14(uint32_t param_1, uint32_t param_2);
/* 0x00424b80 Menu_RequestScreen_15 -> Menu_RequestScreen_15 */
uint8_t Menu_RequestScreen_15(void);
/* 0x00424b90 Cursor_Init -> Cursor_Init */
void Cursor_Init(void);
/* 0x00424ce0 Cursor_LoadParameters -> Cursor_LoadParameters */
void Cursor_LoadParameters(void);
/* 0x00424e10 Menu_LeaveMenus_15 -> Menu_LeaveMenus_15 */
void Menu_LeaveMenus_15(void);
/* 0x00424e20 Menu_UpdateLanguage_15 -> Menu_UpdateLanguage_15 */
void Menu_UpdateLanguage_15(uint32_t param_1);
/* 0x00424e40 Menu_FormatScreen_15 -> Menu_FormatScreen_15 */
void Menu_FormatScreen_15(int param_1, uint32_t param_2);
/* 0x00424e50 Menu_PlayMusic_15 -> Menu_PlayMusic_15 */
void Menu_PlayMusic_15(void);
/* 0x00424e80 ConditionalSound_Init -> ConditionalSound_Init */
void ConditionalSound_Init(void);
/* 0x00425050 ConditionalSound_LoadParameters -> ConditionalSound_LoadParameters */
void ConditionalSound_LoadParameters(int param_1);
/* 0x004250d0 ConditionalSound_Tick -> ConditionalSound_Tick */
void ConditionalSound_Tick(...);
/* 0x004251c0 ConditionalSound_Stop -> ConditionalSound_Stop */
void ConditionalSound_Stop();
/* 0x00425200 ConditionalSound_Start -> ConditionalSound_Start */
void ConditionalSound_Start();
/* 0x004252e0 Menu_DrawWidget_15 -> Menu_DrawWidget_15 */
void Menu_DrawWidget_15(int param_1);
/* 0x00425340 ConditionalSound_Process -> ConditionalSound_Process */
void ConditionalSound_Process(int param_1);
/* 0x004253c0 ConditionalSound_Update -> ConditionalSound_Update */
void ConditionalSound_Update(void);
/* 0x004254a0 ConditionalSound_OnEvent -> ConditionalSound_OnEvent */
void ConditionalSound_OnEvent(void);
/* 0x00425560 ConditionalSound_Action -> ConditionalSound_Action */
void ConditionalSound_Action(int param_1);
/* 0x00425580 Menu_RequestScreen_16 -> Menu_RequestScreen_16 */
void Menu_RequestScreen_16(void);
/* 0x004255a0 Menu_LeaveMenus_16 -> Menu_LeaveMenus_16 */
float10 Menu_LeaveMenus_16(double *param_1);
/* 0x004258c0 Menu_UpdateLanguage_16 -> Menu_UpdateLanguage_16 */
uint32_t Menu_UpdateLanguage_16(int param_1);
/* 0x004258e0 Menu_FormatScreen_16 -> Menu_FormatScreen_16 */
uint32_t Menu_FormatScreen_16(int param_1);
/* 0x00425900 Menu_PlayMusic_16 -> Menu_PlayMusic_16 */
float10 Menu_PlayMusic_16(int param_1);
/* 0x00425b70 Menu_DrawWidget_16 -> Menu_DrawWidget_16 */
int Menu_DrawWidget_16(int param_1);
/* 0x00425b80 Menu_CaraiErrorInGraphDNo -> Menu_CaraiErrorInGraphDNo */
void Menu_CaraiErrorInGraphDNo(uint32_t param_1, uint32_t param_2, int *param_3, int param_4, int param_5);
/* 0x00425c10 Menu_CaraiErrorInGraphDNo_2 -> Menu_CaraiErrorInGraphDNo_2 */
int * Menu_CaraiErrorInGraphDNo_2(int *param_1, uint32_t param_2, int param_3, int param_4);
/* 0x00425c80 CarAI_Init -> CarAI_Init */
void CarAI_Init(void);
/* 0x00425de0 CarAI_Run -> CarAI_Run */
void CarAI_Run(...);
/* 0x00426000 Menu_HandleInput_16 -> Menu_HandleInput_16 */
uint32_t Menu_HandleInput_16(int param_1);
/* 0x004260c0 Menu_RequestScreen_17 -> Menu_RequestScreen_17 */
uint32_t Menu_RequestScreen_17(int param_1, uint32_t param_2);
/* 0x00426140 Menu_LeaveMenus_17 -> Menu_LeaveMenus_17 */
void Menu_LeaveMenus_17(int param_1);
/* 0x00426260 Menu_UpdateLanguage_17 -> Menu_UpdateLanguage_17 */
void Menu_UpdateLanguage_17(float *param_1, uint32_t *param_2, int param_3);
/* 0x004262f0 CarAI_Combat -> CarAI_Combat */
void CarAI_Combat();
/* 0x00426510 CarAI_UpdateCar -> CarAI_UpdateCar */
void CarAI_UpdateCar();
/* 0x004265a0 CarAI_Process -> CarAI_Process */
void CarAI_Process(int param_1);
/* 0x00426610 Menu_FormatScreen_17 -> Menu_FormatScreen_17 */
void Menu_FormatScreen_17(void);
/* 0x00426630 CarDoor_Init -> CarDoor_Init */
void CarDoor_Init(void);
/* 0x00426740 CarDoor_LoadParameters -> CarDoor_LoadParameters */
void CarDoor_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00426880 CarDoor_Setup -> CarDoor_Setup */
void CarDoor_Setup(void);
/* 0x00426d60 Menu_PlayMusic_17 -> Menu_PlayMusic_17 */
void Menu_PlayMusic_17(void);
/* 0x00426d70 Menu_DrawWidget_17 -> Menu_DrawWidget_17 */
uint16_t Menu_DrawWidget_17(void);
/* 0x00426d80 Menu_HandleInput_17 -> Menu_HandleInput_17 */
void Menu_HandleInput_17(int param_1, uint8_t param_2);
/* 0x00426d90 HeliWheel_Init -> HeliWheel_Init */
void HeliWheel_Init(void);
/* 0x00426e90 HeliWheel_LoadParameters -> HeliWheel_LoadParameters */
void HeliWheel_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00426fa0 HeliWheel_Process -> HeliWheel_Process */
void HeliWheel_Process(void);
/* 0x00427280 Menu_RequestScreen_18 -> Menu_RequestScreen_18 */
void Menu_RequestScreen_18(void);
/* 0x00427290 Menu_LeaveMenus_18 -> Menu_LeaveMenus_18 */
uint16_t Menu_LeaveMenus_18(void);
/* 0x004272a0 HeliDoor_Init -> HeliDoor_Init */
void HeliDoor_Init(void);
/* 0x004274e0 HeliDoor_Setup -> HeliDoor_Setup */
void HeliDoor_Setup(void);
/* 0x00427810 Menu_UpdateLanguage_18 -> Menu_UpdateLanguage_18 */
void Menu_UpdateLanguage_18(void);
/* 0x00427820 Menu_FormatScreen_18 -> Menu_FormatScreen_18 */
uint16_t Menu_FormatScreen_18(void);
/* 0x00427830 RocketPod_Init -> RocketPod_Init */
void RocketPod_Init(void);
/* 0x00427940 RocketPod_LoadParameters -> RocketPod_LoadParameters */
void RocketPod_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00427a70 RocketPod_Setup -> RocketPod_Setup */
void RocketPod_Setup(int param_1);
/* 0x00427d80 Menu_PlayMusic_18 -> Menu_PlayMusic_18 */
void Menu_PlayMusic_18(void);
/* 0x00427d90 HitZone_Init -> HitZone_Init */
void HitZone_Init(void);
/* 0x00427fb0 Menu_DrawWidget_18 -> Menu_DrawWidget_18 */
void Menu_DrawWidget_18(void);
/* 0x00427ff0 Missile_Init -> Missile_Init */
void Missile_Init(void);
/* 0x00428280 Menu_HandleInput_18 -> Menu_HandleInput_18 */
void Menu_HandleInput_18(int param_1);
/* 0x00428390 Missile_Run -> Missile_Run */
void Missile_Run(...);
/* 0x00428610 Menu_RequestScreen_19 -> Menu_RequestScreen_19 */
void Menu_RequestScreen_19(int param_1);
/* 0x00428630 Menu_LeaveMenus_19 -> Menu_LeaveMenus_19 */
void Menu_LeaveMenus_19(int param_1);
/* 0x00428910 Menu_UpdateLanguage_19 -> Menu_UpdateLanguage_19 */
void Menu_UpdateLanguage_19(int param_1);
/* 0x00428930 Menu_FormatScreen_19 -> Menu_FormatScreen_19 */
void Menu_FormatScreen_19(int param_1);
/* 0x00428a00 Menu_PlayMusic_19 -> Menu_PlayMusic_19 */
void Menu_PlayMusic_19(int param_1);
/* 0x00428a60 Menu_DrawWidget_19 -> Menu_DrawWidget_19 */
void Menu_DrawWidget_19(int param_1, double *param_2);
/* 0x00428ad0 Menu_HandleInput_19 -> Menu_HandleInput_19 */
void Menu_HandleInput_19(int param_1, double *param_2);
/* 0x00428b60 Menu_RequestScreen_20 -> Menu_RequestScreen_20 */
void Menu_RequestScreen_20(int param_1, double *param_2);
/* 0x00428ca0 Missile_Setup -> Missile_Setup */
void Missile_Setup(int param_1);
/* 0x00428d00 Menu_UpdateLanguage_20 -> Menu_UpdateLanguage_20 */
void Menu_UpdateLanguage_20(int param_1);
/* 0x00429540 Missile_Process -> Missile_Process */
void Missile_Process(void);
/* 0x00429730 Missile_Update -> Missile_Update */
void Missile_Update(uint32_t param_1, int *param_2);
/* 0x004298e0 Missile_OnEvent -> Missile_OnEvent */
void Missile_OnEvent(uint32_t param_1, uint32_t *param_2);
/* 0x00429920 Missile_Action -> Missile_Action */
void Missile_Action(void);
/* 0x00429a00 Menu_FormatScreen_20 -> Menu_FormatScreen_20 */
void Menu_FormatScreen_20(void);
/* 0x00429a20 Menu_PlayMusic_20 -> Menu_PlayMusic_20 */
uint16_t Menu_PlayMusic_20(void);
/* 0x00429a30 Menu_VirmodelSNotAvailabl -> Menu_VirmodelSNotAvailabl */
int Menu_VirmodelSNotAvailabl(uint32_t param_1, int param_2, int param_3, double *param_4, uint32_t *param_5, float param_6, double *param_7, int param_8, char *param_9, uint32_t param_10);
/* 0x00429d80 Menu_DrawWidget_20 -> Menu_DrawWidget_20 */
void Menu_DrawWidget_20(int param_1);
/* 0x00429dc0 Menu_HandleInput_20 -> Menu_HandleInput_20 */
void Menu_HandleInput_20(int param_1);
/* 0x00429ef0 Menu_RequestScreen_21 -> Menu_RequestScreen_21 */
void Menu_RequestScreen_21(int param_1);
/* 0x0042a100 Train_LoadParameters -> Train_LoadParameters */
void Train_LoadParameters(int param_1);
/* 0x0042a150 Train_Setup -> Train_Setup */
void Train_Setup(void);
/* 0x0042a2c0 Menu_LeaveMenus_21 -> Menu_LeaveMenus_21 */
void Menu_LeaveMenus_21(float param_1, int param_2);
/* 0x0042a7c0 Menu_UpdateLanguage_21 -> Menu_UpdateLanguage_21 */
void Menu_UpdateLanguage_21(uint32_t param_1, double *param_2, int param_3);
/* 0x0042ac20 Train_Cleanup -> Train_Cleanup */
void Train_Cleanup(void);
/* 0x0042acc0 Train_Init -> Train_Init */
void Train_Init(void);
/* 0x0042b040 Train_ReceiveChannels -> Train_ReceiveChannels */
void Train_ReceiveChannels(...);
/* 0x0042b500 Train_Process -> Train_Process */
void Train_Process(void);
/* 0x0042b700 Train_Update -> Train_Update */
void Train_Update(void);
/* 0x0042b930 Train_Action -> Train_Action */
void Train_Action(void);
/* 0x0042bc00 Menu_FormatScreen_21 -> Menu_FormatScreen_21 */
void Menu_FormatScreen_21(void);
/* 0x0042bc20 Menu_PlayMusic_21 -> Menu_PlayMusic_21 */
uint16_t Menu_PlayMusic_21(void);
/* 0x0042bc30 Afterburner_LoadParameters -> Afterburner_LoadParameters */
void Afterburner_LoadParameters(int param_1, uint32_t *param_2);
/* 0x0042bd40 Afterburner_Update -> Afterburner_Update */
void Afterburner_Update(void);
/* 0x0042beb0 Afterburner_Init -> Afterburner_Init */
void Afterburner_Init(void);
/* 0x0042bfa0 Afterburner_Setup -> Afterburner_Setup */
void Afterburner_Setup(float param_1);
/* 0x0042c0b0 Afterburner_Process -> Afterburner_Process */
void Afterburner_Process(void);
/* 0x0042c4e0 Menu_DrawWidget_21 -> Menu_DrawWidget_21 */
void Menu_DrawWidget_21(void);
/* 0x0042c500 Rotor_Setup -> Rotor_Setup */
void Rotor_Setup(int param_1, uint32_t *param_2);
/* 0x0042c630 Rotor_LoadParameters -> Rotor_LoadParameters */
void Rotor_LoadParameters(void);
/* 0x0042d1d0 Rotor_OnEvent -> Rotor_OnEvent */
void Rotor_OnEvent(void);
/* 0x0042d2b0 Rotor_Init -> Rotor_Init */
void Rotor_Init(void);
/* 0x0042d440 Rotor_Tick -> Rotor_Tick */
void Rotor_Tick(...);
/* 0x0042d680 Rotor_Update -> Rotor_Update */
void Rotor_Update(void);
/* 0x0042da70 PhysicsObj_Setup -> PhysicsObj_Setup */
void PhysicsObj_Setup(uint32_t param_1, int *param_2);
/* 0x0042daa0 Menu_HandleInput_21 -> Menu_HandleInput_21 */
void Menu_HandleInput_21(void);
/* 0x0042dac0 Menu_RequestScreen_22 -> Menu_RequestScreen_22 */
void Menu_RequestScreen_22(void);
/* 0x0042db00 Menu_LeaveMenus_22 -> Menu_LeaveMenus_22 */
void Menu_LeaveMenus_22(uint32_t param_1, int *param_2);
/* 0x0042dcf0 Car_Init -> Car_Init */
void Car_Init(void);
/* 0x0042e160 Car_LoadParameters -> Car_LoadParameters */
void Car_LoadParameters(uint32_t param_1);
/* 0x0042e180 Menu_UpdateLanguage_22 -> Menu_UpdateLanguage_22 */
void Menu_UpdateLanguage_22(int param_1);
/* 0x0042e320 Car_Run -> Car_Run */
void Car_Run(...);
/* 0x0042e5a0 Car_ExplosionTick -> Car_ExplosionTick */
void Car_ExplosionTick();
/* 0x0042e810 Menu_FormatScreen_22 -> Menu_FormatScreen_22 */
void Menu_FormatScreen_22(int param_1);
/* 0x0042e870 Menu_PlayMusic_22 -> Menu_PlayMusic_22 */
void Menu_PlayMusic_22(int param_1);
/* 0x0042e940 Car_Process -> Car_Process */
void Car_Process(int param_1);
/* 0x0042ea10 Car_ReceiveChannels -> Car_ReceiveChannels */
void Car_ReceiveChannels(...);
/* 0x0042ec30 Menu_DrawWidget_22 -> Menu_DrawWidget_22 */
void Menu_DrawWidget_22(int param_1);
/* 0x0042eca0 Car_Tick -> Car_Tick */
void Car_Tick();
/* 0x0042ef00 Car_WheelSweep -> Car_WheelSweep */
void Car_WheelSweep();
/* 0x0042f530 Car_Update -> Car_Update */
void Car_Update(void);
/* 0x0042f7c0 Menu_HandleInput_22 -> Menu_HandleInput_22 */
void Menu_HandleInput_22(int param_1);
/* 0x0042fb40 Car_WeaponCollision -> Car_WeaponCollision */
void Car_WeaponCollision(...);
/* 0x0042fc00 Car_Action -> Car_Action */
void Car_Action(int param_1, int *param_2);
/* 0x0042fc40 Car_WeaponHit -> Car_WeaponHit */
void Car_WeaponHit(...);
/* 0x0042fc80 Car_Cleanup -> Car_Cleanup */
void Car_Cleanup(int param_1, uint32_t param_2);
/* 0x0042fce0 Car_Cleanup_2 -> Car_Cleanup_2 */
void Car_Cleanup_2(void);
/* 0x0042fd40 Car_Cleanup_3 -> Car_Cleanup_3 */
void Car_Cleanup_3(void);
/* 0x0042fda0 Menu_RequestScreen_23 -> Menu_RequestScreen_23 */
void Menu_RequestScreen_23(void);
/* 0x0042fdc0 Menu_LeaveMenus_23 -> Menu_LeaveMenus_23 */
uint16_t Menu_LeaveMenus_23(void);
/* 0x0042fdd0 Menu_UpdateLanguage_23 -> Menu_UpdateLanguage_23 */
void Menu_UpdateLanguage_23(int param_1);
/* 0x0042fdf0 Menu_FormatScreen_23 -> Menu_FormatScreen_23 */
void Menu_FormatScreen_23(int param_1, double *param_2, uint32_t *param_3);
/* 0x0042fe40 Menu_PlayMusic_23 -> Menu_PlayMusic_23 */
void Menu_PlayMusic_23(void);
/* 0x0042ff00 Wheel_Init -> Wheel_Init */
void Wheel_Init(void);
/* 0x00430000 Wheel_LoadParameters -> Wheel_LoadParameters */
void Wheel_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00430170 Wheel_Process -> Wheel_Process */
void Wheel_Process(void);
/* 0x004301c0 Wheel_Tick -> Wheel_Tick */
void Wheel_Tick(...);
/* 0x004304b0 Vehicle_InitPlane -> Vehicle_InitPlane */
float10 Vehicle_InitPlane(int param_1, int param_2);
/* 0x00430530 Vehicle_UpdateRudder -> Vehicle_UpdateRudder */
void Vehicle_UpdateRudder(int param_1, int param_2, float param_3, float param_4);
/* 0x00430640 Wheel_Update -> Wheel_Update */
void Wheel_Update(void);
/* 0x00430940 Vehicle_UpdateCockpit -> Vehicle_UpdateCockpit */
void Vehicle_UpdateCockpit(void);
/* 0x00430950 Vehicle_CheckFlightDynamics -> Vehicle_CheckFlightDynamics */
uint16_t Vehicle_CheckFlightDynamics(void);
/* 0x00430960 Wheel_FrictionDrive -> Wheel_FrictionDrive */
void Wheel_FrictionDrive();
/* 0x00430d10 Car_WheelDrive -> Car_WheelDrive */
void Car_WheelDrive();
/* 0x004310f0 Heli_Init -> Heli_Init */
void Heli_Init(void);
/* 0x00431540 Heli_LoadParameters -> Heli_LoadParameters */
void Heli_LoadParameters(uint32_t param_1);
/* 0x00431560 Vehicle_InitHeli_2 -> Vehicle_InitHeli_2 */
void Vehicle_InitHeli_2(int param_1);
/* 0x004316d0 Heli_Setup -> Heli_Setup */
void Heli_Setup(void);
/* 0x00431a80 Vehicle_InitPlane_2 -> Vehicle_InitPlane_2 */
void Vehicle_InitPlane_2(int param_1);
/* 0x00431ac0 Vehicle_UpdateRudder_2 -> Vehicle_UpdateRudder_2 */
void Vehicle_UpdateRudder_2(int param_1);
/* 0x00431ae0 Heli_Process -> Heli_Process */
void Heli_Process(int param_1);
/* 0x00431b70 Heli_ReceiveChannels -> Heli_ReceiveChannels */
void Heli_ReceiveChannels(...);
/* 0x00431e30 Vehicle_DeployGear_2 -> Vehicle_DeployGear_2 */
void Vehicle_DeployGear_2(int param_1);
/* 0x00432550 Vehicle_UpdateCockpit_2 -> Vehicle_UpdateCockpit_2 */
void Vehicle_UpdateCockpit_2(int param_1);
/* 0x00432950 Heli_Update -> Heli_Update */
void Heli_Update(void);
/* 0x00433010 Vehicle_CheckFlightDynamics_2 -> Vehicle_CheckFlightDynamics_2 */
void Vehicle_CheckFlightDynamics_2(void);
/* 0x00433030 Vehicle_InitHeli_3 -> Vehicle_InitHeli_3 */
void Vehicle_InitHeli_3(int param_1, int *param_2, uint32_t *param_3);
/* 0x004330f0 Plane_Init -> Plane_Init */
void Plane_Init(void);
/* 0x004333f0 Plane_LoadParameters -> Plane_LoadParameters */
void Plane_LoadParameters(int param_1);
/* 0x00433410 Vehicle_InitPlane_3 -> Vehicle_InitPlane_3 */
void Vehicle_InitPlane_3(int param_1);
/* 0x00433530 Vehicle_UpdateRudder_3 -> Vehicle_UpdateRudder_3 */
void Vehicle_UpdateRudder_3(int param_1);
/* 0x00433580 Vehicle_DeployGear_3 -> Vehicle_DeployGear_3 */
void Vehicle_DeployGear_3(int param_1);
/* 0x00433690 Plane_Setup -> Plane_Setup */
void Plane_Setup(void);
/* 0x00433760 Vehicle_UpdateCockpit_3 -> Vehicle_UpdateCockpit_3 */
void Vehicle_UpdateCockpit_3(int param_1);
/* 0x00433790 Plane_Process -> Plane_Process */
void Plane_Process(int param_1);
/* 0x004337e0 Plane_ReceiveChannels -> Plane_ReceiveChannels */
void Plane_ReceiveChannels(...);
/* 0x00433b50 FUN_00433B50 -> FUN_00433B50 */
void FUN_00433B50();
/* 0x00434310 Vehicle_CheckFlightDynamics_3 -> Vehicle_CheckFlightDynamics_3 */
void Vehicle_CheckFlightDynamics_3(int param_1);
/* 0x00434770 Plane_Update -> Plane_Update */
void Plane_Update(void);
/* 0x00434df0 Vehicle_DeployGear_4 -> Vehicle_DeployGear_4 */
void Vehicle_DeployGear_4(void);
/* 0x00434f50 Vehicle_UpdateCockpit_4 -> Vehicle_UpdateCockpit_4 */
void Vehicle_UpdateCockpit_4(int param_1, float *param_2);
/* 0x004351e0 CockpitShield_Init -> CockpitShield_Init */
void CockpitShield_Init(void);
/* 0x00435300 CockpitShield_LoadParameters -> CockpitShield_LoadParameters */
void CockpitShield_LoadParameters(void);
/* 0x00435450 Vehicle_CheckFlightDynamics_4 -> Vehicle_CheckFlightDynamics_4 */
void Vehicle_CheckFlightDynamics_4(void);
/* 0x004355a0 Vehicle_InitHeli_5 -> Vehicle_InitHeli_5 */
void Vehicle_InitHeli_5(int param_1, float *param_2);
/* 0x00435870 Gear_Init -> Gear_Init */
void Gear_Init(void);
/* 0x00435a80 Gear_LoadParameters -> Gear_LoadParameters */
void Gear_LoadParameters(void);
/* 0x00435bd0 Gear_Setup -> Gear_Setup */
void Gear_Setup(uint32_t param_1, uint32_t *param_2);
/* 0x00435c30 Vehicle_InitPlane_5 -> Vehicle_InitPlane_5 */
void Vehicle_InitPlane_5(void);
/* 0x00435c40 Vehicle_UpdateRudder_5 -> Vehicle_UpdateRudder_5 */
uint16_t Vehicle_UpdateRudder_5(void);
/* 0x00435d90 Hatch_Init -> Hatch_Init */
void Hatch_Init(void);
/* 0x00435f60 Hatch_LoadParameters -> Hatch_LoadParameters */
void Hatch_LoadParameters(void);
/* 0x004360b0 Vehicle_DeployGear_5 -> Vehicle_DeployGear_5 */
void Vehicle_DeployGear_5(void);
/* 0x004360c0 Rudder_LoadParameters -> Rudder_LoadParameters */
void Rudder_LoadParameters(int param_1, uint32_t *param_2);
/* 0x004361d0 Rudder_Init -> Rudder_Init */
void Rudder_Init(void);
/* 0x004362c0 Rudder_Setup -> Rudder_Setup */
void Rudder_Setup(void);
/* 0x00436770 Vehicle_UpdateCockpit_5 -> Vehicle_UpdateCockpit_5 */
void Vehicle_UpdateCockpit_5(void);
/* 0x00436780 RainEffect_Init -> RainEffect_Init */
void RainEffect_Init(void);
/* 0x00436990 RainEffect_Setup -> RainEffect_Setup */
void RainEffect_Setup(void);
/* 0x00436a50 RainEffect_LoadParameters -> RainEffect_LoadParameters */
void RainEffect_LoadParameters(int param_1);
/* 0x00436af0 Vehicle_CheckFlightDynamics_5 -> Vehicle_CheckFlightDynamics_5 */
void Vehicle_CheckFlightDynamics_5(void);
/* 0x00436b10 EnvironmentSound_Init -> EnvironmentSound_Init */
void EnvironmentSound_Init(void);
/* 0x00436cb0 EnvironmentSound_Update -> EnvironmentSound_Update */
void EnvironmentSound_Update(int param_1);
/* 0x00436d10 EnvironmentSound_LoadParameters -> EnvironmentSound_LoadParameters */
void EnvironmentSound_LoadParameters(int param_1);
/* 0x00436da0 Vehicle_LeftEcco2F2F2F2F -> Vehicle_LeftEcco2F2F2F2F */
void Vehicle_LeftEcco2F2F2F2F(int param_1);
/* 0x004370a0 Vehicle_AmbientRain -> Vehicle_AmbientRain */
void Vehicle_AmbientRain(int param_1);
/* 0x00437150 Vehicle_InitHeli_6 -> Vehicle_InitHeli_6 */
void Vehicle_InitHeli_6(int param_1);
/* 0x004374e0 Vehicle_InitPlane_6 -> Vehicle_InitPlane_6 */
void Vehicle_InitPlane_6(void);
/* 0x00437500 Vehicle_UpdateRudder_6 -> Vehicle_UpdateRudder_6 */
void Vehicle_UpdateRudder_6(uint32_t param_1);
/* 0x00437510 Smoke_Init -> Smoke_Init */
void Smoke_Init(void);
/* 0x00437ad0 Smoke_Action -> Smoke_Action */
void Smoke_Action(int param_1, int *param_2);
/* 0x00437ca0 Smoke_Update -> Smoke_Update */
void Smoke_Update(void);
/* 0x00437d00 Smoke_OnEvent -> Smoke_OnEvent */
void Smoke_OnEvent(void);
/* 0x00437d50 Smoke_Setup -> Smoke_Setup */
void Smoke_Setup(int param_1);
/* 0x00437db0 Smoke_LoadParameters -> Smoke_LoadParameters */
void Smoke_LoadParameters(int param_1);
/* 0x00438000 Smoke_Process -> Smoke_Process */
void Smoke_Process(void);
/* 0x00438240 Vehicle_DeployGear_6 -> Vehicle_DeployGear_6 */
void Vehicle_DeployGear_6(int param_1);
/* 0x00438370 Vehicle_UpdateCockpit_6 -> Vehicle_UpdateCockpit_6 */
void Vehicle_UpdateCockpit_6(void);
/* 0x00438390 GunShotEffect_Init -> GunShotEffect_Init */
void GunShotEffect_Init(void);
/* 0x00438440 GunShotEffect_LoadParameters -> GunShotEffect_LoadParameters */
void GunShotEffect_LoadParameters(void);
/* 0x00438890 Vehicle_CheckFlightDynamics_6 -> Vehicle_CheckFlightDynamics_6 */
void Vehicle_CheckFlightDynamics_6(void);
/* 0x004388a0 Vehicle_InitHeli_7 -> Vehicle_InitHeli_7 */
uint32_t Vehicle_InitHeli_7(int param_1);
/* 0x004388b0 PlaceExplosiveTBA_Init -> PlaceExplosiveTBA_Init */
void PlaceExplosiveTBA_Init(void);
/* 0x004389e0 PlaceExplosiveTBA_LoadParameters -> PlaceExplosiveTBA_LoadParameters */
void PlaceExplosiveTBA_LoadParameters(void);
/* 0x00438c10 Vehicle_InitPlane_7 -> Vehicle_InitPlane_7 */
void Vehicle_InitPlane_7(void);
/* 0x00438da0 RotatingObject_Setup -> RotatingObject_Setup */
void RotatingObject_Setup(int param_1);
/* 0x00438df0 RotatingObject_Init -> RotatingObject_Init */
void RotatingObject_Init(void);
/* 0x00439090 RotatingObject_LoadParameters -> RotatingObject_LoadParameters */
void RotatingObject_LoadParameters(void);
/* 0x004395d0 RotatingObject_Process -> RotatingObject_Process */
void RotatingObject_Process(int param_1);
/* 0x004397a0 Vehicle_UpdateRudder_7 -> Vehicle_UpdateRudder_7 */
void Vehicle_UpdateRudder_7(void);
/* 0x004397c0 AlarmLight_Init -> AlarmLight_Init */
void AlarmLight_Init(void);
/* 0x00439a50 AlarmLight_Cleanup -> AlarmLight_Cleanup */
void AlarmLight_Cleanup(int param_1, uint32_t *param_2);
/* 0x00439b70 AlarmLight_Cleanup_2 -> AlarmLight_Cleanup_2 */
void AlarmLight_Cleanup_2(void);
/* 0x00439ec0 AlarmLight_Cleanup_3 -> AlarmLight_Cleanup_3 */
void AlarmLight_Cleanup_3(int param_1, uint32_t param_2);
/* 0x00439f10 Vehicle_DeployGear_7 -> Vehicle_DeployGear_7 */
void Vehicle_DeployGear_7(float param_1, float param_2);
/* 0x0043a270 AlarmLight_LoadParameters -> AlarmLight_LoadParameters */
void AlarmLight_LoadParameters(void);
/* 0x0043a3c0 AlarmLight_Setup -> AlarmLight_Setup */
void AlarmLight_Setup(int param_1);
/* 0x0043a450 AlarmLight_Parsed -> AlarmLight_Parsed */
void AlarmLight_Parsed(...);
/* 0x0043a5f0 Vehicle_1009011 -> Vehicle_1009011 */
void Vehicle_1009011(int param_1);
/* 0x0043a660 AlarmLight_Update -> AlarmLight_Update */
void AlarmLight_Update(int param_1, uint32_t param_2);
/* 0x0043a710 AlarmLight_OnEvent -> AlarmLight_OnEvent */
void AlarmLight_OnEvent(void);
/* 0x0043a790 AlarmLight_Action -> AlarmLight_Action */
void AlarmLight_Action(void);
/* 0x0043a810 Vehicle_UpdateCockpit_7 -> Vehicle_UpdateCockpit_7 */
void Vehicle_UpdateCockpit_7(void);
/* 0x0043a840 MineField_Init -> MineField_Init */
void MineField_Init(void);
/* 0x0043abc0 MineField_LoadParameters -> MineField_LoadParameters */
void MineField_LoadParameters(void);
/* 0x0043ac40 Vehicle_1009011_2 -> Vehicle_1009011_2 */
void Vehicle_1009011_2(int param_1);
/* 0x0043ad60 Vehicle_CheckFlightDynamics_7 -> Vehicle_CheckFlightDynamics_7 */
void Vehicle_CheckFlightDynamics_7(void);
/* 0x0043ad80 Radio_Init -> Radio_Init */
void Radio_Init(void);
/* 0x0043af90 Radio_LoadParameters -> Radio_LoadParameters */
void Radio_LoadParameters(void);
/* 0x0043b1c0 Radio_Setup -> Radio_Setup */
void Radio_Setup(void);
/* 0x0043b250 Radio_Process -> Radio_Process */
void Radio_Process(void);
/* 0x0043b2d0 Vehicle_InitHeli_8 -> Vehicle_InitHeli_8 */
void Vehicle_InitHeli_8(void);
/* 0x0043b2f0 Generator_Init -> Generator_Init */
void Generator_Init(void);
/* 0x0043b500 Generator_LoadParameters -> Generator_LoadParameters */
void Generator_LoadParameters(void);
/* 0x0043b6e0 Generator_Setup -> Generator_Setup */
void Generator_Setup(void);
/* 0x0043b790 Generator_Process -> Generator_Process */
void Generator_Process(void);
/* 0x0043b830 Vehicle_InitPlane_8 -> Vehicle_InitPlane_8 */
void Vehicle_InitPlane_8(void);
/* 0x0043b850 SimpointObjGenerator_Init -> SimpointObjGenerator_Init */
void SimpointObjGenerator_Init(void);
/* 0x0043bb20 SimpointObjGenerator_LoadParameters -> SimpointObjGenerator_LoadParameters */
void SimpointObjGenerator_LoadParameters(void);
/* 0x0043bca0 SimpointObjGenerator_Setup -> SimpointObjGenerator_Setup */
void SimpointObjGenerator_Setup(void);
/* 0x0043bda0 SimpointObjGenerator_Process -> SimpointObjGenerator_Process */
void SimpointObjGenerator_Process(void);
/* 0x0043be60 Vehicle_UpdateRudder_8 -> Vehicle_UpdateRudder_8 */
void Vehicle_UpdateRudder_8(void);
/* 0x0043bfd0 ExplodeMagicObj_Init -> ExplodeMagicObj_Init */
void ExplodeMagicObj_Init(void);
/* 0x0043c0b0 ExplodeMagicObj_LoadParameters_2 -> ExplodeMagicObj_LoadParameters_2 */
void ExplodeMagicObj_LoadParameters_2(int param_1);
/* 0x0043c1f0 ExplodeMagicObj_LoadParameters -> ExplodeMagicObj_LoadParameters */
void ExplodeMagicObj_LoadParameters(uint32_t param_1, int *param_2);
/* 0x0043c2d0 ExplodeMagicObj_Update -> ExplodeMagicObj_Update */
void ExplodeMagicObj_Update(int param_1, uint32_t param_2);
/* 0x0043c380 Vehicle_DeployGear_8 -> Vehicle_DeployGear_8 */
void Vehicle_DeployGear_8(void);
/* 0x0043c390 ElevatorFloorIndicator_Action -> ElevatorFloorIndicator_Action */
void ElevatorFloorIndicator_Action(int param_1, int *param_2);
/* 0x0043c6d0 ElevatorFloorIndicator_Init -> ElevatorFloorIndicator_Init */
void ElevatorFloorIndicator_Init(void);
/* 0x0043c8d0 ElevatorFloorIndicator_LoadParameters -> ElevatorFloorIndicator_LoadParameters */
void ElevatorFloorIndicator_LoadParameters(void);
/* 0x0043ca10 ElevatorFloorIndicator_Setup -> ElevatorFloorIndicator_Setup */
void ElevatorFloorIndicator_Setup(void);
/* 0x0043cb30 ElevatorFloorIndicator_Process -> ElevatorFloorIndicator_Process */
void ElevatorFloorIndicator_Process(int param_1);
/* 0x0043cb70 ElevatorFloorIndicator_Update -> ElevatorFloorIndicator_Update */
void ElevatorFloorIndicator_Update(int param_1);
/* 0x0043cc50 Vehicle_UpdateCockpit_8 -> Vehicle_UpdateCockpit_8 */
void Vehicle_UpdateCockpit_8(void);
/* 0x0043cc70 Elevator_Init -> Elevator_Init */
void Elevator_Init(void);
/* 0x0043d010 Elevator_LoadParameters -> Elevator_LoadParameters */
void Elevator_LoadParameters(int param_1);
/* 0x0043d280 Elevator_Setup -> Elevator_Setup */
void Elevator_Setup(void);
/* 0x0043d6e0 Vehicle_CheckFlightDynamics_8 -> Vehicle_CheckFlightDynamics_8 */
void Vehicle_CheckFlightDynamics_8(int param_1);
/* 0x0043d8c0 Vehicle_InitHeli_9 -> Vehicle_InitHeli_9 */
void Vehicle_InitHeli_9(int param_1);
/* 0x0043d960 Vehicle_InitPlane_9 -> Vehicle_InitPlane_9 */
void Vehicle_InitPlane_9(float param_1);
/* 0x0043df20 Elevator_Process -> Elevator_Process */
void Elevator_Process(void);
/* 0x0043e0a0 Elevator_Update -> Elevator_Update */
void Elevator_Update(void);
/* 0x0043e1f0 Elevator_OnEvent -> Elevator_OnEvent */
void Elevator_OnEvent(void);
/* 0x0043e290 Elevator_Action -> Elevator_Action */
void Elevator_Action(void);
/* 0x0043e4c0 Vehicle_UpdateRudder_9 -> Vehicle_UpdateRudder_9 */
void Vehicle_UpdateRudder_9(void);
/* 0x0043e4e0 Vehicle_DeployGear_9 -> Vehicle_DeployGear_9 */
uint16_t Vehicle_DeployGear_9(void);
/* 0x0043e4f0 GenericPhysicsMagicObj_Init -> GenericPhysicsMagicObj_Init */
void GenericPhysicsMagicObj_Init(void);
/* 0x0043e580 GenericPhysicsMagicObj_LoadParameters -> GenericPhysicsMagicObj_LoadParameters */
void GenericPhysicsMagicObj_LoadParameters(int param_1);
/* 0x0043e600 GenericPhysicsMagicObj_OnEvent -> GenericPhysicsMagicObj_OnEvent */
void GenericPhysicsMagicObj_OnEvent(uint32_t param_1);
/* 0x0043e650 GenericPhysicsMagicObj_Setup -> GenericPhysicsMagicObj_Setup */
void GenericPhysicsMagicObj_Setup(uint32_t param_1);
/* 0x0043e670 GenericPhysicsMagicObj_Process -> GenericPhysicsMagicObj_Process */
void GenericPhysicsMagicObj_Process(void);
/* 0x0043e7a0 GenericPhysicsMagicObj_Update -> GenericPhysicsMagicObj_Update */
void GenericPhysicsMagicObj_Update(void);
/* 0x0043e8c0 Vehicle_UpdateCockpit_9 -> Vehicle_UpdateCockpit_9 */
void Vehicle_UpdateCockpit_9(void);
/* 0x0043e8d0 GenericPhysicsObj_Init -> GenericPhysicsObj_Init */
void GenericPhysicsObj_Init(void);
/* 0x0043eab0 GenericPhysicsObj_Update -> GenericPhysicsObj_Update */
void GenericPhysicsObj_Update(int param_1);
/* 0x0043eba0 GenericPhysicsObj_LoadParameters -> GenericPhysicsObj_LoadParameters */
void GenericPhysicsObj_LoadParameters(int param_1);
/* 0x0043ec30 Vehicle_CheckFlightDynamics_9 -> Vehicle_CheckFlightDynamics_9 */
void Vehicle_CheckFlightDynamics_9(uint32_t param_1);
/* 0x0043ec80 GenericPhysicsObj_Process -> GenericPhysicsObj_Process */
void GenericPhysicsObj_Process(void);
/* 0x0043edf0 GenericPhysicsObj_Update_2 -> GenericPhysicsObj_Update_2 */
void GenericPhysicsObj_Update_2(void);
/* 0x0043eef0 Vehicle_InitHeli_10 -> Vehicle_InitHeli_10 */
void Vehicle_InitHeli_10(void);
/* 0x0043ef10 Vehicle_InitPlane_10 -> Vehicle_InitPlane_10 */
int Vehicle_InitPlane_10(uint32_t param_1, uint32_t *param_2, uint32_t *param_3, char *param_4, uint32_t *param_5);
/* 0x0043eff0 Wire_Init -> Wire_Init */
void Wire_Init(void);
/* 0x0043f1f0 Wire_LoadParameters -> Wire_LoadParameters */
void Wire_LoadParameters(int param_1);
/* 0x0043f360 Wire_Setup -> Wire_Setup */
void Wire_Setup(int param_1);
/* 0x0043f3d0 Wire_Process -> Wire_Process */
void Wire_Process(void);
/* 0x0043f560 Wire_Update -> Wire_Update */
void Wire_Update(void);
/* 0x0043f700 Wire_OnEvent -> Wire_OnEvent */
void Wire_OnEvent(void);
/* 0x0043f780 Wire_Action -> Wire_Action */
void Wire_Action(void);
/* 0x0043f800 Vehicle_UpdateRudder_10 -> Vehicle_UpdateRudder_10 */
void Vehicle_UpdateRudder_10(void);
/* 0x0043f820 Vehicle_DeployGear_10 -> Vehicle_DeployGear_10 */
void Vehicle_DeployGear_10(uint32_t param_1, uint32_t param_2);
/* 0x0043f8a0 Vehicle_UpdateCockpit_10 -> Vehicle_UpdateCockpit_10 */
int Vehicle_UpdateCockpit_10(float param_1);
/* 0x0043f900 Fence_Init -> Fence_Init */
void Fence_Init(void);
/* 0x0043fae0 Fence_LoadParameters -> Fence_LoadParameters */
void Fence_LoadParameters(int param_1);
/* 0x0043fc30 Fence_Setup -> Fence_Setup */
void Fence_Setup(void);
/* 0x0043fe50 Fence_Process -> Fence_Process */
void Fence_Process(int param_1);
/* 0x0043fea0 Fence_Update -> Fence_Update */
void Fence_Update(int param_1);
/* 0x004400c0 Fence_OnEvent -> Fence_OnEvent */
void Fence_OnEvent(void);
/* 0x00440250 Env_TriggerAlarm -> Env_TriggerAlarm */
void Env_TriggerAlarm(void);
/* 0x00440270 Env_UpdateCameraLens -> Env_UpdateCameraLens */
float10 Env_UpdateCameraLens(void);
/* 0x00440280 Ladder_LoadParameters -> Ladder_LoadParameters */
void Ladder_LoadParameters(void);
/* 0x004403c0 Ladder_Setup -> Ladder_Setup */
void Ladder_Setup(int param_1);
/* 0x004403e0 Ladder_Init -> Ladder_Init */
void Ladder_Init(void);
/* 0x004404c0 Ladder_Update -> Ladder_Update */
void Ladder_Update(int param_1, int *param_2);
/* 0x00440700 Env_CheckAmbientArea -> Env_CheckAmbientArea */
void Env_CheckAmbientArea(void);
/* 0x00440710 AlarmControl_Init -> AlarmControl_Init */
void AlarmControl_Init(void);
/* 0x004408a0 AlarmControl_LoadParameters -> AlarmControl_LoadParameters */
void AlarmControl_LoadParameters(void);
/* 0x00440a40 AlarmControl_Setup -> AlarmControl_Setup */
void AlarmControl_Setup(void);
/* 0x00440b20 AlarmControl_Process -> AlarmControl_Process */
void AlarmControl_Process(void);
/* 0x00440be0 Env_ScanViewCone -> Env_ScanViewCone */
void Env_ScanViewCone(void);
/* 0x00440c00 Env_ActivateEntity -> Env_ActivateEntity */
uint8_t Env_ActivateEntity(int param_1);
/* 0x00440c10 Env_InitLadder_2 -> Env_InitLadder_2 */
uint8_t Env_InitLadder_2(int param_1);
/* 0x00440c20 SCameraControl_Init -> SCameraControl_Init */
void SCameraControl_Init(void);
/* 0x00440d70 SCameraControl_LoadParameters -> SCameraControl_LoadParameters */
void SCameraControl_LoadParameters(void);
/* 0x00440ea0 SCameraControl_Setup -> SCameraControl_Setup */
void SCameraControl_Setup(void);
/* 0x00440f30 SCameraControl_Process -> SCameraControl_Process */
void SCameraControl_Process(void);
/* 0x00440fb0 Env_TriggerAlarm_2 -> Env_TriggerAlarm_2 */
void Env_TriggerAlarm_2(void);
/* 0x00440fd0 SCamera_Init -> SCamera_Init */
void SCamera_Init(void);
/* 0x004415c0 SCamera_Cleanup -> SCamera_Cleanup */
void SCamera_Cleanup(void);
/* 0x00441770 SCameraLens_Tick -> SCameraLens_Tick */
void SCameraLens_Tick(...);
/* 0x00441ae0 Env_CameraBeepS -> Env_CameraBeepS */
void Env_CameraBeepS(int param_1);
/* 0x00441bf0 camera_move -> camera_move */
void camera_move(int param_1);
/* 0x00442020 Env_UpdateCameraLens_2 -> Env_UpdateCameraLens_2 */
void Env_UpdateCameraLens_2(uint32_t *param_1, int param_2);
/* 0x00442070 SCamera_Cleanup_2 -> SCamera_Cleanup_2 */
void SCamera_Cleanup_2(int param_1);
/* 0x004420d0 SCamera_Cleanup_3 -> SCamera_Cleanup_3 */
void SCamera_Cleanup_3(void);
/* 0x004422f0 SCamera_Cleanup_4 -> SCamera_Cleanup_4 */
void SCamera_Cleanup_4(int param_1, uint32_t param_2);
/* 0x004423f0 SCamera_LoadParameters -> SCamera_LoadParameters */
void SCamera_LoadParameters(int param_1);
/* 0x00442610 SCamera_Setup -> SCamera_Setup */
void SCamera_Setup(void);
/* 0x004426d0 SCamera_Process -> SCamera_Process */
void SCamera_Process(int param_1);
/* 0x00442740 SCamera_Parsed -> SCamera_Parsed */
void SCamera_Parsed(...);
/* 0x00442890 SCamera_OnEvent -> SCamera_OnEvent */
void SCamera_OnEvent(void);
/* 0x00442970 SCamera_Action -> SCamera_Action */
void SCamera_Action(void);
/* 0x00442a30 SCamera_Cleanup_5 -> SCamera_Cleanup_5 */
void SCamera_Cleanup_5(int param_1, uint32_t *param_2);
/* 0x00442a70 SCamera_Cleanup_6 -> SCamera_Cleanup_6 */
void SCamera_Cleanup_6(void);
/* 0x00442c60 SCamera_Cleanup_7 -> SCamera_Cleanup_7 */
void SCamera_Cleanup_7(void);
/* 0x00442dd0 SCamera_Cleanup_8 -> SCamera_Cleanup_8 */
void SCamera_Cleanup_8(int param_1, uint32_t param_2);
/* 0x004432f0 SCamera_Cleanup_9 -> SCamera_Cleanup_9 */
void SCamera_Cleanup_9(void);
/* 0x00443450 SCamera_Cleanup_10 -> SCamera_Cleanup_10 */
void SCamera_Cleanup_10(int param_1, uint32_t *param_2);
/* 0x004434f0 SCamera_Cleanup_11 -> SCamera_Cleanup_11 */
void SCamera_Cleanup_11(int param_1, int param_2);
/* 0x00443610 Env_ScanViewCone_2 -> Env_ScanViewCone_2 */
void Env_ScanViewCone_2(void);
/* 0x00443660 Env_ActivateEntity_2 -> Env_ActivateEntity_2 */
uint32_t Env_ActivateEntity_2(void);
/* 0x00443670 Env_InitLadder_3 -> Env_InitLadder_3 */
uint32_t Env_InitLadder_3(void);
/* 0x00443680 Terminal_Init -> Terminal_Init */
void Terminal_Init(void);
/* 0x004438e0 Terminal_LoadParameters -> Terminal_LoadParameters */
void Terminal_LoadParameters(void);
/* 0x00443990 Terminal_Setup -> Terminal_Setup */
void Terminal_Setup(int param_1);
/* 0x00443a60 Terminal_Process -> Terminal_Process */
void Terminal_Process(void);
/* 0x00443b80 Terminal_Update -> Terminal_Update */
void Terminal_Update(void);
/* 0x00443c80 GenericTBA_OnEvent -> GenericTBA_OnEvent */
void GenericTBA_OnEvent(void);
/* 0x00443e60 Env_TriggerAlarm_3 -> Env_TriggerAlarm_3 */
void Env_TriggerAlarm_3(void);
/* 0x00443e80 Env_UpdateCameraLens_3 -> Env_UpdateCameraLens_3 */
uint16_t Env_UpdateCameraLens_3(void);
/* 0x00443e90 Env_CheckAmbientArea_3 -> Env_CheckAmbientArea_3 */
uint32_t Env_CheckAmbientArea_3(void);
/* 0x00443ea0 Env_ScanViewCone_3 -> Env_ScanViewCone_3 */
void Env_ScanViewCone_3(int param_1);
/* 0x00443ed0 Cabinet_Init -> Cabinet_Init */
void Cabinet_Init(void);
/* 0x00444150 Cabinet_Cleanup -> Cabinet_Cleanup */
void Cabinet_Cleanup(int param_1, uint32_t *param_2);
/* 0x00444260 Cabinet_Cleanup_2 -> Cabinet_Cleanup_2 */
void Cabinet_Cleanup_2(void);
/* 0x00444420 Cabinet_LoadParameters -> Cabinet_LoadParameters */
void Cabinet_LoadParameters(int param_1);
/* 0x00444590 Cabinet_Setup -> Cabinet_Setup */
void Cabinet_Setup(int param_1);
/* 0x00444660 Cabinet_Process -> Cabinet_Process */
void Cabinet_Process(int param_1);
/* 0x004446e0 Cabinet_Update -> Cabinet_Update */
void Cabinet_Update(int param_1, char *param_2);
/* 0x00444860 Cabinet_OnEvent -> Cabinet_OnEvent */
void Cabinet_OnEvent(void);
/* 0x004449c0 Cabinet_Cleanup_3 -> Cabinet_Cleanup_3 */
void Cabinet_Cleanup_3(void);
/* 0x00444a70 Cabinet_Cleanup_4 -> Cabinet_Cleanup_4 */
void Cabinet_Cleanup_4(void);
/* 0x00444b00 Env_ScanViewCone_5 -> Env_ScanViewCone_5 */
void Env_ScanViewCone_5(void);
/* 0x00444b30 Env_ActivateEntity_5 -> Env_ActivateEntity_5 */
void Env_ActivateEntity_5(int param_1, double *param_2, uint32_t *param_3);
/* 0x00444b80 Env_InitLadder_6 -> Env_InitLadder_6 */
float10 Env_InitLadder_6(int param_1);
/* 0x00444b90 Env_TriggerAlarm_6 -> Env_TriggerAlarm_6 */
void Env_TriggerAlarm_6(int param_1);
/* 0x00444ba0 Env_UpdateCameraLens_6 -> Env_UpdateCameraLens_6 */
void Env_UpdateCameraLens_6(int param_1);
/* 0x00444bc0 Env_CheckAmbientArea_6 -> Env_CheckAmbientArea_6 */
void Env_CheckAmbientArea_6(int param_1);
/* 0x00444bf0 Switch_Init -> Switch_Init */
void Switch_Init(void);
/* 0x00444f20 Switch_LoadParameters -> Switch_LoadParameters */
void Switch_LoadParameters(void);
/* 0x004450f0 Switch_Setup -> Switch_Setup */
void Switch_Setup(void);
/* 0x00445270 Switch_Process -> Switch_Process */
void Switch_Process(int param_1);
/* 0x004452f0 Switch_Update -> Switch_Update */
void Switch_Update(int param_1);
/* 0x004453e0 Env_CheckAmbientArea_7 -> Env_CheckAmbientArea_7 */
void Env_CheckAmbientArea_7(int param_1);
/* 0x00445730 Switch_OnEvent -> Switch_OnEvent */
void Switch_OnEvent(void);
/* 0x00445860 Switch_Cleanup -> Switch_Cleanup */
void Switch_Cleanup(void);
/* 0x00445980 Switch_Cleanup_2 -> Switch_Cleanup_2 */
void Switch_Cleanup_2(void);
/* 0x00445a80 Switch_Cleanup_3 -> Switch_Cleanup_3 */
void Switch_Cleanup_3(int param_1, int *param_2);
/* 0x00445dc0 Env_ScanViewCone_7 -> Env_ScanViewCone_7 */
void Env_ScanViewCone_7(void);
/* 0x00445de0 Door_Cleanup -> Door_Cleanup */
void Door_Cleanup(int param_1, int *param_2);
/* 0x00446290 Env_ActivateEntity_7 -> Env_ActivateEntity_7 */
void Env_ActivateEntity_7(int param_1);
/* 0x004463b0 Env_InitLadder_8 -> Env_InitLadder_8 */
void Env_InitLadder_8(int param_1);
/* 0x00446450 Env_TriggerAlarm_8 -> Env_TriggerAlarm_8 */
void Env_TriggerAlarm_8(int *param_1, int param_2);
/* 0x00446470 Door_Cleanup_2 -> Door_Cleanup_2 */
void Door_Cleanup_2(int param_1, int param_2);
/* 0x004464c0 Door_Init -> Door_Init */
void Door_Init(void);
/* 0x00446ac0 Door_Setup -> Door_Setup */
void Door_Setup(int param_1);
/* 0x00446b50 Door_Update -> Door_Update */
void Door_Update(void);
/* 0x00446d10 Door_LoadParameters -> Door_LoadParameters */
void Door_LoadParameters(void);
/* 0x004474e0 Env_UpdateCameraLens_8 -> Env_UpdateCameraLens_8 */
void Env_UpdateCameraLens_8(int param_1);
/* 0x00447830 Door_Process -> Door_Process */
void Door_Process(void);
/* 0x00447a90 Door_Action -> Door_Action */
void Door_Action(void);
/* 0x00447be0 Door_Cleanup_3 -> Door_Cleanup_3 */
void Door_Cleanup_3(void);
/* 0x00447d00 Env_CheckAmbientArea_8 -> Env_CheckAmbientArea_8 */
void Env_CheckAmbientArea_8(void);
/* 0x00447d20 Env_ScanViewCone_8 -> Env_ScanViewCone_8 */
uint16_t Env_ScanViewCone_8(void);
/* 0x00447d30 Env_ActivateEntity_8 -> Env_ActivateEntity_8 */
float10 Env_ActivateEntity_8(int param_1);
/* 0x00447d40 Env_InitLadder_9 -> Env_InitLadder_9 */
uint8_t Env_InitLadder_9(int param_1);
/* 0x00447d50 Env_TriggerAlarm_9 -> Env_TriggerAlarm_9 */
uint8_t Env_TriggerAlarm_9(int param_1);
/* 0x00447d60 Env_UpdateCameraLens_9 -> Env_UpdateCameraLens_9 */
void Env_UpdateCameraLens_9(int param_1, uint8_t param_2);
/* 0x00447d70 Env_CheckAmbientArea_9 -> Env_CheckAmbientArea_9 */
int Env_CheckAmbientArea_9(int param_1);
/* 0x00447da0 Env_ScanViewCone_9 -> Env_ScanViewCone_9 */
void Env_ScanViewCone_9(int param_1);
/* 0x00447db0 GenericTBA_Init -> GenericTBA_Init */
void GenericTBA_Init(void);
/* 0x004480b0 GenericTBA_LoadParameters -> GenericTBA_LoadParameters */
void GenericTBA_LoadParameters(void);
/* 0x00448160 GenericTBA_Setup -> GenericTBA_Setup */
void GenericTBA_Setup(int param_1);
/* 0x004482d0 GenericTBA_Process -> GenericTBA_Process */
void GenericTBA_Process(void);
/* 0x004483f0 GenericTBA_Update -> GenericTBA_Update */
void GenericTBA_Update(void);
/* 0x00448530 Env_ActivateEntity_9 -> Env_ActivateEntity_9 */
void Env_ActivateEntity_9(void);
/* 0x00448550 Env_InitLadder_10 -> Env_InitLadder_10 */
uint16_t Env_InitLadder_10(void);
/* 0x00448560 Env_TriggerAlarm_10 -> Env_TriggerAlarm_10 */
uint32_t Env_TriggerAlarm_10(void);
/* 0x00448570 Env_UpdateCameraLens_10 -> Env_UpdateCameraLens_10 */
void Env_UpdateCameraLens_10(int param_1, double *param_2, uint32_t *param_3);
/* 0x004485c0 Env_CheckAmbientArea_10 -> Env_CheckAmbientArea_10 */
float10 Env_CheckAmbientArea_10(int param_1);
/* 0x004485d0 Env_ScanViewCone_10 -> Env_ScanViewCone_10 */
uint16_t Env_ScanViewCone_10(int param_1);
/* 0x004485e0 Building_Init -> Building_Init */
void Building_Init(void);
/* 0x00448760 Building_LoadParameters -> Building_LoadParameters */
void Building_LoadParameters(int param_1, uint32_t param_2);
/* 0x00448850 Building_Setup -> Building_Setup */
void Building_Setup(int param_1);
/* 0x00448890 Building_Process -> Building_Process */
void Building_Process(int param_1);
/* 0x00448950 Building_OnEvent -> Building_OnEvent */
void Building_OnEvent(int param_1, int param_2);
/* 0x00448a90 Building_Update -> Building_Update */
void Building_Update(int param_1, uint32_t *param_2);
/* 0x00448b50 Env_ActivateEntity_10 -> Env_ActivateEntity_10 */
void Env_ActivateEntity_10(void);
/* 0x00448cf0 RadarDish_Setup -> RadarDish_Setup */
void RadarDish_Setup(int param_1);
/* 0x00448d30 RadarDish_Init -> RadarDish_Init */
void RadarDish_Init(void);
/* 0x00448e30 RadarDish_LoadParameters -> RadarDish_LoadParameters */
void RadarDish_LoadParameters(void);
/* 0x00449290 Env_InitLadder_11 -> Env_InitLadder_11 */
void Env_InitLadder_11(void);
/* 0x00449360 Siren_Init -> Siren_Init */
void Siren_Init(void);
/* 0x004494d0 Siren_LoadParameters -> Siren_LoadParameters */
void Siren_LoadParameters(void);
/* 0x00449660 Siren_Setup -> Siren_Setup */
void Siren_Setup(void);
/* 0x00449710 Siren_Process -> Siren_Process */
void Siren_Process(void);
/* 0x004497d0 Env_TriggerAlarm_11 -> Env_TriggerAlarm_11 */
void Env_TriggerAlarm_11(void);
/* 0x00449950 ExplodeMagicObj_Setup -> ExplodeMagicObj_Setup */
void ExplodeMagicObj_Setup(int param_1);
/* 0x00449970 Glass_Init -> Glass_Init */
void Glass_Init(void);
/* 0x00449a80 Glass_LoadParameters -> Glass_LoadParameters */
void Glass_LoadParameters(int param_1);
/* 0x00449ba0 Glass_Update -> Glass_Update */
void Glass_Update(void);
/* 0x00449d10 Env_UpdateCameraLens_11 -> Env_UpdateCameraLens_11 */
void Env_UpdateCameraLens_11(void);
/* 0x00449d20 Env_CheckAmbientArea_11 -> Env_CheckAmbientArea_11 */
uint16_t Env_CheckAmbientArea_11(void);
/* 0x00449d30 GlassShatter_Init -> GlassShatter_Init */
void GlassShatter_Init(void);
/* 0x00449e50 GlassShatter_LoadParameters -> GlassShatter_LoadParameters */
void GlassShatter_LoadParameters(void);
/* 0x0044a1c0 Env_ScanViewCone_11 -> Env_ScanViewCone_11 */
void Env_ScanViewCone_11(void);
/* 0x0044a1d0 Env_333333333 -> Env_333333333 */
void Env_333333333(int *param_1, float *param_2, double *param_3, float *param_4, int param_5);
/* 0x0044a630 Env_GlassCrush1 -> Env_GlassCrush1 */
void Env_GlassCrush1(uint32_t param_1);
/* 0x0044a670 Env_ActivateEntity_11 -> Env_ActivateEntity_11 */
void Env_ActivateEntity_11(float *param_1, float *param_2, float *param_3);
/* 0x0044bd70 Env_333333333Glassshatte -> Env_333333333Glassshatte */
void Env_333333333Glassshatte(int *param_1, float *param_2, double *param_3, double *param_4, uint32_t param_5, float param_6);
/* 0x0044c130 AmbientArea_Init -> AmbientArea_Init */
void AmbientArea_Init(void);
/* 0x0044c370 AmbientArea_LoadParameters -> AmbientArea_LoadParameters */
void AmbientArea_LoadParameters(int param_1);
/* 0x0044c700 AmbientArea_Setup -> AmbientArea_Setup */
void AmbientArea_Setup(int param_1);
/* 0x0044c740 AmbientArea_Process -> AmbientArea_Process */
void AmbientArea_Process(void);
/* 0x0044c810 Env_InitLadder_12 -> Env_InitLadder_12 */
void Env_InitLadder_12(void);
/* 0x0044c830 Env_TriggerAlarm_12 -> Env_TriggerAlarm_12 */
uint32_t Env_TriggerAlarm_12(uint32_t param_1);
/* 0x0044c860 Env_UpdateCameraLens_12 -> Env_UpdateCameraLens_12 */
void Env_UpdateCameraLens_12(int param_1, uint32_t *param_2, uint32_t *param_3, uint32_t *param_4, char *param_5);
/* 0x0044c8c0 Env_CheckAmbientArea_12 -> Env_CheckAmbientArea_12 */
uint32_t Env_CheckAmbientArea_12(void);
/* 0x0044c8d0 HumanAI_Init -> HumanAI_Init */
void HumanAI_Init(void);
/* 0x0044cca0 AIAction_Patrol_2 -> AIAction_Patrol_2 */
void AIAction_Patrol_2(void);
/* 0x0044d0e0 AIAction_Patrol -> AIAction_Patrol */
void AIAction_Patrol(int target, int mustBeZero, int flags);
/* 0x0044d160 AIAction_Combat -> AIAction_Combat */
void AIAction_Combat(int param);
/* 0x0044d260 AIAction_Dead -> AIAction_Dead */
void AIAction_Dead(int param);
/* 0x0044d2c0 AIAction_FallFlat -> AIAction_FallFlat */
void AIAction_FallFlat(int param1, int param2);
/* 0x0044d420 AIAction_Activate -> AIAction_Activate */
void AIAction_Activate(int target, int param2, int flags);
/* 0x0044d4a0 AIAction_WalkToNode -> AIAction_WalkToNode */
void AIAction_WalkToNode(int nodeId, int flags);
/* 0x0044d510 AIAction_RunToNode -> AIAction_RunToNode */
void AIAction_RunToNode(int nodeId, int flags);
/* 0x0044d580 AIAction_FireAtNode -> AIAction_FireAtNode */
void AIAction_FireAtNode(int nodeId, int p1, int p2, int p3, int p4);
/* 0x0044d630 AIAction_FireAtTask -> AIAction_FireAtTask */
void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4);
/* 0x0044d6e0 AIAction_PlayAnimation -> AIAction_PlayAnimation */
void AIAction_PlayAnimation(int animationId, int flags);
/* 0x0044d750 AIAction_PlaySound -> AIAction_PlaySound */
void AIAction_PlaySound(int soundId, int param2, int flags);
/* 0x0044d7d0 AIAction_MoveToEvent -> AIAction_MoveToEvent */
void AIAction_MoveToEvent(int eventId, int flags);
/* 0x0044d850 Env_ScanViewCone_12 -> Env_ScanViewCone_12 */
void Env_ScanViewCone_12(int *param_1);
/* 0x0044d870 AIAction_LookAtEvent -> AIAction_LookAtEvent */
void AIAction_LookAtEvent(int eventId, int flags);
/* 0x0044d8f0 AIAction_Stunned -> AIAction_Stunned */
void AIAction_Stunned(int param1, int flags);
/* 0x0044d960 AIAction_KickGrenade -> AIAction_KickGrenade */
void AIAction_KickGrenade(int param);
/* 0x0044da00 AIAction_RunPanicking -> AIAction_RunPanicking */
void AIAction_RunPanicking(int param1, int flags);
/* 0x0044da80 AIAction_Idle -> AIAction_Idle */
void AIAction_Idle(int param);
/* 0x0044dae0 AIAction_SetCombat -> AIAction_SetCombat */
void AIAction_SetCombat(int enemyId);
/* 0x0044dbc0 AIFunction_RemoveAlarmActions -> AIFunction_RemoveAlarmActions */
void AIFunction_RemoveAlarmActions();
/* 0x0044dc40 AIFunction_SetViewLength -> AIFunction_SetViewLength */
void AIFunction_SetViewLength(int length);
/* 0x0044dcd0 AIFunction_SetAlarmViewLength -> AIFunction_SetAlarmViewLength */
void AIFunction_SetAlarmViewLength(int length);
/* 0x0044dd30 AIFunction_SetViewAlpha -> AIFunction_SetViewAlpha */
void AIFunction_SetViewAlpha(int alpha);
/* 0x0044dd90 AIFunction_SetViewGamma -> AIFunction_SetViewGamma */
void AIFunction_SetViewGamma(int gamma);
/* 0x0044ddf0 AIFunction_SetSecondaryViewLength -> AIFunction_SetSecondaryViewLength */
void AIFunction_SetSecondaryViewLength(int length);
/* 0x0044de80 AIFunction_SetSecondaryAlarmViewLength -> AIFunction_SetSecondaryAlarmViewLength */
void AIFunction_SetSecondaryAlarmViewLength(int length);
/* 0x0044dee0 AIFunction_SetSecondaryViewAlpha -> AIFunction_SetSecondaryViewAlpha */
void AIFunction_SetSecondaryViewAlpha(int alpha);
/* 0x0044df40 AIFunction_SetSecondaryViewGamma -> AIFunction_SetSecondaryViewGamma */
void AIFunction_SetSecondaryViewGamma(int gamma);
/* 0x0044dfa0 AIFunction_GetCurrentEventType -> AIFunction_GetCurrentEventType */
int AIFunction_GetCurrentEventType();
/* 0x0044e000 AIFunction_GetRandomValue -> AIFunction_GetRandomValue */
float AIFunction_GetRandomValue(float max);
/* 0x0044e060 AIFunction_DefaultHandler -> AIFunction_DefaultHandler */
void AIFunction_DefaultHandler();
/* 0x0044e0c0 AIFunction_SetEventPriority -> AIFunction_SetEventPriority */
void AIFunction_SetEventPriority(int priority);
/* 0x0044e150 AIFunction_SetInvulnerability -> AIFunction_SetInvulnerability */
void AIFunction_SetInvulnerability(int onOff);
/* 0x0044e1b0 AIFunction_SetInstantDeath -> AIFunction_SetInstantDeath */
void AIFunction_SetInstantDeath(int onOff);
/* 0x0044e210 AIFunction_SetDeathAnimation -> AIFunction_SetDeathAnimation */
void AIFunction_SetDeathAnimation(int animId);
/* 0x0044e270 AIFunction_SetAlarmTriggerID -> AIFunction_SetAlarmTriggerID */
void AIFunction_SetAlarmTriggerID(int id);
/* 0x0044e2d0 AIFunction_SetAlarmControlID -> AIFunction_SetAlarmControlID */
void AIFunction_SetAlarmControlID(int id);
/* 0x0044e330 AIFunction_SetAlarmAccess -> AIFunction_SetAlarmAccess */
void AIFunction_SetAlarmAccess(int access);
/* 0x0044e390 AIFunction_SetGunnerID -> AIFunction_SetGunnerID */
void AIFunction_SetGunnerID(int gunnerId);
/* 0x0044e3f0 AIFunction_GetAlarmTriggerID -> AIFunction_GetAlarmTriggerID */
int AIFunction_GetAlarmTriggerID();
/* 0x0044e430 AIFunction_GetAlarmControlID -> AIFunction_GetAlarmControlID */
int AIFunction_GetAlarmControlID();
/* 0x0044e470 AIFunction_GetAlarmAccess -> AIFunction_GetAlarmAccess */
int AIFunction_GetAlarmAccess();
/* 0x0044e4b0 AIFunction_GetGunnerID -> AIFunction_GetGunnerID */
int AIFunction_GetGunnerID();
/* 0x0044e4f0 AIFunction_GetAlarmControlStatus -> AIFunction_GetAlarmControlStatus */
int AIFunction_GetAlarmControlStatus();
/* 0x0044e5e0 AIFunction_GetGunnerStatus -> AIFunction_GetGunnerStatus */
int AIFunction_GetGunnerStatus();
/* 0x0044e6d0 AIFunction_SetScriptIntegerValue -> AIFunction_SetScriptIntegerValue */
void AIFunction_SetScriptIntegerValue(int varId, int value);
/* 0x0044e740 AIFunction_GetScriptIntegerValue -> AIFunction_GetScriptIntegerValue */
int AIFunction_GetScriptIntegerValue(int varId);
/* 0x0044e790 AIFunction_SetScriptRealValue -> AIFunction_SetScriptRealValue */
void AIFunction_SetScriptRealValue(int varId, float value);
/* 0x0044e800 AIFunction_GetScriptRealValue -> AIFunction_GetScriptRealValue */
float AIFunction_GetScriptRealValue(int varId);
/* 0x0044e860 AIFunction_IsEventBehind -> AIFunction_IsEventBehind */
int AIFunction_IsEventBehind();
/* 0x0044e930 AIFunction_GetEventDistance -> AIFunction_GetEventDistance */
float AIFunction_GetEventDistance();
/* 0x0044e9b0 AIFunction_GetAlarmTriggerDistance -> AIFunction_GetAlarmTriggerDistance */
float AIFunction_GetAlarmTriggerDistance();
/* 0x0044eaf0 AIFunction_SetAnimationInterval -> AIFunction_SetAnimationInterval */
void AIFunction_SetAnimationInterval(int entryIndex, int interval);
/* 0x0044ebb0 AIFunction_AddAnimationEntry -> AIFunction_AddAnimationEntry */
void AIFunction_AddAnimationEntry(int animationId, int data);
/* 0x0044ecb0 AIFunction_GetAnimationToPlay -> AIFunction_GetAnimationToPlay */
int AIFunction_GetAnimationToPlay();
/* 0x0044ee40 AIFunction_SendResponse -> AIFunction_SendResponse */
void AIFunction_SendResponse();
/* 0x0044eeb0 AIEVENT_CREATE -> AIEVENT_CREATE */
void AIEVENT_CREATE(void);
/* 0x0044f060 HumanAI_LoadParameters -> HumanAI_LoadParameters */
void HumanAI_LoadParameters(int param_1);
/* 0x0044f380 Env_ActivateEntity_12 -> Env_ActivateEntity_12 */
void Env_ActivateEntity_12(int param_1);
/* 0x0044f410 HumanAI_Setup -> HumanAI_Setup */
void HumanAI_Setup(void);
/* 0x0044fba0 Env_WeaponNotInitialized -> Env_WeaponNotInitialized */
void Env_WeaponNotInitialized(int param_1);
/* 0x0044fc90 HumanAI_EventDispatch -> HumanAI_EventDispatch */
void HumanAI_EventDispatch();
/* 0x0044fd50 Env_InitLadder_13 -> Env_InitLadder_13 */
void Env_InitLadder_13(int *param_1);
/* 0x0044fe50 Env_TriggerAlarm_13 -> Env_TriggerAlarm_13 */
void Env_TriggerAlarm_13(int param_1, uint32_t *param_2);
/* 0x0044fec0 HumanAI_RunActions -> HumanAI_RunActions */
void HumanAI_RunActions();
/* 0x0044ff40 Env_UpdateCameraLens_13 -> Env_UpdateCameraLens_13 */
void Env_UpdateCameraLens_13(int param_1);
/* 0x0044ff80 Env_CheckAmbientArea_13 -> Env_CheckAmbientArea_13 */
void Env_CheckAmbientArea_13(int param_1);
/* 0x0044ffc0 HumanAI_Process -> HumanAI_Process */
void HumanAI_Process(int param_1);
/* 0x004500c0 AI_CombatTarget -> AI_CombatTarget */
void AI_CombatTarget(int param_1);
/* 0x00450110 HumanAI_EventOffer -> HumanAI_EventOffer */
void HumanAI_EventOffer(...);
/* 0x004502f0 AI_TestViewCones -> AI_TestViewCones */
void AI_TestViewCones();
/* 0x00450520 HumanAI_EventQueued -> HumanAI_EventQueued */
void HumanAI_EventQueued();
/* 0x004505d0 HumanAI_OnEvent -> HumanAI_OnEvent */
void HumanAI_OnEvent(int *param_1);
/* 0x00450770 HumanAI_Action -> HumanAI_Action */
void HumanAI_Action(void);
/* 0x004507d0 HumanAI_Cleanup -> HumanAI_Cleanup */
void HumanAI_Cleanup(void);
/* 0x00450830 AI_CheckVisibility -> AI_CheckVisibility */
void AI_CheckVisibility(void);
/* 0x004508e0 AIAction_Patrol_3 -> AIAction_Patrol_3 */
void AIAction_Patrol_3(void);
/* 0x00450b20 AIEVENT_CREATE_2 -> AIEVENT_CREATE_2 */
void AIEVENT_CREATE_2(void);
/* 0x00450c80 AI_CheckHearing -> AI_CheckHearing */
void AI_CheckHearing(void);
/* 0x00450ca0 AI_FireWeapon -> AI_FireWeapon */
void AI_FireWeapon(void);
/* 0x00450cc0 AI_MoveToNode -> AI_MoveToNode */
void AI_MoveToNode(void);
/* 0x00450ce0 AI_EventBroadcast -> AI_EventBroadcast */
void AI_EventBroadcast();
/* 0x00450d50 AI_TakeCover -> AI_TakeCover */
void AI_TakeCover(int param_1, uint32_t param_2);
/* 0x00450d80 AI_UpdateOrders -> AI_UpdateOrders */
void AI_UpdateOrders(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x00450dc0 AI_AlertAllies -> AI_AlertAllies */
uint32_t AI_AlertAllies(int param_1);
/* 0x00450de0 AI_ActionstackFull -> AI_ActionstackFull */
void AI_ActionstackFull(int param_1);
/* 0x00450e10 AI_SelectTarget -> AI_SelectTarget */
void AI_SelectTarget(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x00450e70 AI_UpdateSensors -> AI_UpdateSensors */
void AI_UpdateSensors(int param_1, uint32_t *param_2);
/* 0x00450ee0 AI_CheckSector -> AI_CheckSector */
void AI_CheckSector(int param_1);
/* 0x00450f10 AI_UpdatePatrol_2 -> AI_UpdatePatrol_2 */
void AI_UpdatePatrol_2(int param_1, int param_2);
/* 0x00450ff0 AI_CombatTarget_2 -> AI_CombatTarget_2 */
void AI_CombatTarget_2(uint32_t param_1, int param_2);
/* 0x00451030 AI_CheckVisibility_2 -> AI_CheckVisibility_2 */
int * AI_CheckVisibility_2(int param_1);
/* 0x00451050 AI_CheckHearing_2 -> AI_CheckHearing_2 */
void AI_CheckHearing_2(int param_1, uint32_t *param_2);
/* 0x00451080 AI_FireWeapon_2 -> AI_FireWeapon_2 */
uint32_t * AI_FireWeapon_2(int param_1, int param_2);
/* 0x004511d0 AI_MoveToNode_2 -> AI_MoveToNode_2 */
void AI_MoveToNode_2(int param_1);
/* 0x004511f0 Combat_SetAimMode -> Combat_SetAimMode */
void Combat_SetAimMode();
/* 0x00451230 AI_TakeCover_2 -> AI_TakeCover_2 */
uint32_t AI_TakeCover_2(int param_1, int param_2);
/* 0x00451270 AI_UpdateOrders_2 -> AI_UpdateOrders_2 */
int AI_UpdateOrders_2(int param_1, int param_2);
/* 0x004512a0 AI_AlertAllies_2 -> AI_AlertAllies_2 */
void AI_AlertAllies_2(int param_1, int param_2, char param_3);
/* 0x00451320 AI_SelectTarget_2 -> AI_SelectTarget_2 */
void AI_SelectTarget_2(int param_1);
/* 0x00451330 AI_UpdateSensors_2 -> AI_UpdateSensors_2 */
void AI_UpdateSensors_2(int param_1);
/* 0x00451350 AI_CheckSector_2 -> AI_CheckSector_2 */
uint32_t AI_CheckSector_2(int param_1);
/* 0x00451380 AI_UpdatePatrol_3 -> AI_UpdatePatrol_3 */
void AI_UpdatePatrol_3(uint32_t *param_1, int param_2);
/* 0x004513e0 AI_CombatTarget_3 -> AI_CombatTarget_3 */
uint32_t AI_CombatTarget_3(int param_1);
/* 0x004513f0 AI_AFCaF -> AI_AFCaF */
void AI_AFCaF(float param_1);
/* 0x00451470 AI_CheckVisibility_3 -> AI_CheckVisibility_3 */
float10 AI_CheckVisibility_3(int param_1);
/* 0x00451540 AI_SteerHuman -> AI_SteerHuman */
void AI_SteerHuman();
/* 0x004518e0 AI_ExpandRoute -> AI_ExpandRoute */
void AI_ExpandRoute();
/* 0x00452080 AI_CheckHearing_3 -> AI_CheckHearing_3 */
int * AI_CheckHearing_3(int param_1);
/* 0x004520c0 AI_FireWeapon_3 -> AI_FireWeapon_3 */
void AI_FireWeapon_3(double *param_1, int param_2, double *param_3, double *param_4, char param_5);
/* 0x004522a0 AI_MoveToNode_3 -> AI_MoveToNode_3 */
void AI_MoveToNode_3(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004522d0 AI_CaFCgF -> AI_CaFCgF */
uint32_t AI_CaFCgF(int param_1, uint32_t *param_2, float param_3, char param_4);
/* 0x00452580 AI_TakeCover_3 -> AI_TakeCover_3 */
void AI_TakeCover_3(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004525b0 AI_UpdateOrders_3 -> AI_UpdateOrders_3 */
void AI_UpdateOrders_3(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004525e0 AI_AlertAllies_3 -> AI_AlertAllies_3 */
void AI_AlertAllies_3(int param_1);
/* 0x00452660 AI_SelectTarget_3 -> AI_SelectTarget_3 */
void AI_SelectTarget_3(int param_1);
/* 0x004526e0 AI_UpdateSensors_3 -> AI_UpdateSensors_3 */
uint32_t AI_UpdateSensors_3(int param_1);
/* 0x004528f0 AI_CheckSector_3 -> AI_CheckSector_3 */
bool AI_CheckSector_3(int param_1);
/* 0x00452910 AI_UpdatePatrol_4 -> AI_UpdatePatrol_4 */
uint32_t * AI_UpdatePatrol_4(int param_1);
/* 0x00452920 AI_CombatTarget_4 -> AI_CombatTarget_4 */
int AI_CombatTarget_4(int param_1);
/* 0x00452930 AI_CheckVisibility_4 -> AI_CheckVisibility_4 */
void AI_CheckVisibility_4(uint32_t *param_1, float *param_2, int param_3, double *param_4, float param_5);
/* 0x00452b80 AI_CheckHearing_4 -> AI_CheckHearing_4 */
void AI_CheckHearing_4(int param_1, int param_2, int param_3, char param_4);
/* 0x00452be0 AI_FireWeapon_4 -> AI_FireWeapon_4 */
uint32_t * AI_FireWeapon_4(int param_1, int param_2);
/* 0x00452c10 AI_MoveToNode_4 -> AI_MoveToNode_4 */
void AI_MoveToNode_4(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x00452c60 AI_TakeCover_4 -> AI_TakeCover_4 */
int * AI_TakeCover_4(int param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x00452d20 AI_UpdateOrders_4 -> AI_UpdateOrders_4 */
int * AI_UpdateOrders_4(uint32_t *param_1, uint32_t *param_2, double *param_3, int param_4, int param_5, double *param_6);
/* 0x00453040 AI_AlertAllies_4 -> AI_AlertAllies_4 */
void AI_AlertAllies_4(uint32_t *param_1, uint32_t *param_2, uint32_t param_3, uint32_t param_4);
/* 0x004530a0 AI_HumanmonitorNoTarget -> AI_HumanmonitorNoTarget */
int * AI_HumanmonitorNoTarget(int *param_1, int *param_2);
/* 0x00453200 AI_SelectTarget_4 -> AI_SelectTarget_4 */
uint32_t AI_SelectTarget_4(int param_1);
/* 0x00453270 AI_UpdateSensors_4 -> AI_UpdateSensors_4 */
void AI_UpdateSensors_4(void);
/* 0x004532d0 AI_CheckSector_4 -> AI_CheckSector_4 */
uint32_t AI_CheckSector_4(int param_1);
/* 0x00453300 AI_UpdatePatrol_5 -> AI_UpdatePatrol_5 */
int * AI_UpdatePatrol_5(int param_1, char param_2);
/* 0x00453390 AI_CombatTarget_5 -> AI_CombatTarget_5 */
void AI_CombatTarget_5(int param_1);
/* 0x004533b0 PatrolPathCommand_Init -> PatrolPathCommand_Init */
void PatrolPathCommand_Init(void);
/* 0x004534b0 PatrolPathCommand_Update -> PatrolPathCommand_Update */
void PatrolPathCommand_Update(int param_1);
/* 0x00453520 PatrolPathCommand_OnEvent -> PatrolPathCommand_OnEvent */
void PatrolPathCommand_OnEvent(void);
/* 0x00453540 PatrolPathCommand_Process -> PatrolPathCommand_Process */
uint32_t PatrolPathCommand_Process(int param_1);
/* 0x00453550 PatrolPath_Init -> PatrolPath_Init */
void PatrolPath_Init(void);
/* 0x00453600 PatrolPath_Update -> PatrolPath_Update */
void PatrolPath_Update(void);
/* 0x004536e0 PatrolPath_OnEvent -> PatrolPath_OnEvent */
int PatrolPath_OnEvent(int param_1);
/* 0x00453710 PatrolPath_Process -> PatrolPath_Process */
void PatrolPath_Process(void);
/* 0x00453720 PatrolPath_Action -> PatrolPath_Action */
uint32_t PatrolPath_Action(int param_1);
/* 0x00453730 PatrolPath_OnTick -> PatrolPath_OnTick */
int * PatrolPath_OnTick(int *param_1);
/* 0x00453760 PatrolCursor_Advance -> PatrolCursor_Advance */
void PatrolCursor_Advance();
/* 0x004537e0 PatrolCursor_Start -> PatrolCursor_Start */
void PatrolCursor_Start();
/* 0x00453840 PatrolPath_Find -> PatrolPath_Find */
void PatrolPath_Find();
/* 0x00453870 AI_CheckVisibility_5 -> AI_CheckVisibility_5 */
int AI_CheckVisibility_5(int param_1);
/* 0x00453880 AI_CheckHearing_5 -> AI_CheckHearing_5 */
uint32_t * AI_CheckHearing_5(int *param_1, int param_2);
/* 0x004538f0 AI_WalkRain1D -> AI_WalkRain1D */
void AI_WalkRain1D(int param_1);
/* 0x00453a30 AI_AnimationDNotFound -> AI_AnimationDNotFound */
void AI_AnimationDNotFound(int param_1, int param_2);
/* 0x00453c40 AI_FireWeapon_5 -> AI_FireWeapon_5 */
void AI_FireWeapon_5(void);
/* 0x00453de0 AI_MoveToNode_5 -> AI_MoveToNode_5 */
void AI_MoveToNode_5(void);
/* 0x00453f80 AI_TakeCover_5 -> AI_TakeCover_5 */
void AI_TakeCover_5(void);
/* 0x00453fb0 AI_UpdateOrders_5 -> AI_UpdateOrders_5 */
void AI_UpdateOrders_5(void);
/* 0x004540d0 AI_AlertAllies_5 -> AI_AlertAllies_5 */
void AI_AlertAllies_5(void);
/* 0x00454100 AI_SelectTarget_5 -> AI_SelectTarget_5 */
void AI_SelectTarget_5(int param_1, int param_2);
/* 0x004541f0 AI_UpdateSensors_5 -> AI_UpdateSensors_5 */
void AI_UpdateSensors_5(void);
/* 0x00454300 AI_CheckSector_5 -> AI_CheckSector_5 */
void AI_CheckSector_5(void);
/* 0x004543e0 AI_CombatTarget_6 -> AI_CombatTarget_6 */
void AI_CombatTarget_6(void);
/* 0x004544c0 AI_FireWeapon_6 -> AI_FireWeapon_6 */
void AI_FireWeapon_6(int param_1, int param_2);
/* 0x00454510 AI_MoveToNode_6 -> AI_MoveToNode_6 */
void AI_MoveToNode_6(void);
/* 0x004545e0 AI_TakeCover_6 -> AI_TakeCover_6 */
void AI_TakeCover_6(int param_1, int param_2);
/* 0x00454630 AI_UpdateOrders_6 -> AI_UpdateOrders_6 */
void AI_UpdateOrders_6(int param_1, uint32_t param_2);
/* 0x004546c0 AI_AiDeath -> AI_AiDeath */
void AI_AiDeath(int param_1, int param_2);
/* 0x004547f0 AI_AnimationDNotFound_2 -> AI_AnimationDNotFound_2 */
void AI_AnimationDNotFound_2(int param_1, int param_2);
/* 0x00454880 AI_SelectTarget_6 -> AI_SelectTarget_6 */
void AI_SelectTarget_6(int param_1, int param_2);
/* 0x00454940 AI_UpdateSensors_6 -> AI_UpdateSensors_6 */
void AI_UpdateSensors_6(void);
/* 0x00454970 HumanSoldierFemale_Init -> HumanSoldierFemale_Init */
void HumanSoldierFemale_Init(void);
/* 0x00454ba0 AI_CheckSector_6 -> AI_CheckSector_6 */
void AI_CheckSector_6(void);
/* 0x00454da0 AI_CheckVisibility_7 -> AI_CheckVisibility_7 */
void AI_CheckVisibility_7(int param_1);
/* 0x00454f10 HumanSoldierFemale_Setup -> HumanSoldierFemale_Setup */
void HumanSoldierFemale_Setup(void);
/* 0x004550b0 AI_SpeedZMS2F -> AI_SpeedZMS2F */
void AI_SpeedZMS2F(int param_1);
/* 0x004553e0 HumanSoldierFemale_Process -> HumanSoldierFemale_Process */
void HumanSoldierFemale_Process(void);
/* 0x00455570 HumanSoldierFemale_Update -> HumanSoldierFemale_Update */
void HumanSoldierFemale_Update(void);
/* 0x00455780 HumanSoldierFemale_OnEvent -> HumanSoldierFemale_OnEvent */
void HumanSoldierFemale_OnEvent(void);
/* 0x00455960 AI_UpdateOrders_7 -> AI_UpdateOrders_7 */
void AI_UpdateOrders_7(void);
/* 0x00455980 AI_AlertAllies_7 -> AI_AlertAllies_7 */
uint16_t AI_AlertAllies_7(void);
/* 0x00455990 AI_AnimationDNotFound_3 -> AI_AnimationDNotFound_3 */
void AI_AnimationDNotFound_3(int param_1, int param_2);
/* 0x00455ba0 AI_SelectTarget_7 -> AI_SelectTarget_7 */
void AI_SelectTarget_7(int param_1, int param_2);
/* 0x00455d10 AI_UpdateSensors_7 -> AI_UpdateSensors_7 */
void AI_UpdateSensors_7(void);
/* 0x00455eb0 AI_CheckSector_7 -> AI_CheckSector_7 */
void AI_CheckSector_7(void);
/* 0x00455ee0 AI_UpdatePatrol_8 -> AI_UpdatePatrol_8 */
void AI_UpdatePatrol_8(void);
/* 0x00455fe0 AI_CombatTarget_8 -> AI_CombatTarget_8 */
void AI_CombatTarget_8(void);
/* 0x004560c0 AI_CheckVisibility_8 -> AI_CheckVisibility_8 */
void AI_CheckVisibility_8(void);
/* 0x00456170 AI_CheckHearing_8 -> AI_CheckHearing_8 */
void AI_CheckHearing_8(void);
/* 0x00456220 AI_FireWeapon_8 -> AI_FireWeapon_8 */
void AI_FireWeapon_8(void);
/* 0x00456350 AI_MoveToNode_8 -> AI_MoveToNode_8 */
void AI_MoveToNode_8(void);
/* 0x00456380 AI_TakeCover_8 -> AI_TakeCover_8 */
void AI_TakeCover_8(void);
/* 0x00456480 AI_UpdateOrders_8 -> AI_UpdateOrders_8 */
void AI_UpdateOrders_8(void);
/* 0x004564b0 AI_AlertAllies_8 -> AI_AlertAllies_8 */
void AI_AlertAllies_8(void);
/* 0x00456570 AI_SelectTarget_8 -> AI_SelectTarget_8 */
void AI_SelectTarget_8(void);
/* 0x00456650 AI_UpdateSensors_8 -> AI_UpdateSensors_8 */
void AI_UpdateSensors_8(int param_1, int param_2);
/* 0x004566a0 AI_CheckSector_8 -> AI_CheckSector_8 */
void AI_CheckSector_8(void);
/* 0x00456770 AI_UpdatePatrol_9 -> AI_UpdatePatrol_9 */
void AI_UpdatePatrol_9(int param_1, int param_2);
/* 0x004567c0 AI_CombatTarget_9 -> AI_CombatTarget_9 */
void AI_CombatTarget_9(void);
/* 0x00456960 AI_CheckVisibility_9 -> AI_CheckVisibility_9 */
void AI_CheckVisibility_9(void);
/* 0x00456ad0 HumanSoldierRPG_Init -> HumanSoldierRPG_Init */
void HumanSoldierRPG_Init(void);
/* 0x00456e50 HumanSoldier_Process -> HumanSoldier_Process */
void HumanSoldier_Process(void);
/* 0x00456ff0 AI_SpeedZMS2F_2 -> AI_SpeedZMS2F_2 */
void AI_SpeedZMS2F_2(int param_1);
/* 0x004572d0 HumanSoldierRPG_Process -> HumanSoldierRPG_Process */
void HumanSoldierRPG_Process(void);
/* 0x00457430 HumanSoldierRPG_Update -> HumanSoldierRPG_Update */
void HumanSoldierRPG_Update(void);
/* 0x00457620 HumanSoldierRPG_OnEvent -> HumanSoldierRPG_OnEvent */
void HumanSoldierRPG_OnEvent(void);
/* 0x004577e0 AI_CheckHearing_9 -> AI_CheckHearing_9 */
void AI_CheckHearing_9(void);
/* 0x00457800 AI_FireWeapon_9 -> AI_FireWeapon_9 */
uint16_t AI_FireWeapon_9(void);
/* 0x00457810 AI_WalkRain1D_2 -> AI_WalkRain1D_2 */
void AI_WalkRain1D_2(int param_1);
/* 0x00457950 AI_AnimationDNotFound_4 -> AI_AnimationDNotFound_4 */
void AI_AnimationDNotFound_4(int param_1, int param_2);
/* 0x00457cb0 AI_MoveToNode_9 -> AI_MoveToNode_9 */
void AI_MoveToNode_9(void);
/* 0x00457f50 AI_TakeCover_9 -> AI_TakeCover_9 */
void AI_TakeCover_9(void);
/* 0x004581b0 AI_UpdateOrders_9 -> AI_UpdateOrders_9 */
void AI_UpdateOrders_9(void);
/* 0x004581e0 AI_AlertAllies_9 -> AI_AlertAllies_9 */
void AI_AlertAllies_9(void);
/* 0x00458250 AI_SelectTarget_9 -> AI_SelectTarget_9 */
void AI_SelectTarget_9(void);
/* 0x00458510 AI_UpdateSensors_9 -> AI_UpdateSensors_9 */
void AI_UpdateSensors_9(void);
/* 0x00458540 AI_CheckSector_9 -> AI_CheckSector_9 */
void AI_CheckSector_9(void);
/* 0x00458570 AI_UpdatePatrol_10 -> AI_UpdatePatrol_10 */
void AI_UpdatePatrol_10(void);
/* 0x004585a0 AI_CombatTarget_10 -> AI_CombatTarget_10 */
void AI_CombatTarget_10(void);
/* 0x004585d0 AI_CheckVisibility_10 -> AI_CheckVisibility_10 */
void AI_CheckVisibility_10(void);
/* 0x00458600 AI_CheckHearing_10 -> AI_CheckHearing_10 */
void AI_CheckHearing_10(void);
/* 0x00458630 AI_FireWeapon_10 -> AI_FireWeapon_10 */
void AI_FireWeapon_10(void);
/* 0x004587b0 AI_MoveToNode_10 -> AI_MoveToNode_10 */
void AI_MoveToNode_10(void);
/* 0x004587e0 AI_TakeCover_10 -> AI_TakeCover_10 */
void AI_TakeCover_10(void);
/* 0x004588c0 AI_UpdateOrders_10 -> AI_UpdateOrders_10 */
void AI_UpdateOrders_10(void);
/* 0x004588f0 AI_AlertAllies_10 -> AI_AlertAllies_10 */
void AI_AlertAllies_10(void);
/* 0x00458920 AI_SelectTarget_10 -> AI_SelectTarget_10 */
void AI_SelectTarget_10(void);
/* 0x00458a00 AI_UpdateSensors_10 -> AI_UpdateSensors_10 */
void AI_UpdateSensors_10(void);
/* 0x00458ae0 AI_CheckSector_10 -> AI_CheckSector_10 */
void AI_CheckSector_10(void);
/* 0x00458bc0 AI_UpdatePatrol_11 -> AI_UpdatePatrol_11 */
void AI_UpdatePatrol_11(void);
/* 0x00458d70 AI_CombatTarget_11 -> AI_CombatTarget_11 */
void AI_CombatTarget_11(void);
/* 0x00458da0 AI_CheckVisibility_11 -> AI_CheckVisibility_11 */
void AI_CheckVisibility_11(void);
/* 0x00458e80 AI_CheckHearing_11 -> AI_CheckHearing_11 */
void AI_CheckHearing_11(void);
/* 0x00458fb0 AI_FireWeapon_11 -> AI_FireWeapon_11 */
void AI_FireWeapon_11(void);
/* 0x00458fe0 AI_MoveToNode_11 -> AI_MoveToNode_11 */
void AI_MoveToNode_11(void);
/* 0x00459010 AI_TakeCover_11 -> AI_TakeCover_11 */
void AI_TakeCover_11(void);
/* 0x004590f0 AI_UpdateOrders_11 -> AI_UpdateOrders_11 */
void AI_UpdateOrders_11(void);
/* 0x00459120 AI_AlertAllies_11 -> AI_AlertAllies_11 */
void AI_AlertAllies_11(void);
/* 0x00459150 AI_SelectTarget_11 -> AI_SelectTarget_11 */
void AI_SelectTarget_11(void);
/* 0x00459180 AI_UpdateSensors_11 -> AI_UpdateSensors_11 */
void AI_UpdateSensors_11(void);
/* 0x00459250 AI_CheckSector_11 -> AI_CheckSector_11 */
void AI_CheckSector_11(int param_1, int param_2);
/* 0x004592a0 AI_UpdatePatrol_12 -> AI_UpdatePatrol_12 */
void AI_UpdatePatrol_12(int param_1, int param_2);
/* 0x004592f0 AI_CombatTarget_12 -> AI_CombatTarget_12 */
void AI_CombatTarget_12(int param_1, uint32_t param_2);
/* 0x00459380 AI_CheckVisibility_12 -> AI_CheckVisibility_12 */
void AI_CheckVisibility_12(int param_1, int param_2);
/* 0x004593c0 AI_CheckHearing_12 -> AI_CheckHearing_12 */
void AI_CheckHearing_12(void);
/* 0x00459520 AI_AiDeath_2 -> AI_AiDeath_2 */
void AI_AiDeath_2(int param_1, int param_2);
/* 0x004595d0 AI_AiDeath_3 -> AI_AiDeath_3 */
void AI_AiDeath_3(int param_1, int param_2);
/* 0x004596c0 AI_AnimationDNotFound_5 -> AI_AnimationDNotFound_5 */
void AI_AnimationDNotFound_5(int param_1, int param_2);
/* 0x00459750 AI_FireWeapon_12 -> AI_FireWeapon_12 */
void AI_FireWeapon_12(void);
/* 0x00459850 AI_MoveToNode_12 -> AI_MoveToNode_12 */
void AI_MoveToNode_12(void);
/* 0x00459880 HumanSoldierPistol_Init -> HumanSoldierPistol_Init */
void HumanSoldierPistol_Init(void);
/* 0x00459ab0 AI_TakeCover_12 -> AI_TakeCover_12 */
void AI_TakeCover_12(void);
/* 0x00459d50 AI_UpdateOrders_12 -> AI_UpdateOrders_12 */
void AI_UpdateOrders_12(int param_1);
/* 0x00459ec0 HumanSoldier_Setup -> HumanSoldier_Setup */
void HumanSoldier_Setup(int param_1);
/* 0x00459f50 AI_SpeedZMS2F_3 -> AI_SpeedZMS2F_3 */
void AI_SpeedZMS2F_3(int param_1);
/* 0x0045a230 HumanSoldierPistol_Process -> HumanSoldierPistol_Process */
void HumanSoldierPistol_Process(void);
/* 0x0045a3d0 HumanSoldier_OnEvent -> HumanSoldier_OnEvent */
void HumanSoldier_OnEvent(void);
/* 0x0045a5e0 HumanSoldier_Action -> HumanSoldier_Action */
void HumanSoldier_Action(void);
/* 0x0045a7c0 AI_AlertAllies_12 -> AI_AlertAllies_12 */
void AI_AlertAllies_12(void);
/* 0x0045a7e0 AI_SelectTarget_12 -> AI_SelectTarget_12 */
uint16_t AI_SelectTarget_12(void);
/* 0x0045a7f0 AI_WalkRain1D_3 -> AI_WalkRain1D_3 */
void AI_WalkRain1D_3(int param_1);
/* 0x0045a930 AI_AnimationDNotFound_6 -> AI_AnimationDNotFound_6 */
void AI_AnimationDNotFound_6(int param_1, int param_2);
/* 0x0045a9e0 AI_UpdateSensors_12 -> AI_UpdateSensors_12 */
void AI_UpdateSensors_12(void);
/* 0x0045aa60 AI_CheckSector_12 -> AI_CheckSector_12 */
void AI_CheckSector_12(void);
/* 0x0045aad0 AI_UpdatePatrol_13 -> AI_UpdatePatrol_13 */
void AI_UpdatePatrol_13(void);
/* 0x0045ab00 AI_CombatTarget_13 -> AI_CombatTarget_13 */
void AI_CombatTarget_13(void);
/* 0x0045aca0 AI_CheckVisibility_13 -> AI_CheckVisibility_13 */
void AI_CheckVisibility_13(void);
/* 0x0045af60 AI_CheckHearing_13 -> AI_CheckHearing_13 */
void AI_CheckHearing_13(void);
/* 0x0045afd0 AI_FireWeapon_13 -> AI_FireWeapon_13 */
void AI_FireWeapon_13(void);
/* 0x0045b000 AI_MoveToNode_13 -> AI_MoveToNode_13 */
void AI_MoveToNode_13(void);
/* 0x0045b030 AI_TakeCover_13 -> AI_TakeCover_13 */
void AI_TakeCover_13(void);
/* 0x0045b060 AI_UpdateOrders_13 -> AI_UpdateOrders_13 */
void AI_UpdateOrders_13(void);
/* 0x0045b190 AI_AlertAllies_13 -> AI_AlertAllies_13 */
void AI_AlertAllies_13(void);
/* 0x0045b1c0 AI_SelectTarget_13 -> AI_SelectTarget_13 */
void AI_SelectTarget_13(int param_1, int param_2);
/* 0x0045b2c0 AI_UpdateSensors_13 -> AI_UpdateSensors_13 */
void AI_UpdateSensors_13(void);
/* 0x0045b2f0 AI_CheckSector_13 -> AI_CheckSector_13 */
void AI_CheckSector_13(void);
/* 0x0045b500 AI_UpdatePatrol_14 -> AI_UpdatePatrol_14 */
void AI_UpdatePatrol_14(void);
/* 0x0045b530 AI_CombatTarget_14 -> AI_CombatTarget_14 */
void AI_CombatTarget_14(void);
/* 0x0045b6b0 AI_CheckVisibility_14 -> AI_CheckVisibility_14 */
void AI_CheckVisibility_14(void);
/* 0x0045b7c0 AI_CheckHearing_14 -> AI_CheckHearing_14 */
void AI_CheckHearing_14(void);
/* 0x0045b7f0 AI_FireWeapon_14 -> AI_FireWeapon_14 */
void AI_FireWeapon_14(void);
/* 0x0045b8d0 AI_MoveToNode_14 -> AI_MoveToNode_14 */
void AI_MoveToNode_14(void);
/* 0x0045b990 AI_TakeCover_14 -> AI_TakeCover_14 */
void AI_TakeCover_14(void);
/* 0x0045ba50 AI_UpdateOrders_14 -> AI_UpdateOrders_14 */
void AI_UpdateOrders_14(void);
/* 0x0045bb10 AI_AlertAllies_14 -> AI_AlertAllies_14 */
void AI_AlertAllies_14(void);
/* 0x0045bbd0 AI_SelectTarget_14 -> AI_SelectTarget_14 */
void AI_SelectTarget_14(void);
/* 0x0045bc00 AI_UpdateSensors_14 -> AI_UpdateSensors_14 */
void AI_UpdateSensors_14(void);
/* 0x0045bc30 AI_CheckSector_14 -> AI_CheckSector_14 */
void AI_CheckSector_14(void);
/* 0x0045bc60 AI_UpdatePatrol_15 -> AI_UpdatePatrol_15 */
void AI_UpdatePatrol_15(void);
/* 0x0045bc90 AI_CombatTarget_15 -> AI_CombatTarget_15 */
void AI_CombatTarget_15(void);
/* 0x0045bcc0 AI_CheckVisibility_15 -> AI_CheckVisibility_15 */
void AI_CheckVisibility_15(void);
/* 0x0045bd90 AI_CheckHearing_15 -> AI_CheckHearing_15 */
void AI_CheckHearing_15(void);
/* 0x0045bea0 AI_FireWeapon_15 -> AI_FireWeapon_15 */
void AI_FireWeapon_15(void);
/* 0x0045bf60 AI_MoveToNode_15 -> AI_MoveToNode_15 */
void AI_MoveToNode_15(void);
/* 0x0045c090 AI_TakeCover_15 -> AI_TakeCover_15 */
void AI_TakeCover_15(void);
/* 0x0045c190 AI_UpdateOrders_15 -> AI_UpdateOrders_15 */
void AI_UpdateOrders_15(void);
/* 0x0045c1c0 AI_AlertAllies_15 -> AI_AlertAllies_15 */
void AI_AlertAllies_15(int param_1, int param_2);
/* 0x0045c210 AI_SelectTarget_15 -> AI_SelectTarget_15 */
void AI_SelectTarget_15(void);
/* 0x0045c2e0 AI_UpdateSensors_15 -> AI_UpdateSensors_15 */
void AI_UpdateSensors_15(int param_1, int param_2);
/* 0x0045c330 AI_CheckSector_15 -> AI_CheckSector_15 */
void AI_CheckSector_15(int param_1, int param_2);
/* 0x0045c370 AI_UpdatePatrol_16 -> AI_UpdatePatrol_16 */
void AI_UpdatePatrol_16(int param_1, int param_2);
/* 0x0045c440 Soldier_Execute -> Soldier_Execute */
void Soldier_Execute(void* context, Soldier* soldierPtr);
/* 0x0045c5a0 Soldier_DeathStateA -> Soldier_DeathStateA */
void Soldier_DeathStateA(...);
/* 0x0045c650 Soldier_DeathStateB -> Soldier_DeathStateB */
void Soldier_DeathStateB(...);
/* 0x0045c750 AI_AnimationDNotFound_7 -> AI_AnimationDNotFound_7 */
void AI_AnimationDNotFound_7(int param_1, int param_2);
/* 0x0045c7e0 AI_CombatTarget_16 -> AI_CombatTarget_16 */
void AI_CombatTarget_16(int param_1, int param_2);
/* 0x0045c8b0 AI_CheckVisibility_16 -> AI_CheckVisibility_16 */
void AI_CheckVisibility_16(void);
/* 0x0045ca50 AI_CheckHearing_16 -> AI_CheckHearing_16 */
void AI_CheckHearing_16(void);
/* 0x0045cab0 HumanSoldier_Init -> HumanSoldier_Init */
void HumanSoldier_Init(void);
/* 0x0045ccf0 AI_FireWeapon_16 -> AI_FireWeapon_16 */
void AI_FireWeapon_16(void);
/* 0x0045cf90 HumanSoldier_LoadParameters -> HumanSoldier_LoadParameters */
void HumanSoldier_LoadParameters(int param_1);
/* 0x0045d080 AI_SpeedZMS2F_4 -> AI_SpeedZMS2F_4 */
void AI_SpeedZMS2F_4(int param_1);
/* 0x0045d360 AI_MoveToNode_16 -> AI_MoveToNode_16 */
void AI_MoveToNode_16(int param_1);
/* 0x0045d3c0 Human_DamageHandler -> Human_DamageHandler */
void Human_DamageHandler(...);
/* 0x0045d580 AI_TakeCover_16 -> AI_TakeCover_16 */
void AI_TakeCover_16(void);
/* 0x0045d5a0 AI_UpdateOrders_16 -> AI_UpdateOrders_16 */
uint16_t AI_UpdateOrders_16(void);
/* 0x0045d5b0 Soldier_DeathFallSolver -> Soldier_DeathFallSolver */
void Soldier_DeathFallSolver();
/* 0x0045daa0 AI_AlertAllies_16 -> AI_AlertAllies_16 */
uint32_t AI_AlertAllies_16(int param_1, uint32_t *param_2);
/* 0x0045db70 HumanPlayerInput_Init -> HumanPlayerInput_Init */
void HumanPlayerInput_Init(void);
/* 0x0045dcf0 HumanPlayerInput_LoadParameters -> HumanPlayerInput_LoadParameters */
void HumanPlayerInput_LoadParameters(void);
/* 0x0045de20 HumanPlayerInput_Setup -> HumanPlayerInput_Setup */
void HumanPlayerInput_Setup(void);
/* 0x0045df50 HumanPlayerInput_Process -> HumanPlayerInput_Process */
void HumanPlayerInput_Process(void);
/* 0x0045e040 AI_UpdateSensors_16 -> AI_UpdateSensors_16 */
void AI_UpdateSensors_16(void);
/* 0x0045e060 AI_CheckSector_16 -> AI_CheckSector_16 */
void AI_CheckSector_16(float *param_1);
/* 0x0045e3c0 AI_UpdatePatrol_17 -> AI_UpdatePatrol_17 */
uint32_t AI_UpdatePatrol_17(void);
/* 0x0045e3e0 Human_Action -> Human_Action */
void Human_Action(int param_1, uint8_t *param_2);
/* 0x0045e450 Human_Init -> Human_Init */
void Human_Init(void);
/* 0x0045eae0 Human_GetCutSceneDeltaTime -> Human_GetCutSceneDeltaTime */
float (probable) Human_GetCutSceneDeltaTime(unknown param1);
/* 0x0045ecd0 AI_CombatTarget_17 -> AI_CombatTarget_17 */
void AI_CombatTarget_17(int param_1);
/* 0x0045efd0 AI_CheckVisibility_17 -> AI_CheckVisibility_17 */
void AI_CheckVisibility_17(int param_1);
/* 0x0045f050 Human_Setup -> Human_Setup */
void Human_Setup(void);
/* 0x0045f140 AI_CheckHearing_17 -> AI_CheckHearing_17 */
void AI_CheckHearing_17(int param_1);
/* 0x0045f240 AI_FireWeapon_17 -> AI_FireWeapon_17 */
void AI_FireWeapon_17(int param_1);
/* 0x0045f280 Human_LoadParameters -> Human_LoadParameters */
void Human_LoadParameters(void);
/* 0x0045f500 Human_Process -> Human_Process */
void Human_Process(int param_1, uint32_t *param_2);
/* 0x0045f580 AI_MoveToNode_17 -> AI_MoveToNode_17 */
uint32_t AI_MoveToNode_17(int param_1, double *param_2, double *param_3, int param_4);
/* 0x0045f800 Human_Update -> Human_Update */
void Human_Update(int param_1, uint32_t *param_2);
/* 0x0045f890 Human_OnEvent -> Human_OnEvent */
void Human_OnEvent(int param_1);
/* 0x0045f930 Human_BaseDamage -> Human_BaseDamage */
void Human_BaseDamage(...);
/* 0x0045f9d0 Human_Cleanup -> Human_Cleanup */
void Human_Cleanup(void);
/* 0x0045fa80 Human_Cleanup_2 -> Human_Cleanup_2 */
void Human_Cleanup_2(void);
/* 0x0045fcd0 Human_Cleanup_3 -> Human_Cleanup_3 */
void Human_Cleanup_3(int param_1, uint32_t *param_2);
/* 0x0045fe70 Human_Cleanup_4 -> Human_Cleanup_4 */
void Human_Cleanup_4(int param_1, int *param_2);
/* 0x0045ff80 Weapon_AmmoPickup -> Weapon_AmmoPickup */
void Weapon_AmmoPickup(void* player, void* pickupEntity);
/* 0x0045ffc0 Weapon_GunPickup -> Weapon_GunPickup */
void Weapon_GunPickup(void* player, void* pickupEntity);
/* 0x00460280 Human_Cleanup_5 -> Human_Cleanup_5 */
void Human_Cleanup_5(void);
/* 0x00460400 HealthFraction -> HealthFraction */
void HealthFraction(...);
/* 0x004606f0 Human_Cleanup_6 -> Human_Cleanup_6 */
void Human_Cleanup_6(void);
/* 0x00460850 Human_Cleanup_7 -> Human_Cleanup_7 */
void Human_Cleanup_7(void);
/* 0x004608d0 Human_Cleanup_8 -> Human_Cleanup_8 */
void Human_Cleanup_8(void);
/* 0x00460950 Human_Cleanup_9 -> Human_Cleanup_9 */
void Human_Cleanup_9(int param_1, uint32_t param_2);
/* 0x004609a0 Human_Cleanup_10 -> Human_Cleanup_10 */
void Human_Cleanup_10(int param_1, uint32_t param_2);
/* 0x00460ac0 Human_Cleanup_11 -> Human_Cleanup_11 */
void Human_Cleanup_11(void);
/* 0x00460b20 AI_HumanTeamGood -> AI_HumanTeamGood */
void AI_HumanTeamGood(void);
/* 0x00460be0 AI_UpdateOrders_17 -> AI_UpdateOrders_17 */
uint16_t AI_UpdateOrders_17(void);
/* 0x00460bf0 AI_AlertAllies_17 -> AI_AlertAllies_17 */
void AI_AlertAllies_17(void);
/* 0x00460c10 AI_SelectTarget_17 -> AI_SelectTarget_17 */
void AI_SelectTarget_17(void);
/* 0x00460c30 AI_UpdateSensors_17 -> AI_UpdateSensors_17 */
uint8_t AI_UpdateSensors_17(void);
/* 0x00460c40 AI_CheckSector_17 -> AI_CheckSector_17 */
uint8_t AI_CheckSector_17(void);
/* 0x00460c50 AI_UpdatePatrol_18 -> AI_UpdatePatrol_18 */
uint32_t AI_UpdatePatrol_18(void);
/* 0x00460c60 AI_CombatTarget_18 -> AI_CombatTarget_18 */
uint32_t AI_CombatTarget_18(void);
/* 0x00460c70 AI_CheckVisibility_18 -> AI_CheckVisibility_18 */
void AI_CheckVisibility_18(int param_1, uint32_t param_2);
/* 0x00460c80 AI_CheckHearing_18 -> AI_CheckHearing_18 */
void AI_CheckHearing_18(uint32_t param_1, uint32_t param_2);
/* 0x00460ce0 AI_FireWeapon_18 -> AI_FireWeapon_18 */
void AI_FireWeapon_18(int param_1);
/* 0x00460cf0 AI_MoveToNode_18 -> AI_MoveToNode_18 */
void AI_MoveToNode_18(int param_1);
/* 0x00460ee0 AI_TakeCover_18 -> AI_TakeCover_18 */
void AI_TakeCover_18(int param_1);
/* 0x004610c0 AI_UpdateOrders_18 -> AI_UpdateOrders_18 */
void AI_UpdateOrders_18(float param_1);
/* 0x004613d0 AI_AlertAllies_18 -> AI_AlertAllies_18 */
void AI_AlertAllies_18(int param_1);
/* 0x004614b0 Human_MovementIntegrator -> Human_MovementIntegrator */
void Human_MovementIntegrator();
/* 0x00461a70 Human_WallSweep -> Human_WallSweep */
void Human_WallSweep();
/* 0x00462390 Human_GroundQuery -> Human_GroundQuery */
void Human_GroundQuery();
/* 0x00462ba0 Human_Separation -> Human_Separation */
void Human_Separation();
/* 0x00462cf0 Human_AttachedMovement -> Human_AttachedMovement */
void Human_AttachedMovement();
/* 0x00462e50 Muzzle_Eye -> Muzzle_Eye */
void Muzzle_Eye();
/* 0x00463080 AI_UpdateSensors_18 -> AI_UpdateSensors_18 */
void AI_UpdateSensors_18(int param_1);
/* 0x00463110 AI_CheckSector_18 -> AI_CheckSector_18 */
uint32_t AI_CheckSector_18(int param_1);
/* 0x00463120 AI_UpdatePatrol_19 -> AI_UpdatePatrol_19 */
uint32_t AI_UpdatePatrol_19(int param_1);
/* 0x00463130 AI_CombatTarget_19 -> AI_CombatTarget_19 */
uint32_t AI_CombatTarget_19(int param_1);
/* 0x00463140 AI_CheckVisibility_19 -> AI_CheckVisibility_19 */
int AI_CheckVisibility_19(int param_1);
/* 0x00463150 AI_CheckHearing_19 -> AI_CheckHearing_19 */
bool AI_CheckHearing_19(int param_1);
/* 0x00463170 AI_FireWeapon_19 -> AI_FireWeapon_19 */
uint8_t AI_FireWeapon_19(int param_1);
/* 0x00463180 AI_MoveToNode_19 -> AI_MoveToNode_19 */
uint8_t AI_MoveToNode_19(int param_1);
/* 0x00463190 AI_TakeCover_19 -> AI_TakeCover_19 */
uint8_t AI_TakeCover_19(int param_1);
/* 0x004631a0 AI_UpdateOrders_19 -> AI_UpdateOrders_19 */
void AI_UpdateOrders_19(int param_1, uint32_t *param_2);
/* 0x00463220 AI_AlertAllies_19 -> AI_AlertAllies_19 */
void AI_AlertAllies_19(int param_1, uint32_t param_2);
/* 0x00463260 AI_SelectTarget_19 -> AI_SelectTarget_19 */
void AI_SelectTarget_19(int param_1);
/* 0x004632d0 AI_UpdateSensors_19 -> AI_UpdateSensors_19 */
void AI_UpdateSensors_19(int param_1);
/* 0x00463310 Human_SetParent -> Human_SetParent */
void Human_SetParent();
/* 0x00463550 AI_CheckSector_19 -> AI_CheckSector_19 */
void AI_CheckSector_19(int param_1);
/* 0x00463570 AI_UpdatePatrol_20 -> AI_UpdatePatrol_20 */
void AI_UpdatePatrol_20(int param_1);
/* 0x00463580 AI_CombatTarget_20 -> AI_CombatTarget_20 */
void AI_CombatTarget_20(int param_1);
/* 0x00463590 AI_CheckVisibility_20 -> AI_CheckVisibility_20 */
void AI_CheckVisibility_20(int param_1);
/* 0x004635a0 AI_CheckHearing_20 -> AI_CheckHearing_20 */
void AI_CheckHearing_20(int param_1);
/* 0x004635b0 AI_FireWeapon_20 -> AI_FireWeapon_20 */
void AI_FireWeapon_20(int param_1);
/* 0x004635e0 AI_MoveToNode_20 -> AI_MoveToNode_20 */
void AI_MoveToNode_20(int param_1);
/* 0x004635f0 AI_TakeCover_20 -> AI_TakeCover_20 */
void AI_TakeCover_20(int param_1);
/* 0x00463600 AI_UpdateOrders_20 -> AI_UpdateOrders_20 */
void AI_UpdateOrders_20(int param_1);
/* 0x00463610 AI_AlertAllies_20 -> AI_AlertAllies_20 */
void AI_AlertAllies_20(int param_1);
/* 0x00463620 AI_SelectTarget_20 -> AI_SelectTarget_20 */
void AI_SelectTarget_20(int param_1);
/* 0x00463640 AI_UpdateSensors_20 -> AI_UpdateSensors_20 */
void AI_UpdateSensors_20(int param_1, int param_2);
/* 0x00463680 AI_CheckSector_20 -> AI_CheckSector_20 */
uint32_t AI_CheckSector_20(int param_1);
/* 0x004636a0 AI_UpdatePatrol_21 -> AI_UpdatePatrol_21 */
void AI_UpdatePatrol_21(int param_1, int param_2);
/* 0x004636e0 AI_CombatTarget_21 -> AI_CombatTarget_21 */
uint32_t AI_CombatTarget_21(int param_1);
/* 0x00463700 AI_CheckVisibility_21 -> AI_CheckVisibility_21 */
void AI_CheckVisibility_21(int param_1, int param_2);
/* 0x00463740 AI_CheckHearing_21 -> AI_CheckHearing_21 */
uint32_t AI_CheckHearing_21(int param_1);
/* 0x00463760 Human_ViewCam -> Human_ViewCam */
void Human_ViewCam(HumanPlayer* human, int camValue);
/* 0x00463770 AI_FireWeapon_21 -> AI_FireWeapon_21 */
void AI_FireWeapon_21(int param_1);
/* 0x004637c0 AI_MoveToNode_21 -> AI_MoveToNode_21 */
void AI_MoveToNode_21(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004638a0 AI_TakeCover_21 -> AI_TakeCover_21 */
void AI_TakeCover_21(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x00463920 AI_WalkRain1D_4 -> AI_WalkRain1D_4 */
void AI_WalkRain1D_4(int param_1);
/* 0x00463ad0 AI_UpdateOrders_21 -> AI_UpdateOrders_21 */
void AI_UpdateOrders_21(int param_1, float *param_2, int param_3);
/* 0x004640b0 AI_AlertAllies_21 -> AI_AlertAllies_21 */
void AI_AlertAllies_21(void);
/* 0x00464230 AI_SelectTarget_21 -> AI_SelectTarget_21 */
void AI_SelectTarget_21(int param_1);
/* 0x00464240 AI_UpdateSensors_21 -> AI_UpdateSensors_21 */
void AI_UpdateSensors_21(int param_1);
/* 0x00464250 AI_CombatTarget_22 -> AI_CombatTarget_22 */
uint32_t AI_CombatTarget_22(void);
/* 0x00464260 HumanView_Init -> HumanView_Init */
void HumanView_Init(void);
/* 0x00464470 HumanView_LoadParameters -> HumanView_LoadParameters */
void HumanView_LoadParameters(int param_1);
/* 0x004644a0 HumanView_Setup -> HumanView_Setup */
void HumanView_Setup(void);
/* 0x00464580 HumanView_Process -> HumanView_Process */
void HumanView_Process(int param_1, uint32_t *param_2);
/* 0x00464600 AI_CheckVisibility_22 -> AI_CheckVisibility_22 */
void AI_CheckVisibility_22(void);
/* 0x00464610 AI_CheckHearing_22 -> AI_CheckHearing_22 */
uint32_t AI_CheckHearing_22(uint32_t param_1);
/* 0x00464660 AI_005011 -> AI_005011 */
void AI_005011(int param_1);
/* 0x00464700 AI_MoveToNode_22 -> AI_MoveToNode_22 */
void AI_MoveToNode_22(int param_1);
/* 0x00464710 AI_TakeCover_22 -> AI_TakeCover_22 */
void AI_TakeCover_22(int param_1);
/* 0x00464720 AI_UpdateOrders_22 -> AI_UpdateOrders_22 */
void AI_UpdateOrders_22(int param_1);
/* 0x00464750 AI_AlertAllies_22 -> AI_AlertAllies_22 */
void AI_AlertAllies_22(int param_1);
/* 0x00464770 AI_SelectTarget_22 -> AI_SelectTarget_22 */
void AI_SelectTarget_22(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004647a0 AI_UpdateSensors_22 -> AI_UpdateSensors_22 */
void AI_UpdateSensors_22(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004647d0 AI_CheckSector_22 -> AI_CheckSector_22 */
uint16_t AI_CheckSector_22(int param_1);
/* 0x00464800 AI_UpdatePatrol_23 -> AI_UpdatePatrol_23 */
void AI_UpdatePatrol_23(int param_1, float param_2);
/* 0x00464bd0 AI_CombatTarget_23 -> AI_CombatTarget_23 */
void AI_CombatTarget_23(int param_1, float param_2);
/* 0x00465700 AI_CheckVisibility_23 -> AI_CheckVisibility_23 */
void AI_CheckVisibility_23(int param_1);
/* 0x00465730 AI_CheckHearing_23 -> AI_CheckHearing_23 */
void AI_CheckHearing_23(int param_1);
/* 0x00465800 AI_FireWeapon_23 -> AI_FireWeapon_23 */
void AI_FireWeapon_23(uint32_t *param_1, int param_2);
/* 0x00465820 AI_MoveToNode_23 -> AI_MoveToNode_23 */
void AI_MoveToNode_23(uint32_t *param_1, int param_2);
/* 0x00465880 AI_TakeCover_23 -> AI_TakeCover_23 */
void AI_TakeCover_23(uint32_t *param_1, int param_2);
/* 0x004658a0 AI_UpdateOrders_23 -> AI_UpdateOrders_23 */
void AI_UpdateOrders_23(uint32_t *param_1, int param_2);
/* 0x004658d0 AI_AlertAllies_23 -> AI_AlertAllies_23 */
void AI_AlertAllies_23(int param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x00465910 AI_SelectTarget_23 -> AI_SelectTarget_23 */
void AI_SelectTarget_23(int param_1);
/* 0x00465920 AI_UpdateSensors_23 -> AI_UpdateSensors_23 */
void AI_UpdateSensors_23(int param_1, uint32_t *param_2, uint8_t param_3);
/* 0x00465970 AI_CheckSector_23 -> AI_CheckSector_23 */
void AI_CheckSector_23(int param_1, uint32_t param_2, uint32_t param_3, int param_4);
/* 0x004659b0 AI_UpdatePatrol_24 -> AI_UpdatePatrol_24 */
void AI_UpdatePatrol_24(int param_1, uint32_t param_2);
/* 0x004659d0 AI_CombatTarget_24 -> AI_CombatTarget_24 */
void AI_CombatTarget_24(int param_1);
/* 0x004659e0 Human_TaskViewReset -> Human_TaskViewReset */
void Human_TaskViewReset(HumanPlayer* human);
/* 0x00465a10 HumanAttach_Init -> HumanAttach_Init */
void HumanAttach_Init(void);
/* 0x00465b00 HumanAttach_LoadParameters -> HumanAttach_LoadParameters */
void HumanAttach_LoadParameters(void);
/* 0x00465bb0 HumanAttach_OnEvent -> HumanAttach_OnEvent */
void HumanAttach_OnEvent(void);
/* 0x00465bc0 DeathZone_Init -> DeathZone_Init */
void DeathZone_Init(void);
/* 0x00465cd0 DeathZone_LoadParameters -> DeathZone_LoadParameters */
void DeathZone_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00465de0 DeathZone_Setup -> DeathZone_Setup */
void DeathZone_Setup(void);
/* 0x00465f50 DeathZone_Process -> DeathZone_Process */
void DeathZone_Process(void);
/* 0x00466210 AI_CheckVisibility_24 -> AI_CheckVisibility_24 */
void AI_CheckVisibility_24(void);
/* 0x00466230 AI_CheckHearing_24 -> AI_CheckHearing_24 */
uint8_t AI_CheckHearing_24(void);
/* 0x00466240 AI_FireWeapon_24 -> AI_FireWeapon_24 */
void AI_FireWeapon_24(void);
/* 0x00466360 ComputerStartup_Process -> ComputerStartup_Process */
void ComputerStartup_Process(int param_1);
/* 0x00466390 AI_MoveToNode_24 -> AI_MoveToNode_24 */
void AI_MoveToNode_24(void);
/* 0x004663b0 AI_TakeCover_24 -> AI_TakeCover_24 */
void AI_TakeCover_24(int param_1);
/* 0x004663d0 ComputerStartup_Init -> ComputerStartup_Init */
void ComputerStartup_Init(void);
/* 0x00466480 ComputerStartup_Update -> ComputerStartup_Update */
void ComputerStartup_Update(void);
/* 0x00466c90 ComputerStartup_Setup -> ComputerStartup_Setup */
void ComputerStartup_Setup(int param_1);
/* 0x00466cf0 ComputerStartup_LoadParameters -> ComputerStartup_LoadParameters */
void ComputerStartup_LoadParameters(void);
/* 0x00466e10 AI_UpdateOrders_24 -> AI_UpdateOrders_24 */
void AI_UpdateOrders_24(void);
/* 0x00466e40 DefineComputerLimit_Init -> DefineComputerLimit_Init */
void DefineComputerLimit_Init(void);
/* 0x00466f40 DefineComputerLimit_Update -> DefineComputerLimit_Update */
void DefineComputerLimit_Update(void);
/* 0x00466f60 DefineComputerLimit_OnEvent -> DefineComputerLimit_OnEvent */
int DefineComputerLimit_OnEvent(void);
/* 0x00466f70 DefineComputerObjective_Init -> DefineComputerObjective_Init */
void DefineComputerObjective_Init(void);
/* 0x00467410 DefineComputerObjective_LoadParameters -> DefineComputerObjective_LoadParameters */
void DefineComputerObjective_LoadParameters(void);
/* 0x004674d0 DefineComputerObjective_Setup -> DefineComputerObjective_Setup */
void DefineComputerObjective_Setup(int param_1);
/* 0x00467530 DefineComputerObjective_Process -> DefineComputerObjective_Process */
void DefineComputerObjective_Process(int param_1);
/* 0x00467570 AI_AlertAllies_24 -> AI_AlertAllies_24 */
void AI_AlertAllies_24(void);
/* 0x00467590 AI_SelectTarget_24 -> AI_SelectTarget_24 */
int AI_SelectTarget_24(int param_1);
/* 0x004675b0 AI_UpdateSensors_24 -> AI_UpdateSensors_24 */
void AI_UpdateSensors_24(float *param_1, float *param_2, int param_3);
/* 0x00467620 AI_CheckSector_24 -> AI_CheckSector_24 */
void AI_CheckSector_24(float *param_1, float *param_2, double *param_3, uint32_t *param_4);
/* 0x00467700 ComputerObject_Init -> ComputerObject_Init */
void ComputerObject_Init(void);
/* 0x00467800 ComputerObject_Setup -> ComputerObject_Setup */
void ComputerObject_Setup(void);
/* 0x00467900 AI_UpdatePatrol_25 -> AI_UpdatePatrol_25 */
void AI_UpdatePatrol_25(int *param_1);
/* 0x00467970 ComputerObject_LoadParameters -> ComputerObject_LoadParameters */
void ComputerObject_LoadParameters(void);
/* 0x00467d30 AI_CombatTarget_25 -> AI_CombatTarget_25 */
void AI_CombatTarget_25(void);
/* 0x00467d70 AI_CheckVisibility_25 -> AI_CheckVisibility_25 */
void AI_CheckVisibility_25(void);
/* 0x00467d90 AI_CheckHearing_25 -> AI_CheckHearing_25 */
void AI_CheckHearing_25(void);
/* 0x00467db0 AI_FireWeapon_25 -> AI_FireWeapon_25 */
void AI_FireWeapon_25(void);
/* 0x00467dd0 AI_MoveToNode_25 -> AI_MoveToNode_25 */
void AI_MoveToNode_25(void);
/* 0x00467df0 AI_TakeCover_25 -> AI_TakeCover_25 */
void AI_TakeCover_25(uint32_t *param_1);
/* 0x00467f30 AI_UpdateOrders_25 -> AI_UpdateOrders_25 */
void AI_UpdateOrders_25(uint32_t *param_1);
/* 0x004680b0 AI_RmS -> AI_RmS */
void AI_RmS(uint32_t *param_1);
/* 0x004682e0 AI_AlertAllies_25 -> AI_AlertAllies_25 */
void AI_AlertAllies_25(int param_1, uint32_t param_2);
/* 0x004682f0 ComputerHilight_Init -> ComputerHilight_Init */
void ComputerHilight_Init(void);
/* 0x00468570 ComputerHilight_LoadParameters -> ComputerHilight_LoadParameters */
void ComputerHilight_LoadParameters(int param_1);
/* 0x00468690 AI_SelectTarget_25 -> AI_SelectTarget_25 */
int AI_SelectTarget_25(int param_1);
/* 0x004687a0 ComputerHilight_Setup -> ComputerHilight_Setup */
void ComputerHilight_Setup(void);
/* 0x00468870 AI_UpdateSensors_25 -> AI_UpdateSensors_25 */
void AI_UpdateSensors_25(void);
/* 0x004688a0 AI_CheckSector_25 -> AI_CheckSector_25 */
uint32_t AI_CheckSector_25(void);
/* 0x004688b0 ComputerLog_Init -> ComputerLog_Init */
void ComputerLog_Init(void);
/* 0x00468920 ComputerLog_LoadParameters -> ComputerLog_LoadParameters */
void ComputerLog_LoadParameters(void);
/* 0x00468bc0 ComputerLog_Setup -> ComputerLog_Setup */
void ComputerLog_Setup(void);
/* 0x00468da0 AI_UpdatePatrol_26 -> AI_UpdatePatrol_26 */
void AI_UpdatePatrol_26(void);
/* 0x00468db0 AI_CombatTarget_26 -> AI_CombatTarget_26 */
void AI_CombatTarget_26(uint32_t param_1);
/* 0x00468dd0 AI_CheckVisibility_26 -> AI_CheckVisibility_26 */
void AI_CheckVisibility_26(void);
/* 0x00468de0 AI_CheckHearing_26 -> AI_CheckHearing_26 */
void AI_CheckHearing_26(uint32_t param_1);
/* 0x00468e20 ComputerObjectives_Init -> ComputerObjectives_Init */
void ComputerObjectives_Init(void);
/* 0x00468e90 ComputerObjectives_LoadParameters -> ComputerObjectives_LoadParameters */
void ComputerObjectives_LoadParameters(void);
/* 0x00469110 ComputerObjectives_Process -> ComputerObjectives_Process */
void ComputerObjectives_Process(void);
/* 0x00469420 AI_FireWeapon_26 -> AI_FireWeapon_26 */
void AI_FireWeapon_26(void);
/* 0x00469430 AI_MoveToNode_26 -> AI_MoveToNode_26 */
void AI_MoveToNode_26(uint32_t param_1);
/* 0x00469450 AI_TakeCover_26 -> AI_TakeCover_26 */
int AI_TakeCover_26(int param_1, int param_2, uint32_t param_3, int param_4, uint32_t param_5, char *param_6, uint32_t param_7, int param_8);
/* 0x004696b0 ComputerMap_Init -> ComputerMap_Init */
void ComputerMap_Init(void);
/* 0x00469740 ComputerMap_LoadParameters -> ComputerMap_LoadParameters */
void ComputerMap_LoadParameters(void);
/* 0x00469cc0 AI_UpdateOrders_26 -> AI_UpdateOrders_26 */
void AI_UpdateOrders_26(uint32_t param_1, int param_2);
/* 0x00469d00 AI_AlertAllies_26 -> AI_AlertAllies_26 */
void AI_AlertAllies_26(int param_1, double *param_2);
/* 0x00469da0 AI_SelectTarget_26 -> AI_SelectTarget_26 */
void AI_SelectTarget_26(void);
/* 0x00469fe0 mapcomp_05 -> mapcomp_05 */
void mapcomp_05(int param_1, float param_2);
/* 0x0046a080 AI_UpdateSensors_26 -> AI_UpdateSensors_26 */
void AI_UpdateSensors_26(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x0046a0a0 AI_CheckSector_26 -> AI_CheckSector_26 */
void AI_CheckSector_26(int param_1);
/* 0x0046a200 AI_UpdatePatrol_27 -> AI_UpdatePatrol_27 */
void AI_UpdatePatrol_27(void);
/* 0x0046a2d0 AI_CombatTarget_27 -> AI_CombatTarget_27 */
void AI_CombatTarget_27(uint32_t param_1);
/* 0x0046a330 AI_CheckVisibility_27 -> AI_CheckVisibility_27 */
void AI_CheckVisibility_27(int param_1);
/* 0x0046a970 AI_CheckHearing_27 -> AI_CheckHearing_27 */
uint32_t AI_CheckHearing_27(uint32_t param_1, double *param_2);
/* 0x0046a9f0 AI_FireWeapon_27 -> AI_FireWeapon_27 */
void AI_FireWeapon_27(int param_1, int param_2);
/* 0x0046aad0 AI_MoveToNode_27 -> AI_MoveToNode_27 */
void AI_MoveToNode_27(void);
/* 0x0046aaf0 AI_TakeCover_27 -> AI_TakeCover_27 */
void AI_TakeCover_27(uint32_t param_1);
/* 0x0046ab10 AI_UpdateOrders_27 -> AI_UpdateOrders_27 */
uint32_t AI_UpdateOrders_27(void);
/* 0x0046ab20 AI_AlertAllies_27 -> AI_AlertAllies_27 */
uint8_t AI_AlertAllies_27(void);
/* 0x0046ab30 AI_SelectTarget_27 -> AI_SelectTarget_27 */
uint16_t AI_SelectTarget_27(void);
/* 0x0046ab40 AI_UpdateSensors_27 -> AI_UpdateSensors_27 */
void AI_UpdateSensors_27(void);
/* 0x0046ab50 AI_CheckSector_27 -> AI_CheckSector_27 */
void AI_CheckSector_27(uint32_t param_1);
/* 0x0046ab60 ComputerMenu_Init -> ComputerMenu_Init */
void ComputerMenu_Init(void);
/* 0x0046ac30 ComputerMenu_LoadParameters -> ComputerMenu_LoadParameters */
void ComputerMenu_LoadParameters(void);
/* 0x0046ae30 ComputerMenu_Setup -> ComputerMenu_Setup */
void ComputerMenu_Setup(void);
/* 0x0046af90 AI_Computer -> AI_Computer */
void AI_Computer(void);
/* 0x0046afb0 AI_NoNewFunctionForMenu -> AI_NoNewFunctionForMenu */
void AI_NoNewFunctionForMenu(int param_1);
/* 0x0046b030 AI_UpdatePatrol_28 -> AI_UpdatePatrol_28 */
uint32_t AI_UpdatePatrol_28(void);
/* 0x0046b040 AI_CombatTarget_28 -> AI_CombatTarget_28 */
uint32_t AI_CombatTarget_28(void);
/* 0x0046b050 AI_CheckVisibility_28 -> AI_CheckVisibility_28 */
uint32_t AI_CheckVisibility_28(void);
/* 0x0046b060 AI_CheckHearing_28 -> AI_CheckHearing_28 */
void AI_CheckHearing_28(uint32_t param_1);
/* 0x0046b070 AI_ComputerComputerRes -> AI_ComputerComputerRes */
void AI_ComputerComputerRes(void);
/* 0x0046b310 AI_FireWeapon_28 -> AI_FireWeapon_28 */
void AI_FireWeapon_28(void);
/* 0x0046b4d0 AI_MoveToNode_28 -> AI_MoveToNode_28 */
uint32_t * AI_MoveToNode_28(void);
/* 0x0046b4e0 AI_TakeCover_28 -> AI_TakeCover_28 */
void AI_TakeCover_28(uint32_t param_1);
/* 0x0046b4f0 AI_UpdateOrders_28 -> AI_UpdateOrders_28 */
uint32_t AI_UpdateOrders_28(void);
/* 0x0046b500 AI_AlertAllies_28 -> AI_AlertAllies_28 */
uint32_t AI_AlertAllies_28(void);
/* 0x0046b510 ComputerButtonItem_Init -> ComputerButtonItem_Init */
void ComputerButtonItem_Init(void);
/* 0x0046b5c0 ComputerButtonItem_Process -> ComputerButtonItem_Process */
void ComputerButtonItem_Process(int param_1);
/* 0x0046b650 ComputerButtonItem_OnEvent -> ComputerButtonItem_OnEvent */
void ComputerButtonItem_OnEvent(void);
/* 0x0046b660 ComputerButtonItem_Process_2 -> ComputerButtonItem_Process_2 */
int ComputerButtonItem_Process_2(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, char param_7, float param_8, uint32_t param_9, uint8_t param_10, uint32_t param_11, char *param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15, uint32_t param_16);
/* 0x0046b7d0 AI_SelectTarget_28 -> AI_SelectTarget_28 */
void AI_SelectTarget_28(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x0046b7f0 ComputerTextItem_Init -> ComputerTextItem_Init */
void ComputerTextItem_Init(void);
/* 0x0046b890 ComputerTextItem_Process -> ComputerTextItem_Process */
void ComputerTextItem_Process(int param_1);
/* 0x0046b960 ComputerTextItem_OnEvent -> ComputerTextItem_OnEvent */
void ComputerTextItem_OnEvent(void);
/* 0x0046b970 ComputerTextItem_Process_2 -> ComputerTextItem_Process_2 */
int ComputerTextItem_Process_2(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, char param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13);
/* 0x0046ba60 Computer_Init -> Computer_Init */
void Computer_Init(void);
/* 0x0046bb10 Computer_LoadParameters -> Computer_LoadParameters */
void Computer_LoadParameters(void);
/* 0x0046bd50 Computer_Setup -> Computer_Setup */
void Computer_Setup(void);
/* 0x0046bf80 Computer_Process -> Computer_Process */
void Computer_Process(void);
/* 0x0046c010 AI_UpdateSensors_28 -> AI_UpdateSensors_28 */
void AI_UpdateSensors_28(void);
/* 0x0046c020 AI_CheckSector_28 -> AI_CheckSector_28 */
uint32_t AI_CheckSector_28(uint32_t param_1);
/* 0x0046c050 AI_UpdatePatrol_29 -> AI_UpdatePatrol_29 */
void AI_UpdatePatrol_29(void);
/* 0x0046c060 AI_CombatTarget_29 -> AI_CombatTarget_29 */
uint32_t AI_CombatTarget_29(void);
/* 0x0046c070 AI_CheckVisibility_29 -> AI_CheckVisibility_29 */
uint32_t AI_CheckVisibility_29(void);
/* 0x0046c090 AI_CheckHearing_29 -> AI_CheckHearing_29 */
int AI_CheckHearing_29(void);
/* 0x0046c0a0 AI_FireWeapon_29 -> AI_FireWeapon_29 */
void AI_FireWeapon_29(uint32_t param_1);
/* 0x0046c0b0 AI_MoveToNode_29 -> AI_MoveToNode_29 */
uint32_t AI_MoveToNode_29(void);
/* 0x0046c0c0 GenericPickup_Init -> GenericPickup_Init */
void GenericPickup_Init(void);
/* 0x0046c3c0 GenericPickup_LoadParameters -> GenericPickup_LoadParameters */
void GenericPickup_LoadParameters(int param_1);
/* 0x0046c410 GenericPickup_Setup -> GenericPickup_Setup */
void GenericPickup_Setup(int param_1);
/* 0x0046c490 GenericPickup_Process -> GenericPickup_Process */
void GenericPickup_Process(int param_1);
/* 0x0046c570 GenericPickup_Update -> GenericPickup_Update */
void GenericPickup_Update(void);
/* 0x0046c5d0 GenericPickup_OnEvent -> GenericPickup_OnEvent */
void GenericPickup_OnEvent(void);
/* 0x0046c630 GenericPickup_Action -> GenericPickup_Action */
void GenericPickup_Action(int param_1, int param_2);
/* 0x0046c750 GenericPickup_Cleanup -> GenericPickup_Cleanup */
void GenericPickup_Cleanup(int param_1, uint32_t param_2);
/* 0x0046c8a0 GenericPickup_Cleanup_2 -> GenericPickup_Cleanup_2 */
void GenericPickup_Cleanup_2(int param_1, uint32_t param_2);
/* 0x0046c950 AI_TakeCover_29 -> AI_TakeCover_29 */
void AI_TakeCover_29(void);
/* 0x0046c970 AI_UpdateOrders_29 -> AI_UpdateOrders_29 */
uint8_t AI_UpdateOrders_29(void);
/* 0x0046c980 AI_AlertAllies_29 -> AI_AlertAllies_29 */
int AI_AlertAllies_29(uint32_t param_1, uint32_t *param_2, uint32_t param_3, uint32_t param_4);
/* 0x0046cb70 GunPickup_Init -> GunPickup_Init */
void GunPickup_Init(void);
/* 0x0046cd20 GunPickup_LoadParameters -> GunPickup_LoadParameters */
void GunPickup_LoadParameters(int param_1);
/* 0x0046cea0 GunPickup_Setup -> GunPickup_Setup */
void GunPickup_Setup(int param_1);
/* 0x0046d170 GunPickup_Update -> GunPickup_Update */
void GunPickup_Update(void);
/* 0x0046d1d0 GunPickup_OnEvent -> GunPickup_OnEvent */
void GunPickup_OnEvent(void);
/* 0x0046d230 GunPickup_Action -> GunPickup_Action */
void GunPickup_Action(int param_1, int *param_2);
/* 0x0046d3e0 AI_SelectTarget_29 -> AI_SelectTarget_29 */
void AI_SelectTarget_29(void);
/* 0x0046d410 AI_UpdateSensors_29 -> AI_UpdateSensors_29 */
uint8_t AI_UpdateSensors_29(void);
/* 0x0046d420 AmmoPickup_Init -> AmmoPickup_Init */
void AmmoPickup_Init(void);
/* 0x0046d5f0 AmmoPickup_LoadParameters -> AmmoPickup_LoadParameters */
void AmmoPickup_LoadParameters(int param_1);
/* 0x0046d760 AmmoPickup_Setup -> AmmoPickup_Setup */
void AmmoPickup_Setup(int param_1);
/* 0x0046d8d0 AmmoPickup_Process -> AmmoPickup_Process */
void AmmoPickup_Process(void);
/* 0x0046d930 AmmoPickup_Update -> AmmoPickup_Update */
void AmmoPickup_Update(void);
/* 0x0046d990 AmmoPickup_OnEvent -> AmmoPickup_OnEvent */
void AmmoPickup_OnEvent(int param_1, int *param_2);
/* 0x0046db10 AI_CheckSector_29 -> AI_CheckSector_29 */
void AI_CheckSector_29(void);
/* 0x0046db40 AddAmmo_Init -> AddAmmo_Init */
void AddAmmo_Init(void);
/* 0x0046dc40 AddAmmo_LoadParameters -> AddAmmo_LoadParameters */
void AddAmmo_LoadParameters(int param_1);
/* 0x0046dce0 AddAmmo_OnEvent -> AddAmmo_OnEvent */
void AddAmmo_OnEvent(void);
/* 0x0046dd00 Gunx2_Init -> Gunx2_Init */
void Gunx2_Init(void);
/* 0x0046df00 AI_UpdatePatrol_30 -> AI_UpdatePatrol_30 */
void AI_UpdatePatrol_30(void);
/* 0x0046df10 KnifeStab_Init -> KnifeStab_Init */
void KnifeStab_Init(void);
/* 0x0046dfb0 KnifeStab_Update -> KnifeStab_Update */
uint32_t KnifeStab_Update(uint32_t *param_1, uint32_t param_2);
/* 0x0046e200 AI_CombatTarget_30 -> AI_CombatTarget_30 */
void AI_CombatTarget_30(void);
/* 0x0046e370 AIStationaryGunHolder_Init -> AIStationaryGunHolder_Init */
void AIStationaryGunHolder_Init(void);
/* 0x0046e5b0 AIStationaryGunHolder_LoadParameters -> AIStationaryGunHolder_LoadParameters */
void AIStationaryGunHolder_LoadParameters(void);
/* 0x0046e7a0 AIStationaryGunHolder_Setup -> AIStationaryGunHolder_Setup */
void AIStationaryGunHolder_Setup(int param_1);
/* 0x0046e7f0 AIStationaryGunHolder_Process -> AIStationaryGunHolder_Process */
void AIStationaryGunHolder_Process(int param_1);
/* 0x0046eaa0 AI_CheckVisibility_30 -> AI_CheckVisibility_30 */
void AI_CheckVisibility_30(void);
/* 0x0046ead0 AI_CheckHearing_30 -> AI_CheckHearing_30 */
uint32_t AI_CheckHearing_30(void);
/* 0x0046eae0 AIStationaryGun_LoadParameters -> AIStationaryGun_LoadParameters */
void AIStationaryGun_LoadParameters(int param_1, uint32_t *param_2);
/* 0x0046ec90 AI_FireWeapon_30 -> AI_FireWeapon_30 */
void AI_FireWeapon_30(int param_1, float *param_2);
/* 0x0046f2b0 AIStationaryGun_Init -> AIStationaryGun_Init */
void AIStationaryGun_Init(void);
/* 0x0046f390 AIStationaryGun_Setup -> AIStationaryGun_Setup */
void AIStationaryGun_Setup(void);
/* 0x0046f950 AI_MoveToNode_30 -> AI_MoveToNode_30 */
void AI_MoveToNode_30(int param_1, uint8_t param_2);
/* 0x0046f9d0 AI_TakeCover_30 -> AI_TakeCover_30 */
void AI_TakeCover_30(int param_1);
/* 0x0046fa50 AIStationaryGun_Process -> AIStationaryGun_Process */
void AIStationaryGun_Process(uint32_t param_1, int *param_2);
/* 0x0046fba0 AIStationaryGun_Update -> AIStationaryGun_Update */
void AIStationaryGun_Update(void);
/* 0x00470050 Weapon_ReloadClip -> Weapon_ReloadClip */
void Weapon_ReloadClip(int param_1);
/* 0x004703f0 Weapon_ComputeAccuracy -> Weapon_ComputeAccuracy */
void Weapon_ComputeAccuracy(void);
/* 0x00470400 Weapon_EjectShell -> Weapon_EjectShell */
uint16_t Weapon_EjectShell(void);
/* 0x00470410 Medipack_Init -> Medipack_Init */
void Medipack_Init(void);
/* 0x00470570 Medipack_Update -> Medipack_Update */
void Medipack_Update(uint32_t param_1, uint32_t *param_2);
/* 0x00470600 Medipack_OnEvent -> Medipack_OnEvent */
void Medipack_OnEvent(void);
/* 0x00470610 Binocular_Init -> Binocular_Init */
void Binocular_Init(void);
/* 0x00470760 Binocular_LoadParameters -> Binocular_LoadParameters */
void Binocular_LoadParameters(void);
/* 0x004707d0 Binocular_Setup -> Binocular_Setup */
void Binocular_Setup(int param_1);
/* 0x00470800 Binocular_Process -> Binocular_Process */
void Binocular_Process(int param_1);
/* 0x00470840 Binocular_Cleanup -> Binocular_Cleanup */
void Binocular_Cleanup(int param_1);
/* 0x00470890 Binocular_Update -> Binocular_Update */
void Binocular_Update(void);
/* 0x00470bc0 Binocular_Action -> Binocular_Action */
void Binocular_Action(int param_1, uint32_t param_2);
/* 0x00470ce0 Binocular_Cleanup_2 -> Binocular_Cleanup_2 */
void Binocular_Cleanup_2(uint32_t param_1, uint32_t *param_2);
/* 0x00470d70 Binocular_Cleanup_3 -> Binocular_Cleanup_3 */
void Binocular_Cleanup_3(void);
/* 0x00470eb0 Weapon_UpdateRecoil -> Weapon_UpdateRecoil */
void Weapon_UpdateRecoil(void);
/* 0x00470ec0 Weapon_UpdateMuzzleFlash -> Weapon_UpdateMuzzleFlash */
void Weapon_UpdateMuzzleFlash(float *param_1, float *param_2, float *param_3, double *param_4);
/* 0x00470f70 Weapon_UpdateBarrel -> Weapon_UpdateBarrel */
void Weapon_UpdateBarrel(int param_1, float *param_2, float *param_3, float param_4);
/* 0x00470fa0 BinocularOverlay_Init -> BinocularOverlay_Init */
void BinocularOverlay_Init(void);
/* 0x00471280 Weapon_EjectMagazine -> Weapon_EjectMagazine */
void Weapon_EjectMagazine(int param_1, uint32_t param_2);
/* 0x004712e0 Weapon_UpdateZoom -> Weapon_UpdateZoom */
void Weapon_UpdateZoom(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x00471310 BinocularOverlay_OnEvent -> BinocularOverlay_OnEvent */
void BinocularOverlay_OnEvent(int param_1);
/* 0x00471330 BinocularOverlay_Action -> BinocularOverlay_Action */
void BinocularOverlay_Action(void);
/* 0x004713c0 BinocularOverlay_Setup -> BinocularOverlay_Setup */
void BinocularOverlay_Setup(int param_1);
/* 0x00471400 BinocularOverlay_Cleanup -> BinocularOverlay_Cleanup */
void BinocularOverlay_Cleanup(int param_1);
/* 0x00471440 BinocularOverlay_Process -> BinocularOverlay_Process */
void BinocularOverlay_Process(int param_1);
/* 0x00471480 Weapon_WeaponsStringsBinocu -> Weapon_WeaponsStringsBinocu */
void Weapon_WeaponsStringsBinocu(int param_1);
/* 0x004719d0 Weapon_CycleFireMode -> Weapon_CycleFireMode */
void Weapon_CycleFireMode(float *param_1, uint32_t param_2);
/* 0x00471a90 Weapon_CheckAmmo -> Weapon_CheckAmmo */
void Weapon_CheckAmmo(float *param_1, float param_2, float param_3, float param_4, float param_5, float param_6, int param_7);
/* 0x00471b60 Weapon_FireBullet_2 -> Weapon_FireBullet_2 */
void Weapon_FireBullet_2(int param_1);
/* 0x00471f60 Weapon_ReloadClip_2 -> Weapon_ReloadClip_2 */
uint32_t Weapon_ReloadClip_2(int param_1, int param_2, float param_3, int param_4, int *param_5, int param_6, int param_7, int param_8);
/* 0x00472050 Weapon_ComputeAccuracy_2 -> Weapon_ComputeAccuracy_2 */
void Weapon_ComputeAccuracy_2(int param_1);
/* 0x00472440 BinocularOverlay_Update -> BinocularOverlay_Update */
void BinocularOverlay_Update(void);
/* 0x004725d0 Weapon_EjectShell_2 -> Weapon_EjectShell_2 */
void Weapon_EjectShell_2(void);
/* 0x00472600 Weapon_UpdateRecoil_2 -> Weapon_UpdateRecoil_2 */
uint32_t Weapon_UpdateRecoil_2(uint32_t param_1);
/* 0x00472630 Weapon_UpdateMuzzleFlash_2 -> Weapon_UpdateMuzzleFlash_2 */
void Weapon_UpdateMuzzleFlash_2(int param_1, uint32_t *param_2);
/* 0x00472650 Weapon_UpdateBarrel_2 -> Weapon_UpdateBarrel_2 */
void Weapon_UpdateBarrel_2(int param_1, uint32_t *param_2);
/* 0x00472670 GunCABarrel_Init -> GunCABarrel_Init */
void GunCABarrel_Init(void);
/* 0x004727f0 GunCABarrel_LoadParameters -> GunCABarrel_LoadParameters */
void GunCABarrel_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00472880 GunCABarrel_Update -> GunCABarrel_Update */
void GunCABarrel_Update(void);
/* 0x00472930 GunCABarrel_OnEvent -> GunCABarrel_OnEvent */
void GunCABarrel_OnEvent(int param_1, int param_2);
/* 0x00472a50 Weapon_EjectMagazine_2 -> Weapon_EjectMagazine_2 */
void Weapon_EjectMagazine_2(void);
/* 0x00472a70 GunSPAS12_Init -> GunSPAS12_Init */
void GunSPAS12_Init(void);
/* 0x00472cf0 Weapon_UpdateZoom_2 -> Weapon_UpdateZoom_2 */
void Weapon_UpdateZoom_2(void);
/* 0x00472d00 GunDRAGUNOV_Init -> GunDRAGUNOV_Init */
void GunDRAGUNOV_Init(void);
/* 0x00472e50 GunDRAGUNOV_LoadParameters -> GunDRAGUNOV_LoadParameters */
void GunDRAGUNOV_LoadParameters(int param_1, int param_2);
/* 0x00473040 GunDRAGUNOV_Setup -> GunDRAGUNOV_Setup */
void GunDRAGUNOV_Setup(void);
/* 0x00473330 GunDRAGUNOV_Process -> GunDRAGUNOV_Process */
void GunDRAGUNOV_Process(uint32_t param_1, uint32_t *param_2);
/* 0x004733e0 Weapon_CycleFireMode_2 -> Weapon_CycleFireMode_2 */
void Weapon_CycleFireMode_2(void);
/* 0x004733f0 GunM16A2_Init -> GunM16A2_Init */
void GunM16A2_Init(void);
/* 0x00473510 GunM16A2_LoadParameters -> GunM16A2_LoadParameters */
void GunM16A2_LoadParameters(void);
/* 0x00473620 GunM16A2_Setup -> GunM16A2_Setup */
void GunM16A2_Setup(void);
/* 0x00473790 GunM16A2_Process -> GunM16A2_Process */
void GunM16A2_Process(uint32_t param_1, uint32_t *param_2);
/* 0x004737f0 GunM16A2_Update -> GunM16A2_Update */
void GunM16A2_Update(void);
/* 0x00473980 Weapon_CheckAmmo_2 -> Weapon_CheckAmmo_2 */
void Weapon_CheckAmmo_2(void);
/* 0x00473990 GunMP5SD_Process -> GunMP5SD_Process */
void GunMP5SD_Process(int param_1);
/* 0x004739d0 GunMP5SD_Init -> GunMP5SD_Init */
void GunMP5SD_Init(void);
/* 0x00473af0 GunMP5SD_LoadParameters -> GunMP5SD_LoadParameters */
void GunMP5SD_LoadParameters(int param_1, float param_2);
/* 0x00473c80 GunMP5SD_Setup -> GunMP5SD_Setup */
void GunMP5SD_Setup(uint32_t param_1, uint32_t *param_2);
/* 0x00473d20 Weapon_FireBullet_3 -> Weapon_FireBullet_3 */
void Weapon_FireBullet_3(void);
/* 0x00473ed0 StationaryGun_Init -> StationaryGun_Init */
void StationaryGun_Init(void);
/* 0x00474190 StationaryGun_LoadParameters -> StationaryGun_LoadParameters */
void StationaryGun_LoadParameters(int param_1);
/* 0x00474360 Gun_SpawnRound -> Gun_SpawnRound */
void Gun_SpawnRound();
/* 0x00474420 Weapon_ComputeAccuracy_3 -> Weapon_ComputeAccuracy_3 */
void Weapon_ComputeAccuracy_3(int param_1);
/* 0x004748b0 Weapon_EjectShell_3 -> Weapon_EjectShell_3 */
void Weapon_EjectShell_3(int param_1);
/* 0x00474960 StationaryGun_Setup -> StationaryGun_Setup */
void StationaryGun_Setup(int param_1);
/* 0x00474ae0 Weapon_UpdateRecoil_3 -> Weapon_UpdateRecoil_3 */
void Weapon_UpdateRecoil_3(int param_1);
/* 0x00474e30 StationaryGun_Process -> StationaryGun_Process */
void StationaryGun_Process(void);
/* 0x00474f60 StationaryGun_Update -> StationaryGun_Update */
void StationaryGun_Update(int param_1, int *param_2);
/* 0x004752e0 Weapon_CycleFireMode_3 -> Weapon_CycleFireMode_3 */
void Weapon_CycleFireMode_3(void);
/* 0x00475300 Weapon_CheckAmmo_3 -> Weapon_CheckAmmo_3 */
uint16_t Weapon_CheckAmmo_3(void);
/* 0x00475310 Weapon_FireBullet_4 -> Weapon_FireBullet_4 */
void Weapon_FireBullet_4(int param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x00475340 Weapon_ReloadClip_4 -> Weapon_ReloadClip_4 */
void Weapon_ReloadClip_4(int param_1);
/* 0x00475370 Weapon_ComputeAccuracy_4 -> Weapon_ComputeAccuracy_4 */
uint8_t Weapon_ComputeAccuracy_4(int param_1);
/* 0x00475380 ProximityMine_Init -> ProximityMine_Init */
void ProximityMine_Init(void);
/* 0x004754c0 Binocular_Process_2 -> Binocular_Process_2 */
void Binocular_Process_2(int param_1, uint32_t *param_2);
/* 0x004755a0 ProximityMine_Setup -> ProximityMine_Setup */
void ProximityMine_Setup(void);
/* 0x00475900 ProximityMine_Process -> ProximityMine_Process */
void ProximityMine_Process(uint32_t param_1, uint32_t *param_2);
/* 0x00475960 ProximityMine_Update -> ProximityMine_Update */
void ProximityMine_Update(void);
/* 0x00475ab0 Weapon_EjectShell_4 -> Weapon_EjectShell_4 */
void Weapon_EjectShell_4(void);
/* 0x00475ac0 Mine_Init -> Mine_Init */
void Mine_Init(void);
/* 0x00475c10 Mine_LoadParameters -> Mine_LoadParameters */
void Mine_LoadParameters(int param_1, uint32_t param_2);
/* 0x00475d30 Mine_Setup -> Mine_Setup */
void Mine_Setup(uint32_t param_1);
/* 0x00475d90 Mine_Process -> Mine_Process */
void Mine_Process(int param_1, uint32_t param_2);
/* 0x00475df0 Mine_Update -> Mine_Update */
void Mine_Update(void);
/* 0x00475f30 Mine_OnEvent -> Mine_OnEvent */
void Mine_OnEvent(int param_1, int param_2);
/* 0x00476000 Weapon_UpdateRecoil_4 -> Weapon_UpdateRecoil_4 */
void Weapon_UpdateRecoil_4(void);
/* 0x00476030 Weapon_UpdateMuzzleFlash_4 -> Weapon_UpdateMuzzleFlash_4 */
uint32_t Weapon_UpdateMuzzleFlash_4(void);
/* 0x00476040 Mine_ProximityCreate -> Mine_ProximityCreate */
void Mine_ProximityCreate(void);
/* 0x00476110 M203_Init -> M203_Init */
void M203_Init(void);
/* 0x004761b0 M203_LoadParameters -> M203_LoadParameters */
void M203_LoadParameters(void);
/* 0x00476340 M203_Setup -> M203_Setup */
void M203_Setup(void);
/* 0x00476600 M203_Process -> M203_Process */
void M203_Process(int param_1);
/* 0x00476660 Weapon_UpdateBarrel_4 -> Weapon_UpdateBarrel_4 */
void Weapon_UpdateBarrel_4(void);
/* 0x00476670 Weapon_EjectMagazine_4 -> Weapon_EjectMagazine_4 */
int Weapon_EjectMagazine_4(uint32_t param_1, int param_2, int param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x00476730 Grenade_Init -> Grenade_Init */
void Grenade_Init(void);
/* 0x004768a0 Grenade_Action -> Grenade_Action */
void Grenade_Action(void);
/* 0x004769b0 Grenade_LoadParameters -> Grenade_LoadParameters */
void Grenade_LoadParameters(void);
/* 0x00476ac0 Grenade_Setup -> Grenade_Setup */
void Grenade_Setup(void);
/* 0x00476cc0 Weapon_GrenadeBnc1 -> Weapon_GrenadeBnc1 */
void Weapon_GrenadeBnc1(int param_1);
/* 0x00476d40 Weapon_UpdateZoom_4 -> Weapon_UpdateZoom_4 */
void Weapon_UpdateZoom_4(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x00476d90 Weapon_CycleFireMode_4 -> Weapon_CycleFireMode_4 */
void Weapon_CycleFireMode_4(int param_1);
/* 0x00476e50 Grenade_Process -> Grenade_Process */
void Grenade_Process(int param_1);
/* 0x00476eb0 Grenade_Update -> Grenade_Update */
void Grenade_Update(int param_1, uint32_t param_2);
/* 0x00476fa0 Grenade_OnEvent -> Grenade_OnEvent */
void Grenade_OnEvent(uint32_t param_1, int *param_2);
/* 0x00477010 Weapon_CheckAmmo_4 -> Weapon_CheckAmmo_4 */
void Weapon_CheckAmmo_4(void);
/* 0x00477030 Weapon_FireBullet_5 -> Weapon_FireBullet_5 */
uint8_t Weapon_FireBullet_5(void);
/* 0x00477040 Throwable_Create -> Throwable_Create */
void Throwable_Create(void);
/* 0x00477220 GunClip_Init -> GunClip_Init */
void GunClip_Init(void);
/* 0x00477600 GunClip_LoadParameters -> GunClip_LoadParameters */
void GunClip_LoadParameters(int param_1, uint32_t *param_2);
/* 0x004776c0 GunClip_Action -> GunClip_Action */
void GunClip_Action(void);
/* 0x004778e0 GunClip_OnEvent -> GunClip_OnEvent */
void GunClip_OnEvent(void);
/* 0x004779e0 Weapon_FlameUpdate -> Weapon_FlameUpdate */
void Weapon_FlameUpdate(WeaponContext* weaponCtx, int* state);
/* 0x00477a70 GunClip_Cleanup -> GunClip_Cleanup */
void GunClip_Cleanup(int param_1, uint32_t *param_2);
/* 0x00477b10 GunCABarrel_Cleanup -> GunCABarrel_Cleanup */
void GunCABarrel_Cleanup(void);
/* 0x00477bc0 Weapon_ReloadClip_5 -> Weapon_ReloadClip_5 */
void Weapon_ReloadClip_5(void);
/* 0x00477bf0 Weapon_ComputeAccuracy_5 -> Weapon_ComputeAccuracy_5 */
uint16_t Weapon_ComputeAccuracy_5(void);
/* 0x00477c00 Weapon_EjectShell_5 -> Weapon_EjectShell_5 */
uint8_t Weapon_EjectShell_5(void);
/* 0x00477c10 Weapon_FiringStateGet -> Weapon_FiringStateGet */
uint8_t Weapon_FiringStateGet(void);
/* 0x00477c20 Weapon_UpdateRecoil_5 -> Weapon_UpdateRecoil_5 */
uint8_t Weapon_UpdateRecoil_5(void);
/* 0x00477c30 Weapon_UpdateMuzzleFlash_5 -> Weapon_UpdateMuzzleFlash_5 */
uint8_t Weapon_UpdateMuzzleFlash_5(void);
/* 0x00477c40 Weapon_UpdateBarrel_5 -> Weapon_UpdateBarrel_5 */
uint8_t Weapon_UpdateBarrel_5(void);
/* 0x00477c50 Weapon_EntityCreate -> Weapon_EntityCreate */
WeaponEntityView* Weapon_EntityCreate(uint32_t p1, uint16_t objectType, uint32_t weaponType, uint32_t p4, uint8_t p5);
/* 0x00477d10 Weapon_EjectMagazine_5 -> Weapon_EjectMagazine_5 */
int Weapon_EjectMagazine_5(uint32_t param_1, uint32_t *param_2, uint32_t *param_3, uint32_t *param_4, uint32_t param_5);
/* 0x00477e30 Gun_Init -> Gun_Init */
void Gun_Init(void);
/* 0x00478290 Gun_Cleanup -> Gun_Cleanup */
void Gun_Cleanup(int param_1);
/* 0x004785f0 Weapon_UpdateZoom_5 -> Weapon_UpdateZoom_5 */
void Weapon_UpdateZoom_5(int param_1);
/* 0x00478640 Gun_Tick -> Gun_Tick */
void Gun_Tick(...);
/* 0x00478840 Gun_Setup -> Gun_Setup */
void Gun_Setup(int param_1);
/* 0x004788d0 Weapon_CycleFireMode_5 -> Weapon_CycleFireMode_5 */
void Weapon_CycleFireMode_5(int param_1);
/* 0x00478900 Weapon_FireUpdate -> Weapon_FireUpdate */
void Weapon_FireUpdate(WeaponContext* weaponCtx, int* state);
/* 0x00478970 Gun_Update -> Gun_Update */
void Gun_Update(int param_1);
/* 0x004789c0 Gun_OnEvent -> Gun_OnEvent */
void Gun_OnEvent(int param_1);
/* 0x00478a90 Gun_Cleanup_2 -> Gun_Cleanup_2 */
void Gun_Cleanup_2(int param_1, uint32_t *param_2);
/* 0x00478ba0 Gun_Fire -> Gun_Fire */
void Gun_Fire(...);
/* 0x00479780 Gun_FireMessage -> Gun_FireMessage */
void Gun_FireMessage(...);
/* 0x004798c0 Gun_MagFill -> Gun_MagFill */
void Gun_MagFill(...);
/* 0x00479990 Weapon_ReloadStart -> Weapon_ReloadStart */
void Weapon_ReloadStart(void* soldierCtx);
/* 0x00479b20 Gun_Cleanup_3 -> Gun_Cleanup_3 */
void Gun_Cleanup_3(void);
/* 0x00479ca0 Gun_Cleanup_4 -> Gun_Cleanup_4 */
void Gun_Cleanup_4(void);
/* 0x00479d20 Gun_Cleanup_5 -> Gun_Cleanup_5 */
void Gun_Cleanup_5(void);
/* 0x0047a260 Weapon_CheckAmmo_5 -> Weapon_CheckAmmo_5 */
void Weapon_CheckAmmo_5(void);
/* 0x0047a360 Weapon_FireBullet_6 -> Weapon_FireBullet_6 */
void Weapon_FireBullet_6(void);
/* 0x0047a540 Weapon_ReloadClip_6 -> Weapon_ReloadClip_6 */
void Weapon_ReloadClip_6(void);
/* 0x0047a750 Weapon_ComputeAccuracy_6 -> Weapon_ComputeAccuracy_6 */
void Weapon_ComputeAccuracy_6(void);
/* 0x0047a8e0 Gun_Cleanup_6 -> Gun_Cleanup_6 */
void Gun_Cleanup_6(int param_1, uint8_t *param_2);
/* 0x0047a960 Gun_Cleanup_7 -> Gun_Cleanup_7 */
void Gun_Cleanup_7(int param_1, uint32_t param_2);
/* 0x0047a9e0 Gun_Cleanup_8 -> Gun_Cleanup_8 */
void Gun_Cleanup_8(int param_1, uint32_t param_2);
/* 0x0047aa40 Weapon_EjectShell_6 -> Weapon_EjectShell_6 */
void Weapon_EjectShell_6(void);
/* 0x0047aab0 Weapon_UpdateRecoil_6 -> Weapon_UpdateRecoil_6 */
void Weapon_UpdateRecoil_6(float *param_1, float *param_2, int param_3, int param_4);
/* 0x0047abd0 GunShot_Update -> GunShot_Update */
void GunShot_Update(void);
/* 0x0047b100 Weapon_UpdateBarrel_6 -> Weapon_UpdateBarrel_6 */
uint8_t Weapon_UpdateBarrel_6(void);
/* 0x0047b110 Weapon_EjectMagazine_6 -> Weapon_EjectMagazine_6 */
int Weapon_EjectMagazine_6(uint32_t param_1, int param_2, int param_3);
/* 0x0047b170 Weapon_UpdateZoom_6 -> Weapon_UpdateZoom_6 */
void Weapon_UpdateZoom_6(int param_1, uint32_t param_2);
/* 0x0047b190 GunShot_TakeSlot -> GunShot_TakeSlot */
void GunShot_TakeSlot();
/* 0x0047b270 Weapon_CycleFireMode_6 -> Weapon_CycleFireMode_6 */
void Weapon_CycleFireMode_6(int param_1, uint32_t *param_2);
/* 0x0047b290 Weapon_CheckAmmo_6 -> Weapon_CheckAmmo_6 */
void Weapon_CheckAmmo_6(double *param_1, int param_2, int param_3, double *param_4);
/* 0x0047b4b0 GunShot_Init -> GunShot_Init */
void GunShot_Init(void);
/* 0x0047b560 GunShot_LoadParameters -> GunShot_LoadParameters */
void GunShot_LoadParameters(void);
/* 0x0047b690 GunShot_Setup -> GunShot_Setup */
void GunShot_Setup(void);
/* 0x0047b750 Gun_CastRound -> Gun_CastRound */
void Gun_CastRound();
/* 0x0047c330 Weapon_FireBullet_7 -> Weapon_FireBullet_7 */
void Weapon_FireBullet_7(uint32_t param_1);
/* 0x0047c3d0 GunShot_Process -> GunShot_Process */
void GunShot_Process(int param_1);
/* 0x0047c420 GunShot_Unpack -> GunShot_Unpack */
void GunShot_Unpack(...);
/* 0x0047c4a0 Weapon_ReloadClip_7 -> Weapon_ReloadClip_7 */
void Weapon_ReloadClip_7(void);
/* 0x0047c4c0 Weapon_ComputeAccuracy_7 -> Weapon_ComputeAccuracy_7 */
void Weapon_ComputeAccuracy_7(int param_1, uint32_t *param_2, uint32_t *param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x0047c560 Weapon_EjectShell_7 -> Weapon_EjectShell_7 */
void Weapon_EjectShell_7(int param_1);
/* 0x0047c610 Weapon_UpdateRecoil_7 -> Weapon_UpdateRecoil_7 */
void Weapon_UpdateRecoil_7(int param_1, int param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, double *param_11);
/* 0x0047c990 Weapon_UpdateMuzzleFlash_7 -> Weapon_UpdateMuzzleFlash_7 */
void Weapon_UpdateMuzzleFlash_7(int param_1, int param_2);
/* 0x0047cab0 Ammo_TypeOpen -> Ammo_TypeOpen */
void Ammo_TypeOpen(void);
/* 0x0047cad0 Define_AmmoType -> Define_AmmoType */
void Define_AmmoType(...);
/* 0x0047cce0 Weapon_UpdateBarrel_7 -> Weapon_UpdateBarrel_7 */
void Weapon_UpdateBarrel_7(void);
/* 0x0047ccf0 Weapon_LocalAmmo -> Weapon_LocalAmmo */
void Weapon_LocalAmmo(void);
/* 0x0047cd10 Weapon_EjectMagazine_7 -> Weapon_EjectMagazine_7 */
uint32_t * Weapon_EjectMagazine_7(int param_1);
/* 0x0047cd30 Weapon_UpdateZoom_7 -> Weapon_UpdateZoom_7 */
uint32_t Weapon_UpdateZoom_7(void);
/* 0x0047cd40 Weapon_CycleFireMode_7 -> Weapon_CycleFireMode_7 */
int * Weapon_CycleFireMode_7(int param_1);
/* 0x0047cd70 Weapon_CheckAmmo_7 -> Weapon_CheckAmmo_7 */
int Weapon_CheckAmmo_7(int param_1);
/* 0x0047cda0 Weapon_FireBullet_8 -> Weapon_FireBullet_8 */
uint32_t Weapon_FireBullet_8(uint32_t param_1);
/* 0x0047cdc0 Weapon_ReloadClip_8 -> Weapon_ReloadClip_8 */
uint8_t Weapon_ReloadClip_8(void);
/* 0x0047cdd0 Weapon_ComputeAccuracy_8 -> Weapon_ComputeAccuracy_8 */
void Weapon_ComputeAccuracy_8(uint32_t *param_1);
/* 0x0047ce00 Weapon_EjectShell_8 -> Weapon_EjectShell_8 */
void Weapon_EjectShell_8(int *param_1, int param_2, int param_3);
/* 0x0047ce70 Weapon_UpdateRecoil_8 -> Weapon_UpdateRecoil_8 */
void Weapon_UpdateRecoil_8(int *param_1, int param_2, int param_3);
/* 0x0047cee0 Weapon_UpdateMuzzleFlash_8 -> Weapon_UpdateMuzzleFlash_8 */
int * Weapon_UpdateMuzzleFlash_8(int *param_1, int param_2);
/* 0x0047cf10 Weapon_UpdateBarrel_8 -> Weapon_UpdateBarrel_8 */
uint32_t * Weapon_UpdateBarrel_8(void);
/* 0x0047cf20 Weapon_AmmoId -> Weapon_AmmoId */
void Weapon_AmmoId(void);
/* 0x0047cf50 Weapon_EjectMagazine_8 -> Weapon_EjectMagazine_8 */
void Weapon_EjectMagazine_8(void);
/* 0x0047cf70 BulletHole_Init -> BulletHole_Init */
void BulletHole_Init(void);
/* 0x0047d0b0 BulletHole_Setup -> BulletHole_Setup */
void BulletHole_Setup(void);
/* 0x0047d920 Weapon_UpdateZoom_8 -> Weapon_UpdateZoom_8 */
void Weapon_UpdateZoom_8(double *param_1, float *param_2, int param_3, float *param_4, int param_5, float param_6, float param_7, float param_8);
/* 0x0047e0c0 BulletHole_LoadParameters -> BulletHole_LoadParameters */
void BulletHole_LoadParameters(void);
/* 0x0047e6b0 Weapon_CycleFireMode_8 -> Weapon_CycleFireMode_8 */
void Weapon_CycleFireMode_8(void);
/* 0x0047e6f0 Weapon_CheckAmmo_8 -> Weapon_CheckAmmo_8 */
uint8_t Weapon_CheckAmmo_8(void);
/* 0x0047e700 FlashBang_Init -> FlashBang_Init */
void FlashBang_Init(void);
/* 0x0047e790 FlashBang_LoadParameters -> FlashBang_LoadParameters */
void FlashBang_LoadParameters(void);
/* 0x0047e820 FlashBang_Setup -> FlashBang_Setup */
void FlashBang_Setup(void);
/* 0x0047e970 Weapon_FireBullet_9 -> Weapon_FireBullet_9 */
void Weapon_FireBullet_9(void);
/* 0x0047e990 Weapon_ReloadClip_9 -> Weapon_ReloadClip_9 */
uint8_t Weapon_ReloadClip_9(void);
/* 0x0047e9a0 Weapon_ComputeAccuracy_9 -> Weapon_ComputeAccuracy_9 */
int Weapon_ComputeAccuracy_9(int *param_1, int *param_2, uint32_t param_3, uint32_t param_4);
/* 0x0047ead0 Weapon_EjectShell_9 -> Weapon_EjectShell_9 */
uint32_t Weapon_EjectShell_9(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x0047ebd0 Weapon_UpdateRecoil_9 -> Weapon_UpdateRecoil_9 */
void Weapon_UpdateRecoil_9(int param_1, float param_2);
/* 0x0047ed50 Weapon_UpdateMuzzleFlash_9 -> Weapon_UpdateMuzzleFlash_9 */
void Weapon_UpdateMuzzleFlash_9(int param_1);
/* 0x0047f0d0 Weapon_UpdateBarrel_9 -> Weapon_UpdateBarrel_9 */
int Weapon_UpdateBarrel_9(int param_1, uint32_t param_2, uint32_t param_3, int param_4, float param_5);
/* 0x0047f1b0 Weapon_EjectMagazine_9 -> Weapon_EjectMagazine_9 */
void Weapon_EjectMagazine_9(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x0047f200 Weapon_1006011 -> Weapon_1006011 */
void Weapon_1006011(int param_1);
/* 0x00480060 FX_VirmodelIsNull -> FX_VirmodelIsNull */
int FX_VirmodelIsNull(uint32_t param_1, uint32_t param_2, float param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004801b0 Explosion0_Init -> Explosion0_Init */
void Explosion0_Init(void);
/* 0x00480420 Explosion0_Cleanup -> Explosion0_Cleanup */
void Explosion0_Cleanup(void);
/* 0x004805b0 Explosion0_Cleanup_2 -> Explosion0_Cleanup_2 */
void Explosion0_Cleanup_2(int param_1);
/* 0x004805f0 Explosion0_Process -> Explosion0_Process */
void Explosion0_Process(void);
/* 0x004806e0 Explosion0_OnEvent -> Explosion0_OnEvent */
void Explosion0_OnEvent(void);
/* 0x00480790 Explosion0_Update -> Explosion0_Update */
void Explosion0_Update(void);
/* 0x00480f00 Explosion0_Action -> Explosion0_Action */
void Explosion0_Action(int param_1);
/* 0x00480f40 Explosion0_LoadParameters -> Explosion0_LoadParameters */
void Explosion0_LoadParameters(int param_1);
/* 0x00480fa0 FX_FragmentSimulate -> FX_FragmentSimulate */
void FX_FragmentSimulate(void);
/* 0x00480fe0 FX_SmokeEmit -> FX_SmokeEmit */
void FX_SmokeEmit(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15, uint32_t param_16);
/* 0x004810a0 FX_DebrisSpawn -> FX_DebrisSpawn */
int FX_DebrisSpawn(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, int *param_10, uint32_t param_11, char *param_12, int *param_13, uint32_t param_14, uint32_t param_15, float *param_16, uint32_t param_17, uint32_t param_18, uint32_t param_19, uint32_t param_20);
/* 0x00481340 FX_TrailUpdate -> FX_TrailUpdate */
uint16_t FX_TrailUpdate(void);
/* 0x00481350 FX_ExplosionSpawn_2 -> FX_ExplosionSpawn_2 */
uint32_t FX_ExplosionSpawn_2(void);
/* 0x00481360 FX_FireBallUpdate_2 -> FX_FireBallUpdate_2 */
void FX_FireBallUpdate_2(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, char *param_9);
/* 0x004813e0 ExplodeObject_Init -> ExplodeObject_Init */
void ExplodeObject_Init(void);
/* 0x00481780 ExplodeObject_LoadParameters -> ExplodeObject_LoadParameters */
void ExplodeObject_LoadParameters(void);
/* 0x00481970 ExplodeObject_Setup -> ExplodeObject_Setup */
void ExplodeObject_Setup(void);
/* 0x00481a60 FX_1009011 -> FX_1009011 */
void FX_1009011(int param_1);
/* 0x00481bc0 ExplodeObject_Process -> ExplodeObject_Process */
void ExplodeObject_Process(int param_1);
/* 0x00481c40 ExplodeObject_Update -> ExplodeObject_Update */
void ExplodeObject_Update(void);
/* 0x00481ea0 ExplodeObject_OnEvent -> ExplodeObject_OnEvent */
void ExplodeObject_OnEvent(void);
/* 0x00481f90 ExplodeObject_Action -> ExplodeObject_Action */
void ExplodeObject_Action(void);
/* 0x00481ff0 ExplodeObject_Cleanup -> ExplodeObject_Cleanup */
void ExplodeObject_Cleanup(void);
/* 0x00482050 ExplodeObject_Cleanup_2 -> ExplodeObject_Cleanup_2 */
void ExplodeObject_Cleanup_2(int param_1, int *param_2);
/* 0x00482390 ExplodeObject_Cleanup_3 -> ExplodeObject_Cleanup_3 */
void ExplodeObject_Cleanup_3(int param_1, int param_2);
/* 0x004824c0 ExplodeObject_Cleanup_4 -> ExplodeObject_Cleanup_4 */
void ExplodeObject_Cleanup_4(int param_1, uint32_t *param_2);
/* 0x00482560 FX_SmokeEmit_2 -> FX_SmokeEmit_2 */
void FX_SmokeEmit_2(void);
/* 0x00482580 FX_DebrisSpawn_2 -> FX_DebrisSpawn_2 */
uint32_t FX_DebrisSpawn_2(int param_1);
/* 0x004825c0 HumanCamera_Init -> HumanCamera_Init */
void HumanCamera_Init(void);
/* 0x00482880 FX_ErrorInHumancameraHu -> FX_ErrorInHumancameraHu */
void FX_ErrorInHumancameraHu(int param_1);
/* 0x004828d0 Human_FindNextCamera -> Human_FindNextCamera */
void Human_FindNextCamera(HumanPlayer* human);
/* 0x00482930 FX_ErrorInHumancameraHu_2 -> FX_ErrorInHumancameraHu_2 */
void FX_ErrorInHumancameraHu_2(int param_1);
/* 0x004829a0 FX_ErrorInHumancameraHu_3 -> FX_ErrorInHumancameraHu_3 */
void FX_ErrorInHumancameraHu_3(int param_1);
/* 0x00482a30 FX_TrailUpdate_2 -> FX_TrailUpdate_2 */
void FX_TrailUpdate_2(int param_1);
/* 0x00482a40 FX_ExplosionSpawn_3 -> FX_ExplosionSpawn_3 */
void FX_ExplosionSpawn_3(int param_1);
/* 0x00482c10 FX_FireBallUpdate_3 -> FX_FireBallUpdate_3 */
void FX_FireBallUpdate_3(int param_1);
/* 0x00482c30 FX_FragmentSimulate_3 -> FX_FragmentSimulate_3 */
void FX_FragmentSimulate_3(int param_1);
/* 0x00482d70 FX_SmokeEmit_3 -> FX_SmokeEmit_3 */
void FX_SmokeEmit_3(int param_1);
/* 0x00483100 FX_DebrisSpawn_3 -> FX_DebrisSpawn_3 */
void FX_DebrisSpawn_3(float *param_1, double *param_2, double *param_3);
/* 0x00483360 FX_TrailUpdate_3 -> FX_TrailUpdate_3 */
void FX_TrailUpdate_3(int param_1);
/* 0x00483390 FX_ExplosionSpawn_4 -> FX_ExplosionSpawn_4 */
void FX_ExplosionSpawn_4(int param_1);
/* 0x004834d0 FX_FireBallUpdate_4 -> FX_FireBallUpdate_4 */
void FX_FireBallUpdate_4(int param_1);
/* 0x00483a00 FX_FragmentSimulate_4 -> FX_FragmentSimulate_4 */
uint32_t FX_FragmentSimulate_4(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x00483d40 FX_SmokeEmit_4 -> FX_SmokeEmit_4 */
void FX_SmokeEmit_4(int param_1);
/* 0x00483d80 FX_DebrisSpawn_4 -> FX_DebrisSpawn_4 */
void FX_DebrisSpawn_4(int param_1);
/* 0x00483ec0 FX_TrailUpdate_4 -> FX_TrailUpdate_4 */
void FX_TrailUpdate_4(int param_1, float param_2, float param_3);
/* 0x00484450 FX_ExplosionSpawn_5 -> FX_ExplosionSpawn_5 */
void FX_ExplosionSpawn_5(int param_1);
/* 0x004849b0 FX_FireBallUpdate_5 -> FX_FireBallUpdate_5 */
void FX_FireBallUpdate_5(int param_1);
/* 0x00484cf0 FX_HumancameraHumanlist -> FX_HumancameraHumanlist */
void FX_HumancameraHumanlist(void);
/* 0x00484d30 FX_FragmentSimulate_5 -> FX_FragmentSimulate_5 */
uint8_t FX_FragmentSimulate_5(void);
/* 0x00484d40 FX_SmokeEmit_5 -> FX_SmokeEmit_5 */
void FX_SmokeEmit_5(uint32_t param_1, uint32_t param_2);
/* 0x00484d60 FX_ErrorInHumancameraHu_4 -> FX_ErrorInHumancameraHu_4 */
void FX_ErrorInHumancameraHu_4(int param_1, int param_2);
/* 0x00484dc0 FX_DebrisSpawn_5 -> FX_DebrisSpawn_5 */
void FX_DebrisSpawn_5(uint32_t param_1);
/* 0x00484e00 FX_ErrorInHumancameraHu_5 -> FX_ErrorInHumancameraHu_5 */
void FX_ErrorInHumancameraHu_5(int param_1);
/* 0x00484e60 Mission_Open -> Mission_Open */
void Mission_Open(char **ptr_file);
/* 0x00484f30 FX_Definemission -> FX_Definemission */
void FX_Definemission(void);
/* 0x00484f60 Define_Mission -> Define_Mission */
void Define_Mission(...);
/* 0x00485140 FX_TrailUpdate_5 -> FX_TrailUpdate_5 */
void FX_TrailUpdate_5(void);
/* 0x00485150 FX_LocalMissions -> FX_LocalMissions */
void FX_LocalMissions(void);
/* 0x00485170 FX_ExplosionSpawn_6 -> FX_ExplosionSpawn_6 */
uint32_t * FX_ExplosionSpawn_6(int param_1);
/* 0x004851b0 GameScreen_Init -> GameScreen_Init */
void GameScreen_Init(void);
/* 0x004852f0 GameScreen_Update -> GameScreen_Update */
void GameScreen_Update(void);
/* 0x00485300 GameScreen_OnEvent -> GameScreen_OnEvent */
void GameScreen_OnEvent(uint32_t param_1);
/* 0x00485320 GameScreen_Process -> GameScreen_Process */
uint32_t GameScreen_Process(int param_1);
/* 0x00485330 StatusMessage_Init -> StatusMessage_Init */
void StatusMessage_Init(void);
/* 0x004855f0 StatusMessage_LoadParameters -> StatusMessage_LoadParameters */
void StatusMessage_LoadParameters(int param_1);
/* 0x004856d0 StatusMessage_Setup -> StatusMessage_Setup */
void StatusMessage_Setup(int param_1);
/* 0x00485750 StatusMessage_Process -> StatusMessage_Process */
void StatusMessage_Process(int param_1);
/* 0x00485770 StatusMessage_Update_2 -> StatusMessage_Update_2 */
void StatusMessage_Update_2(void);
/* 0x00485870 StatusMessage_OnEvent_2 -> StatusMessage_OnEvent_2 */
void StatusMessage_OnEvent_2(void);
/* 0x00485950 FX_FireBallUpdate_6 -> FX_FireBallUpdate_6 */
void FX_FireBallUpdate_6(void);
/* 0x00485970 StatusMessage_ShowFull -> StatusMessage_ShowFull */
void StatusMessage_ShowFull(int timer, char* message, char* sprite, int styleByte);
/* 0x00485a40 StatusMessageScreen_Init -> StatusMessageScreen_Init */
void StatusMessageScreen_Init(void);
/* 0x00485ad0 StatusMessageScreen_ClearMessages -> StatusMessageScreen_ClearMessages */
void StatusMessageScreen_ClearMessages(void);
/* 0x00485b80 StatusMessageScreen_OnEvent -> StatusMessageScreen_OnEvent */
void StatusMessageScreen_OnEvent(int param_1, int param_2);
/* 0x00485d00 FX_FragmentSimulate_6 -> FX_FragmentSimulate_6 */
uint32_t FX_FragmentSimulate_6(int param_1, int param_2);
/* 0x00485d20 FX_SmokeEmit_6 -> FX_SmokeEmit_6 */
void FX_SmokeEmit_6(int param_1, int param_2);
/* 0x00485db0 FX_DebrisSpawn_6 -> FX_DebrisSpawn_6 */
void FX_DebrisSpawn_6(void);
/* 0x00485fb0 FX_Font4Fnt -> FX_Font4Fnt */
uint32_t FX_Font4Fnt(uint32_t param_1, uint32_t param_2);
/* 0x00486020 StatusMessageScreen_LoadParameters -> StatusMessageScreen_LoadParameters */
void StatusMessageScreen_LoadParameters(void);
/* 0x004860f0 FX_TrailUpdate_6 -> FX_TrailUpdate_6 */
void FX_TrailUpdate_6(int param_1, int param_2, float param_3, float param_4);
/* 0x00486210 FX_ExplosionSpawn_7 -> FX_ExplosionSpawn_7 */
void FX_ExplosionSpawn_7(int param_1, int param_2, float param_3, float param_4, uint32_t param_5);
/* 0x004865b0 FX_FireBallUpdate_7 -> FX_FireBallUpdate_7 */
void FX_FireBallUpdate_7(int param_1, int param_2, uint32_t param_3, float param_4);
/* 0x00486610 FX_FragmentSimulate_7 -> FX_FragmentSimulate_7 */
void FX_FragmentSimulate_7(void);
/* 0x00486620 FX_SmokeEmit_7 -> FX_SmokeEmit_7 */
uint32_t FX_SmokeEmit_7(uint32_t param_1);
/* 0x00486650 FX_RmS -> FX_RmS */
void FX_RmS(int param_1, int param_2);
/* 0x004868a0 FX_LanguageMessagesRes -> FX_LanguageMessagesRes */
void FX_LanguageMessagesRes(void);
/* 0x004868c0 FX_DebrisSpawn_7 -> FX_DebrisSpawn_7 */
void FX_DebrisSpawn_7(void);
/* 0x004868d0 FX_TrailUpdate_7 -> FX_TrailUpdate_7 */
void FX_TrailUpdate_7(int param_1);
/* 0x00486900 StatusScreen_Init -> StatusScreen_Init */
void StatusScreen_Init(void);
/* 0x004869b0 StatusScreen_LoadParameters -> StatusScreen_LoadParameters */
void StatusScreen_LoadParameters(void);
/* 0x00486f30 StatusScreen_Setup -> StatusScreen_Setup */
void StatusScreen_Setup(void);
/* 0x00487130 FX_Statusscreen -> FX_Statusscreen */
void FX_Statusscreen(void);
/* 0x00487160 FX_FragmentSimulate_8 -> FX_FragmentSimulate_8 */
void FX_FragmentSimulate_8(uint32_t param_1);
/* 0x00487180 FX_SmokeEmit_8 -> FX_SmokeEmit_8 */
uint32_t FX_SmokeEmit_8(void);
/* 0x00487190 FX_DebrisSpawn_8 -> FX_DebrisSpawn_8 */
uint8_t FX_DebrisSpawn_8(void);
/* 0x004871a0 FX_TrailUpdate_8 -> FX_TrailUpdate_8 */
uint32_t ** FX_TrailUpdate_8(void);
/* 0x004871b0 FX_ExplosionSpawn_9 -> FX_ExplosionSpawn_9 */
uint32_t * FX_ExplosionSpawn_9(void);
/* 0x004871c0 FX_FireBallUpdate_9 -> FX_FireBallUpdate_9 */
void FX_FireBallUpdate_9(int param_1, int param_2);
/* 0x004872b0 FX_FragmentSimulate_9 -> FX_FragmentSimulate_9 */
void FX_FragmentSimulate_9(int param_1);
/* 0x004872c0 ConditionalContainer_Init -> ConditionalContainer_Init */
void ConditionalContainer_Init(void);
/* 0x004874a0 ConditionalContainer_LoadParameters -> ConditionalContainer_LoadParameters */
void ConditionalContainer_LoadParameters(int param_1);
/* 0x004874e0 ConditionalContainer_Tick -> ConditionalContainer_Tick */
void ConditionalContainer_Tick(...);
/* 0x00487730 ConditionalContainer_Process -> ConditionalContainer_Process */
void ConditionalContainer_Process(int param_1);
/* 0x004877a0 ConditionalContainer_Update -> ConditionalContainer_Update */
void ConditionalContainer_Update(int param_1);
/* 0x00487860 ConditionalContainer_OnEvent -> ConditionalContainer_OnEvent */
void ConditionalContainer_OnEvent(void);
/* 0x00487920 ConditionalContainer_Action -> ConditionalContainer_Action */
void ConditionalContainer_Action(void);
/* 0x00487980 ConditionalContainer_Cleanup -> ConditionalContainer_Cleanup */
void ConditionalContainer_Cleanup(void);
/* 0x00487a70 ConditionalContainer_Cleanup_2 -> ConditionalContainer_Cleanup_2 */
void ConditionalContainer_Cleanup_2(int param_1, uint32_t param_2);
/* 0x00487b20 ConditionalContainer_Cleanup_3 -> ConditionalContainer_Cleanup_3 */
void ConditionalContainer_Cleanup_3(int param_1, uint32_t param_2);
/* 0x00487bc0 FX_DebrisSpawn_9 -> FX_DebrisSpawn_9 */
void FX_DebrisSpawn_9(void);
/* 0x00487be0 GuardGenerator_Init -> GuardGenerator_Init */
void GuardGenerator_Init(void);
/* 0x00487eb0 GuardGenerator_LoadParameters -> GuardGenerator_LoadParameters */
void GuardGenerator_LoadParameters(int param_1);
/* 0x00487ee0 GuardGenerator_Setup -> GuardGenerator_Setup */
void GuardGenerator_Setup(void);
/* 0x00488000 FX_TrailUpdate_9 -> FX_TrailUpdate_9 */
void FX_TrailUpdate_9(int param_1);
/* 0x00488040 FX_ExplosionSpawn_10 -> FX_ExplosionSpawn_10 */
void FX_ExplosionSpawn_10(int param_1, int param_2);
/* 0x004880f0 GuardGenerator_Process -> GuardGenerator_Process */
void GuardGenerator_Process(int param_1);
/* 0x00488140 FX_FireBallUpdate_10 -> FX_FireBallUpdate_10 */
void FX_FireBallUpdate_10(int param_1);
/* 0x00488160 FX_FragmentSimulate_10 -> FX_FragmentSimulate_10 */
void FX_FragmentSimulate_10(int param_1);
/* 0x00488200 GuardGenerator_Update -> GuardGenerator_Update */
void GuardGenerator_Update(int param_1);
/* 0x00488220 FX_SmokeEmit_10 -> FX_SmokeEmit_10 */
void FX_SmokeEmit_10(int param_1);
/* 0x004883c0 FX_DebrisSpawn_10 -> FX_DebrisSpawn_10 */
uint32_t * FX_DebrisSpawn_10(int param_1, int param_2);
/* 0x00488430 GuardGenerator_OnEvent -> GuardGenerator_OnEvent */
void GuardGenerator_OnEvent(void);
/* 0x004884d0 GuardGenerator_Action -> GuardGenerator_Action */
void GuardGenerator_Action(void);
/* 0x004885f0 FX_TrailUpdate_10 -> FX_TrailUpdate_10 */
void FX_TrailUpdate_10(void);
/* 0x00488610 FX_ExplosionSpawn_11 -> FX_ExplosionSpawn_11 */
uint16_t FX_ExplosionSpawn_11(void);
/* 0x00488620 SubLevel_Init -> SubLevel_Init */
void SubLevel_Init(void);
/* 0x00488780 SubLevel_LoadParameters -> SubLevel_LoadParameters */
void SubLevel_LoadParameters(void);
/* 0x004887e0 SubLevel_OnEvent -> SubLevel_OnEvent */
void SubLevel_OnEvent(void);
/* 0x00488800 EditVariable_Init -> EditVariable_Init */
void EditVariable_Init(void);
/* 0x00488980 EditVariable_LoadParameters -> EditVariable_LoadParameters */
void EditVariable_LoadParameters(int param_1);
/* 0x004889b0 EditVariable_Setup -> EditVariable_Setup */
void EditVariable_Setup(void);
/* 0x00488a30 EditVariable_Process -> EditVariable_Process */
void EditVariable_Process(int param_1);
/* 0x00488aa0 EditVariable_OnEvent -> EditVariable_OnEvent */
void EditVariable_OnEvent(int param_1);
/* 0x00488ad0 EditVariable_Action -> EditVariable_Action */
void EditVariable_Action(void);
/* 0x00488b30 EditVariable_Cleanup -> EditVariable_Cleanup */
void EditVariable_Cleanup(void);
/* 0x00488b90 FX_FireBallUpdate_11 -> FX_FireBallUpdate_11 */
void FX_FireBallUpdate_11(void);
/* 0x00488bb0 LevelFlow_Init -> LevelFlow_Init */
void LevelFlow_Init(void);
/* 0x00488e00 LevelFlow_GetBreakCutSceneKey -> LevelFlow_GetBreakCutSceneKey */
int LevelFlow_GetBreakCutSceneKey();
/* 0x00488e50 LevelFlow_LevelFailed -> LevelFlow_LevelFailed */
void LevelFlow_LevelFailed();
/* 0x00488e90 LevelFlow_IsCountryUSA -> LevelFlow_IsCountryUSA */
int LevelFlow_IsCountryUSA();
/* 0x00488f90 LevelFlow_Process -> LevelFlow_Process */
void LevelFlow_Process(void);
/* 0x004890f0 LevelFlow_Update -> LevelFlow_Update */
void LevelFlow_Update(void);
/* 0x00489290 LevelFlow_LoadParameters -> LevelFlow_LoadParameters */
void LevelFlow_LoadParameters(void);
/* 0x00489400 LevelFlow_Setup -> LevelFlow_Setup */
void LevelFlow_Setup(int param_1);
/* 0x00489430 FX_FragmentSimulate_11 -> FX_FragmentSimulate_11 */
void FX_FragmentSimulate_11(void);
/* 0x00489450 FX_SmokeEmit_11 -> FX_SmokeEmit_11 */
uint32_t FX_SmokeEmit_11(void);
/* 0x00489460 FX_DebrisSpawn_11 -> FX_DebrisSpawn_11 */
uint32_t FX_DebrisSpawn_11(void);
/* 0x00489470 FX_TrailUpdate_11 -> FX_TrailUpdate_11 */
float10 FX_TrailUpdate_11(void);
/* 0x004894b0 FX_ExplosionSpawn_12 -> FX_ExplosionSpawn_12 */
uint32_t FX_ExplosionSpawn_12(void);
/* 0x004894e0 FX_FireBallUpdate_12 -> FX_FireBallUpdate_12 */
void FX_FireBallUpdate_12(int param_1);
/* 0x00489500 FX_FragmentSimulate_12 -> FX_FragmentSimulate_12 */
uint32_t * FX_FragmentSimulate_12(int param_1, uint32_t param_2, uint32_t param_3, int param_4);
/* 0x00489560 FX_SmokeEmit_12 -> FX_SmokeEmit_12 */
void FX_SmokeEmit_12(void);
/* 0x004895d0 FX_DebrisSpawn_12 -> FX_DebrisSpawn_12 */
void FX_DebrisSpawn_12(void);
/* 0x00489610 FX_TrailUpdate_12 -> FX_TrailUpdate_12 */
uint8_t FX_TrailUpdate_12(void);
/* 0x00489620 FX_ExplosionSpawn_13 -> FX_ExplosionSpawn_13 */
uint8_t FX_ExplosionSpawn_13(void);
/* 0x00489630 FX_FireBallUpdate_13 -> FX_FireBallUpdate_13 */
uint8_t FX_FireBallUpdate_13(void);
/* 0x00489640 FX_AidetectionQtaskMask -> FX_AidetectionQtaskMask */
int FX_AidetectionQtaskMask(uint16_t param_1);
/* 0x00489680 FX_FragmentSimulate_13 -> FX_FragmentSimulate_13 */
void FX_FragmentSimulate_13(uint32_t param_1);
/* 0x004896a0 FX_SmokeEmit_13 -> FX_SmokeEmit_13 */
void FX_SmokeEmit_13(uint32_t param_1);
/* 0x004896c0 FX_DebrisSpawn_13 -> FX_DebrisSpawn_13 */
void FX_DebrisSpawn_13(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, int param_5, int param_6);
/* 0x00489750 Car_DetectionSweep -> Car_DetectionSweep */
void Car_DetectionSweep();
/* 0x004898d0 AI_TestCandidate -> AI_TestCandidate */
void AI_TestCandidate();
/* 0x00489960 AI_BuildEyeSnapshot -> AI_BuildEyeSnapshot */
void AI_BuildEyeSnapshot();
/* 0x00489b20 AI_LineOfSight -> AI_LineOfSight */
void AI_LineOfSight();
/* 0x00489b90 FX_TrailUpdate_13 -> FX_TrailUpdate_13 */
void FX_TrailUpdate_13(int param_1);
/* 0x00489be0 FX_ExplosionSpawn_14 -> FX_ExplosionSpawn_14 */
uint32_t * FX_ExplosionSpawn_14(int param_1, int param_2);
/* 0x00489c30 FX_FireBallUpdate_14 -> FX_FireBallUpdate_14 */
void FX_FireBallUpdate_14(int param_1, uint32_t param_2);
/* 0x00489c60 FX_000011 -> FX_000011 */
int FX_000011(int param_1, int *param_2);
/* 0x00489e10 FX_FragmentSimulate_14 -> FX_FragmentSimulate_14 */
int FX_FragmentSimulate_14(int param_1, int param_2);
/* 0x00489e30 FX_SmokeEmit_14 -> FX_SmokeEmit_14 */
void FX_SmokeEmit_14(int param_1);
/* 0x00489e70 Human_StateAnimation -> Human_StateAnimation */
void Human_StateAnimation();
/* 0x00489ea0 FX_DebrisSpawn_14 -> FX_DebrisSpawn_14 */
void FX_DebrisSpawn_14(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x00489ed0 FX_TrailUpdate_14 -> FX_TrailUpdate_14 */
void FX_TrailUpdate_14(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x00489f00 FX_ExplosionSpawn_15 -> FX_ExplosionSpawn_15 */
void FX_ExplosionSpawn_15(int param_1, uint32_t param_2);
/* 0x00489f20 FX_FireBallUpdate_15 -> FX_FireBallUpdate_15 */
void FX_FireBallUpdate_15(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x00489f50 FX_FragmentSimulate_15 -> FX_FragmentSimulate_15 */
bool FX_FragmentSimulate_15(int param_1);
/* 0x00489f70 FX_SmokeEmit_15 -> FX_SmokeEmit_15 */
void FX_SmokeEmit_15(float param_1);
/* 0x0048a320 FX_DebrisSpawn_15 -> FX_DebrisSpawn_15 */
void FX_DebrisSpawn_15(int param_1);
/* 0x0048a330 FX_TrailUpdate_15 -> FX_TrailUpdate_15 */
void FX_TrailUpdate_15(int param_1);
/* 0x0048a340 FX_ExplosionSpawn_16 -> FX_ExplosionSpawn_16 */
void FX_ExplosionSpawn_16(float *param_1, int param_2, int param_3);
/* 0x0048a440 LoadingScreen_Show -> LoadingScreen_Show */
void LoadingScreen_Show(int picVariant);
/* 0x0048a5d0 FX_FireBallUpdate_16 -> FX_FireBallUpdate_16 */
void FX_FireBallUpdate_16(int param_1);
/* 0x0048a620 FX_FragmentSimulate_16 -> FX_FragmentSimulate_16 */
void FX_FragmentSimulate_16(int *param_1, int param_2);
/* 0x0048a6d0 FX_SmokeEmit_16 -> FX_SmokeEmit_16 */
void FX_SmokeEmit_16(uint32_t param_1);
/* 0x0048a710 FX_DebrisSpawn_16 -> FX_DebrisSpawn_16 */
void FX_DebrisSpawn_16(void);
/* 0x0048a8a0 FX_TrailUpdate_16 -> FX_TrailUpdate_16 */
void FX_TrailUpdate_16(void);
/* 0x0048a8c0 FX_ExplosionSpawn_17 -> FX_ExplosionSpawn_17 */
void FX_ExplosionSpawn_17(void);
/* 0x0048a8d0 FX_FireBallUpdate_17 -> FX_FireBallUpdate_17 */
uint32_t FX_FireBallUpdate_17(void);
/* 0x0048a910 FX_FragmentSimulate_17 -> FX_FragmentSimulate_17 */
bool FX_FragmentSimulate_17(void);
/* 0x0048a920 FX_SmokeEmit_17 -> FX_SmokeEmit_17 */
int FX_SmokeEmit_17(int param_1, int param_2);
/* 0x0048ab10 FX_DebrisSpawn_17 -> FX_DebrisSpawn_17 */
void FX_DebrisSpawn_17(int param_1);
/* 0x0048ab80 FX_TrailUpdate_17 -> FX_TrailUpdate_17 */
void FX_TrailUpdate_17(uint32_t param_1);
/* 0x0048aba0 Patrol_CombatStart -> Patrol_CombatStart */
void Patrol_CombatStart();
/* 0x0048ac60 FX_ExplosionSpawn_18 -> FX_ExplosionSpawn_18 */
void FX_ExplosionSpawn_18(int param_1, int param_2);
/* 0x0048acc0 Named_Combat -> Named_Combat */
void Named_Combat(...);
/* 0x0048ae70 FX_FireBallUpdate_18 -> FX_FireBallUpdate_18 */
void FX_FireBallUpdate_18(uint32_t param_1, int param_2, code *param_3, uint32_t param_4);
/* 0x0048ae90 FX_FragmentSimulate_18 -> FX_FragmentSimulate_18 */
char FX_FragmentSimulate_18(int *param_1, int param_2);
/* 0x0048b050 FX_FindfreepositionStac -> FX_FindfreepositionStac */
void FX_FindfreepositionStac(void);
/* 0x0048b260 FX_SmokeEmit_18 -> FX_SmokeEmit_18 */
uint16_t FX_SmokeEmit_18(int param_1, uint32_t *param_2, char param_3, char param_4);
/* 0x0048b6e0 FX_DebrisSpawn_18 -> FX_DebrisSpawn_18 */
uint32_t FX_DebrisSpawn_18(float param_1, int param_2);
/* 0x0048b780 FX_TrailUpdate_18 -> FX_TrailUpdate_18 */
uint32_t FX_TrailUpdate_18(int param_1, int param_2, uint32_t *param_3, int param_4, int param_5);
/* 0x0048b980 FX_ExplosionSpawn_19 -> FX_ExplosionSpawn_19 */
uint32_t FX_ExplosionSpawn_19(int param_1);
/* 0x0048b9c0 Combat_BeginBurst -> Combat_BeginBurst */
void Combat_BeginBurst();
/* 0x0048bbd0 Combat_MobileC -> Combat_MobileC */
void Combat_MobileC(...);
/* 0x0048bc00 CombatStand -> CombatStand */
void CombatStand(...);
/* 0x0048be30 FX_FireBallUpdate_19 -> FX_FireBallUpdate_19 */
uint32_t FX_FireBallUpdate_19(int param_1, int param_2);
/* 0x0048bfd0 FX_FragmentSimulate_19 -> FX_FragmentSimulate_19 */
char FX_FragmentSimulate_19(int *param_1, int param_2);
/* 0x0048c250 Combat_MobileA -> Combat_MobileA */
void Combat_MobileA(...);
/* 0x0048c280 CombatKneel -> CombatKneel */
void CombatKneel(...);
/* 0x0048c540 CombatLieDown_Dispatch -> CombatLieDown_Dispatch */
void CombatLieDown_Dispatch(...);
/* 0x0048c760 RePosition -> RePosition */
void RePosition(...);
/* 0x0048c850 CombatFollow_Install -> CombatFollow_Install */
void CombatFollow_Install(...);
/* 0x0048c860 Combat_Follow -> Combat_Follow */
void Combat_Follow(...);
/* 0x0048cab0 LookForTarget -> LookForTarget */
void LookForTarget(...);
/* 0x0048cbd0 RPG_CombatStand -> RPG_CombatStand */
void RPG_CombatStand(...);
/* 0x0048cdf0 RPG_CombatKneel -> RPG_CombatKneel */
void RPG_CombatKneel(...);
/* 0x0048d000 Guard_CombatStart -> Guard_CombatStart */
void Guard_CombatStart(...);
/* 0x0048d080 Guard_CombatStand -> Guard_CombatStand */
void Guard_CombatStand();
/* 0x0048d340 Gunner_Combat -> Gunner_Combat */
void Gunner_Combat();
/* 0x0048d7d0 FX_SmokeEmit_19 -> FX_SmokeEmit_19 */
void FX_SmokeEmit_19(int param_1);
/* 0x0048d830 FX_StandRollLeft -> FX_StandRollLeft */
bool FX_StandRollLeft(int param_1);
/* 0x0048d870 FX_StandRollRight -> FX_StandRollRight */
bool FX_StandRollRight(int param_1);
/* 0x0048d8b0 StandFire -> StandFire */
void StandFire(...);
/* 0x0048d8e0 Combat_RunFire -> Combat_RunFire */
void Combat_RunFire();
/* 0x0048db10 Combat_Reload -> Combat_Reload */
void Combat_Reload(...);
/* 0x0048dbb0 CloseCombat -> CloseCombat */
void CloseCombat(...);
/* 0x0048dbf0 FX_StandThrowingGrenade -> FX_StandThrowingGrenade */
uint8_t FX_StandThrowingGrenade(uint32_t param_1);
/* 0x0048dc30 FX_KneelRollLeft -> FX_KneelRollLeft */
bool FX_KneelRollLeft(int param_1);
/* 0x0048dc80 FX_KneelRollRight -> FX_KneelRollRight */
bool FX_KneelRollRight(int param_1);
/* 0x0048dcd0 FX_KneelFire -> FX_KneelFire */
bool FX_KneelFire(int param_1);
/* 0x0048dd10 FX_DebrisSpawn_19 -> FX_DebrisSpawn_19 */
void FX_DebrisSpawn_19(void);
/* 0x0048ddc0 FX_LiedownFire -> FX_LiedownFire */
bool FX_LiedownFire(int param_1);
/* 0x0048de00 FX_TrailUpdate_19 -> FX_TrailUpdate_19 */
void FX_TrailUpdate_19(void);
/* 0x0048dec0 CombatPlayAnimation -> CombatPlayAnimation */
void CombatPlayAnimation(...);
/* 0x0048df80 AIAction_PlaySound_Run -> AIAction_PlaySound_Run */
void AIAction_PlaySound_Run(...);
/* 0x0048e020 FX_MoveToEventD -> FX_MoveToEventD */
void FX_MoveToEventD(uint32_t param_1, int param_2);
/* 0x0048e0a0 FX_ExplosionSpawn_20 -> FX_ExplosionSpawn_20 */
void FX_ExplosionSpawn_20(void);
/* 0x0048e150 AIAction_Stunned_Run -> AIAction_Stunned_Run */
void AIAction_Stunned_Run(...);
/* 0x0048e250 AIAction_KickGrenade_Run -> AIAction_KickGrenade_Run */
void AIAction_KickGrenade_Run(...);
/* 0x0048e300 FX_FireBallUpdate_20 -> FX_FireBallUpdate_20 */
uint32_t FX_FireBallUpdate_20(void);
/* 0x0048e430 FX_FragmentSimulate_20 -> FX_FragmentSimulate_20 */
void FX_FragmentSimulate_20(void);
/* 0x0048e4a0 FX_RunPanicking -> FX_RunPanicking */
void FX_RunPanicking(int param_1, int param_2);
/* 0x0048e520 FX_SmokeEmit_20 -> FX_SmokeEmit_20 */
void FX_SmokeEmit_20(uint32_t param_1);
/* 0x0048e560 SetCombat_Run -> SetCombat_Run */
void SetCombat_Run(...);
/* 0x0048e620 FX_LevelQtaskIdDNotDefi -> FX_LevelQtaskIdDNotDefi */
void FX_LevelQtaskIdDNotDefi(int *param_1, int param_2);
/* 0x0048e7d0 FX_DebrisSpawn_20 -> FX_DebrisSpawn_20 */
void FX_DebrisSpawn_20(uint32_t param_1, int param_2);
/* 0x0048e870 FX_TrailUpdate_20 -> FX_TrailUpdate_20 */
void FX_TrailUpdate_20(int param_1);
/* 0x0048e920 Patrol_Tick -> Patrol_Tick */
void Patrol_Tick(...);
/* 0x0048eb60 FX_ExplosionSpawn_21 -> FX_ExplosionSpawn_21 */
void FX_ExplosionSpawn_21(void);
/* 0x0048ebf0 FX_WalkToNodeD -> FX_WalkToNodeD */
void FX_WalkToNodeD(int param_1, int param_2);
/* 0x0048ec50 FX_RunToNodeD -> FX_RunToNodeD */
void FX_RunToNodeD(int param_1, int param_2);
/* 0x0048ecc0 FX_FireBallUpdate_21 -> FX_FireBallUpdate_21 */
void FX_FireBallUpdate_21(void);
/* 0x0048ee00 FX_FragmentSimulate_21 -> FX_FragmentSimulate_21 */
void FX_FragmentSimulate_21(void);
/* 0x0048ef70 AI_WriteChannel -> AI_WriteChannel */
void AI_WriteChannel();
/* 0x0048efe0 Locomotion_GetState -> Locomotion_GetState */
void Locomotion_GetState();
/* 0x0048f020 FX_Germany -> FX_Germany */
void FX_Germany(void);
/* 0x0048f070 FX_SmokeEmit_21 -> FX_SmokeEmit_21 */
void FX_SmokeEmit_21(void);
/* 0x0048f080 FX_DebrisSpawn_21 -> FX_DebrisSpawn_21 */
uint32_t FX_DebrisSpawn_21(void);
/* 0x0048f090 FX_TrailUpdate_21 -> FX_TrailUpdate_21 */
uint32_t FX_TrailUpdate_21(void);
/* 0x0048f0a0 FX_ExplosionSpawn_22 -> FX_ExplosionSpawn_22 */
uint32_t FX_ExplosionSpawn_22(void);
/* 0x0048f0b0 FX_FireBallUpdate_22 -> FX_FireBallUpdate_22 */
uint32_t FX_FireBallUpdate_22(void);
/* 0x0048f0c0 FX_FragmentSimulate_22 -> FX_FragmentSimulate_22 */
void FX_FragmentSimulate_22(uint32_t param_1);
/* 0x0048f0d0 FX_SmokeEmit_22 -> FX_SmokeEmit_22 */
void FX_SmokeEmit_22(uint32_t param_1);
/* 0x0048f0e0 FX_DebrisSpawn_22 -> FX_DebrisSpawn_22 */
void FX_DebrisSpawn_22(uint32_t param_1);
/* 0x0048f0f0 FX_TrailUpdate_22 -> FX_TrailUpdate_22 */
void FX_TrailUpdate_22(uint32_t param_1);
/* 0x0048f100 FX_ExplosionSpawn_23 -> FX_ExplosionSpawn_23 */
void FX_ExplosionSpawn_23(LPCSTR param_1);
/* 0x0048f120 FX_FireBallUpdate_23 -> FX_FireBallUpdate_23 */
void FX_FireBallUpdate_23(char param_1);
/* 0x0048f130 FX_FragmentSimulate_23 -> FX_FragmentSimulate_23 */
uint32_t FX_FragmentSimulate_23(void);
/* 0x0048f140 FX_SmokeEmit_23 -> FX_SmokeEmit_23 */
void FX_SmokeEmit_23(uint32_t param_1);
/* 0x0048f170 FX_DebrisSpawn_23 -> FX_DebrisSpawn_23 */
uint32_t FX_DebrisSpawn_23(void);
/* 0x0048f180 FX_TrailUpdate_23 -> FX_TrailUpdate_23 */
void FX_TrailUpdate_23(uint32_t param_1, uint32_t param_2);
/* 0x0048f1a0 App_ContextSetDebugged -> App_ContextSetDebugged */
void App_ContextSetDebugged(int8_t state);
/* 0x0048f1b0 FX_ExplosionSpawn_24 -> FX_ExplosionSpawn_24 */
void FX_ExplosionSpawn_24(void);
/* 0x0048f1c0 FX_FireBallUpdate_24 -> FX_FireBallUpdate_24 */
void FX_FireBallUpdate_24(char param_1);
/* 0x0048f1d0 FX_FragmentSimulate_24 -> FX_FragmentSimulate_24 */
uint32_t FX_FragmentSimulate_24(void);
/* 0x0048f1e0 App_ContextSetDebugtextState -> App_ContextSetDebugtextState */
void App_ContextSetDebugtextState(int8_t state);
/* 0x0048f1f0 FX_SmokeEmit_24 -> FX_SmokeEmit_24 */
uint32_t FX_SmokeEmit_24(void);
/* 0x0048f200 FX_DebrisSpawn_24 -> FX_DebrisSpawn_24 */
void FX_DebrisSpawn_24(uint32_t param_1);
/* 0x0048f210 FX_TrailUpdate_24 -> FX_TrailUpdate_24 */
void FX_TrailUpdate_24(uint32_t param_1);
/* 0x0048f220 FX_ExplosionSpawn_25 -> FX_ExplosionSpawn_25 */
uint32_t FX_ExplosionSpawn_25(void);
/* 0x0048f230 FX_FireBallUpdate_25 -> FX_FireBallUpdate_25 */
uint32_t FX_FireBallUpdate_25(void);
/* 0x0048f240 App_ContextSetLightmapsUsed -> App_ContextSetLightmapsUsed */
void App_ContextSetLightmapsUsed(int8_t used);
/* 0x0048f250 FX_FragmentSimulate_25 -> FX_FragmentSimulate_25 */
uint32_t FX_FragmentSimulate_25(void);
/* 0x0048f260 App_ContextSetTerrainLightmapsUsed -> App_ContextSetTerrainLightmapsUsed */
void App_ContextSetTerrainLightmapsUsed(int8_t used);
/* 0x0048f270 FX_SmokeEmit_25 -> FX_SmokeEmit_25 */
uint32_t FX_SmokeEmit_25(void);
/* 0x0048f280 FX_DebrisSpawn_25 -> FX_DebrisSpawn_25 */
void FX_DebrisSpawn_25(uint32_t param_1);
/* 0x0048f290 FX_TrailUpdate_25 -> FX_TrailUpdate_25 */
void FX_TrailUpdate_25(uint32_t param_1);
/* 0x0048f2a0 FX_ExplosionSpawn_26 -> FX_ExplosionSpawn_26 */
void FX_ExplosionSpawn_26(uint32_t param_1);
/* 0x0048f2b0 FX_FireBallUpdate_26 -> FX_FireBallUpdate_26 */
void FX_FireBallUpdate_26(uint32_t param_1);
/* 0x0048f2c0 FX_FragmentSimulate_26 -> FX_FragmentSimulate_26 */
uint32_t FX_FragmentSimulate_26(void);
/* 0x0048f2d0 FX_SmokeEmit_26 -> FX_SmokeEmit_26 */
bool FX_SmokeEmit_26(void);
/* 0x0048f2f0 FX_DebrisSpawn_26 -> FX_DebrisSpawn_26 */
uint32_t * FX_DebrisSpawn_26(void);
/* 0x0048f300 FX_TrailUpdate_26 -> FX_TrailUpdate_26 */
void FX_TrailUpdate_26(char *param_1);
/* 0x0048f330 FX_ExplosionSpawn_27 -> FX_ExplosionSpawn_27 */
void FX_ExplosionSpawn_27(uint32_t param_1);
/* 0x0048f340 FX_FireBallUpdate_27 -> FX_FireBallUpdate_27 */
uint32_t FX_FireBallUpdate_27(void);
/* 0x0048f360 FX_FragmentSimulate_27 -> FX_FragmentSimulate_27 */
void FX_FragmentSimulate_27(char *param_1, code *param_2);
/* 0x0048f480 FX_SmokeEmit_27 -> FX_SmokeEmit_27 */
void FX_SmokeEmit_27(uint8_t param_1);
/* 0x0048f490 FX_FailedToRegisterWinp -> FX_FailedToRegisterWinp */
void FX_FailedToRegisterWinp(uint32_t param_1);
/* 0x0048f4f0 FX_UnableToRemoveWinpro -> FX_UnableToRemoveWinpro */
void FX_UnableToRemoveWinpro(int param_1);
/* 0x0048f530 FX_Igimutex -> FX_Igimutex */
uint32_t FX_Igimutex(HINSTANCE param_1, uint32_t param_2, uint32_t param_3);
/* 0x0048fa80 DIERR_GENERIC -> DIERR_GENERIC */
char * DIERR_GENERIC(int param_1);
/* 0x0048fc20 FX_FailedGetMouseStateS -> FX_FailedGetMouseStateS */
void FX_FailedGetMouseStateS(void);
/* 0x0048fd90 FX_CouldNotGetMouseCaps -> FX_CouldNotGetMouseCaps */
void FX_CouldNotGetMouseCaps(void);
/* 0x0048fde0 FX_CouldNotCreateDirect -> FX_CouldNotCreateDirect */
void FX_CouldNotCreateDirect(void);
/* 0x0048ffa0 FX_DebrisSpawn_27 -> FX_DebrisSpawn_27 */
void FX_DebrisSpawn_27(void);
/* 0x0048fff0 FX_CouldNotCreateDirect_2 -> FX_CouldNotCreateDirect_2 */
void FX_CouldNotCreateDirect_2(void);
/* 0x00490190 Display_OpenDevice -> Display_OpenDevice */
uint32_t Display_OpenDevice(uint32_t param_1, uint32_t param_2);
/* 0x00490230 Display_CloseDevice -> Display_CloseDevice */
void Display_CloseDevice(void);
/* 0x004902f0 Display_SetDisplayMode -> Display_SetDisplayMode */
void Display_SetDisplayMode(void);
/* 0x00490340 Display_SyncVSync -> Display_SyncVSync */
void Display_SyncVSync(void);
/* 0x00490350 Display_SwapBuffers -> Display_SwapBuffers */
void Display_SwapBuffers(uint8_t param_1);
/* 0x00490360 Display_ClearSurfaces -> Display_ClearSurfaces */
void Display_ClearSurfaces(void);
/* 0x00490370 Display_RestoreDevice -> Display_RestoreDevice */
int Display_RestoreDevice(void);
/* 0x00490380 Display_CheckCapabilities -> Display_CheckCapabilities */
void Display_CheckCapabilities(void);
/* 0x004903a0 Display_SetGammaRamp -> Display_SetGammaRamp */
void Display_SetGammaRamp(void);
/* 0x004903b0 Display_CreateSurface -> Display_CreateSurface */
void Display_CreateSurface(uint32_t *param_1);
/* 0x004905a0 Display_OpenDevice_2 -> Display_OpenDevice_2 */
uint32_t * Display_OpenDevice_2(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x00490680 Display_CloseDevice_2 -> Display_CloseDevice_2 */
uint32_t Display_CloseDevice_2(int param_1, uint32_t param_2);
/* 0x00490860 Display_CouldnTReadPixelForm -> Display_CouldnTReadPixelForm */
uint32_t Display_CouldnTReadPixelForm(int param_1);
/* 0x00490b80 Display_SetDisplayMode_2 -> Display_SetDisplayMode_2 */
uint32_t Display_SetDisplayMode_2(int param_1, uint32_t param_2);
/* 0x00490c40 Display_SyncVSync_2 -> Display_SyncVSync_2 */
bool Display_SyncVSync_2(int param_1, uint32_t param_2, code *param_3);
/* 0x00490d10 Display_SwapBuffers_2 -> Display_SwapBuffers_2 */
int Display_SwapBuffers_2(uint32_t *param_1);
/* 0x00490e90 Display_ClearSurfaces_2 -> Display_ClearSurfaces_2 */
uint32_t Display_ClearSurfaces_2(int param_1, uint32_t param_2);
/* 0x00490f10 Display_RestoreDevice_2 -> Display_RestoreDevice_2 */
uint32_t Display_RestoreDevice_2(int *param_1);
/* 0x004910c0 Display_CouldnTReadPixelForm_2 -> Display_CouldnTReadPixelForm_2 */
void Display_CouldnTReadPixelForm_2(void);
/* 0x00491220 Display_CheckCapabilities_2 -> Display_CheckCapabilities_2 */
uint32_t Display_CheckCapabilities_2(void);
/* 0x00491240 Display_SetGammaRamp_2 -> Display_SetGammaRamp_2 */
void Display_SetGammaRamp_2(int param_1, int param_2, int param_3);
/* 0x00491280 Display_CreateSurface_2 -> Display_CreateSurface_2 */
void Display_CreateSurface_2(void);
/* 0x00491420 Display_OpenDevice_3 -> Display_OpenDevice_3 */
void Display_OpenDevice_3(void);
/* 0x00491610 Display_CloseDevice_3 -> Display_CloseDevice_3 */
void Display_CloseDevice_3(uint32_t param_1, uint32_t param_2);
/* 0x00491630 Display_SetDisplayMode_3 -> Display_SetDisplayMode_3 */
void Display_SetDisplayMode_3(uint32_t param_1);
/* 0x00491650 Display_NoMoreDisplayCallbac -> Display_NoMoreDisplayCallbac */
void Display_NoMoreDisplayCallbac(uint32_t param_1, int *param_2);
/* 0x004916a0 Display_SyncVSync_3 -> Display_SyncVSync_3 */
void Display_SyncVSync_3(uint32_t param_1);
/* 0x004916c0 Display_SwapBuffers_3 -> Display_SwapBuffers_3 */
void Display_SwapBuffers_3(uint32_t param_1);
/* 0x004916e0 Display_ClearSurfaces_3 -> Display_ClearSurfaces_3 */
void Display_ClearSurfaces_3(uint32_t param_1);
/* 0x00491700 Display_DisplayCanOnlyBeOpen -> Display_DisplayCanOnlyBeOpen */
void Display_DisplayCanOnlyBeOpen(void);
/* 0x00491860 Display_RestoreDevice_3 -> Display_RestoreDevice_3 */
void Display_RestoreDevice_3(void);
/* 0x00491930 Display_CheckCapabilities_3 -> Display_CheckCapabilities_3 */
void Display_CheckCapabilities_3(void);
/* 0x00491980 Display_SetGammaRamp_3 -> Display_SetGammaRamp_3 */
int Display_SetGammaRamp_3(int param_1, byte param_2, code *param_3);
/* 0x00491a30 Display_CreateSurface_3 -> Display_CreateSurface_3 */
void Display_CreateSurface_3(void);
/* 0x00491a50 Display_OpenDevice_4 -> Display_OpenDevice_4 */
void Display_OpenDevice_4(uint32_t param_1);
/* 0x00491a90 Display_SetMode -> Display_SetMode */
int Display_SetMode(void* modeStruct);
/* 0x00491ca0 Display_CloseDevice_4 -> Display_CloseDevice_4 */
void Display_CloseDevice_4(uint32_t *param_1);
/* 0x00491cc0 Display_SetDisplayMode_4 -> Display_SetDisplayMode_4 */
void Display_SetDisplayMode_4(void);
/* 0x00491cf0 Display_GetActiveMode -> Display_GetActiveMode */
void* Display_GetActiveMode();
/* 0x00491d00 Display_SyncVSync_4 -> Display_SyncVSync_4 */
void Display_SyncVSync_4(void);
/* 0x00491d20 Display_SwapBuffers_4 -> Display_SwapBuffers_4 */
void Display_SwapBuffers_4(void);
/* 0x00491d40 Display_ClearSurfaces_4 -> Display_ClearSurfaces_4 */
float10 __fastcall Display_ClearSurfaces_4(uint32_t param_1);
/* 0x00491d70 Display_RestoreDevice_4 -> Display_RestoreDevice_4 */
void Display_RestoreDevice_4(uint32_t param_1);
/* 0x00491d80 Display_CheckCapabilities_4 -> Display_CheckCapabilities_4 */
void Display_CheckCapabilities_4(uint32_t param_1);
/* 0x00491db0 Display_SetGammaRamp_4 -> Display_SetGammaRamp_4 */
uint32_t Display_SetGammaRamp_4(void);
/* 0x00491dc0 Display_CreateSurface_4 -> Display_CreateSurface_4 */
uint32_t Display_CreateSurface_4(void);
/* 0x00491dd0 Display_OpenDevice_5 -> Display_OpenDevice_5 */
uint32_t Display_OpenDevice_5(void);
/* 0x00491de0 Display_CloseDevice_5 -> Display_CloseDevice_5 */
uint32_t Display_CloseDevice_5(void);
/* 0x00491df0 Display_SetDisplayMode_5 -> Display_SetDisplayMode_5 */
uint32_t Display_SetDisplayMode_5(void);
/* 0x00491e00 Display_SyncVSync_5 -> Display_SyncVSync_5 */
uint32_t Display_SyncVSync_5(void);
/* 0x00491e10 Display_SwapBuffers_5 -> Display_SwapBuffers_5 */
uint32_t Display_SwapBuffers_5(void);
/* 0x00491e20 Display_ClearSurfaces_5 -> Display_ClearSurfaces_5 */
uint32_t Display_ClearSurfaces_5(void);
/* 0x00491e30 Display_RestoreDevice_5 -> Display_RestoreDevice_5 */
uint32_t Display_RestoreDevice_5(void);
/* 0x00491e40 Display_CheckCapabilities_5 -> Display_CheckCapabilities_5 */
uint32_t Display_CheckCapabilities_5(void);
/* 0x00491e50 Display_SetGammaRamp_5 -> Display_SetGammaRamp_5 */
uint32_t Display_SetGammaRamp_5(void);
/* 0x00491e60 Display_CreateSurface_5 -> Display_CreateSurface_5 */
uint32_t Display_CreateSurface_5(void);
/* 0x00491e70 Display_SetBackgroundColourFn -> Display_SetBackgroundColourFn */
void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b);
/* 0x00491ea0 Display_OpenDevice_6 -> Display_OpenDevice_6 */
uint32_t Display_OpenDevice_6(uint32_t param_1, uint32_t param_2);
/* 0x00491ef0 Display_CloseDevice_6 -> Display_CloseDevice_6 */
void Display_CloseDevice_6(uint32_t param_1);
/* 0x00491f10 Display_SetDisplayMode_6 -> Display_SetDisplayMode_6 */
void Display_SetDisplayMode_6(void);
/* 0x00492230 Display_SyncVSync_6 -> Display_SyncVSync_6 */
bool Display_SyncVSync_6(uint32_t param_1, uint32_t param_2, uint32_t *param_3, uint32_t *param_4);
/* 0x004922b0 Display_SwapBuffers_6 -> Display_SwapBuffers_6 */
uint32_t Display_SwapBuffers_6(char *param_1, uint32_t param_2, uint32_t *param_3, int *param_4);
/* 0x00492370 Display_08X04X04X02X02X02X02 -> Display_08X04X04X02X02X02X02 */
void Display_08X04X04X02X02X02X02(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x00492be0 DDERR_GENERIC -> DDERR_GENERIC */
char * DDERR_GENERIC(int param_1);
/* 0x00493580 Display_Direct3D -> Display_Direct3D */
void Display_Direct3D(void);
/* 0x00493830 Display_CouldnTCreateDynamic -> Display_CouldnTCreateDynamic */
void Display_CouldnTCreateDynamic(void);
/* 0x00493a10 Display_ClearSurfaces_6 -> Display_ClearSurfaces_6 */
void Display_ClearSurfaces_6(void);
/* 0x00493ca0 Display_CouldnTSetClippingWi -> Display_CouldnTSetClippingWi */
void Display_CouldnTSetClippingWi(int param_1);
/* 0x00493d50 Display_RestoreDevice_6 -> Display_RestoreDevice_6 */
void Display_RestoreDevice_6(void);
/* 0x004942a0 Display_Display -> Display_Display */
int * Display_Display(uint32_t param_1, uint32_t param_2, int param_3, int param_4, int param_5);
/* 0x00494690 Display_CreateSurface_6 -> Display_CreateSurface_6 */
uint32_t Display_CreateSurface_6(uint32_t *param_1, uint32_t *param_2);
/* 0x004946d0 Display_OpenDevice_7 -> Display_OpenDevice_7 */
void Display_OpenDevice_7(void);
/* 0x00494970 Display_FailedToLockFramebuf -> Display_FailedToLockFramebuf */
void Display_FailedToLockFramebuf(int param_1);
/* 0x00494c50 Display_SyncVSync_7 -> Display_SyncVSync_7 */
void Display_SyncVSync_7(void);
/* 0x00494f50 Display_SwapBuffers_7 -> Display_SwapBuffers_7 */
void Display_SwapBuffers_7(void);
/* 0x00495060 Display_RestoreDevice_7 -> Display_RestoreDevice_7 */
void Display_RestoreDevice_7(void);
/* 0x004950e0 Display_CheckCapabilities_7 -> Display_CheckCapabilities_7 */
uint32_t Display_CheckCapabilities_7(void);
/* 0x004950f0 Display_SetGammaRamp_7 -> Display_SetGammaRamp_7 */
void Display_SetGammaRamp_7(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x00495170 Display_CreateSurface_7 -> Display_CreateSurface_7 */
void Display_CreateSurface_7(uint32_t param_1);
/* 0x00495190 Display_NoMoreDirect3DCallba -> Display_NoMoreDirect3DCallba */
void Display_NoMoreDirect3DCallba(uint32_t param_1, uint32_t *param_2);
/* 0x004951e0 Display_OpenDevice_8 -> Display_OpenDevice_8 */
void Display_OpenDevice_8(uint32_t param_1);
/* 0x00495200 Display_CloseDevice_8 -> Display_CloseDevice_8 */
void Display_CloseDevice_8(uint32_t param_1);
/* 0x00495220 Display_SetDisplayMode_8 -> Display_SetDisplayMode_8 */
uint32_t Display_SetDisplayMode_8(int param_1, uint32_t *param_2);
/* 0x00495260 Display_SyncVSync_8 -> Display_SyncVSync_8 */
void Display_SyncVSync_8(uint32_t param_1);
/* 0x00495280 Display_SwapBuffers_8 -> Display_SwapBuffers_8 */
void Display_SwapBuffers_8(void);
/* 0x004952a0 Display_Cdaudio -> Display_Cdaudio */
void Display_Cdaudio(void);
/* 0x004952f0 Display_ClearSurfaces_8 -> Display_ClearSurfaces_8 */
void Display_ClearSurfaces_8(void);
/* 0x004955f0 Display_CheckCapabilities_8 -> Display_CheckCapabilities_8 */
void Display_CheckCapabilities_8(int param_1);
/* 0x00495620 Display_SetGammaRamp_8 -> Display_SetGammaRamp_8 */
void Display_SetGammaRamp_8(int *param_1, int *param_2);
/* 0x00495640 Display_CdAudio -> Display_CdAudio */
void Display_CdAudio(void);
/* 0x00495a60 Display_CloseDevice_9 -> Display_CloseDevice_9 */
void Display_CloseDevice_9(void);
/* 0x00495a90 Display_SetDisplayMode_9 -> Display_SetDisplayMode_9 */
void Display_SetDisplayMode_9(void);
/* 0x00495ae0 Display_SyncVSync_9 -> Display_SyncVSync_9 */
void Display_SyncVSync_9(void);
/* 0x00495b50 Display_SwapBuffers_9 -> Display_SwapBuffers_9 */
void Display_SwapBuffers_9(void);
/* 0x00495c10 Display_ClearSurfaces_9 -> Display_ClearSurfaces_9 */
void Display_ClearSurfaces_9(HMIXEROBJ param_1, int param_2, int param_3, uint32_t param_4, uint32_t param_5);
/* 0x00495c80 Display_RestoreDevice_9 -> Display_RestoreDevice_9 */
void Display_RestoreDevice_9(void);
/* 0x00495cb0 Display_CheckCapabilities_9 -> Display_CheckCapabilities_9 */
uint8_t Display_CheckCapabilities_9(void);
/* 0x00495cc0 Display_SetGammaRamp_9 -> Display_SetGammaRamp_9 */
void Display_SetGammaRamp_9(uint32_t param_1);
/* 0x00495cd0 Display_CreateSurface_9 -> Display_CreateSurface_9 */
bool Display_CreateSurface_9(int *param_1, uint32_t param_2, int param_3);
/* 0x00495da0 Display_OpenDevice_10 -> Display_OpenDevice_10 */
void Display_OpenDevice_10(void);
/* 0x00495df0 Display_CloseDevice_10 -> Display_CloseDevice_10 */
void Display_CloseDevice_10(void);
/* 0x00495e70 Music_SetVolume -> Music_SetVolume */
void Music_SetVolume(float volume1, float volume2);
/* 0x00495f30 Music_SetSfxVolume -> Music_SetSfxVolume */
void Music_SetSfxVolume(float volume);
/* 0x00495f40 Display_SetDisplayMode_10 -> Display_SetDisplayMode_10 */
void Display_SetDisplayMode_10(void);
/* 0x00495f70 Display_SoundFileSNotValidFo -> Display_SoundFileSNotValidFo */
void Display_SoundFileSNotValidFo(char *param_1);
/* 0x00496250 Display_SyncVSync_10 -> Display_SyncVSync_10 */
void Display_SyncVSync_10(int param_1, int param_2, uint32_t param_3, int param_4);
/* 0x00496280 Display_SwapBuffers_10 -> Display_SwapBuffers_10 */
void Display_SwapBuffers_10(byte *param_1, byte *param_2, int param_3, short *param_4);
/* 0x00496420 Display_ClearSurfaces_10 -> Display_ClearSurfaces_10 */
void Display_ClearSurfaces_10(uint16_t *param_1, uint16_t param_2);
/* 0x00496450 Display_RestoreDevice_10 -> Display_RestoreDevice_10 */
void Display_RestoreDevice_10(uint32_t param_1, uint32_t param_2);
/* 0x00496470 Display_CheckCapabilities_10 -> Display_CheckCapabilities_10 */
uint32_t * Display_CheckCapabilities_10(int param_1, int param_2, int param_3);
/* 0x004964a0 Display_SetGammaRamp_10 -> Display_SetGammaRamp_10 */
bool Display_SetGammaRamp_10(int param_1, int *param_2, char param_3);
/* 0x004965a0 Display_CreateSurface_10 -> Display_CreateSurface_10 */
void Display_CreateSurface_10(uint32_t param_1);
/* 0x00496640 Display_OpenDevice_11 -> Display_OpenDevice_11 */
void Display_OpenDevice_11(uint32_t param_1, uint32_t param_2);
/* 0x00496650 Display_CloseDevice_11 -> Display_CloseDevice_11 */
void Display_CloseDevice_11(int param_1);
/* 0x004966b0 Display_SetDisplayMode_11 -> Display_SetDisplayMode_11 */
void Display_SetDisplayMode_11(int *param_1, int *param_2);
/* 0x004966e0 Display_SyncVSync_11 -> Display_SyncVSync_11 */
uint32_t Display_SyncVSync_11(int param_1);
/* 0x00496770 Display_SwapBuffers_11 -> Display_SwapBuffers_11 */
int Display_SwapBuffers_11(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint8_t *param_4);
/* 0x00496860 Display_ClearSurfaces_11 -> Display_ClearSurfaces_11 */
int Display_ClearSurfaces_11(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x00496ab0 Display_RestoreDevice_11 -> Display_RestoreDevice_11 */
void Display_RestoreDevice_11(int param_1, int param_2);
/* 0x00496ce0 Display_CheckCapabilities_11 -> Display_CheckCapabilities_11 */
void Display_CheckCapabilities_11(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x00496d80 Display_CreateSurface_11 -> Display_CreateSurface_11 */
void Display_CreateSurface_11(uint32_t param_1, int param_2, int param_3, int param_4);
/* 0x00496db0 Display_OpenDevice_12 -> Display_OpenDevice_12 */
float10 Display_OpenDevice_12(uint32_t param_1, uint32_t param_2);
/* 0x00496e00 Display_CloseDevice_12 -> Display_CloseDevice_12 */
void Display_CloseDevice_12(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x00496e40 Display_SetDisplayMode_12 -> Display_SetDisplayMode_12 */
void Display_SetDisplayMode_12(int param_1);
/* 0x00496e60 Display_SyncVSync_12 -> Display_SyncVSync_12 */
void Display_SyncVSync_12(int param_1, float *param_2);
/* 0x004972b0 Display_ClearSurfaces_12 -> Display_ClearSurfaces_12 */
uint32_t Display_ClearSurfaces_12(int param_1);
/* 0x00497390 Display_SoundInvalidFilename -> Display_SoundInvalidFilename */
void Display_SoundInvalidFilename(char *param_1, char *param_2);
/* 0x00497410 Display_RestoreDevice_12 -> Display_RestoreDevice_12 */
int Display_RestoreDevice_12(char *param_1);
/* 0x00497450 Display_CheckCapabilities_12 -> Display_CheckCapabilities_12 */
void Display_CheckCapabilities_12(char *param_1);
/* 0x004974a0 Display_SetGammaRamp_12 -> Display_SetGammaRamp_12 */
void Display_SetGammaRamp_12(int param_1);
/* 0x004974e0 Display_CreateSurface_12 -> Display_CreateSurface_12 */
void Display_CreateSurface_12(uint32_t *param_1);
/* 0x00497510 Display_OpenDevice_13 -> Display_OpenDevice_13 */
uint32_t Display_OpenDevice_13(void);
/* 0x00497520 Display_CloseDevice_13 -> Display_CloseDevice_13 */
void Display_CloseDevice_13(int param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x00497550 Display_SetDisplayMode_13 -> Display_SetDisplayMode_13 */
void Display_SetDisplayMode_13(void);
/* 0x00497570 Display_SyncVSync_13 -> Display_SyncVSync_13 */
void Display_SyncVSync_13(int param_1, int param_2);
/* 0x004975f0 Display_SwapBuffers_13 -> Display_SwapBuffers_13 */
void Display_SwapBuffers_13(int param_1);
/* 0x00497620 Display_ClearSurfaces_13 -> Display_ClearSurfaces_13 */
void Display_ClearSurfaces_13(uint32_t *param_1, int param_2);
/* 0x00497670 Display_RestoreDevice_13 -> Display_RestoreDevice_13 */
uint32_t Display_RestoreDevice_13(void);
/* 0x00497680 Display_CheckCapabilities_13 -> Display_CheckCapabilities_13 */
void Display_CheckCapabilities_13(int param_1, uint32_t *param_2);
/* 0x00497700 Display_SetGammaRamp_13 -> Display_SetGammaRamp_13 */
void Display_SetGammaRamp_13(void);
/* 0x004977b0 Display_CreateSurface_13 -> Display_CreateSurface_13 */
void Display_CreateSurface_13(uint32_t *param_1, uint32_t param_2);
/* 0x004977f0 Display_OpenDevice_14 -> Display_OpenDevice_14 */
void Display_OpenDevice_14(void);
/* 0x00497800 Display_CloseDevice_14 -> Display_CloseDevice_14 */
int Display_CloseDevice_14(int param_1);
/* 0x00497830 Display_SetDisplayMode_14 -> Display_SetDisplayMode_14 */
void Display_SetDisplayMode_14(uint32_t *param_1);
/* 0x00497860 Display_SyncVSync_14 -> Display_SyncVSync_14 */
void Display_SyncVSync_14(int param_1);
/* 0x00497880 Display_SwapBuffers_14 -> Display_SwapBuffers_14 */
void Display_SwapBuffers_14(uint32_t *param_1, int param_2);
/* 0x004978b0 Display_ClearSurfaces_14 -> Display_ClearSurfaces_14 */
void Display_ClearSurfaces_14(int param_1, uint32_t *param_2);
/* 0x004978d0 Display_RestoreDevice_14 -> Display_RestoreDevice_14 */
void Display_RestoreDevice_14(uint32_t param_1);
/* 0x004978e0 Display_CheckCapabilities_14 -> Display_CheckCapabilities_14 */
void Display_CheckCapabilities_14(uint32_t param_1);
/* 0x004978f0 Display_SetGammaRamp_14 -> Display_SetGammaRamp_14 */
void Display_SetGammaRamp_14(uint32_t param_1, uint32_t param_2);
/* 0x00497940 Display_CreateSurface_14 -> Display_CreateSurface_14 */
void Display_CreateSurface_14(uint32_t param_1);
/* 0x00497980 Display_Transcontextprimitiv -> Display_Transcontextprimitiv */
void Display_Transcontextprimitiv(void);
/* 0x00497a00 Display_CouldnTSetViewport -> Display_CouldnTSetViewport */
void Display_CouldnTSetViewport(int *param_1);
/* 0x00497d40 Display_OpenDevice_15 -> Display_OpenDevice_15 */
void Display_OpenDevice_15(void);
/* 0x00497d70 Display_CloseDevice_15 -> Display_CloseDevice_15 */
void Display_CloseDevice_15(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, float param_4);
/* 0x00497e60 Display_SetDisplayMode_15 -> Display_SetDisplayMode_15 */
void Display_SetDisplayMode_15(int param_1, uint32_t param_2);
/* 0x00497e70 Transcontext_SetActiveTransContext -> Transcontext_SetActiveTransContext */
void Transcontext_SetActiveTransContext(void* ctx);
/* 0x00497ec0 Display_SyncVSync_15 -> Display_SyncVSync_15 */
uint32_t Display_SyncVSync_15(void);
/* 0x00497ed0 Display_SwapBuffers_15 -> Display_SwapBuffers_15 */
void Display_SwapBuffers_15(void);
/* 0x00497ee0 Display_ClearSurfaces_15 -> Display_ClearSurfaces_15 */
void Display_ClearSurfaces_15(uint32_t *param_1);
/* 0x00497f20 Display_RestoreDevice_15 -> Display_RestoreDevice_15 */
void Display_RestoreDevice_15(float *param_1, float *param_2, double *param_3);
/* 0x00498000 Display_CheckCapabilities_15 -> Display_CheckCapabilities_15 */
void Display_CheckCapabilities_15(float *param_1, float *param_2);
/* 0x00498040 Display_SetGammaRamp_15 -> Display_SetGammaRamp_15 */
void Display_SetGammaRamp_15(float *param_1, float *param_2, float param_3);
/* 0x00498070 Display_CreateSurface_15 -> Display_CreateSurface_15 */
uint32_t Display_CreateSurface_15(void);
/* 0x00498080 Display_Offscreenbuffer -> Display_Offscreenbuffer */
void Display_Offscreenbuffer(void);
/* 0x00498350 Display_OpenDevice_16 -> Display_OpenDevice_16 */
void Display_OpenDevice_16(void);
/* 0x00498370 Display_CloseDevice_16 -> Display_CloseDevice_16 */
uint32_t Display_CloseDevice_16(void);
/* 0x00498380 Display_SetDisplayMode_16 -> Display_SetDisplayMode_16 */
void Display_SetDisplayMode_16(int *param_1, int param_2, int param_3);
/* 0x004983d0 Display_SyncVSync_16 -> Display_SyncVSync_16 */
void Display_SyncVSync_16(int param_1);
/* 0x00498410 Display_SwapBuffers_16 -> Display_SwapBuffers_16 */
void Display_SwapBuffers_16(int *param_1);
/* 0x00498460 Display_ClearSurfaces_16 -> Display_ClearSurfaces_16 */
void Display_ClearSurfaces_16(void);
/* 0x00498480 Display_DinputDll -> Display_DinputDll */
void Display_DinputDll(uint32_t *param_1, uint32_t *param_2);
/* 0x004988d0 Display_RestoreDevice_16 -> Display_RestoreDevice_16 */
void Display_RestoreDevice_16(LPCSTR param_1);
/* 0x00498900 Display_CheckCapabilities_16 -> Display_CheckCapabilities_16 */
void Display_CheckCapabilities_16(void);
/* 0x00498950 Display_SetGammaRamp_16 -> Display_SetGammaRamp_16 */
void Display_SetGammaRamp_16(void);
/* 0x00498960 Display_CreateSurface_16 -> Display_CreateSurface_16 */
int Display_CreateSurface_16(uint32_t param_1, uint32_t param_2, int param_3, float param_4, float param_5);
/* 0x00498a70 Display_OpenDevice_17 -> Display_OpenDevice_17 */
void Display_OpenDevice_17(int param_1);
/* 0x00498ab0 Rain_Init -> Rain_Init */
void Rain_Init(void);
/* 0x00498bd0 Rain_Update -> Rain_Update */
void Rain_Update(int param_1);
/* 0x00498f10 Display_CloseDevice_17 -> Display_CloseDevice_17 */
void Display_CloseDevice_17(int param_1);
/* 0x00499090 Display_SetDisplayMode_17 -> Display_SetDisplayMode_17 */
void Display_SetDisplayMode_17(int param_1);
/* 0x00499910 Display_SyncVSync_17 -> Display_SyncVSync_17 */
void Display_SyncVSync_17(int param_1, double param_2);
/* 0x00499ce0 Display_SwapBuffers_17 -> Display_SwapBuffers_17 */
void Display_SwapBuffers_17(void);
/* 0x00499cf0 Display_ClearSurfaces_17 -> Display_ClearSurfaces_17 */
void Display_ClearSurfaces_17(float param_1);
/* 0x00499f90 Display_RestoreDevice_17 -> Display_RestoreDevice_17 */
void Display_RestoreDevice_17(int param_1, uint8_t param_2);
/* 0x00499fa0 Display_CheckCapabilities_17 -> Display_CheckCapabilities_17 */
void Display_CheckCapabilities_17(int param_1, float param_2);
/* 0x00499fd0 Display_SetGammaRamp_17 -> Display_SetGammaRamp_17 */
void Display_SetGammaRamp_17(uint32_t param_1);
/* 0x00499fe0 Display_CreateSurface_17 -> Display_CreateSurface_17 */
uint32_t Display_CreateSurface_17(void);
/* 0x00499ff0 Display_OpenDevice_18 -> Display_OpenDevice_18 */
uint32_t Display_OpenDevice_18(int param_1);
/* 0x0049a010 Display_CloseDevice_18 -> Display_CloseDevice_18 */
void Display_CloseDevice_18(int param_1);
/* 0x0049a050 Display_SetDisplayMode_18 -> Display_SetDisplayMode_18 */
float * Display_SetDisplayMode_18(int param_1, int param_2, int param_3, uint32_t param_4, uint32_t param_5, uint32_t *param_6);
/* 0x0049a340 Display_SyncVSync_18 -> Display_SyncVSync_18 */
void Display_SyncVSync_18(void);
/* 0x0049a350 PolyListDynCubeObj_Setup -> PolyListDynCubeObj_Setup */
void PolyListDynCubeObj_Setup(int param_1);
/* 0x0049a390 Display_SwapBuffers_18 -> Display_SwapBuffers_18 */
void Display_SwapBuffers_18(void);
/* 0x0049a3c0 PolyListDynCubeObj_LoadParameters -> PolyListDynCubeObj_LoadParameters */
void PolyListDynCubeObj_LoadParameters(void);
/* 0x0049a430 Display_ClearSurfaces_18 -> Display_ClearSurfaces_18 */
void Display_ClearSurfaces_18(int param_1, uint32_t *param_2);
/* 0x0049a450 Display_RestoreDevice_18 -> Display_RestoreDevice_18 */
int Display_RestoreDevice_18(uint32_t param_1, int param_2, uint32_t *param_3, uint32_t *param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, int param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11);
/* 0x0049a510 Display_CheckCapabilities_18 -> Display_CheckCapabilities_18 */
void Display_CheckCapabilities_18(int param_1, uint32_t param_2);
/* 0x0049a520 PolyListDynCubeObj_Init -> PolyListDynCubeObj_Init */
void PolyListDynCubeObj_Init(void);
/* 0x0049a6e0 PolyListDynCubeObj_OnEvent -> PolyListDynCubeObj_OnEvent */
void PolyListDynCubeObj_OnEvent(void);
/* 0x0049a9b0 PolyListDynCubeObj_Process -> PolyListDynCubeObj_Process */
void PolyListDynCubeObj_Process(void);
/* 0x0049b260 Display_SetGammaRamp_18 -> Display_SetGammaRamp_18 */
void Display_SetGammaRamp_18(void);
/* 0x0049b2d0 Display_CreateSurface_18 -> Display_CreateSurface_18 */
void Display_CreateSurface_18(double *param_1, float param_2);
/* 0x0049b430 Display_OpenDevice_19 -> Display_OpenDevice_19 */
void Display_OpenDevice_19(int param_1, uint32_t param_2, int param_3);
/* 0x0049b4b0 Display_MeshFormatNotSupport -> Display_MeshFormatNotSupport */
void Display_MeshFormatNotSupport(int param_1);
/* 0x0049b700 Bone_PaletteSkinner -> Bone_PaletteSkinner */
void Bone_PaletteSkinner();
/* 0x0049bb40 Display_CloseDevice_19 -> Display_CloseDevice_19 */
void Display_CloseDevice_19(void);
/* 0x0049bd30 Display_SetDisplayMode_19 -> Display_SetDisplayMode_19 */
void Display_SetDisplayMode_19(void);
/* 0x0049be10 Display_SyncVSync_19 -> Display_SyncVSync_19 */
void Display_SyncVSync_19(void);
/* 0x0049c7d0 Display_ClearSurfaces_19 -> Display_ClearSurfaces_19 */
void Display_ClearSurfaces_19(void);
/* 0x0049cbe0 Display_RestoreDevice_19 -> Display_RestoreDevice_19 */
void Display_RestoreDevice_19(int param_1, int param_2);
/* 0x0049cc80 Display_CheckCapabilities_19 -> Display_CheckCapabilities_19 */
int Display_CheckCapabilities_19(int param_1);
/* 0x0049d480 Display_SetGammaRamp_19 -> Display_SetGammaRamp_19 */
void Display_SetGammaRamp_19(void);
/* 0x0049d810 Display_CreateSurface_19 -> Display_CreateSurface_19 */
void Display_CreateSurface_19(void);
/* 0x0049db20 Display_OpenDevice_20 -> Display_OpenDevice_20 */
void Display_OpenDevice_20(void);
/* 0x0049ddf0 Display_CloseDevice_20 -> Display_CloseDevice_20 */
void Display_CloseDevice_20(void);
/* 0x0049eb50 Display_SetDisplayMode_20 -> Display_SetDisplayMode_20 */
void Display_SetDisplayMode_20(int param_1);
/* 0x0049ec70 Display_SyncVSync_20 -> Display_SyncVSync_20 */
void Display_SyncVSync_20(void);
/* 0x0049f1c0 Display_SwapBuffers_20 -> Display_SwapBuffers_20 */
void Display_SwapBuffers_20(void);
/* 0x0049f700 Mesh_SkinBones -> Mesh_SkinBones */
void Mesh_SkinBones(...);
/* 0x0049fb10 Display_ClearSurfaces_20 -> Display_ClearSurfaces_20 */
void Display_ClearSurfaces_20(void);
/* 0x0049feb0 Display_RestoreDevice_20 -> Display_RestoreDevice_20 */
void Display_RestoreDevice_20(void);
/* 0x004a0110 Camera_UpdateTransform -> Camera_UpdateTransform */
void Camera_UpdateTransform(void);
/* 0x004a01b0 RigidDynCubeObj_LoadParameters -> RigidDynCubeObj_LoadParameters */
void RigidDynCubeObj_LoadParameters(void);
/* 0x004a0340 Camera_SetFieldOfView -> Camera_SetFieldOfView */
void Camera_SetFieldOfView(void);
/* 0x004a1470 Camera_ApplyLineFilter -> Camera_ApplyLineFilter */
void Camera_ApplyLineFilter(void);
/* 0x004a1570 Camera_ApplyBandFilter -> Camera_ApplyBandFilter */
void Camera_ApplyBandFilter(void);
/* 0x004a23d0 Camera_ApplyHandiCam -> Camera_ApplyHandiCam */
void Camera_ApplyHandiCam(void);
/* 0x004a23e0 Camera_ApplyWideScreen -> Camera_ApplyWideScreen */
void Camera_ApplyWideScreen(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004a2430 Camera_ApplyPostProcess -> Camera_ApplyPostProcess */
void Camera_ApplyPostProcess(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004a2490 Camera_UpdateViewCone -> Camera_UpdateViewCone */
int Camera_UpdateViewCone(uint32_t param_1, uint32_t param_2, float param_3, float param_4, float param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004a25e0 BandFilter_Cleanup -> BandFilter_Cleanup */
void BandFilter_Cleanup(int param_1);
/* 0x004a2600 Camera_ResetMatrix -> Camera_ResetMatrix */
void Camera_ResetMatrix(int param_1);
/* 0x004a26c0 Camera_UpdateTransform_2 -> Camera_UpdateTransform_2 */
void Camera_UpdateTransform_2(int param_1);
/* 0x004a2720 Camera_SetFieldOfView_2 -> Camera_SetFieldOfView_2 */
void Camera_SetFieldOfView_2(int param_1);
/* 0x004a2800 Camera_ApplyLineFilter_2 -> Camera_ApplyLineFilter_2 */
void Camera_ApplyLineFilter_2(int param_1, float param_2, float param_3, float param_4);
/* 0x004a28b0 Camera_ApplyBandFilter_2 -> Camera_ApplyBandFilter_2 */
void Camera_ApplyBandFilter_2(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004a28f0 Camera_ApplyHandiCam_2 -> Camera_ApplyHandiCam_2 */
void Camera_ApplyHandiCam_2(void);
/* 0x004a2910 Camera_ApplyWideScreen_2 -> Camera_ApplyWideScreen_2 */
int Camera_ApplyWideScreen_2(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004a29a0 BandFilter_Cleanup_2 -> BandFilter_Cleanup_2 */
void BandFilter_Cleanup_2(int param_1);
/* 0x004a29c0 Camera_ApplyPostProcess_2 -> Camera_ApplyPostProcess_2 */
void Camera_ApplyPostProcess_2(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004a29e0 Camera_UpdateViewCone_2 -> Camera_UpdateViewCone_2 */
void Camera_UpdateViewCone_2(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004a2a00 BandFilter_Init -> BandFilter_Init */
void BandFilter_Init(void);
/* 0x004a2cd0 DrawLineFilter -> DrawLineFilter */
void DrawLineFilter(...);
/* 0x004a3530 BandFilter_Cleanup_3 -> BandFilter_Cleanup_3 */
void BandFilter_Cleanup_3(int param_1);
/* 0x004a3550 BandFilter_LoadParameters -> BandFilter_LoadParameters */
void BandFilter_LoadParameters(void);
/* 0x004a35b0 BandFilter_Cleanup_4 -> BandFilter_Cleanup_4 */
void BandFilter_Cleanup_4(void);
/* 0x004a3650 BandFilter_Update -> BandFilter_Update */
void BandFilter_Update(void);
/* 0x004a36d0 BandFilter_Action -> BandFilter_Action */
void BandFilter_Action(void);
/* 0x004a38a0 BandFilter_Cleanup_5 -> BandFilter_Cleanup_5 */
void BandFilter_Cleanup_5(void);
/* 0x004a3940 DrawBandFilter -> DrawBandFilter */
void DrawBandFilter(...);
/* 0x004a4300 DrawHandiCamFilter -> DrawHandiCamFilter */
void DrawHandiCamFilter(...);
/* 0x004a4d10 BandFilter_Cleanup_6 -> BandFilter_Cleanup_6 */
void BandFilter_Cleanup_6(void);
/* 0x004a4f60 Camera_UpdateTransform_3 -> Camera_UpdateTransform_3 */
void Camera_UpdateTransform_3(void);
/* 0x004a4ff0 Camera_SetFieldOfView_3 -> Camera_SetFieldOfView_3 */
void Camera_SetFieldOfView_3(int param_1, uint32_t param_2);
/* 0x004a5000 Camera_ApplyLineFilter_3 -> Camera_ApplyLineFilter_3 */
uint32_t Camera_ApplyLineFilter_3(uint32_t *param_1, int param_2, void *param_3, uint32_t param_4);
/* 0x004a507c Camera_ApplyBandFilter_3 -> Camera_ApplyBandFilter_3 */
void __cdecl Camera_ApplyBandFilter_3(int *_Buf, int _Value);
/* 0x004a50f5 Camera_ApplyHandiCam_3 -> Camera_ApplyHandiCam_3 */
void Camera_ApplyHandiCam_3(void);
/* 0x004a51eb Camera_UpdateViewCone_3 -> Camera_UpdateViewCone_3 */
void Camera_UpdateViewCone_3(uint32_t param_1);
/* 0x004a5210 Camera_ResetMatrix_3 -> Camera_ResetMatrix_3 */
void Camera_ResetMatrix_3(uint32_t param_1);
/* 0x004a5234 Camera_UpdateTransform_4 -> Camera_UpdateTransform_4 */
uint32_t Camera_UpdateTransform_4(FILE *param_1);
/* 0x004a528a Camera_SetFieldOfView_4 -> Camera_SetFieldOfView_4 */
uint32_t Camera_SetFieldOfView_4(uint32_t *param_1);
/* 0x004a52a4 Camera_ApplyLineFilter_4 -> Camera_ApplyLineFilter_4 */
int Camera_ApplyLineFilter_4(int param_1, int param_2, int param_3);
/* 0x004a5330 Camera_ApplyBandFilter_4 -> Camera_ApplyBandFilter_4 */
void Camera_ApplyBandFilter_4(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004a5350 File_Open -> File_Open */
void* File_Open(char* path, char* mode);
/* 0x004a5363 Camera_ApplyHandiCam_4 -> Camera_ApplyHandiCam_4 */
void Camera_ApplyHandiCam_4(void);
/* 0x004a537a Camera_ApplyWideScreen_4 -> Camera_ApplyWideScreen_4 */
void Camera_ApplyWideScreen_4(void);
/* 0x004a537b Camera_ApplyPostProcess_4 -> Camera_ApplyPostProcess_4 */
void Camera_ApplyPostProcess_4(void);
/* 0x004a53b3 Game_DataSymbolLoad -> Game_DataSymbolLoad */
int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName);
/* 0x004a5405 Camera_UpdateViewCone_4 -> Camera_UpdateViewCone_4 */
int Camera_UpdateViewCone_4(byte *param_1);
/* 0x004a5490 Camera_ResetMatrix_4 -> Camera_ResetMatrix_4 */
void Camera_ResetMatrix_4(uint32_t param_1);
/* 0x004a54a0 Camera_UpdateTransform_5 -> Camera_UpdateTransform_5 */
void Camera_UpdateTransform_5(void);
/* 0x004a54d0 Camera_SetFieldOfView_5 -> Camera_SetFieldOfView_5 */
char * __cdecl Camera_SetFieldOfView_5(char *_Str, int _Ch);
/* 0x004a5500 Camera_ApplyLineFilter_5 -> Camera_ApplyLineFilter_5 */
char * __cdecl Camera_ApplyLineFilter_5(char *_Dest, char *_Source, size_t _Count);
/* 0x004a55fe Camera_ApplyBandFilter_5 -> Camera_ApplyBandFilter_5 */
float10 Camera_ApplyBandFilter_5(double param_1);
/* 0x004a56da Camera_ApplyHandiCam_5 -> Camera_ApplyHandiCam_5 */
void Camera_ApplyHandiCam_5(void);
/* 0x004a56e4 Camera_ApplyWideScreen_5 -> Camera_ApplyWideScreen_5 */
void Camera_ApplyWideScreen_5(void);
/* 0x004a5702 String_VFormat -> String_VFormat */
int String_VFormat(char* buffer, const char* format, va_list args);
/* 0x004a5760 Camera_ApplyPostProcess_5 -> Camera_ApplyPostProcess_5 */
void Camera_ApplyPostProcess_5(void);
/* 0x004a5782 Camera_UpdateViewCone_5 -> Camera_UpdateViewCone_5 */
uint32_t Camera_UpdateViewCone_5(int param_1, uint32_t param_2, int param_3, uint32_t param_4);
/* 0x004a5955 Camera_ResetMatrix_5 -> Camera_ResetMatrix_5 */
void Camera_ResetMatrix_5(void);
/* 0x004a5980 Camera_UpdateTransform_6 -> Camera_UpdateTransform_6 */
int __cdecl Camera_UpdateTransform_6(char *_Str1, char *_Str2);
/* 0x004a5a0c Camera_SetFieldOfView_6 -> Camera_SetFieldOfView_6 */
uint32_t Camera_SetFieldOfView_6(byte *param_1, byte *param_2);
/* 0x004a5aa8 Camera_ApplyLineFilter_6 -> Camera_ApplyLineFilter_6 */
void Camera_ApplyLineFilter_6(void);
/* 0x004a5ad5 Camera_ApplyBandFilter_6 -> Camera_ApplyBandFilter_6 */
void Camera_ApplyBandFilter_6(uint32_t param_1);
/* 0x004a5ae6 Camera_ApplyHandiCam_6 -> Camera_ApplyHandiCam_6 */
void __cdecl Camera_ApplyHandiCam_6(int _Code);
/* 0x004a5af7 Camera_ApplyWideScreen_6 -> Camera_ApplyWideScreen_6 */
void Camera_ApplyWideScreen_6(UINT param_1, int param_2, int param_3);
/* 0x004a5b90 Camera_ApplyPostProcess_6 -> Camera_ApplyPostProcess_6 */
void Camera_ApplyPostProcess_6(uint32_t *param_1, uint32_t *param_2);
/* 0x004a5bb0 Camera_UpdateViewCone_6 -> Camera_UpdateViewCone_6 */
uint32_t * Camera_UpdateViewCone_6(uint32_t *param_1, char *param_2);
/* 0x004a5c30 Camera_ResetMatrix_6 -> Camera_ResetMatrix_6 */
float10 Camera_ResetMatrix_6(double param_1);
/* 0x004a5d00 Camera_UpdateTransform_7 -> Camera_UpdateTransform_7 */
void Camera_UpdateTransform_7(PVOID param_1);
/* 0x004a5d42 Camera_SetFieldOfView_7 -> Camera_SetFieldOfView_7 */
void Camera_SetFieldOfView_7(int param_1, int param_2);
/* 0x004a5dd6 Camera_ApplyLineFilter_7 -> Camera_ApplyLineFilter_7 */
void Camera_ApplyLineFilter_7(void);
/* 0x004a5dee Camera_ApplyBandFilter_7 -> Camera_ApplyBandFilter_7 */
void Camera_ApplyBandFilter_7(void);
/* 0x004a5e25 Camera_ApplyHandiCam_7 -> Camera_ApplyHandiCam_7 */
void Camera_ApplyHandiCam_7(void);
/* 0x004a5e39 Camera_ApplyWideScreen_7 -> Camera_ApplyWideScreen_7 */
void Camera_ApplyWideScreen_7(void);
/* 0x004a5e53 Camera_ApplyPostProcess_7 -> Camera_ApplyPostProcess_7 */
LONG Camera_ApplyPostProcess_7(uint32_t param_1, _EXCEPTION_POINTERS *param_2);
/* 0x004a5f94 Camera_UpdateViewCone_7 -> Camera_UpdateViewCone_7 */
int * Camera_UpdateViewCone_7(int param_1);
/* 0x004a5fd7 Camera_ResetMatrix_7 -> Camera_ResetMatrix_7 */
byte * Camera_ResetMatrix_7(void);
/* 0x004a602f Camera_UpdateTransform_8 -> Camera_UpdateTransform_8 */
void Camera_UpdateTransform_8(void);
/* 0x004a60e8 Camera_SetFieldOfView_8 -> Camera_SetFieldOfView_8 */
void Camera_SetFieldOfView_8(void);
/* 0x004a6181 Camera_ApplyLineFilter_8 -> Camera_ApplyLineFilter_8 */
void Camera_ApplyLineFilter_8(byte *param_1, uint32_t *param_2, byte *param_3, int *param_4, int *param_5);
/* 0x004a6335 Camera_ApplyBandFilter_8 -> Camera_ApplyBandFilter_8 */
LPSTR Camera_ApplyBandFilter_8(void);
/* 0x004a6467 Camera_ApplyHandiCam_8 -> Camera_ApplyHandiCam_8 */
void Camera_ApplyHandiCam_8(void);
/* 0x004a6612 Camera_ApplyWideScreen_8 -> Camera_ApplyWideScreen_8 */
void Camera_ApplyWideScreen_8(uint32_t *param_1);
/* 0x004a663f Camera_MsvcrtHeapSelect -> Camera_MsvcrtHeapSelect */
int Camera_MsvcrtHeapSelect(void);
/* 0x004a6787 Camera_ApplyPostProcess_8 -> Camera_ApplyPostProcess_8 */
uint32_t Camera_ApplyPostProcess_8(int param_1);
/* 0x004a68a9 Camera_UpdateViewCone_8 -> Camera_UpdateViewCone_8 */
void Camera_UpdateViewCone_8(void); /* void* __stdcall(int32_t* arg1) */
/* 0x004a68c4 Camera_ResetMatrix_8 -> Camera_ResetMatrix_8 */
void Camera_ResetMatrix_8(void);
/* 0x004a68fd Camera_ProgramNameUnknown -> Camera_ProgramNameUnknown */
void Camera_ProgramNameUnknown(uint32_t *param_1);
/* 0x004a6a50 Camera_UpdateTransform_9 -> Camera_UpdateTransform_9 */
void Camera_UpdateTransform_9(LPVOID param_1);
/* 0x004a6ab9 Camera_SetFieldOfView_9 -> Camera_SetFieldOfView_9 */
uint32_t Camera_SetFieldOfView_9(uint32_t param_1);
/* 0x004a6b6c Camera_ApplyLineFilter_9 -> Camera_ApplyLineFilter_9 */
void __cdecl Camera_ApplyLineFilter_9(FILE *_File);
/* 0x004a6b97 Camera_ApplyBandFilter_9 -> Camera_ApplyBandFilter_9 */
int Camera_ApplyBandFilter_9(int param_1);
/* 0x004a6bd2 Camera_ApplyHandiCam_9 -> Camera_ApplyHandiCam_9 */
uint32_t Camera_ApplyHandiCam_9(int *param_1);
/* 0x004a6c2e Camera_ApplyWideScreen_9 -> Camera_ApplyWideScreen_9 */
void Camera_ApplyWideScreen_9(void);
/* 0x004a6c37 Camera_ApplyPostProcess_9 -> Camera_ApplyPostProcess_9 */
int __cdecl Camera_ApplyPostProcess_9(int param_1);
/* 0x004a6ca4 Camera_UpdateViewCone_9 -> Camera_UpdateViewCone_9 */
uint32_t Camera_UpdateViewCone_9(uint32_t *param_1);
/* 0x004a6d7d Camera_ResetMatrix_9 -> Camera_ResetMatrix_9 */
DWORD Camera_ResetMatrix_9(uint32_t param_1, LONG param_2, DWORD param_3);
/* 0x004a6e17 Camera_UpdateTransform_10 -> Camera_UpdateTransform_10 */
int Camera_UpdateTransform_10(char *param_1);
/* 0x004a6f6f Camera_SetFieldOfView_10 -> Camera_SetFieldOfView_10 */
uint32_t * Camera_SetFieldOfView_10(uint32_t param_1, char *param_2, uint32_t param_3, uint32_t *param_4);
/* 0x004a70df Camera_ApplyLineFilter_10 -> Camera_ApplyLineFilter_10 */
uint32_t * Camera_ApplyLineFilter_10(void);
/* 0x004a7157 Camera_ApplyBandFilter_10 -> Camera_ApplyBandFilter_10 */
void Camera_ApplyBandFilter_10(void);
/* 0x004a7169 Camera_ApplyHandiCam_10 -> Camera_ApplyHandiCam_10 */
uint32_t Camera_ApplyHandiCam_10(void);
/* 0x004a71a7 Camera_Kernel32 -> Camera_Kernel32 */
void Camera_Kernel32(void);
/* 0x004a71d0 Camera_ApplyWideScreen_10 -> Camera_ApplyWideScreen_10 */
void Camera_ApplyWideScreen_10(char *param_1);
/* 0x004a7290 Camera_ApplyPostProcess_10 -> Camera_ApplyPostProcess_10 */
void __cdecl Camera_ApplyPostProcess_10(int flag, char *argument, char *number);
/* 0x004a72ce Camera_E000 -> Camera_E000 */
uint8_t * Camera_E000(uint64_t *param_1, uint8_t *param_2, int param_3, int param_4);
/* 0x004a73d2 Camera_UpdateViewCone_10 -> Camera_UpdateViewCone_10 */
uint8_t * Camera_UpdateViewCone_10(uint64_t *param_1, uint8_t *param_2, size_t param_3);
/* 0x004a74b0 Camera_ResetMatrix_10 -> Camera_ResetMatrix_10 */
void Camera_ResetMatrix_10(uint64_t *param_1, int param_2, int param_3, uint32_t param_4);
/* 0x004a754b Camera_UpdateTransform_11 -> Camera_UpdateTransform_11 */
void Camera_UpdateTransform_11(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004a7572 Camera_SetFieldOfView_11 -> Camera_SetFieldOfView_11 */
void Camera_SetFieldOfView_11(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004a7595 Camera_ApplyLineFilter_11 -> Camera_ApplyLineFilter_11 */
errno_t __cdecl Camera_ApplyLineFilter_11(double *arg, char *buffer, size_t sizeInBytes, int format, int precision, int caps);
/* 0x004a75e6 Camera_ApplyBandFilter_11 -> Camera_ApplyBandFilter_11 */
void Camera_ApplyBandFilter_11(char *param_1, int param_2);
/* 0x004a760b Camera_ApplyHandiCam_11 -> Camera_ApplyHandiCam_11 */
uint32_t Camera_ApplyHandiCam_11(uint32_t param_1, int *param_2);
/* 0x004a7720 Camera_ApplyWideScreen_11 -> Camera_ApplyWideScreen_11 */
int Camera_ApplyWideScreen_11(uint32_t param_1, byte *param_2, uint32_t *param_3);
/* 0x004a7e61 Camera_ApplyPostProcess_11 -> Camera_ApplyPostProcess_11 */
void Camera_ApplyPostProcess_11(void);
/* 0x004a7e96 Camera_UpdateViewCone_11 -> Camera_UpdateViewCone_11 */
void Camera_UpdateViewCone_11(void);
/* 0x004a7ec7 Camera_ResetMatrix_11 -> Camera_ResetMatrix_11 */
void Camera_ResetMatrix_11(void);
/* 0x004a7eff Camera_UpdateTransform_12 -> Camera_UpdateTransform_12 */
void Camera_UpdateTransform_12(void);
/* 0x004a7f0c Camera_SetFieldOfView_12 -> Camera_SetFieldOfView_12 */
void Camera_SetFieldOfView_12(void);
/* 0x004a7f1c Camera_ApplyLineFilter_12 -> Camera_ApplyLineFilter_12 */
void Camera_ApplyLineFilter_12(void);
/* 0x004a7f2a Camera_ApplyBandFilter_12 -> Camera_ApplyBandFilter_12 */
uint32_t __thiscall Camera_ApplyBandFilter_12(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x004a7fd4 Camera_ApplyHandiCam_12 -> Camera_ApplyHandiCam_12 */
float10 Camera_ApplyHandiCam_12(uint32_t param_1, double param_2, uint32_t param_3);
/* 0x004a8027 Camera_ApplyWideScreen_12 -> Camera_ApplyWideScreen_12 */
float10 Camera_ApplyWideScreen_12(uint32_t param_1, uint32_t param_2, uint64_t param_3, double param_4, uint32_t param_5);
/* 0x004a80bf Camera_ApplyPostProcess_12 -> Camera_ApplyPostProcess_12 */
void Camera_ApplyPostProcess_12(uint32_t *param_1, uint32_t *param_2, uint32_t param_3, uint32_t param_4, uint64_t *param_5, uint64_t *param_6);
/* 0x004a8372 Camera_UpdateViewCone_12 -> Camera_UpdateViewCone_12 */
bool Camera_UpdateViewCone_12(uint32_t param_1, double *param_2, uint32_t param_3);
/* 0x004a8589 Camera_ResetMatrix_12 -> Camera_ResetMatrix_12 */
float10 Camera_ResetMatrix_12(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004a8611 Camera_UpdateTransform_13 -> Camera_UpdateTransform_13 */
void Camera_UpdateTransform_13(int param_1);
/* 0x004a8637 Camera_SetFieldOfView_13 -> Camera_SetFieldOfView_13 */
uint32_t Camera_SetFieldOfView_13(int param_1);
/* 0x004a865c Camera_ApplyLineFilter_13 -> Camera_ApplyLineFilter_13 */
int Camera_ApplyLineFilter_13(byte param_1);
/* 0x004a8689 Camera_ApplyBandFilter_13 -> Camera_ApplyBandFilter_13 */
float10 Camera_ApplyBandFilter_13(double param_1);
/* 0x004a869b Camera_ApplyHandiCam_13 -> Camera_ApplyHandiCam_13 */
float10 Camera_ApplyHandiCam_13(uint64_t param_1, short param_2);
/* 0x004a86c4 Camera_ApplyWideScreen_13 -> Camera_ApplyWideScreen_13 */
uint32_t Camera_ApplyWideScreen_13(int param_1, uint32_t param_2);
/* 0x004a871e Camera_ApplyPostProcess_13 -> Camera_ApplyPostProcess_13 */
float10 Camera_ApplyPostProcess_13(uint32_t param_1, uint32_t param_2, int *param_3);
/* 0x004a87df Camera_UpdateViewCone_13 -> Camera_UpdateViewCone_13 */
int Camera_UpdateViewCone_13(void);
/* 0x004a87ed Camera_ResetMatrix_13 -> Camera_ResetMatrix_13 */
int Camera_ResetMatrix_13(void);
/* 0x004a87fc Camera_UpdateTransform_14 -> Camera_UpdateTransform_14 */
int Camera_UpdateTransform_14(void);
/* 0x004a881f Camera_SetFieldOfView_14 -> Camera_SetFieldOfView_14 */
void Camera_SetFieldOfView_14(void);
/* 0x004a8880 Camera_ApplyLineFilter_14 -> Camera_ApplyLineFilter_14 */
void Camera_ApplyLineFilter_14(void);
/* 0x004a88be Camera_ApplyBandFilter_14 -> Camera_ApplyBandFilter_14 */
void Camera_ApplyBandFilter_14(void);
/* 0x004a88f4 Camera_ApplyHandiCam_14 -> Camera_ApplyHandiCam_14 */
void Camera_ApplyHandiCam_14(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004a892e Camera_ApplyWideScreen_14 -> Camera_ApplyWideScreen_14 */
void Camera_ApplyWideScreen_14(void);
/* 0x004a8935 Camera_ApplyPostProcess_14 -> Camera_ApplyPostProcess_14 */
void Camera_ApplyPostProcess_14(void);
/* 0x004a8a65 Camera_UpdateViewCone_14 -> Camera_UpdateViewCone_14 */
void Camera_UpdateViewCone_14(uint32_t param_1, uint32_t param_2);
/* 0x004a8a91 Camera_ResetMatrix_14 -> Camera_ResetMatrix_14 */
float10 Camera_ResetMatrix_14(uint32_t param_1, int param_2);
/* 0x004a8ad0 Camera_UpdateTransform_15 -> Camera_UpdateTransform_15 */
void __fastcall Camera_UpdateTransform_15(uint32_t param_1, int param_2);
/* 0x004a8b37 Camera_SetFieldOfView_15 -> Camera_SetFieldOfView_15 */
void __fastcall Camera_SetFieldOfView_15(uint32_t param_1, int param_2);
/* 0x004a8bc8 Camera_ApplyLineFilter_15 -> Camera_ApplyLineFilter_15 */
void Camera_ApplyLineFilter_15(void);
/* 0x004a8be2 Camera_ApplyWideScreen_15 -> Camera_ApplyWideScreen_15 */
void Camera_ApplyWideScreen_15(void);
/* 0x004a8c0d Camera_ApplyPostProcess_15 -> Camera_ApplyPostProcess_15 */
void Camera_ApplyPostProcess_15(void);
/* 0x004a8c37 Camera_ResetMatrix_15 -> Camera_ResetMatrix_15 */
void Camera_ResetMatrix_15(void);
/* 0x004a8c76 Camera_UpdateTransform_16 -> Camera_UpdateTransform_16 */
void Camera_UpdateTransform_16(void);
/* 0x004a8c89 Camera_SetFieldOfView_16 -> Camera_SetFieldOfView_16 */
void Camera_SetFieldOfView_16(void);
/* 0x004a8ca0 Camera_ApplyLineFilter_16 -> Camera_ApplyLineFilter_16 */
uint32_t Camera_ApplyLineFilter_16(int param_1, uint32_t param_2, uint16_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004a8db7 Camera_ApplyBandFilter_16 -> Camera_ApplyBandFilter_16 */
void Camera_ApplyBandFilter_16(void);
/* 0x004a9256 Camera_ApplyHandiCam_16 -> Camera_ApplyHandiCam_16 */
void Camera_ApplyHandiCam_16(void);
/* 0x004a9269 Camera_ApplyWideScreen_16 -> Camera_ApplyWideScreen_16 */
void Camera_ApplyWideScreen_16(void);
/* 0x004a9491 Camera_ApplyPostProcess_16 -> Camera_ApplyPostProcess_16 */
uint32_t Camera_ApplyPostProcess_16(void);
/* 0x004a94a6 Camera_UpdateViewCone_16 -> Camera_UpdateViewCone_16 */
uint32_t Camera_UpdateViewCone_16(uint32_t param_1, uint32_t param_2, uint16_t param_3);
/* 0x004a96ac Camera_ResetMatrix_16 -> Camera_ResetMatrix_16 */
float10 Camera_ResetMatrix_16(void);
/* 0x004a975e Camera_UpdateTransform_17 -> Camera_UpdateTransform_17 */
void Camera_UpdateTransform_17(void);
/* 0x004a9964 Camera_SetFieldOfView_17 -> Camera_SetFieldOfView_17 */
void Camera_SetFieldOfView_17(void);
/* 0x004a9a41 Camera_ApplyLineFilter_17 -> Camera_ApplyLineFilter_17 */
void Camera_ApplyLineFilter_17(void);
/* 0x004a9b81 Camera_ApplyBandFilter_17 -> Camera_ApplyBandFilter_17 */
void Camera_ApplyBandFilter_17(void);
/* 0x004a9b8e Camera_ApplyHandiCam_17 -> Camera_ApplyHandiCam_17 */
uint32_t5 __fastcall Camera_ApplyHandiCam_17(uint32_t param_1, uint8_t param_2);
/* 0x004a9bd1 Camera_ApplyWideScreen_17 -> Camera_ApplyWideScreen_17 */
void Camera_ApplyWideScreen_17(void);
/* 0x004a9c40 Camera_ApplyPostProcess_17 -> Camera_ApplyPostProcess_17 */
float10 __fastcall Camera_ApplyPostProcess_17(uint32_t param_1, uint32_t param_2, uint16_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004a9c57 Camera_UpdateViewCone_17 -> Camera_UpdateViewCone_17 */
float10 __fastcall Camera_UpdateViewCone_17(uint32_t param_1, uint32_t param_2, uint16_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004a9ca0 Camera_ResetMatrix_17 -> Camera_ResetMatrix_17 */
unkbyte10 Camera_ResetMatrix_17(void);
/* 0x004a9cb5 Camera_UpdateTransform_18 -> Camera_UpdateTransform_18 */
void Camera_UpdateTransform_18(void);
/* 0x004a9ccc Camera_SetFieldOfView_18 -> Camera_SetFieldOfView_18 */
uint32_t Camera_SetFieldOfView_18(void);
/* 0x004a9ce5 Camera_ApplyLineFilter_18 -> Camera_ApplyLineFilter_18 */
uint32_t __fastcall Camera_ApplyLineFilter_18(uint32_t param_1, int param_2);
/* 0x004a9d28 Camera_ApplyBandFilter_18 -> Camera_ApplyBandFilter_18 */
uint32_t Camera_ApplyBandFilter_18(uint32_t param_1, uint32_t param_2);
/* 0x004a9e2c Camera_ResetMatrix_18 -> Camera_ResetMatrix_18 */
uint32_t Camera_ResetMatrix_18(int param_1, int param_2, double param_3, double *param_4);
/* 0x004a9f5c Camera_UpdateTransform_19 -> Camera_UpdateTransform_19 */
uint32_t __thiscall Camera_UpdateTransform_19(uint32_t param_1, double param_2);
/* 0x004a9fc1 Camera_SetFieldOfView_19 -> Camera_SetFieldOfView_19 */
uint32_t Camera_SetFieldOfView_19(uint32_t param_1);
/* 0x004aa0a0 Camera_ApplyLineFilter_19 -> Camera_ApplyLineFilter_19 */
uint32_t * Camera_ApplyLineFilter_19(uint32_t *param_1, char param_2);
/* 0x004aa15c Camera_ApplyBandFilter_19 -> Camera_ApplyBandFilter_19 */
void Camera_ApplyBandFilter_19(uint32_t param_1);
/* 0x004aa16d Camera_ApplyHandiCam_19 -> Camera_ApplyHandiCam_19 */
uint32_t Camera_ApplyHandiCam_19(byte param_1, uint32_t param_2, byte param_3);
/* 0x004aa19e Camera_ApplyWideScreen_19 -> Camera_ApplyWideScreen_19 */
uint32_t Camera_ApplyWideScreen_19(uint32_t param_1);
/* 0x004aa337 Camera_ApplyPostProcess_19 -> Camera_ApplyPostProcess_19 */
int Camera_ApplyPostProcess_19(int param_1);
/* 0x004aa381 Camera_UpdateViewCone_19 -> Camera_UpdateViewCone_19 */
uint32_t Camera_UpdateViewCone_19(int param_1);
/* 0x004aa3b4 Camera_ResetMatrix_19 -> Camera_ResetMatrix_19 */
void Camera_ResetMatrix_19(void);
/* 0x004aa3dd Camera_UpdateTransform_20 -> Camera_UpdateTransform_20 */
void Camera_UpdateTransform_20(void);
/* 0x004aa562 Camera_SetFieldOfView_20 -> Camera_SetFieldOfView_20 */
void Camera_SetFieldOfView_20(void);
/* 0x004aa580 Camera_ApplyLineFilter_20 -> Camera_ApplyLineFilter_20 */
uint32_t * Camera_ApplyLineFilter_20(uint32_t *param_1, uint32_t *param_2);
/* 0x004aa590 Camera_ApplyBandFilter_20 -> Camera_ApplyBandFilter_20 */
uint32_t * Camera_ApplyBandFilter_20(uint32_t *param_1, uint32_t *param_2);
/* 0x004aa670 Camera_ApplyHandiCam_20 -> Camera_ApplyHandiCam_20 */
void * __cdecl Camera_ApplyHandiCam_20(size_t _Size);
/* 0x004aa682 Camera_ApplyWideScreen_20 -> Camera_ApplyWideScreen_20 */
void * __cdecl Camera_ApplyWideScreen_20(size_t _Size, int _NhFlag);
/* 0x004aa6ae Camera_ApplyPostProcess_20 -> Camera_ApplyPostProcess_20 */
void Camera_ApplyPostProcess_20(uint32_t param_1);
/* 0x004aa730 Camera_UpdateViewCone_20 -> Camera_UpdateViewCone_20 */
size_t __cdecl Camera_UpdateViewCone_20(char *_Str);
/* 0x004aa7b0 Camera_ResetMatrix_20 -> Camera_ResetMatrix_20 */
uint32_t * Camera_ResetMatrix_20(uint32_t *param_1, uint32_t *param_2, uint32_t param_3);
/* 0x004aaae5 Camera_UpdateTransform_21 -> Camera_UpdateTransform_21 */
void Camera_UpdateTransform_21(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004aaafc Camera_SetFieldOfView_21 -> Camera_SetFieldOfView_21 */
uint32_t Camera_SetFieldOfView_21(byte *param_1, int *param_2, uint32_t param_3, uint32_t param_4);
/* 0x004aad10 Camera_ApplyLineFilter_21 -> Camera_ApplyLineFilter_21 */
int __cdecl Camera_ApplyLineFilter_21(char *_Str1, char *_Str2, size_t _MaxCount);
/* 0x004aad48 Camera_ApplyBandFilter_21 -> Camera_ApplyBandFilter_21 */
uint32_t Camera_ApplyBandFilter_21(uint32_t param_1);
/* 0x004aad90 Camera_ApplyHandiCam_21 -> Camera_ApplyHandiCam_21 */
uint32_t Camera_ApplyHandiCam_21(int param_1);
/* 0x004aadbb Camera_ApplyWideScreen_21 -> Camera_ApplyWideScreen_21 */
void Camera_ApplyWideScreen_21(uint32_t *param_1, int param_2);
/* 0x004ab0e4 Camera_ApplyPostProcess_21 -> Camera_ApplyPostProcess_21 */
int * Camera_ApplyPostProcess_21(uint32_t *param_1);
/* 0x004ab3ed Camera_UpdateViewCone_21 -> Camera_UpdateViewCone_21 */
uint32_t * Camera_UpdateViewCone_21(void);
/* 0x004ab49e Camera_ResetMatrix_21 -> Camera_ResetMatrix_21 */
int Camera_ResetMatrix_21(int param_1);
/* 0x004ab599 Camera_UpdateTransform_22 -> Camera_UpdateTransform_22 */
uint32_t ** Camera_UpdateTransform_22(void);
/* 0x004ab6dd Camera_SetFieldOfView_22 -> Camera_SetFieldOfView_22 */
void Camera_SetFieldOfView_22(uint32_t **param_1);
/* 0x004ab733 Camera_ApplyLineFilter_22 -> Camera_ApplyLineFilter_22 */
void Camera_ApplyLineFilter_22(int param_1);
/* 0x004ab7f5 Camera_ApplyBandFilter_22 -> Camera_ApplyBandFilter_22 */
int Camera_ApplyBandFilter_22(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x004ab84c Camera_ApplyHandiCam_22 -> Camera_ApplyHandiCam_22 */
void Camera_ApplyHandiCam_22(int param_1, int param_2, byte *param_3);
/* 0x004ab891 Camera_ApplyWideScreen_22 -> Camera_ApplyWideScreen_22 */
int * Camera_ApplyWideScreen_22(uint32_t param_1);
/* 0x004aba99 Camera_ApplyPostProcess_22 -> Camera_ApplyPostProcess_22 */
int Camera_ApplyPostProcess_22(int *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004abbbd Camera_User32Dll -> Camera_User32Dll */
int Camera_User32Dll(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004abc46 Camera_UpdateViewCone_22 -> Camera_UpdateViewCone_22 */
void Camera_UpdateViewCone_22(uint32_t *param_1);
/* 0x004abcad Camera_ResetMatrix_22 -> Camera_ResetMatrix_22 */
int Camera_ResetMatrix_22(void);
/* 0x004abd42 Camera_UpdateTransform_23 -> Camera_UpdateTransform_23 */
uint32_t Camera_UpdateTransform_23(uint32_t param_1, HANDLE param_2);
/* 0x004abdb9 Camera_SetFieldOfView_23 -> Camera_SetFieldOfView_23 */
uint32_t Camera_SetFieldOfView_23(uint32_t param_1);
/* 0x004abe33 Camera_ApplyLineFilter_23 -> Camera_ApplyLineFilter_23 */
uint32_t Camera_ApplyLineFilter_23(uint32_t param_1);
/* 0x004abe70 Camera_ApplyBandFilter_23 -> Camera_ApplyBandFilter_23 */
uint32_t Camera_ApplyBandFilter_23(uint32_t param_1);
/* 0x004abec7 Camera_ApplyHandiCam_23 -> Camera_ApplyHandiCam_23 */
int Camera_ApplyHandiCam_23(DWORD param_1, char *param_2, uint32_t param_3);
/* 0x004ac074 Camera_ApplyWideScreen_23 -> Camera_ApplyWideScreen_23 */
void Camera_ApplyWideScreen_23(void);
/* 0x004ac119 Camera_ApplyPostProcess_23 -> Camera_ApplyPostProcess_23 */
void Camera_ApplyPostProcess_23(void);
/* 0x004ac12d Camera_UpdateViewCone_23 -> Camera_UpdateViewCone_23 */
int Camera_UpdateViewCone_23(uint32_t param_1, char *param_2, char *param_3);
/* 0x004ac323 Camera_ResetMatrix_23 -> Camera_ResetMatrix_23 */
void Camera_ResetMatrix_23(uint32_t *param_1);
/* 0x004ac367 Camera_UpdateTransform_24 -> Camera_UpdateTransform_24 */
uint32_t Camera_UpdateTransform_24(LPCSTR param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004ac620 Camera_SetFieldOfView_24 -> Camera_SetFieldOfView_24 */
uint32_t Camera_SetFieldOfView_24(uint32_t param_1, uint32_t param_2);
/* 0x004ac655 Camera_ApplyLineFilter_24 -> Camera_ApplyLineFilter_24 */
void Camera_ApplyLineFilter_24(uint32_t param_1, uint32_t param_2);
/* 0x004ac66b Camera_ApplyBandFilter_24 -> Camera_ApplyBandFilter_24 */
uint32_t Camera_ApplyBandFilter_24(uint32_t param_1);
/* 0x004ac6fd Camera_ApplyWideScreen_24 -> Camera_ApplyWideScreen_24 */
uint32_t Camera_ApplyWideScreen_24(uint32_t param_1);
/* 0x004ac786 Camera_ApplyPostProcess_24 -> Camera_ApplyPostProcess_24 */
uint32_t Camera_ApplyPostProcess_24(int param_1, int param_2);
/* 0x004ac7cf Camera_UpdateViewCone_24 -> Camera_UpdateViewCone_24 */
void Camera_UpdateViewCone_24(int param_1, int param_2);
/* 0x004ac825 Camera_ResetMatrix_24 -> Camera_ResetMatrix_24 */
uint32_t Camera_ResetMatrix_24(int param_1, int param_2);
/* 0x004ac8b1 Camera_UpdateTransform_25 -> Camera_UpdateTransform_25 */
void Camera_UpdateTransform_25(int param_1, uint32_t *param_2);
/* 0x004ac8cc Camera_SetFieldOfView_25 -> Camera_SetFieldOfView_25 */
void Camera_SetFieldOfView_25(uint32_t *param_1);
/* 0x004ac8d8 Camera_ApplyLineFilter_25 -> Camera_ApplyLineFilter_25 */
uint32_t Camera_ApplyLineFilter_25(int *param_1);
/* 0x004ac8f3 Camera_ApplyBandFilter_25 -> Camera_ApplyBandFilter_25 */
void Camera_ApplyBandFilter_25(uint32_t *param_1, uint32_t param_2);
/* 0x004ac980 Camera_ApplyHandiCam_25 -> Camera_ApplyHandiCam_25 */
uint32_t Camera_ApplyHandiCam_25(uint16_t *param_1, uint32_t *param_2, int *param_3);
/* 0x004acaec Camera_ApplyWideScreen_25 -> Camera_ApplyWideScreen_25 */
void Camera_ApplyWideScreen_25(uint32_t param_1, uint32_t param_2);
/* 0x004acb02 Camera_ApplyPostProcess_25 -> Camera_ApplyPostProcess_25 */
void Camera_ApplyPostProcess_25(uint32_t param_1, uint32_t param_2);
/* 0x004acb18 Camera_UpdateViewCone_25 -> Camera_UpdateViewCone_25 */
void Camera_UpdateViewCone_25(uint32_t param_1, uint32_t param_2);
/* 0x004acb45 Camera_ResetMatrix_25 -> Camera_ResetMatrix_25 */
void Camera_ResetMatrix_25(uint32_t param_1, uint32_t param_2);
/* 0x004acb72 Camera_UpdateTransform_26 -> Camera_UpdateTransform_26 */
void Camera_UpdateTransform_26(char *param_1, int param_2, int param_3);
/* 0x004acbe9 Camera_SetFieldOfView_26 -> Camera_SetFieldOfView_26 */
uint32_t * Camera_SetFieldOfView_26(void);
/* 0x004acc4d Camera_ApplyLineFilter_26 -> Camera_ApplyLineFilter_26 */
void Camera_ApplyLineFilter_26(uint32_t *param_1, uint32_t *param_2);
/* 0x004acd10 Camera_ApplyBandFilter_26 -> Camera_ApplyBandFilter_26 */
void * __cdecl Camera_ApplyBandFilter_26(void *_Dst, int _Val, size_t _Size);
/* 0x004acd70 Camera_ApplyHandiCam_26 -> Camera_ApplyHandiCam_26 */
uint32_t * Camera_ApplyHandiCam_26(uint32_t *param_1, uint32_t *param_2, uint32_t param_3);
/* 0x004ad0a5 Camera_ApplyWideScreen_26 -> Camera_ApplyWideScreen_26 */
void Camera_ApplyWideScreen_26(void);
/* 0x004ad0ae Camera_ApplyPostProcess_26 -> Camera_ApplyPostProcess_26 */
byte Camera_ApplyPostProcess_26(uint32_t param_1);
/* 0x004ad0d4 Camera_UpdateViewCone_26 -> Camera_UpdateViewCone_26 */
int Camera_UpdateViewCone_26(LPSTR param_1, WCHAR param_2);
/* 0x004ad140 Camera_ResetMatrix_26 -> Camera_ResetMatrix_26 */
void Camera_ResetMatrix_26(void);
/* 0x004ad1b0 Camera_UpdateTransform_27 -> Camera_UpdateTransform_27 */
void Camera_UpdateTransform_27(void);
/* 0x004ad225 Camera_SetFieldOfView_27 -> Camera_SetFieldOfView_27 */
BOOL Camera_SetFieldOfView_27(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7);
/* 0x004ad31e Camera_ApplyLineFilter_27 -> Camera_ApplyLineFilter_27 */
void Camera_ApplyLineFilter_27(void);
/* 0x004ad36e Camera_ApplyHandiCam_27 -> Camera_ApplyHandiCam_27 */
uint32_t Camera_ApplyHandiCam_27(void);
/* 0x004ad371 Camera_ApplyWideScreen_27 -> Camera_ApplyWideScreen_27 */
void Camera_ApplyWideScreen_27(int param_1, int *param_2, uint16_t *param_3);
/* 0x004ad441 Camera_ApplyPostProcess_27 -> Camera_ApplyPostProcess_27 */
int Camera_ApplyPostProcess_27(int param_1, uint32_t param_2);
/* 0x004ad4d3 Camera_UpdateViewCone_27 -> Camera_UpdateViewCone_27 */
int Camera_UpdateViewCone_27(LCID param_1, uint32_t param_2, LPCSTR param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8);
/* 0x004ad5e3 Camera_ResetMatrix_27 -> Camera_ResetMatrix_27 */
void Camera_ResetMatrix_27(void);
/* 0x004ad697 Camera_SetFieldOfView_28 -> Camera_SetFieldOfView_28 */
void Camera_SetFieldOfView_28(void);
/* 0x004ad6f7 Camera_ApplyBandFilter_28 -> Camera_ApplyBandFilter_28 */
int Camera_ApplyBandFilter_28(char *param_1, int param_2);
/* 0x004ad722 Camera_ApplyHandiCam_28 -> Camera_ApplyHandiCam_28 */
uint32_t Camera_ApplyHandiCam_28(uint32_t param_1);
/* 0x004ad73d Camera_ApplyWideScreen_28 -> Camera_ApplyWideScreen_28 */
uint32_t Camera_ApplyWideScreen_28(uint32_t param_1);
/* 0x004ad809 Camera_ApplyPostProcess_28 -> Camera_ApplyPostProcess_28 */
void * Camera_ApplyPostProcess_28(int param_1, int param_2);
/* 0x004ad912 Camera_UpdateViewCone_28 -> Camera_UpdateViewCone_28 */
int Camera_UpdateViewCone_28(uint32_t param_1, int param_2);
/* 0x004ada58 Camera_ResetMatrix_28 -> Camera_ResetMatrix_28 */
uint32_t Camera_ResetMatrix_28(uint32_t param_1, uint32_t param_2, uint32_t *param_3);
/* 0x004ada79 Camera_UpdateTransform_29 -> Camera_UpdateTransform_29 */
void Camera_UpdateTransform_29(uint32_t *param_1, uint32_t *param_2);
/* 0x004adad7 Camera_SetFieldOfView_29 -> Camera_SetFieldOfView_29 */
void Camera_SetFieldOfView_29(uint32_t *param_1);
/* 0x004adb05 Camera_ApplyLineFilter_29 -> Camera_ApplyLineFilter_29 */
void Camera_ApplyLineFilter_29(uint32_t *param_1);
/* 0x004adb32 Camera_ApplyBandFilter_29 -> Camera_ApplyBandFilter_29 */
void Camera_ApplyBandFilter_29(char *param_1, int param_2, uint32_t *param_3);
/* 0x004adbf9 Camera_ApplyHandiCam_29 -> Camera_ApplyHandiCam_29 */
uint32_t Camera_ApplyHandiCam_29(uint16_t *param_1, int *param_2, byte *param_3, uint32_t param_4, int param_5, int param_6, int param_7);
/* 0x004ae0ca Camera_1Snan -> Camera_1Snan */
uint32_t Camera_1Snan(int param_1, uint32_t param_2, uint32_t param_3, int param_4, byte param_5, short *param_6);
/* 0x004ae35d Camera_ApplyWideScreen_29 -> Camera_ApplyWideScreen_29 */
int Camera_ApplyWideScreen_29(uint32_t param_1, int param_2);
/* 0x004ae3d3 Camera_ApplyPostProcess_29 -> Camera_ApplyPostProcess_29 */
void Camera_ApplyPostProcess_29(int *param_1, int *param_2);
/* 0x004ae5f3 Camera_UpdateViewCone_29 -> Camera_UpdateViewCone_29 */
void Camera_UpdateViewCone_29(uint16_t *param_1, uint32_t param_2, int param_3);
/* 0x004ae670 Camera_ResetMatrix_29 -> Camera_ResetMatrix_29 */
void Camera_ResetMatrix_29(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
/* 0x004ae730 Camera_SetFieldOfView_30 -> Camera_SetFieldOfView_30 */
void Camera_SetFieldOfView_30(void);
/* 0x004af740 Camera_ApplyBandFilter_30 -> Camera_ApplyBandFilter_30 */
void Camera_ApplyBandFilter_30(void);
/* 0x004af746 Camera_ApplyHandiCam_30 -> Camera_ApplyHandiCam_30 */
void Camera_ApplyHandiCam_30(void);
/* 0x004af74c Camera_ApplyWideScreen_30 -> Camera_ApplyWideScreen_30 */
void Camera_ApplyWideScreen_30(void);
/* 0x004af752 Camera_ApplyPostProcess_30 -> Camera_ApplyPostProcess_30 */
void Camera_ApplyPostProcess_30(void);
/* 0x004af758 Camera_UpdateViewCone_30 -> Camera_UpdateViewCone_30 */
void Camera_UpdateViewCone_30(void);
/* 0x004af75e Camera_ResetMatrix_30 -> Camera_ResetMatrix_30 */
void Camera_ResetMatrix_30(void);
/* 0x004af764 Camera_UpdateTransform_31 -> Camera_UpdateTransform_31 */
void Camera_UpdateTransform_31(void);
/* 0x004af76a Camera_SetFieldOfView_31 -> Camera_SetFieldOfView_31 */
void Camera_SetFieldOfView_31(void);
/* 0x004af770 Camera_ApplyLineFilter_31 -> Camera_ApplyLineFilter_31 */
void Camera_ApplyLineFilter_31(void);
/* 0x004af776 Camera_ApplyBandFilter_31 -> Camera_ApplyBandFilter_31 */
void Camera_ApplyBandFilter_31(void);
/* 0x004af77c Camera_ApplyHandiCam_31 -> Camera_ApplyHandiCam_31 */
void Camera_ApplyHandiCam_31(void);
/* 0x004af782 Camera_ApplyWideScreen_31 -> Camera_ApplyWideScreen_31 */
void Camera_ApplyWideScreen_31(void);
/* 0x004af788 Camera_ApplyPostProcess_31 -> Camera_ApplyPostProcess_31 */
void Camera_ApplyPostProcess_31(void);
/* 0x004af78e Camera_UpdateViewCone_31 -> Camera_UpdateViewCone_31 */
void Camera_UpdateViewCone_31(void);
/* 0x004af794 Camera_ResetMatrix_31 -> Camera_ResetMatrix_31 */
void Camera_ResetMatrix_31(void);
/* 0x004af79a Camera_UpdateTransform_32 -> Camera_UpdateTransform_32 */
void Camera_UpdateTransform_32(void);
/* 0x004af7a0 Camera_SetFieldOfView_32 -> Camera_SetFieldOfView_32 */
void Camera_SetFieldOfView_32(void);
/* 0x004af7a6 Camera_ApplyLineFilter_32 -> Camera_ApplyLineFilter_32 */
void Camera_ApplyLineFilter_32(void);
/* 0x004af7b0 Error_Show -> Error_Show */
void Error_Show(char* format, ...);
/* 0x004af810 Warning_Show -> Warning_Show */
void Warning_Show(char* format, ...);
/* 0x004af860 Camera_ApplyBandFilter_32 -> Camera_ApplyBandFilter_32 */
void Camera_ApplyBandFilter_32(uint32_t param_1);
/* 0x004af870 Camera_ApplyHandiCam_32 -> Camera_ApplyHandiCam_32 */
void Camera_ApplyHandiCam_32(uint32_t param_1);
/* 0x004af880 Camera_ApplyWideScreen_32 -> Camera_ApplyWideScreen_32 */
void Camera_ApplyWideScreen_32(uint32_t param_1);
/* 0x004af890 Camera_ApplyPostProcess_32 -> Camera_ApplyPostProcess_32 */
void Camera_ApplyPostProcess_32(uint32_t param_1);
/* 0x004af8a0 Camera_UpdateViewCone_32 -> Camera_UpdateViewCone_32 */
void Camera_UpdateViewCone_32(uint32_t param_1);
/* 0x004af8b0 Camera_ResetMatrix_32 -> Camera_ResetMatrix_32 */
void Camera_ResetMatrix_32(uint32_t param_1);
/* 0x004af8c0 Camera_UpdateTransform_33 -> Camera_UpdateTransform_33 */
void Camera_UpdateTransform_33(void);
/* 0x004af8f0 Camera_SetFieldOfView_33 -> Camera_SetFieldOfView_33 */
void Camera_SetFieldOfView_33(int param_1, int *param_2);
/* 0x004af910 Camera_ApplyLineFilter_33 -> Camera_ApplyLineFilter_33 */
void Camera_ApplyLineFilter_33(int *param_1, int *param_2);
/* 0x004af930 Camera_ApplyBandFilter_33 -> Camera_ApplyBandFilter_33 */
int * Camera_ApplyBandFilter_33(int *param_1);
/* 0x004af960 Camera_ApplyHandiCam_33 -> Camera_ApplyHandiCam_33 */
void Camera_ApplyHandiCam_33(int *param_1);
/* 0x004af990 Camera_ApplyWideScreen_33 -> Camera_ApplyWideScreen_33 */
void Camera_ApplyWideScreen_33(int param_1, int *param_2);
/* 0x004af9b0 Camera_ApplyPostProcess_33 -> Camera_ApplyPostProcess_33 */
int Camera_ApplyPostProcess_33(uint32_t *param_1);
/* 0x004af9d0 Camera_UpdateViewCone_33 -> Camera_UpdateViewCone_33 */
uint32_t Camera_UpdateViewCone_33(int *param_1, int *param_2, uint32_t param_3);
/* 0x004aff90 Camera_ResetMatrix_33 -> Camera_ResetMatrix_33 */
void Camera_ResetMatrix_33(uint32_t *param_1, uint32_t *param_2);
/* 0x004affb0 Camera_UpdateTransform_34 -> Camera_UpdateTransform_34 */
uint32_t Camera_UpdateTransform_34(uint8_t *param_1, char *param_2);
/* 0x004b0270 Sys_AllocateMemory -> Sys_AllocateMemory */
uint32_t Sys_AllocateMemory(int *param_1, int *param_2, char *param_3, int param_4, uint32_t param_5, int param_6);
/* 0x004b0670 Sys_FreeMemory -> Sys_FreeMemory */
int Sys_FreeMemory(int param_1, int param_2, int param_3);
/* 0x004b0690 Sys_OpenFileStream -> Sys_OpenFileStream */
void Sys_OpenFileStream(int param_1, int *param_2, int param_3, int param_4, int param_5, int param_6);
/* 0x004b0720 Sys_ReadFileBlock -> Sys_ReadFileBlock */
uint32_t Sys_ReadFileBlock(int param_1, int *param_2, uint32_t *param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6);
/* 0x004b07a0 Sys_CloseFileStream -> Sys_CloseFileStream */
uint32_t Sys_CloseFileStream(int param_1, int param_2, int param_3);
/* 0x004b07d0 Sys_ExecuteBytecode -> Sys_ExecuteBytecode */
uint32_t Sys_ExecuteBytecode(int *param_1, uint32_t *param_2, uint32_t param_3, char *param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x004b0850 Sys_DispatchOpcode -> Sys_DispatchOpcode */
uint32_t Sys_DispatchOpcode(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004b08a0 Sys_PushStack -> Sys_PushStack */
uint32_t Sys_PushStack(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004b08f0 Sys_PopStack -> Sys_PopStack */
void Sys_PopStack(uint8_t *param_1, char *param_2);
/* 0x004b09c0 Sys_ResolveSymbol -> Sys_ResolveSymbol */
void Sys_ResolveSymbol(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004b0a10 Sys_CheckHeap -> Sys_CheckHeap */
uint32_t Sys_CheckHeap(uint8_t *param_1, int param_2, int param_3, int param_4);
/* 0x004b0a80 Sys_AllocateMemory_2 -> Sys_AllocateMemory_2 */
void Sys_AllocateMemory_2(char *param_1, int param_2, char *param_3, uint32_t param_4);
/* 0x004b0b00 Sys_FreeMemory_2 -> Sys_FreeMemory_2 */
void Sys_FreeMemory_2(int *param_1, int param_2, int param_3, uint32_t param_4);
/* 0x004b0b70 Sys_OpenFileStream_2 -> Sys_OpenFileStream_2 */
void Sys_OpenFileStream_2(uint32_t *param_1);
/* 0x004b0b90 Sys_ReadFileBlock_2 -> Sys_ReadFileBlock_2 */
void Sys_ReadFileBlock_2(void);
/* 0x004b0ba0 Sys_CloseFileStream_2 -> Sys_CloseFileStream_2 */
void Sys_CloseFileStream_2(void);
/* 0x004b0be0 Mem_DeallocAll -> Mem_DeallocAll */
void Mem_DeallocAll(void);
/* 0x004b0c60 Mem_Alloc -> Mem_Alloc */
void* Mem_Alloc(int numBytes, int tag);
/* 0x004b0d10 Sys_ExecuteBytecode_2 -> Sys_ExecuteBytecode_2 */
void Sys_ExecuteBytecode_2(int param_1);
/* 0x004b0d40 QHash_ValueSet -> QHash_ValueSet */
void QHash_ValueSet(int* table, char* key, int value);
/* 0x004b0d50 Sys_DispatchOpcode_2 -> Sys_DispatchOpcode_2 */
void Sys_DispatchOpcode_2(void);
/* 0x004b0d60 Qhash_Init -> Qhash_Init */
void Qhash_Init(char hash_val);
/* 0x004b0d90 Qhash_Reset -> Qhash_Reset */
void Qhash_Reset(void);
/* 0x004b0db0 QHash_ValueGet -> QHash_ValueGet */
int QHash_ValueGet(int* table, char* key);
/* 0x004b0dc0 Sys_PushStack_2 -> Sys_PushStack_2 */
void Sys_PushStack_2(void);
/* 0x004b0e00 Sys_RendermodeFailedToCr -> Sys_RendermodeFailedToCr */
void Sys_RendermodeFailedToCr(uint32_t param_1);
/* 0x004b0e50 Sys_PopStack_2 -> Sys_PopStack_2 */
void Sys_PopStack_2(int param_1);
/* 0x004b0e70 Sys_RendermodeFailedToCr_2 -> Sys_RendermodeFailedToCr_2 */
void Sys_RendermodeFailedToCr_2(uint32_t param_1);
/* 0x004b0eb0 Sys_ResolveSymbol_2 -> Sys_ResolveSymbol_2 */
void Sys_ResolveSymbol_2(int param_1);
/* 0x004b0ec0 Sys_CheckHeap_2 -> Sys_CheckHeap_2 */
void Sys_CheckHeap_2(int param_1, int param_2, uint32_t param_3);
/* 0x004b0ee0 Sys_AllocateMemory_3 -> Sys_AllocateMemory_3 */
void Sys_AllocateMemory_3(code *param_1, uint32_t param_2);
/* 0x004b0f30 Sys_FreeMemory_3 -> Sys_FreeMemory_3 */
void Sys_FreeMemory_3(int param_1);
/* 0x004b0f70 Sys_OpenFileStream_3 -> Sys_OpenFileStream_3 */
void Sys_OpenFileStream_3(void);
/* 0x004b0f80 Sys_ReadFileBlock_3 -> Sys_ReadFileBlock_3 */
uint32_t Sys_ReadFileBlock_3(void);
/* 0x004b0f90 Sys_CloseFileStream_3 -> Sys_CloseFileStream_3 */
int Sys_CloseFileStream_3(void);
/* 0x004b0fd0 Sys_ExecuteBytecode_3 -> Sys_ExecuteBytecode_3 */
void Sys_ExecuteBytecode_3(uint32_t param_1);
/* 0x004b1000 Sys_DispatchOpcode_3 -> Sys_DispatchOpcode_3 */
void Sys_DispatchOpcode_3(int param_1, int param_2, uint32_t param_3);
/* 0x004b1020 QFile_AliasResolve -> QFile_AliasResolve */
int QFile_AliasResolve(char* outputPath, const char* inputPath, int maxDepth);
/* 0x004b1180 Sys_PushStack_3 -> Sys_PushStack_3 */
int Sys_PushStack_3(void);
/* 0x004b11a0 QFile_DeviceIndex -> QFile_DeviceIndex */
int QFile_DeviceIndex(const char* path);
/* 0x004b1200 Sys_PopStack_3 -> Sys_PopStack_3 */
void Sys_PopStack_3(void);
/* 0x004b1260 Sys_ResolveSymbol_3 -> Sys_ResolveSymbol_3 */
void Sys_ResolveSymbol_3(void);
/* 0x004b1290 Sys_CheckHeap_3 -> Sys_CheckHeap_3 */
void Sys_CheckHeap_3(int param_1, char *param_2);
/* 0x004b12d0 Sys_AllocateMemory_4 -> Sys_AllocateMemory_4 */
void Sys_AllocateMemory_4(void);
/* 0x004b12f0 Sys_FreeMemory_4 -> Sys_FreeMemory_4 */
void Sys_FreeMemory_4(char *param_1, char *param_2);
/* 0x004b13a0 Sys_OpenFileStream_4 -> Sys_OpenFileStream_4 */
void Sys_OpenFileStream_4(byte *param_1);
/* 0x004b1420 Sys_IllegalDeviceNameInP -> Sys_IllegalDeviceNameInP */
void Sys_IllegalDeviceNameInP(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b1510 QFile_ReadWrite -> QFile_ReadWrite */
void* QFile_ReadWrite(char* vpath, char* mode);
/* 0x004b1620 QFile_DeviceHandlerLookup -> QFile_DeviceHandlerLookup */
uint32_t QFile_DeviceHandlerLookup(const char* deviceName);
/* 0x004b1690 Sys_ReadFileBlock_4 -> Sys_ReadFileBlock_4 */
void Sys_ReadFileBlock_4(int *param_1);
/* 0x004b16d0 Resource_Unpack -> Resource_Unpack */
int Resource_Unpack(int* resPtr, int destAddr, int resSize);
/* 0x004b1700 Sys_CloseFileStream_4 -> Sys_CloseFileStream_4 */
void Sys_CloseFileStream_4(int *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b1730 Sys_ExecuteBytecode_4 -> Sys_ExecuteBytecode_4 */
void Sys_ExecuteBytecode_4(int *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b1760 Sys_DispatchOpcode_4 -> Sys_DispatchOpcode_4 */
void Sys_DispatchOpcode_4(int *param_1);
/* 0x004b1780 Sys_PushStack_4 -> Sys_PushStack_4 */
void Sys_PushStack_4(int *param_1);
/* 0x004b17a0 Sys_PopStack_4 -> Sys_PopStack_4 */
void Sys_PopStack_4(int *param_1);
/* 0x004b17c0 Sys_ResolveSymbol_4 -> Sys_ResolveSymbol_4 */
void Sys_ResolveSymbol_4(int *param_1);
/* 0x004b17f0 Sys_CheckHeap_4 -> Sys_CheckHeap_4 */
void Sys_CheckHeap_4(int *param_1, uint32_t param_2);
/* 0x004b1820 Sys_AllocateMemory_5 -> Sys_AllocateMemory_5 */
uint32_t Sys_AllocateMemory_5(uint32_t param_1, uint32_t param_2);
/* 0x004b18b0 Resource_PackUnpack -> Resource_PackUnpack */
int Resource_PackUnpack(char* resFile, char** outBuffer);
/* 0x004b19c0 Sys_FreeMemory_5 -> Sys_FreeMemory_5 */
uint32_t * Sys_FreeMemory_5(char *param_1);
/* 0x004b1a30 Sys_OpenFileStream_5 -> Sys_OpenFileStream_5 */
void Sys_OpenFileStream_5(uint32_t param_1);
/* 0x004b1a90 Sys_NoFilesLoadedAtAddre -> Sys_NoFilesLoadedAtAddre */
void Sys_NoFilesLoadedAtAddre(int param_1);
/* 0x004b1ac0 QScript_Cleanup -> QScript_Cleanup */
void QScript_Cleanup(int* script);
/* 0x004b1b90 Sys_ReadFileBlock_5 -> Sys_ReadFileBlock_5 */
void Sys_ReadFileBlock_5(uint32_t param_1, code *param_2);
/* 0x004b1bc0 Sys_CloseFileStream_5 -> Sys_CloseFileStream_5 */
void Sys_CloseFileStream_5(int param_1);
/* 0x004b1be0 Sys_ExecuteBytecode_5 -> Sys_ExecuteBytecode_5 */
void Sys_ExecuteBytecode_5(int param_1, uint32_t param_2);
/* 0x004b1c00 Sys_DispatchOpcode_5 -> Sys_DispatchOpcode_5 */
void Sys_DispatchOpcode_5(int param_1, uint32_t param_2);
/* 0x004b1c20 Sys_PushStack_5 -> Sys_PushStack_5 */
void Sys_PushStack_5(int param_1, uint32_t param_2);
/* 0x004b1c40 Sys_PopStack_5 -> Sys_PopStack_5 */
void Sys_PopStack_5(int param_1, uint32_t param_2);
/* 0x004b1c60 Sys_ResolveSymbol_5 -> Sys_ResolveSymbol_5 */
void Sys_ResolveSymbol_5(int param_1, uint32_t param_2);
/* 0x004b1c80 Sys_CheckHeap_5 -> Sys_CheckHeap_5 */
void Sys_CheckHeap_5(int param_1, uint32_t param_2);
/* 0x004b1ca0 Sys_AllocateMemory_6 -> Sys_AllocateMemory_6 */
void Sys_AllocateMemory_6(int param_1, uint32_t param_2);
/* 0x004b1cc0 Sys_FreeMemory_6 -> Sys_FreeMemory_6 */
void Sys_FreeMemory_6(int param_1, uint32_t param_2);
/* 0x004b1ce0 Sys_OpenFileStream_6 -> Sys_OpenFileStream_6 */
void Sys_OpenFileStream_6(int param_1, uint32_t param_2);
/* 0x004b1d00 Sys_ReadFileBlock_6 -> Sys_ReadFileBlock_6 */
void Sys_ReadFileBlock_6(int param_1, uint32_t param_2);
/* 0x004b1d20 Sys_CloseFileStream_6 -> Sys_CloseFileStream_6 */
void Sys_CloseFileStream_6(int param_1, uint32_t param_2);
/* 0x004b1d40 Sys_ExecuteBytecode_6 -> Sys_ExecuteBytecode_6 */
void Sys_ExecuteBytecode_6(int param_1, uint32_t param_2);
/* 0x004b1d60 Sys_DispatchOpcode_6 -> Sys_DispatchOpcode_6 */
void Sys_DispatchOpcode_6(int param_1, uint32_t param_2);
/* 0x004b1d80 Sys_PushStack_6 -> Sys_PushStack_6 */
void Sys_PushStack_6(int param_1, uint32_t param_2);
/* 0x004b1da0 Sys_PopStack_6 -> Sys_PopStack_6 */
void Sys_PopStack_6(int param_1, uint32_t param_2);
/* 0x004b1dc0 Sys_ResolveSymbol_6 -> Sys_ResolveSymbol_6 */
void Sys_ResolveSymbol_6(int param_1, uint32_t param_2);
/* 0x004b1de0 Sys_CheckHeap_6 -> Sys_CheckHeap_6 */
uint32_t * Sys_CheckHeap_6(int param_1);
/* 0x004b1e00 Sys_AllocateMemory_7 -> Sys_AllocateMemory_7 */
char * Sys_AllocateMemory_7(char *param_1, size_t param_2, char *param_3);
/* 0x004b1e70 Sys_FreeMemory_7 -> Sys_FreeMemory_7 */
void Sys_FreeMemory_7(uint32_t param_1);
/* 0x004b1e90 Sys_OpenFileStream_7 -> Sys_OpenFileStream_7 */
char * Sys_OpenFileStream_7(char *param_1, int param_2, char *param_3);
/* 0x004b1ee0 Sys_ReadFileBlock_7 -> Sys_ReadFileBlock_7 */
void Sys_ReadFileBlock_7(uint8_t *param_1, int param_2, char *param_3);
/* 0x004b1f30 Sys_CloseFileStream_7 -> Sys_CloseFileStream_7 */
int Sys_CloseFileStream_7(int param_1, uint32_t param_2, char *param_3);
/* 0x004b1fb0 Sys_ExecuteBytecode_7 -> Sys_ExecuteBytecode_7 */
uint32_t * Sys_ExecuteBytecode_7(void);
/* 0x004b1fc0 Sys_DispatchOpcode_7 -> Sys_DispatchOpcode_7 */
uint32_t Sys_DispatchOpcode_7(uint32_t param_1);
/* 0x004b1ff0 Sys_PushStack_7 -> Sys_PushStack_7 */
int Sys_PushStack_7(uint32_t param_1);
/* 0x004b2070 Sys_PopStack_7 -> Sys_PopStack_7 */
int Sys_PopStack_7(uint32_t param_1, int param_2, int param_3, uint32_t param_4);
/* 0x004b2180 Sys_Alloctexture -> Sys_Alloctexture */
void Sys_Alloctexture(void);
/* 0x004b2250 Sys_ResolveSymbol_7 -> Sys_ResolveSymbol_7 */
void Sys_ResolveSymbol_7(void);
/* 0x004b22f0 Sys_CheckHeap_7 -> Sys_CheckHeap_7 */
void Sys_CheckHeap_7(uint32_t *param_1);
/* 0x004b2320 Sys_AllocateMemory_8 -> Sys_AllocateMemory_8 */
void Sys_AllocateMemory_8(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004b23b0 Sys_FreeMemory_8 -> Sys_FreeMemory_8 */
void Sys_FreeMemory_8(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004b2450 Sys_OpenFileStream_8 -> Sys_OpenFileStream_8 */
void Sys_OpenFileStream_8(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x004b24c0 Sys_SIsNotAValidTextureF -> Sys_SIsNotAValidTextureF */
void Sys_SIsNotAValidTextureF(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b25b0 Sys_ReadFileBlock_8 -> Sys_ReadFileBlock_8 */
void Sys_ReadFileBlock_8(uint32_t param_1, uint32_t param_2);
/* 0x004b25f0 Sys_CloseFileStream_8 -> Sys_CloseFileStream_8 */
void Sys_CloseFileStream_8(void);
/* 0x004b2610 Sys_ExecuteBytecode_8 -> Sys_ExecuteBytecode_8 */
void Sys_ExecuteBytecode_8(uint32_t param_1);
/* 0x004b2640 Sys_DispatchOpcode_8 -> Sys_DispatchOpcode_8 */
uint32_t Sys_DispatchOpcode_8(void);
/* 0x004b2670 Sys_PushStack_8 -> Sys_PushStack_8 */
uint32_t Sys_PushStack_8(void);
/* 0x004b26a0 Sys_PopStack_8 -> Sys_PopStack_8 */
void Sys_PopStack_8(void);
/* 0x004b26b0 Sys_ResolveSymbol_8 -> Sys_ResolveSymbol_8 */
void Sys_ResolveSymbol_8(void);
/* 0x004b26c0 Sys_CheckHeap_8 -> Sys_CheckHeap_8 */
void Sys_CheckHeap_8(void);
/* 0x004b26e0 Sys_AllocateMemory_9 -> Sys_AllocateMemory_9 */
uint32_t Sys_AllocateMemory_9(void);
/* 0x004b26f0 Sys_FreeMemory_9 -> Sys_FreeMemory_9 */
uint32_t Sys_FreeMemory_9(void);
/* 0x004b2700 Sys_OpenFileStream_9 -> Sys_OpenFileStream_9 */
uint32_t Sys_OpenFileStream_9(void);
/* 0x004b2710 Sys_ReadFileBlock_9 -> Sys_ReadFileBlock_9 */
uint32_t Sys_ReadFileBlock_9(void);
/* 0x004b2720 Sys_CloseFileStream_9 -> Sys_CloseFileStream_9 */
void Sys_CloseFileStream_9(uint32_t *param_1);
/* 0x004b2740 Sys_ExecuteBytecode_9 -> Sys_ExecuteBytecode_9 */
void Sys_ExecuteBytecode_9(uint32_t *param_1);
/* 0x004b2760 Sys_DispatchOpcode_9 -> Sys_DispatchOpcode_9 */
void Sys_DispatchOpcode_9(float param_1);
/* 0x004b27d0 Sys_PushStack_9 -> Sys_PushStack_9 */
void Sys_PushStack_9(float param_1);
/* 0x004b2840 Sys_PopStack_9 -> Sys_PopStack_9 */
void Sys_PopStack_9(uint32_t param_1, uint32_t param_2);
/* 0x004b28a0 Sys_ResolveSymbol_9 -> Sys_ResolveSymbol_9 */
void Sys_ResolveSymbol_9(uint32_t param_1, uint32_t param_2);
/* 0x004b2900 Sys_CheckHeap_9 -> Sys_CheckHeap_9 */
void Sys_CheckHeap_9(float *param_1);
/* 0x004b2930 Sys_AllocateMemory_10 -> Sys_AllocateMemory_10 */
float10 Sys_AllocateMemory_10(float *param_1);
/* 0x004b2950 Sys_FreeMemory_10 -> Sys_FreeMemory_10 */
float10 Sys_FreeMemory_10(float *param_1, float *param_2);
/* 0x004b2980 Sys_OpenFileStream_10 -> Sys_OpenFileStream_10 */
float10 Sys_OpenFileStream_10(float *param_1, float *param_2);
/* 0x004b29a0 Sys_ReadFileBlock_10 -> Sys_ReadFileBlock_10 */
void Sys_ReadFileBlock_10(double *param_1);
/* 0x004b29d0 Sys_CloseFileStream_10 -> Sys_CloseFileStream_10 */
float10 Sys_CloseFileStream_10(double *param_1);
/* 0x004b29f0 Sys_ExecuteBytecode_10 -> Sys_ExecuteBytecode_10 */
float10 Sys_ExecuteBytecode_10(double *param_1, double *param_2);
/* 0x004b2a10 Sys_DispatchOpcode_10 -> Sys_DispatchOpcode_10 */
float10 Sys_DispatchOpcode_10(float *param_1);
/* 0x004b2b30 Sys_PushStack_10 -> Sys_PushStack_10 */
float10 Sys_PushStack_10(float *param_1, float *param_2);
/* 0x004b2c70 Sys_PopStack_10 -> Sys_PopStack_10 */
uint32_t Sys_PopStack_10(float *param_1, float *param_2, float *param_3, float *param_4);
/* 0x004b2d00 Sys_ResolveSymbol_10 -> Sys_ResolveSymbol_10 */
void Sys_ResolveSymbol_10(float *param_1, float *param_2, float *param_3);
/* 0x004b2d90 Sys_CheckHeap_10 -> Sys_CheckHeap_10 */
bool Sys_CheckHeap_10(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5, float *param_6);
/* 0x004b30c0 Sys_AllocateMemory_11 -> Sys_AllocateMemory_11 */
void Sys_AllocateMemory_11(double *param_1, double param_2);
/* 0x004b3100 Sys_FreeMemory_11 -> Sys_FreeMemory_11 */
void Sys_FreeMemory_11(double *param_1);
/* 0x004b3130 Sys_OpenFileStream_11 -> Sys_OpenFileStream_11 */
float10 Sys_OpenFileStream_11(double *param_1);
/* 0x004b3160 Sys_ReadFileBlock_11 -> Sys_ReadFileBlock_11 */
void Sys_ReadFileBlock_11(void);
/* 0x004b3190 Sys_CloseFileStream_11 -> Sys_CloseFileStream_11 */
void Sys_CloseFileStream_11(uint32_t *param_1, double *param_2, double *param_3);
/* 0x004b31f0 Sys_ExecuteBytecode_11 -> Sys_ExecuteBytecode_11 */
float10 Sys_ExecuteBytecode_11(double *param_1, double *param_2);
/* 0x004b32b0 Sys_DispatchOpcode_11 -> Sys_DispatchOpcode_11 */
float10 Sys_DispatchOpcode_11(double *param_1, double *param_2);
/* 0x004b32f0 Sys_PushStack_11 -> Sys_PushStack_11 */
void Sys_PushStack_11(void);
/* 0x004b3320 Sys_PopStack_11 -> Sys_PopStack_11 */
uint32_t Sys_PopStack_11(double *param_1);
/* 0x004b3360 Sys_ResolveSymbol_11 -> Sys_ResolveSymbol_11 */
uint32_t Sys_ResolveSymbol_11(double *param_1, double *param_2);
/* 0x004b33a0 Sys_CheckHeap_11 -> Sys_CheckHeap_11 */
void Sys_CheckHeap_11(float *param_1, float *param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004b34f0 Sys_AllocateMemory_12 -> Sys_AllocateMemory_12 */
void Sys_AllocateMemory_12(float *param_1, float *param_2, uint32_t param_3);
/* 0x004b3640 Sys_FreeMemory_12 -> Sys_FreeMemory_12 */
void Sys_FreeMemory_12(float *param_1, float *param_2, uint32_t param_3);
/* 0x004b3790 Sys_OpenFileStream_12 -> Sys_OpenFileStream_12 */
void Sys_OpenFileStream_12(float *param_1, float *param_2, uint32_t param_3);
/* 0x004b38e0 Sys_ReadFileBlock_12 -> Sys_ReadFileBlock_12 */
void Sys_ReadFileBlock_12(float *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b3b60 Sys_CloseFileStream_12 -> Sys_CloseFileStream_12 */
void Sys_CloseFileStream_12(uint32_t *param_1, float param_2);
/* 0x004b3ba0 Sys_ExecuteBytecode_12 -> Sys_ExecuteBytecode_12 */
void Sys_ExecuteBytecode_12(float *param_1, float param_2);
/* 0x004b3be0 Sys_DispatchOpcode_12 -> Sys_DispatchOpcode_12 */
void Sys_DispatchOpcode_12(float *param_1, float param_2);
/* 0x004b3c20 Sys_PushStack_12 -> Sys_PushStack_12 */
void Sys_PushStack_12(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b3c50 Sys_Atan2UndefinedInOrig -> Sys_Atan2UndefinedInOrig */
void Sys_Atan2UndefinedInOrig(float *param_1, float *param_2, float *param_3, float *param_4);
/* 0x004b3ef0 Sys_PopStack_12 -> Sys_PopStack_12 */
void Sys_PopStack_12(float *param_1, float *param_2, float param_3);
/* 0x004b4010 Sys_ResolveSymbol_12 -> Sys_ResolveSymbol_12 */
void Sys_ResolveSymbol_12(float *param_1, float *param_2);
/* 0x004b4390 Sys_ReadFileBlock_13 -> Sys_ReadFileBlock_13 */
void Sys_ReadFileBlock_13(float *param_1, float *param_2);
/* 0x004b44d0 Sys_CloseFileStream_13 -> Sys_CloseFileStream_13 */
void Sys_CloseFileStream_13(uint8_t *param_1, float *param_2, float *param_3, uint32_t param_4, uint32_t param_5);
/* 0x004b4570 Sys_ExecuteBytecode_13 -> Sys_ExecuteBytecode_13 */
float10 Sys_ExecuteBytecode_13(float *param_1, float *param_2);
/* 0x004b45a0 Sys_DispatchOpcode_13 -> Sys_DispatchOpcode_13 */
void Sys_DispatchOpcode_13(float *param_1, float param_2, float param_3, float param_4);
/* 0x004b4660 Sys_PushStack_13 -> Sys_PushStack_13 */
void Sys_PushStack_13(float *param_1, float *param_2, float param_3);
/* 0x004b46a0 Sys_PopStack_13 -> Sys_PopStack_13 */
void Sys_PopStack_13(void);
/* 0x004b4720 Sys_ResolveSymbol_13 -> Sys_ResolveSymbol_13 */
void Sys_ResolveSymbol_13(uint32_t *param_1);
/* 0x004b4740 Sys_CheckHeap_13 -> Sys_CheckHeap_13 */
uint32_t Sys_CheckHeap_13(uint32_t *param_1);
/* 0x004b4770 Sys_AllocateMemory_14 -> Sys_AllocateMemory_14 */
float10 Sys_AllocateMemory_14(uint32_t *param_1);
/* 0x004b47c0 Sys_FreeMemory_14 -> Sys_FreeMemory_14 */
uint32_t Sys_FreeMemory_14(uint32_t param_1, uint32_t param_2);
/* 0x004b47e0 Sys_OpenFileStream_14 -> Sys_OpenFileStream_14 */
void Sys_OpenFileStream_14(uint32_t *param_1, uint32_t param_2);
/* 0x004b4820 Sys_ReadFileBlock_14 -> Sys_ReadFileBlock_14 */
void Sys_ReadFileBlock_14(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint32_t param_8, uint32_t param_9);
/* 0x004b4910 Sys_CloseFileStream_14 -> Sys_CloseFileStream_14 */
void Sys_CloseFileStream_14(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004b4a00 Sys_ExecuteBytecode_14 -> Sys_ExecuteBytecode_14 */
void Sys_ExecuteBytecode_14(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004b4af0 Sys_DispatchOpcode_14 -> Sys_DispatchOpcode_14 */
void Sys_DispatchOpcode_14(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11);
/* 0x004b4be0 Sys_PushStack_14 -> Sys_PushStack_14 */
void Sys_PushStack_14(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, uint32_t param_17, uint32_t param_18, uint32_t param_19, uint32_t param_20, uint32_t param_21, uint32_t param_22, uint32_t param_23);
/* 0x004b4e00 Sys_ResolveSymbol_14 -> Sys_ResolveSymbol_14 */
void Sys_ResolveSymbol_14(uint32_t *param_1, float param_2, float param_3, float param_4, float param_5, float param_6, int param_7, uint32_t param_8, uint32_t param_9);
/* 0x004b4f40 Sys_CheckHeap_14 -> Sys_CheckHeap_14 */
void Sys_CheckHeap_14(uint32_t *param_1, float param_2, float param_3, float param_4, float param_5, float param_6, int param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004b50b0 Sys_AllocateMemory_15 -> Sys_AllocateMemory_15 */
void Sys_AllocateMemory_15(uint32_t *param_1, float param_2, float param_3, float param_4, float param_5, float param_6, uint32_t param_7, uint32_t param_8, int param_9, uint32_t param_10, uint32_t param_11);
/* 0x004b51f0 Sys_FreeMemory_15 -> Sys_FreeMemory_15 */
void Sys_FreeMemory_15(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, float param_10, float param_11, float param_12, int param_13, uint32_t param_14, uint32_t param_15);
/* 0x004b53b0 Qsprite_Register4Az -> Qsprite_Register4Az */
void Qsprite_Register4Az(/*14 args*/);
/* 0x004b5560 Sys_CloseFileStream_15 -> Sys_CloseFileStream_15 */
void Sys_CloseFileStream_15(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15, uint32_t param_16, uint32_t param_17, float param_18, float param_19, float param_20, uint32_t param_21, uint32_t param_22, int param_23, uint32_t param_24, uint32_t param_25);
/* 0x004b5730 Sys_ExecuteBytecode_15 -> Sys_ExecuteBytecode_15 */
void Sys_ExecuteBytecode_15(float param_1, float param_2, uint32_t param_3, float param_4, float param_5, uint32_t param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15);
/* 0x004b5860 Sys_DispatchOpcode_15 -> Sys_DispatchOpcode_15 */
void Sys_DispatchOpcode_15(float *param_1, float param_2, float param_3, float param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, float param_10, float param_11, float param_12, uint32_t param_13, uint32_t param_14);
/* 0x004b59a0 Sys_QvertexRegisterstrip -> Sys_QvertexRegisterstrip */
void Sys_QvertexRegisterstrip(void);
/* 0x004b59d0 Sys_PushStack_15 -> Sys_PushStack_15 */
void Sys_PushStack_15(void);
/* 0x004b59f0 Sys_PopStack_15 -> Sys_PopStack_15 */
uint32_t *Sys_PopStack_15(uint32_t param_1, uint32_t param_2, uint32_t *param_3, uint32_t param_4, uint32_t param_5, uint32_t *param_6);
/* 0x004b5af0 Sys_ResolveSymbol_15 -> Sys_ResolveSymbol_15 */
void Sys_ResolveSymbol_15(uint8_t *param_1, char *param_2);
/* 0x004b5b30 Sys_CheckHeap_15 -> Sys_CheckHeap_15 */
uint32_t Sys_CheckHeap_15(char *param_1);
/* 0x004b5b60 Sys_AllocateMemory_16 -> Sys_AllocateMemory_16 */
uint32_t Sys_AllocateMemory_16(uint32_t param_1);
/* 0x004b5b90 Is_ResourceLoaded -> Is_ResourceLoaded */
int Is_ResourceLoaded(char* resourcePath, char** outEntry);
/* 0x004b5c90 Sys_FreeMemory_16 -> Sys_FreeMemory_16 */
void Sys_FreeMemory_16(int param_1);
/* 0x004b5d80 Sys_OpenFileStream_16 -> Sys_OpenFileStream_16 */
void Sys_OpenFileStream_16(uint32_t param_1, code *param_2, uint32_t param_3);
/* 0x004b5e70 Sys_ReadFileBlock_16 -> Sys_ReadFileBlock_16 */
void Sys_ReadFileBlock_16(void);
/* 0x004b5ec0 Sys_CloseFileStream_16 -> Sys_CloseFileStream_16 */
void Sys_CloseFileStream_16(void);
/* 0x004b5ee0 Sys_ExecuteBytecode_16 -> Sys_ExecuteBytecode_16 */
void Sys_ExecuteBytecode_16(void);
/* 0x004b5f00 Resource_Load -> Resource_Load */
int* Resource_Load(char* resourcePath, char** outBuffer);
/* 0x004b5f80 Sys_Resource -> Sys_Resource */
char * Sys_Resource(int param_1, char *param_2, uint32_t param_3);
/* 0x004b60f0 Sys_ErrorInResourceFileS -> Sys_ErrorInResourceFileS */
uint32_t Sys_ErrorInResourceFileS(uint32_t param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b6380 Resource_Unload -> Resource_Unload */
void Resource_Unload(int *resource_file);
/* 0x004b63d0 Resource_Flush -> Resource_Flush */
void Resource_Flush(void* resEntry);
/* 0x004b6420 Sys_DispatchOpcode_16 -> Sys_DispatchOpcode_16 */
void Sys_DispatchOpcode_16(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b6440 Sys_PushStack_16 -> Sys_PushStack_16 */
uint32_t Sys_PushStack_16(uint32_t *param_1, int param_2);
/* 0x004b6490 Sys_PopStack_16 -> Sys_PopStack_16 */
void Sys_PopStack_16(uint32_t param_1, uint32_t param_2);
/* 0x004b64b0 Sys_ResolveSymbol_16 -> Sys_ResolveSymbol_16 */
void Sys_ResolveSymbol_16(uint32_t param_1);
/* 0x004b64e0 Sys_CheckHeap_16 -> Sys_CheckHeap_16 */
void Sys_CheckHeap_16(uint32_t param_1);
/* 0x004b64f0 Sys_AllocateMemory_17 -> Sys_AllocateMemory_17 */
void Sys_AllocateMemory_17(uint32_t *param_1, int param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004b6540 Sys_FreeMemory_17 -> Sys_FreeMemory_17 */
void Sys_FreeMemory_17(int param_1, int param_2, int param_3, uint16_t param_4, uint16_t param_5, uint16_t param_6, uint16_t param_7, uint16_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13);
/* 0x004b65e0 Sys_OpenFileStream_17 -> Sys_OpenFileStream_17 */
void Sys_OpenFileStream_17(uint32_t *param_1, uint8_t param_2, uint16_t param_3, uint16_t param_4, uint16_t param_5, uint16_t param_6, uint16_t param_7, uint32_t param_8, uint32_t param_9, int param_10, int param_11);
/* 0x004b66a0 Sys_ReadFileBlock_17 -> Sys_ReadFileBlock_17 */
void Sys_ReadFileBlock_17(int *param_1);
/* 0x004b6720 Sys_IlfFileCorruptS -> Sys_IlfFileCorruptS */
int Sys_IlfFileCorruptS(int param_1, uint32_t param_2);
/* 0x004b6ce0 Sys_CloseFileStream_17 -> Sys_CloseFileStream_17 */
int Sys_CloseFileStream_17(int param_1);
/* 0x004b6d00 Sys_ExecuteBytecode_17 -> Sys_ExecuteBytecode_17 */
int Sys_ExecuteBytecode_17(int param_1);
/* 0x004b6d20 Sys_DispatchOpcode_17 -> Sys_DispatchOpcode_17 */
int Sys_DispatchOpcode_17(int param_1);
/* 0x004b6d40 Sys_PushStack_17 -> Sys_PushStack_17 */
uint32_t Sys_PushStack_17(int param_1);
/* 0x004b6d60 Sys_PopStack_17 -> Sys_PopStack_17 */
void Sys_PopStack_17(int param_1, int param_2);
/* 0x004b6db0 Sys_ResolveSymbol_17 -> Sys_ResolveSymbol_17 */
uint32_t * Sys_ResolveSymbol_17(uint32_t param_1);
/* 0x004b6e30 Sys_CheckHeap_17 -> Sys_CheckHeap_17 */
void Sys_CheckHeap_17(int *param_1);
/* 0x004b6e60 Sys_AllocateMemory_18 -> Sys_AllocateMemory_18 */
void Sys_AllocateMemory_18(uint32_t param_1);
/* 0x004b6e70 Picture_GetWidth -> Picture_GetWidth */
int Picture_GetWidth(void* picture);
/* 0x004b6e80 Picture_GetHeight -> Picture_GetHeight */
int Picture_GetHeight(void* picture);
/* 0x004b6e90 Sys_FreeMemory_18 -> Sys_FreeMemory_18 */
void Sys_FreeMemory_18(uint32_t *param_1, uint32_t param_2);
/* 0x004b6ec0 Sys_OpenFileStream_18 -> Sys_OpenFileStream_18 */
uint32_t *Sys_OpenFileStream_18(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b6f30 Sys_ReadFileBlock_18 -> Sys_ReadFileBlock_18 */
void Sys_ReadFileBlock_18(uint32_t *param_1);
/* 0x004b6f50 Sys_CloseFileStream_18 -> Sys_CloseFileStream_18 */
void Sys_CloseFileStream_18(uint32_t *param_1);
/* 0x004b6f90 Sys_ExecuteBytecode_18 -> Sys_ExecuteBytecode_18 */
void Sys_ExecuteBytecode_18(int param_1, float *param_2);
/* 0x004b7000 Sys_DispatchOpcode_18 -> Sys_DispatchOpcode_18 */
uint32_t Sys_DispatchOpcode_18(uint32_t param_1);
/* 0x004b7030 Sys_PushStack_18 -> Sys_PushStack_18 */
void Sys_PushStack_18(uint32_t param_1);
/* 0x004b7050 Sys_PopStack_18 -> Sys_PopStack_18 */
int Sys_PopStack_18(int param_1, char *param_2);
/* 0x004b70f0 Sys_ResolveSymbol_18 -> Sys_ResolveSymbol_18 */
void Sys_ResolveSymbol_18(uint32_t param_1);
/* 0x004b7160 Sys_CheckHeap_18 -> Sys_CheckHeap_18 */
void Sys_CheckHeap_18(uint32_t *param_1, int param_2);
/* 0x004b72e0 Sys_AllocateMemory_19 -> Sys_AllocateMemory_19 */
int Sys_AllocateMemory_19(int param_1, int param_2, int param_3);
/* 0x004b7330 Sys_FreeMemory_19 -> Sys_FreeMemory_19 */
void Sys_FreeMemory_19(int param_1);
/* 0x004b7360 Sys_OpenFileStream_19 -> Sys_OpenFileStream_19 */
void Sys_OpenFileStream_19(uint32_t param_1);
/* 0x004b73a0 Sys_ReadFileBlock_19 -> Sys_ReadFileBlock_19 */
void Sys_ReadFileBlock_19(uint32_t param_1);
/* 0x004b73c0 Sys_Sortrender -> Sys_Sortrender */
void Sys_Sortrender(void);
/* 0x004b73e0 Sys_CloseFileStream_19 -> Sys_CloseFileStream_19 */
void Sys_CloseFileStream_19(void);
/* 0x004b73f0 Sys_ExecuteBytecode_19 -> Sys_ExecuteBytecode_19 */
void Sys_ExecuteBytecode_19(int param_1);
/* 0x004b7430 Sys_DispatchOpcode_19 -> Sys_DispatchOpcode_19 */
void Sys_DispatchOpcode_19(int param_1, uint32_t param_2);
/* 0x004b7450 Sys_PushStack_19 -> Sys_PushStack_19 */
void Sys_PushStack_19(int param_1, int param_2);
/* 0x004b7470 Sys_PopStack_19 -> Sys_PopStack_19 */
int Sys_PopStack_19(int param_1);
/* 0x004b7490 Sys_ResolveSymbol_19 -> Sys_ResolveSymbol_19 */
int Sys_ResolveSymbol_19(int param_1);
/* 0x004b74d0 Sys_CheckHeap_19 -> Sys_CheckHeap_19 */
int Sys_CheckHeap_19(int param_1, int param_2);
/* 0x004b7540 Sys_AllocateMemory_20 -> Sys_AllocateMemory_20 */
void Sys_AllocateMemory_20(uint32_t *param_1, uint32_t *param_2, int param_3);
/* 0x004b7570 Sys_FreeMemory_20 -> Sys_FreeMemory_20 */
uint32_t Sys_FreeMemory_20(int param_1);
/* 0x004b7580 Sys_OpenFileStream_20 -> Sys_OpenFileStream_20 */
uint32_t Sys_OpenFileStream_20(uint32_t *param_1);
/* 0x004b7590 Sys_ReadFileBlock_20 -> Sys_ReadFileBlock_20 */
int * Sys_ReadFileBlock_20(int *param_1, int param_2);
/* 0x004b75c0 Sys_CloseFileStream_20 -> Sys_CloseFileStream_20 */
int Sys_CloseFileStream_20(int param_1, uint32_t param_2);
/* 0x004b7630 Sys_DispatchOpcode_20 -> Sys_DispatchOpcode_20 */
uint32_t * Sys_DispatchOpcode_20(int param_1, int param_2, uint32_t param_3);
/* 0x004b76d0 Sys_PushStack_20 -> Sys_PushStack_20 */
void Sys_PushStack_20(int param_1);
/* 0x004b76f0 Sys_PopStack_20 -> Sys_PopStack_20 */
void Sys_PopStack_20(int param_1, int param_2, int param_3, uint8_t param_4);
/* 0x004b7710 Sys_ResolveSymbol_20 -> Sys_ResolveSymbol_20 */
uint8_t Sys_ResolveSymbol_20(int param_1, int param_2, int param_3);
/* 0x004b7730 Sys_CheckHeap_20 -> Sys_CheckHeap_20 */
void Sys_CheckHeap_20(int *param_1, int param_2);
/* 0x004b77f0 Sys_AllocateMemory_21 -> Sys_AllocateMemory_21 */
void Sys_AllocateMemory_21(int param_1, byte *param_2, int param_3, int param_4);
/* 0x004b7850 Sys_FreeMemory_21 -> Sys_FreeMemory_21 */
void Sys_FreeMemory_21(uint32_t *param_1, int param_2);
/* 0x004b7930 Sys_OpenFileStream_21 -> Sys_OpenFileStream_21 */
void Sys_OpenFileStream_21(int *param_1, float param_2, float param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004b7bf0 Sys_ReadFileBlock_21 -> Sys_ReadFileBlock_21 */
void Sys_ReadFileBlock_21(int param_1);
/* 0x004b7c20 Sys_CloseFileStream_21 -> Sys_CloseFileStream_21 */
int Sys_CloseFileStream_21(int param_1);
/* 0x004b7c40 Sys_ExecuteBytecode_21 -> Sys_ExecuteBytecode_21 */
void Sys_ExecuteBytecode_21(int param_1);
/* 0x004b7c80 Sys_Allocpalette -> Sys_Allocpalette */
void Sys_Allocpalette(void);
/* 0x004b7cc0 Sys_DispatchOpcode_21 -> Sys_DispatchOpcode_21 */
void Sys_DispatchOpcode_21(void);
/* 0x004b7cf0 Sys_PushStack_21 -> Sys_PushStack_21 */
void Sys_PushStack_21(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b7d30 Sys_PopStack_21 -> Sys_PopStack_21 */
void Sys_PopStack_21(uint32_t *param_1);
/* 0x004b7d50 Sys_SIsNotAValidPaletteF -> Sys_SIsNotAValidPaletteF */
void Sys_SIsNotAValidPaletteF(uint32_t param_1, uint32_t param_2);
/* 0x004b7db0 Sys_ResolveSymbol_21 -> Sys_ResolveSymbol_21 */
void Sys_ResolveSymbol_21(uint32_t *param_1);
/* 0x004b7df0 Sys_CheckHeap_21 -> Sys_CheckHeap_21 */
void Sys_CheckHeap_21(uint32_t *param_1);
/* 0x004b7e00 Sys_AllocateMemory_22 -> Sys_AllocateMemory_22 */
void Sys_AllocateMemory_22(uint32_t *param_1);
/* 0x004b7e10 Sys_FreeMemory_22 -> Sys_FreeMemory_22 */
void Sys_FreeMemory_22(uint32_t param_1);
/* 0x004b7e80 SymbolRegister_Int16 -> SymbolRegister_Int16 */
void* SymbolRegister_Int16(int* table, char* name);
/* 0x004b7ea0 Sys_OpenFileStream_22 -> Sys_OpenFileStream_22 */
void Sys_OpenFileStream_22(void);
/* 0x004b7ee0 SymbolRegister_Bool8 -> SymbolRegister_Bool8 */
void* SymbolRegister_Bool8(int* table, char* name);
/* 0x004b7f00 Sys_ReadFileBlock_22 -> Sys_ReadFileBlock_22 */
void Sys_ReadFileBlock_22(void);
/* 0x004b7f40 Sys_CloseFileStream_22 -> Sys_CloseFileStream_22 */
void Sys_CloseFileStream_22(uint32_t param_1, uint32_t param_2);
/* 0x004b7f60 Sys_ExecuteBytecode_22 -> Sys_ExecuteBytecode_22 */
void Sys_ExecuteBytecode_22(void);
/* 0x004b7fa0 SymbolRegister_Int32 -> SymbolRegister_Int32 */
void* SymbolRegister_Int32(int* table, char* name);
/* 0x004b7fc0 SymbolRegister_Real32 -> SymbolRegister_Real32 */
void* SymbolRegister_Real32(int* table, char* name);
/* 0x004b7fe0 Sys_DispatchOpcode_22 -> Sys_DispatchOpcode_22 */
void Sys_DispatchOpcode_22(void);
/* 0x004b8030 Sys_PushStack_22 -> Sys_PushStack_22 */
void Sys_PushStack_22(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004b8060 Sys_PopStack_22 -> Sys_PopStack_22 */
void Sys_PopStack_22(void);
/* 0x004b80a0 Game_DataSymbolRemoveThunk -> Game_DataSymbolRemoveThunk */
void* Game_DataSymbolRemoveThunk(char* symBuf);
/* 0x004b80b0 Qvm_Load -> Qvm_Load */
int* Qvm_Load(char* qvmPath);
/* 0x004b83d0 Qvm_Cleanup -> Qvm_Cleanup */
void Qvm_Cleanup(void* qvm);
/* 0x004b8410 Qsc_Compile -> Qsc_Compile */
int Qsc_Compile(char* qscPath);
/* 0x004b85b0 Qvm_Execute -> Qvm_Execute */
int Qvm_Execute(void* qvm);
/* 0x004b86e0 Sys_ResolveSymbol_22 -> Sys_ResolveSymbol_22 */
uint32_t Sys_ResolveSymbol_22(char *param_1);
/* 0x004b8770 Sys_CheckHeap_22 -> Sys_CheckHeap_22 */
uint32_t Sys_CheckHeap_22(char *param_1);
/* 0x004b8810 TaskType_Set -> TaskType_Set */
void TaskType_Set(int** taskDef, int taskTypeId);
/* 0x004b8830 Sys_AllocateMemory_23 -> Sys_AllocateMemory_23 */
void Sys_AllocateMemory_23(void);
/* 0x004b8870 Sys_FreeMemory_23 -> Sys_FreeMemory_23 */
void Sys_FreeMemory_23(uint32_t param_1, uint32_t param_2);
/* 0x004b8890 Game_DefineOptions -> Game_DefineOptions */
void Game_DefineOptions(int **option_str, int option_func_addr, int opt1, int opt2);
/* 0x004b88c0 Sys_OpenFileStream_23 -> Sys_OpenFileStream_23 */
void Sys_OpenFileStream_23(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b88f0 Sys_ReadFileBlock_23 -> Sys_ReadFileBlock_23 */
void Sys_ReadFileBlock_23(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b8920 Sys_CloseFileStream_23 -> Sys_CloseFileStream_23 */
void Sys_CloseFileStream_23(uint32_t param_1);
/* 0x004b8930 Script_SetSymbolContext -> Script_SetSymbolContext */
void Script_SetSymbolContext(byte *symbol_name, int** symbol_buf);
/* 0x004b8970 Sys_ExecuteBytecode_23 -> Sys_ExecuteBytecode_23 */
void Sys_ExecuteBytecode_23(uint32_t param_1);
/* 0x004b8980 Sys_ScriptStackUnderflow -> Sys_ScriptStackUnderflow */
void Sys_ScriptStackUnderflow(uint32_t param_1);
/* 0x004b89c0 Sys_ScriptStackOverflow -> Sys_ScriptStackOverflow */
void Sys_ScriptStackOverflow(void);
/* 0x004b89f0 Sys_DispatchOpcode_23 -> Sys_DispatchOpcode_23 */
void Sys_DispatchOpcode_23(uint32_t param_1);
/* 0x004b8a00 Sys_PushStack_23 -> Sys_PushStack_23 */
void Sys_PushStack_23(uint32_t param_1);
/* 0x004b8a10 Sys_PopStack_23 -> Sys_PopStack_23 */
void Sys_PopStack_23(uint32_t param_1);
/* 0x004b8a20 Script_GetArg -> Script_GetArg */
void Script_GetArg();
/* 0x004b8a50 Profile_ValueSet -> Profile_ValueSet */
void Profile_ValueSet(void* profile, int index);
/* 0x004b8a80 Sys_ResolveSymbol_23 -> Sys_ResolveSymbol_23 */
void Sys_ResolveSymbol_23(int param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x004b8ad0 Sys_CheckHeap_23 -> Sys_CheckHeap_23 */
uint32_t Sys_CheckHeap_23(int param_1, int param_2);
/* 0x004b8b00 Sys_AllocateMemory_24 -> Sys_AllocateMemory_24 */
bool Sys_AllocateMemory_24(int *param_1, int param_2);
/* 0x004b8b20 Sys_False -> Sys_False */
void Sys_False(void);
/* 0x004b8c10 Break_Script -> Break_Script */
void Break_Script();
/* 0x004b8c60 Script_SetWarningLevel -> Script_SetWarningLevel */
void Script_SetWarningLevel(int level);
/* 0x004b8cc0 Sys_FreeMemory_24 -> Sys_FreeMemory_24 */
void Sys_FreeMemory_24(void);
/* 0x004b8ce0 Sys_SyntaxErrorInStringE -> Sys_SyntaxErrorInStringE */
char * Sys_SyntaxErrorInStringE(uint8_t *param_1, char *param_2, int param_3);
/* 0x004b9040 Sys_OpenFileStream_24 -> Sys_OpenFileStream_24 */
void Sys_OpenFileStream_24(uint32_t param_1, int param_2);
/* 0x004b9120 Sys_ReadFileBlock_24 -> Sys_ReadFileBlock_24 */
uint32_t Sys_ReadFileBlock_24(uint8_t *param_1);
/* 0x004b9660 Sys_DispatchOpcode_24 -> Sys_DispatchOpcode_24 */
float10 Sys_DispatchOpcode_24(uint8_t *param_1);
/* 0x004b9be0 Sys_PushStack_24 -> Sys_PushStack_24 */
void Sys_PushStack_24(char *param_1);
/* 0x004b9ca0 Sys_PopStack_24 -> Sys_PopStack_24 */
uint32_t Sys_PopStack_24(int param_1, uint32_t param_2);
/* 0x004b9cd0 Sys_ResolveSymbol_24 -> Sys_ResolveSymbol_24 */
uint32_t Sys_ResolveSymbol_24(int *param_1, uint32_t *param_2, int param_3, int param_4);
/* 0x004ba340 Sys_CheckHeap_24 -> Sys_CheckHeap_24 */
uint32_t Sys_CheckHeap_24(uint32_t param_1);
/* 0x004ba380 Sys_AllocateMemory_25 -> Sys_AllocateMemory_25 */
uint32_t Sys_AllocateMemory_25(uint32_t param_1);
/* 0x004ba3d0 Sys_ScriptInternalErrorU -> Sys_ScriptInternalErrorU */
uint32_t Sys_ScriptInternalErrorU(uint32_t param_1);
/* 0x004ba4c0 Sys_TooManyArgumentsToFu -> Sys_TooManyArgumentsToFu */
int * Sys_TooManyArgumentsToFu(int param_1, int param_2);
/* 0x004ba880 Sys_ScriptInternalErrorI -> Sys_ScriptInternalErrorI */
uint32_t * Sys_ScriptInternalErrorI(int param_1, char *param_2, int param_3, int param_4);
/* 0x004baa90 Sys_FreeMemory_25 -> Sys_FreeMemory_25 */
void Sys_FreeMemory_25(int param_1);
/* 0x004baac0 Q_TaskHashTableSet -> Q_TaskHashTableSet */
void Q_TaskHashTableSet(int** table, void* handler, int nameVal, int p4, int p5, int p6, int p7);
/* 0x004bab30 Sys_UndefinedSymbolS -> Sys_UndefinedSymbolS */
void Sys_UndefinedSymbolS(uint32_t param_1);
/* 0x004bab80 Sys_ReadFileBlock_25 -> Sys_ReadFileBlock_25 */
void Sys_ReadFileBlock_25(uint32_t param_1, uint32_t param_2);
/* 0x004baba0 Sys_CloseFileStream_25 -> Sys_CloseFileStream_25 */
uint32_t Sys_CloseFileStream_25(void);
/* 0x004babb0 Sys_ExecuteBytecode_25 -> Sys_ExecuteBytecode_25 */
int Sys_ExecuteBytecode_25(uint32_t param_1);
/* 0x004bac30 Sys_DispatchOpcode_25 -> Sys_DispatchOpcode_25 */
void Sys_DispatchOpcode_25(int param_1);
/* 0x004baca0 Sys_PushStack_25 -> Sys_PushStack_25 */
void Sys_PushStack_25(uint32_t param_1);
/* 0x004bacd0 Sys_PopStack_25 -> Sys_PopStack_25 */
void Sys_PopStack_25(void);
/* 0x004bad40 Sys_ResolveSymbol_25 -> Sys_ResolveSymbol_25 */
void Sys_ResolveSymbol_25(void);
/* 0x004bada0 Sys_CheckHeap_25 -> Sys_CheckHeap_25 */
void Sys_CheckHeap_25(uint32_t param_1);
/* 0x004badc0 Sys_AllocateMemory_26 -> Sys_AllocateMemory_26 */
uint32_t * Sys_AllocateMemory_26(int param_1, uint32_t param_2);
/* 0x004bae00 Sys_DuplicateLabelS -> Sys_DuplicateLabelS */
uint32_t * Sys_DuplicateLabelS(int param_1, char *param_2);
/* 0x004baf30 Sys_FreeMemory_26 -> Sys_FreeMemory_26 */
void Sys_FreeMemory_26(uint32_t param_1, uint32_t param_2);
/* 0x004bafa0 Sys_OpenFileStream_26 -> Sys_OpenFileStream_26 */
uint32_t Sys_OpenFileStream_26(int param_1, uint32_t param_2);
/* 0x004bafd0 Sys_ReadFileBlock_26 -> Sys_ReadFileBlock_26 */
uint32_t * Sys_ReadFileBlock_26(uint32_t param_1, uint32_t param_2);
/* 0x004bb030 Sys_CloseFileStream_26 -> Sys_CloseFileStream_26 */
int Sys_CloseFileStream_26(int param_1, uint32_t param_2);
/* 0x004bb110 Sys_ExecuteBytecode_26 -> Sys_ExecuteBytecode_26 */
void Sys_ExecuteBytecode_26(uint8_t *param_1, char *param_2);
/* 0x004bb180 Sys_DispatchOpcode_26 -> Sys_DispatchOpcode_26 */
int Sys_DispatchOpcode_26(int param_1, byte *param_2);
/* 0x004bb240 Sys_PushStack_26 -> Sys_PushStack_26 */
uint32_t Sys_PushStack_26(int param_1, uint32_t param_2);
/* 0x004bb270 QScript_Assemble -> QScript_Assemble */
int QScript_Assemble(char* srcText, int srcLen2);
/* 0x004bbc30 Log_Add -> Log_Add */
void Log_Add(char* format, ...);
/* 0x004bbc80 Sys_ResolveSymbol_26 -> Sys_ResolveSymbol_26 */
void Sys_ResolveSymbol_26(void);
/* 0x004bbcb0 QScript_ParseAndAssemble -> QScript_ParseAndAssemble */
int QScript_ParseAndAssemble(char* srcText, int options);
/* 0x004bbe90 Sys_CheckHeap_26 -> Sys_CheckHeap_26 */
void Sys_CheckHeap_26(uint32_t param_1);
/* 0x004bbef0 Sys_AllocateMemory_27 -> Sys_AllocateMemory_27 */
void Sys_AllocateMemory_27(uint32_t param_1);
/* 0x004bbf40 Sys_FreeMemory_27 -> Sys_FreeMemory_27 */
void Sys_FreeMemory_27(int param_1, uint32_t param_2);
/* 0x004bbf60 Sys_OpenFileStream_27 -> Sys_OpenFileStream_27 */
void Sys_OpenFileStream_27(uint32_t param_1);
/* 0x004bbf80 Sys_InternalErrorUnknown -> Sys_InternalErrorUnknown */
void Sys_InternalErrorUnknown(uint32_t param_1, uint32_t *param_2);
/* 0x004bc2a0 Sys_ReadFileBlock_27 -> Sys_ReadFileBlock_27 */
void Sys_ReadFileBlock_27(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004bc2c0 Sys_CloseFileStream_27 -> Sys_CloseFileStream_27 */
void Sys_CloseFileStream_27(uint32_t param_1, char *param_2);
/* 0x004bc2f0 Sys_UnknownExpressionTyp -> Sys_UnknownExpressionTyp */
void Sys_UnknownExpressionTyp(int param_1, uint8_t *param_2);
/* 0x004bc770 Sys_ExecuteBytecode_27 -> Sys_ExecuteBytecode_27 */
void Sys_ExecuteBytecode_27(uint32_t param_1);
/* 0x004bc790 Sys_DispatchOpcode_27 -> Sys_DispatchOpcode_27 */
void Sys_DispatchOpcode_27(uint32_t param_1, char *param_2);
/* 0x004bc880 Sys_PopStack_27 -> Sys_PopStack_27 */
void Sys_PopStack_27(uint32_t param_1, uint32_t param_2);
/* 0x004bc8d0 Sys_ResolveSymbol_27 -> Sys_ResolveSymbol_27 */
void Sys_ResolveSymbol_27(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004bc920 Sys_CheckHeap_27 -> Sys_CheckHeap_27 */
void Sys_CheckHeap_27(void);
/* 0x004bc960 Sys_UnknownDataType -> Sys_UnknownDataType */
void Sys_UnknownDataType(int param_1);
/* 0x004bcab0 Sys_AllocateMemory_28 -> Sys_AllocateMemory_28 */
uint32_t Sys_AllocateMemory_28(uint32_t param_1, uint32_t param_2);
/* 0x004bcae0 Sys_UnknownDataType_2 -> Sys_UnknownDataType_2 */
uint32_t Sys_UnknownDataType_2(int *param_1, int param_2, int param_3, int param_4, int param_5);
/* 0x004bcc00 Sys_FreeMemory_28 -> Sys_FreeMemory_28 */
uint32_t Sys_FreeMemory_28(int param_1, uint32_t *param_2, uint32_t *param_3, int *param_4);
/* 0x004bccc0 Sys_UnknownDataType_3 -> Sys_UnknownDataType_3 */
uint32_t Sys_UnknownDataType_3(int param_1, int *param_2, int *param_3, uint32_t *param_4);
/* 0x004bcd90 Sys_OpenFileStream_28 -> Sys_OpenFileStream_28 */
uint32_t Sys_OpenFileStream_28(char *param_1, uint32_t param_2);
/* 0x004bce40 Sys_ReadFileBlock_28 -> Sys_ReadFileBlock_28 */
void Sys_ReadFileBlock_28(int param_1, char *param_2, uint32_t param_3);
/* 0x004bcec0 Sys_CloseFileStream_28 -> Sys_CloseFileStream_28 */
int Sys_CloseFileStream_28(int *param_1, int *param_2, float *param_3);
/* 0x004bcfd0 Sys_ExecuteBytecode_28 -> Sys_ExecuteBytecode_28 */
void Sys_ExecuteBytecode_28(int *param_1);
/* 0x004bd010 Sys_DispatchOpcode_28 -> Sys_DispatchOpcode_28 */
float10 Sys_DispatchOpcode_28(uint32_t param_1, uint32_t param_2);
/* 0x004bd040 Sys_PushStack_28 -> Sys_PushStack_28 */
uint8_t *Sys_PushStack_28(uint32_t param_1, uint32_t param_2, uint8_t *param_3, uint32_t param_4);
/* 0x004bd070 Sys_PopStack_28 -> Sys_PopStack_28 */
uint32_t Sys_PopStack_28(void);
/* 0x004bd080 Sys_UndefinedError -> Sys_UndefinedError */
int Sys_UndefinedError(int *param_1);
/* 0x004bd220 Sys_ResolveSymbol_28 -> Sys_ResolveSymbol_28 */
uint32_t * Sys_ResolveSymbol_28(uint32_t param_1, int param_2, int param_3);
/* 0x004bd380 Sys_CheckHeap_28 -> Sys_CheckHeap_28 */
void Sys_CheckHeap_28(int param_1);
/* 0x004bd3d0 Sys_AllocateMemory_29 -> Sys_AllocateMemory_29 */
void Sys_AllocateMemory_29(int param_1, int param_2, uint32_t param_3);
/* 0x004bd3f0 Sys_FreeMemory_29 -> Sys_FreeMemory_29 */
void Sys_FreeMemory_29(int param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x004bd430 Sys_OpenFileStream_29 -> Sys_OpenFileStream_29 */
void Sys_OpenFileStream_29(void);
/* 0x004bd860 Sys_ReadFileBlock_29 -> Sys_ReadFileBlock_29 */
void Sys_ReadFileBlock_29(int param_1);
/* 0x004bd880 Sys_CloseFileStream_29 -> Sys_CloseFileStream_29 */
void Sys_CloseFileStream_29(void);
/* 0x004bd9c0 Sys_ExecuteBytecode_29 -> Sys_ExecuteBytecode_29 */
void Sys_ExecuteBytecode_29(int param_1);
/* 0x004bd9e0 Sys_DispatchOpcode_29 -> Sys_DispatchOpcode_29 */
void Sys_DispatchOpcode_29(int param_1);
/* 0x004bda00 Sys_PushStack_29 -> Sys_PushStack_29 */
void Sys_PushStack_29(int param_1, uint32_t param_2);
/* 0x004bda30 Sys_PopStack_29 -> Sys_PopStack_29 */
void Sys_PopStack_29(int param_1, uint32_t param_2);
/* 0x004bda60 Sys_ResolveSymbol_29 -> Sys_ResolveSymbol_29 */
void Sys_ResolveSymbol_29(void);
/* 0x004be620 Sys_CheckHeap_29 -> Sys_CheckHeap_29 */
int Sys_CheckHeap_29(uint32_t param_1, uint32_t *param_2, uint32_t param_3, uint32_t *param_4, uint32_t param_5);
/* 0x004be810 Sys_AllocateMemory_30 -> Sys_AllocateMemory_30 */
void Sys_AllocateMemory_30(int param_1);
/* 0x004be830 Sys_FreeMemory_30 -> Sys_FreeMemory_30 */
void Sys_FreeMemory_30(int param_1);
/* 0x004be850 Sys_OpenFileStream_30 -> Sys_OpenFileStream_30 */
void Sys_OpenFileStream_30(int param_1);
/* 0x004be870 Sys_InternalError -> Sys_InternalError */
void Sys_InternalError(int *param_1);
/* 0x004be8b0 Sys_InternalError_2 -> Sys_InternalError_2 */
void Sys_InternalError_2(int *param_1);
/* 0x004be8f0 Sys_InternalError_3 -> Sys_InternalError_3 */
void Sys_InternalError_3(int *param_1);
/* 0x004be950 Sys_ReadFileBlock_30 -> Sys_ReadFileBlock_30 */
void Sys_ReadFileBlock_30(int param_1, uint32_t param_2);
/* 0x004be9a0 Sys_CloseFileStream_30 -> Sys_CloseFileStream_30 */
void Sys_CloseFileStream_30(int *param_1);
/* 0x004be9d0 Sys_UnhandledOpcode -> Sys_UnhandledOpcode */
void Sys_UnhandledOpcode(int *param_1);
/* 0x004bea30 Sys_UnhandledOpcode_2 -> Sys_UnhandledOpcode_2 */
void Sys_UnhandledOpcode_2(int *param_1);
/* 0x004bec10 Sys_ExecuteBytecode_30 -> Sys_ExecuteBytecode_30 */
void Sys_ExecuteBytecode_30(int param_1, uint32_t param_2);
/* 0x004bec40 Sys_DispatchOpcode_30 -> Sys_DispatchOpcode_30 */
int Sys_DispatchOpcode_30(int param_1, int param_2);
/* 0x004bef60 Sys_PushStack_30 -> Sys_PushStack_30 */
uint32_t *Sys_PushStack_30(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004befc0 Sys_PopStack_30 -> Sys_PopStack_30 */
void Sys_PopStack_30(int param_1);
/* 0x004bf1c0 Sys_ResolveSymbol_30 -> Sys_ResolveSymbol_30 */
void Sys_ResolveSymbol_30(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004bf1e0 Sys_CheckHeap_30 -> Sys_CheckHeap_30 */
void Sys_CheckHeap_30(int param_1);
/* 0x004bf1f0 Sys_UnexpectedEndOfFile -> Sys_UnexpectedEndOfFile */
uint32_t Sys_UnexpectedEndOfFile(int param_1, uint32_t *param_2);
/* 0x004bf390 Sys_AllocateMemory_31 -> Sys_AllocateMemory_31 */
int Sys_AllocateMemory_31(int *param_1);
/* 0x004bf3a0 Sys_While -> Sys_While */
int Sys_While(int param_1);
/* 0x004bf580 Sys_SyntaxErrorInLineD -> Sys_SyntaxErrorInLineD */
uint32_t Sys_SyntaxErrorInLineD(uint32_t param_1, uint32_t param_2);
/* 0x004bf620 Sys_UnexpectedEndOfFile_2 -> Sys_UnexpectedEndOfFile_2 */
uint32_t Sys_UnexpectedEndOfFile_2(int param_1, uint32_t *param_2);
/* 0x004bf850 Sys_OpenFileStream_31 -> Sys_OpenFileStream_31 */
uint32_t Sys_OpenFileStream_31(int param_1, uint32_t *param_2);
/* 0x004bf8f0 Sys_UnknownBlockType -> Sys_UnknownBlockType */
void Sys_UnknownBlockType(int param_1);
/* 0x004bfa80 Sys_UnknownBlockType_2 -> Sys_UnknownBlockType_2 */
void Sys_UnknownBlockType_2(int param_1);
/* 0x004bfbe0 Sys_ReadFileBlock_31 -> Sys_ReadFileBlock_31 */
void Sys_ReadFileBlock_31(uint32_t param_1, int param_2);
/* 0x004bfc70 Sys_CloseFileStream_31 -> Sys_CloseFileStream_31 */
bool Sys_CloseFileStream_31(uint32_t *param_1, int *param_2);
/* 0x004c0170 DynObj_FindSymbol -> DynObj_FindSymbol */
uint32_t DynObj_FindSymbol(int param_1);
/* 0x004c01d0 DynObj_InsertHashItem -> DynObj_InsertHashItem */
uint32_t DynObj_InsertHashItem(int param_1);
/* 0x004c0200 Script_BufInit -> Script_BufInit */
void Script_BufInit(int* outBuf1, int buf2, int buf3, int bufSize);
/* 0x004c0230 DynObj_LookupHashItem -> DynObj_LookupHashItem */
uint32_t DynObj_LookupHashItem(int *param_1);
/* 0x004c0240 DynObj_CreateMagicObject -> DynObj_CreateMagicObject */
uint32_t DynObj_CreateMagicObject(int *param_1);
/* 0x004c0250 DynObj_ParseConfigFile -> DynObj_ParseConfigFile */
void DynObj_ParseConfigFile(void);
/* 0x004c0260 DynObj_UpdateDynTree -> DynObj_UpdateDynTree */
void DynObj_UpdateDynTree(int *param_1, code *param_2, uint32_t param_3);
/* 0x004c02c0 DynObj_LinkDynamicCube -> DynObj_LinkDynamicCube */
void DynObj_LinkDynamicCube(int *param_1, code *param_2, uint32_t param_3);
/* 0x004c0360 DynObj_RemoveSymbol -> DynObj_RemoveSymbol */
int * DynObj_RemoveSymbol(int param_1);
/* 0x004c03c0 DynObj_RegisterSymbol_2 -> DynObj_RegisterSymbol_2 */
void DynObj_RegisterSymbol_2(uint32_t *param_1);
/* 0x004c03f0 DynObj_FindSymbol_2 -> DynObj_FindSymbol_2 */
void DynObj_FindSymbol_2(int *param_1);
/* 0x004c0460 Symbol_Remove -> Symbol_Remove */
int Symbol_Remove(int* symTable, char* symName);
/* 0x004c04b0 DynObj_InsertHashItem_2 -> DynObj_InsertHashItem_2 */
uint32_t DynObj_InsertHashItem_2(int *param_1, uint32_t *param_2, byte *param_3);
/* 0x004c0530 DynObj_LookupHashItem_2 -> DynObj_LookupHashItem_2 */
uint32_t DynObj_LookupHashItem_2(byte *param_1, uint32_t param_2);
/* 0x004c0560 Symbol_CheckRegister -> Symbol_CheckRegister */
void* Symbol_CheckRegister(int* symTable, char* symName, int extra);
/* 0x004c0620 DynObj_CreateMagicObject_2 -> DynObj_CreateMagicObject_2 */
uint32_t DynObj_CreateMagicObject_2(uint32_t param_1, uint32_t *param_2, int param_3);
/* 0x004c0660 DynObj_ParseConfigFile_2 -> DynObj_ParseConfigFile_2 */
void DynObj_ParseConfigFile_2(uint32_t *param_1);
/* 0x004c0680 DynObj_UpdateDynTree_2 -> DynObj_UpdateDynTree_2 */
void DynObj_UpdateDynTree_2(uint32_t param_1, char *param_2, uint32_t param_3, uint32_t param_4);
/* 0x004c0720 DynObj_LinkDynamicCube_2 -> DynObj_LinkDynamicCube_2 */
void DynObj_LinkDynamicCube_2(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004c0750 DynObj_RemoveSymbol_2 -> DynObj_RemoveSymbol_2 */
void DynObj_RemoveSymbol_2(int param_1);
/* 0x004c0780 DynObj_RegisterSymbol_3 -> DynObj_RegisterSymbol_3 */
uint32_t DynObj_RegisterSymbol_3(int param_1, int *param_2);
/* 0x004c08c0 DynObj_FindSymbol_3 -> DynObj_FindSymbol_3 */
uint32_t DynObj_FindSymbol_3(char *param_1);
/* 0x004c0900 DynObj_InsertHashItem_3 -> DynObj_InsertHashItem_3 */
void DynObj_InsertHashItem_3(void);
/* 0x004c0a10 DynObj_LookupHashItem_3 -> DynObj_LookupHashItem_3 */
void DynObj_LookupHashItem_3(void);
/* 0x004c0e60 DynObj_CreateMagicObject_3 -> DynObj_CreateMagicObject_3 */
void DynObj_CreateMagicObject_3(void);
/* 0x004c0f80 DynObj_ParseConfigFile_3 -> DynObj_ParseConfigFile_3 */
void DynObj_ParseConfigFile_3(void);
/* 0x004c10e0 DynObj_UpdateDynTree_3 -> DynObj_UpdateDynTree_3 */
void DynObj_UpdateDynTree_3(void);
/* 0x004c11f0 DynObj_LinkDynamicCube_3 -> DynObj_LinkDynamicCube_3 */
void DynObj_LinkDynamicCube_3(uint32_t *param_1);
/* 0x004c1270 DynObj_RemoveSymbol_3 -> DynObj_RemoveSymbol_3 */
void DynObj_RemoveSymbol_3(void);
/* 0x004c1530 DynObj_RegisterSymbol_4 -> DynObj_RegisterSymbol_4 */
int DynObj_RegisterSymbol_4(int param_1, int param_2);
/* 0x004c1560 DynObj_FindSymbol_4 -> DynObj_FindSymbol_4 */
void DynObj_FindSymbol_4(uint32_t param_1, char *param_2);
/* 0x004c1600 DynObj_InsertHashItem_4 -> DynObj_InsertHashItem_4 */
void DynObj_InsertHashItem_4(void);
/* 0x004c1780 AnimSound_LoadParameters -> AnimSound_LoadParameters */
void AnimSound_LoadParameters(void);
/* 0x004c1790 DynObj_QtasklistIsFull -> DynObj_QtasklistIsFull */
void DynObj_QtasklistIsFull(int *param_1, int param_2);
/* 0x004c17c0 DynObj_TryingToRemoveUnrigi -> DynObj_TryingToRemoveUnrigi */
void DynObj_TryingToRemoveUnrigi(int *param_1, int param_2);
/* 0x004c1800 DynObj_LookupHashItem_4 -> DynObj_LookupHashItem_4 */
void DynObj_LookupHashItem_4(int param_1);
/* 0x004c1830 DynObj_CreateMagicObject_4 -> DynObj_CreateMagicObject_4 */
void DynObj_CreateMagicObject_4(uint32_t param_1);
/* 0x004c1840 RigidDynCubeObj_Setup -> RigidDynCubeObj_Setup */
void RigidDynCubeObj_Setup(int param_1, uint32_t *param_2);
/* 0x004c2f90 DynObj_ParseConfigFile_4 -> DynObj_ParseConfigFile_4 */
void DynObj_ParseConfigFile_4(uint32_t *param_1);
/* 0x004c3010 RigidDynCubeObj_Action -> RigidDynCubeObj_Action */
void RigidDynCubeObj_Action(int param_1, uint32_t *param_2);
/* 0x004c31f0 RigidDynCubeObj_Cleanup -> RigidDynCubeObj_Cleanup */
void RigidDynCubeObj_Cleanup(int param_1, uint32_t *param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14);
/* 0x004c3440 DynObj_UpdateDynTree_4 -> DynObj_UpdateDynTree_4 */
int DynObj_UpdateDynTree_4(int param_1);
/* 0x004c3450 RigidDynCubeObj_Init -> RigidDynCubeObj_Init */
void RigidDynCubeObj_Init(void);
/* 0x004c35f0 RigidDynCubeObj_OnEvent -> RigidDynCubeObj_OnEvent */
void RigidDynCubeObj_OnEvent(int param_1, uint32_t *param_2);
/* 0x004c4520 Define_MagicObj -> Define_MagicObj */
void Define_MagicObj(...);
/* 0x004c4660 RigidDynCubeObj_Cleanup_2 -> RigidDynCubeObj_Cleanup_2 */
void RigidDynCubeObj_Cleanup_2(int param_1, int *param_2);
/* 0x004c4780 RigidDynCubeObj_Cleanup_3 -> RigidDynCubeObj_Cleanup_3 */
void RigidDynCubeObj_Cleanup_3(void);
/* 0x004c4820 DynObj_FindSymbol_5 -> DynObj_FindSymbol_5 */
void DynObj_FindSymbol_5(void);
/* 0x004c48c0 DynObj_LookupHashItem_5 -> DynObj_LookupHashItem_5 */
uint16_t DynObj_LookupHashItem_5(void);
/* 0x004c48d0 DynObj_CreateMagicObject_5 -> DynObj_CreateMagicObject_5 */
void DynObj_CreateMagicObject_5(int param_1, uint32_t param_2);
/* 0x004c48e0 Rigid_DyncubeObjRead -> Rigid_DyncubeObjRead */
void Rigid_DyncubeObjRead(uint32_t *cfg_file);
/* 0x004c4930 Magic_ObjLoad -> Magic_ObjLoad */
void Magic_ObjLoad(char *path);
/* 0x004c4950 Car_GunCreate -> Car_GunCreate */
void Car_GunCreate();
/* 0x004c56d0 DynObj_RemoveSymbol_5 -> DynObj_RemoveSymbol_5 */
uint8_t DynObj_RemoveSymbol_5(void);
/* 0x004c56e0 DynObj_RegisterSymbol_6 -> DynObj_RegisterSymbol_6 */
uint8_t DynObj_RegisterSymbol_6(void);
/* 0x004c56f0 DynObj_FindSymbol_6 -> DynObj_FindSymbol_6 */
uint8_t DynObj_FindSymbol_6(void);
/* 0x004c5700 DynObj_InsertHashItem_6 -> DynObj_InsertHashItem_6 */
uint8_t DynObj_InsertHashItem_6(void);
/* 0x004c5710 DynObj_LookupHashItem_6 -> DynObj_LookupHashItem_6 */
void DynObj_LookupHashItem_6(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x004c5800 DynObj_CreateMagicObject_6 -> DynObj_CreateMagicObject_6 */
uint8_t DynObj_CreateMagicObject_6(void);
/* 0x004c5810 DynObj_ParseConfigFile_6 -> DynObj_ParseConfigFile_6 */
void DynObj_ParseConfigFile_6(void);
/* 0x004c5830 DynObj_UpdateDynTree_6 -> DynObj_UpdateDynTree_6 */
void DynObj_UpdateDynTree_6(void);
/* 0x004c5870 DynObj_LinkDynamicCube_6 -> DynObj_LinkDynamicCube_6 */
void DynObj_LinkDynamicCube_6(void);
/* 0x004c58b0 DynObj_InvalidDyncubetree -> DynObj_InvalidDyncubetree */
uint32_t DynObj_InvalidDyncubetree(uint32_t param_1);
/* 0x004c5900 DynObj_RemoveSymbol_6 -> DynObj_RemoveSymbol_6 */
void DynObj_RemoveSymbol_6(void);
/* 0x004c5a10 DynObj_RegisterSymbol_7 -> DynObj_RegisterSymbol_7 */
void DynObj_RegisterSymbol_7(int param_1, uint32_t *param_2);
/* 0x004c5aa0 DynObj_FindSymbol_7 -> DynObj_FindSymbol_7 */
void DynObj_FindSymbol_7(void);
/* 0x004c5b20 DynObj_InsertHashItem_7 -> DynObj_InsertHashItem_7 */
int DynObj_InsertHashItem_7(uint32_t *param_1);
/* 0x004c5c90 DynObj_LookupHashItem_7 -> DynObj_LookupHashItem_7 */
void DynObj_LookupHashItem_7(uint32_t param_1, uint32_t *param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004c5ce0 DynObj_CreateMagicObject_7 -> DynObj_CreateMagicObject_7 */
void DynObj_CreateMagicObject_7(int param_1);
/* 0x004c5f00 DynObj_ParseConfigFile_7 -> DynObj_ParseConfigFile_7 */
void DynObj_ParseConfigFile_7(int param_1, char *param_2);
/* 0x004c6160 DynObj_UpdateDynTree_7 -> DynObj_UpdateDynTree_7 */
void DynObj_UpdateDynTree_7(int param_1);
/* 0x004c6240 DynObj_Createterrainmateria -> DynObj_Createterrainmateria */
void DynObj_Createterrainmateria(int param_1, char *param_2);
/* 0x004c6670 CreateTerrainMaterial -> CreateTerrainMaterial */
unknown CreateTerrainMaterial(unknown param1, unknown param2);
/* 0x004c6760 Create_TerrainTileMap -> Create_TerrainTileMap */
void Create_TerrainTileMap(...);
/* 0x004c67e0 DynObj_LinkDynamicCube_7 -> DynObj_LinkDynamicCube_7 */
uint32_t DynObj_LinkDynamicCube_7(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004c6840 DynObj_RemoveSymbol_7 -> DynObj_RemoveSymbol_7 */
void DynObj_RemoveSymbol_7(int param_1, int param_2, int param_3);
/* 0x004c6890 DynObj_RegisterSymbol_8 -> DynObj_RegisterSymbol_8 */
void DynObj_RegisterSymbol_8(int param_1, int param_2, int param_3);
/* 0x004c6940 WorldObject_CommitTransform -> WorldObject_CommitTransform */
void WorldObject_CommitTransform();
/* 0x004c6b20 DynObj_FindSymbol_8 -> DynObj_FindSymbol_8 */
void DynObj_FindSymbol_8(int param_1, uint32_t param_2, uint32_t param_3, int *param_4);
/* 0x004c6ce0 DynObj_InsertHashItem_8 -> DynObj_InsertHashItem_8 */
void DynObj_InsertHashItem_8(int param_1, int param_2);
/* 0x004c6d20 DynObj_LookupHashItem_8 -> DynObj_LookupHashItem_8 */
void DynObj_LookupHashItem_8(int param_1, uint32_t *param_2, int param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x004c6e30 DynObj_ParseConfigFile_8 -> DynObj_ParseConfigFile_8 */
void DynObj_ParseConfigFile_8(int param_1, int param_2);
/* 0x004c6e70 DynObj_UpdateDynTree_8 -> DynObj_UpdateDynTree_8 */
void DynObj_UpdateDynTree_8(int param_1, int param_2, double *param_3, double *param_4, double *param_5);
/* 0x004c7140 DynObj_LinkDynamicCube_8 -> DynObj_LinkDynamicCube_8 */
void DynObj_LinkDynamicCube_8(int param_1, int param_2, double *param_3, float param_4, uint32_t param_5);
/* 0x004c7290 DynObj_InvalidCategory -> DynObj_InvalidCategory */
int DynObj_InvalidCategory(int param_1, uint32_t param_2);
/* 0x004c7350 DynObj_RemoveSymbol_8 -> DynObj_RemoveSymbol_8 */
void DynObj_RemoveSymbol_8(int param_1, int param_2, double *param_3, double *param_4, double *param_5, uint32_t param_6);
/* 0x004c7560 DynObj_RegisterSymbol_9 -> DynObj_RegisterSymbol_9 */
void DynObj_RegisterSymbol_9(int param_1, int param_2);
/* 0x004c75f0 DynObj_FindSymbol_9 -> DynObj_FindSymbol_9 */
void DynObj_FindSymbol_9(int param_1, int param_2);
/* 0x004c7750 DynObj_InsertHashItem_9 -> DynObj_InsertHashItem_9 */
uint32_t DynObj_InsertHashItem_9(int param_1, int param_2);
/* 0x004c7760 DynObj_LookupHashItem_9 -> DynObj_LookupHashItem_9 */
void DynObj_LookupHashItem_9(uint32_t param_1);
/* 0x004c7770 DynObj_CreateMagicObject_9 -> DynObj_CreateMagicObject_9 */
void DynObj_CreateMagicObject_9(int param_1, uint32_t param_2, uint32_t param_3, double *param_4, double *param_5, uint32_t param_6, int param_7);
/* 0x004c8130 DynObj_ParseConfigFile_9 -> DynObj_ParseConfigFile_9 */
void DynObj_ParseConfigFile_9(float param_1, uint32_t param_2, uint32_tlong param_3, double *param_4, int param_5, uint32_t param_6, uint32_t param_7);
/* 0x004c9020 DynObj_LinkDynamicCube_9 -> DynObj_LinkDynamicCube_9 */
uint32_t DynObj_LinkDynamicCube_9(short *param_1, double *param_2, double *param_3, byte param_4, uint32_t *param_5, uint32_t param_6);
/* 0x004c9750 DynObj_RemoveSymbol_9 -> DynObj_RemoveSymbol_9 */
void DynObj_RemoveSymbol_9(int param_1, int *param_2, uint32_t *param_3, uint32_t param_4, uint8_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x004c9a30 DynObj_RegisterSymbol_10 -> DynObj_RegisterSymbol_10 */
int DynObj_RegisterSymbol_10(int param_1, uint32_t *param_2, uint32_t param_3, double *param_4, int param_5);
/* 0x004c9d70 DynObj_FindSymbol_10 -> DynObj_FindSymbol_10 */
uint32_t DynObj_FindSymbol_10(int *param_1, double *param_2, int param_3);
/* 0x004ca010 DynObj_InsertHashItem_10 -> DynObj_InsertHashItem_10 */
uint32_t DynObj_InsertHashItem_10(short *param_1, double *param_2, double *param_3, double *param_4, byte param_5, uint32_t *param_6, uint32_t param_7, uint32_t param_8, float *param_9);
/* 0x004cabf0 DynObj_LookupHashItem_10 -> DynObj_LookupHashItem_10 */
void DynObj_LookupHashItem_10(int param_1, int param_2, uint32_t *param_3, double *param_4, double *param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004cb050 DynObj_CreateMagicObject_10 -> DynObj_CreateMagicObject_10 */
uint32_t DynObj_CreateMagicObject_10(int param_1, int *param_2, double *param_3, uint32_t param_4, int param_5, int param_6, int param_7);
/* 0x004cb810 DynObj_ParseConfigFile_10 -> DynObj_ParseConfigFile_10 */
uint8_t DynObj_ParseConfigFile_10(uint32_t param_1, double *param_2);
/* 0x004cb9f0 DynObj_UpdateDynTree_10 -> DynObj_UpdateDynTree_10 */
void DynObj_UpdateDynTree_10(int param_1, int param_2, uint32_t *param_3, int param_4, double *param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004cbe40 DynObj_RemoveSymbol_10 -> DynObj_RemoveSymbol_10 */
void DynObj_RemoveSymbol_10(int param_1, int param_2, uint32_t *param_3, int param_4, double *param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004cc2a0 DynObj_FindSymbol_11 -> DynObj_FindSymbol_11 */
void DynObj_FindSymbol_11(int param_1, uint32_t *param_2, double *param_3, double *param_4, int param_5, uint8_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004cc810 DynObj_InsertHashItem_11 -> DynObj_InsertHashItem_11 */
uint32_t DynObj_InsertHashItem_11(uint32_t param_1, uint32_t *param_2, uint32_t param_3, double *param_4, double *param_5, uint32_t param_6, int param_7, int param_8, int param_9, float param_10, float param_11, float param_12, int param_13, uint32_t *param_14, int *param_15, int param_16, uint32_t param_17, double *param_18, float param_19, int param_20, uint32_t param_21, double param_22, double param_23, double param_24, int param_25, int param_26, int param_27, uint32_t param_28, int param_29, int param_30, int param_31, int param_32, int param_33, uint32_t param_34, uint32_t param_35, int param_36, uint32_t param_37, int param_38, int param_39, int param_40, int param_41, uint32_t param_42, uint32_t param_43, double param_44, double param_45, double param_46, double param_47, double param_48, double param_49, uint32_t param_50, uint32_t param_51, uint32_t param_52, double param_53, uint32_t param_54, uint32_t param_55, double param_56, double param_57, double param_58);
/* 0x004cd300 DynObj_LookupHashItem_11 -> DynObj_LookupHashItem_11 */
uint32_t DynObj_LookupHashItem_11(short *param_1, double *param_2, double *param_3, double *param_4, uint32_t *param_5, byte param_6, uint32_t *param_7, uint32_t *param_8, uint32_t param_9, float *param_10);
/* 0x004cdb20 World_TraceBatch -> World_TraceBatch */
void World_TraceBatch();
/* 0x004ce090 DynObj_CreateMagicObject_11 -> DynObj_CreateMagicObject_11 */
void DynObj_CreateMagicObject_11(int param_1, uint32_t param_2, uint32_t param_3, double *param_4, uint32_t param_5, int param_6);
/* 0x004ce390 DynObj_ParseConfigFile_11 -> DynObj_ParseConfigFile_11 */
void DynObj_ParseConfigFile_11(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5);
/* 0x004ce3d0 DynObj_UpdateDynTree_11 -> DynObj_UpdateDynTree_11 */
void DynObj_UpdateDynTree_11(int param_1);
/* 0x004ce3e0 DynObj_LinkDynamicCube_11 -> DynObj_LinkDynamicCube_11 */
void DynObj_LinkDynamicCube_11(int param_1, int param_2, uint32_t param_3);
/* 0x004ce400 DynObj_RemoveSymbol_11 -> DynObj_RemoveSymbol_11 */
uint32_t DynObj_RemoveSymbol_11(int param_1, int param_2);
/* 0x004ce410 DynObj_RegisterSymbol_12 -> DynObj_RegisterSymbol_12 */
bool DynObj_RegisterSymbol_12(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint8_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, float *param_8);
/* 0x004ce530 DynObj_FindSymbol_12 -> DynObj_FindSymbol_12 */
void DynObj_FindSymbol_12(int param_1, int param_2);
/* 0x004ce5c0 DynObj_InsertHashItem_12 -> DynObj_InsertHashItem_12 */
void DynObj_InsertHashItem_12(int param_1, int param_2);
/* 0x004ce620 DynObj_LookupHashItem_12 -> DynObj_LookupHashItem_12 */
void DynObj_LookupHashItem_12(int *param_1, int param_2);
/* 0x004ce830 DynObj_CreateMagicObject_12 -> DynObj_CreateMagicObject_12 */
void DynObj_CreateMagicObject_12(int param_1, int param_2);
/* 0x004ce910 DynObj_ParseConfigFile_12 -> DynObj_ParseConfigFile_12 */
void DynObj_ParseConfigFile_12(uint32_t param_1, int *param_2, uint32_t param_3, uint32_t *param_4);
/* 0x004cea10 DynObj_UpdateDynTree_12 -> DynObj_UpdateDynTree_12 */
uint8_t DynObj_UpdateDynTree_12(void);
/* 0x004cea20 DynObj_LinkDynamicCube_12 -> DynObj_LinkDynamicCube_12 */
uint8_t DynObj_LinkDynamicCube_12(void);
/* 0x004cea30 DynObj_RemoveSymbol_12 -> DynObj_RemoveSymbol_12 */
void DynObj_RemoveSymbol_12(int param_1);
/* 0x004cea60 DynObj_RegisterSymbol_13 -> DynObj_RegisterSymbol_13 */
uint32_t DynObj_RegisterSymbol_13(void);
/* 0x004cea70 DynObj_FindSymbol_13 -> DynObj_FindSymbol_13 */
uint32_t DynObj_FindSymbol_13(void);
/* 0x004cea80 DynObj_InsertHashItem_13 -> DynObj_InsertHashItem_13 */
uint32_t DynObj_InsertHashItem_13(void);
/* 0x004cea90 DynObj_LookupHashItem_13 -> DynObj_LookupHashItem_13 */
uint32_t DynObj_LookupHashItem_13(void);
/* 0x004ceaa0 DynObj_CreateMagicObject_13 -> DynObj_CreateMagicObject_13 */
uint32_t * DynObj_CreateMagicObject_13(int param_1, uint32_t param_2, uint32_t *param_3);
/* 0x004ceba0 DynObj_MtpNlodvirmodelD -> DynObj_MtpNlodvirmodelD */
uint32_t * DynObj_MtpNlodvirmodelD(char *param_1);
/* 0x004cec10 DynObj_Missing -> DynObj_Missing */
int DynObj_Missing(char *param_1);
/* 0x004cec40 DynObj_Johan -> DynObj_Johan */
uint32_t * DynObj_Johan(byte *param_1);
/* 0x004ced50 DynObj_Johan_2 -> DynObj_Johan_2 */
void DynObj_Johan_2(int *param_1);
/* 0x004cee30 DynObj_ParseConfigFile_13 -> DynObj_ParseConfigFile_13 */
uint32_t * DynObj_ParseConfigFile_13(byte *param_1);
/* 0x004ceea0 DynObj_UpdateDynTree_13 -> DynObj_UpdateDynTree_13 */
void DynObj_UpdateDynTree_13(void);
/* 0x004ceeb0 DynObj_Initmodels -> DynObj_Initmodels */
void DynObj_Initmodels(void);
/* 0x004cef30 DynObj_LinkDynamicCube_13 -> DynObj_LinkDynamicCube_13 */
void DynObj_LinkDynamicCube_13(void);
/* 0x004cef40 DynObj_RemoveSymbol_13 -> DynObj_RemoveSymbol_13 */
void DynObj_RemoveSymbol_13(void);
/* 0x004cefa0 DynObj_RegisterSymbol_14 -> DynObj_RegisterSymbol_14 */
uint32_t * DynObj_RegisterSymbol_14(uint32_t param_1);
/* 0x004cf050 DynObj_FindSymbol_14 -> DynObj_FindSymbol_14 */
void DynObj_FindSymbol_14(void);
/* 0x004cf080 DynObj_InsertHashItem_14 -> DynObj_InsertHashItem_14 */
void DynObj_InsertHashItem_14(int param_1, uint32_t param_2, int param_3);
/* 0x004cf300 DynObj_LookupHashItem_14 -> DynObj_LookupHashItem_14 */
uint32_t * DynObj_LookupHashItem_14(uint32_t *param_1, int param_2);
/* 0x004cf330 DynObj_CreateMagicObject_14 -> DynObj_CreateMagicObject_14 */
void DynObj_CreateMagicObject_14(int param_1);
/* 0x004cf390 DynObj_LocalModelsSMef -> DynObj_LocalModelsSMef */
uint32_t * DynObj_LocalModelsSMef(uint32_t param_1);
/* 0x004cf630 DynObj_ParseConfigFile_14 -> DynObj_ParseConfigFile_14 */
void DynObj_ParseConfigFile_14(int param_1);
/* 0x004cf690 DynObj_UpdateDynTree_14 -> DynObj_UpdateDynTree_14 */
uint32_t * DynObj_UpdateDynTree_14(uint32_t param_1);
/* 0x004cf790 DynObj_LocalTexturesSTex -> DynObj_LocalTexturesSTex */
void DynObj_LocalTexturesSTex(int param_1);
/* 0x004cf870 DynObj_LinkDynamicCube_14 -> DynObj_LinkDynamicCube_14 */
void DynObj_LinkDynamicCube_14(int param_1);
/* 0x004cf910 DynObj_RemoveSymbol_14 -> DynObj_RemoveSymbol_14 */
void DynObj_RemoveSymbol_14(int param_1);
/* 0x004cf9d0 DynObj_RegisterSymbol_15 -> DynObj_RegisterSymbol_15 */
void DynObj_RegisterSymbol_15(int param_1);
/* 0x004cfb30 DynObj_FindSymbol_15 -> DynObj_FindSymbol_15 */
void DynObj_FindSymbol_15(int param_1);
/* 0x004cfbb0 DynObj_InsertHashItem_15 -> DynObj_InsertHashItem_15 */
void DynObj_InsertHashItem_15(int param_1);
/* 0x004cfbd0 DynObj_LookupHashItem_15 -> DynObj_LookupHashItem_15 */
void DynObj_LookupHashItem_15(char *param_1);
/* 0x004cfc00 DynObj_CreateMagicObject_15 -> DynObj_CreateMagicObject_15 */
void DynObj_CreateMagicObject_15(char *param_1);
/* 0x004cfc30 DynObj_ParseConfigFile_15 -> DynObj_ParseConfigFile_15 */
uint32_t DynObj_ParseConfigFile_15(void);
/* 0x004cfc40 DynObj_UpdateDynTree_15 -> DynObj_UpdateDynTree_15 */
uint32_t DynObj_UpdateDynTree_15(void);
/* 0x004cfc50 DynObj_LinkDynamicCube_15 -> DynObj_LinkDynamicCube_15 */
uint32_t DynObj_LinkDynamicCube_15(void);
/* 0x004cfc60 DynObj_RemoveSymbol_15 -> DynObj_RemoveSymbol_15 */
uint32_t DynObj_RemoveSymbol_15(void);
/* 0x004cfc70 DynObj_RegisterSymbol_16 -> DynObj_RegisterSymbol_16 */
uint8_t DynObj_RegisterSymbol_16(void);
/* 0x004cfc80 DynObj_FindSymbol_16 -> DynObj_FindSymbol_16 */
uint8_t DynObj_FindSymbol_16(void);
/* 0x004cfc90 DynObj_InsertHashItem_16 -> DynObj_InsertHashItem_16 */
uint8_t DynObj_InsertHashItem_16(void);
/* 0x004cfca0 DynObj_LookupHashItem_16 -> DynObj_LookupHashItem_16 */
uint8_t DynObj_LookupHashItem_16(void);
/* 0x004cfcb0 DynObj_CreateMagicObject_16 -> DynObj_CreateMagicObject_16 */
int DynObj_CreateMagicObject_16(int param_1);
/* 0x004cff70 DynObj_ParseConfigFile_16 -> DynObj_ParseConfigFile_16 */
int DynObj_ParseConfigFile_16(int param_1);
/* 0x004d0180 Render_DrawRigidMesh -> Render_DrawRigidMesh */
int Render_DrawRigidMesh(int param_1);
/* 0x004d03d0 Render_DrawBoneMesh -> Render_DrawBoneMesh */
uint32_t Render_DrawBoneMesh(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004d0510 Render_DrawSplineMesh -> Render_DrawSplineMesh */
void Render_DrawSplineMesh(int param_1, uint32_t param_2);
/* 0x004d06c0 Render_DrawLightmapMesh -> Render_DrawLightmapMesh */
void Render_DrawLightmapMesh(int param_1, uint32_t param_2);
/* 0x004d0790 Render_SkinBones -> Render_SkinBones */
void Render_SkinBones(float param_1, uint32_t param_2);
/* 0x004d0930 Render_TransformVertices -> Render_TransformVertices */
void Render_TransformVertices(uint32_t *param_1);
/* 0x004d0950 Render_ComputeNormals -> Render_ComputeNormals */
float10 Render_ComputeNormals(int *param_1);
/* 0x004d0970 Render_SetupLighting -> Render_SetupLighting */
void Render_SetupLighting(float *param_1, int param_2, int param_3);
/* 0x004d09e0 Render_BindTexture -> Render_BindTexture */
void Render_BindTexture(float *param_1, int param_2, int param_3, uint32_t param_4);
/* 0x004d0a50 Render_ClipMesh -> Render_ClipMesh */
void Render_ClipMesh(double *param_1, int param_2, int param_3);
/* 0x004d0b30 Render_Genericuvfromrenderm -> Render_Genericuvfromrenderm */
void Render_Genericuvfromrenderm(void);
/* 0x004d0c50 Render_DrawRigidMesh_2 -> Render_DrawRigidMesh_2 */
void Render_DrawRigidMesh_2(void);
/* 0x004d0cf0 Render_DrawBoneMesh_2 -> Render_DrawBoneMesh_2 */
int Render_DrawBoneMesh_2(int param_1, int param_2);
/* 0x004d0d10 Render_DrawSplineMesh_2 -> Render_DrawSplineMesh_2 */
int Render_DrawSplineMesh_2(int param_1);
/* 0x004d0d20 Render_DrawLightmapMesh_2 -> Render_DrawLightmapMesh_2 */
int Render_DrawLightmapMesh_2(int param_1);
/* 0x004d0d30 Render_SkinBones_2 -> Render_SkinBones_2 */
void Render_SkinBones_2(int *param_1);
/* 0x004d0d80 Render_TransformVertices_2 -> Render_TransformVertices_2 */
uint32_t Render_TransformVertices_2(void);
/* 0x004d0d90 Render_ComputeNormals_2 -> Render_ComputeNormals_2 */
uint32_t Render_ComputeNormals_2(int param_1);
/* 0x004d0da0 Render_SetupLighting_2 -> Render_SetupLighting_2 */
uint32_t Render_SetupLighting_2(int param_1, int param_2);
/* 0x004d0dc0 Render_BindTexture_2 -> Render_BindTexture_2 */
void Render_BindTexture_2(int param_1, int param_2, uint32_t param_3);
/* 0x004d0de0 Render_ClipMesh_2 -> Render_ClipMesh_2 */
void Render_ClipMesh_2(int param_1);
/* 0x004d0e20 Render_DrawRigidMesh_3 -> Render_DrawRigidMesh_3 */
void Render_DrawRigidMesh_3(int param_1);
/* 0x004d0e50 Render_DrawBoneMesh_3 -> Render_DrawBoneMesh_3 */
int Render_DrawBoneMesh_3(int param_1);
/* 0x004d0e60 Render_DrawSplineMesh_3 -> Render_DrawSplineMesh_3 */
void Render_DrawSplineMesh_3(int param_1, uint32_t *param_2);
/* 0x004d0ea0 Render_DrawLightmapMesh_3 -> Render_DrawLightmapMesh_3 */
void Render_DrawLightmapMesh_3(int param_1, uint32_t *param_2);
/* 0x004d0ee0 Render_SkinBones_3 -> Render_SkinBones_3 */
void Render_SkinBones_3(uint32_t param_1);
/* 0x004d0ef0 Render_TransformVertices_3 -> Render_TransformVertices_3 */
void Render_TransformVertices_3(void);
/* 0x004d11c0 Render_ComputeNormals_3 -> Render_ComputeNormals_3 */
void Render_ComputeNormals_3(void);
/* 0x004d1220 Render_SetupLighting_3 -> Render_SetupLighting_3 */
void Render_SetupLighting_3(void);
/* 0x004d1260 Render_BindTexture_3 -> Render_BindTexture_3 */
void Render_BindTexture_3(void);
/* 0x004d12c0 Render_ClipMesh_3 -> Render_ClipMesh_3 */
void Render_ClipMesh_3(uint32_t param_1);
/* 0x004d14a0 Render_DrawRigidMesh_4 -> Render_DrawRigidMesh_4 */
void Render_DrawRigidMesh_4(uint32_t *param_1, uint32_t param_2);
/* 0x004d14c0 Render_DrawBoneMesh_4 -> Render_DrawBoneMesh_4 */
uint8_t Render_DrawBoneMesh_4(void);
/* 0x004d14d0 Render_DrawSplineMesh_4 -> Render_DrawSplineMesh_4 */
uint8_t Render_DrawSplineMesh_4(void);
/* 0x004d14e0 Render_ShouldHaveAllocatedD -> Render_ShouldHaveAllocatedD */
void Render_ShouldHaveAllocatedD(int param_1);
/* 0x004d2540 Render_DrawLightmapMesh_4 -> Render_DrawLightmapMesh_4 */
void Render_DrawLightmapMesh_4(int param_1);
/* 0x004d2650 Render_SkinBones_4 -> Render_SkinBones_4 */
void Render_SkinBones_4(int param_1, char *param_2, int param_3);
/* 0x004d27f0 Render_ComputeNormals_4 -> Render_ComputeNormals_4 */
void Render_ComputeNormals_4(int param_1);
/* 0x004d2840 Render_ClosestZ2F -> Render_ClosestZ2F */
void Render_ClosestZ2F(void);
/* 0x004d2a20 Render_IllegalAllocInfo -> Render_IllegalAllocInfo */
void Render_IllegalAllocInfo(void);
/* 0x004d2b80 Render_NoMoreQcubeCallbacks -> Render_NoMoreQcubeCallbacks */
void Render_NoMoreQcubeCallbacks(uint32_t param_1);
/* 0x004d2bd0 Render_CallbackNotFound -> Render_CallbackNotFound */
void Render_CallbackNotFound(int param_1);
/* 0x004d2c20 Render_SetupLighting_4 -> Render_SetupLighting_4 */
void Render_SetupLighting_4(uint32_t param_1);
/* 0x004d2c30 Render_BindTexture_4 -> Render_BindTexture_4 */
void Render_BindTexture_4(void);
/* 0x004d2cf0 Render_ClipMesh_4 -> Render_ClipMesh_4 */
void Render_ClipMesh_4(void);
/* 0x004d2d30 Render_DrawRigidMesh_5 -> Render_DrawRigidMesh_5 */
void Render_DrawRigidMesh_5(float param_1);
/* 0x004d2d50 Render_DrawBoneMesh_5 -> Render_DrawBoneMesh_5 */
float10 Render_DrawBoneMesh_5(void);
/* 0x004d2d60 Render_FailedToCreateBoneob -> Render_FailedToCreateBoneob */
void Render_FailedToCreateBoneob(int *param_1, int param_2);
/* 0x004d2e40 Render_DrawSplineMesh_5 -> Render_DrawSplineMesh_5 */
void Render_DrawSplineMesh_5(int *param_1);
/* 0x004d2ec0 Render_DrawLightmapMesh_5 -> Render_DrawLightmapMesh_5 */
void Render_DrawLightmapMesh_5(uint32_t param_1, int param_2);
/* 0x004d2f80 Render_SkinBones_5 -> Render_SkinBones_5 */
void Render_SkinBones_5(uint32_t *param_1, int param_2);
/* 0x004d2fb0 Render_TransformVertices_5 -> Render_TransformVertices_5 */
void Render_TransformVertices_5(uint32_t *param_1, uint32_t *param_2, int param_3);
/* 0x004d3020 Render_ComputeNormals_5 -> Render_ComputeNormals_5 */
uint32_t Render_ComputeNormals_5(uint32_t *param_1, uint32_t *param_2, int param_3);
/* 0x004d3160 Render_SetupLighting_5 -> Render_SetupLighting_5 */
void Render_SetupLighting_5(float *param_1, float *param_2, float *param_3, float param_4);
/* 0x004d31c0 Render_BindTexture_5 -> Render_BindTexture_5 */
uint32_t Render_BindTexture_5(uint32_t param_1, uint32_t param_2, int *param_3);
/* 0x004d3210 Render_ClipMesh_5 -> Render_ClipMesh_5 */
uint32_t Render_ClipMesh_5(uint32_t param_1, int *param_2);
/* 0x004d32a0 Render_DrawRigidMesh_6 -> Render_DrawRigidMesh_6 */
uint32_t Render_DrawRigidMesh_6(uint32_t param_1, uint32_t param_2, int param_3, int param_4);
/* 0x004d33d0 Render_BlendbranchToIllegal -> Render_BlendbranchToIllegal */
uint32_t Render_BlendbranchToIllegal(uint32_t param_1, uint32_t param_2, uint32_t param_3, int *param_4);
/* 0x004d3440 Render_BoneobjDeleteblendno -> Render_BoneobjDeleteblendno */
void Render_BoneobjDeleteblendno(uint32_t param_1, uint32_t param_2);
/* 0x004d34a0 Render_DrawBoneMesh_6 -> Render_DrawBoneMesh_6 */
void Render_DrawBoneMesh_6(int param_1);
/* 0x004d3560 Render_DrawSplineMesh_6 -> Render_DrawSplineMesh_6 */
uint32_t Render_DrawSplineMesh_6(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10);
/* 0x004d35b0 Render_DrawLightmapMesh_6 -> Render_DrawLightmapMesh_6 */
void Render_DrawLightmapMesh_6(void);
/* 0x004d3600 Render_SkinBones_6 -> Render_SkinBones_6 */
void Render_SkinBones_6(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12);
/* 0x004d3660 Render_TransformVertices_6 -> Render_TransformVertices_6 */
void Render_TransformVertices_6(uint32_t *param_1);
/* 0x004d36e0 Render_ComputeNormals_6 -> Render_ComputeNormals_6 */
void Render_ComputeNormals_6(int param_1);
/* 0x004d3710 AIGraph_LoadParameters -> AIGraph_LoadParameters */
void AIGraph_LoadParameters(void);
/* 0x004d3720 Render_SetupLighting_6 -> Render_SetupLighting_6 */
int Render_SetupLighting_6(int param_1, int param_2);
/* 0x004d3730 Render_BindTexture_6 -> Render_BindTexture_6 */
void Render_BindTexture_6(int param_1);
/* 0x004d3750 Render_ClipMesh_6 -> Render_ClipMesh_6 */
int * Render_ClipMesh_6(int *param_1);
/* 0x004d38a0 Render_DrawRigidMesh_7 -> Render_DrawRigidMesh_7 */
void Render_DrawRigidMesh_7(uint32_t param_1, uint32_t param_2);
/* 0x004d38c0 Render_DrawBoneMesh_7 -> Render_DrawBoneMesh_7 */
void Render_DrawBoneMesh_7(float *param_1, int param_2);
/* 0x004d3a90 Render_DrawSplineMesh_7 -> Render_DrawSplineMesh_7 */
void Render_DrawSplineMesh_7(float *param_1, float *param_2, float *param_3, int param_4, int param_5);
/* 0x004d3f50 Render_DrawLightmapMesh_7 -> Render_DrawLightmapMesh_7 */
int Render_DrawLightmapMesh_7(float *param_1, int param_2, code *param_3);
/* 0x004d4190 Render_SkinBones_7 -> Render_SkinBones_7 */
void Render_SkinBones_7(uint32_t *param_1, uint32_t *param_2);
/* 0x004d41c0 Render_TransformVertices_7 -> Render_TransformVertices_7 */
int Render_TransformVertices_7(float *param_1, int param_2, float *param_3, int param_4, float *param_5, uint32_t param_6);
/* 0x004d4500 Render_ComputeNormals_7 -> Render_ComputeNormals_7 */
void Render_ComputeNormals_7(float *param_1, float *param_2, float *param_3, float param_4);
/* 0x004d4690 Render_SetupLighting_7 -> Render_SetupLighting_7 */
uint32_t Render_SetupLighting_7(uint32_t param_1, uint32_t param_2, int *param_3);
/* 0x004d46e0 Render_BindTexture_7 -> Render_BindTexture_7 */
uint32_t Render_BindTexture_7(uint32_t param_1);
/* 0x004d4710 Render_ClipMesh_7 -> Render_ClipMesh_7 */
void Render_ClipMesh_7(void);
/* 0x004d4750 Render_DrawRigidMesh_8 -> Render_DrawRigidMesh_8 */
void Render_DrawRigidMesh_8(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004d47b0 Render_DrawBoneMesh_8 -> Render_DrawBoneMesh_8 */
void Render_DrawBoneMesh_8(int param_1);
/* 0x004d47d0 Render_DrawSplineMesh_8 -> Render_DrawSplineMesh_8 */
uint32_t Render_DrawSplineMesh_8(int param_1, uint32_t param_2, int param_3, uint32_t param_4);
/* 0x004d4840 Render_DrawLightmapMesh_8 -> Render_DrawLightmapMesh_8 */
uint32_t Render_DrawLightmapMesh_8(uint32_t *param_1, uint32_t *param_2, float param_3);
/* 0x004d4b60 Render_SkinBones_8 -> Render_SkinBones_8 */
uint32_t Render_SkinBones_8(int param_1, uint32_t param_2, int *param_3, float param_4);
/* 0x004d4dc0 Render_ComputeNormals_8 -> Render_ComputeNormals_8 */
int Render_ComputeNormals_8(int param_1, int param_2, uint32_t *param_3, int param_4, float param_5, float param_6);
/* 0x004d4f20 Render_SetupLighting_8 -> Render_SetupLighting_8 */
void Render_SetupLighting_8(void);
/* 0x004d4f60 Render_BindTexture_8 -> Render_BindTexture_8 */
void Render_BindTexture_8(uint32_t *param_1, uint32_t *param_2, uint32_t param_3, int param_4, uint32_t param_5, uint32_t param_6);
/* 0x004d5090 Render_ClipMesh_8 -> Render_ClipMesh_8 */
void Render_ClipMesh_8(int param_1);
/* 0x004d5700 Render_DrawRigidMesh_9 -> Render_DrawRigidMesh_9 */
uint32_t Render_DrawRigidMesh_9(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004d5750 Render_DrawBoneMesh_9 -> Render_DrawBoneMesh_9 */
void Render_DrawBoneMesh_9(void);
/* 0x004d5790 Render_DrawSplineMesh_9 -> Render_DrawSplineMesh_9 */
void Render_DrawSplineMesh_9(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t *param_4);
/* 0x004d5ec0 Render_DrawLightmapMesh_9 -> Render_DrawLightmapMesh_9 */
void Render_DrawLightmapMesh_9(int param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x004d5f90 Render_SkinBones_9 -> Render_SkinBones_9 */
void Render_SkinBones_9(void);
/* 0x004d5fd0 Render_TransformVertices_9 -> Render_TransformVertices_9 */
void Render_TransformVertices_9(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004d5ff0 Render_ComputeNormals_9 -> Render_ComputeNormals_9 */
void Render_ComputeNormals_9(int param_1, int param_2, float param_3, uint32_t param_4);
/* 0x004d6110 Render_SetupLighting_9 -> Render_SetupLighting_9 */
void Render_SetupLighting_9(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004d6130 Render_BindTexture_9 -> Render_BindTexture_9 */
void Render_BindTexture_9(uint32_t *param_1, int param_2, uint32_t param_3, uint32_t param_4, int param_5, uint32_t param_6, float param_7);
/* 0x004d61d0 Bones_PlayAnimation -> Bones_PlayAnimation */
void Bones_PlayAnimation(void* bones, int bone, int animId, int flags, float blendSeconds);
/* 0x004d62b0 Render_ClipMesh_9 -> Render_ClipMesh_9 */
void Render_ClipMesh_9(int param_1, int param_2, float param_3);
/* 0x004d6400 Render_DrawRigidMesh_10 -> Render_DrawRigidMesh_10 */
void Render_DrawRigidMesh_10(int param_1);
/* 0x004d6460 Render_DrawBoneMesh_10 -> Render_DrawBoneMesh_10 */
uint32_t Render_DrawBoneMesh_10(int param_1, int param_2);
/* 0x004d64c0 Render_DrawSplineMesh_10 -> Render_DrawSplineMesh_10 */
uint32_t Render_DrawSplineMesh_10(uint32_t param_1, uint32_t param_2);
/* 0x004d64e0 Render_DrawLightmapMesh_10 -> Render_DrawLightmapMesh_10 */
float10 Render_DrawLightmapMesh_10(uint32_t param_1, uint32_t param_2);
/* 0x004d6500 Render_SkinBones_10 -> Render_SkinBones_10 */
float10 Render_SkinBones_10(uint32_t param_1, uint32_t param_2);
/* 0x004d6520 Render_TransformVertices_10 -> Render_TransformVertices_10 */
float10 Render_TransformVertices_10(uint32_t param_1, uint32_t param_2);
/* 0x004d6550 Render_ComputeNormals_10 -> Render_ComputeNormals_10 */
void Render_ComputeNormals_10(int param_1);
/* 0x004d6580 Render_SetupLighting_10 -> Render_SetupLighting_10 */
void Render_SetupLighting_10(uint32_t param_1, uint32_t param_2, float param_3);
/* 0x004d65b0 Render_BindTexture_10 -> Render_BindTexture_10 */
void Render_BindTexture_10(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004d65d0 Render_ClipMesh_10 -> Render_ClipMesh_10 */
void Render_ClipMesh_10(void);
/* 0x004d65f0 Render_DrawRigidMesh_11 -> Render_DrawRigidMesh_11 */
void Render_DrawRigidMesh_11(int param_1);
/* 0x004d6640 Render_DrawBoneMesh_11 -> Render_DrawBoneMesh_11 */
void Render_DrawBoneMesh_11(int param_1);
/* 0x004d67a0 Render_FileSIsNotIffFile -> Render_FileSIsNotIffFile */
void Render_FileSIsNotIffFile(uint32_t param_1);
/* 0x004d6d40 Render_DrawSplineMesh_11 -> Render_DrawSplineMesh_11 */
void Render_DrawSplineMesh_11(int param_1);
/* 0x004d6fc0 Render_DrawLightmapMesh_11 -> Render_DrawLightmapMesh_11 */
void Render_DrawLightmapMesh_11(uint32_t *param_1, uint32_t *param_2, int *param_3, int param_4, int param_5);
/* 0x004d7020 Render_SkinBones_11 -> Render_SkinBones_11 */
uint32_t Render_SkinBones_11(int param_1, int param_2);
/* 0x004d7040 Render_TransformVertices_11 -> Render_TransformVertices_11 */
uint32_t Render_TransformVertices_11(int param_1, int param_2);
/* 0x004d7070 Render_ComputeNormals_11 -> Render_ComputeNormals_11 */
void Render_ComputeNormals_11(int param_1, float *param_2, int param_3, int param_4, int param_5);
/* 0x004d74d0 Render_SetupLighting_11 -> Render_SetupLighting_11 */
float10 Render_SetupLighting_11(int param_1, int param_2);
/* 0x004d74f0 Render_BindTexture_11 -> Render_BindTexture_11 */
bool Render_BindTexture_11(int *param_1, int param_2, int param_3);
/* 0x004d7550 BoneDynCubeObj_Init -> BoneDynCubeObj_Init */
void BoneDynCubeObj_Init(void);
/* 0x004d7620 BoneDynCubeObj_Setup -> BoneDynCubeObj_Setup */
void BoneDynCubeObj_Setup(float param_1, uint32_t *param_2);
/* 0x004d88d0 BoneDynCubeObj_Process -> BoneDynCubeObj_Process */
void BoneDynCubeObj_Process(float param_1, uint32_t *param_2);
/* 0x004d94f0 BoneDynCubeObj_Update -> BoneDynCubeObj_Update */
void BoneDynCubeObj_Update(int param_1, int *param_2);
/* 0x004d95a0 BoneDynCubeObj_OnEvent -> BoneDynCubeObj_OnEvent */
void BoneDynCubeObj_OnEvent(int param_1, int param_2);
/* 0x004d95e0 Render_ClipMesh_11 -> Render_ClipMesh_11 */
void Render_ClipMesh_11(void);
/* 0x004d9610 Render_DrawRigidMesh_12 -> Render_DrawRigidMesh_12 */
uint16_t Render_DrawRigidMesh_12(void);
/* 0x004d9620 Render_DrawBoneMesh_12 -> Render_DrawBoneMesh_12 */
void Render_DrawBoneMesh_12(uint32_t param_1, int param_2, short param_3, uint32_t param_4);
/* 0x004d96f0 Render_DrawSplineMesh_12 -> Render_DrawSplineMesh_12 */
void Render_DrawSplineMesh_12(int param_1);
/* 0x004d9700 Render_VirmodelIsNull -> Render_VirmodelIsNull */
void Render_VirmodelIsNull(int param_1, int param_2);
/* 0x004d9730 QObj_Init -> QObj_Init */
void QObj_Init(void);
/* 0x004d9790 QObj_Update -> QObj_Update */
void QObj_Update(void);
/* 0x004d97e0 QObj_OnEvent -> QObj_OnEvent */
uint8_t QObj_OnEvent(void);
/* 0x004d97f0 Qtask_SetCallbackData -> Qtask_SetCallbackData */
void Qtask_SetCallbackData(void* task, unsigned int callbackData);
/* 0x004d9800 Qtask_GetCallbackData -> Qtask_GetCallbackData */
unsigned int Qtask_GetCallbackData(void* task);
/* 0x004d9810 Qtask_Initialize -> Qtask_Initialize */
void Qtask_Initialize(void);
/* 0x004d9830 Qtask_Shutdown -> Qtask_Shutdown */
void Qtask_Shutdown(void);
/* 0x004d9850 Qtask_GetEventId -> Qtask_GetEventId */
unsigned char Qtask_GetEventId(void);
/* 0x004d9860 Qtask_GetList -> Qtask_GetList */
void* Qtask_GetList(void);
/* 0x004d9870 Camera_SubmitFrame -> Camera_SubmitFrame */
void Camera_SubmitFrame(CameraContext* camCtx);
/* 0x004d9950 Camera_ResetFrameCounters -> Camera_ResetFrameCounters */
void Camera_ResetFrameCounters(CameraContext* camCtx);
/* 0x004d9a00 MagicObj_Initialize -> MagicObj_Initialize */
void MagicObj_Initialize(void);
/* 0x004d9c30 MagicObj_ParentTransform -> MagicObj_ParentTransform */
void MagicObj_ParentTransform(...);
/* 0x004d9f60 MagicObj_Shutdown -> MagicObj_Shutdown */
void MagicObj_Shutdown(void);
/* 0x004d9fa0 MagicObj_GetTypeId -> MagicObj_GetTypeId */
unsigned short MagicObj_GetTypeId(void);
/* 0x004d9fb0 MagicObj_GetEventId -> MagicObj_GetEventId */
unsigned char MagicObj_GetEventId(void);
/* 0x004d9fc0 Render_DrawLightmapMesh_12 -> Render_DrawLightmapMesh_12 */
int Render_DrawLightmapMesh_12(double *param_1, double *param_2, uint32_t *param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8);
/* 0x004da0a0 Render_SkinBones_12 -> Render_SkinBones_12 */
void Render_SkinBones_12(int param_1, double *param_2, double *param_3, uint32_t *param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004da160 Render_TransformVertices_12 -> Render_TransformVertices_12 */
void Render_TransformVertices_12(int param_1);
/* 0x004da180 Render_ComputeNormals_12 -> Render_ComputeNormals_12 */
void Render_ComputeNormals_12(uint32_t *param_1, int *param_2);
/* 0x004da1d0 Hazinglayers_Init -> Hazinglayers_Init */
void Hazinglayers_Init(void);
/* 0x004da2e0 Hazinglayers_Update -> Hazinglayers_Update */
void Hazinglayers_Update(void);
/* 0x004da2f0 Hazinglayers_OnEvent -> Hazinglayers_OnEvent */
void Hazinglayers_OnEvent(void);
/* 0x004da300 Hazinglayers_Process -> Hazinglayers_Process */
void Hazinglayers_Process(float *param_1, float *param_2, double *param_3, double *param_4, int *param_5, int param_6);
/* 0x004da790 Render_SetupLighting_12 -> Render_SetupLighting_12 */
void Render_SetupLighting_12(float *param_1, uint32_t param_2, float param_3, float param_4, int param_5, uint32_t param_6);
/* 0x004da880 Render_BindTexture_12 -> Render_BindTexture_12 */
void Render_BindTexture_12(void);
/* 0x004da8a0 Render_ClipMesh_12 -> Render_ClipMesh_12 */
void Render_ClipMesh_12(void);
/* 0x004da8b0 Render_DrawRigidMesh_13 -> Render_DrawRigidMesh_13 */
void Render_DrawRigidMesh_13(void);
/* 0x004da8d0 Render_DrawBoneMesh_13 -> Render_DrawBoneMesh_13 */
void Render_DrawBoneMesh_13(uint32_t *param_1, uint32_t *param_2, uint32_t param_3);
/* 0x004da950 Render_DrawSplineMesh_13 -> Render_DrawSplineMesh_13 */
void Render_DrawSplineMesh_13(uint32_t *param_1, uint32_t *param_2, uint32_t param_3, uint32_t *param_4, float param_5);
/* 0x004daa00 Render_DrawLightmapMesh_13 -> Render_DrawLightmapMesh_13 */
void Render_DrawLightmapMesh_13(void);
/* 0x004daa20 Render_SkinBones_13 -> Render_SkinBones_13 */
void Render_SkinBones_13(int *param_1);
/* 0x004daa60 Render_TransformVertices_13 -> Render_TransformVertices_13 */
void Render_TransformVertices_13(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, uint8_t param_4, uint8_t param_5);
/* 0x004daaf0 Render_ComputeNormals_13 -> Render_ComputeNormals_13 */
void Render_ComputeNormals_13(int param_1);
/* 0x004dab50 Render_SetupLighting_13 -> Render_SetupLighting_13 */
void Render_SetupLighting_13(void);
/* 0x004dbcc0 Sector_Cleanup -> Sector_Cleanup */
void Sector_Cleanup(void);
/* 0x004dbf30 Render_BindTexture_13 -> Render_BindTexture_13 */
void Render_BindTexture_13(int *param_1, int *param_2);
/* 0x004dbfa0 Render_ClipMesh_13 -> Render_ClipMesh_13 */
void Render_ClipMesh_13(int *param_1, int *param_2);
/* 0x004dc050 Render_DrawRigidMesh_14 -> Render_DrawRigidMesh_14 */
void Render_DrawRigidMesh_14(int *param_1, int param_2, int *param_3, uint32_t param_4);
/* 0x004dc190 Render_DrawBoneMesh_14 -> Render_DrawBoneMesh_14 */
void Render_DrawBoneMesh_14(int *param_1, int param_2, int *param_3);
/* 0x004dc2f0 Render_DrawSplineMesh_14 -> Render_DrawSplineMesh_14 */
void Render_DrawSplineMesh_14(int *param_1);
/* 0x004dc340 Render_DrawLightmapMesh_14 -> Render_DrawLightmapMesh_14 */
void Render_DrawLightmapMesh_14(int *param_1);
/* 0x004dc3d0 Sector_Cleanup_2 -> Sector_Cleanup_2 */
void Sector_Cleanup_2(void);
/* 0x004dc640 Render_SkinBones_14 -> Render_SkinBones_14 */
void Render_SkinBones_14(int *param_1, float *param_2, float *param_3);
/* 0x004dcba0 Render_TransformVertices_14 -> Render_TransformVertices_14 */
void Render_TransformVertices_14(int *param_1, int param_2);
/* 0x004dccb0 Render_ComputeNormals_14 -> Render_ComputeNormals_14 */
uint32_t Render_ComputeNormals_14(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x004dcdd0 Render_SetupLighting_14 -> Render_SetupLighting_14 */
void Render_SetupLighting_14(int param_1);
/* 0x004dcf00 Render_BindTexture_14 -> Render_BindTexture_14 */
void Render_BindTexture_14(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004dcf20 Sector_Init -> Sector_Init */
void Sector_Init(void);
/* 0x004dd1c0 Sector_LoadParameters -> Sector_LoadParameters */
void Sector_LoadParameters(void);
/* 0x004dd310 Sector_OnEvent -> Sector_OnEvent */
void Sector_OnEvent(void);
/* 0x004dd4b0 Render_ClipMesh_14 -> Render_ClipMesh_14 */
void Render_ClipMesh_14(float param_1, float *param_2, float *param_3, float param_4);
/* 0x004dd5d0 Render_DrawRigidMesh_15 -> Render_DrawRigidMesh_15 */
void Render_DrawRigidMesh_15(int param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x004dd650 Render_DrawBoneMesh_15 -> Render_DrawBoneMesh_15 */
void Render_DrawBoneMesh_15(int *param_1, float *param_2, float *param_3, int param_4);
/* 0x004dd7f0 Render_DrawSplineMesh_15 -> Render_DrawSplineMesh_15 */
uint32_t Render_DrawSplineMesh_15(int param_1, int param_2, int param_3, float *param_4, float *param_5, float *param_6, float *param_7);
/* 0x004ddff0 Sector_Cleanup_3 -> Sector_Cleanup_3 */
void Sector_Cleanup_3(int param_1);
/* 0x004de040 Render_SkinBones_15 -> Render_SkinBones_15 */
void Render_SkinBones_15(int param_1);
/* 0x004de4e0 Sector_Cleanup_4 -> Sector_Cleanup_4 */
void Sector_Cleanup_4(void);
/* 0x004de6b0 Sector_Setup -> Sector_Setup */
void Sector_Setup(int param_1, uint32_t *param_2);
/* 0x004de740 Sector_Process -> Sector_Process */
void Sector_Process(int param_1);
/* 0x004de800 Sector_Update -> Sector_Update */
void Sector_Update(int param_1, uint32_t param_2);
/* 0x004de8a0 Sector_Cleanup_5 -> Sector_Cleanup_5 */
void Sector_Cleanup_5(int *param_1, uint32_t param_2);
/* 0x004dea80 Sector_Cleanup_6 -> Sector_Cleanup_6 */
void Sector_Cleanup_6(int param_1, uint32_t param_2);
/* 0x004deb90 Sector_Cleanup_7 -> Sector_Cleanup_7 */
void Sector_Cleanup_7(int param_1, int param_2);
/* 0x004ded30 Sector_Cleanup_8 -> Sector_Cleanup_8 */
void Sector_Cleanup_8(int param_1, uint32_t *param_2);
/* 0x004dee40 Render_TransformVertices_15 -> Render_TransformVertices_15 */
void Render_TransformVertices_15(void);
/* 0x004dee80 Render_ComputeNormals_15 -> Render_ComputeNormals_15 */
uint16_t Render_ComputeNormals_15(void);
/* 0x004dee90 Render_SetupLighting_15 -> Render_SetupLighting_15 */
void Render_SetupLighting_15(int param_1, uint32_t param_2);
/* 0x004deec0 Render_BindTexture_15 -> Render_BindTexture_15 */
void Render_BindTexture_15(int *param_1);
/* 0x004df500 Render_ClipMesh_15 -> Render_ClipMesh_15 */
void Render_ClipMesh_15(float param_1, float *param_2, float *param_3);
/* 0x004dfa50 Render_MagicObjectTypeSNotD -> Render_MagicObjectTypeSNotD */
void Render_MagicObjectTypeSNotD(int param_1, uint32_t param_2);
/* 0x004e0810 SoundSys_PlaySoundSample -> SoundSys_PlaySoundSample */
void SoundSys_PlaySoundSample(int param_1, uint32_t *param_2);
/* 0x004e0830 SoundSys_Update3DPosition -> SoundSys_Update3DPosition */
uint16_t SoundSys_Update3DPosition(void);
/* 0x004e0840 MagicObjContainer_Init -> MagicObjContainer_Init */
void MagicObjContainer_Init(void);
/* 0x004e0920 MagicObjContainer_Update -> MagicObjContainer_Update */
void MagicObjContainer_Update(void);
/* 0x004e0930 CarGun_Create -> CarGun_Create */
void* CarGun_Create(int unk, void* car);
/* 0x004e0950 Shadow_Init -> Shadow_Init */
void Shadow_Init(void);
/* 0x004e09d0 Shadow_LoadParameters -> Shadow_LoadParameters */
void Shadow_LoadParameters(void);
/* 0x004e0cb0 SoundSys_SetMasterVolume -> SoundSys_SetMasterVolume */
void SoundSys_SetMasterVolume(void);
/* 0x004e0cc0 SoundSys_SetFrequency -> SoundSys_SetFrequency */
int SoundSys_SetFrequency(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9);
/* 0x004e0e20 SoundSys_StopSoundSample -> SoundSys_StopSoundSample */
void SoundSys_StopSoundSample(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, float param_4, uint32_t *param_5, float param_6);
/* 0x004e1130 SoundSys_LoadSoundDef -> SoundSys_LoadSoundDef */
void SoundSys_LoadSoundDef(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, float param_4, uint32_t *param_5, float param_6);
/* 0x004e1440 SoundSys_EvaluateTrigger -> SoundSys_EvaluateTrigger */
void SoundSys_EvaluateTrigger(int param_1, uint32_t *param_2);
/* 0x004e16e0 SplineObjSegment_Process -> SplineObjSegment_Process */
void SplineObjSegment_Process(int param_1, uint32_t *param_2);
/* 0x004e3f80 SplineObjSegment_LoadParameters -> SplineObjSegment_LoadParameters */
void SplineObjSegment_LoadParameters(int param_1);
/* 0x004e3fc0 SplineObjSegment_Action -> SplineObjSegment_Action */
void SplineObjSegment_Action(int param_1, uint32_t *param_2);
/* 0x004e41b0 SplineObjSegment_Init -> SplineObjSegment_Init */
void SplineObjSegment_Init(void);
/* 0x004e4290 SplineObjSegment_Setup -> SplineObjSegment_Setup */
void SplineObjSegment_Setup(void);
/* 0x004e43b0 SoundSys_InitSoundSys_2 -> SoundSys_InitSoundSys_2 */
void SoundSys_InitSoundSys_2(void);
/* 0x004e43d0 SoundSys_PlaySoundSample_2 -> SoundSys_PlaySoundSample_2 */
int SoundSys_PlaySoundSample_2(uint32_t param_1, uint32_t param_2, double *param_3, double *param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11);
/* 0x004e4530 SoundSys_Update3DPosition_2 -> SoundSys_Update3DPosition_2 */
void SoundSys_Update3DPosition_2(int param_1, double *param_2, double *param_3, float *param_4, float *param_5, char param_6, uint8_t param_7, uint32_t param_8);
/* 0x004e51c0 SoundSys_LoadSoundDef_2 -> SoundSys_LoadSoundDef_2 */
void SoundSys_LoadSoundDef_2(void);
/* 0x004e5350 SoundSys_EvaluateTrigger_2 -> SoundSys_EvaluateTrigger_2 */
uint16_t SoundSys_EvaluateTrigger_2(void);
/* 0x004e5360 SoundSys_AttachLipsync_2 -> SoundSys_AttachLipsync_2 */
uint8_t SoundSys_AttachLipsync_2(void);
/* 0x004e5370 DynCubeObj_Init -> DynCubeObj_Init */
void DynCubeObj_Init(void);
/* 0x004e53a0 DynCubeObj_Update -> DynCubeObj_Update */
void DynCubeObj_Update(void);
/* 0x004e53c0 DynCubeObj_OnEvent -> DynCubeObj_OnEvent */
uint32_t *DynCubeObj_OnEvent(uint32_t param_1, uint32_t param_2, uint32_t param_3, double *param_4, float param_5);
/* 0x004e54e0 DynCubeObj_Action -> DynCubeObj_Action */
void DynCubeObj_Action(int *param_1);
/* 0x004e5550 DynCubeObj_OnTick -> DynCubeObj_OnTick */
void DynCubeObj_OnTick(int param_1, uint32_t param_2, int param_3);
/* 0x004e5580 SoundSys_InitSoundSys_3 -> SoundSys_InitSoundSys_3 */
byte SoundSys_InitSoundSys_3(int param_1, uint32_t param_2, int param_3);
/* 0x004e55b0 SoundSys_PlaySoundSample_3 -> SoundSys_PlaySoundSample_3 */
uint8_t SoundSys_PlaySoundSample_3(void);
/* 0x004e55c0 SoundSys_Update3DPosition_3 -> SoundSys_Update3DPosition_3 */
void SoundSys_Update3DPosition_3(void);
/* 0x004e55f0 SoundSys_SetMasterVolume_3 -> SoundSys_SetMasterVolume_3 */
void SoundSys_SetMasterVolume_3(void);
/* 0x004e5610 SoundSys_SetFrequency_3 -> SoundSys_SetFrequency_3 */
void SoundSys_SetFrequency_3(int param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7);
/* 0x004e5ba0 SoundSys_LoadSoundDef_3 -> SoundSys_LoadSoundDef_3 */
uint32_t SoundSys_LoadSoundDef_3(int param_1, float param_2, float param_3, float param_4, float param_5);
/* 0x004e5c90 SoundSys_EvaluateTrigger_3 -> SoundSys_EvaluateTrigger_3 */
void SoundSys_EvaluateTrigger_3(void);
/* 0x004e5ca0 SoundSys_AttachLipsync_3 -> SoundSys_AttachLipsync_3 */
void SoundSys_AttachLipsync_3(void);
/* 0x004e5cb0 SoundSys_InitSoundSys_4 -> SoundSys_InitSoundSys_4 */
void SoundSys_InitSoundSys_4(void);
/* 0x004e5d90 SoundSys_PlaySoundSample_4 -> SoundSys_PlaySoundSample_4 */
void SoundSys_PlaySoundSample_4(void);
/* 0x004e5ea0 SoundSys_Update3DPosition_4 -> SoundSys_Update3DPosition_4 */
void SoundSys_Update3DPosition_4(void);
/* 0x004e6030 SoundSys_SetMasterVolume_4 -> SoundSys_SetMasterVolume_4 */
void SoundSys_SetMasterVolume_4(uint32_t param_1);
/* 0x004e6050 SoundSys_SetFrequency_4 -> SoundSys_SetFrequency_4 */
uint32_t SoundSys_SetFrequency_4(void);
/* 0x004e6060 SoundSys_StopSoundSample_4 -> SoundSys_StopSoundSample_4 */
void SoundSys_StopSoundSample_4(uint8_t param_1);
/* 0x004e6070 SoundSysController_Init -> SoundSysController_Init */
void SoundSysController_Init(void);
/* 0x004e6290 SoundSys_LoadSoundDef_4 -> SoundSys_LoadSoundDef_4 */
void SoundSys_LoadSoundDef_4(uint32_t *param_1, uint32_t *param_2);
/* 0x004e62c0 SoundSys_EvaluateTrigger_4 -> SoundSys_EvaluateTrigger_4 */
void SoundSys_EvaluateTrigger_4(void);
/* 0x004e63b0 SoundSys_AttachLipsync_4 -> SoundSys_AttachLipsync_4 */
void SoundSys_AttachLipsync_4(int *param_1, int *param_2);
/* 0x004e63e0 SoundSys_Definegroup -> SoundSys_Definegroup */
void SoundSys_Definegroup(void);
/* 0x004e6530 SoundSys_InitSoundSys_5 -> SoundSys_InitSoundSys_5 */
void SoundSys_InitSoundSys_5(uint32_t param_1);
/* 0x004e6550 SoundSys_PlaySoundSample_5 -> SoundSys_PlaySoundSample_5 */
uint32_t SoundSys_PlaySoundSample_5(uint32_t param_1, char *param_2);
/* 0x004e65d0 SoundSys_Update3DPosition_5 -> SoundSys_Update3DPosition_5 */
void SoundSys_Update3DPosition_5(uint32_t param_1, uint32_t param_2);
/* 0x004e65f0 SoundSys_SetMasterVolume_5 -> SoundSys_SetMasterVolume_5 */
void SoundSys_SetMasterVolume_5(void);
/* 0x004e6610 SoundSys_SetFrequency_5 -> SoundSys_SetFrequency_5 */
void SoundSys_SetFrequency_5(void);
/* 0x004e6630 SoundSys_StopSoundSample_5 -> SoundSys_StopSoundSample_5 */
void SoundSys_StopSoundSample_5(void);
/* 0x004e6650 SoundSys_LoadSoundDef_5 -> SoundSys_LoadSoundDef_5 */
void SoundSys_LoadSoundDef_5(void);
/* 0x004e6670 SoundSys_EvaluateTrigger_5 -> SoundSys_EvaluateTrigger_5 */
void SoundSys_EvaluateTrigger_5(void);
/* 0x004e6690 SoundSys_AttachLipsync_5 -> SoundSys_AttachLipsync_5 */
void SoundSys_AttachLipsync_5(void);
/* 0x004e66b0 SoundSys_InitSoundSys_6 -> SoundSys_InitSoundSys_6 */
void SoundSys_InitSoundSys_6(void);
/* 0x004e66d0 SoundSys_PlaySoundSample_6 -> SoundSys_PlaySoundSample_6 */
void SoundSys_PlaySoundSample_6(void);
/* 0x004e66f0 SoundSys_Update3DPosition_6 -> SoundSys_Update3DPosition_6 */
void SoundSys_Update3DPosition_6(void);
/* 0x004e6710 SoundSys_SetMasterVolume_6 -> SoundSys_SetMasterVolume_6 */
void SoundSys_SetMasterVolume_6(void);
/* 0x004e6730 SoundSys_SetFrequency_6 -> SoundSys_SetFrequency_6 */
void SoundSys_SetFrequency_6(void);
/* 0x004e6750 SoundSys_StopSoundSample_6 -> SoundSys_StopSoundSample_6 */
void SoundSys_StopSoundSample_6(uint32_t param_1);
/* 0x004e67d0 SoundSys_LoadSoundDef_6 -> SoundSys_LoadSoundDef_6 */
void SoundSys_LoadSoundDef_6(uint32_t param_1);
/* 0x004e6830 SoundSys_EvaluateTrigger_6 -> SoundSys_EvaluateTrigger_6 */
void SoundSys_EvaluateTrigger_6(void);
/* 0x004e68d0 Sound_Load -> Sound_Load */
void Sound_Load(char *sound_dir);
/* 0x004e68f0 SoundSys_AttachLipsync_6 -> SoundSys_AttachLipsync_6 */
void SoundSys_AttachLipsync_6(void);
/* 0x004e69c0 SoundSys_InitSoundSys_7 -> SoundSys_InitSoundSys_7 */
void SoundSys_InitSoundSys_7(uint32_t param_1);
/* 0x004e69e0 SoundSys_PlaySoundSample_7 -> SoundSys_PlaySoundSample_7 */
void SoundSys_PlaySoundSample_7(void);
/* 0x004e6ab0 SoundSys_Update3DPosition_7 -> SoundSys_Update3DPosition_7 */
int * SoundSys_Update3DPosition_7(int param_1);
/* 0x004e6b00 SoundSys_SetMasterVolume_7 -> SoundSys_SetMasterVolume_7 */
uint32_t SoundSys_SetMasterVolume_7(uint32_t param_1, char *param_2);
/* 0x004e6c00 SoundSys_SetFrequency_7 -> SoundSys_SetFrequency_7 */
void SoundSys_SetFrequency_7(int param_1);
/* 0x004e6c30 SoundSys_StopSoundSample_7 -> SoundSys_StopSoundSample_7 */
void SoundSys_StopSoundSample_7(int param_1, uint32_t param_2);
/* 0x004e6c60 SoundSys_LoadSoundDef_7 -> SoundSys_LoadSoundDef_7 */
void SoundSys_LoadSoundDef_7(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004e6ca0 SoundSys_EvaluateTrigger_7 -> SoundSys_EvaluateTrigger_7 */
void SoundSys_EvaluateTrigger_7(int param_1, uint32_t param_2);
/* 0x004e6ce0 SoundSys_AttachLipsync_7 -> SoundSys_AttachLipsync_7 */
void SoundSys_AttachLipsync_7(int param_1, uint8_t param_2);
/* 0x004e6d20 SoundSys_InitSoundSys_8 -> SoundSys_InitSoundSys_8 */
void SoundSys_InitSoundSys_8(uint32_t param_1);
/* 0x004e6d40 SoundSys_PlaySoundSample_8 -> SoundSys_PlaySoundSample_8 */
void SoundSys_PlaySoundSample_8(uint32_t param_1);
/* 0x004e6d60 SoundSys_Update3DPosition_8 -> SoundSys_Update3DPosition_8 */
void SoundSys_Update3DPosition_8(uint32_t *param_1);
/* 0x004e6db0 SoundSys_SetMasterVolume_8 -> SoundSys_SetMasterVolume_8 */
void SoundSys_SetMasterVolume_8(int param_1, uint32_t param_2, int param_3, uint32_t param_4, float *param_5);
/* 0x004e6fa0 SoundSys_SetFrequency_8 -> SoundSys_SetFrequency_8 */
uint32_t SoundSys_SetFrequency_8(int param_1);
/* 0x004e6ff0 SoundSys_StopSoundSample_8 -> SoundSys_StopSoundSample_8 */
float10 SoundSys_StopSoundSample_8(float *param_1);
/* 0x004e7030 SoundSys_LoadSoundDef_8 -> SoundSys_LoadSoundDef_8 */
void SoundSys_LoadSoundDef_8(float *param_1, float *param_2, float param_3);
/* 0x004e7130 SoundSys_EvaluateTrigger_8 -> SoundSys_EvaluateTrigger_8 */
void SoundSys_EvaluateTrigger_8(void);
/* 0x004e7180 SoundSys_AttachLipsync_8 -> SoundSys_AttachLipsync_8 */
void SoundSys_AttachLipsync_8(uint32_t param_1, uint32_t param_2, uint32_t *param_3);
/* 0x004e7200 Sound_EventTrigger -> Sound_EventTrigger */
void Sound_EventTrigger(const char* eventName, uint32_t eventId, const SoundEventParams* params);
/* 0x004e7330 SoundSys_InitSoundSys_9 -> SoundSys_InitSoundSys_9 */
uint32_t SoundSys_InitSoundSys_9(void);
/* 0x004e7340 SoundSys_PlaySoundSample_9 -> SoundSys_PlaySoundSample_9 */
void SoundSys_PlaySoundSample_9(uint8_t param_1);
/* 0x004e7350 SoundSys_Update3DPosition_9 -> SoundSys_Update3DPosition_9 */
void SoundSys_Update3DPosition_9(int param_1);
/* 0x004e7370 Screen_Init -> Screen_Init */
void Screen_Init(void);
/* 0x004e7500 Screen_Update -> Screen_Update */
void Screen_Update(void);
/* 0x004e7530 Screen_OnEvent -> Screen_OnEvent */
uint32_t Screen_OnEvent(void);
/* 0x004e7540 Screen_Process -> Screen_Process */
uint32_t Screen_Process(uint32_t *param_1, uint8_t param_2);
/* 0x004e7580 SoundSys_SetMasterVolume_9 -> SoundSys_SetMasterVolume_9 */
void SoundSys_SetMasterVolume_9(uint32_t param_1);
/* 0x004e75a0 SoundSys_SetFrequency_9 -> SoundSys_SetFrequency_9 */
uint32_t SoundSys_SetFrequency_9(void);
/* 0x004e75b0 SoundSys_StopSoundSample_9 -> SoundSys_StopSoundSample_9 */
uint16_t SoundSys_StopSoundSample_9(void);
/* 0x004e75c0 SoundSys_LoadSoundDef_9 -> SoundSys_LoadSoundDef_9 */
void SoundSys_LoadSoundDef_9(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004e75e0 SoundSys_EvaluateTrigger_9 -> SoundSys_EvaluateTrigger_9 */
void SoundSys_EvaluateTrigger_9(int *param_1);
/* 0x004e7600 SoundSys_AttachLipsync_9 -> SoundSys_AttachLipsync_9 */
uint32_t * SoundSys_AttachLipsync_9(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004e7660 SoundSys_InitSoundSys_10 -> SoundSys_InitSoundSys_10 */
void SoundSys_InitSoundSys_10(int *param_1);
/* 0x004e7690 SoundSys_PlaySoundSample_10 -> SoundSys_PlaySoundSample_10 */
void SoundSys_PlaySoundSample_10(int *param_1);
/* 0x004e76e0 SoundSys_Update3DPosition_10 -> SoundSys_Update3DPosition_10 */
void SoundSys_Update3DPosition_10(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004e7710 SoundSys_SetMasterVolume_10 -> SoundSys_SetMasterVolume_10 */
void SoundSys_SetMasterVolume_10(int *param_1, char *param_2);
/* 0x004e7790 SoundSys_SetFrequency_10 -> SoundSys_SetFrequency_10 */
void SoundSys_SetFrequency_10(int *param_1, int param_2);
/* 0x004e77d0 SoundSys_StopSoundSample_10 -> SoundSys_StopSoundSample_10 */
void SoundSys_StopSoundSample_10(uint32_t *param_1);
/* 0x004e77f0 SoundSys_LoadSoundDef_10 -> SoundSys_LoadSoundDef_10 */
void SoundSys_LoadSoundDef_10(int param_1, int param_2);
/* 0x004e7830 SoundSys_EvaluateTrigger_10 -> SoundSys_EvaluateTrigger_10 */
void SoundSys_EvaluateTrigger_10(int param_1, char param_2);
/* 0x004e7840 DebugText_Init -> DebugText_Init */
void DebugText_Init(void);
/* 0x004e79a0 DebugText_Update -> DebugText_Update */
void DebugText_Update(void);
/* 0x004e7ac0 SoundSys_AttachLipsync_10 -> SoundSys_AttachLipsync_10 */
uint32_t SoundSys_AttachLipsync_10(uint32_t param_1, char param_2);
/* 0x004e7b40 SoundSys_LocalDebugFnt -> SoundSys_LocalDebugFnt */
void SoundSys_LocalDebugFnt(void);
/* 0x004e7b80 SoundSys_InitSoundSys_11 -> SoundSys_InitSoundSys_11 */
void SoundSys_InitSoundSys_11(uint32_t param_1, uint32_t param_2);
/* 0x004e7bb0 SoundSys_PlaySoundSample_11 -> SoundSys_PlaySoundSample_11 */
void SoundSys_PlaySoundSample_11(void);
/* 0x004e7bd0 SoundSys_Update3DPosition_11 -> SoundSys_Update3DPosition_11 */
void SoundSys_Update3DPosition_11(uint32_t param_1);
/* 0x004e7c00 SoundSys_SetMasterVolume_11 -> SoundSys_SetMasterVolume_11 */
void SoundSys_SetMasterVolume_11(uint32_t param_1, uint32_t param_2);
/* 0x004e7c30 SoundSys_SetFrequency_11 -> SoundSys_SetFrequency_11 */
uint8_t SoundSys_SetFrequency_11(void);
/* 0x004e7c40 SoundSys_StopSoundSample_11 -> SoundSys_StopSoundSample_11 */
uint32_t SoundSys_StopSoundSample_11(void);
/* 0x004e7c50 CameraControlTask_Init -> CameraControlTask_Init */
void CameraControlTask_Init(void);
/* 0x004e7c90 CameraControlTask_LoadParameters -> CameraControlTask_LoadParameters */
void CameraControlTask_LoadParameters(int param_1);
/* 0x004e7d30 CameraControlTask_OnEvent -> CameraControlTask_OnEvent */
void CameraControlTask_OnEvent(void);
/* 0x004e7d40 CameraControlTask_Process -> CameraControlTask_Process */
void CameraControlTask_Process(uint32_t param_1, uint32_t param_2);
/* 0x004e7d70 CameraControlTask_Action -> CameraControlTask_Action */
void CameraControlTask_Action(uint32_t param_1, int param_2, uint32_t param_3);
/* 0x004e7d90 ViewportQTask_Init -> ViewportQTask_Init */
void ViewportQTask_Init(void);
/* 0x004e7e20 ViewportQTask_Process -> ViewportQTask_Process */
void ViewportQTask_Process(void);
/* 0x004e7e30 ViewportQTask_Setup -> ViewportQTask_Setup */
void ViewportQTask_Setup(void);
/* 0x004e8090 ViewportQTask_LoadParameters -> ViewportQTask_LoadParameters */
void ViewportQTask_LoadParameters(int param_1);
/* 0x004e80d0 SoundSys_LoadSoundDef_11 -> SoundSys_LoadSoundDef_11 */
void SoundSys_LoadSoundDef_11(void);
/* 0x004e8100 SoundSys_EvaluateTrigger_11 -> SoundSys_EvaluateTrigger_11 */
uint16_t SoundSys_EvaluateTrigger_11(void);
/* 0x004e8110 SoundSys_AttachLipsync_11 -> SoundSys_AttachLipsync_11 */
int SoundSys_AttachLipsync_11(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12);
/* 0x004e81f0 SoundSys_InitSoundSys_12 -> SoundSys_InitSoundSys_12 */
uint32_t SoundSys_InitSoundSys_12(void);
/* 0x004e8200 SoundSys_PlaySoundSample_12 -> SoundSys_PlaySoundSample_12 */
int SoundSys_PlaySoundSample_12(int param_1);
/* 0x004e8210 SoundSys_Update3DPosition_12 -> SoundSys_Update3DPosition_12 */
uint32_t SoundSys_Update3DPosition_12(int param_1);
/* 0x004e8220 SoundSys_SetMasterVolume_12 -> SoundSys_SetMasterVolume_12 */
void SoundSys_SetMasterVolume_12(int param_1, int param_2, uint8_t param_3);
/* 0x004e8240 SoundSys_SetFrequency_12 -> SoundSys_SetFrequency_12 */
int SoundSys_SetFrequency_12(int param_1);
/* 0x004e8250 SoundSys_StopSoundSample_12 -> SoundSys_StopSoundSample_12 */
void SoundSys_StopSoundSample_12(int param_1, char param_2);
/* 0x004e8260 SoundSys_LoadSoundDef_12 -> SoundSys_LoadSoundDef_12 */
uint32_t SoundSys_LoadSoundDef_12(int param_1);
/* 0x004e8270 SoundSys_EvaluateTrigger_12 -> SoundSys_EvaluateTrigger_12 */
void SoundSys_EvaluateTrigger_12(int param_1, uint32_t param_2);
/* 0x004e8280 SoundSys_AttachLipsync_12 -> SoundSys_AttachLipsync_12 */
uint32_t SoundSys_AttachLipsync_12(void);
/* 0x004e8290 SoundSys_InitSoundSys_13 -> SoundSys_InitSoundSys_13 */
void SoundSys_InitSoundSys_13(uint32_t param_1);
/* 0x004e82c0 TerraDrawTask_Init -> TerraDrawTask_Init */
void TerraDrawTask_Init(void);
/* 0x004e8350 TerraDrawTask_Update -> TerraDrawTask_Update */
void TerraDrawTask_Update(void);
/* 0x004e8370 TerraDrawTask_OnEvent -> TerraDrawTask_OnEvent */
void TerraDrawTask_OnEvent(uint32_t param_1, uint32_t param_2);
/* 0x004e8390 SoundDefSound_Init -> SoundDefSound_Init */
void SoundDefSound_Init(void);
/* 0x004e8520 SoundDefSound_Setup -> SoundDefSound_Setup */
void SoundDefSound_Setup(void);
/* 0x004e8780 SoundSys_PlaySoundSample_13 -> SoundSys_PlaySoundSample_13 */
void SoundSys_PlaySoundSample_13(int param_1);
/* 0x004e8840 SoundDefSound_LoadParameters -> SoundDefSound_LoadParameters */
void SoundDefSound_LoadParameters(int param_1);
/* 0x004e8910 SoundDefSound_Process -> SoundDefSound_Process */
void SoundDefSound_Process(uint32_t param_1, uint32_t *param_2);
/* 0x004e8b80 SoundDefSound_Update -> SoundDefSound_Update */
void SoundDefSound_Update(int param_1, float *param_2);
/* 0x004e8bd0 SoundDefSound_OnEvent -> SoundDefSound_OnEvent */
void SoundDefSound_OnEvent(void);
/* 0x004e8c20 SoundSys_Update3DPosition_13 -> SoundSys_Update3DPosition_13 */
void SoundSys_Update3DPosition_13(void);
/* 0x004e8c50 SoundSys_SetMasterVolume_13 -> SoundSys_SetMasterVolume_13 */
uint16_t SoundSys_SetMasterVolume_13(void);
/* 0x004e8c60 Define_Sound -> Define_Sound */
void Define_Sound(...);
/* 0x004e8dc0 SoundSys_SetFrequency_13 -> SoundSys_SetFrequency_13 */
void SoundSys_SetFrequency_13(int param_1);
/* 0x004e9090 SoundSys_StopSoundSample_13 -> SoundSys_StopSoundSample_13 */
void SoundSys_StopSoundSample_13(int param_1);
/* 0x004e90c0 SoundSys_LoadSoundDef_13 -> SoundSys_LoadSoundDef_13 */
void SoundSys_LoadSoundDef_13(int param_1);
/* 0x004e9110 SoundSys_EvaluateTrigger_13 -> SoundSys_EvaluateTrigger_13 */
void SoundSys_EvaluateTrigger_13(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, int param_5);
/* 0x004e92b0 SoundSys_AttachLipsync_13 -> SoundSys_AttachLipsync_13 */
void SoundSys_AttachLipsync_13(int param_1);
/* 0x004e92c0 FadeOutEnd_Init -> FadeOutEnd_Init */
void FadeOutEnd_Init(void);
/* 0x004e9410 FadeOutEnd_Update -> FadeOutEnd_Update */
void FadeOutEnd_Update(void);
/* 0x004e9430 FadeOutEnd_OnEvent -> FadeOutEnd_OnEvent */
uint32_t FadeOutEnd_OnEvent(uint32_t param_1);
/* 0x004e9460 FadeOutEnd_Process -> FadeOutEnd_Process */
void FadeOutEnd_Process(uint32_t param_1);
/* 0x004e9480 GlowTask_Init -> GlowTask_Init */
void GlowTask_Init(void);
/* 0x004e94e0 GlowTask_Update -> GlowTask_Update */
void GlowTask_Update(void);
/* 0x004e9500 GlowTask_OnEvent -> GlowTask_OnEvent */
void GlowTask_OnEvent(uint32_t param_1);
/* 0x004e9520 SoundDefTriggerOnce_Init -> SoundDefTriggerOnce_Init */
void SoundDefTriggerOnce_Init(void);
/* 0x004e9760 SoundDefTriggerOnce_Process -> SoundDefTriggerOnce_Process */
void SoundDefTriggerOnce_Process(void);
/* 0x004e9830 SoundDefTriggerOnce_LoadParameters -> SoundDefTriggerOnce_LoadParameters */
void SoundDefTriggerOnce_LoadParameters(int param_1, int *param_2);
/* 0x004e99d0 SoundSys_InitSoundSys_14 -> SoundSys_InitSoundSys_14 */
void SoundSys_InitSoundSys_14(int param_1);
/* 0x004e9aa0 SoundDefTriggerOnce_Setup -> SoundDefTriggerOnce_Setup */
void SoundDefTriggerOnce_Setup(int param_1);
/* 0x004e9b80 SoundDefTriggerOnce_Update -> SoundDefTriggerOnce_Update */
void SoundDefTriggerOnce_Update(uint32_t param_1, uint32_t *param_2);
/* 0x004e9dd0 SoundDefTriggerOnce_OnEvent -> SoundDefTriggerOnce_OnEvent */
void SoundDefTriggerOnce_OnEvent(int param_1, float *param_2);
/* 0x004e9e20 SoundDefTriggerOnce_Action -> SoundDefTriggerOnce_Action */
void SoundDefTriggerOnce_Action(void);
/* 0x004e9e80 SoundSys_PlaySoundSample_14 -> SoundSys_PlaySoundSample_14 */
void SoundSys_PlaySoundSample_14(void);
/* 0x004e9eb0 SoundSys_Update3DPosition_14 -> SoundSys_Update3DPosition_14 */
uint16_t SoundSys_Update3DPosition_14(void);
/* 0x004e9ec0 Define_TriggerOnce -> Define_TriggerOnce */
void Define_TriggerOnce(...);
/* 0x004ea040 SoundSys_SetMasterVolume_14 -> SoundSys_SetMasterVolume_14 */
void SoundSys_SetMasterVolume_14(int param_1);
/* 0x004ea3d0 SoundDefGraph_Init -> SoundDefGraph_Init */
void SoundDefGraph_Init(void);
/* 0x004ea560 SoundDefGraph_Setup -> SoundDefGraph_Setup */
void SoundDefGraph_Setup(void);
/* 0x004ea600 SoundDefGraph_LoadParameters -> SoundDefGraph_LoadParameters */
void SoundDefGraph_LoadParameters(int param_1, int *param_2);
/* 0x004ea7b0 SoundSys_SetFrequency_14 -> SoundSys_SetFrequency_14 */
void SoundSys_SetFrequency_14(int param_1);
/* 0x004ea8d0 SoundDefGraph_Process -> SoundDefGraph_Process */
void SoundDefGraph_Process(uint32_t param_1, uint32_t *param_2);
/* 0x004eac40 SoundDefGraph_Update -> SoundDefGraph_Update */
void SoundDefGraph_Update(int param_1, float *param_2);
/* 0x004eac90 SoundDefGraph_OnEvent -> SoundDefGraph_OnEvent */
void SoundDefGraph_OnEvent(void);
/* 0x004eace0 SoundSys_StopSoundSample_14 -> SoundSys_StopSoundSample_14 */
void SoundSys_StopSoundSample_14(void);
/* 0x004ead10 SoundSys_LoadSoundDef_14 -> SoundSys_LoadSoundDef_14 */
uint16_t SoundSys_LoadSoundDef_14(void);
/* 0x004ead20 Define_Graph -> Define_Graph */
void Define_Graph(...);
/* 0x004eaeb0 SoundSys_EvaluateTrigger_14 -> SoundSys_EvaluateTrigger_14 */
void SoundSys_EvaluateTrigger_14(int param_1);
/* 0x004eb1d0 SoundDefGroup_Init -> SoundDefGroup_Init */
void SoundDefGroup_Init(void);
/* 0x004eb3d0 SoundDefGroup_LoadParameters -> SoundDefGroup_LoadParameters */
void SoundDefGroup_LoadParameters(int param_1);
/* 0x004eb470 SoundDefGroup_Process -> SoundDefGroup_Process */
void SoundDefGroup_Process(void);
/* 0x004eb620 SoundDefGroup_Update -> SoundDefGroup_Update */
void SoundDefGroup_Update(int param_1, int *param_2);
/* 0x004eb670 SoundDefGroup_OnEvent -> SoundDefGroup_OnEvent */
void SoundDefGroup_OnEvent(int param_1, uint32_t *param_2);
/* 0x004eba50 SoundSys_AttachLipsync_14 -> SoundSys_AttachLipsync_14 */
void SoundSys_AttachLipsync_14(void);
/* 0x004eba80 SoundSys_InitSoundSys_15 -> SoundSys_InitSoundSys_15 */
uint16_t SoundSys_InitSoundSys_15(void);
/* 0x004eba90 Define_Group -> Define_Group */
void Define_Group(...);
/* 0x004ebba0 SoundSys_PlaySoundSample_15 -> SoundSys_PlaySoundSample_15 */
void SoundSys_PlaySoundSample_15(uint32_t param_1, uint32_t param_2);
/* 0x004ebbf0 SoundSys_Update3DPosition_15 -> SoundSys_Update3DPosition_15 */
void SoundSys_Update3DPosition_15(int param_1, uint32_t *param_2, uint32_t *param_3);
/* 0x004ebc60 SoundSysMicrophone_Init -> SoundSysMicrophone_Init */
void SoundSysMicrophone_Init(void);
/* 0x004ebcd0 SoundSysMicrophone_Setup -> SoundSysMicrophone_Setup */
void SoundSysMicrophone_Setup(void);
/* 0x004ebdb0 SoundSysMicrophone_OnEvent -> SoundSysMicrophone_OnEvent */
void SoundSysMicrophone_OnEvent(void);
/* 0x004ebdd0 SoundSysMicrophone_Process -> SoundSysMicrophone_Process */
uint8_t SoundSysMicrophone_Process(void);
/* 0x004ebde0 SoundSysMicrophone_Action -> SoundSysMicrophone_Action */
int SoundSysMicrophone_Action(int param_1);
/* 0x004ebdf0 SoundSysMicrophone_OnTick -> SoundSysMicrophone_OnTick */
void SoundSysMicrophone_OnTick(uint32_t *param_1);
/* 0x004ebe70 SoundSys_Defineanimtrigger -> SoundSys_Defineanimtrigger */
void SoundSys_Defineanimtrigger(void);
/* 0x004ebeb0 DefineAnimTrigger -> DefineAnimTrigger */
unknown DefineAnimTrigger(unknown param1, unknown param2);
/* 0x004ebfc0 SoundSys_SetMasterVolume_15 -> SoundSys_SetMasterVolume_15 */
void SoundSys_SetMasterVolume_15(void);
/* 0x004ec040 SoundSys_SetFrequency_15 -> SoundSys_SetFrequency_15 */
uint8_t SoundSys_SetFrequency_15(void);
/* 0x004ec050 SoundSys_StopSoundSample_15 -> SoundSys_StopSoundSample_15 */
uint8_t SoundSys_StopSoundSample_15(void);
/* 0x004ec060 SoundSys_LoadSoundDef_15 -> SoundSys_LoadSoundDef_15 */
uint8_t SoundSys_LoadSoundDef_15(void);
/* 0x004ec070 AnimTrigger_ParseConfigFile -> AnimTrigger_ParseConfigFile */
void AnimTrigger_ParseConfigFile(uint* path);
/* 0x004ec0c0 Anim_TriggerLoad -> Anim_TriggerLoad */
void Anim_TriggerLoad(char *path);
/* 0x004ec0e0 SoundSys_EvaluateTrigger_15 -> SoundSys_EvaluateTrigger_15 */
void SoundSys_EvaluateTrigger_15(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004ec160 SoundSys_AttachLipsync_15 -> SoundSys_AttachLipsync_15 */
void SoundSys_AttachLipsync_15(void);
/* 0x004ec180 SoundSys_InitSoundSys_16 -> SoundSys_InitSoundSys_16 */
void SoundSys_InitSoundSys_16(void);
/* 0x004ec190 SoundSys_PlaySoundSample_16 -> SoundSys_PlaySoundSample_16 */
void SoundSys_PlaySoundSample_16(uint32_t *param_1, uint32_t param_2, int param_3, int param_4, uint32_t param_5, uint32_t param_6);
/* 0x004ec1e0 SoundSys_Update3DPosition_16 -> SoundSys_Update3DPosition_16 */
void SoundSys_Update3DPosition_16(uint32_t *param_1, uint32_t param_2);
/* 0x004ec2c0 SoundSys_SetMasterVolume_16 -> SoundSys_SetMasterVolume_16 */
void SoundSys_SetMasterVolume_16(int param_1, int param_2, float param_3, uint32_t param_4, float *param_5, float *param_6);
/* 0x004ec4d0 SoundSys_SetFrequency_16 -> SoundSys_SetFrequency_16 */
void SoundSys_SetFrequency_16(uint32_t *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, float param_6, float param_7, float param_8);
/* 0x004ec5b0 SoundSys_StopSoundSample_16 -> SoundSys_StopSoundSample_16 */
void SoundSys_StopSoundSample_16(int param_1, int param_2);
/* 0x004ec5e0 SoundSys_LoadSoundDef_16 -> SoundSys_LoadSoundDef_16 */
void SoundSys_LoadSoundDef_16(float *param_1, float param_2, float param_3, float param_4, float param_5);
/* 0x004ec630 SoundSys_EvaluateTrigger_16 -> SoundSys_EvaluateTrigger_16 */
void SoundSys_EvaluateTrigger_16(uint32_t *param_1);
/* 0x004ec660 SoundSys_AttachLipsync_16 -> SoundSys_AttachLipsync_16 */
void SoundSys_AttachLipsync_16(int param_1);
/* 0x004ec6a0 ForceAccumulator_Integrate -> ForceAccumulator_Integrate */
void ForceAccumulator_Integrate();
/* 0x004ecdb0 SoundSys_InitSoundSys_17 -> SoundSys_InitSoundSys_17 */
void SoundSys_InitSoundSys_17(int param_1);
/* 0x004ecea0 SoundSys_PlaySoundSample_17 -> SoundSys_PlaySoundSample_17 */
void SoundSys_PlaySoundSample_17(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6);
/* 0x004eced0 SoundSys_Update3DPosition_17 -> SoundSys_Update3DPosition_17 */
void SoundSys_Update3DPosition_17(uint32_t param_1, float param_2, float param_3, float param_4, float param_5);
/* 0x004ecf50 ForceAccumulator_Add -> ForceAccumulator_Add */
void ForceAccumulator_Add();
/* 0x004ecf80 SoundSys_SetMasterVolume_17 -> SoundSys_SetMasterVolume_17 */
void SoundSys_SetMasterVolume_17(float *param_1, int param_2, float *param_3);
/* 0x004ed000 SoundSys_SetFrequency_17 -> SoundSys_SetFrequency_17 */
void SoundSys_SetFrequency_17(void);
/* 0x004ed010 SoundSys_StopSoundSample_17 -> SoundSys_StopSoundSample_17 */
void SoundSys_StopSoundSample_17(void);
/* 0x004ed510 InputPort_Init -> InputPort_Init */
void InputPort_Init(void);
/* 0x004ed560 InputPort_LoadParameters -> InputPort_LoadParameters */
void InputPort_LoadParameters(uint32_t param_1);
/* 0x004ed5b0 InputPort_OnEvent -> InputPort_OnEvent */
void InputPort_OnEvent(void);
/* 0x004ed5c0 InputPort_Process -> InputPort_Process */
void InputPort_Process(uint32_t param_1);
/* 0x004ed5e0 InputPort_Action -> InputPort_Action */
void InputPort_Action(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13, uint32_t param_14, uint32_t param_15, uint32_t param_16);
/* 0x004ed6b0 LODSettings_Init -> LODSettings_Init */
void LODSettings_Init(void);
/* 0x004edb60 LODSettings_LoadParameters -> LODSettings_LoadParameters */
void LODSettings_LoadParameters(void);
/* 0x004edc60 SoundSys_LoadSoundDef_17 -> SoundSys_LoadSoundDef_17 */
void SoundSys_LoadSoundDef_17(void);
/* 0x004edcb0 SoundSys_EvaluateTrigger_17 -> SoundSys_EvaluateTrigger_17 */
uint16_t SoundSys_EvaluateTrigger_17(void);
/* 0x004edcc0 SoundSys_AttachLipsync_17 -> SoundSys_AttachLipsync_17 */
void SoundSys_AttachLipsync_17(void);
/* 0x004edce0 SoundSys_Definephysicsobjtype -> SoundSys_Definephysicsobjtype */
void SoundSys_Definephysicsobjtype(void);
/* 0x004edd20 DefinePhysicsObjType -> DefinePhysicsObjType */
unknown DefinePhysicsObjType(unknown param1, unknown param2);
/* 0x004edfb0 SoundSys_InitSoundSys_18 -> SoundSys_InitSoundSys_18 */
void SoundSys_InitSoundSys_18(void);
/* 0x004edfe0 PhysicsObjType_ParseConfigFile -> PhysicsObjType_ParseConfigFile */
void PhysicsObjType_ParseConfigFile(char* cfg_file);
/* 0x004ee030 Physics_ObjLoad -> Physics_ObjLoad */
void Physics_ObjLoad(char *path);
/* 0x004ee050 SoundSys_PlaySoundSample_18 -> SoundSys_PlaySoundSample_18 */
void SoundSys_PlaySoundSample_18(uint32_t *param_1);
/* 0x004ee0e0 SoundSys_Update3DPosition_18 -> SoundSys_Update3DPosition_18 */
uint8_t SoundSys_Update3DPosition_18(void);
/* 0x004ee0f0 SoundSys_SetMasterVolume_18 -> SoundSys_SetMasterVolume_18 */
uint8_t SoundSys_SetMasterVolume_18(void);
/* 0x004ee100 SoundSys_SetFrequency_18 -> SoundSys_SetFrequency_18 */
uint8_t SoundSys_SetFrequency_18(void);
/* 0x004ee110 SoundSys_StopSoundSample_18 -> SoundSys_StopSoundSample_18 */
uint32_t SoundSys_StopSoundSample_18(void);
/* 0x004ee120 SoundSys_LoadSoundDef_18 -> SoundSys_LoadSoundDef_18 */
uint32_t * SoundSys_LoadSoundDef_18(int param_1);
/* 0x004ee140 SoundSys_EvaluateTrigger_18 -> SoundSys_EvaluateTrigger_18 */
int SoundSys_EvaluateTrigger_18(byte *param_1);
/* 0x004ee1b0 SoundSys_AttachLipsync_18 -> SoundSys_AttachLipsync_18 */
int SoundSys_AttachLipsync_18(int param_1);
/* 0x004ee200 SoundSys_InitSoundSys_19 -> SoundSys_InitSoundSys_19 */
void SoundSys_InitSoundSys_19(int param_1);
/* 0x004ee3b0 SoundSys_PlaySoundSample_19 -> SoundSys_PlaySoundSample_19 */
void SoundSys_PlaySoundSample_19(void);
/* 0x004ee410 ScreenGrab_Init -> ScreenGrab_Init */
void ScreenGrab_Init(void);
/* 0x004ee600 ScreenGrab_Setup -> ScreenGrab_Setup */
void ScreenGrab_Setup(int param_1);
/* 0x004ee690 SoundSys_Update3DPosition_19 -> SoundSys_Update3DPosition_19 */
void SoundSys_Update3DPosition_19(void);
/* 0x004ee6b0 SoundSys_LocalGrab -> SoundSys_LocalGrab */
void SoundSys_LocalGrab(char *param_1);
/* 0x004ee8e0 SoundSys_SetMasterVolume_19 -> SoundSys_SetMasterVolume_19 */
void SoundSys_SetMasterVolume_19(int param_1, uint8_t *param_2, uint16_t param_3, uint16_t param_4);
/* 0x004ee940 SoundSys_SetFrequency_19 -> SoundSys_SetFrequency_19 */
uint32_t SoundSys_SetFrequency_19(void);
/* 0x004ee960 SoundSys_StopSoundSample_19 -> SoundSys_StopSoundSample_19 */
uint32_t SoundSys_StopSoundSample_19(uint32_t param_1);
/* 0x004ee970 CameraBase_Init -> CameraBase_Init */
void CameraBase_Init(void);
/* 0x004ef860 CameraBase_Cleanup -> CameraBase_Cleanup */
void CameraBase_Cleanup(float *param_1, int *param_2);
/* 0x004ef8c0 CameraBase_Cleanup_2 -> CameraBase_Cleanup_2 */
void CameraBase_Cleanup_2(float *param_1, int param_2);
/* 0x004ef9e0 CameraBase_Update_2 -> CameraBase_Update_2 */
void CameraBase_Update_2(float *param_1, int *param_2);
/* 0x004efba0 CameraBase_OnEvent -> CameraBase_OnEvent */
void CameraBase_OnEvent(void);
/* 0x004efce0 CameraBase_Process -> CameraBase_Process */
void CameraBase_Process(void);
/* 0x004eff30 CameraBase_Action -> CameraBase_Action */
void CameraBase_Action(double *param_1, int *param_2);
/* 0x004f00b0 CameraBase_Cleanup_3 -> CameraBase_Cleanup_3 */
void CameraBase_Cleanup_3(uint32_t *param_1, int *param_2);
/* 0x004f0110 CameraBase_Cleanup_4 -> CameraBase_Cleanup_4 */
void CameraBase_Cleanup_4(uint16_t *param_1, int *param_2);
/* 0x004f01c0 CameraBase_Cleanup_5 -> CameraBase_Cleanup_5 */
void CameraBase_Cleanup_5(void);
/* 0x004f0350 CameraBase_Cleanup_6 -> CameraBase_Cleanup_6 */
void CameraBase_Cleanup_6(uint32_t param_1, int *param_2);
/* 0x004f0380 CameraBase_Cleanup_7 -> CameraBase_Cleanup_7 */
void CameraBase_Cleanup_7(char *param_1, uint32_t *param_2);
/* 0x004f03a0 CameraBase_Cleanup_8 -> CameraBase_Cleanup_8 */
void CameraBase_Cleanup_8(uint32_t param_1, int *param_2);
/* 0x004f0400 CameraBase_Cleanup_9 -> CameraBase_Cleanup_9 */
void CameraBase_Cleanup_9(uint32_t param_1, int *param_2);
/* 0x004f0460 CameraBase_Cleanup_10 -> CameraBase_Cleanup_10 */
void CameraBase_Cleanup_10(uint32_t *param_1, int *param_2);
/* 0x004f04d0 CameraBase_Cleanup_11 -> CameraBase_Cleanup_11 */
void CameraBase_Cleanup_11(void);
/* 0x004f0500 CameraBase_Cleanup_12 -> CameraBase_Cleanup_12 */
void CameraBase_Cleanup_12(uint8_t *param_1, int *param_2);
/* 0x004f0740 Task_DeclareParameters -> Task_DeclareParameters */
void Task_DeclareParameters(...);
/* 0x004f0780 Task_New -> Task_New */
void Task_New(...);
/* 0x004f0a60 Script_ParseEnumInt32 -> Script_ParseEnumInt32 */
void Script_ParseEnumInt32(void);
/* 0x004f0c90 Script_ParseEnumReal32 -> Script_ParseEnumReal32 */
void Script_ParseEnumReal32(int param_1);
/* 0x004f0cb0 Script_ParseEnumString -> Script_ParseEnumString */
void Script_ParseEnumString(uint32_t param_1);
/* 0x004f0cd0 Script_ExecuteLevelScript -> Script_ExecuteLevelScript */
void Script_ExecuteLevelScript(void);
/* 0x004f0ce0 Script_CallNativeHandler -> Script_CallNativeHandler */
void Script_CallNativeHandler(uint32_t param_1);
/* 0x004f0cf0 Config_Compile -> Config_Compile */
int Config_Compile(int context, char* cfgName, int flags);
/* 0x004f0d40 Task_New_2 -> Task_New_2 */
void __thiscall Task_New_2(uint32_t param_1, uint32_t param_2, int param_3);
/* 0x004f0e10 Level_LoadObjects -> Level_LoadObjects */
void Level_LoadObjects(int level_path, int level_len);
/* 0x004f0e50 Script_Init -> Script_Init */
void Script_Init(char* file_name, int8_t p2, int p3, int8_t p4);
/* 0x004f0e90 Qtask_Update -> Qtask_Update */
void Qtask_Update(void);
/* 0x004f0ed0 Script_EvaluateCondition -> Script_EvaluateCondition */
uint32_t Script_EvaluateCondition(void);
/* 0x004f0ee0 Script_FormatString -> Script_FormatString */
uint32_t Script_FormatString(void);
/* 0x004f0ef0 Script_SpawnNewTask_2 -> Script_SpawnNewTask_2 */
uint32_t Script_SpawnNewTask_2(void);
/* 0x004f0f00 Script_ParseEnumInt32_2 -> Script_ParseEnumInt32_2 */
uint32_t Script_ParseEnumInt32_2(void);
/* 0x004f0f10 Script_ParseEnumReal32_2 -> Script_ParseEnumReal32_2 */
uint32_t Script_ParseEnumReal32_2(void);
/* 0x004f0f20 Script_ParseEnumString_2 -> Script_ParseEnumString_2 */
uint32_t Script_ParseEnumString_2(void);
/* 0x004f0f30 Script_ExecuteLevelScript_2 -> Script_ExecuteLevelScript_2 */
uint32_t Script_ExecuteLevelScript_2(void);
/* 0x004f0f40 Script_CallNativeHandler_2 -> Script_CallNativeHandler_2 */
uint32_t Script_CallNativeHandler_2(void);
/* 0x004f0f50 Script_EvaluateCondition_2 -> Script_EvaluateCondition_2 */
uint32_t Script_EvaluateCondition_2(void);
/* 0x004f0f60 Script_FormatString_2 -> Script_FormatString_2 */
uint32_t Script_FormatString_2(void);
/* 0x004f0f70 Script_SpawnNewTask_3 -> Script_SpawnNewTask_3 */
uint32_t Script_SpawnNewTask_3(void);
/* 0x004f0f80 Script_ParseEnumInt32_3 -> Script_ParseEnumInt32_3 */
uint32_t Script_ParseEnumInt32_3(void);
/* 0x004f0f90 Script_ParseEnumReal32_3 -> Script_ParseEnumReal32_3 */
uint32_t Script_ParseEnumReal32_3(void);
/* 0x004f0fa0 Script_ParseEnumString_3 -> Script_ParseEnumString_3 */
uint32_t Script_ParseEnumString_3(void);
/* 0x004f0fb0 Script_ExecuteLevelScript_3 -> Script_ExecuteLevelScript_3 */
uint32_t Script_ExecuteLevelScript_3(void);
/* 0x004f0fc0 Script_CallNativeHandler_3 -> Script_CallNativeHandler_3 */
uint32_t Script_CallNativeHandler_3(void);
/* 0x004f0fd0 Script_EvaluateCondition_3 -> Script_EvaluateCondition_3 */
uint32_t Script_EvaluateCondition_3(void);
/* 0x004f0fe0 Script_FormatString_3 -> Script_FormatString_3 */
uint32_t Script_FormatString_3(void);
/* 0x004f0ff0 Script_SpawnNewTask_4 -> Script_SpawnNewTask_4 */
uint32_t Script_SpawnNewTask_4(void);
/* 0x004f1000 Script_ParseEnumInt32_4 -> Script_ParseEnumInt32_4 */
uint32_t Script_ParseEnumInt32_4(void);
/* 0x004f1010 Script_ParseEnumReal32_4 -> Script_ParseEnumReal32_4 */
uint32_t Script_ParseEnumReal32_4(void);
/* 0x004f1020 Script_ParseEnumString_4 -> Script_ParseEnumString_4 */
uint32_t Script_ParseEnumString_4(void);
/* 0x004f1030 Script_ExecuteLevelScript_4 -> Script_ExecuteLevelScript_4 */
uint32_t Script_ExecuteLevelScript_4(int param_1);
/* 0x004f1050 Script_EvaluateCondition_4 -> Script_EvaluateCondition_4 */
int Script_EvaluateCondition_4(int param_1);
/* 0x004f1080 Script_FormatString_4 -> Script_FormatString_4 */
uint32_t Script_FormatString_4(void);
/* 0x004f1090 Script_LevelqtaskidDAlready -> Script_LevelqtaskidDAlready */
void Script_LevelqtaskidDAlready(int param_1, uint32_t param_2);
/* 0x004f10e0 Script_SpawnNewTask_5 -> Script_SpawnNewTask_5 */
void Script_SpawnNewTask_5(int param_1);
/* 0x004f1110 Script_ParseEnumInt32_5 -> Script_ParseEnumInt32_5 */
void Script_ParseEnumInt32_5(int param_1);
/* 0x004f1160 Script_ParseEnumReal32_5 -> Script_ParseEnumReal32_5 */
uint32_t Script_ParseEnumReal32_5(void);
/* 0x004f1180 Script_ParseEnumString_5 -> Script_ParseEnumString_5 */
uint8_t * Script_ParseEnumString_5(uint32_t param_1);
/* 0x004f11a0 Script_ExecuteLevelScript_5 -> Script_ExecuteLevelScript_5 */
uint32_t * Script_ExecuteLevelScript_5(int param_1);
/* 0x004f11f0 Script_CallNativeHandler_5 -> Script_CallNativeHandler_5 */
uint8_t Script_CallNativeHandler_5(void);
/* 0x004f1200 Script_EvaluateCondition_5 -> Script_EvaluateCondition_5 */
uint8_t Script_EvaluateCondition_5(void);
/* 0x004f1210 Script_FormatString_5 -> Script_FormatString_5 */
uint32_t Script_FormatString_5(void);
/* 0x004f1220 Script_SpawnNewTask_6 -> Script_SpawnNewTask_6 */
uint32_t Script_SpawnNewTask_6(void);
/* 0x004f1230 Script_ParseEnumInt32_6 -> Script_ParseEnumInt32_6 */
uint32_t Script_ParseEnumInt32_6(void);
/* 0x004f1240 Script_ParseEnumReal32_6 -> Script_ParseEnumReal32_6 */
int Script_ParseEnumReal32_6(void);
/* 0x004f1270 Script_ParseEnumString_6 -> Script_ParseEnumString_6 */
void Script_ParseEnumString_6(char *param_1, int param_2);
/* 0x004f1320 Script_ExecuteLevelScript_6 -> Script_ExecuteLevelScript_6 */
void Script_ExecuteLevelScript_6(uint32_t *param_1);
/* 0x004f1340 Script_CallNativeHandler_6 -> Script_CallNativeHandler_6 */
void Script_CallNativeHandler_6(int *param_1);
/* 0x004f13c0 Script_EvaluateCondition_6 -> Script_EvaluateCondition_6 */
void Script_EvaluateCondition_6(int param_1, int param_2);
/* 0x004f1400 Script_Isexists -> Script_Isexists */
void Script_Isexists(uint32_t *param_1, uint32_t param_2);
/* 0x004f16c0 Script_FormatString_6 -> Script_FormatString_6 */
bool Script_FormatString_6(int *param_1);
/* 0x004f16e0 Script_SpawnNewTask_7 -> Script_SpawnNewTask_7 */
float10 Script_SpawnNewTask_7(int param_1, uint32_t param_2);
/* 0x004f1740 Script_ParseEnumInt32_7 -> Script_ParseEnumInt32_7 */
void Script_ParseEnumInt32_7(int param_1);
/* 0x004f17c0 Script_ParseEnumReal32_7 -> Script_ParseEnumReal32_7 */
uint32_t Script_ParseEnumReal32_7(void);
/* 0x004f17d0 Script_ParseEnumString_7 -> Script_ParseEnumString_7 */
int Script_ParseEnumString_7(char *param_1);
/* 0x004f1840 Script_ExecuteLevelScript_7 -> Script_ExecuteLevelScript_7 */
void Script_ExecuteLevelScript_7(void);
/* 0x004f18c0 Script_CallNativeHandler_7 -> Script_CallNativeHandler_7 */
void Script_CallNativeHandler_7(void);
/* 0x004f1950 Script_EvaluateCondition_7 -> Script_EvaluateCondition_7 */
void Script_EvaluateCondition_7(int param_1);
/* 0x004f1980 Script_FormatString_7 -> Script_FormatString_7 */
void Script_FormatString_7(uint32_t *param_1, int param_2);
/* 0x004f19c0 Script_UnableToAllocatePara -> Script_UnableToAllocatePara */
void Script_UnableToAllocatePara(uint32_t param_1, int param_2);
/* 0x004f1a40 Script_SpawnNewTask_8 -> Script_SpawnNewTask_8 */
void Script_SpawnNewTask_8(int param_1);
/* 0x004f1a60 Script_ParseEnumInt32_8 -> Script_ParseEnumInt32_8 */
uint8_t Script_ParseEnumInt32_8(void);
/* 0x004f1a70 Script_ParseEnumReal32_8 -> Script_ParseEnumReal32_8 */
uint8_t Script_ParseEnumReal32_8(void);
/* 0x004f1a80 Script_UndefinedParameterTy -> Script_UndefinedParameterTy */
void Script_UndefinedParameterTy(int *param_1, int param_2, int param_3, int param_4, uint8_t param_5, uint32_t param_6);
/* 0x004f1af0 Script_ParseEnumString_8 -> Script_ParseEnumString_8 */
void Script_ParseEnumString_8(uint32_t param_1, int param_2, char param_3, uint32_t param_4);
/* 0x004f1b20 Script_UnableToAllocatePara_2 -> Script_UnableToAllocatePara_2 */
void Script_UnableToAllocatePara_2(void);
/* 0x004f1b50 Script_ExecuteLevelScript_8 -> Script_ExecuteLevelScript_8 */
void Script_ExecuteLevelScript_8(char param_1);
/* 0x004f1b60 Script_CallNativeHandler_8 -> Script_CallNativeHandler_8 */
uint8_t Script_CallNativeHandler_8(void);
/* 0x004f1b70 Script_EvaluateCondition_8 -> Script_EvaluateCondition_8 */
uint8_t Script_EvaluateCondition_8(void);
/* 0x004f1b80 Script_FormatString_8 -> Script_FormatString_8 */
uint8_t Script_FormatString_8(void);
/* 0x004f1b90 Script_SpawnNewTask_9 -> Script_SpawnNewTask_9 */
uint8_t Script_SpawnNewTask_9(void);
/* 0x004f1ba0 Script_ParseEnumInt32_9 -> Script_ParseEnumInt32_9 */
uint8_t Script_ParseEnumInt32_9(void);
/* 0x004f1bb0 Script_ParseEnumReal32_9 -> Script_ParseEnumReal32_9 */
uint8_t Script_ParseEnumReal32_9(void);
/* 0x004f1bc0 Script_ParseEnumString_9 -> Script_ParseEnumString_9 */
void Script_ParseEnumString_9(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004f1c20 Script_TooFewParametersInLi -> Script_TooFewParametersInLi */
void Script_TooFewParametersInLi(int *param_1, int param_2);
/* 0x004f1c70 Script_ExecuteLevelScript_9 -> Script_ExecuteLevelScript_9 */
uint32_t * Script_ExecuteLevelScript_9(void);
/* 0x004f1c90 Script_CallNativeHandler_9 -> Script_CallNativeHandler_9 */
uint32_t * Script_CallNativeHandler_9(void);
/* 0x004f1cb0 Script_EvaluateCondition_9 -> Script_EvaluateCondition_9 */
uint32_t * Script_EvaluateCondition_9(void);
/* 0x004f1cd0 Script_FormatString_9 -> Script_FormatString_9 */
void Script_FormatString_9(uint32_t param_1);
/* 0x004f1d60 Script_SpawnNewTask_10 -> Script_SpawnNewTask_10 */
void Script_SpawnNewTask_10(uint32_t *param_1, uint32_t param_2);
/* 0x004f1d80 Script_ParseEnumInt32_10 -> Script_ParseEnumInt32_10 */
void Script_ParseEnumInt32_10(uint32_t *param_1);
/* 0x004f1db0 Script_ParseEnumReal32_10 -> Script_ParseEnumReal32_10 */
void Script_ParseEnumReal32_10(uint32_t param_1, uint32_t param_2);
/* 0x004f1e00 Script_ParseEnumString_10 -> Script_ParseEnumString_10 */
uint32_t Script_ParseEnumString_10(void);
/* 0x004f1e10 Script_ExecuteLevelScript_10 -> Script_ExecuteLevelScript_10 */
uint32_t Script_ExecuteLevelScript_10(void);
/* 0x004f1e20 Script_CallNativeHandler_10 -> Script_CallNativeHandler_10 */
uint32_t Script_CallNativeHandler_10(void);
/* 0x004f1e30 Script_Enumint32 -> Script_Enumint32 */
void Script_Enumint32(void);
/* 0x004f1ea0 Script_EvaluateCondition_10 -> Script_EvaluateCondition_10 */
void Script_EvaluateCondition_10(void);
/* 0x004f1ee0 Script_FormatString_10 -> Script_FormatString_10 */
void Script_FormatString_10(void);
/* 0x004f1f50 Script_SpawnNewTask_11 -> Script_SpawnNewTask_11 */
void Script_SpawnNewTask_11(void);
/* 0x004f1fc0 Script_ParseEnumInt32_11 -> Script_ParseEnumInt32_11 */
uint8_t Script_ParseEnumInt32_11(void);
/* 0x004f1fd0 Script_ParseEnumReal32_11 -> Script_ParseEnumReal32_11 */
uint8_t Script_ParseEnumReal32_11(void);
/* 0x004f1fe0 Script_ParseEnumString_11 -> Script_ParseEnumString_11 */
uint8_t Script_ParseEnumString_11(void);
/* 0x004f1ff0 Script_ExecuteLevelScript_11 -> Script_ExecuteLevelScript_11 */
uint8_t Script_ExecuteLevelScript_11(void);
/* 0x004f2000 Script_CallNativeHandler_11 -> Script_CallNativeHandler_11 */
uint8_t Script_CallNativeHandler_11(void);
/* 0x004f2010 Script_EvaluateCondition_11 -> Script_EvaluateCondition_11 */
uint8_t Script_EvaluateCondition_11(void);
/* 0x004f2020 Script_FormatString_11 -> Script_FormatString_11 */
uint32_t Script_FormatString_11(void);
/* 0x004f2030 Script_SpawnNewTask_12 -> Script_SpawnNewTask_12 */
uint32_t Script_SpawnNewTask_12(void);
/* 0x004f2040 Script_ParseEnumInt32_12 -> Script_ParseEnumInt32_12 */
uint8_t Script_ParseEnumInt32_12(void);
/* 0x004f2050 Script_ParseEnumReal32_12 -> Script_ParseEnumReal32_12 */
void Script_ParseEnumReal32_12(uint32_t *param_1);
/* 0x004f2060 Script_ParseEnumString_12 -> Script_ParseEnumString_12 */
uint32_t Script_ParseEnumString_12(int param_1, int param_2);
/* 0x004f2070 Script_ExecuteLevelScript_12 -> Script_ExecuteLevelScript_12 */
void Script_ExecuteLevelScript_12(int param_1, uint8_t *param_2, int param_3);
/* 0x004f2140 Script_CallNativeHandler_12 -> Script_CallNativeHandler_12 */
uint32_t Script_CallNativeHandler_12(int param_1, uint32_t param_2, int param_3);
/* 0x004f2290 Script_EvaluateCondition_12 -> Script_EvaluateCondition_12 */
void Script_EvaluateCondition_12(int param_1);
/* 0x004f2310 Script_FormatString_12 -> Script_FormatString_12 */
void Script_FormatString_12(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004f2350 Script_SpawnNewTask_13 -> Script_SpawnNewTask_13 */
void Script_SpawnNewTask_13(int param_1, uint8_t param_2);
/* 0x004f2390 Script_ParseEnumInt32_13 -> Script_ParseEnumInt32_13 */
int Script_ParseEnumInt32_13(int param_1);
/* 0x004f23d0 Script_ParseEnumReal32_13 -> Script_ParseEnumReal32_13 */
void Script_ParseEnumReal32_13(int param_1, uint32_t param_2);
/* 0x004f2400 EditRigidObj_OnEvent -> EditRigidObj_OnEvent */
void EditRigidObj_OnEvent(int param_1, int *param_2);
/* 0x004f2740 EditRigidObj_Init -> EditRigidObj_Init */
void EditRigidObj_Init(void);
/* 0x004f2930 EditRigidObj_LoadParameters -> EditRigidObj_LoadParameters */
void EditRigidObj_LoadParameters(int param_1);
/* 0x004f2ac0 EditRigidObj_Setup -> EditRigidObj_Setup */
void EditRigidObj_Setup(int param_1);
/* 0x004f2b50 EditRigidObj_Process -> EditRigidObj_Process */
void EditRigidObj_Process(int param_1);
/* 0x004f2b90 EditRigidObj_Update -> EditRigidObj_Update */
void EditRigidObj_Update(int param_1);
/* 0x004f2d50 Script_ParseEnumString_13 -> Script_ParseEnumString_13 */
void Script_ParseEnumString_13(int param_1);
/* 0x004f30a0 EditRigidObj_Cleanup -> EditRigidObj_Cleanup */
void EditRigidObj_Cleanup(int param_1, int param_2);
/* 0x004f3240 EditRigidObj_Cleanup_2 -> EditRigidObj_Cleanup_2 */
void EditRigidObj_Cleanup_2(int param_1, uint32_t *param_2);
/* 0x004f3360 Script_ExecuteLevelScript_13 -> Script_ExecuteLevelScript_13 */
void Script_ExecuteLevelScript_13(void);
/* 0x004f3380 Script_CallNativeHandler_13 -> Script_CallNativeHandler_13 */
uint16_t Script_CallNativeHandler_13(void);
/* 0x004f3390 Script_EvaluateCondition_13 -> Script_EvaluateCondition_13 */
int Script_EvaluateCondition_13(uint32_t param_1, char *param_2, uint32_t *param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6);
/* 0x004f3440 AnimTask_Init -> AnimTask_Init */
void AnimTask_Init(void);
/* 0x004f3570 AnimTask_LoadParameters -> AnimTask_LoadParameters */
void AnimTask_LoadParameters(void);
/* 0x004f3610 AnimTask_Process -> AnimTask_Process */
void AnimTask_Process(uint32_t param_1, int *param_2);
/* 0x004f36c0 Script_FormatString_13 -> Script_FormatString_13 */
void Script_FormatString_13(void);
/* 0x004f3ac0 Script_SpawnNewTask_14 -> Script_SpawnNewTask_14 */
void Script_SpawnNewTask_14(int param_1);
/* 0x004f3b40 Script_ParseEnumInt32_14 -> Script_ParseEnumInt32_14 */
void Script_ParseEnumInt32_14(void);
/* 0x004f3ba0 Script_ParseEnumReal32_14 -> Script_ParseEnumReal32_14 */
void Script_ParseEnumReal32_14(void);
/* 0x004f3c20 Script_ParseEnumString_14 -> Script_ParseEnumString_14 */
void Script_ParseEnumString_14(void);
/* 0x004f3d30 Script_ExecuteLevelScript_14 -> Script_ExecuteLevelScript_14 */
void Script_ExecuteLevelScript_14(void);
/* 0x004f3db0 Script_CallNativeHandler_14 -> Script_CallNativeHandler_14 */
void Script_CallNativeHandler_14(void);
/* 0x004f3e40 Script_EvaluateCondition_14 -> Script_EvaluateCondition_14 */
void Script_EvaluateCondition_14(void);
/* 0x004f3ef0 Script_FormatString_14 -> Script_FormatString_14 */
void Script_FormatString_14(int param_1, int param_2);
/* 0x004f3f60 Script_SpawnNewTask_15 -> Script_SpawnNewTask_15 */
void Script_SpawnNewTask_15(int param_1);
/* 0x004f4060 AnimTask_SendChannels -> AnimTask_SendChannels */
void AnimTask_SendChannels();
/* 0x004f40d0 Script_ParseEnumReal32_15 -> Script_ParseEnumReal32_15 */
uint8_t Script_ParseEnumReal32_15(void);
/* 0x004f40e0 Script_ParseEnumString_15 -> Script_ParseEnumString_15 */
uint8_t Script_ParseEnumString_15(void);
/* 0x004f40f0 Script_ExecuteLevelScript_15 -> Script_ExecuteLevelScript_15 */
uint32_t Script_ExecuteLevelScript_15(void);
/* 0x004f4100 Script_CallNativeHandler_15 -> Script_CallNativeHandler_15 */
uint16_t Script_CallNativeHandler_15(void);
/* 0x004f4110 Script_EvaluateCondition_15 -> Script_EvaluateCondition_15 */
uint8_t Script_EvaluateCondition_15(void);
/* 0x004f4120 Script_FormatString_15 -> Script_FormatString_15 */
uint8_t Script_FormatString_15(void);
/* 0x004f4130 Script_SpawnNewTask_16 -> Script_SpawnNewTask_16 */
uint8_t Script_SpawnNewTask_16(void);
/* 0x004f4140 Script_ParseEnumInt32_16 -> Script_ParseEnumInt32_16 */
uint8_t Script_ParseEnumInt32_16(void);
/* 0x004f4150 Script_ParseEnumReal32_16 -> Script_ParseEnumReal32_16 */
uint32_t * Script_ParseEnumReal32_16(void);
/* 0x004f4190 Vehicle_Init -> Vehicle_Init */
void Vehicle_Init(void);
/* 0x004f43e0 Vehicle_Setup -> Vehicle_Setup */
void Vehicle_Setup(int param_1, uint32_t param_2);
/* 0x004f45b0 Script_ParseEnumString_16 -> Script_ParseEnumString_16 */
void Script_ParseEnumString_16(void);
/* 0x004f45f0 Script_ExecuteLevelScript_16 -> Script_ExecuteLevelScript_16 */
uint16_t Script_ExecuteLevelScript_16(void);
/* 0x004f4600 Script_CallNativeHandler_16 -> Script_CallNativeHandler_16 */
void Script_CallNativeHandler_16(int param_1);
/* 0x004f4640 Script_EvaluateCondition_16 -> Script_EvaluateCondition_16 */
void Script_EvaluateCondition_16(uint32_t param_1);
/* 0x004f4660 VehicleChild_Dispatch -> VehicleChild_Dispatch */
void VehicleChild_Dispatch();
/* 0x004f4680 Script_FormatString_16 -> Script_FormatString_16 */
void Script_FormatString_16(int param_1);
/* 0x004f46e0 Vehicle_LoadParameters -> Vehicle_LoadParameters */
void Vehicle_LoadParameters(int param_1, int *param_2);
/* 0x004f4780 Script_SpawnNewTask_17 -> Script_SpawnNewTask_17 */
void Script_SpawnNewTask_17(int param_1, int *param_2);
/* 0x004f4800 CarGun_ConstructPath -> CarGun_ConstructPath */
void CarGun_ConstructPath();
/* 0x004f4820 Script_ParseEnumInt32_17 -> Script_ParseEnumInt32_17 */
void Script_ParseEnumInt32_17(int param_1);
/* 0x004f4850 Script_ParseEnumString_17 -> Script_ParseEnumString_17 */
uint8_t Script_ParseEnumString_17(void);
/* 0x004f4860 Script_ExecuteLevelScript_17 -> Script_ExecuteLevelScript_17 */
uint8_t Script_ExecuteLevelScript_17(void);
/* 0x004f4870 Script_CallNativeHandler_17 -> Script_CallNativeHandler_17 */
void Script_CallNativeHandler_17(uint32_t param_1);
/* 0x004f4880 Script_EvaluateCondition_17 -> Script_EvaluateCondition_17 */
void Script_EvaluateCondition_17(int param_1, int *param_2, int param_3, float *param_4, float param_5);
/* 0x004f4910 Script_FormatString_17 -> Script_FormatString_17 */
int Script_FormatString_17(int param_1, int param_2, int param_3);
/* 0x004f4940 Script_SpawnNewTask_18 -> Script_SpawnNewTask_18 */
void Script_SpawnNewTask_18(int *param_1, int param_2);
/* 0x004f4b00 CutScene_TaskCreate -> CutScene_TaskCreate */
void* CutScene_TaskCreate(void);
/* 0x004f4ee0 CutScene_LoadParameters -> CutScene_LoadParameters */
void CutScene_LoadParameters(int param_1);
/* 0x004f4fb0 CutScene_OnEvent -> CutScene_OnEvent */
void CutScene_OnEvent(void);
/* 0x004f5050 CutScene_Action -> CutScene_Action */
void CutScene_Action(void);
/* 0x004f50e0 CutScene_Process -> CutScene_Process */
void CutScene_Process(int param_1);
/* 0x004f51d0 CutScene_TaskUpdate -> CutScene_TaskUpdate */
int CutScene_TaskUpdate(void* cutsceneTask);
/* 0x004f5400 Script_ParseEnumInt32_18 -> Script_ParseEnumInt32_18 */
void Script_ParseEnumInt32_18(int param_1);
/* 0x004f55d0 CutScene_ApplyFrame -> CutScene_ApplyFrame */
void CutScene_ApplyFrame();
/* 0x004f6290 Script_ParseEnumString_18 -> Script_ParseEnumString_18 */
void Script_ParseEnumString_18(double param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, double param_6, double param_7, double param_8, double param_9, double param_10, double param_11);
/* 0x004f63c0 CutScene_PostLoad -> CutScene_PostLoad */
void CutScene_PostLoad(...);
/* 0x004f6520 CutScene_Cleanup -> CutScene_Cleanup */
void CutScene_Cleanup(int param_1);
/* 0x004f6590 Script_ExecuteLevelScript_18 -> Script_ExecuteLevelScript_18 */
void Script_ExecuteLevelScript_18(void);
/* 0x004f65b0 Script_CallNativeHandler_18 -> Script_CallNativeHandler_18 */
void Script_CallNativeHandler_18(uint32_t param_1);
/* 0x004f65c0 Script_EvaluateCondition_18 -> Script_EvaluateCondition_18 */
void Script_EvaluateCondition_18(uint32_t param_1);
/* 0x004f65d0 Script_FormatString_18 -> Script_FormatString_18 */
void Script_FormatString_18(uint32_t param_1);
/* 0x004f65e0 Script_SpawnNewTask_19 -> Script_SpawnNewTask_19 */
double * Script_SpawnNewTask_19(int param_1, double *param_2);
/* 0x004f66a0 Script_ParseEnumInt32_19 -> Script_ParseEnumInt32_19 */
void Script_ParseEnumInt32_19(int param_1, uint32_t *param_2, float *param_3);
/* 0x004f6750 Script_ParseEnumReal32_19 -> Script_ParseEnumReal32_19 */
void Script_ParseEnumReal32_19(int param_1, uint32_t param_2, float *param_3, float param_4, float param_5, uint32_t param_6);
/* 0x004f6b00 Script_ParseEnumString_19 -> Script_ParseEnumString_19 */
void Script_ParseEnumString_19(int param_1);
/* 0x004f6c00 RainDynCubeObj_LoadParameters -> RainDynCubeObj_LoadParameters */
void RainDynCubeObj_LoadParameters(int param_1);
/* 0x004f6d70 Script_ExecuteLevelScript_19 -> Script_ExecuteLevelScript_19 */
void Script_ExecuteLevelScript_19(float param_1);
/* 0x004f6fe0 Script_CallNativeHandler_19 -> Script_CallNativeHandler_19 */
uint32_t Script_CallNativeHandler_19(int param_1);
/* 0x004f70b0 Script_EvaluateCondition_19 -> Script_EvaluateCondition_19 */
void Script_EvaluateCondition_19(int param_1);
/* 0x004f7120 Script_FormatString_19 -> Script_FormatString_19 */
void Script_FormatString_19(int param_1, int param_2);
/* 0x004f7170 RainDynCubeObj_Setup -> RainDynCubeObj_Setup */
void RainDynCubeObj_Setup(uint32_t param_1);
/* 0x004f72e0 RainDynCubeObj_Process -> RainDynCubeObj_Process */
void RainDynCubeObj_Process(int param_1);
/* 0x004f7360 RainDynCubeObj_Init -> RainDynCubeObj_Init */
void RainDynCubeObj_Init(void);
/* 0x004f7630 RainDynCubeObj_Action -> RainDynCubeObj_Action */
void RainDynCubeObj_Action(int param_1);
/* 0x004f77c0 RainDynCubeObj_Update -> RainDynCubeObj_Update */
void RainDynCubeObj_Update(void);
/* 0x004f7960 Script_ParseEnumInt32_20 -> Script_ParseEnumInt32_20 */
void Script_ParseEnumInt32_20(uint32_t param_1);
/* 0x004f7990 Script_VisibleCubesD -> Script_VisibleCubesD */
void Script_VisibleCubesD(int param_1);
/* 0x004f7c20 Script_ParseEnumReal32_20 -> Script_ParseEnumReal32_20 */
uint32_t Script_ParseEnumReal32_20(int param_1);
/* 0x004f7cc0 Script_ParseEnumString_20 -> Script_ParseEnumString_20 */
void Script_ParseEnumString_20(int param_1, double *param_2, float param_3);
/* 0x004f7df0 Script_ExecuteLevelScript_20 -> Script_ExecuteLevelScript_20 */
void Script_ExecuteLevelScript_20(int param_1, double *param_2);
/* 0x004f7f00 RainDynCubeObj_OnEvent -> RainDynCubeObj_OnEvent */
void RainDynCubeObj_OnEvent(void);
/* 0x004f8040 Script_CallNativeHandler_20 -> Script_CallNativeHandler_20 */
void Script_CallNativeHandler_20(int param_1);
/* 0x004f80b0 Script_EvaluateCondition_20 -> Script_EvaluateCondition_20 */
void Script_EvaluateCondition_20(void);
/* 0x004f80e0 Script_FormatString_20 -> Script_FormatString_20 */
void Script_FormatString_20(uint32_t param_1);
/* 0x004f80f0 Script_SpawnNewTask_21 -> Script_SpawnNewTask_21 */
float10 Script_SpawnNewTask_21(uint32_t param_1);
/* 0x004f8140 Script_ParseEnumInt32_21 -> Script_ParseEnumInt32_21 */
void Script_ParseEnumInt32_21(int param_1, int param_2, int *param_3);
/* 0x004f8340 TerrainLightMap_Init -> TerrainLightMap_Init */
void TerrainLightMap_Init(void);
/* 0x004f86e0 TerrainLightMap_LoadParameters -> TerrainLightMap_LoadParameters */
void TerrainLightMap_LoadParameters(int param_1);
/* 0x004f8780 TerrainLightMap_Setup -> TerrainLightMap_Setup */
void TerrainLightMap_Setup(int param_1);
/* 0x004f8ef0 Script_ParseEnumReal32_21 -> Script_ParseEnumReal32_21 */
void Script_ParseEnumReal32_21(int param_1);
/* 0x004f8fb0 Script_ParseEnumString_21 -> Script_ParseEnumString_21 */
void Script_ParseEnumString_21(void);
/* 0x004f8fd0 Script_ExecuteLevelScript_21 -> Script_ExecuteLevelScript_21 */
uint16_t Script_ExecuteLevelScript_21(void);
/* 0x004f8fe0 Script_CallNativeHandler_21 -> Script_CallNativeHandler_21 */
int Script_CallNativeHandler_21(uint32_t param_1, int param_2, uint32_t *param_3);
/* 0x004f90b0 Graph_LoadParameters -> Graph_LoadParameters */
void Graph_LoadParameters(int param_1);
/* 0x004f9160 Graph_Process -> Graph_Process */
void Graph_Process(int param_1);
/* 0x004f9180 Graph_Update -> Graph_Update */
void Graph_Update(int param_1);
/* 0x004f9200 Script_EvaluateCondition_21 -> Script_EvaluateCondition_21 */
uint32_t Script_EvaluateCondition_21(void);
/* 0x004f9210 Script_FormatString_21 -> Script_FormatString_21 */
uint16_t Script_FormatString_21(void);
/* 0x004f9220 Script_SpawnNewTask_22 -> Script_SpawnNewTask_22 */
uint8_t Script_SpawnNewTask_22(void);
/* 0x004f9230 Script_ParseEnumInt32_22 -> Script_ParseEnumInt32_22 */
uint8_t Script_ParseEnumInt32_22(void);
/* 0x004f9240 Script_ParseEnumReal32_22 -> Script_ParseEnumReal32_22 */
uint8_t Script_ParseEnumReal32_22(void);
/* 0x004f9250 Script_ParseEnumString_22 -> Script_ParseEnumString_22 */
uint8_t Script_ParseEnumString_22(void);
/* 0x004f9260 Script_ExecuteLevelScript_22 -> Script_ExecuteLevelScript_22 */
uint8_t Script_ExecuteLevelScript_22(void);
/* 0x004f9270 Script_CallNativeHandler_22 -> Script_CallNativeHandler_22 */
uint8_t Script_CallNativeHandler_22(void);
/* 0x004f9280 Script_EvaluateCondition_22 -> Script_EvaluateCondition_22 */
uint8_t Script_EvaluateCondition_22(void);
/* 0x004f9290 Script_FormatString_22 -> Script_FormatString_22 */
int Script_FormatString_22(int param_1);
/* 0x004f92e0 Script_SpawnNewTask_23 -> Script_SpawnNewTask_23 */
void Script_SpawnNewTask_23(double *param_1, int param_2);
/* 0x004f93b0 Script_ParseEnumInt32_23 -> Script_ParseEnumInt32_23 */
void Script_ParseEnumInt32_23(int param_1, double *param_2);
/* 0x004f9460 Script_NoFreeNodesizeElemen -> Script_NoFreeNodesizeElemen */
void Script_NoFreeNodesizeElemen(short param_1, uint32_t param_2);
/* 0x004f94d0 Script_UndefinedGraphnodeda -> Script_UndefinedGraphnodeda */
uint32_t Script_UndefinedGraphnodeda(int param_1);
/* 0x004f9510 Script_GraphnodeIdAlreadyUs -> Script_GraphnodeIdAlreadyUs */
int * Script_GraphnodeIdAlreadyUs(int param_1, int param_2, int *param_3, int param_4, float param_5, int param_6, char *param_7);
/* 0x004f9620 Script_ParseEnumReal32_23 -> Script_ParseEnumReal32_23 */
void Script_ParseEnumReal32_23(int param_1, int param_2);
/* 0x004f96e0 Script_ParseEnumString_23 -> Script_ParseEnumString_23 */
void Script_ParseEnumString_23(int param_1, int param_2);
/* 0x004f9720 Script_ExecuteLevelScript_23 -> Script_ExecuteLevelScript_23 */
uint32_t Script_ExecuteLevelScript_23(int param_1, int param_2);
/* 0x004f9770 Script_CallNativeHandler_23 -> Script_CallNativeHandler_23 */
void Script_CallNativeHandler_23(double *param_1, int param_2);
/* 0x004f98a0 Script_EvaluateCondition_23 -> Script_EvaluateCondition_23 */
void Script_EvaluateCondition_23(float *param_1, int param_2, char param_3);
/* 0x004f9a40 Script_FormatString_23 -> Script_FormatString_23 */
uint32_t Script_FormatString_23(double *param_1, int param_2, double param_3, char param_4);
/* 0x004f9b80 Script_SpawnNewTask_24 -> Script_SpawnNewTask_24 */
uint32_t * Script_SpawnNewTask_24(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004f9c10 Script_GraphnodeLinklimitRe -> Script_GraphnodeLinklimitRe */
void Script_GraphnodeLinklimitRe(int param_1, uint32_t param_2);
/* 0x004f9c50 Script_ParseEnumInt32_24 -> Script_ParseEnumInt32_24 */
void Script_ParseEnumInt32_24(int param_1);
/* 0x004f9ca0 Script_ParseEnumReal32_24 -> Script_ParseEnumReal32_24 */
void Script_ParseEnumReal32_24(int param_1, int param_2);
/* 0x004f9cd0 Script_ParseEnumString_24 -> Script_ParseEnumString_24 */
void Script_ParseEnumString_24(uint32_t *param_1, uint32_t param_2, uint32_t param_3);
/* 0x004f9df0 Script_GraphstreamCollision -> Script_GraphstreamCollision */
void Script_GraphstreamCollision(uint32_t param_1, int param_2, int param_3);
/* 0x004f9e70 Script_ExecuteLevelScript_24 -> Script_ExecuteLevelScript_24 */
int Script_ExecuteLevelScript_24(char *param_1);
/* 0x004f9eb0 Script_CallNativeHandler_24 -> Script_CallNativeHandler_24 */
void Script_CallNativeHandler_24(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t *param_4, uint32_t param_5);
/* 0x004f9ff0 Graph_Open -> Graph_Open */
void Graph_Open(uint32_t level, char* graph_str);
/* 0x004fa140 Script_FormatString_24 -> Script_FormatString_24 */
uint32_t * Script_FormatString_24(int param_1);
/* 0x004fa160 Script_SpawnNewTask_25 -> Script_SpawnNewTask_25 */
void Script_SpawnNewTask_25(int param_1, uint32_t param_2);
/* 0x004fa3b0 Script_ParseEnumInt32_25 -> Script_ParseEnumInt32_25 */
void __thiscall Script_ParseEnumInt32_25(uint32_t param_1, uint32_t param_2, uint32_t param_3);
/* 0x004fa4e0 Script_ParseEnumReal32_25 -> Script_ParseEnumReal32_25 */
uint32_t __thiscall Script_ParseEnumReal32_25(uint16_t param_1, int param_2, uint8_t param_3);
/* 0x004fa520 Script_ParseEnumString_25 -> Script_ParseEnumString_25 */
uint32_t Script_ParseEnumString_25(int param_1);
/* 0x004fa560 Script_ExecuteLevelScript_25 -> Script_ExecuteLevelScript_25 */
uint32_t __thiscall Script_ExecuteLevelScript_25(uint32_t param_1, int param_2, uint16_t param_3);
/* 0x004fa5a0 Script_CallNativeHandler_25 -> Script_CallNativeHandler_25 */
uint32_t __thiscall Script_CallNativeHandler_25(uint32_t param_1, int param_2, uint16_t param_3);
/* 0x004fa5e0 Script_EvaluateCondition_25 -> Script_EvaluateCondition_25 */
uint32_t Script_EvaluateCondition_25(int param_1, uint32_t param_2);
/* 0x004fa620 Script_FormatString_25 -> Script_FormatString_25 */
uint32_t Script_FormatString_25(int param_1, uint32_t param_2);
/* 0x004fa660 Script_SpawnNewTask_26 -> Script_SpawnNewTask_26 */
uint32_t Script_SpawnNewTask_26(int param_1, uint32_t param_2);
/* 0x004fa6a0 Script_ParseEnumInt32_26 -> Script_ParseEnumInt32_26 */
uint32_t Script_ParseEnumInt32_26(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004fa6e0 Script_ParseEnumReal32_26 -> Script_ParseEnumReal32_26 */
uint32_t Script_ParseEnumReal32_26(int param_1, uint32_t *param_2);
/* 0x004fa730 Script_ParseEnumString_26 -> Script_ParseEnumString_26 */
uint32_t Script_ParseEnumString_26(int param_1, char *param_2);
/* 0x004fa7a0 Script_ExecuteLevelScript_26 -> Script_ExecuteLevelScript_26 */
uint32_t Script_ExecuteLevelScript_26(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004fa7e0 Script_CallNativeHandler_26 -> Script_CallNativeHandler_26 */
uint32_t Script_CallNativeHandler_26(int param_1, uint8_t *param_2);
/* 0x004fa810 Script_EvaluateCondition_26 -> Script_EvaluateCondition_26 */
uint32_t Script_EvaluateCondition_26(int param_1, uint16_t *param_2);
/* 0x004fa850 Script_FormatString_26 -> Script_FormatString_26 */
uint32_t Script_FormatString_26(int param_1, uint32_t *param_2);
/* 0x004fa890 Script_SpawnNewTask_27 -> Script_SpawnNewTask_27 */
uint32_t Script_SpawnNewTask_27(int param_1, uint32_t *param_2);
/* 0x004fa8d0 Script_ParseEnumInt32_27 -> Script_ParseEnumInt32_27 */
uint32_t Script_ParseEnumInt32_27(int param_1, uint64_t *param_2);
/* 0x004fa910 Script_ParseEnumReal32_27 -> Script_ParseEnumReal32_27 */
uint32_t Script_ParseEnumReal32_27(int param_1, uint32_t *param_2);
/* 0x004fa950 Script_ParseEnumString_27 -> Script_ParseEnumString_27 */
uint32_t Script_ParseEnumString_27(int param_1, uint32_t *param_2);
/* 0x004fa9d0 Script_ExecuteLevelScript_27 -> Script_ExecuteLevelScript_27 */
uint32_t Script_ExecuteLevelScript_27(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x004faa10 Script_CallNativeHandler_27 -> Script_CallNativeHandler_27 */
uint32_t Script_CallNativeHandler_27(uint32_t param_1);
/* 0x004faa60 Graph_Init -> Graph_Init */
void Graph_Init(void);
/* 0x004fae50 Graph_OnEvent -> Graph_OnEvent */
void Graph_OnEvent(void);
/* 0x004faee0 Graph_Action -> Graph_Action */
void Graph_Action(void);
/* 0x004fafe0 Graph_Cleanup -> Graph_Cleanup */
void Graph_Cleanup(uint32_t param_1);
/* 0x004fb030 Graph_Cleanup_2 -> Graph_Cleanup_2 */
void Graph_Cleanup_2(int param_1);
/* 0x004fb0d0 Graph_Cleanup_3 -> Graph_Cleanup_3 */
void Graph_Cleanup_3(int param_1);
/* 0x004fb110 Script_EvaluateCondition_27 -> Script_EvaluateCondition_27 */
void Script_EvaluateCondition_27(void);
/* 0x004fb1b0 PhysicsObj_Init -> PhysicsObj_Init */
void PhysicsObj_Init(void);
/* 0x004fb2c0 PhysicsObj_LoadParameters -> PhysicsObj_LoadParameters */
void PhysicsObj_LoadParameters(int param_1, uint32_t *param_2);
/* 0x004fb5a0 Script_FormatString_27 -> Script_FormatString_27 */
void Script_FormatString_27(void);
/* 0x004fb5e0 Script_SpawnNewTask_28 -> Script_SpawnNewTask_28 */
uint16_t Script_SpawnNewTask_28(void);
/* 0x004fb5f0 Script_ParseEnumInt32_28 -> Script_ParseEnumInt32_28 */
void Script_ParseEnumInt32_28(int param_1);
/* 0x004fb700 Script_ParseEnumReal32_28 -> Script_ParseEnumReal32_28 */
void Script_ParseEnumReal32_28(int param_1, int param_2);
/* 0x004fb980 Script_ParseEnumString_28 -> Script_ParseEnumString_28 */
void Script_ParseEnumString_28(int param_1);
/* 0x004fb9a0 Body_ResolveCollision -> Body_ResolveCollision */
void Body_ResolveCollision();
/* 0x004fbf00 Script_ExecuteLevelScript_28 -> Script_ExecuteLevelScript_28 */
void Script_ExecuteLevelScript_28(int param_1, uint32_t param_2, uint32_t param_3, uint32_t *param_4, uint32_t param_5, int param_6);
/* 0x004fbf50 Script_CallNativeHandler_28 -> Script_CallNativeHandler_28 */
void Script_CallNativeHandler_28(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, int param_5, uint32_t param_6, uint32_t param_7);
/* 0x004fbf90 Script_EvaluateCondition_28 -> Script_EvaluateCondition_28 */
uint32_t Script_EvaluateCondition_28(int param_1, float param_2, float param_3, float param_4);
/* 0x004fc0e0 Script_FormatString_28 -> Script_FormatString_28 */
void Script_FormatString_28(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7);
/* 0x004fc620 Script_ParseEnumInt32_29 -> Script_ParseEnumInt32_29 */
uint32_t Script_ParseEnumInt32_29(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4);
/* 0x004fc7b0 Script_ParseEnumReal32_29 -> Script_ParseEnumReal32_29 */
uint32_t Script_ParseEnumReal32_29(int param_1);
/* 0x004fc840 Script_ParseEnumString_29 -> Script_ParseEnumString_29 */
uint8_t Script_ParseEnumString_29(void);
/* 0x004fc850 Script_ExecuteLevelScript_29 -> Script_ExecuteLevelScript_29 */
uint8_t Script_ExecuteLevelScript_29(void);
/* 0x004fc860 Script_CallNativeHandler_29 -> Script_CallNativeHandler_29 */
uint8_t Script_CallNativeHandler_29(void);
/* 0x004fc870 Script_EvaluateCondition_29 -> Script_EvaluateCondition_29 */
uint32_t Script_EvaluateCondition_29(float *param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, float *param_5);
/* 0x004fc8e0 Script_FormatString_29 -> Script_FormatString_29 */
void Script_FormatString_29(int param_1, float *param_2, float *param_3, float *param_4, float param_5, uint32_t param_6, float param_7);
/* 0x004fcca0 Script_SpawnNewTask_30 -> Script_SpawnNewTask_30 */
void Script_SpawnNewTask_30(int param_1, float *param_2, float param_3, float param_4, float param_5);
/* 0x004fcf50 Particle2DDynCubeObjTask_Init -> Particle2DDynCubeObjTask_Init */
void Particle2DDynCubeObjTask_Init(void);
/* 0x004fd020 Particle2DDynCubeObjTask_Process -> Particle2DDynCubeObjTask_Process */
void Particle2DDynCubeObjTask_Process(void);
/* 0x004fd4e0 Script_ParseEnumInt32_30 -> Script_ParseEnumInt32_30 */
void Script_ParseEnumInt32_30(int param_1, float *param_2);
/* 0x004fd660 Particle2DDynCubeObjTask_LoadParameters -> Particle2DDynCubeObjTask_LoadParameters */
void Particle2DDynCubeObjTask_LoadParameters(int param_1);
/* 0x004fdc20 Script_ParseEnumReal32_30 -> Script_ParseEnumReal32_30 */
float10 Script_ParseEnumReal32_30(int param_1);
/* 0x004fdcd0 Script_ParseEnumString_30 -> Script_ParseEnumString_30 */
void Script_ParseEnumString_30(double *param_1, int param_2);
/* 0x004fdd30 Script_ExecuteLevelScript_30 -> Script_ExecuteLevelScript_30 */
void Script_ExecuteLevelScript_30(int param_1, int param_2);
/* 0x004fdd70 Particle2DDynCubeObjTask_Setup -> Particle2DDynCubeObjTask_Setup */
void Particle2DDynCubeObjTask_Setup(int param_1);
/* 0x004fde00 Particle2DDynCubeObjTask_Update -> Particle2DDynCubeObjTask_Update */
void Particle2DDynCubeObjTask_Update(void);
/* 0x004fdec0 Script_CallNativeHandler_30 -> Script_CallNativeHandler_30 */
void Script_CallNativeHandler_30(void);
/* 0x004fdef0 Script_EvaluateCondition_30 -> Script_EvaluateCondition_30 */
uint8_t Script_EvaluateCondition_30(void);
/* 0x004fdf00 Script_FormatString_30 -> Script_FormatString_30 */
int Script_FormatString_30(uint32_t param_1, uint32_t param_2, int param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12, uint32_t param_13);
/* 0x004fe120 Script_SpawnNewTask_31 -> Script_SpawnNewTask_31 */
void Script_SpawnNewTask_31(int param_1, uint32_t *param_2, uint32_t *param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint16_t param_8, int param_9);
/* 0x004fe210 Script_ParseEnumInt32_31 -> Script_ParseEnumInt32_31 */
void Script_ParseEnumInt32_31(uint32_t param_1, uint32_t param_2, float *param_3, float param_4, float param_5, float param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, uint32_t param_11, uint32_t param_12);
/* 0x004fe5d0 Script_ParseEnumReal32_31 -> Script_ParseEnumReal32_31 */
void Script_ParseEnumReal32_31(int param_1, uint8_t param_2);
/* 0x004fe5e0 Script_ParseEnumString_31 -> Script_ParseEnumString_31 */
void Script_ParseEnumString_31(int param_1, uint32_t param_2);
/* 0x004fe610 Script_ExecuteLevelScript_31 -> Script_ExecuteLevelScript_31 */
void Script_ExecuteLevelScript_31(int param_1, double *param_2);
/* 0x004fe650 Script_CallNativeHandler_31 -> Script_CallNativeHandler_31 */
int Script_CallNativeHandler_31(uint32_t param_1, char *param_2, uint32_t param_3);
/* 0x004fe6b0 Script_EvaluateCondition_31 -> Script_EvaluateCondition_31 */
int Script_EvaluateCondition_31(uint32_t param_1, char *param_2, char *param_3);
/* 0x004fe730 Script_FormatString_31 -> Script_FormatString_31 */
int * Script_FormatString_31(int param_1, byte *param_2);
/* 0x004fe7c0 TagItem_Init -> TagItem_Init */
void TagItem_Init(void);
/* 0x004feac0 Script_SpawnNewTask_32 -> Script_SpawnNewTask_32 */
void Script_SpawnNewTask_32(int param_1, uint32_t param_2);
/* 0x004feb80 Script_ParseEnumInt32_32 -> Script_ParseEnumInt32_32 */
void Script_ParseEnumInt32_32(void);
/* 0x004fec10 Script_ParseEnumReal32_32 -> Script_ParseEnumReal32_32 */
void Script_ParseEnumReal32_32(uint32_t param_1, float *param_2, double *param_3, uint8_t *param_4, float param_5, int param_6, int param_7, float *param_8);
/* 0x005008f0 SplineObj_Process -> SplineObj_Process */
void SplineObj_Process(void);
/* 0x00500ef0 SplineObj_Update -> SplineObj_Update */
void SplineObj_Update(void);
/* 0x00501d70 Physics_EvaluateAreaCriteria -> Physics_EvaluateAreaCriteria */
void Physics_EvaluateAreaCriteria(int param_1);
/* 0x005020c0 Physics_SimulateRigidBody -> Physics_SimulateRigidBody */
float10 Physics_SimulateRigidBody(float param_1);
/* 0x00502130 Physics_CheckHullCollision -> Physics_CheckHullCollision */
int Physics_CheckHullCollision(uint32_t param_1);
/* 0x00502180 Physics_ApplyImpulse -> Physics_ApplyImpulse */
float10 Physics_ApplyImpulse(float param_1, int param_2);
/* 0x00502200 Physics_UpdateForces -> Physics_UpdateForces */
void Physics_UpdateForces(uint32_t *param_1, uint32_t param_2, int param_3);
/* 0x00502250 SplineObj_Init -> SplineObj_Init */
void SplineObj_Init(void);
/* 0x00502740 SplineObj_Setup -> SplineObj_Setup */
void SplineObj_Setup(int param_1, char *param_2);
/* 0x00503070 SplineObj_OnEvent -> SplineObj_OnEvent */
void SplineObj_OnEvent(int param_1, uint32_t *param_2);
/* 0x005030f0 SplineObj_Cleanup -> SplineObj_Cleanup */
void SplineObj_Cleanup(int param_1, uint32_t param_2);
/* 0x00503120 SplineObj_Cleanup_2 -> SplineObj_Cleanup_2 */
void SplineObj_Cleanup_2(int param_1, uint32_t param_2);
/* 0x00503150 SplineObj_Cleanup_3 -> SplineObj_Cleanup_3 */
void SplineObj_Cleanup_3(int param_1, uint32_t param_2);
/* 0x00503180 SplineObj_Cleanup_4 -> SplineObj_Cleanup_4 */
void SplineObj_Cleanup_4(int param_1, uint32_t param_2);
/* 0x005031b0 Physics_SolveConstraints -> Physics_SolveConstraints */
void Physics_SolveConstraints(void);
/* 0x005031f0 Physics_InterpolateWaypoint_2 -> Physics_InterpolateWaypoint_2 */
void Physics_InterpolateWaypoint_2(float *param_1, float *param_2, uint32_t param_3);
/* 0x005033f0 EditorRigidObj_Init -> EditorRigidObj_Init */
void EditorRigidObj_Init(void);
/* 0x005034c0 EditorRigidObj_Update -> EditorRigidObj_Update */
void EditorRigidObj_Update(void);
/* 0x005034d0 EditorRigidObj_OnEvent -> EditorRigidObj_OnEvent */
uint16_t EditorRigidObj_OnEvent(void);
/* 0x005034e0 SimpointObj_Init -> SimpointObj_Init */
void SimpointObj_Init(void);
/* 0x005035b0 SimpointObj_Process -> SimpointObj_Process */
void SimpointObj_Process(int param_1);
/* 0x00503bd0 Physics_EvaluateAreaCriteria_2 -> Physics_EvaluateAreaCriteria_2 */
void Physics_EvaluateAreaCriteria_2(void);
/* 0x00503bf0 Physics_SimulateRigidBody_2 -> Physics_SimulateRigidBody_2 */
uint16_t Physics_SimulateRigidBody_2(void);
/* 0x00503c00 Physics_CheckHullCollision_2 -> Physics_CheckHullCollision_2 */
int Physics_CheckHullCollision_2(uint32_t param_1, char *param_2, char *param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t *param_8, uint8_t param_9);
/* 0x00503cc0 Physics_VirmodelIsNull -> Physics_VirmodelIsNull */
int Physics_VirmodelIsNull(int param_1, uint32_t param_2, uint32_t *param_3, uint32_t *param_4, uint32_t *param_5);
/* 0x00503d50 Physics_ApplyImpulse_2 -> Physics_ApplyImpulse_2 */
void Physics_ApplyImpulse_2(int param_1, uint8_t param_2);
/* 0x00503d60 PhysicsMagicObj_Init -> PhysicsMagicObj_Init */
void PhysicsMagicObj_Init(void);
/* 0x00503df0 PhysicsMagicObj_LoadParameters -> PhysicsMagicObj_LoadParameters */
void PhysicsMagicObj_LoadParameters(int param_1, uint32_t *param_2);
/* 0x00503f20 PhysicsMagicObj_Setup -> PhysicsMagicObj_Setup */
void PhysicsMagicObj_Setup(void);
/* 0x00504280 Physics_SolveConstraints_2 -> Physics_SolveConstraints_2 */
void Physics_SolveConstraints_2(void);
/* 0x005042a0 Physics_CalculateSplineLength_3 -> Physics_CalculateSplineLength_3 */
uint16_t Physics_CalculateSplineLength_3(void);
/* 0x005042b0 Physics_InterpolateWaypoint_3 -> Physics_InterpolateWaypoint_3 */
uint32_t Physics_InterpolateWaypoint_3(int param_1, double *param_2);
/* 0x005043b0 AreaActivate_Init -> AreaActivate_Init */
void AreaActivate_Init(void);
/* 0x00504530 AreaActivate_Update -> AreaActivate_Update */
void AreaActivate_Update(void);
/* 0x00504590 AreaActivate_OnEvent -> AreaActivate_OnEvent */
void AreaActivate_OnEvent(void);
/* 0x005045f0 AreaActivate_Setup -> AreaActivate_Setup */
void AreaActivate_Setup(int param_1);
/* 0x005048a0 AreaActivate_Process -> AreaActivate_Process */
void AreaActivate_Process(void);
/* 0x00504970 AreaActivate_LoadParameters -> AreaActivate_LoadParameters */
void AreaActivate_LoadParameters(int param_1);
/* 0x005049f0 Physics_SimulateRigidBody_3 -> Physics_SimulateRigidBody_3 */
void Physics_SimulateRigidBody_3(void);
/* 0x00504a30 Physics_UnableToRegisterArea -> Physics_UnableToRegisterArea */
int Physics_UnableToRegisterArea(uint32_t param_1, uint32_t param_2);
/* 0x00504a90 Physics_CheckHullCollision_3 -> Physics_CheckHullCollision_3 */
void Physics_CheckHullCollision_3(uint32_t param_1);
/* 0x00504ac0 Physics_ApplyImpulse_3 -> Physics_ApplyImpulse_3 */
uint32_t Physics_ApplyImpulse_3(int param_1);
/* 0x00504ad0 EditRigidObjAttachedToBone_LoadParameters -> EditRigidObjAttachedToBone_LoadParameters */
void EditRigidObjAttachedToBone_LoadParameters(int param_1);
/* 0x00504bb0 EditRigidObjAttachedToBone_Process -> EditRigidObjAttachedToBone_Process */
void EditRigidObjAttachedToBone_Process(void);
/* 0x00504c50 EditRigidObjAttachedToBone_Init -> EditRigidObjAttachedToBone_Init */
void EditRigidObjAttachedToBone_Init(void);
/* 0x00504d90 EditRigidObjAttachedToBone_Update -> EditRigidObjAttachedToBone_Update */
void EditRigidObjAttachedToBone_Update(void);
/* 0x00504db0 EditRigidObjAttachedToBone_OnEvent -> EditRigidObjAttachedToBone_OnEvent */
uint16_t EditRigidObjAttachedToBone_OnEvent(void);
/* 0x00504dc0 EditRigidObjAttachedToBone_Process_2 -> EditRigidObjAttachedToBone_Process_2 */
void EditRigidObjAttachedToBone_Process_2(uint32_t *param_1, uint32_t *param_2);
/* 0x00504df0 EditRigidObjAttachedToBone_Action -> EditRigidObjAttachedToBone_Action */
uint8_t EditRigidObjAttachedToBone_Action(void);
/* 0x00504e00 EditRigidObjAttachedToBone_OnTick -> EditRigidObjAttachedToBone_OnTick */
uint8_t EditRigidObjAttachedToBone_OnTick(void);
/* 0x00504e10 MenuItemTask_Init -> MenuItemTask_Init */
void MenuItemTask_Init(void);
/* 0x00504ef0 MenuItemTask_LoadParameters -> MenuItemTask_LoadParameters */
void MenuItemTask_LoadParameters(void);
/* 0x005055a0 Physics_SolveConstraints_3 -> Physics_SolveConstraints_3 */
void Physics_SolveConstraints_3(void);
/* 0x005055d0 Physics_CalculateSplineLength_4 -> Physics_CalculateSplineLength_4 */
void Physics_CalculateSplineLength_4(int param_1, uint32_t param_2);
/* 0x00505600 Physics_InterpolateWaypoint_4 -> Physics_InterpolateWaypoint_4 */
void Physics_InterpolateWaypoint_4(uint32_t param_1);
/* 0x00505630 MenuItem_Init -> MenuItem_Init */
void MenuItem_Init(void);
/* 0x00505710 MenuItem_LoadParameters -> MenuItem_LoadParameters */
void MenuItem_LoadParameters(int param_1, uint32_t param_2);
/* 0x005058e0 Physics_EvaluateAreaCriteria_4 -> Physics_EvaluateAreaCriteria_4 */
void Physics_EvaluateAreaCriteria_4(void);
/* 0x00505920 Physics_SimulateRigidBody_4 -> Physics_SimulateRigidBody_4 */
void Physics_SimulateRigidBody_4(int param_1, code *param_2, uint32_t param_3);
/* 0x005059d0 Physics_CheckHullCollision_4 -> Physics_CheckHullCollision_4 */
uint32_t Physics_CheckHullCollision_4(uint32_t param_1, uint32_t param_2);
/* 0x00505a30 Physics_ApplyImpulse_4 -> Physics_ApplyImpulse_4 */
uint32_t Physics_ApplyImpulse_4(uint32_t param_1);
/* 0x00505a80 Physics_UpdateForces_4 -> Physics_UpdateForces_4 */
uint32_t Physics_UpdateForces_4(uint32_t param_1);
/* 0x00505ad0 Physics_MenuitemMoveCalledWi -> Physics_MenuitemMoveCalledWi */
uint32_t Physics_MenuitemMoveCalledWi(uint32_t param_1, int param_2);
/* 0x00505c10 Physics_SolveConstraints_4 -> Physics_SolveConstraints_4 */
void Physics_SolveConstraints_4(int param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint8_t param_7, uint32_t param_8);
/* 0x00505c50 Physics_CalculateSplineLength_5 -> Physics_CalculateSplineLength_5 */
uint8_t Physics_CalculateSplineLength_5(void);
/* 0x00505c60 Physics_InterpolateWaypoint_5 -> Physics_InterpolateWaypoint_5 */
uint8_t Physics_InterpolateWaypoint_5(void);
/* 0x00505c70 Physics_EvaluateAreaCriteria_5 -> Physics_EvaluateAreaCriteria_5 */
uint8_t Physics_EvaluateAreaCriteria_5(void);
/* 0x00505c80 Physics_SimulateRigidBody_5 -> Physics_SimulateRigidBody_5 */
uint16_t Physics_SimulateRigidBody_5(void);
/* 0x00505c90 Container_Init -> Container_Init */
void Container_Init(void);
/* 0x00505d30 Container_Update -> Container_Update */
void Container_Update(void);
/* 0x00505d40 Container_OnEvent -> Container_OnEvent */
uint16_t Container_OnEvent(void);
/* 0x00505f60 TextureModifier_Init -> TextureModifier_Init */
void TextureModifier_Init(void);
/* 0x005062a0 TextureModifier_LoadParameters -> TextureModifier_LoadParameters */
void TextureModifier_LoadParameters(int param_1);
/* 0x00506c60 Physics_ApplyImpulse_5 -> Physics_ApplyImpulse_5 */
int Physics_ApplyImpulse_5(int param_1);
/* 0x00506cb0 Physics_UpdateForces_5 -> Physics_UpdateForces_5 */
void Physics_UpdateForces_5(void);
/* 0x00506cd0 Physics_SolveConstraints_5 -> Physics_SolveConstraints_5 */
int Physics_SolveConstraints_5(uint32_t param_1, int param_2, uint32_t *param_3);
/* 0x00506f00 HeightMap_Enter -> HeightMap_Enter */
void HeightMap_Enter(...);
/* 0x00506fa0 HeightMap_Init -> HeightMap_Init */
void HeightMap_Init(void);
/* 0x00507340 HeightMap_LoadParameters -> HeightMap_LoadParameters */
void HeightMap_LoadParameters(int param_1);
/* 0x00507410 HeightMap_Setup -> HeightMap_Setup */
void HeightMap_Setup(int param_1);
/* 0x00507d40 Physics_InterpolateWaypoint_6 -> Physics_InterpolateWaypoint_6 */
void Physics_InterpolateWaypoint_6(void);
/* 0x00507d60 Physics_EvaluateAreaCriteria_6 -> Physics_EvaluateAreaCriteria_6 */
int Physics_EvaluateAreaCriteria_6(uint32_t param_1, int param_2, uint32_t *param_3);
/* 0x00507e70 Physics_SimulateRigidBody_6 -> Physics_SimulateRigidBody_6 */
void Physics_SimulateRigidBody_6(void);
/* 0x00507e80 Physics_CheckHullCollision_6 -> Physics_CheckHullCollision_6 */
void Physics_CheckHullCollision_6(void);
/* 0x00507e90 Physics_ApplyImpulse_6 -> Physics_ApplyImpulse_6 */
void Physics_ApplyImpulse_6(uint32_t *param_1, uint32_t param_2);
/* 0x00507ec0 Physics_UpdateForces_6 -> Physics_UpdateForces_6 */
void Physics_UpdateForces_6(uint32_t *param_1, uint32_t param_2);
/* 0x00507f10 EditCamera_Init -> EditCamera_Init */
void EditCamera_Init(void);
/* 0x00508350 EditCamera_LoadParameters -> EditCamera_LoadParameters */
void EditCamera_LoadParameters(int param_1);
/* 0x00508410 EditCamera_OnParsed -> EditCamera_OnParsed */
void EditCamera_OnParsed(...);
/* 0x005085e0 Physics_SolveConstraints_6 -> Physics_SolveConstraints_6 */
void Physics_SolveConstraints_6(void);
/* 0x00508610 Physics_CalculateSplineLength_7 -> Physics_CalculateSplineLength_7 */
uint16_t Physics_CalculateSplineLength_7(void);
/* 0x00508620 Physics_InterpolateWaypoint_7 -> Physics_InterpolateWaypoint_7 */
void Physics_InterpolateWaypoint_7(double *param_1, float *param_2, uint32_t param_3);
/* 0x00508940 Physics_EvaluateAreaCriteria_7 -> Physics_EvaluateAreaCriteria_7 */
void Physics_EvaluateAreaCriteria_7(double *param_1, float *param_2, double *param_3, float *param_4, uint32_t param_5);
/* 0x00508d60 Physics_SimulateRigidBody_7 -> Physics_SimulateRigidBody_7 */
uint32_t * Physics_SimulateRigidBody_7(void);
/* 0x00508d70 Sync_Init -> Sync_Init */
void Sync_Init(void);
/* 0x00508e40 Sync_Setup -> Sync_Setup */
void Sync_Setup(void);
/* 0x00508f30 Sync_OnEvent -> Sync_OnEvent */
void Sync_OnEvent(void);
/* 0x00508f60 Sync_Process -> Sync_Process */
uint8_t Sync_Process(void);
/* 0x00508f70 Physics_CheckHullCollision_7 -> Physics_CheckHullCollision_7 */
uint8_t Physics_CheckHullCollision_7(void);
/* 0x00508f80 Physics_ApplyImpulse_7 -> Physics_ApplyImpulse_7 */
void Physics_ApplyImpulse_7(void);
/* 0x00508f90 Physics_UpdateForces_7 -> Physics_UpdateForces_7 */
void Physics_UpdateForces_7(void);
/* 0x00508fa0 AIGraph_Init -> AIGraph_Init */
void AIGraph_Init(void);
/* 0x005092a0 AIGraph_Cleanup -> AIGraph_Cleanup */
void AIGraph_Cleanup(void);
/* 0x005092e0 Physics_SolveConstraints_7 -> Physics_SolveConstraints_7 */
void Physics_SolveConstraints_7(int param_1);
/* 0x00509340 Physics_CalculateSplineLength_8 -> Physics_CalculateSplineLength_8 */
void Physics_CalculateSplineLength_8(int param_1);
/* 0x00509390 Physics_InterpolateWaypoint_8 -> Physics_InterpolateWaypoint_8 */
int Physics_InterpolateWaypoint_8(int param_1, int param_2, int param_3);
/* 0x005093c0 AIGraph_Cleanup_2 -> AIGraph_Cleanup_2 */
void AIGraph_Cleanup_2(int param_1, uint32_t param_2);
/* 0x00509480 AIGraph_Action -> AIGraph_Action */
void AIGraph_Action(void);
/* 0x00509520 AIGraph_Process -> AIGraph_Process */
void AIGraph_Process(int param_1, uint32_t *param_2);
/* 0x00509610 AIGraph_Setup -> AIGraph_Setup */
void AIGraph_Setup(int param_1);
/* 0x00509650 Physics_EvaluateAreaCriteria_8 -> Physics_EvaluateAreaCriteria_8 */
void Physics_EvaluateAreaCriteria_8(void);
/* 0x005096a0 Physics_SimulateRigidBody_8 -> Physics_SimulateRigidBody_8 */
void Physics_SimulateRigidBody_8(void);
/* 0x005096c0 Physics_CheckHullCollision_8 -> Physics_CheckHullCollision_8 */
uint32_t Physics_CheckHullCollision_8(int param_1, uint32_t param_2, uint32_t param_3);
/* 0x005096f0 Physics_ApplyImpulse_8 -> Physics_ApplyImpulse_8 */
uint32_t Physics_ApplyImpulse_8(int *param_1, int param_2, uint32_t param_3);
/* 0x00509860 Physics_UpdateForces_8 -> Physics_UpdateForces_8 */
uint32_t Physics_UpdateForces_8(void);
/* 0x00509870 Physics_SolveConstraints_8 -> Physics_SolveConstraints_8 */
uint32_t Physics_SolveConstraints_8(void);
/* 0x00509880 Physics_CalculateSplineLength_9 -> Physics_CalculateSplineLength_9 */
uint32_t Physics_CalculateSplineLength_9(void);
/* 0x00509890 Physics_InterpolateWaypoint_9 -> Physics_InterpolateWaypoint_9 */
bool Physics_InterpolateWaypoint_9(int param_1, uint32_t param_2);
/* 0x005098a0 Physics_EvaluateAreaCriteria_9 -> Physics_EvaluateAreaCriteria_9 */
uint16_t Physics_EvaluateAreaCriteria_9(void);
/* 0x005098b0 Physics_Local -> Physics_Local */
void Physics_Local(void);
/* 0x005098d0 Physics_Local_2 -> Physics_Local_2 */
void Physics_Local_2(void);
/* 0x005098f0 Physics_SimulateRigidBody_9 -> Physics_SimulateRigidBody_9 */
void Physics_SimulateRigidBody_9(FILETIME *param_1, FILETIME *param_2);
/* 0x00509910 Physics_CheckHullCollision_9 -> Physics_CheckHullCollision_9 */
void Physics_CheckHullCollision_9(void);
/* 0x00509920 Physics_ApplyImpulse_9 -> Physics_ApplyImpulse_9 */
void Physics_ApplyImpulse_9(void);
/* 0x00509930 Physics_QvertexDrawstrip -> Physics_QvertexDrawstrip */
void Physics_QvertexDrawstrip(void);
/* 0x00509960 Physics_UpdateForces_9 -> Physics_UpdateForces_9 */
void Physics_UpdateForces_9(void);
/* 0x00509980 Physics_CouldNotCreateDirect -> Physics_CouldNotCreateDirect */
void Physics_CouldNotCreateDirect(void);
/* 0x00509a40 Physics_SolveConstraints_9 -> Physics_SolveConstraints_9 */
void Physics_SolveConstraints_9(void);
/* 0x00509cc0 Physics_CalculateSplineLength_10 -> Physics_CalculateSplineLength_10 */
bool Physics_CalculateSplineLength_10(int param_1);
/* 0x00509cf0 Physics_InterpolateWaypoint_10 -> Physics_InterpolateWaypoint_10 */
void Physics_InterpolateWaypoint_10(void);
/* 0x00509e90 Physics_EvaluateAreaCriteria_10 -> Physics_EvaluateAreaCriteria_10 */
void Physics_EvaluateAreaCriteria_10(void);
/* 0x00509f00 Physics_SimulateRigidBody_10 -> Physics_SimulateRigidBody_10 */
void Physics_SimulateRigidBody_10(int param_1);
/* 0x0050a050 Physics_CheckHullCollision_10 -> Physics_CheckHullCollision_10 */
void Physics_CheckHullCollision_10(void);
/* 0x0050a450 Physics_ApplyImpulse_10 -> Physics_ApplyImpulse_10 */
void Physics_ApplyImpulse_10(uint32_t param_1, int param_2, uint32_t param_3, int param_4);
/* 0x0050a490 Physics_UpdateForces_10 -> Physics_UpdateForces_10 */
void Physics_UpdateForces_10(uint32_t param_1, int param_2, uint32_t param_3, int param_4);
/* 0x0050a510 Physics_SolveConstraints_10 -> Physics_SolveConstraints_10 */
uint32_t Physics_SolveConstraints_10(uint32_t param_1, int param_2);
/* 0x0050a550 Physics_CalculateSplineLength_11 -> Physics_CalculateSplineLength_11 */
void Physics_CalculateSplineLength_11(uint32_t param_1, int param_2);
/* 0x0050a5d0 Physics_InterpolateWaypoint_11 -> Physics_InterpolateWaypoint_11 */
void Physics_InterpolateWaypoint_11(void);
/* 0x0050a620 Physics_EvaluateAreaCriteria_11 -> Physics_EvaluateAreaCriteria_11 */
float10 Physics_EvaluateAreaCriteria_11(uint32_t *param_1, int param_2, int param_3);
/* 0x0050a670 Physics_SimulateRigidBody_11 -> Physics_SimulateRigidBody_11 */
void Physics_SimulateRigidBody_11(int *param_1);
/* 0x0050a6a0 Physics_CheckHullCollision_11 -> Physics_CheckHullCollision_11 */
void Physics_CheckHullCollision_11(int param_1);
/* 0x0050a6c0 Physics_ApplyImpulse_11 -> Physics_ApplyImpulse_11 */
void Physics_ApplyImpulse_11(void);
/* 0x0050a830 Physics_UpdateForces_11 -> Physics_UpdateForces_11 */
void Physics_UpdateForces_11(uint32_t *param_1);
/* 0x0050a940 Physics_SolveConstraints_11 -> Physics_SolveConstraints_11 */
void Physics_SolveConstraints_11(void);
/* 0x0050aa70 Physics_CalculateSplineLength_12 -> Physics_CalculateSplineLength_12 */
void Physics_CalculateSplineLength_12(int *param_1, uint32_t param_2, uint32_t param_3, float param_4);
/* 0x0050ac90 Physics_CouldnTGetSurfaceDes -> Physics_CouldnTGetSurfaceDes */
int Physics_CouldnTGetSurfaceDes(int *param_1);
/* 0x0050ad90 Physics_InterpolateWaypoint_12 -> Physics_InterpolateWaypoint_12 */
void Physics_InterpolateWaypoint_12(void);
/* 0x0050b4c0 Physics_EvaluateAreaCriteria_12 -> Physics_EvaluateAreaCriteria_12 */
int Physics_EvaluateAreaCriteria_12(uint32_t param_1, uint32_t param_2);
/* 0x0050b4f0 Physics_CouldnTGetSurfacedes -> Physics_CouldnTGetSurfacedes */
void Physics_CouldnTGetSurfacedes(int *param_1, int param_2, int param_3, uint32_t *param_4, int param_5, uint32_t *param_6);
/* 0x0050bc00 Physics_SimulateRigidBody_12 -> Physics_SimulateRigidBody_12 */
uint32_t Physics_SimulateRigidBody_12(uint32_t *param_1);
/* 0x0050bd70 Physics_CheckHullCollision_12 -> Physics_CheckHullCollision_12 */
void Physics_CheckHullCollision_12(void);
/* 0x0050bd80 Physics_ApplyImpulse_12 -> Physics_ApplyImpulse_12 */
void Physics_ApplyImpulse_12(void);
/* 0x0050be10 Physics_UpdateForces_12 -> Physics_UpdateForces_12 */
void Physics_UpdateForces_12(int *param_1);
/* 0x0050be70 Physics_SolveConstraints_12 -> Physics_SolveConstraints_12 */
void Physics_SolveConstraints_12(int param_1);
/* 0x0050bf20 Physics_CalculateSplineLength_13 -> Physics_CalculateSplineLength_13 */
void Physics_CalculateSplineLength_13(uint32_t param_1, uint32_t param_2, float param_3);
/* 0x0050d4c0 Physics_InterpolateWaypoint_13 -> Physics_InterpolateWaypoint_13 */
void Physics_InterpolateWaypoint_13(uint32_t *param_1);
/* 0x0050d7e0 Physics_EvaluateAreaCriteria_13 -> Physics_EvaluateAreaCriteria_13 */
void Physics_EvaluateAreaCriteria_13(void);
/* 0x0050dc30 Physics_SimulateRigidBody_13 -> Physics_SimulateRigidBody_13 */
void Physics_SimulateRigidBody_13(void);
/* 0x0050de00 Physics_CheckHullCollision_13 -> Physics_CheckHullCollision_13 */
void Physics_CheckHullCollision_13(uint32_t *param_1);
/* 0x0050e1e0 Physics_ApplyImpulse_13 -> Physics_ApplyImpulse_13 */
void Physics_ApplyImpulse_13(uint32_t *param_1);
/* 0x0050e520 Physics_UpdateForces_13 -> Physics_UpdateForces_13 */
void Physics_UpdateForces_13(int *param_1);
/* 0x0050e7f0 Physics_SolveConstraints_13 -> Physics_SolveConstraints_13 */
void Physics_SolveConstraints_13(uint32_t *param_1);
/* 0x0050ec00 Physics_CalculateSplineLength_14 -> Physics_CalculateSplineLength_14 */
void Physics_CalculateSplineLength_14(void);
/* 0x0050ec40 Physics_InterpolateWaypoint_14 -> Physics_InterpolateWaypoint_14 */
void Physics_InterpolateWaypoint_14(void);
/* 0x0050edc0 Physics_EvaluateAreaCriteria_14 -> Physics_EvaluateAreaCriteria_14 */
void Physics_EvaluateAreaCriteria_14(int param_1);
/* 0x0050f070 Physics_Offscreenbuffersprit -> Physics_Offscreenbuffersprit */
void Physics_Offscreenbuffersprit(int param_1);
/* 0x0050f770 Physics_SimulateRigidBody_14 -> Physics_SimulateRigidBody_14 */
void Physics_SimulateRigidBody_14(int param_1);
/* 0x0050fac0 Physics_CheckHullCollision_14 -> Physics_CheckHullCollision_14 */
void Physics_CheckHullCollision_14(void);
/* 0x0050fae0 Physics_ApplyImpulse_14 -> Physics_ApplyImpulse_14 */
void Physics_ApplyImpulse_14(int param_1);
/* 0x0050fd00 Physics_UpdateForces_14 -> Physics_UpdateForces_14 */
void Physics_UpdateForces_14(int param_1);
/* 0x0050fd20 Physics_SolveConstraints_14 -> Physics_SolveConstraints_14 */
void Physics_SolveConstraints_14(float *param_1, float param_2);
/* 0x0050fe40 Physics_CalculateSplineLength_15 -> Physics_CalculateSplineLength_15 */
void Physics_CalculateSplineLength_15(uint32_t *param_1);
/* 0x0050fe60 Physics_InterpolateWaypoint_15 -> Physics_InterpolateWaypoint_15 */
void Physics_InterpolateWaypoint_15(void);
/* 0x00510010 Terrain_RenderQuadtree -> Terrain_RenderQuadtree */
void Terrain_RenderQuadtree(void);
/* 0x00511500 Terrain_UpdateWaterWaves -> Terrain_UpdateWaterWaves */
void Terrain_UpdateWaterWaves(void);
/* 0x005116b0 Terrain_RenderWaterSurface -> Terrain_RenderWaterSurface */
void Terrain_RenderWaterSurface(int param_1);
/* 0x005116d0 Terrain_ConnectGraphNode -> Terrain_ConnectGraphNode */
void Terrain_ConnectGraphNode(double *param_1);
/* 0x00512040 Terrain_SampleHeightmap -> Terrain_SampleHeightmap */
void Terrain_SampleHeightmap(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6, uint32_t *param_7, uint32_t *param_8, uint32_t *param_9, byte param_10, byte param_11, byte param_12);
/* 0x005122b0 Terrain_CalculateNormals -> Terrain_CalculateNormals */
void Terrain_CalculateNormals(int param_1, int param_2);
/* 0x005124c0 BoneDynCubeObj_LoadParameters -> BoneDynCubeObj_LoadParameters */
void BoneDynCubeObj_LoadParameters(int param_1);
/* 0x005125a0 Terrain_BuildMipMaps -> Terrain_BuildMipMaps */
void Terrain_BuildMipMaps(void);
/* 0x005125c0 Terrain_RenderQuadtree_2 -> Terrain_RenderQuadtree_2 */
void Terrain_RenderQuadtree_2(void);
/* 0x005127d0 Terrain_SelectTerrainLOD_2 -> Terrain_SelectTerrainLOD_2 */
void Terrain_SelectTerrainLOD_2(void);
/* 0x005127e0 Terrain_UpdateWaterWaves_2 -> Terrain_UpdateWaterWaves_2 */
void Terrain_UpdateWaterWaves_2(void);
/* 0x00512820 Terrain_Glowreadbufferprimit -> Terrain_Glowreadbufferprimit */
void Terrain_Glowreadbufferprimit(void);
/* 0x00512920 Terrain_RenderWaterSurface_2 -> Terrain_RenderWaterSurface_2 */
void Terrain_RenderWaterSurface_2(void);
/* 0x00512940 Terrain_ConnectGraphNode_2 -> Terrain_ConnectGraphNode_2 */
void Terrain_ConnectGraphNode_2(void);
/* 0x00512ba0 Terrain_SampleHeightmap_2 -> Terrain_SampleHeightmap_2 */
void Terrain_SampleHeightmap_2(void);
/* 0x00512c30 Terrain_Draw -> Terrain_Draw */
void Terrain_Draw();
/* 0x005144e0 Terrain_UnknownBlendmode -> Terrain_UnknownBlendmode */
void Terrain_UnknownBlendmode(int param_1);
/* 0x00514680 Terrain_OutOfTerrainRenderch -> Terrain_OutOfTerrainRenderch */
uint32_t * Terrain_OutOfTerrainRenderch(int param_1, int param_2);
/* 0x00514760 Terrain_BuildMipMaps_2 -> Terrain_BuildMipMaps_2 */
void Terrain_BuildMipMaps_2(void);
/* 0x00516600 Terrain_RenderQuadtree_3 -> Terrain_RenderQuadtree_3 */
void Terrain_RenderQuadtree_3(void);
/* 0x00516640 Terrain_SelectTerrainLOD_3 -> Terrain_SelectTerrainLOD_3 */
void Terrain_SelectTerrainLOD_3(void);
/* 0x005166f0 Terrain_UpdateWaterWaves_3 -> Terrain_UpdateWaterWaves_3 */
void Terrain_UpdateWaterWaves_3(void);
/* 0x00516770 Terrain_RenderWaterSurface_3 -> Terrain_RenderWaterSurface_3 */
char * Terrain_RenderWaterSurface_3(char *param_1);
/* 0x00516810 Terrain_ConnectGraphNode_3 -> Terrain_ConnectGraphNode_3 */
void Terrain_ConnectGraphNode_3(void);
/* 0x0051682d Terrain_SampleHeightmap_3 -> Terrain_SampleHeightmap_3 */
float10 Terrain_SampleHeightmap_3(int param_1, uint32_t param_2);
/* 0x005168e0 Terrain_CalculateNormals_3 -> Terrain_CalculateNormals_3 */
void Terrain_CalculateNormals_3(void);
/* 0x005168fd Terrain_BuildMipMaps_3 -> Terrain_BuildMipMaps_3 */
float10 Terrain_BuildMipMaps_3(int param_1, uint32_t param_2);
/* 0x005169b0 Terrain_RenderQuadtree_4 -> Terrain_RenderQuadtree_4 */
char * __cdecl Terrain_RenderQuadtree_4(char *_Dest, char *_Source, size_t _Count);
/* 0x00516ad3 Terrain_SelectTerrainLOD_4 -> Terrain_SelectTerrainLOD_4 */
float10 Terrain_SelectTerrainLOD_4(byte *param_1);
/* 0x00516b20 Terrain_UpdateWaterWaves_4 -> Terrain_UpdateWaterWaves_4 */
void Terrain_UpdateWaterWaves_4(byte *param_1, byte *param_2, uint8_t *param_3, int param_4, uint8_t *param_5);
/* 0x00516c67 Terrain_RenderWaterSurface_4 -> Terrain_RenderWaterSurface_4 */
uint32_t Terrain_RenderWaterSurface_4(LPCSTR param_1);
/* 0x00516c91 Terrain_ConnectGraphNode_4 -> Terrain_ConnectGraphNode_4 */
uint32_t Terrain_ConnectGraphNode_4(uint8_t *param_1, uint32_t param_2, uint32_t param_3, int *param_4);
/* 0x00516d79 Terrain_SampleHeightmap_4 -> Terrain_SampleHeightmap_4 */
uint32_t Terrain_SampleHeightmap_4(char *param_1, uint32_t param_2, uint32_t param_3, int *param_4);
/* 0x00516e83 Terrain_CalculateNormals_4 -> Terrain_CalculateNormals_4 */
uint32_t * Terrain_CalculateNormals_4(int param_1);
/* 0x00516f14 Terrain_BuildMipMaps_4 -> Terrain_BuildMipMaps_4 */
byte * Terrain_BuildMipMaps_4(byte *param_1, byte *param_2, uint32_t param_3);
/* 0x00517260 Terrain_SelectTerrainLOD_5 -> Terrain_SelectTerrainLOD_5 */
uint32_t Terrain_SelectTerrainLOD_5(int param_1, int *param_2, uint8_t *param_3, int param_4);
/* 0x00517510 Terrain_UpdateWaterWaves_5 -> Terrain_UpdateWaterWaves_5 */
int Terrain_UpdateWaterWaves_5(char *param_1);
/* 0x00517570 Terrain_RenderWaterSurface_5 -> Terrain_RenderWaterSurface_5 */
void Terrain_RenderWaterSurface_5(uint32_t param_1);
/* 0x00517580 Terrain_ConnectGraphNode_5 -> Terrain_ConnectGraphNode_5 */
void Terrain_ConnectGraphNode_5(char *param_1);
/* 0x005175a0 Terrain_TextureFileNotOfRequ -> Terrain_TextureFileNotOfRequ */
uint32_t * Terrain_TextureFileNotOfRequ(uint32_t param_1);
/* 0x005177f0 Terrain_SampleHeightmap_5 -> Terrain_SampleHeightmap_5 */
void Terrain_SampleHeightmap_5(int param_1);
/* 0x00517840 Terrain_CalculateNormals_5 -> Terrain_CalculateNormals_5 */
void Terrain_CalculateNormals_5(uint32_t *param_1);
/* 0x00517890 Terrain_BuildMipMaps_5 -> Terrain_BuildMipMaps_5 */
uint32_t * Terrain_BuildMipMaps_5(uint32_t *param_1, int param_2);
/* 0x005178e0 Terrain_RenderQuadtree_6 -> Terrain_RenderQuadtree_6 */
uint32_t * Terrain_RenderQuadtree_6(uint32_t *param_1, int param_2);
/* 0x00517940 Terrain_SelectTerrainLOD_6 -> Terrain_SelectTerrainLOD_6 */
uint32_t * Terrain_SelectTerrainLOD_6(int param_1, int param_2);
/* 0x00517980 Terrain_UpdateWaterWaves_6 -> Terrain_UpdateWaterWaves_6 */
int * Terrain_UpdateWaterWaves_6(int *param_1, int param_2);
/* 0x005179c0 Terrain_RenderWaterSurface_6 -> Terrain_RenderWaterSurface_6 */
uint32_t Terrain_RenderWaterSurface_6(int param_1);
/* 0x005179d0 Terrain_ConnectGraphNode_6 -> Terrain_ConnectGraphNode_6 */
uint32_t Terrain_ConnectGraphNode_6(uint8_t *param_1);
/* 0x00517a00 Terrain_SampleHeightmap_6 -> Terrain_SampleHeightmap_6 */
uint32_t Terrain_SampleHeightmap_6(uint32_t param_1);
/* 0x00517a30 Terrain_CalculateNormals_6 -> Terrain_CalculateNormals_6 */
uint32_t * Terrain_CalculateNormals_6(uint32_t *param_1, int param_2, uint32_t param_3);
/* 0x00517b00 Terrain_BuildMipMaps_6 -> Terrain_BuildMipMaps_6 */
void Terrain_BuildMipMaps_6(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, int param_4);
/* 0x00517c90 Terrain_RenderQuadtree_7 -> Terrain_RenderQuadtree_7 */
void Terrain_RenderQuadtree_7(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int *param_7);
/* 0x00517dd0 Terrain_SelectTerrainLOD_7 -> Terrain_SelectTerrainLOD_7 */
void Terrain_SelectTerrainLOD_7(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int *param_7);
/* 0x00517f00 Terrain_UpdateWaterWaves_7 -> Terrain_UpdateWaterWaves_7 */
void Terrain_UpdateWaterWaves_7(uint32_t *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int *param_7);
/* 0x00517fd0 Terrain_RenderWaterSurface_7 -> Terrain_RenderWaterSurface_7 */
void Terrain_RenderWaterSurface_7(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int *param_9);
/* 0x00518130 Terrain_ConnectGraphNode_7 -> Terrain_ConnectGraphNode_7 */
void Terrain_ConnectGraphNode_7(double *param_1, uint32_t param_2, uint32_t param_3, double param_4, double param_5, double param_6);
/* 0x00518190 Terrain_SampleHeightmap_7 -> Terrain_SampleHeightmap_7 */
float10 Terrain_SampleHeightmap_7(double *param_1, double param_2);
/* 0x005181c0 Terrain_CalculateNormals_7 -> Terrain_CalculateNormals_7 */
float10 Terrain_CalculateNormals_7(double *param_1, double param_2);
/* 0x005181f0 Terrain_BuildMipMaps_7 -> Terrain_BuildMipMaps_7 */
void Terrain_BuildMipMaps_7(int *param_1);
/* 0x00518230 Terrain_RenderQuadtree_8 -> Terrain_RenderQuadtree_8 */
void Terrain_RenderQuadtree_8(uint32_t param_1);
/* 0x00518240 Terrain_SelectTerrainLOD_8 -> Terrain_SelectTerrainLOD_8 */
uint32_t Terrain_SelectTerrainLOD_8(void);
/* 0x00518250 Terrain_UpdateWaterWaves_8 -> Terrain_UpdateWaterWaves_8 */
void Terrain_UpdateWaterWaves_8(int param_1);
/* 0x00518260 Terrain_RenderWaterSurface_8 -> Terrain_RenderWaterSurface_8 */
void Terrain_RenderWaterSurface_8(void);
/* 0x00518290 Terrain_ConnectGraphNode_8 -> Terrain_ConnectGraphNode_8 */
void Terrain_ConnectGraphNode_8(void);
/* 0x005182b0 Terrain_SampleHeightmap_8 -> Terrain_SampleHeightmap_8 */
void Terrain_SampleHeightmap_8(uint32_t *param_1, float *param_2, float *param_3);
/* 0x005183d0 Terrain_CalculateNormals_8 -> Terrain_CalculateNormals_8 */
void Terrain_CalculateNormals_8(void);
/* 0x00518550 Terrain_BuildMipMaps_8 -> Terrain_BuildMipMaps_8 */
void Terrain_BuildMipMaps_8(void);
/* 0x005186c0 Terrain_RenderQuadtree_9 -> Terrain_RenderQuadtree_9 */
int Terrain_RenderQuadtree_9(uint32_t param_1);
/* 0x00518720 Terrain_SelectTerrainLOD_9 -> Terrain_SelectTerrainLOD_9 */
void Terrain_SelectTerrainLOD_9(uint32_t param_1);
/* 0x00518760 GraphNode_Init -> GraphNode_Init */
void GraphNode_Init(void);
/* 0x00518890 GraphNode_LoadParameters -> GraphNode_LoadParameters */
void GraphNode_LoadParameters(int param_1);
/* 0x00518900 GraphNode_OnEvent -> GraphNode_OnEvent */
void GraphNode_OnEvent(void);
/* 0x00518930 Water_Process -> Water_Process */
void Water_Process(void);
/* 0x00518ca0 Water_Setup -> Water_Setup */
void Water_Setup(int param_1, uint32_t *param_2);
/* 0x00518ef0 Water_Init -> Water_Init */
void Water_Init(void);
/* 0x00519290 Water_LoadParameters -> Water_LoadParameters */
void Water_LoadParameters(int param_1);
/* 0x00519650 Terrain_UpdateWaterWaves_9 -> Terrain_UpdateWaterWaves_9 */
void Terrain_UpdateWaterWaves_9(void);
/* 0x00519690 Terrain_RenderWaterSurface_9 -> Terrain_RenderWaterSurface_9 */
int Terrain_RenderWaterSurface_9(int param_1);
/* 0x005196d0 Terrain_ConnectGraphNode_9 -> Terrain_ConnectGraphNode_9 */
void Terrain_ConnectGraphNode_9(uint32_t *param_1);
/* 0x00519710 GFXCapsViewer_Init -> GFXCapsViewer_Init */
void GFXCapsViewer_Init(void);
/* 0x00519750 GFXCapsViewer_Update -> GFXCapsViewer_Update */
void GFXCapsViewer_Update(void);
/* 0x00519760 ShadowTask_Init -> ShadowTask_Init */
void ShadowTask_Init(void);
/* 0x00519820 ShadowTask_Update -> ShadowTask_Update */
void ShadowTask_Update(void);
/* 0x00519850 SplinePathNodeQTask_Init -> SplinePathNodeQTask_Init */
void SplinePathNodeQTask_Init(void);
/* 0x00519a60 SplinePathNodeQTask_Setup -> SplinePathNodeQTask_Setup */
void SplinePathNodeQTask_Setup(void);
/* 0x00519ad0 SplinePathNodeQTask_LoadParameters -> SplinePathNodeQTask_LoadParameters */
void SplinePathNodeQTask_LoadParameters(int param_1);
/* 0x00519ba0 Terrain_SampleHeightmap_9 -> Terrain_SampleHeightmap_9 */
void Terrain_SampleHeightmap_9(void);
/* 0x00519bd0 Terrain_CalculateNormals_9 -> Terrain_CalculateNormals_9 */
void Terrain_CalculateNormals_9(float param_1);
/* 0x0051a0c0 Terrain_BuildMipMaps_9 -> Terrain_BuildMipMaps_9 */
float10 Terrain_BuildMipMaps_9(int param_1, float param_2);
/* 0x0051a110 Terrain_RenderQuadtree_10 -> Terrain_RenderQuadtree_10 */
void Terrain_RenderQuadtree_10(int param_1);
/* 0x0051a160 Terrain_SelectTerrainLOD_10 -> Terrain_SelectTerrainLOD_10 */
void Terrain_SelectTerrainLOD_10(int param_1, int param_2);
/* 0x0051a1d0 SplinePathDynCubeObj_Init -> SplinePathDynCubeObj_Init */
void SplinePathDynCubeObj_Init(void);
/* 0x0051a260 SplinePathDynCubeObj_Update -> SplinePathDynCubeObj_Update */
void SplinePathDynCubeObj_Update(void);
/* 0x0051a280 SplinePathDynCubeObj_OnEvent -> SplinePathDynCubeObj_OnEvent */
void SplinePathDynCubeObj_OnEvent(uint32_t *param_1, int param_2, int param_3, float param_4);
/* 0x0051a370 SplinePathDynCubeObj_Process -> SplinePathDynCubeObj_Process */
void SplinePathDynCubeObj_Process(float *param_1, int param_2, int param_3, float param_4);
/* 0x0051a4a0 Terrain_UpdateWaterWaves_10 -> Terrain_UpdateWaterWaves_10 */
void Terrain_UpdateWaterWaves_10(int param_1, float *param_2, int param_3, float param_4);
/* 0x0051a8c0 Terrain_RenderWaterSurface_10 -> Terrain_RenderWaterSurface_10 */
void Terrain_RenderWaterSurface_10(int param_1);
/* 0x0051acb0 Terrain_ConnectGraphNode_10 -> Terrain_ConnectGraphNode_10 */
void Terrain_ConnectGraphNode_10(int param_1);
/* 0x0051aeb0 SplinePathGuideQTask_LoadParameters -> SplinePathGuideQTask_LoadParameters */
void SplinePathGuideQTask_LoadParameters(void);
/* 0x0051b0b0 Terrain_SampleHeightmap_10 -> Terrain_SampleHeightmap_10 */
void Terrain_SampleHeightmap_10(int param_1);
/* 0x0051b140 SplinePathGuideQTask_Init -> SplinePathGuideQTask_Init */
void SplinePathGuideQTask_Init(void);
/* 0x0051b2c0 SplinePathGuideQTask_Setup -> SplinePathGuideQTask_Setup */
void SplinePathGuideQTask_Setup(int param_1);
/* 0x0051b3a0 Terrain_CalculateNormals_10 -> Terrain_CalculateNormals_10 */
void Terrain_CalculateNormals_10(void);
/* 0x0051b400 AnimSound_Init -> AnimSound_Init */
void AnimSound_Init(void);
/* 0x0051b4f0 AnimSound_Process -> AnimSound_Process */
void AnimSound_Process(uint32_t param_1, uint32_t *param_2);
/* 0x0051b530 AnimSound_OnEvent -> AnimSound_OnEvent */
void AnimSound_OnEvent(void);
/* 0x0051b540 EditorMagicObj_LoadParameters -> EditorMagicObj_LoadParameters */
void EditorMagicObj_LoadParameters(void);
/* 0x0051b960 EditorMagicObj_Init -> EditorMagicObj_Init */
void EditorMagicObj_Init(void);
/* 0x0051bab0 EditorMagicObj_Update -> EditorMagicObj_Update */
void EditorMagicObj_Update(void);
/* 0x0051bac0 LevelTimer_Init -> LevelTimer_Init */
void LevelTimer_Init(void);
/* 0x0051bc60 LevelTimer_LoadParameters -> LevelTimer_LoadParameters */
void LevelTimer_LoadParameters(int param_1);
/* 0x0051bcc0 LevelTimer_Update -> LevelTimer_Update */
void LevelTimer_Update(void);
/* 0x0051bd40 LevelTimer_OnEvent -> LevelTimer_OnEvent */
void LevelTimer_OnEvent(void);
/* 0x0051bdb0 LevelTimer_Process -> LevelTimer_Process */
void LevelTimer_Process(int param_1);
/* 0x0051be10 LevelTimer_Tick -> LevelTimer_Tick */
void LevelTimer_Tick(...);
/* 0x0051bf90 Terrain_BuildMipMaps_10 -> Terrain_BuildMipMaps_10 */
void Terrain_BuildMipMaps_10(void);
/* 0x0051bfb0 SoundManager_Init -> SoundManager_Init */
void SoundManager_Init(void);
/* 0x0051c100 SoundManager_LoadParameters -> SoundManager_LoadParameters */
void SoundManager_LoadParameters(byte *param_1, char *param_2);
/* 0x0051c290 Terrain_RenderQuadtree_11 -> Terrain_RenderQuadtree_11 */
void Terrain_RenderQuadtree_11(void);
/* 0x0051c2b0 FlatWater_Init -> FlatWater_Init */
void FlatWater_Init(void);
/* 0x0051c5b0 FlatWater_LoadParameters -> FlatWater_LoadParameters */
void FlatWater_LoadParameters(float *param_1, float param_2, float param_3, float param_4, float param_5);
/* 0x0051db80 FlatSky_OnEvent -> FlatSky_OnEvent */
void FlatSky_OnEvent(int param_1);
/* 0x0051dbf0 FlatSky_Cleanup -> FlatSky_Cleanup */
void FlatSky_Cleanup(void);
/* 0x0051ddb0 Terrain_RenderWaterSurface_11 -> Terrain_RenderWaterSurface_11 */
void Terrain_RenderWaterSurface_11(void);
/* 0x0051ddf0 FlatSky_Init -> FlatSky_Init */
void FlatSky_Init(void);
/* 0x0051e1f0 FlatSky_Process -> FlatSky_Process */
void FlatSky_Process(void);
/* 0x0051ea10 FlatSky_LoadParameters -> FlatSky_LoadParameters */
void FlatSky_LoadParameters(void);
/* 0x0051eb00 FlatSky_Setup -> FlatSky_Setup */
void FlatSky_Setup(int param_1);
/* 0x0051eb40 FlatSky_Update -> FlatSky_Update */
void FlatSky_Update(void);
/* 0x0051ec30 FlatSky_Action -> FlatSky_Action */
void FlatSky_Action(int param_1);
/* 0x0051ec70 Terrain_ConnectGraphNode_11 -> Terrain_ConnectGraphNode_11 */
void Terrain_ConnectGraphNode_11(void);
/* 0x0051ecb0 MipMapControl_Init -> MipMapControl_Init */
void MipMapControl_Init(void);
/* 0x0051ee10 MipMapControl_LoadParameters -> MipMapControl_LoadParameters */
void MipMapControl_LoadParameters(void);
/* 0x0051eec0 Terrain_SampleHeightmap_11 -> Terrain_SampleHeightmap_11 */
void Terrain_SampleHeightmap_11(void);
/* 0x0051eee0 SmoothQTask_Init -> SmoothQTask_Init */
void SmoothQTask_Init(void);
/* 0x0051f140 SmoothQTask_LoadParameters -> SmoothQTask_LoadParameters */
void SmoothQTask_LoadParameters(int param_1);
/* 0x0051f1f0 SmoothQTask_Update -> SmoothQTask_Update */
void SmoothQTask_Update(void);
/* 0x0051f270 SmoothQTask_OnEvent -> SmoothQTask_OnEvent */
void SmoothQTask_OnEvent(void);
/* 0x0051f2e0 SmoothQTask_Process -> SmoothQTask_Process */
void SmoothQTask_Process(int param_1);
/* 0x0051f340 SmoothQTask_Setup -> SmoothQTask_Setup */
void SmoothQTask_Setup(void);
/* 0x0051f560 Terrain_CalculateNormals_11 -> Terrain_CalculateNormals_11 */
void Terrain_CalculateNormals_11(void);
/* 0x0051f580 MoveRigidObj_Init -> MoveRigidObj_Init */
void MoveRigidObj_Init(void);
/* 0x0051f810 MoveRigidObj_LoadParameters -> MoveRigidObj_LoadParameters */
void MoveRigidObj_LoadParameters(int param_1);
/* 0x0051f980 MoveRigidObj_Update -> MoveRigidObj_Update */
void MoveRigidObj_Update(void);
/* 0x0051f9e0 MoveRigidObj_OnEvent -> MoveRigidObj_OnEvent */
void MoveRigidObj_OnEvent(void);
/* 0x0051fa30 MoveRigidObj_Process -> MoveRigidObj_Process */
void MoveRigidObj_Process(int param_1);
/* 0x0051faa0 MoveRigidObj_Setup -> MoveRigidObj_Setup */
void MoveRigidObj_Setup(void);
/* 0x0051fba0 Terrain_BuildMipMaps_11 -> Terrain_BuildMipMaps_11 */
void Terrain_BuildMipMaps_11(int param_1, int param_2, char param_3);
/* 0x0051fed0 Terrain_RenderQuadtree_12 -> Terrain_RenderQuadtree_12 */
void Terrain_RenderQuadtree_12(void);
/* 0x0051fef0 NoiseQTask_Init -> NoiseQTask_Init */
void NoiseQTask_Init(void);
/* 0x00520200 NoiseQTask_LoadParameters -> NoiseQTask_LoadParameters */
void NoiseQTask_LoadParameters(int param_1);
/* 0x005202f0 NoiseQTask_Update -> NoiseQTask_Update */
void NoiseQTask_Update(void);
/* 0x00520350 NoiseQTask_OnEvent -> NoiseQTask_OnEvent */
void NoiseQTask_OnEvent(void);
/* 0x005203a0 NoiseQTask_Process -> NoiseQTask_Process */
void NoiseQTask_Process(int param_1);
/* 0x00520400 NoiseQTask_Setup -> NoiseQTask_Setup */
void NoiseQTask_Setup(int param_1);
/* 0x00520710 Light_RenderLensflare -> Light_RenderLensflare */
void Light_RenderLensflare(void);
/* 0x005207a0 Origo_Init -> Origo_Init */
void Origo_Init(void);
/* 0x00520b90 Light_ApplyLightmap -> Light_ApplyLightmap */
void Light_ApplyLightmap(void);
/* 0x00520bb0 Lensflare_Init -> Lensflare_Init */
void Lensflare_Init(void);
/* 0x00520f50 Lensflare_LoadParameters -> Lensflare_LoadParameters */
void Lensflare_LoadParameters(int param_1);
/* 0x00520ff0 Light_UpdateGlobalLight -> Light_UpdateGlobalLight */
void Light_UpdateGlobalLight(void);
/* 0x00521030 Light_CalculateAttenuation -> Light_CalculateAttenuation */
uint16_t Light_CalculateAttenuation(void);
/* 0x00521040 Light_SetLightColor -> Light_SetLightColor */
void Light_SetLightColor(void);
/* 0x005210c0 Light_Lightmaps -> Light_Lightmaps */
uint32_t * Light_Lightmaps(void);
/* 0x005210e0 Light_LightmapsRes -> Light_LightmapsRes */
uint32_t * Light_LightmapsRes(void);
/* 0x00521110 Light_SampleLightmap -> Light_SampleLightmap */
void Light_SampleLightmap(int param_1, int param_2, int param_3, int param_4, uint32_t param_5, int param_6, int param_7, int param_8, int param_9, int param_10, float *param_11, float *param_12, float *param_13, float *param_14, float *param_15, float *param_16, int param_17);
/* 0x00521960 Light_ComputeDirectionalLight_2 -> Light_ComputeDirectionalLight_2 */
void Light_ComputeDirectionalLight_2(uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, uint32_t param_10, float param_11, float param_12, float param_13, float param_14, float *param_15, uint32_t *param_16, uint32_t *param_17, float *param_18, uint32_t *param_19, uint32_t *param_20, uint32_t param_21);
/* 0x00521e40 Light_RenderLensflare_2 -> Light_RenderLensflare_2 */
void Light_RenderLensflare_2(int param_1, double *param_2, float *param_3, float *param_4, float *param_5, int param_6, int param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, float param_17, float param_18, float param_19, int *param_20, int param_21, uint16_t param_22, uint16_t param_23, int param_24, float param_25, float param_26, float param_27, float param_28, float param_29, float param_30, short *param_31, float param_32, float param_33, float param_34, float param_35, float param_36, float param_37, float param_38, float param_39, float param_40, float param_41, float param_42, float param_43, int param_44, float param_45, float param_46, float param_47, float param_48, float param_49, float param_50, float param_51, float param_52, float param_53, float param_54, float param_55, float param_56, uint32_t param_57, int param_58, int *param_59, int *param_60, float param_61, float param_62, float param_63, float param_64, float param_65, float param_66, float param_67, float param_68, float param_69, uint32_t param_70, float param_71, float param_72);
/* 0x00523110 Light_ApplyLightmap_2 -> Light_ApplyLightmap_2 */
int * Light_ApplyLightmap_2(int param_1);
/* 0x005233a0 Light_UpdateGlobalLight_2 -> Light_UpdateGlobalLight_2 */
void Light_UpdateGlobalLight_2(int param_1);
/* 0x005235a0 Light_CalculateAttenuation_2 -> Light_CalculateAttenuation_2 */
void Light_CalculateAttenuation_2(int param_1);
/* 0x00523670 Light_SetLightColor_2 -> Light_SetLightColor_2 */
void Light_SetLightColor_2(int *param_1);
/* 0x005237e0 Light_SampleLightmap_2 -> Light_SampleLightmap_2 */
void Light_SampleLightmap_2(int param_1);
/* 0x00523900 Light_ComputeDirectionalLight_3 -> Light_ComputeDirectionalLight_3 */
void Light_ComputeDirectionalLight_3(uint32_t *param_1);
/* 0x00523930 LightmapInfo_LoadParameters -> LightmapInfo_LoadParameters */
void LightmapInfo_LoadParameters(void);
/* 0x00523d40 Light_RenderLensflare_3 -> Light_RenderLensflare_3 */
uint32_t *Light_RenderLensflare_3(int param_1, int param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, int param_6);
/* 0x005251d0 Light_CalculateAttenuation_4 -> Light_CalculateAttenuation_4 */
void Light_CalculateAttenuation_4(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5);
/* 0x00525320 Light_SetLightColor_4 -> Light_SetLightColor_4 */
void Light_SetLightColor_4(int param_1);
/* 0x00525380 LightmapInfo_Update -> LightmapInfo_Update */
void LightmapInfo_Update(int param_1);
/* 0x005253d0 Light_ComputeDirectionalLight_5 -> Light_ComputeDirectionalLight_5 */
void Light_ComputeDirectionalLight_5(int *param_1);
/* 0x00525410 Light_RenderLensflare_5 -> Light_RenderLensflare_5 */
void Light_RenderLensflare_5(int param_1);
/* 0x00525460 LightmapInfo_Setup -> LightmapInfo_Setup */
void LightmapInfo_Setup(void);
/* 0x00526150 LightmapInfo_Process -> LightmapInfo_Process */
void LightmapInfo_Process(void);
/* 0x00526330 LightmapInfo_Init -> LightmapInfo_Init */
void LightmapInfo_Init(void);
/* 0x00526860 Light_ApplyLightmap_5 -> Light_ApplyLightmap_5 */
void Light_ApplyLightmap_5(void);
/* 0x005268e0 Light_UpdateGlobalLight_5 -> Light_UpdateGlobalLight_5 */
void Light_UpdateGlobalLight_5(uint32_t param_1);
/* 0x00526920 Light_LightsourceNotFound -> Light_LightsourceNotFound */
void Light_LightsourceNotFound(int param_1);
/* 0x005269c0 Light_CalculateAttenuation_5 -> Light_CalculateAttenuation_5 */
void Light_CalculateAttenuation_5(int param_1);
/* 0x00526ee0 Dirlight_Init -> Dirlight_Init */
void Dirlight_Init(void);
/* 0x005271e0 Dirlight_Setup -> Dirlight_Setup */
void Dirlight_Setup(int param_1);
/* 0x00527270 Dirlight_Process -> Dirlight_Process */
void Dirlight_Process(int param_1);
/* 0x00527480 Light_SetLightColor_5 -> Light_SetLightColor_5 */
void Light_SetLightColor_5(void);
/* 0x005274c0 Light_SampleLightmap_5 -> Light_SampleLightmap_5 */
uint16_t Light_SampleLightmap_5(void);
/* 0x005274d0 Light_ComputeDirectionalLight_6 -> Light_ComputeDirectionalLight_6 */
void Light_ComputeDirectionalLight_6(float param_1);
/* 0x00527520 Light_RenderLensflare_6 -> Light_RenderLensflare_6 */
void Light_RenderLensflare_6(int param_1);
/* 0x00527c90 GlobalLight_Init -> GlobalLight_Init */
void GlobalLight_Init(void);
/* 0x00528180 GlobalLight_Setup -> GlobalLight_Setup */
void __fastcall GlobalLight_Setup(uint32_t param_1, uint32_t param_2, int param_3);
/* 0x005282c0 GlobalLight_Process -> GlobalLight_Process */
void GlobalLight_Process(int param_1);
/* 0x00528420 Light_ApplyLightmap_6 -> Light_ApplyLightmap_6 */
void Light_ApplyLightmap_6(void);
/* 0x00528460 Light_UpdateGlobalLight_6 -> Light_UpdateGlobalLight_6 */
void Light_UpdateGlobalLight_6(float param_1);
/* 0x005284a0 AnimCam_Init -> AnimCam_Init */
void AnimCam_Init(void);
/* 0x00528850 Light_CalculateAttenuation_6 -> Light_CalculateAttenuation_6 */
void Light_CalculateAttenuation_6(int param_1);
/* 0x00528930 Light_SetLightColor_6 -> Light_SetLightColor_6 */
void Light_SetLightColor_6(int param_1);
/* 0x00528d00 AnimCam_Process -> AnimCam_Process */
void AnimCam_Process(void);
/* 0x00529010 Light_SampleLightmap_6 -> Light_SampleLightmap_6 */
void Light_SampleLightmap_6(int param_1);
/* 0x00529a10 Light_RenderLensflare_7 -> Light_RenderLensflare_7 */
void Light_RenderLensflare_7(int param_1);
/* 0x00529aa0 AnimCam_Update -> AnimCam_Update */
void AnimCam_Update(uint32_t param_1, int *param_2);
/* 0x00529ae0 Light_ApplyLightmap_7 -> Light_ApplyLightmap_7 */
void Light_ApplyLightmap_7(uint32_t param_1, int param_2);
/* 0x00529c20 Light_UpdateGlobalLight_7 -> Light_UpdateGlobalLight_7 */
void Light_UpdateGlobalLight_7(int param_1, int *param_2);
/* 0x0052a010 Light_U2F -> Light_U2F */
void Light_U2F(int param_1);
/* 0x0052a210 Light_CalculateAttenuation_7 -> Light_CalculateAttenuation_7 */
void Light_CalculateAttenuation_7(void);
/* 0x0052a230 AnimRigidDynCubeObj_Update -> AnimRigidDynCubeObj_Update */
void AnimRigidDynCubeObj_Update(void);
/* 0x0052aaf0 AnimRigidDynCubeObj_Init -> AnimRigidDynCubeObj_Init */
void AnimRigidDynCubeObj_Init(void);
/* 0x0052ac10 AnimRigidDynCubeObj_OnEvent -> AnimRigidDynCubeObj_OnEvent */
void AnimRigidDynCubeObj_OnEvent(int param_1, uint32_t *param_2);
/* 0x0052ac50 AnimRigidDynCubeObj_Action -> AnimRigidDynCubeObj_Action */
void AnimRigidDynCubeObj_Action(int param_1, int *param_2);
/* 0x0052ad00 Light_SetLightColor_7 -> Light_SetLightColor_7 */
void Light_SetLightColor_7(void);
/* 0x0052ad10 AnimScaleTask_Init -> AnimScaleTask_Init */
void AnimScaleTask_Init(void);
/* 0x0052ae50 AnimScaleTask_LoadParameters -> AnimScaleTask_LoadParameters */
void AnimScaleTask_LoadParameters(int param_1);
/* 0x0052af10 AnimScaleTask_Setup -> AnimScaleTask_Setup */
void AnimScaleTask_Setup(void);
/* 0x0052afb0 Light_SampleLightmap_7 -> Light_SampleLightmap_7 */
void Light_SampleLightmap_7(void);
/* 0x0052b040 EditHazinglayer_Init -> EditHazinglayer_Init */
void EditHazinglayer_Init(void);
/* 0x0052b1d0 EditHazinglayer_LoadParameters -> EditHazinglayer_LoadParameters */
void EditHazinglayer_LoadParameters(int param_1);
/* 0x0052b300 Light_RenderLensflare_8 -> Light_RenderLensflare_8 */
void Light_RenderLensflare_8(void);
/* 0x0052b3b0 CubeModifier_Init -> CubeModifier_Init */
void CubeModifier_Init(void);
/* 0x0052b510 CubeModifier_LoadParameters -> CubeModifier_LoadParameters */
void CubeModifier_LoadParameters(void);
/* 0x0052b6a0 Light_ApplyLightmap_8 -> Light_ApplyLightmap_8 */
void Light_ApplyLightmap_8(void);
/* 0x0052b6c0 DiscardTerrainArea_Init -> DiscardTerrainArea_Init */
void DiscardTerrainArea_Init(void);
/* 0x0052b840 DiscardTerrainArea_Setup -> DiscardTerrainArea_Setup */
void DiscardTerrainArea_Setup(void);
/* 0x0052b9f0 Light_UpdateGlobalLight_8 -> Light_UpdateGlobalLight_8 */
void Light_UpdateGlobalLight_8(int param_1, int param_2, int param_3, uint32_t *param_4);
/* 0x0052bcc0 Light_SetLightColor_8 -> Light_SetLightColor_8 */
uint32_t Light_SetLightColor_8(uint32_t param_1, int param_2, uint32_t *param_3);
/* 0x0052bee0 Light_SampleLightmap_8 -> Light_SampleLightmap_8 */
void Light_SampleLightmap_8(void);
/* 0x0052c000 DiscardTerrain_LoadParameters -> DiscardTerrain_LoadParameters */
void DiscardTerrain_LoadParameters(int param_1);
/* 0x0052c0c0 DiscardTerrain_Init -> DiscardTerrain_Init */
void DiscardTerrain_Init(void);
/* 0x0052c290 DiscardTerrain_Setup -> DiscardTerrain_Setup */
void DiscardTerrain_Setup(void);
/* 0x0052c5a0 DiscardTerrain_Process -> DiscardTerrain_Process */
void DiscardTerrain_Process(int param_1, int param_2);
/* 0x0052c5f0 Light_ComputeDirectionalLight_9 -> Light_ComputeDirectionalLight_9 */
void Light_ComputeDirectionalLight_9(void);
/* 0x0052c610 Light_RenderLensflare_9 -> Light_RenderLensflare_9 */
int Light_RenderLensflare_9(uint32_t param_1, uint32_t *param_2, uint32_t param_3);
/* 0x0052c6b0 SkyTask_Init -> SkyTask_Init */
void SkyTask_Init(void);
/* 0x0052c7f0 SkyTask_Update -> SkyTask_Update */
void SkyTask_Update(void);
/* 0x0052c820 LevelScript_Init -> LevelScript_Init */
void LevelScript_Init(void);
/* 0x0052c900 LevelScript_LoadParameters -> LevelScript_LoadParameters */
void LevelScript_LoadParameters(void);
/* 0x0052ca00 LevelScript_OnEvent -> LevelScript_OnEvent */
void LevelScript_OnEvent(void);
/* 0x0052ca30 SimBoneDynCubeObj_Init -> SimBoneDynCubeObj_Init */
void SimBoneDynCubeObj_Init(void);
/* 0x0052ca60 SimBoneDynCubeObj_Update -> SimBoneDynCubeObj_Update */
void SimBoneDynCubeObj_Update(void);
/* 0x0052ca70 PushButton_Init -> PushButton_Init */
void PushButton_Init(void);
/* 0x0052caf0 PushButton_LoadParameters -> PushButton_LoadParameters */
void PushButton_LoadParameters(int param_1, uint32_t param_2);
/* 0x0052cb20 PushButton_OnEvent -> PushButton_OnEvent */
void PushButton_OnEvent(void);
/* 0x0052cb30 PushButton_Process -> PushButton_Process */
int PushButton_Process(void);
/* 0x0052cc40 Light_ComputeDirectional -> Light_ComputeDirectional */
void Light_ComputeDirectional(int param_1);
/* 0x0052ce90 Light_ApplyLightmap_9 -> Light_ApplyLightmap_9 */
uint32_t Light_ApplyLightmap_9(float *param_1, float *param_2, float *param_3, float *param_4, float param_5, float param_6);
/* 0x0052cfa0 Light_UpdateGlobalLight_9 -> Light_UpdateGlobalLight_9 */
void Light_UpdateGlobalLight_9(int param_1);
/* 0x0052d030 Light_CalculateAttenuation_9 -> Light_CalculateAttenuation_9 */
void Light_CalculateAttenuation_9(int param_1);
/* 0x0052d060 Light_SetLightColor_9 -> Light_SetLightColor_9 */
void Light_SetLightColor_9(void);
/* 0x0052d2b0 Light_SampleLightmap_9 -> Light_SampleLightmap_9 */
void Light_SampleLightmap_9(uint32_t *param_1, uint32_t *param_2, uint32_t *param_3, uint32_t *param_4, uint32_t *param_5, uint32_t *param_6);
/* 0x0052d350 Light_ComputeDirectionalLight_10 -> Light_ComputeDirectionalLight_10 */
void Light_ComputeDirectionalLight_10(int param_1, uint32_t param_2);
/* 0x0052d360 Light_RenderLensflare_10 -> Light_RenderLensflare_10 */
void Light_RenderLensflare_10(void);
/* 0x0052d400 Light_ApplyLightmap_10 -> Light_ApplyLightmap_10 */
void Light_ApplyLightmap_10(uint32_t *param_1);
/* 0x0052d420 Light_UpdateGlobalLight_10 -> Light_UpdateGlobalLight_10 */
void Light_UpdateGlobalLight_10(void);
/* 0x0052d440 Light_CalculateAttenuation_10 -> Light_CalculateAttenuation_10 */
void Light_CalculateAttenuation_10(uint32_t *param_1);
/* 0x0052d4b0 Light_SetLightColor_10 -> Light_SetLightColor_10 */
int Light_SetLightColor_10(uint32_t param_1, char *param_2, uint32_t param_3, int param_4, int param_5, int param_6);
/* 0x0052d5b0 Light_SampleLightmap_10 -> Light_SampleLightmap_10 */
void Light_SampleLightmap_10(uint32_t *param_1, uint32_t param_2);
/* 0x0052d5e0 Light_ComputeDirectionalLight_11 -> Light_ComputeDirectionalLight_11 */
void Light_ComputeDirectionalLight_11(int param_1, uint32_t param_2);
/* 0x0052d610 Light_RenderLensflare_11 -> Light_RenderLensflare_11 */
void Light_RenderLensflare_11(int param_1, uint32_t param_2);
/* 0x0052d630 Light_ApplyLightmap_11 -> Light_ApplyLightmap_11 */
int Light_ApplyLightmap_11(uint32_t param_1, uint32_t param_2);
/* 0x0052d6c0 Light_UpdateGlobalLight_11 -> Light_UpdateGlobalLight_11 */
void Light_UpdateGlobalLight_11(int param_1);
/* 0x0052d9f0 Light_CalculateAttenuation_11 -> Light_CalculateAttenuation_11 */
uint32_t Light_CalculateAttenuation_11(int param_1);
/* 0x0052dae0 Light_SetLightColor_11 -> Light_SetLightColor_11 */
void Light_SetLightColor_11(int param_1, int param_2, double *param_3);
/* 0x0052dcb0 Light_SampleLightmap_11 -> Light_SampleLightmap_11 */
float10 Light_SampleLightmap_11(int param_1, double *param_2, int param_3);
/* 0x0052dd70 Light_Watermesh -> Light_Watermesh */
void Light_Watermesh(void);
/* 0x0052dd90 Light_ComputeDirectionalLight_12 -> Light_ComputeDirectionalLight_12 */
void Light_ComputeDirectionalLight_12(void);
/* 0x0052e180 Light_RenderLensflare_12 -> Light_RenderLensflare_12 */
void Light_RenderLensflare_12(int param_1, float *param_2, float *param_3);
/* 0x0052e2d0 Light_ApplyLightmap_12 -> Light_ApplyLightmap_12 */
void Light_ApplyLightmap_12(int param_1);
/* 0x0052e660 Light_UpdateGlobalLight_12 -> Light_UpdateGlobalLight_12 */
void Light_UpdateGlobalLight_12(uint32_t param_1, double *param_2);
/* 0x0052f3d0 Light_CalculateAttenuation_12 -> Light_CalculateAttenuation_12 */
void Light_CalculateAttenuation_12(int param_1, float *param_2, double *param_3, float *param_4);
/* 0x0052f630 Light_SetLightColor_12 -> Light_SetLightColor_12 */
void Light_SetLightColor_12(int param_1, int param_2, double *param_3, int param_4, int param_5, int param_6);
/* 0x0052fba0 Light_SampleLightmap_12 -> Light_SampleLightmap_12 */
void Light_SampleLightmap_12(int param_1, int param_2, int param_3, int param_4);
/* 0x0052fe60 Light_RenderLensflare_13 -> Light_RenderLensflare_13 */
void Light_RenderLensflare_13(int param_1, double *param_2);
/* 0x0052ffa0 Light_ApplyLightmap_13 -> Light_ApplyLightmap_13 */
void Light_ApplyLightmap_13(int param_1, double *param_2);
/* 0x00530210 Particle_UpdateParticlePhysics -> Particle_UpdateParticlePhysics */
void Particle_UpdateParticlePhysics(void);
/* 0x00530220 CamTask_Init -> CamTask_Init */
void CamTask_Init(void);
/* 0x00530250 CamTask_Update -> CamTask_Update */
void CamTask_Update(void);
/* 0x00530260 CamTask_OnEvent -> CamTask_OnEvent */
uint16_t CamTask_OnEvent(void);
/* 0x00530270 CamTask_Process -> CamTask_Process */
void CamTask_Process(void);
/* 0x005302a0 CamTask_Action -> CamTask_Action */
void CamTask_Action(void);
/* 0x005302d0 CamTask_OnTick -> CamTask_OnTick */
void CamTask_OnTick(void);
/* 0x00530470 Particle_Render3DSprites -> Particle_Render3DSprites */
void Particle_Render3DSprites(void);
/* 0x005304b0 Particle_TriggerMuzzleFlash -> Particle_TriggerMuzzleFlash */
void Particle_TriggerMuzzleFlash(void);
/* 0x00530520 Particle_RenderTrails -> Particle_RenderTrails */
void Particle_RenderTrails(void);
/* 0x00530580 Particle_FadeParticles -> Particle_FadeParticles */
void Particle_FadeParticles(void);
/* 0x005305f0 Particle_ResetEmitters -> Particle_ResetEmitters */
void Particle_ResetEmitters(void);
/* 0x00530630 Particle_EmitParticles_2 -> Particle_EmitParticles_2 */
void Particle_EmitParticles_2(void);
/* 0x00530740 Particle_UpdateParticlePhysics_2 -> Particle_UpdateParticlePhysics_2 */
void Particle_UpdateParticlePhysics_2(void);
/* 0x00530800 Particle_Render3DSprites_2 -> Particle_Render3DSprites_2 */
void Particle_Render3DSprites_2(void);
/* 0x00530810 Particle_TriggerMuzzleFlash_2 -> Particle_TriggerMuzzleFlash_2 */
void Particle_TriggerMuzzleFlash_2(void);
/* 0x00530850 Particle_RenderTrails_2 -> Particle_RenderTrails_2 */
void Particle_RenderTrails_2(void);
/* 0x005308b0 Particle_FadeParticles_2 -> Particle_FadeParticles_2 */
void Particle_FadeParticles_2(void);
/* 0x005308f0 Particle_ResetEmitters_2 -> Particle_ResetEmitters_2 */
void Particle_ResetEmitters_2(void);
/* 0x00530950 Particle_EmitParticles_3 -> Particle_EmitParticles_3 */
void Particle_EmitParticles_3(int param_1, uint32_t param_2);
/* 0x00530960 Particle_UpdateParticlePhysics_3 -> Particle_UpdateParticlePhysics_3 */
void Particle_UpdateParticlePhysics_3(void);
/* 0x00530980 Particle_Render3DSprites_3 -> Particle_Render3DSprites_3 */
void Particle_Render3DSprites_3(void);
/* 0x005309c0 Particle_TriggerMuzzleFlash_3 -> Particle_TriggerMuzzleFlash_3 */
void Particle_TriggerMuzzleFlash_3(void);
/* 0x00530a20 Particle_RenderTrails_3 -> Particle_RenderTrails_3 */
void Particle_RenderTrails_3(void);
/* 0x00530a80 FlashTask_Init -> FlashTask_Init */
void FlashTask_Init(void);
/* 0x00530ad0 FlashTask_LoadParameters -> FlashTask_LoadParameters */
void FlashTask_LoadParameters(int param_1);
/* 0x00530c60 FlashTask_OnEvent -> FlashTask_OnEvent */
void FlashTask_OnEvent(void);
/* 0x00530c80 ParticleSystemDynCubeObj_Init -> ParticleSystemDynCubeObj_Init */
void ParticleSystemDynCubeObj_Init(void);
/* 0x00530cd0 ParticleSystemDynCubeObj_LoadParameters -> ParticleSystemDynCubeObj_LoadParameters */
void ParticleSystemDynCubeObj_LoadParameters(int param_1);
/* 0x00530f20 Particle_FadeParticles_3 -> Particle_FadeParticles_3 */
uint32_t Particle_FadeParticles_3(double *param_1, float param_2);
/* 0x00531090 ParticleSystemDynCubeObj_Setup -> ParticleSystemDynCubeObj_Setup */
void ParticleSystemDynCubeObj_Setup(int param_1);
/* 0x005310c0 Particle_ResetEmitters_3 -> Particle_ResetEmitters_3 */
void Particle_ResetEmitters_3(void);
/* 0x005310d0 Particle_EmitParticles_4 -> Particle_EmitParticles_4 */
uint16_t Particle_EmitParticles_4(void);
/* 0x005310e0 FreeCamera_Init -> FreeCamera_Init */
void FreeCamera_Init(void);
/* 0x00531130 FreeCamera_LoadParameters -> FreeCamera_LoadParameters */
void FreeCamera_LoadParameters(int param_1);
/* 0x00531180 FreeCamera_OnEvent -> FreeCamera_OnEvent */
void FreeCamera_OnEvent(void);
/* 0x00531190 SpriteParticleSystemDynCubeObj_Init -> SpriteParticleSystemDynCubeObj_Init */
void SpriteParticleSystemDynCubeObj_Init(void);
/* 0x005311c0 SpriteParticleSystemDynCubeObj_Update -> SpriteParticleSystemDynCubeObj_Update */
void SpriteParticleSystemDynCubeObj_Update(void);
/* 0x005311e0 SpriteParticleSystemDynCubeObj_OnEvent -> SpriteParticleSystemDynCubeObj_OnEvent */
void SpriteParticleSystemDynCubeObj_OnEvent(void);
/* 0x005311f0 SpriteParticleSystemDynCubeObj_Process -> SpriteParticleSystemDynCubeObj_Process */
void SpriteParticleSystemDynCubeObj_Process(void);
/* 0x00531250 SpriteParticleSystemDynCubeObj_Action -> SpriteParticleSystemDynCubeObj_Action */
void SpriteParticleSystemDynCubeObj_Action(uint32_t param_1, int param_2);
/* 0x005312d0 SpriteParticleSystemDynCubeObj_OnTick -> SpriteParticleSystemDynCubeObj_OnTick */
void SpriteParticleSystemDynCubeObj_OnTick(uint32_t param_1, int param_2, uint32_t param_3, uint32_t param_4);
/* 0x00531300 PointlightDynCubeObj_Init -> PointlightDynCubeObj_Init */
void PointlightDynCubeObj_Init(void);
/* 0x005314f0 PointlightDynCubeObj_Update -> PointlightDynCubeObj_Update */
void PointlightDynCubeObj_Update(void);
/* 0x00531540 Particle_UpdateParticlePhysics_4 -> Particle_UpdateParticlePhysics_4 */
void Particle_UpdateParticlePhysics_4(void);
/* 0x005315b0 Particle_Render3DSprites_4 -> Particle_Render3DSprites_4 */
void Particle_Render3DSprites_4(void);
/* 0x00531620 BoneMagicObj_LoadParameters -> BoneMagicObj_LoadParameters */
void BoneMagicObj_LoadParameters(void);
/* 0x005317b0 BoneMagicObj_OnEvent -> BoneMagicObj_OnEvent */
void BoneMagicObj_OnEvent(uint32_t param_1);
/* 0x005317d0 BoneMagicObj_Init -> BoneMagicObj_Init */
void BoneMagicObj_Init(void);
/* 0x005318d0 BoneMagicObj_Setup -> BoneMagicObj_Setup */
void BoneMagicObj_Setup(int param_1, uint32_t *param_2);
/* 0x005319b0 BoneMagicObj_Process -> BoneMagicObj_Process */
void BoneMagicObj_Process(void);
/* 0x00531cd0 BoneMagicObj_Update -> BoneMagicObj_Update */
void BoneMagicObj_Update(uint32_t param_1, int *param_2);
/* 0x00531d10 Particle_RenderTrails_4 -> Particle_RenderTrails_4 */
void Particle_RenderTrails_4(void);
/* 0x00531d30 Particle_FadeParticles_4 -> Particle_FadeParticles_4 */
void Particle_FadeParticles_4(void);
/* 0x00531d70 Particle_ResetEmitters_4 -> Particle_ResetEmitters_4 */
void Particle_ResetEmitters_4(void);
/* 0x00531db0 Particle_EmitParticles_5 -> Particle_EmitParticles_5 */
void Particle_EmitParticles_5(void);
/* 0x00531dc0 Particle_UpdateParticlePhysics_5 -> Particle_UpdateParticlePhysics_5 */
void Particle_UpdateParticlePhysics_5(void);
/* 0x00531dd0 Particle_Render3DSprites_5 -> Particle_Render3DSprites_5 */
void Particle_Render3DSprites_5(void);
/* 0x00531df0 Particle_TriggerMuzzleFlash_5 -> Particle_TriggerMuzzleFlash_5 */
void Particle_TriggerMuzzleFlash_5(void);
/* 0x00531e10 Sprite3D_LoadParameters -> Sprite3D_LoadParameters */
void Sprite3D_LoadParameters(void);
/* 0x00531ef0 Sprite3D_Init -> Sprite3D_Init */
void Sprite3D_Init(void);
/* 0x00531f40 Sprite3D_Update -> Sprite3D_Update */
void Sprite3D_Update(void);
/* 0x00531f60 TransparencyList_LoadParameters -> TransparencyList_LoadParameters */
void TransparencyList_LoadParameters(int param_1);
/* 0x00531fa0 TransparencyList_Init -> TransparencyList_Init */
void TransparencyList_Init(void);
/* 0x00532030 TransparencyList_Setup -> TransparencyList_Setup */
void TransparencyList_Setup(int param_1);
/* 0x005321c0 Particle_RenderTrails_5 -> Particle_RenderTrails_5 */
void Particle_RenderTrails_5(void);
/* 0x005321f0 Particle_FadeParticles_5 -> Particle_FadeParticles_5 */
void Particle_FadeParticles_5(uint32_t *param_1, uint32_t *param_2, uint32_t param_3, code *param_4);
/* 0x00532344 Particle_ResetEmitters_5 -> Particle_ResetEmitters_5 */
void Particle_ResetEmitters_5(uint32_t param_1, uint32_t param_2, int param_3, code *param_4);
/* 0x00532392 Particle_EmitParticles_6 -> Particle_EmitParticles_6 */
void Particle_EmitParticles_6(uint8_t *param_1, uint8_t *param_2, int param_3);
/* 0x005323c0 Particle_UpdateParticlePhysics_6 -> Particle_UpdateParticlePhysics_6 */
void Particle_UpdateParticlePhysics_6(void);
/* 0x005323d0 Particle_Render3DSprites_6 -> Particle_Render3DSprites_6 */
void Particle_Render3DSprites_6(void);
/* 0x005323e0 Particle_TriggerMuzzleFlash_6 -> Particle_TriggerMuzzleFlash_6 */
void Particle_TriggerMuzzleFlash_6(void);
/* 0x005323f0 Particle_RenderTrails_6 -> Particle_RenderTrails_6 */
void Particle_RenderTrails_6(void);
/* 0x00532400 Particle_FadeParticles_6 -> Particle_FadeParticles_6 */
void Particle_FadeParticles_6(void);
/* 0x00532490 Particle_ResetEmitters_6 -> Particle_ResetEmitters_6 */
void Particle_ResetEmitters_6(void);