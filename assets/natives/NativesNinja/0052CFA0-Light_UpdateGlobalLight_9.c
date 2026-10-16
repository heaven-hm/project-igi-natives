#include "0052CFA0-Light_UpdateGlobalLight_9.h"
/* 0x0052cfa0 Light_UpdateGlobalLight_9 full linked: callers=1 callees=0 */
int16_t* sub_52cfa0(void* a1)

{
    int16_t edx = 0x13;
    int16_t* result = a1 + 0x54;

    for (int32_t i = 0; i < 0x14; i += 1)
    {
        *result = 0;
        result[1] = edx + 1;
        result[2] = i + 1;
        result = &result[3];
        edx = i;
    }

    for (int32_t i_1 = 0; i_1 < 0xf; i_1 += 1)
    {
        int32_t j = 0;
        int16_t esi_1 = 0x13;
        int16_t edx_4 = i_1 * 0x14;

        do
        {
            *result = j + edx_4 + 1;
            result[1] = esi_1 + edx_4 + 1;
            result[2] = j + edx_4 + 0x15;
            result[3] = esi_1 + edx_4 + 1;
            result[4] = esi_1 + edx_4 + 0x15;
            esi_1 = j;
            result[5] = j + edx_4 + 0x15;
            result = &result[6];
            j += 1;
        } while (j < 0x14);
    }

    return result;
}
