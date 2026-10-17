// Original IGI.EXE function: Light_UpdateGlobalLight_9 (VA 0x0052CFA0; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_9.h"
int16_t* Light_UpdateGlobalLight_9(void* a1)

{
    int16_t tmpD = 0x13;
    int16_t* result = a1 + 0x54;

    for (int32_t i = 0; i < 0x14; i += 1)
    {
        *result = 0;
        result[1] = tmpD + 1;
        result[2] = i + 1;
        result = &result[3];
        tmpD = i;
    }

    for (int32_t i_1 = 0; i_1 < 0xf; i_1 += 1)
    {
        int32_t j = 0;
        int16_t srcS1 = 0x13;
        int16_t tmpD4 = i_1 * 0x14;

        do
        {
            *result = j + tmpD4 + 1;
            result[1] = srcS1 + tmpD4 + 1;
            result[2] = j + tmpD4 + 0x15;
            result[3] = srcS1 + tmpD4 + 1;
            result[4] = srcS1 + tmpD4 + 0x15;
            srcS1 = j;
            result[5] = j + tmpD4 + 0x15;
            result = &result[6];
            j += 1;
        } while (j < 0x14);
    }

    return result;
}
