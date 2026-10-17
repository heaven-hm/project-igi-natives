// Original IGI.EXE function: FX_FragmentSimulate_10 (VA 0x00488160; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_10.h"
int32_t FX_FragmentSimulate_10(void* context)

{
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        do
        {
            int32_t* data_1 = *i;
            int32_t* i_2 = i;

            if (!data_1)
                i = nullptr;
            else
            {
                int32_t source_val = *data_1;
                int32_t source_1 = -(source_val);
                i = (source_1 - source_1) & data_1;
            }

            FX_FragmentSimulate_10(i_2);
        } while (i);
    }

    int32_t* data_2 = *(context + 0x24);

    if (data_2)
    {
        int32_t i_1 = 0;

        if (*data_2 > 0)
        {
            do
            {
                Sys_ExecuteBytecode_2(*(*(context + 0x28) + (i_1 << 2)));
                *(*(context + 0x28) + (i_1 << 2)) = 0;
                i_1 += 1;
            } while (i_1 < **(context + 0x24));
        }

        Sys_ExecuteBytecode_2(*(context + 0x28));
        *(context + 0x28) = 0;
    }

    return Sys_ExecuteBytecode_2(context);
}
