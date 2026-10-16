#include "00415B30-Level_Start.h"
/* 0x00415b30 Level_Start full linked: callers=0 callees=89 */
int32_t Level_Start(void* a1)

// Sig: void Level_Start(int p1)
// Note: Start new level, Params:  p1: 0057BABC
{
    Frames_Set(0x1e);
    Game_TimingBegin();
    void* eax_1 = sub_485170(g_539560);

    if (!eax_1)
    {
        int32_t var_290 = g_539560;
        Error_Show("The mission ID %d does not exist.");

        while (true)
            /* nop */

        return;
    }

    void* var_290_1 = eax_1 + 0x144;
    Game_DataSymbolLoad(0x57b568, "LOCAL:%s/");
    sub_4b12f0("MISSION:", 0x57b568);
    g_57babc = a1;
    sub_453270();
    Camera_ResetFrameCounters(g_57babc + 0x60);
    Config_SetResolution_2(Level_LoadObjects_2());
    int32_t* eax_4 = LoadingScreen_Show(9);
    *(g_57babc + 0x20) = sub_4c5b20(0xdac);
    *(g_57babc + 0xe4) = 0;
    HumanPlayer_UpdateHealth(*(g_57babc + 0x20));
    void* eax_7 = g_57babc;
    g_a44344 = *(eax_7 + 0x20);
    int32_t var_2b4 = *(eax_7 + 0x20);
    int32_t var_2b8 = 0x57b568;
    void var_280;
    Game_DataSymbolLoad(&var_280, "%sterrain/terrain");
    sub_4c5f00(*(g_57babc + 0x20), &var_280);
    sub_4c6240(*(g_57babc + 0x20), &var_280);
    sub_4b2610(0);
    sub_4b25b0(0x3f800000, 0xdb840);
    sub_4ceea0();
    void* var_29c = eax_1 + 0x244;
    void var_200;
    Game_DataSymbolLoad(&var_200, "LOCAL:%s/");
    sub_4cfbd0(&var_200);
    sub_4cfc00("LOCAL:common/");
    *(g_57babc + 0x24) = sub_4cefa0(eax_1 + 0x444);
    sub_48a620(eax_4, 1);
    void* var_2bc = eax_1 + 0x344;
    void var_100;
    Game_DataSymbolLoad(&var_100, "LOCAL:%s/");
    sub_4cfbd0(&var_100);
    sub_4f0ce0(sub_4cefa0(eax_1 + 0x464));
    sub_48a620(eax_4, 1);
    sub_4b25f0();
    sub_4b2610(0xffffffff);

    if (*((sub_4cea60() << 2) + &g_a94e84))
        (*((sub_4cea60() << 2) + &g_a94e84))(0);

    Sound_Load("LOCAL:common/sounds");
    Sound_Load("MISSION:sounds");
    int32_t eax_15;
    void* ecx_8;
    int32_t edx_6;
    eax_15 = sub_48a620(eax_4, 1);
    char* var_2a4_2 = "LOCAL:common/sprites/sprites.res";
    *(g_57babc + 0xe8) = Resource_Load(eax_15, edx_6, ecx_8, nullptr);
    Level_LocalCommonSprites();
    int32_t eax_17;
    void* ecx_9;
    int32_t edx_8;
    eax_17 = sub_48a620(eax_4, 1);
    char* var_2b4_1 = "LOCAL:common/textures/textures.res";
    *(g_57babc + 0xec) = Resource_Load(eax_17, edx_8, ecx_9, nullptr);
    Level_LocalCommonTextures();
    sub_48a620(eax_4, 1);
    sub_46b070();
    sub_48a620(eax_4, 1);
    sub_4868a0();
    sub_48a620(eax_4, 1);
    *(g_57babc + 0x44) = sub_485300(Game_GetScriptContext());
    *(g_57babc + 0x4c) = sub_4f0cb0(Level_LoadLevel_6());
    sub_48a620(eax_4, 1);
    sub_4e6060(0);
    sub_4e6550(a1, "LOCAL:common/sounds/");
    sub_4e6550(a1, "MISSION:sounds/");
    int32_t var_290_4 = Level_StartMission_4();
    struct status_msg* eax_25 = sub_4e7d40(Level_LoadLevel_6(), g_57babc + 0x60);
    *(g_57babc + 0x54) = QTask_LinkEventHandler_2(eax_25);
    uint32_t eax_27 = Level_StartMission_4();
    sub_4e7d70(Level_LoadLevel_6(), eax_25, eax_27);
    *(g_57babc + 0x48) = 0;
    sub_4d2d30(30f);

    if (g_c28c61)
    {
        int32_t eax_31 = 0;

        if (g_c28f80)
            eax_31 = 3;

        int32_t var_2b0_3 = 0x3dcccccd;
        void* eax_32 = Config_SetGamma();
        sub_4ed5e0(0, Config_SetResolution(), eax_32, eax_31, 0x3dcccccd, 0x3d162fc9, 0x3d162fc9,
            0x3d162fc9, 0x3d162fc9, 0x3dcccccd, 0x3d162fc9, 0x3d162fc9, 0x3dcccccd, 0x3d162fc9,
            0x3d162fc9);
        g_bc20a0 = 1;
    }

    sub_4f80e0(sub_416110);
    Vehicle_UpdateRudder_6(g_57babc + 0x60);
    sub_4edcc0();
    sub_4f65b0(g_57babc + 0x60);
    sub_4f65d0(0x1e);
    sub_4f65c0(sub_485320(*(Level_LoadLevel_6() + 0x44)));
    Level_LoadObjects(0x57b568, 0x1e);
    sub_48a620(eax_4, 1);

    for (int32_t i = 0; i < 6; i += 1)
        sub_4ce830(Level_StartMission_4(), i);

    int32_t* eax_39 = File_Open(".\mpzm.afp", "rb");

    if (eax_39)
    {
        sub_4a52a4(eax_39, nullptr, FILE_BEGIN);
        int32_t ecx_17 = 0;
        ecx_17 = sub_4a528a(eax_39) == 0x5e;
        sub_4a5234(eax_39);

        if (ecx_17)
        {
            *(g_57babc + 0xf8) = 0;
            *(g_57babc + 0xf0) = sub_497450("game_music");
            *(g_57babc + 0xf4) = sub_497410("game_music");
            *(g_57babc + 0xfc) = 0x30;
            sub_4974a0(g_57babc + 0x100);
            sub_4b0d50();
            sub_48a5d0(eax_4);
            return Game_TimingEnd();
        }
    }

    Error_Show("EXCEPTION FAULT: 0x000001");

    while (true)
        /* nop */
}
