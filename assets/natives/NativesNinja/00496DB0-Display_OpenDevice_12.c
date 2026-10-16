#include "00496DB0-Display_OpenDevice_12.h"
/* 0x00496db0 Display_OpenDevice_12 full linked: callers=4 callees=1 */
long double sub_496db0(int32_t a1, int32_t a2)

{
    if (!g_6840e9)
        return 0f;

    int32_t* eax_1 = sub_496450(a1, a2);

    if (!eax_1)
        return 0f;

    int32_t var_4 = 0;
    return eax_1[8] / eax_1[7];
}
