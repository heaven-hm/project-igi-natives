// Original IGI.EXE function: Camera_ApplyBandFilter_24 (VA 0x004AC66B; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_24.h"
int32_t Camera_ApplyBandFilter_24(int16_t context) {
    int32_t result = 0;

    if (context & 1)
        result = 0x10;

    if (context & 4)
        result |= 8;

    if (context & 8)
        result |= 4;

    if (context & 0x10)
        result |= 2;

    if (context & 0x20)
        result |= 1;

    if (context & 2)
        result |= 0x80000;

    uint32_t entity_val = context;
    int32_t temp_1 = entity_val & 0xc00;

    if (temp_1)
    {
        if (temp_1 == 0x400)
            *(&result + 1) |= 1;
        else if (temp_1 == 0x800)
            result |= 0x200;
        else if (temp_1 == 0xc00)
            result |= 0x300;
    }

    int32_t entity_1 = entity_val & 0x300;

    if (!entity_1)
        result |= 0x20000;
    else if (entity_1 == 0x200)
        result |= 0x10000;

    if (!(*(&context + 1) & 0x10))
        return result;

    return result | 0x40000;
}
