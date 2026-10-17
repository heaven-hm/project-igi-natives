// Original IGI.EXE function: Script_UnableToAllocatePara (VA 0x004F19C0; static CFG gate FAIL, CFG score 0.833).
#include "Script_UnableToAllocatePara.h"
int32_t Script_UnableToAllocatePara(int32_t context, int32_t param_2)

{
    int32_t result = 0;
    int32_t* entity_val = &g_a75928;

    while (*entity_val)
    {
        entity_val = &entity_val[0x13];
        result += 1;

        if (entity_val >= &g_a76c28)
        {
            Error_Show("Unable to allocate parameter type");

            while (true)
                /* nop */
        }
    }

    if (param_2 != 0xffffffff)
        memcpy(result * 0x4c + &g_a758e0, param_2 * 0x4c + &g_a758e0, 0x4c);

    int32_t entity_7 = result * 0x4c;
    *(entity_7 + &g_a75928) = 1;
    *(entity_7 + &g_a758e0) = context;
    *(entity_7 + &g_a758e4) = param_2;
    return result;
}
