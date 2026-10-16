#include "gi_platform.h"
#include "004045B0-Config_GraphicOptionsGetResolution.h"
int32_t Config_GraphicOptionsGetResolution(int32_t a1, float a2 )

// Sig: int Config_GraphicOptionsGetResolution()
// Note: Returns the active profile's display-mode/resolution index (same index
// space as Config_GraphicOptionsSetResolution). Use in video-options UI scripts
// to preselect the current value.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t flagP = *Config_GetActiveGraphicOptions();
    int32_t objC = *(Config_GetActiveGraphicOptions() + 4);
    int32_t tmpD = *(Config_GetActiveGraphicOptions() + 8);
    int32_t* ctxB = nullptr;
    int32_t valA8 = valA1 * 0x404;
    int32_t dstD = 0x7fffffff;
    int32_t* srcS1 = valA8 + 0x567d98;
    float valA9 = *(valA8 + &g_568098);

    if (valA9 > 0)
    {
        a2 = valA9;
        bool cond_0_1;

        do
        {
            int32_t valA12;
            int32_t tmpD1;
            tmpD1 = HIGHD(srcS1[1] - objC);
            valA12 = LOWD(srcS1[1] - objC);
            int32_t valA15;
            int32_t tmpD2;
            tmpD2 = HIGHD(*srcS1 - flagP);
            valA15 = LOWD(*srcS1 - flagP);
            int32_t valA20;
            int32_t tmpD4;
            tmpD4 = HIGHD(srcS1[2] - tmpD);
            valA20 = LOWD(srcS1[2] - tmpD);
            int32_t objC6 = ((valA12 ^ tmpD1) - tmpD1) * ((valA15 ^ tmpD2) - tmpD2)
                + (((valA20 ^ tmpD4) - tmpD4) << 0x18);

            if (objC6 < dstD)
            {
                ctxB = srcS1;
                dstD = objC6;
            }

            srcS1 = &srcS1[3];
            cond_0_1 = a2 != 1;
            a2 -= 1;
        } while (cond_0_1);
    }

    char* v_8 = &g_567c74;
    float valA30 = (ctxB[2] << 0xd | *ctxB) << 0xd | ctxB[1];
    float v_18 = valA30;
    double v_10 = valA30;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
