#include "HumanPlayer_LoadParameters_11.h"
int32_t HumanPlayer_LoadParameters_11(int32_t* a1, int32_t a2)

{
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    (*((AI_UpdateOrders_17() << 2) + &g_a96ae0))(a1, a2);
    DynObj_QtasklistIsFull(g_56e210, a1);
    *(a1 + 0x695) = 1;
    *(a1 + 0x696) = 1;
    *(a1 + 0x697) = 1;
    a1[0x1a6] = 1;
    int32_t v_38_1 = Level_StartMission_4();
    Render_DrawBoneMesh_12(a1, 0, nullptr);
    a1[0x33] = 2;
    FX_DebrisSpawn_14(a1, 2, 0, 0f);
    Render_DrawBoneMesh_7(&a1[0x1e], &a1[0x1a]);
    memcpy(&a1[0x194], a1[0x1c] + 0x4c, 0x14);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), a1, &v_18, a1[0x28], 2);
    AI_005011(a1[0x13b]);
    int32_t i = 0;

    if (g_56df98 > 0)
    {
        int32_t* srcS2 = &g_56df9c;

        do
        {
            Weapon_UpdateRecoil_8(&a1[0xd0], *srcS2, srcS2[1]);
            i += 1;
            srcS2 = &srcS2[2];
        } while (i < g_56df98);
    }

    SoundSys_PlaySoundSample_16(&a1[0xbb], sub_4105c0, &g_5385b4, 0, 2, 0x538710);
    a1[0xce] = 0x538870;
    FX_FireBallUpdate_14(a1, &g_5389f8);
    a1[0x96] = g_56e204;
    SoundSys_PlaySoundSample_16(&a1[0x33e], sub_410700, &g_538678, 1, 0, 0);
    a1[0x351] = 0;
    *(a1 + 0xd45) = 0;
    a1[0x352] = 0xffffffff;
    a1[0x353] = 0xffffffff;
    a1[0x354] = 0xffffffff;
    a1[0x355] = 0;
    a1[0x356] = 0;
    a1[0x357] = 0;
    a1[0x35a] = 0;
    a1[0x35e] = 0;
    *(a1 + 0xd79) = 0;
    *(a1 + 0xd7a) = 0;
    a1[0x363] = 0;
    a1[0x364] = 0;
    *(a1 + 0xd91) = 0;
    *(a1 + 0xd92) = 0;
    *(a1 + 0xd93) = 0;
    a1[0x365] = 0;
    a1[0x367] = 0;
    a1[0x368] = 0;
    *(a1 + 0xda1) = 0;
    __builtin_memset(&a1[0x36f], 0, 0x30);
    return 0xffffffff;
}
