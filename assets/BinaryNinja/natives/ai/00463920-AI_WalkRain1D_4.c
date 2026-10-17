// Original IGI.EXE function: AI_WalkRain1D_4 (VA 0x00463920; static CFG gate PASS, CFG score 1.000).
#include "AI_WalkRain1D_4.h"
void AI_WalkRain1D_4(void* context)

{
    if (*(context + 0x538) != 0x3f2)
        return;

    uint32_t data_val = Render_DrawSplineMesh_10(context + 0x68, 0);

    if (*(context + 0x53c) != data_val || !*(context + 0x6f8))
        return;

    void* context_1 = *(context + 0x6ec);
    int32_t flagP1 = *((*(context + 0x84c) << 2) + &g_53f318);
    int32_t data_2;
    *(context + 0x84c) = COMBINE(0, data_2 + 1) % 0xc;

    if (!context_1)
        return;

    float item_a0_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.5f + 1.0f - 0.200000003f;
    struct status_msg* data_7 = SoundSys_SetMasterVolume_7(Script_FormatString(), (flagP1 << 5) + context_1 + 0x54);

    if (data_7)
    {
        if (AI_MoveToNode_19(context))
            SoundSys_LoadSoundDef_7(data_7, 0xbf800000, 0x3f28f5c3);

        SoundSys_StopSoundSample_7(data_7, context + 0x6a8);
        SoundSys_EvaluateTrigger_7(data_7, item_a0_1);
    }

    if (Level_LoadLevel_7())
    {
        int32_t item_b4_6 = flagP1 + 1;
        char item_80[0x80];
        Game_DataSymbolLoad(&item_80, "walk_rain_%1d");
        struct status_msg* data_11 = SoundSys_SetMasterVolume_7(Script_FormatString(), &item_80);

        if (data_11)
        {
            SoundSys_StopSoundSample_7(data_11, context + 0x6a8);
            SoundSys_EvaluateTrigger_7(data_11, item_a0_1);
        }
    }

    if (AI_MoveToNode_19(context))
        return;

    long double fpu_val_7_6 = *(context_1 + 0x50) * 4096.0f;
    int32_t entity_3 = *(context + 0xfc);
    int32_t item_9c = 0xa;
    int32_t item_98_1 = entity_3;
    float item_90_1 = fpu_val_7_6;
    int32_t item_94_1 = 0x46;
    void* item_8c_1 = context + 0x6a8;
    void* item_88_1 = context;
    void* item_84_1 = context;
    AI_EventBroadcast(&item_9c);
}
