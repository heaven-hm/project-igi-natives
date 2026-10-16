#include "gi_platform.h"
#include "00415B30-Level_Start.h"
int32_t Level_Start(void* a1)

// Sig: void Level_Start(int p1)
// Note: Start new level, Params:  p1: 0057BABC
{
    Frames_Set(0x1e);
    Game_TimingBegin();
    void* valA1 = FX_ExplosionSpawn_6(g_539560);

    if (!valA1)
    {
        int32_t v_290 = g_539560;
        Error_Show("The mission ID %d does not exist.");

        while (true)
            /* nop */

        return;
    }

    void* v_290_1 = valA1 + 0x144;
    Game_DataSymbolLoad(0x57b568, "LOCAL:%s/");
    Script_RegisterNamespace("MISSION:", 0x57b568);
    g_57babc = a1;
    AI_UpdateSensors_4();
    Camera_ResetFrameCounters(g_57babc + 0x60);
    Config_SetResolution_2(Level_LoadObjects_2());
    int32_t* valA4 = LoadingScreen_Show(9);
    *(g_57babc + 0x20) = DynObj_InsertHashItem_7(0xdac);
    *(g_57babc + 0xe4) = 0;
    HumanPlayer_UpdateHealth(*(g_57babc + 0x20));
    void* valA7 = g_57babc;
    g_a44344 = *(valA7 + 0x20);
    int32_t v_2b4 = *(valA7 + 0x20);
    int32_t v_2b8 = 0x57b568;
    char v_280;
    Game_DataSymbolLoad(&v_280, "%sterrain/terrain");
    DynObj_ParseConfigFile_7(*(g_57babc + 0x20), &v_280);
    DynObj_Createterrainmateria(*(g_57babc + 0x20), &v_280);
    Sys_ExecuteBytecode_8(0);
    Sys_ReadFileBlock_8(0x3f800000, 0xdb840);
    DynObj_UpdateDynTree_13();
    void* v_29c = valA1 + 0x244;
    char v_200;
    Game_DataSymbolLoad(&v_200, "LOCAL:%s/");
    DynObj_LookupHashItem_15(&v_200);
    DynObj_CreateMagicObject_15("LOCAL:common/");
    *(g_57babc + 0x24) = DynObj_RegisterSymbol_14(valA1 + 0x444);
    FX_FragmentSimulate_16(valA4, 1);
    void* v_2bc = valA1 + 0x344;
    char v_100;
    Game_DataSymbolLoad(&v_100, "LOCAL:%s/");
    DynObj_LookupHashItem_15(&v_100);
    Script_CallNativeHandler(DynObj_RegisterSymbol_14(valA1 + 0x464));
    FX_FragmentSimulate_16(valA4, 1);
    Sys_CloseFileStream_8();
    Sys_ExecuteBytecode_8(0xffffffff);

    if (*((DynObj_RegisterSymbol_13() << 2) + &g_a94e84))
        ((int(*)())(uintptr_t)(*((DynObj_RegisterSymbol_13() << 2) + &g_a94e84)))(0);

    Sound_Load("LOCAL:common/sounds");
    Sound_Load("MISSION:sounds");
    int32_t valA15;
    void* objC8;
    int32_t tmpD6;
    valA15 = FX_FragmentSimulate_16(valA4, 1);
    char* v_2a4_2 = "LOCAL:common/sprites/sprites.res";
    *(g_57babc + 0xe8) = Resource_Load(valA15, tmpD6, objC8, nullptr);
    Level_LocalCommonSprites();
    int32_t valA17;
    void* objC9;
    int32_t tmpD8;
    valA17 = FX_FragmentSimulate_16(valA4, 1);
    char* v_2b4_1 = "LOCAL:common/textures/textures.res";
    *(g_57babc + 0xec) = Resource_Load(valA17, tmpD8, objC9, nullptr);
    Level_LocalCommonTextures();
    FX_FragmentSimulate_16(valA4, 1);
    AI_ComputerComputerRes();
    FX_FragmentSimulate_16(valA4, 1);
    FX_LanguageMessagesRes();
    FX_FragmentSimulate_16(valA4, 1);
    *(g_57babc + 0x44) = GameScreen_OnEvent(Game_GetScriptContext());
    *(g_57babc + 0x4c) = Script_ParseEnumString(Level_LoadLevel_6());
    FX_FragmentSimulate_16(valA4, 1);
    SoundSys_StopSoundSample_4(0);
    SoundSys_PlaySoundSample_5(a1, "LOCAL:common/sounds/");
    SoundSys_PlaySoundSample_5(a1, "MISSION:sounds/");
    int32_t v_290_4 = Level_StartMission_4();
    struct status_msg* valA25 = CameraControlTask_Process(Level_LoadLevel_6(), g_57babc + 0x60);
    *(g_57babc + 0x54) = QTask_LinkEventHandler_2(valA25);
    uint32_t valA27 = Level_StartMission_4();
    CameraControlTask_Action(Level_LoadLevel_6(), valA25, valA27);
    *(g_57babc + 0x48) = 0;
    Render_DrawRigidMesh_5(30.0f);

    if (g_c28c61)
    {
        int32_t valA31 = 0;

        if (g_c28f80)
            valA31 = 3;

        int32_t v_2b0_3 = 0x3dcccccd;
        void* valA32 = Config_SetGamma();
        InputPort_Action(0, Config_SetResolution(), valA32, valA31, 0x3dcccccd, 0x3d162fc9, 0x3d162fc9,
            0x3d162fc9, 0x3d162fc9, 0x3dcccccd, 0x3d162fc9, 0x3d162fc9, 0x3dcccccd, 0x3d162fc9,
            0x3d162fc9);
        g_bc20a0 = 1;
    }

    Script_FormatString_20(sub_416110);
    Vehicle_UpdateRudder_6(g_57babc + 0x60);
    SoundSys_AttachLipsync_17();
    Script_CallNativeHandler_18(g_57babc + 0x60);
    Script_FormatString_18(0x1e);
    Script_EvaluateCondition_18(GameScreen_Process(*(Level_LoadLevel_6() + 0x44)));
    Level_LoadObjects(0x57b568, 0x1e);
    FX_FragmentSimulate_16(valA4, 1);

    for (int32_t i = 0; i < 6; i += 1)
        DynObj_CreateMagicObject_12(Level_StartMission_4(), i);

    int32_t* valA39 = File_Open(".\mpzm.afp", "rb");

    if (valA39)
    {
        Camera_ApplyLineFilter_4(valA39, nullptr, FILE_BEGIN);
        int32_t objC17 = 0;
        objC17 = Camera_SetFieldOfView_4(valA39) == 0x5e;
        Camera_UpdateTransform_4(valA39);

        if (objC17)
        {
            *(g_57babc + 0xf8) = 0;
            *(g_57babc + 0xf0) = Display_CheckCapabilities_12("game_music");
            *(g_57babc + 0xf4) = Display_RestoreDevice_12("game_music");
            *(g_57babc + 0xfc) = 0x30;
            Display_SetGammaRamp_12(g_57babc + 0x100);
            Sys_DispatchOpcode_2();
            FX_FireBallUpdate_16(valA4);
            return Game_TimingEnd();
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000001");

    while (true)
        /* nop */
}
