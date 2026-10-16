#include "00496470-Display_CheckCapabilities_10.h"
/* 0x00496470 Display_CheckCapabilities_10 full linked: callers=2 callees=0 */
int32_t* sub_496470(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t* result = *(a1 + a2 * 0xc);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[3] == a3)
            return result;

        result = i;
    }

    return nullptr;
}
