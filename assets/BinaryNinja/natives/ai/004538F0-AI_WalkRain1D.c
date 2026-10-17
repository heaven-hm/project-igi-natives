// Original IGI.EXE function: AI_WalkRain1D (VA 0x004538F0; static CFG gate PASS, CFG score 1.000).
#include "AI_WalkRain1D.h"
void AI_WalkRain1D(void* context)

{
    if (*(context + 0x538) != 0x3f2)
        return;

    uint32_t data_val = Render_DrawSplineMesh_10(context + 0x68, 0);

    if (*(context + 0x53c) != data_val)
        return;

    int32_t dest_1 = *(context + 0x6ec);
    int32_t context_1 = *((*(context + 0x84c) << 2) + &g_53e470);
    int32_t data_2;
    *(context + 0x84c) = COMBINE(0, data_2 + 1) % 0xc;

    if (!dest_1)
        return;

    float item_84_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.5f + 1.0f - 0.200000003f;
    struct status_msg* data_7 = SoundSys_SetMasterVolume_7(Script_FormatString(), (context_1 << 5) + dest_1 + 0x54);

    if (data_7)
    {
        if (AI_MoveToNode_19(context))
            SoundSys_LoadSoundDef_7(data_7, 0xbf800000, 0x3f28f5c3);

        SoundSys_StopSoundSample_7(data_7, context + 0x6a8);
        SoundSys_EvaluateTrigger_7(data_7, item_84_1);
    }

    if (!Level_LoadLevel_7())
        return;

    int32_t item_98_5 = context_1 + 1;
    char item_80[0x80];
    Game_DataSymbolLoad(&item_80, "walk_rain_%1d");
    data_val = SoundSys_SetMasterVolume_7(Script_FormatString(), &item_80);

    if (data_val)
    {
        SoundSys_StopSoundSample_7(data_val, context + 0x6a8);
        SoundSys_EvaluateTrigger_7(data_val, item_84_1);
    }
}
