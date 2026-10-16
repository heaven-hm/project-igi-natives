#include "0049B430-Display_OpenDevice_19.h"
/* 0x0049b430 Display_OpenDevice_19 full linked: callers=1 callees=2 */
void* sub_49b430(void* a1, int32_t a2, int32_t a3)

{
    void* ecx = a1 * 0x1f5;

    if (*((ecx << 3) + &g_721560) + a3 > 0xffff)
        sub_49b4b0(a1);

    *((ecx << 3) + &g_7205c0 + (*((ecx << 3) + &g_721564) << 2)) = a2;
    void* result = *((ecx << 3) + &g_721564) + 1;
    int32_t edx_3 = *((ecx << 3) + &g_721560) + a3;
    *((ecx << 3) + &g_721564) = result;
    *((ecx << 3) + &g_721560) = edx_3;

    if (result != 0x3e8)
        return result;

    return sub_49b4b0(a1);
}
