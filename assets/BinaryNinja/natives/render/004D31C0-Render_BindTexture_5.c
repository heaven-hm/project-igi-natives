// Original IGI.EXE function: Render_BindTexture_5 (VA 0x004D31C0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_5.h"
int32_t Render_BindTexture_5(float* a1, float* a2, int32_t* a3)

{
    int32_t objC = *a3;

    if (objC == 1)
    {
        int32_t* objC1 = a3[1];
        int32_t tmpD = *objC1;

        if (tmpD)
            return tmpD(a1, a2, objC1[4]);
    }
    else
    {
        long double fpu0;

        if (!objC)
            return Render_ComputeNormals_5(fpu0, a1, a2, a3[1]);
    }

    return 0;
}
