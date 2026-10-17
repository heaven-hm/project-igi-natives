// Original IGI.EXE function: Camera_ApplyPostProcess_24 (VA 0x004AC786; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_24.h"
int32_t Camera_ApplyPostProcess_24(int32_t context, int32_t param_2)

{
    int32_t f0 = param_2 / 0x20;

    if (*(context + (f0 << 2)) & ~(0xffffffff << ((0x1f - param_2 % 0x20) & 0x1f)))
        return 0;

    int32_t source_1 = f0 + 1;

    if (source_1 >= 3)
        return 1;

    int32_t* data_5 = context + (source_1 << 2);

    while (true)
    {
        if (*data_5)
            return 0;

        source_1 += 1;
        data_5 = &data_5[1];

        if (source_1 >= 3)
            return 1;
    }
}
