#include "004955F0-Display_CheckCapabilities_8.h"
/* 0x004955f0 Display_CheckCapabilities_8 full linked: callers=1 callees=0 */
int32_t* sub_4955f0(void* a1)

{
    int32_t i_1 = 0x65;
    int32_t* result = a1 + 4;
    int32_t i;

    do
    {
        result[-1] = result;
        result[1] = &result[-1];
        *result = 0;
        result = &result[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
