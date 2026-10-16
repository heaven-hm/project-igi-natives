#include "Display_OpenDevice_4.h"
int32_t Display_OpenDevice_4(int32_t a1)

{
    char result = g_5ca02d;

    if (result)
    {
        result = (*((Display_ClearSurfaces_5() << 2) + &g_a94e84))(a1);
        g_c28b58 = 0xffffffff;
        Sys_OpenFileStream_3();
        g_5ca02d = 0;
    }

    return result;
}
