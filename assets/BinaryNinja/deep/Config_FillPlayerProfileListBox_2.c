/* LOGIC NOTE (Config_FillPlayerProfileListBox_2 @ 0x00402FF0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , Disp
   called by : Flow_RunHandler
   data refs : none
   strings   : GOStart; GOPlayer; GOInRemap; GOInMouInv
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Config_FillPlayerProfileListBox_2.h"

int32_t Config_FillPlayerProfileListBox_2()

{
    Game_DefineOptions("GOStart", GOStart, 0, 1);
    Game_DefineOptions("GOPlayer", GO_Player, 0, 1);
    Game_DefineOptions("GOInRemap", GO_InRemap, 0, 3);
    Game_DefineOptions("GOInMouInv", GO_InMouInv, 0, 1);
    Game_DefineOptions("GOInMouSens", GO_InMouSens, 0, 1);
    Game_DefineOptions("GOGfxDisp", GO_GfxDisp, 0, 3);
    Game_DefineOptions("GOGfxDevice", GO_GfxDevice, 0, 1);
    Game_DefineOptions("GOGfxGamma", GO_GfxGamma, 0, 1);
    Game_DefineOptions("GOGameLang", GO_GameLang, 0, 1);
    Game_DefineOptions("GOGameDiff", GO_GameDiff, 0, 1);
    Game_DefineOptions("GOIsBlood", GO_IsBlood, 0, 1);
    Game_DefineOptions("GOSoundSpeech", GO_SoundSpeech, 0, 2);
    Game_DefineOptions("GOSoundMusic", GO_SoundMusic, 0, 2);
    Game_DefineOptions("GOSoundFX", GO_SoundFX, 0, 2);
    Game_DefineOptions("GOGfxPerformance", GO_GfxPerformance, 0, 1);
    Game_DefineOptions("GOActiveMission", GO_ActiveMission, 0, 1);
    Game_DefineOptions("GOContentControlPW", GO_ContentControlPW, 0, 1);
    Game_DefineOptions("Config_FillPlayerProfileListBox", Config_FillPlayerProfileListBox, 0, 0);
    Game_DefineOptions("Config_GetActivePlayerProfileIndex", Config_GetActivePlayerProfileIndex, 0,
        0);
    Game_DefineOptions("Config_SetActivePlayerProfileIndex", Config_SetActivePlayerProfileIndex, 0,
        1);
    Game_DefineOptions("Config_CreateNewPlayerProfile", Config_CreateNewPlayerProfile, 0, 2);
    Game_DefineOptions("Config_DeletePlayerProfile", Config_DeletePlayerProfile, 0, 1);
    Game_DefineOptions("Config_PlayerGetActiveMission", Config_PlayerGetActiveMission, 0, 1);
    Game_DefineOptions("Config_GetNumberOfPlayerProfiles", Config_GetNumberOfPlayerProfiles, 0, 1);
    Game_DefineOptions("Config_FillMissionSelectionBox", Config_FillMissionSelectionBox, 0, 0);
    Game_DefineOptions("Config_FillMissionPictureBox", Config_FillMissionPictureBox, 0, 0);
    Game_DefineOptions("Config_FillMissionTextBox", Config_FillMissionTextBox, 0, 0);
    Game_DefineOptions("Config_FillScreenResolutionListBox", Config_FillScreenResolutionListBox, 0,
        1);
    Game_DefineOptions("Config_FillRenderDeviceListBox", Config_FillRenderDeviceListBox, 0, 0);
    Game_DefineOptions("Config_GameOptionsInputGetInvertMouse",
        Config_GameOptionsInputGetInvertMouse, 0, 0);
    Game_DefineOptions("Config_GameOptionsInputGetMouseSensitivity",
        Config_GameOptionsInputGetMouseSensitivity, 0, 0);
    Game_DefineOptions("Config_GameOptionsInputGetBloodEnabled",
        Config_GameOptionsInputGetBloodEnabled, 0, 0);
    Game_DefineOptions("Config_GameOptionsInputSetInvertMouse",
        Config_GameOptionsInputSetInvertMouse, 0, 1);
    Game_DefineOptions("Config_GameOptionsInputSetMouseSensitivity",
        Config_GameOptionsInputSetMouseSensitivity, 0, 1);
    Game_DefineOptions("Config_GameOptionsInputSetBloodEnabled",
        Config_GameOptionsInputSetBloodEnabled, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsSetResolution", Config_GraphicOptionsSetResolution, 0,
        1);
    Game_DefineOptions("Config_GraphicOptionsSetTransparency",
        Config_GraphicOptionsSetTransparency, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsSetDevice", Config_GraphicOptionsSetDevice, 0, 1);
    Sys_ReadFileBlock_23("Config_GraphicOptionsSetGamma", Config_GraphicOptionsSetGamma, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsSetPerformanceFlags",
        Config_GraphicOptionsSetPerformanceFlags, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsGetResolution", Config_GraphicOptionsGetResolution, 0,
        0);
    Game_DefineOptions("Config_GraphicOptionsGetTransparency",
        Config_GraphicOptionsGetTransparency, 0, 0);
    Game_DefineOptions("Config_GraphicOptionsGetDevice", Config_GraphicOptionsGetDevice, 0, 0);
    Game_DefineOptions("Config_GraphicOptionsGetGamma", Config_GraphicOptionsGetGamma, 0, 0);
    Game_DefineOptions("Config_GraphicOptionsGetPerformanceFlags",
        Config_GraphicOptionsGetPerformanceFlags, 0, 0);
    Game_DefineOptions("Config_GraphicOptionsGetPerfFlagsFromLevel",
        Config_GraphicOptionsGetPerfFlagsFromLevel, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsGetPerfLevelFromFlags",
        Config_GraphicOptionsGetPerfLevelFromFlags, 0, 1);
    Game_DefineOptions("Config_GraphicOptionsNumPerfLevels", Config_GraphicOptionsNumPerfLevels, 0,
        1);
    Game_DefineOptions("Config_SoundOptionsSetSoundsEffects", Config_SoundOptionsSetSoundsEffects,
        0, 1);
    Game_DefineOptions("Config_SoundOptionsSetSoundsEffectsVolume",
        Config_SoundOptionsSetSoundsEffectsVolume, 0, 1);
    Game_DefineOptions("Config_SoundOptionsSetMusic", Config_SoundOptionsSetMusic, 0, 1);
    Game_DefineOptions("Config_SoundOptionsSetMusicVolume", Config_SoundOptionsSetMusicVolume, 0,
        1);
    Game_DefineOptions("Config_SoundOptionsSetSpeech", Config_SoundOptionsSetSpeech, 0, 1);
    Game_DefineOptions("Config_SoundOptionsSetSpeechVolume", Config_SoundOptionsSetSpeechVolume, 0,
        1);
    Game_DefineOptions("Config_SoundOptionsSetReverseStereo", Config_SoundOptionsSetReverseStereo,
        0, 1);
    Game_DefineOptions("Config_SoundOptionsGetSoundsEffects", Config_SoundOptionsGetSoundsEffects,
        0, 0);
    Game_DefineOptions("Config_SoundOptionsGetSoundsEffectsVolume",
        Config_SoundOptionsGetSoundsEffectsVolume, 0, 0);
    Game_DefineOptions("Config_SoundOptionsGetMusic", Config_SoundOptionsGetMusic, 0, 0);
    Game_DefineOptions("Config_SoundOptionsGetMusicVolume", Config_SoundOptionsGetMusicVolume, 0,
        0);
    Game_DefineOptions("Config_SoundOptionsGetSpeech", Config_SoundOptionsGetSpeech, 0, 0);
    Game_DefineOptions("Config_SoundOptionsGetSpeechVolume", Config_SoundOptionsGetSpeechVolume, 0,
        0);
    Game_DefineOptions("Config_SoundOptionsGetReverseStereo", Config_SoundOptionsGetReverseStereo,
        0, 0);
    Game_DefineOptions("Config_SetContentControlPassword", GO_ContentControlPW, 0, 1);
    Game_DefineOptions("Config_GetContentControlPassword", Config_GetContentControlPassword, 0, 0);
    Game_DefineOptions("Config_VerifyContentControlPassword", Config_VerifyContentControlPassword,
        0, 1);
    Game_DefineOptions("Config_IsContentControlPasswordEnabled",
        Config_IsContentControlPasswordEnabled, 0, 0);
    Game_DefineOptions("Config_IsGermany", Config_IsGermany, 0, 0);
    Game_DefineOptions("Config_ResetGraphicOptions", Config_ResetGraphicOptions, 0, 0);
    Game_DefineOptions("DefineGameOptions", 0, 0, 1);

    for (char* i = "MoveLeft"; i < 0x536924; i = &i[0x24])
        TaskType_Set(i, *(i + 0x20));

    for (char* i_1 = "INPUTPORT_DEVICE_KEYBOARD"; i_1 < 0x536994; i_1 = &i_1[0x24])
        TaskType_Set(i_1, *(i_1 + 0x20));

    for (char* i_2 = "KEY_ANGLE"; i_2 < &data_537b74; i_2 = &i_2[0x24])
        TaskType_Set(i_2, *(i_2 + 0x20));

    int32_t dst = 0;

    for (char const* const i_3 = "ENGLISH"; i_3 < "GD_1"; )
    {
        TaskType_Set(i_3, dst);
        i_3 = &i_3[0x10];
        dst += 1;
    }

    int32_t dst_1 = 0;

    for (char const* const i_4 = "GD_1"; i_4 < 0x5333ac; )
    {
        TaskType_Set(i_4, dst_1);
        i_4 = &i_4[0x10];
        dst_1 += 1;
    }

    Sys_ExecuteBytecode_3(Display_CheckCapabilities_7());
    void v_500;
    int32_t i_6 = Display_OpenDevice_6(&v_500, 5);
    data_567c90 = i_6;

    if (i_6 > 0)
    {
        int32_t* tmp_2 = &data_568098;
        void* obj_1 = &v_500;
        int32_t i_5;

        do
        {
            void* src = obj_1;
            obj_1 += 0x100;
            __builtin_memcpy(&tmp_2[-0x100], src, 0x100);
            *tmp_2 = 0;
            tmp_2 = &tmp_2[0x101];
            i_5 = i_6;
            i_6 -= 1;
        } while (i_5 != 1);
    }

    Display_SetGammaRamp_3(0xc28b40, 8, Config_RegisterOptions);
    int32_t result = Sys_CloseFileStream_3();
    data_bc79c8 = 0;
    return result;
}
