#include "00404010-GO_GfxDevice.h"
/* 0x00404010 GO_GfxDevice full linked: callers=0 callees=2 */
int32_t GO_GfxDevice(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GfxDevice(int deviceIndex)
// Note: Sets render-device (D3D device/GUID) selection for the current profile.
// Param: deviceIndex = index into the render-device list filled by
// Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.
{
    char* var_24 = 0x100;
    int32_t eax_3 = g_bc2380 * 0x45;
    int32_t var_2c = 0;
    float var_30 = a2;
    sub_4b8a80(var_30, var_2c, eax_3 * 0x14 + &g_bc1e43, var_24);
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
