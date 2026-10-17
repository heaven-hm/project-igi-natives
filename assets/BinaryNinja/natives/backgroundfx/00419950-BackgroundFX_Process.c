// Original IGI.EXE function: BackgroundFX_Process (VA 0x00419950; static CFG gate PASS, CFG score 1.000).
#include "BackgroundFX_Process.h"
int32_t BackgroundFX_Process(int32_t* a1, float* a2)

{
    int32_t* valA = *a1;

    if (valA)
        Menu_HandleInput_5(valA, a2);

    int32_t result = a1[1];
    int32_t dstD = 0;

    if (result > 0)
    {
        void* ctxB1 = nullptr;

        do
        {
            Menu_RequestScreen_6(ctxB1 + a1[2], a2);
            result = a1[1];
            dstD += 1;
            ctxB1 += 0xc;
        } while (dstD < result);
    }

    int32_t* srcS1 = a1[3];

    if (!srcS1)
        return result;

    return Menu_DrawWidget_5(srcS1, a2);
}
