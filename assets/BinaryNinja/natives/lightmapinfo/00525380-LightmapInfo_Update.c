// Original IGI.EXE function: LightmapInfo_Update (VA 0x00525380; static CFG gate PASS, CFG score 1.000).
#include "LightmapInfo_Update.h"
int32_t* LightmapInfo_Update(void* context)

{
    int32_t* flagP = *(context + 0xdc);
    int32_t* result = flagP[8];

    if (!result)
    {
        result = *(context + 0x6c);
        int32_t i = 0;

        if (result[0xf] > 0)
        {
            int32_t* dest_1 = flagP;

            do
            {
                result = Light_ComputeDirectionalLight_5(dest_1);
                i += 1;
                dest_1 = &dest_1[9];
            } while (i < *(*(context + 0x6c) + 0x3c));
        }

        flagP[8] = 1;
    }

    return result;
}
