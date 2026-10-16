#include "gi_platform.h"
#include "00496E00-Display_CloseDevice_12.h"
int32_t Display_CloseDevice_12(int32_t a1, int32_t a2, int32_t a3)

{
    memcpy(&g_5ca160, a1, 0x28);
    memcpy(&g_5ca138, a2, 0x18);
    memcpy(0x676ab8, a3, 0x18);
}
