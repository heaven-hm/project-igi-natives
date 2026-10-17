// Original IGI.EXE function: Config_GraphicOptionsSetDevice (VA 0x004047F0; static CFG gate FAIL, CFG score 0.792).
#include "Config_GraphicOptionsSetDevice.h"
int32_t Config_GraphicOptionsSetDevice(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetDevice(int deviceIndex)
// Note: Applies a render device to the active profile. Param: deviceIndex =
// index from Config_FillRenderDeviceListBox. Use in video-options screen
// script.
{
    int32_t ctxB3 = Script_GetArg(a2, 0) * 0x404;
    int32_t dstD = ctxB3 + 0x567d18;
    int32_t i = 0xffffffff;
    void* tmpD1 = Config_GetActiveGraphicOptions() + 0x113;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC = ~i;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(tmpD1, dstD - objC, objC & 0xfffffffc);
    memcpy(dstD3, srcS1, objC & 3);
    void* dstD4 = ctxB3 + &g_567c98;
    int32_t i_1 = 0xffffffff;
    void* tmpD3 = Config_GetActiveGraphicOptions() + 0x13;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD4;
        dstD4 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC4 = ~i_1;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t srcS3;
    int32_t dstD7;
    dstD7 = memcpy(tmpD3, dstD4 - objC4, objC4 & 0xfffffffc);
    int32_t v_c = 0;
    memcpy(dstD7, srcS3, objC4 & 3);
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
