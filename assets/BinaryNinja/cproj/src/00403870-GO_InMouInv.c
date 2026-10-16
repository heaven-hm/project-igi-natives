#include "gi_platform.h"
#include "00403870-GO_InMouInv.h"
int32_t GO_InMouInv(int32_t a1, float a2 )

// Sig: int GO_InMouInv(int invert)
// Note: Toggles inverted mouse-look for the current profile. Param: invert = 1
// invert Y axis, 0 normal. Use in config scripts. Returns 1.
{
    int32_t valA1 = Script_GetArg(a2, 0);
    int32_t tmpD = g_bc2380;
    int32_t v_18 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    char* v_8 = &g_567c74;
    *(tmpD * 0x564 + &g_bc235c) = valA1;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
