#include "00516770-Terrain_RenderWaterSurface_3.h"
/* 0x00516770 Terrain_RenderWaterSurface_3 full linked: callers=1 callees=5 */
char* sub_516770(char* a1)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    uint32_t eax = g_9361e4;
    char* var_8_1 = nullptr;
    char* result;

    if (eax)
    {
        int32_t eax_1;
        char* ecx_2;
        eax_1 = sub_4ad4d3(eax, 0x100, a1, 0xffffffff, nullptr, 0, 0, 1);

        if (eax_1)
        {
            PSTR eax_2 = sub_4aa670(eax_1);
            ecx_2 = eax_1;
            var_8_1 = eax_2;

            if (eax_2)
            {
                int32_t eax_3;
                eax_3 = sub_4ad4d3(g_9361e4, 0x100, a1, 0xffffffff, eax_2, eax_1, 0, 1);

                if (eax_3)
                {
                    sub_4aa580(a1, var_8_1);
                    ecx_2 = var_8_1;
                }
            }
        }

        char* var_18_3 = var_8_1;
        sub_4a6a50(ecx_2);
        result = a1;
    }
    else
    {
        result = a1;
        char* result_1 = result;

        if (*result)
        {
            do
            {
                char ecx_1 = *result_1;

                if (ecx_1 >= 0x41 && ecx_1 <= 0x5a)
                    *result_1 = ecx_1 + 0x20;

                result_1 = &result_1[1];
            } while (*result_1);
        }
    }

    return result;
}
