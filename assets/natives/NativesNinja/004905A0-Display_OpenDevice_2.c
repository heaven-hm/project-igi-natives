#include "004905A0-Display_OpenDevice_2.h"
/* 0x004905a0 Display_OpenDevice_2 full linked: callers=2 callees=10 */
int32_t sub_4905a0(void* a1, int32_t a2, int32_t a3)

{
    __builtin_memset(&g_5c8e48, 0, 0x1150);
    g_5c8e60 = a3;
    g_5c8e40 = 0;

    if (!sub_490680(&g_5c8e48, a1))
    {
        sub_4903b0(&g_5c8e48);
        return 0;
    }

    if (!sub_490860(&g_5c8e48))
    {
        sub_4903b0(&g_5c8e48);
        return 0;
    }

    if (a2 && !sub_490c40(&g_5c8e48, a1, a2))
    {
        sub_4903b0(&g_5c8e48);
        return 0;
    }

    if (!sub_490b80(&g_5c8e48, a1))
    {
        sub_4903b0(&g_5c8e48);
        return 0;
    }

    sub_48f490(sub_490530);
    g_5c8e72 = 1;
    g_5c8e70 = 1;
    return &g_5c8e48;
}
