#include "00496D80-Display_CreateSurface_11.h"
/* 0x00496d80 Display_CreateSurface_11 full linked: callers=1 callees=2 */
int32_t sub_496d80(int32_t a1, void* a2, int32_t a3, int32_t a4)

{
    if (a3 <= 0)
        return a3;

    Resource_Unpack(*(a2 + 0x18), a1, a3 * a4);
    return sub_4b17c0(*(a2 + 0x18));
}
