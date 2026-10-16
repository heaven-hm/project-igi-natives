#include "004F19C0-Script_UnableToAllocatePara.h"
/* 0x004f19c0 Script_UnableToAllocatePara full linked: callers=34 callees=2 */
int32_t sub_4f19c0(int32_t a1, int32_t a2)

{
    int32_t result = 0;
    int32_t* ecx = &g_a75928;

    while (*ecx)
    {
        ecx = &ecx[0x13];
        result += 1;

        if (ecx >= &g_a76c28)
        {
            Error_Show("Unable to allocate parameter type");

            while (true)
                /* nop */
        }
    }

    if (a2 != 0xffffffff)
        memcpy(result * 0x4c + &g_a758e0, a2 * 0x4c + &g_a758e0, 0x4c);

    int32_t ecx_7 = result * 0x4c;
    *(ecx_7 + &g_a75928) = 1;
    *(ecx_7 + &g_a758e0) = a1;
    *(ecx_7 + &g_a758e4) = a2;
    return result;
}
