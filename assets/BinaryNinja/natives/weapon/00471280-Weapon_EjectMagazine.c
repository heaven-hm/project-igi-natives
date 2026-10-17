// Original IGI.EXE function: Weapon_EjectMagazine (VA 0x00471280; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_EjectMagazine.h"
int32_t Weapon_EjectMagazine(void* context, int32_t param_2)

{
    void* data_val = context + 0xe00;
    int32_t i_1 = 0x40;
    int32_t i;

    do
    {
        memcpy(data_val + 0xe00, 0x534038, 0x38);
        memcpy(data_val, 0x534038, 0x38);
        void* dest_3 = data_val - 0xe00;
        data_val += 0x38;
        i = i_1;
        i_1 -= 1;
        memcpy(dest_3, 0x534038, 0x38);
    } while (i != 1);
    *(context + 0x2a00) = param_2;
    return param_2;
}
