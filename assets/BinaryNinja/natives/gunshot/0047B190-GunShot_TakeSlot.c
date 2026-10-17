// Original IGI.EXE function: GunShot_TakeSlot (VA 0x0047B190; static CFG gate FAIL, CFG score 0.667).
#include "GunShot_TakeSlot.h"
int32_t GunShot_TakeSlot(void* context, int32_t param_2, int32_t* param_3, void* param_4, int32_t param_5, int32_t param_6)

{
    int32_t dest_val = *(context + 0x94);

    if (dest_val >= 0xf)
    {
        int32_t data_5 = *(context + 0x90) + 1;
        *(context + 0x90) = data_5;
        return data_5;
    }

    int32_t i = 0;
    long double fpu_val_7_1 = *(param_4 + 0x650) * 4096.0f;
    void* entity_val = *(param_4 + 0x658);
    void* data_val = *(param_4 + 0x654);
    int32_t* entity_1 = context + 0xe0;
    int32_t* data_1;

    do
    {
        data_1 = entity_1;

        if (!*entity_1)
            break;

        i += 1;
        entity_1 = &entity_1[0x12];
    } while (i < 0xf);

    *(context + (dest_val << 2) + 0xa4) = data_1;
    *data_1 = 1;
    memcpy(&data_1[2], param_2, 0x18);
    data_1[8] = *param_3;
    data_1[9] = param_3[1];
    int32_t source_2 = param_3[2];
    data_1[0x10] = 0;
    data_1[0xa] = source_2;
    data_1[0xe] = data_val;
    data_1[0xd] = fpu_val_7_1;
    data_1[0xf] = entity_val;
    data_1[0x11] = param_6;
    *(data_1 + 0x41) = 0;
    data_1[0xb] = param_4;
    data_1[0xc] = param_5;
    int32_t data_3 = *(context + 0x90) + 1;
    *(context + 0x94) += 1;
    *(context + 0x90) = data_3;
    return data_3;
}
