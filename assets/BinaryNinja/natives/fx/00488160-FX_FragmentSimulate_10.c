// Original IGI.EXE function: FX_FragmentSimulate_10 (VA 0x00488160; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_10.h"
int32_t FX_FragmentSimulate_10(void* a1)

{
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        do
        {
            int32_t* valA1 = *i;
            int32_t* i_2 = i;

            if (!valA1)
                i = nullptr;
            else
            {
                int32_t srcS = *valA1;
                int32_t srcS1 = -(srcS);
                i = (srcS1 - srcS1) & valA1;
            }

            FX_FragmentSimulate_10(i_2);
        } while (i);
    }

    int32_t* valA2 = *(a1 + 0x24);

    if (valA2)
    {
        int32_t i_1 = 0;

        if (*valA2 > 0)
        {
            do
            {
                Sys_ExecuteBytecode_2(*(*(a1 + 0x28) + (i_1 << 2)));
                *(*(a1 + 0x28) + (i_1 << 2)) = 0;
                i_1 += 1;
            } while (i_1 < **(a1 + 0x24));
        }

        Sys_ExecuteBytecode_2(*(a1 + 0x28));
        *(a1 + 0x28) = 0;
    }

    return Sys_ExecuteBytecode_2(a1);
}
