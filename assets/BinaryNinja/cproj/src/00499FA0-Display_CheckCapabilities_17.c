#include "gi_platform.h"
#include "00499FA0-Display_CheckCapabilities_17.h"
int32_t Display_CheckCapabilities_17(void* a1, float a2)

{
    int32_t result = (a2 * -255.0f) << 0x18;
    (*(int32_t*)(uintptr_t)(a1 + 0x56c8)) = 0xffffff - result;
    return result;
}
