#include "00499FA0-Display_CheckCapabilities_17.h"
/* 0x00499fa0 Display_CheckCapabilities_17 full linked: callers=2 callees=0 */
int32_t sub_499fa0(void* a1, float a2)

{
    int32_t result = (a2 * -255f) << 0x18;
    *(a1 + 0x56c8) = 0xffffff - result;
    return result;
}
