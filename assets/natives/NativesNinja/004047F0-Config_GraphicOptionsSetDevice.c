#include "004047F0-Config_GraphicOptionsSetDevice.h"
/* 0x004047f0 Config_GraphicOptionsSetDevice full linked: callers=0 callees=8 */
int32_t Config_GraphicOptionsSetDevice(int32_t a1, float a2 @ 0xc)

// Sig: void Config_GraphicOptionsSetDevice(int deviceIndex)
// Note: Applies a render device to the active profile. Param: deviceIndex =
// index from Config_FillRenderDeviceListBox. Use in video-options screen
// script.
{
    int32_t ebx_3 = sub_4b8a20(a2, 0) * 0x404;
    int32_t edi = ebx_3 + 0x567d18;
    int32_t i = 0xffffffff;
    void* edx_1 = Config_GetActiveGraphicOptions() + 0x113;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(edx_1, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_3, esi_1, ecx & 3);
    void* edi_4 = ebx_3 + &g_567c98;
    int32_t i_1 = 0xffffffff;
    void* edx_3 = Config_GetActiveGraphicOptions() + 0x13;

    while (i_1)
    {
        bool cond:1_1 = 0 != *edi_4;
        edi_4 += 1;
        i_1 -= 1;

        if (!cond:1_1)
            break;
    }

    int32_t ecx_4 = ~i_1;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t esi_3;
    int32_t edi_7;
    edi_7 = memcpy(edx_3, edi_4 - ecx_4, ecx_4 & 0xfffffffc);
    int32_t var_c = 0;
    memcpy(edi_7, esi_3, ecx_4 & 3);
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
