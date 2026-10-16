#include "00497830-Display_SetDisplayMode_14.h"
/* 0x00497830 Display_SetDisplayMode_14 full linked: callers=1 callees=0 */
void sub_497830(void** a1)

{
    for (void** i = a1; i; i = *i)
    {
        int32_t eax = i[1];

        if (eax != 0xffffffff)
            (*((eax << 2) + &g_a94e84))(i);
    }
}
