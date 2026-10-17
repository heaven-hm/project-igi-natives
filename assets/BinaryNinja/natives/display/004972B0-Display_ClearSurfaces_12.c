// Original IGI.EXE function: Display_ClearSurfaces_12 (VA 0x004972B0; static CFG gate PASS, CFG score 1.000).
#include "Display_ClearSurfaces_12.h"
int32_t Display_ClearSurfaces_12(int32_t context)

{
    int32_t source_val = context;
    int32_t f0 = *(*(source_val + 0xc) + 0x1c) / g_limit_b;
    int32_t* data_4 = *(source_val + 0x10);
    (*(*data_4 + 0x10))(data_4, &context, 0);
    void* entity_1 = *(source_val + 0xc);
    int32_t data_7;
    int32_t temp_2;
    temp_2 = HIGHD(*(entity_1 + 0x18) * *(entity_1 + 0x16));
    data_7 = LOWD(*(entity_1 + 0x18) * *(entity_1 + 0x16));
    int32_t f0_1 = context / ((data_7 + (temp_2 & 7)) >> 3);
    int32_t result = *(source_val + 0x3c);
    *(source_val + 0x20) = f0_1;

    if (result == 1 && g_c28c5c > *(source_val + 0x2c))
    {
        *(source_val + 0x3c) = 2;
        result = 0;
        return result;
    }

    if (result && result != 1)
    {
    label_49732b:
        result = 0;
        return result;
    }

    int32_t context_2 = *(source_val + 0x28);
    int32_t temp_11;

    if (f0_1 <= context_2)
        temp_11 = context_2 - f0_1;
    else
    {
        int32_t data_14;
        int32_t temp_7;
        temp_7 = HIGHD(0x10624dd3 * *(entity_1 + 0x1c) * 0xfa0);
        data_14 = LOWD(0x10624dd3 * *(entity_1 + 0x1c) * 0xfa0);
        int32_t temp_8 = temp_7 >> 6;
        temp_11 = temp_8 + (temp_8 >> 0x1f) - f0_1 + context_2;
    }

    result = (*(source_val + 0x34) - temp_11) / f0;

    for (int32_t i = result; i > 0; i -= 1)
    {
        Display_RestoreDevice_11(source_val, f0);
        result = *(source_val + 0x3c);

        if (result == 0xffffffff)
            goto label_49732b;
    }

    result = 1;
    return result;
}
