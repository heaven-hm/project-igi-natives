#include "00496E40-Display_SetDisplayMode_12.h"
/* 0x00496e40 Display_SetDisplayMode_12 full linked: callers=10 callees=0 */
int32_t sub_496e40(void* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* eax_1 = *(a1 + 0x10);
    return (*(*eax_1 + 0x48))(eax_1);
}
