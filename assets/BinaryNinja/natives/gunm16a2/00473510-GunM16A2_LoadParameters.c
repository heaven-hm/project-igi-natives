// Original IGI.EXE function: GunM16A2_LoadParameters (VA 0x00473510; static CFG gate PASS, CFG score 1.000).
#include "GunM16A2_LoadParameters.h"
struct status_msg* GunM16A2_LoadParameters(void* context, void* param_2)

{
    float* context_val = *(*(context + 0x128) + 0x6e4);
    (*(((AI_AlertAllies_17() * 0x180 + Weapon_ComputeAccuracy_5()) << 2) + &g_a96ae0))(context, param_2);
    struct status_msg* result = *(param_2 + 0x18);

    if (!result)
        return result;

    float item_28[0xa];
    WeaponType_SetCategory(&item_28, context + 0x168);
    long double fpu_val_7_2 = *context_val * 4096000.0f;
    float data_6 = *(context + 0x16c);
    float item_34 = *(context + 0x168);
    float entity_1 = *(context + 0x170);
    item_34 = fpu_val_7_2 * item_34 * 9.25925906e-06.0f;
    float item_30_2 = fpu_val_7_2 * data_6 * 9.25925906e-06.0f;
    float item_2c_2 = fpu_val_7_2 * entity_1 * 9.25925906e-06.0f;
    struct status_msg* data_8 = SoundSys_SetMasterVolume_7(Script_FormatString(), "m203_launch_1");

    if (data_8)
        SoundSys_StopSoundSample_7(data_8, context + 0x150);

    return Weapon_EjectMagazine_4(Script_FormatString(), context, *(context + 0x14), context + 0x150, &item_28, &item_34, &context_val[3],
        context_val[1], context_val[2]);
}
