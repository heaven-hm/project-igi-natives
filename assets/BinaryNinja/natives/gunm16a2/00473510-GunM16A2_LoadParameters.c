// Original IGI.EXE function: GunM16A2_LoadParameters (VA 0x00473510; static CFG gate PASS, CFG score 1.000).
#include "GunM16A2_LoadParameters.h"
struct status_msg* GunM16A2_LoadParameters(void* a1, void* a2)

{
    float* ctxB = *(*(a1 + 0x128) + 0x6e4);
    (*(((AI_AlertAllies_17() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(a1, a2);
    struct status_msg* result = *(a2 + 0x18);

    if (!result)
        return result;

    float v_28[0xa];
    WeaponType_SetCategory(&v_28, a1 + 0x168);
    long double x87_r7_2 = *ctxB * 4096000f;
    float valA6 = *(a1 + 0x16c);
    float v_34 = *(a1 + 0x168);
    float objC1 = *(a1 + 0x170);
    v_34 = x87_r7_2 * v_34 * 9.25925906e-06f;
    float v_30_2 = x87_r7_2 * valA6 * 9.25925906e-06f;
    float v_2c_2 = x87_r7_2 * objC1 * 9.25925906e-06f;
    struct status_msg* valA8 = SoundSys_SetMasterVolume_7(Script_FormatString(), "m203_launch_1");

    if (valA8)
        SoundSys_StopSoundSample_7(valA8, a1 + 0x150);

    return Weapon_EjectMagazine_4(Script_FormatString(), a1, *(a1 + 0x14), a1 + 0x150, &v_28, &v_34, &ctxB[3],
        ctxB[1], ctxB[2]);
}
