#include "Display_CheckCapabilities_18.h"
int32_t Display_CheckCapabilities_18(void* a1, int32_t a2)

{
    *(a1 + 0x98) = a2;
    return a2;
}
