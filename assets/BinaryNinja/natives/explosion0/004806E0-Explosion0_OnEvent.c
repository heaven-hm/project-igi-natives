#include "Explosion0_OnEvent.h"
int32_t Explosion0_OnEvent(int32_t a1)

{
    int32_t* srcS = a1;
    int32_t valA = srcS[0x3f];

    if (valA > 0)
    {
        srcS[0x3f] = valA - 1;
        return valA - 1;
    }

    if (!Render_ComputeNormals_2(*srcS[0x1b]))
        srcS[0x3c] = 0xffffffff;
    else
    {
        int32_t valA5 = Render_SetupLighting_2(*srcS[0x1b], 0);
        int32_t v_8_1 = valA5;
        v_8_1 = (srcS[0x3e] - srcS[0x3d]) / srcS[0x42] * v_8_1;
        srcS[0x3c] = v_8_1 % valA5;
    }

    int32_t valA10 = srcS[0x3d];

    if (!valA10)
        return QTask_FindType(srcS);

    srcS[0x3d] = valA10 - 1;
    return valA10 - 1;
}
