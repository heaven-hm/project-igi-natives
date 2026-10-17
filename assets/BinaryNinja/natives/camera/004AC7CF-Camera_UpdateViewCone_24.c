// Original IGI.EXE function: Camera_UpdateViewCone_24 (VA 0x004AC7CF; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_24.h"
int32_t Camera_UpdateViewCone_24(int32_t context, int32_t param_2)

{
    int32_t f0 = param_2 / 0x20;
    int32_t* dest_val = context + (f0 << 2);
    int32_t i = Camera_ResetMatrix_28(*dest_val, 1 << ((0x1f - param_2 % 0x20) & 0x1f), dest_val);
    int32_t source_1 = f0 - 1;

    if (f0 - 1 >= 0)
    {
        int32_t* dest_1 = context + (source_1 << 2);

        while (i)
        {
            i = Camera_ResetMatrix_28(*dest_1, 1, dest_1);
            source_1 -= 1;
            dest_1 -= 4;

            if (source_1 < 0)
                break;
        }
    }

    return i;
}
