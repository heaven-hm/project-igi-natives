#include "004CE530-DynObj_FindSymbol_12.h"
/* 0x004ce530 DynObj_FindSymbol_12 full linked: callers=2 callees=1 */
int16_t* sub_4ce530(int32_t a1, void* a2)

{
    int32_t* esi = a2 + 0xc;
    int32_t i_2 = 8;
    int16_t* result;
    int32_t i;

    do
    {
        result = *esi;

        if (result)
            result = sub_4ce530(a1, result);

        esi = &esi[1];
        i = i_2;
        i_2 -= 1;
    } while (i != 1);

    for (void* i_1 = *(a2 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
    {
        int32_t ecx_1 = 0;
        int32_t esi_1 = 0;
        int32_t j_1 = 0xfe;
        int32_t j;

        do
        {
            int16_t ebx_1 = 0;
            result = a1 + ((ecx_1 + *(a2 + 0x34) * 0xfe) << 1) + 0x118;
            int32_t edx_5 = 0;
            edx_5 = *(i_1 + 0x1c);
            ebx_1 = *(((edx_5 + esi_1) << 2) + &g_a96ae0);
            *result += ebx_1;
            ecx_1 += 1;
            esi_1 += 0x180;
            j = j_1;
            j_1 -= 1;
        } while (j != 1);
    }

    return result;
}
