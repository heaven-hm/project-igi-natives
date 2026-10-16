#include "00497520-Display_CloseDevice_13.h"
/* 0x00497520 Display_CloseDevice_13 full linked: callers=5 callees=0 */
int32_t sub_497520(void* a1, int32_t* a2, int32_t* a3)

{
    *(a1 + 0x30) = *a2;
    *(a1 + 0x34) = a2[1];
    *(a1 + 0x38) = *a3;
    *(a1 + 0x3c) = a3[1];
    int32_t result = g_684110 + 1;
    g_684110 = result;
    return result;
}
