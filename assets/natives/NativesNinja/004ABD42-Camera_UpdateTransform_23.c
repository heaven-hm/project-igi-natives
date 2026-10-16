#include "004ABD42-Camera_UpdateTransform_23.h"
/* 0x004abd42 Camera_UpdateTransform_23 full linked: callers=1 callees=1 */
int32_t sub_4abd42(int32_t a1, HANDLE a2)

{
    if (a1 < g_c32540 && (&g_c32440)[a1 >> 5][(a1 & 0x1f) * 2] == 0xffffffff)
    {
        if (g_543e80 == 1)
        {
            if (!a1)
                SetStdHandle(STD_INPUT_HANDLE, a2);
            else if (a1 == 1)
                SetStdHandle(STD_OUTPUT_HANDLE, a2);
            else if (a1 == 2)
                SetStdHandle(STD_ERROR_HANDLE, a2);
        }

        (&g_c32440)[a1 >> 5][(a1 & 0x1f) * 2] = a2;
        return 0;
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
