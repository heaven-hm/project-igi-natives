// Original IGI.EXE function: HumanPlayer_GrenadeTick1 (VA 0x0040F590; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_GrenadeTick1.h"
struct status_msg* HumanPlayer_GrenadeTick1(void* context, void* param_2)

{
    void* dest_val = *(param_2 + 0x4ec);
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    void* data_2 = HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    struct status_msg* result = *(dest_val + 0x20c);

    if (result == 4)
    {
        void* entity_1 = *(param_2 + 0x4ec);
        *(param_2 + 0x4d8) = 1;
        result = SoundSys_SetMasterVolume_7(entity_1, "grenade_tick_1");
        *(param_2 + 0x4e4) = result;
    }

    result = *(param_2 + 0x4d8);

    if (result)
        *(param_2 + 0x4e0) += 1;

    if (*(context + 8) & 1)
    {
        long double fpu_val_7_1 = *(param_2 + 0x1c8);
        long double f0_1 = 0.0f;
        fpu_val_7_1 - f0_1;
        result = (fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = Bones_PlayAnimation(dest_val + 0x68, 0, *(data_2 + 0x688), 0, 0.0f);
            *(context + 0x14) = HumanPlayer_UpdateStamina_8;
        }
    }

    return result;
}
