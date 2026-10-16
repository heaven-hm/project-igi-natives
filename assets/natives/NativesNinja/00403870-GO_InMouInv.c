#include "00403870-GO_InMouInv.h"
/* 0x00403870 GO_InMouInv full linked: callers=0 callees=2 */
int32_t GO_InMouInv(int32_t a1, float a2 @ 0xc)

// Sig: int GO_InMouInv(int invert)
// Note: Toggles inverted mouse-look for the current profile. Param: invert = 1
// invert Y axis, 0 normal. Use in config scripts. Returns 1.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t edx = g_bc2380;
    int32_t var_18 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char* var_8 = &g_567c74;
    *(edx * 0x564 + &g_bc235c) = eax_1;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
