#include "004983D0-Display_SyncVSync_16.h"
/* 0x004983d0 Display_SyncVSync_16 full linked: callers=2 callees=1 */
int32_t sub_4983d0(void* a1)

{
    if (*(a1 + 8) == g_bcaaa8)
    {
        g_bcaaa8 = 0;
        g_bcaaa4 = 0;
        g_bcaaa0 = 0;
    }

    int32_t result = sub_4b0d10(*(a1 + 8));
    *(a1 + 8) = 0;
    return result;
}
