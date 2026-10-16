#include "00496250-Display_SyncVSync_10.h"
/* 0x00496250 Display_SyncVSync_10 full linked: callers=1 callees=1 */
int32_t sub_496250(int32_t a1, int32_t a2, int32_t a3, void** a4)

{
    sub_4af8f0(a1 + a2 * 0xc, a4);
    a4[2] = a2;
    a4[3] = a3;
    return a3;
}
