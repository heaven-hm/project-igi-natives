#include "004978B0-Display_ClearSurfaces_14.h"
/* 0x004978b0 Display_ClearSurfaces_14 full linked: callers=11 callees=0 */
int32_t** sub_4978b0(int32_t a1, int32_t* a2)

{
    int32_t ecx = g_bcabe4;
    int32_t eax = a1 * 3;
    int32_t** result = ecx + (eax << 2);
    *a2 = *(ecx + (eax << 2));
    *result = a2;
    return result;
}
