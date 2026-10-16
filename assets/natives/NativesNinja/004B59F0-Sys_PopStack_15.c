#include "004B59F0-Sys_PopStack_15.h"
/* 0x004b59f0 Sys_PopStack_15 full linked: callers=8 callees=3 */
int32_t* sub_4b59f0(char* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t* a6)

{
    int32_t eax_10 = g_943e28;
    int32_t* result = *(g_943e24 + (eax_10 << 2)) * g_943e30 + g_943e20;
    *(g_943e34 + result) = eax_10;
    g_943e28 += 1;
    sub_4b5af0(&result[0xe], a1);
    char i = result[0xe];

    if (i)
    {
        char* eax_3 = &result[0xe];

        do
        {
            char ecx_3 = 0x2f;

            if (i != 0x5c)
                ecx_3 = *eax_3;

            *eax_3 = ecx_3;
            i = eax_3[1];
            eax_3 = &eax_3[1];
        } while (i);
    }

    int32_t* result_1 = a3;

    if (!result_1)
        result_1 = result;

    result[0xd] = result_1;
    result[0xa] = a4;
    result[9] = a5;
    result[0xc] = 1;
    result[0xb] = 0;
    result[0x8e] = a2;
    result[8] = sub_4b5b30(&result[0xe]);
    result[1] = 0;
    *result = 0;
    result[3] = 0;
    result[2] = 0;
    result[5] = &result[6];
    result[7] = &result[5];
    result[6] = 0;
    sub_4af8f0(&g_943e38, result);
    result[4] = result;

    if (!a6)
    {
        result[0x8f] = 0;
        result[0x90] = 0;
        return result;
    }

    result[0x8f] = *a6;
    result[0x90] = a6[1];
    return result;
}
