// Original IGI.EXE function: Light_ComputeDirectionalLight_5 (VA 0x005253D0; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_5.h"
int32_t* Light_ComputeDirectionalLight_5(int32_t* a1)

{
    int32_t* result = a1;
    void* ctxB = *result;

    if (ctxB)
    {
        result = *(ctxB + 0x2c);
        int32_t srcS1 = 0;

        if (result > 0)
        {
            void* dstD1 = ctxB + 0x3c;

            do
            {
                Light_RenderLensflare_5(dstD1);
                result = *(ctxB + 0x2c);
                srcS1 += 1;
                dstD1 += 0x2c;
            } while (srcS1 < result);
        }
    }

    return result;
}
