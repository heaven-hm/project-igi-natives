// Original IGI.EXE function: HeightMap_LoadParameters (VA 0x00507340; static CFG gate PASS, CFG score 1.000).
#include "HeightMap_LoadParameters.h"
void* HeightMap_LoadParameters(void* a1)

{
    if (!*(a1 + 0xe0))
    {
        void* valA1 = *(a1 + 0xc0);

        if (valA1 != 0xffffffff && !*(valA1 + 0xb81920))
        {
            Sys_ExecuteBytecode_2(*(*(*(a1 + 0x68) + 0xdd0) + valA1 * 0xc));
            *(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc) = 0;
            *(*(*(a1 + 0x68) + 0xdd0) + *(a1 + 0xc0) * 0xc) = 0;
        }

        int32_t valA7 = *(a1 + 0xf8);

        if (valA7 != 0xffffffff)
        {
            int32_t objC6 = g_a7b250;

            if (valA7 != objC6 - 1)
            {
                void* objC7 = *((objC6 << 2) + &g_a7ad0c);
                *((valA7 << 2) + &g_a7ad10) = objC7;
                *(objC7 + 0xf8) = valA7;
            }

            g_a7b250 -= 1;
        }
    }

    return DynObj_RegisterSymbol_9(*(a1 + 0x68), a1);
}
