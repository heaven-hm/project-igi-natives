// IGI native provenance: Level_Start - 0x00415B30 - CFG score 99.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00415B30-Level_Start.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_Start.h"
int32_t Level_Start(void* context)

// Sig: void Level_Start(int p1)
// Note: Start new level, Params:  p1: 0057BABC
{
    Frames_Set(0x1e);
    Game_TimingBegin();
    void* data_1 = FX_ExplosionSpawn_6(g_539560);

    if (!data_1)
    {
        int32_t item_290 = g_539560;
        Error_Show("The mission ID %d does not exist.");

        while (true)
            /* nop */

        return;
    }

    void* item_290_1 = data_1 + 0x144;
    Game_DataSymbolLoad(0x57b568, "LOCAL:%s/");
    Script_RegisterNamespace("MISSION:", 0x57b568);
    g_57babc = context;
    AI_UpdateSensors_4();
    Camera_ResetFrameCounters(g_57babc + 0x60);
    Config_SetResolution_2(Level_LoadObjects_2());
    int32_t* data_4 = LoadingScreen_Show(9);
    *(g_57babc + 0x20) = DynObj_InsertHashItem_7(0xdac);
    *(g_57babc + 0xe4) = 0;
    HumanPlayer_UpdateHealth(*(g_57babc + 0x20));
    void* data_7 = g_57babc;
    g_a44344 = *(data_7 + 0x20);
    int32_t item_2b4 = *(data_7 + 0x20);
    int32_t item_2b8 = 0x57b568;
    void item_280;
    Game_DataSymbolLoad(&item_280, "%sterrain/terrain");
    DynObj_ParseConfigFile_7(*(g_57babc + 0x20), &item_280);
    DynObj_Createterrainmateria(*(g_57babc + 0x20), &item_280);
    Sys_ExecuteBytecode_8(0);
    Sys_ReadFileBlock_8(0x3f800000, 0xdb840);
    DynObj_UpdateDynTree_13();
    void* item_29c = data_1 + 0x244;
    void item_200;
    Game_DataSymbolLoad(&item_200, "LOCAL:%s/");
    DynObj_LookupHashItem_15(&item_200);
    DynObj_CreateMagicObject_15("LOCAL:common/");
    *(g_57babc + 0x24) = DynObj_RegisterSymbol_14(data_1 + 0x444);
    FX_FragmentSimulate_16(data_4, 1);
    void* item_2bc = data_1 + 0x344;
    void item_100;
    Game_DataSymbolLoad(&item_100, "LOCAL:%s/");
    DynObj_LookupHashItem_15(&item_100);
    Script_CallNativeHandler(DynObj_RegisterSymbol_14(data_1 + 0x464));
    FX_FragmentSimulate_16(data_4, 1);
    Sys_CloseFileStream_8();
    Sys_ExecuteBytecode_8(0xffffffff);

    if (*((DynObj_RegisterSymbol_13() << 2) + &g_a94e84))
        (*((DynObj_RegisterSymbol_13() << 2) + &g_a94e84))(0);

    Sound_Load("LOCAL:common/sounds");
    Sound_Load("MISSION:sounds");
    int32_t data_15;
    void* entity_8;
    int32_t temp_6;
    data_15 = FX_FragmentSimulate_16(data_4, 1);
    char* item_2a4_2 = "LOCAL:common/sprites/sprites.res";
    *(g_57babc + 0xe8) = Resource_Load(data_15, temp_6, entity_8, nullptr);
    Level_LocalCommonSprites();
    int32_t data_17;
    void* entity_9;
    int32_t temp_8;
    data_17 = FX_FragmentSimulate_16(data_4, 1);
    char* item_2b4_1 = "LOCAL:common/textures/textures.res";
    *(g_57babc + 0xec) = Resource_Load(data_17, temp_8, entity_9, nullptr);
    Level_LocalCommonTextures();
    FX_FragmentSimulate_16(data_4, 1);
    AI_ComputerComputerRes();
    FX_FragmentSimulate_16(data_4, 1);
    FX_LanguageMessagesRes();
    FX_FragmentSimulate_16(data_4, 1);
    *(g_57babc + 0x44) = GameScreen_OnEvent(Game_GetScriptContext());
    *(g_57babc + 0x4c) = Script_ParseEnumString(Level_LoadLevel_6());
    FX_FragmentSimulate_16(data_4, 1);
    SoundSys_StopSoundSample_4(0);
    SoundSys_PlaySoundSample_5(context, "LOCAL:common/sounds/");
    SoundSys_PlaySoundSample_5(context, "MISSION:sounds/");
    int32_t item_290_4 = Level_StartMission_4();
    struct status_msg* data_25 = CameraControlTask_Process(Level_LoadLevel_6(), g_57babc + 0x60);
    *(g_57babc + 0x54) = QTask_LinkEventHandler_2(data_25);
    uint32_t data_27 = Level_StartMission_4();
    CameraControlTask_Action(Level_LoadLevel_6(), data_25, data_27);
    *(g_57babc + 0x48) = 0;
    Render_DrawRigidMesh_5(30.0f);

    if (g_c28c61)
    {
        int32_t data_31 = 0;

        if (g_c28f80)
            data_31 = 3;

        int32_t item_2b0_3 = 0x3dcccccd;
        void* data_32 = Config_SetGamma();
        InputPort_Action(0, Config_SetResolution(), data_32, data_31, 0x3dcccccd, 0x3d162fc9, 0x3d162fc9,
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
    FX_FragmentSimulate_16(data_4, 1);

    for (int32_t i = 0; i < 6; i += 1)
        DynObj_CreateMagicObject_12(Level_StartMission_4(), i);

    int32_t* data_39 = File_Open(".\mpzm.afp", "rb");

    if (data_39)
    {
        Camera_ApplyLineFilter_4(data_39, nullptr, FILE_BEGIN);
        int32_t entity_17 = 0;
        entity_17 = Camera_SetFieldOfView_4(data_39) == 0x5e;
        Camera_UpdateTransform_4(data_39);

        if (entity_17)
        {
            *(g_57babc + 0xf8) = 0;
            *(g_57babc + 0xf0) = Display_CheckCapabilities_12("game_music");
            *(g_57babc + 0xf4) = Display_RestoreDevice_12("game_music");
            *(g_57babc + 0xfc) = 0x30;
            Display_SetGammaRamp_12(g_57babc + 0x100);
            Sys_DispatchOpcode_2();
            FX_FireBallUpdate_16(data_4);
            return Game_TimingEnd();
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000001");

    while (true)
        /* nop */
}
