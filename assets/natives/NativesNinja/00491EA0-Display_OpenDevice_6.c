#include "00491EA0-Display_OpenDevice_6.h"
/* 0x00491ea0 Display_OpenDevice_6 full linked: callers=1 callees=0 */
int32_t sub_491ea0(int32_t a1, int32_t a2)

{
    int32_t var_c = a1;
    int32_t result;
    int32_t* var_8 = &result;
    int32_t var_4 = a2;
    int32_t ecx_2 = *((g_542334 << 2) + &g_a94e84);
    result = 0;

    if (!ecx_2)
        return 0;

    ecx_2(&var_c);
    return result;
}
