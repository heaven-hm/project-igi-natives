// Original IGI.EXE function: GO_GfxDevice (VA 0x00404010; static CFG gate FAIL, CFG score 0.833).
#include "GO_GfxDevice.h"
int32_t GO_GfxDevice(int32_t context, float param_2 )

// Sig: int GO_GfxDevice(int deviceIndex)
// Note: Sets render-device (D3D device/GUID) selection for the current profile.
// Param: deviceIndex = index into the render-device list filled by
// Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.
{
    char* item_24 = 0x100;
    int32_t data_3 = g_bc2380 * 0x45;
    int32_t item_2c = 0;
    float item_30 = param_2;
    Sys_ResolveSymbol_23(item_30, item_2c, data_3 * 0x14 + &g_bc1e43, item_24);
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
