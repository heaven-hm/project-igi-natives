// Original IGI.EXE function: LightmapInfo_Update (VA 0x00525380; static CFG gate PASS, CFG score 1.000).
#include "LightmapInfo_Update.h"
int32_t* LightmapInfo_Update(void* a1)

{
    int32_t* flagP = *(a1 + 0xdc);
    int32_t* result = flagP[8];

    if (!result)
    {
        result = *(a1 + 0x6c);
        int32_t i = 0;

        if (result[0xf] > 0)
        {
            int32_t* dstD1 = flagP;

            do
            {
                result = Light_ComputeDirectionalLight_5(dstD1);
                i += 1;
                dstD1 = &dstD1[9];
            } while (i < *(*(a1 + 0x6c) + 0x3c));
        }

        flagP[8] = 1;
    }

    return result;
}
