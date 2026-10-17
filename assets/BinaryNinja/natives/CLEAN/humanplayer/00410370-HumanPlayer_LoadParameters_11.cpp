// IGI native provenance: HumanPlayer_LoadParameters_11 - 0x00410370 - CFG score 93.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410370-HumanPlayer_LoadParameters_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters_11.h"
int32_t HumanPlayer_LoadParameters_11(int32_t* context, int32_t param_2)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    (*((AI_UpdateOrders_17() << 2) + &g_a96ae0))(context, param_2);
    DynObj_QtasklistIsFull(g_56e210, context);
    *(context + 0x695) = 1;
    *(context + 0x696) = 1;
    *(context + 0x697) = 1;
    context[0x1a6] = 1;
    int32_t item_38_1 = Level_StartMission_4();
    Render_DrawBoneMesh_12(context, 0, nullptr);
    context[0x33] = 2;
    FX_DebrisSpawn_14(context, 2, 0, 0.0f);
    Render_DrawBoneMesh_7(&context[0x1e], &context[0x1a]);
    memcpy(&context[0x194], context[0x1c] + 0x4c, 0x14);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_18, context[0x28], 2);
    AI_005011(context[0x13b]);
    int32_t i = 0;

    if (g_56df98 > 0)
    {
        int32_t* source_2 = &g_56df9c;

        do
        {
            Weapon_UpdateRecoil_8(&context[0xd0], *source_2, source_2[1]);
            i += 1;
            source_2 = &source_2[2];
        } while (i < g_56df98);
    }

    SoundSys_PlaySoundSample_16(&context[0xbb], sub_4105c0, &g_5385b4, 0, 2, 0x538710);
    context[0xce] = 0x538870;
    FX_FireBallUpdate_14(context, &g_5389f8);
    context[0x96] = g_56e204;
    SoundSys_PlaySoundSample_16(&context[0x33e], sub_410700, &g_538678, 1, 0, 0);
    context[0x351] = 0;
    *(context + 0xd45) = 0;
    context[0x352] = 0xffffffff;
    context[0x353] = 0xffffffff;
    context[0x354] = 0xffffffff;
    context[0x355] = 0;
    context[0x356] = 0;
    context[0x357] = 0;
    context[0x35a] = 0;
    context[0x35e] = 0;
    *(context + 0xd79) = 0;
    *(context + 0xd7a) = 0;
    context[0x363] = 0;
    context[0x364] = 0;
    *(context + 0xd91) = 0;
    *(context + 0xd92) = 0;
    *(context + 0xd93) = 0;
    context[0x365] = 0;
    context[0x367] = 0;
    context[0x368] = 0;
    *(context + 0xda1) = 0;
    memset(&context[0x36f], 0, 0x30);
    return 0xffffffff;
}
