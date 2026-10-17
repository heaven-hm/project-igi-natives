// Original IGI.EXE function: Camera_ResetMatrix_24 (VA 0x004AC825; static CFG gate PASS, CFG score 0.889).
#include "Camera_ResetMatrix_24.h"
int32_t Camera_ResetMatrix_24(int32_t context, int32_t* param_2)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    void* dest_val = param_2 - 1;
    int32_t result = 0;
    int32_t f0 = (dest_val + 1) / 0x20;
    int32_t data_5;
    int32_t temp_1;
    temp_1 = HIGHD(dest_val + 1);
    data_5 = LOWD(dest_val + 1);
    int32_t* data_7 = context + (f0 << 2);

    if (*data_7 & 1 << ((0x1f - COMBINE(temp_1, data_5) % 0x20) & 0x1f) && !Camera_ApplyPostProcess_24(context, dest_val + 2))
        result = Camera_UpdateViewCone_24(context, dest_val);

    *data_7 &= 0xffffffff << ((0x1f - COMBINE(temp_1, data_5) % 0x20) & 0x1f);

    if (f0 + 1 < 3)
        memset(context + ((f0 + 1) << 2), 0, (3 - (f0 + 1)) << 2);

    return result;
}
