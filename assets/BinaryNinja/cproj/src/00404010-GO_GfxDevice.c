#include "gi_platform.h"
#include "00404010-GO_GfxDevice.h"
int32_t GO_GfxDevice(int32_t a1, float a2 )

// Sig: int GO_GfxDevice(int deviceIndex)
// Note: Sets render-device (D3D device/GUID) selection for the current profile.
// Param: deviceIndex = index into the render-device list filled by
// Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.
{
    char* v_24 = 0x100;
    int32_t valA3 = g_bc2380 * 0x45;
    int32_t v_2c = 0;
    float v_30 = a2;
    Sys_ResolveSymbol_23(v_30, v_2c, valA3 * 0x14 + &g_bc1e43, v_24);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
