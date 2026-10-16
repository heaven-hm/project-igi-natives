/* LOGIC NOTE (GO_GfxDevice @ 0x00404010)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : , sub_
   called by : none
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "GO_GfxDevice.h"

int32_t GO_GfxDevice(int32_t arg1, float arg2 @ 0xc)

// Sig: int GO_GfxDevice(int deviceIndex)
// Note: Sets render-device (D3D device/GUID) selection for the current profile.
// Param: deviceIndex = index into the render-device list filled by
// Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.
{
    char* v_24 = 0x100;
    int32_t result_3 = data_bc2380 * 0x45;
    int32_t v_2c = 0;
    float v_30 = arg2;
    Sys_ResolveSymbol_23(v_30, v_2c, result_3 * 0x14 + &data_bc1e43, v_24);
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &data_567c74;
    __builtin_memcpy(arg1, &v_18, 0x18);
    return arg1;
}
