#include "00403950-GO_GfxDisp.h"
/* 0x00403950 GO_GfxDisp full linked: callers=0 callees=4 */
int32_t GO_GfxDisp(int32_t a1, float a2 @ 0xc)

// Sig: int GO_GfxDisp(int displayMode)
// Note: Sets display-mode selection for the current profile. Param: displayMode
// = mode index from the retail display list (see Display_GetActiveMode/display
// table). Use in config scripts. igi.exe registers it with argc=3 at its site;
// the extra args go unused by the setter itself.
{
    int32_t eax = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_2c = 1;
    float var_30 = a2;
    *(edx * 0x564 + &g_bc1e30) = eax;
    *(g_bc2380 * 0x564 + &g_bc1e34) = sub_4b8a20(var_30, var_2c);
    int32_t eax_2 = sub_4b8a20(a2, 2);
    int32_t edx_3 = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(edx_3 * 0x564 + &g_bc1e38) = eax_2;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
