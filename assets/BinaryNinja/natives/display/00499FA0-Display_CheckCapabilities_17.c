#include "Display_CheckCapabilities_17.h"
int32_t Display_CheckCapabilities_17(void* a1, float a2)

{
    int32_t result = (a2 * -255f) << 0x18;
    *(a1 + 0x56c8) = 0xffffff - result;
    return result;
}
