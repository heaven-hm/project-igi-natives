#include "Script_UnableToAllocatePara.h"
int32_t Script_UnableToAllocatePara(int32_t a1, int32_t a2)

{
    int32_t result = 0;
    int32_t* objC = &g_a75928;

    while (*objC)
    {
        objC = &objC[0x13];
        result += 1;

        if (objC >= &g_a76c28)
        {
            Error_Show("Unable to allocate parameter type");

            while (true)
                /* nop */
        }
    }

    if (a2 != 0xffffffff)
        memcpy(result * 0x4c + &g_a758e0, a2 * 0x4c + &g_a758e0, 0x4c);

    int32_t objC7 = result * 0x4c;
    *(objC7 + &g_a75928) = 1;
    *(objC7 + &g_a758e0) = a1;
    *(objC7 + &g_a758e4) = a2;
    return result;
}
