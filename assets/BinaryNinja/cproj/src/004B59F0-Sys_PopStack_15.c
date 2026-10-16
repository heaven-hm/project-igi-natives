#include "gi_platform.h"
#include "004B59F0-Sys_PopStack_15.h"
int32_t* Sys_PopStack_15(char* a1, int32_t a2, int32_t* a3, int32_t a4, int32_t a5, int32_t* a6)

{
    int32_t valA10 = g_943e28;
    int32_t* result = *(g_943e24 + (valA10 << 2)) * g_943e30 + g_943e20;
    *(g_943e34 + result) = valA10;
    g_943e28 += 1;
    Sys_ResolveSymbol_15(&result[0xe], a1);
    char i = result[0xe];

    if (i)
    {
        char* valA3 = &result[0xe];

        do
        {
            char objC3 = 0x2f;

            if (i != 0x5c)
                objC3 = *valA3;

            *valA3 = objC3;
            i = valA3[1];
            valA3 = &valA3[1];
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
    result[8] = Sys_CheckHeap_15(&result[0xe]);
    result[1] = 0;
    *result = 0;
    result[3] = 0;
    result[2] = 0;
    result[5] = &result[6];
    result[7] = &result[5];
    result[6] = 0;
    Camera_SetFieldOfView_33(&g_943e38, result);
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
