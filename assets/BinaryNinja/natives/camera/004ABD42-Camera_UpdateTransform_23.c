// Original IGI.EXE function: Camera_UpdateTransform_23 (VA 0x004ABD42; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_23.h"
int32_t Camera_UpdateTransform_23(int32_t context, HANDLE param_2)

{
    if (context < g_c32540 && (&g_c32440)[context >> 5][(context & 0x1f) * 2] == 0xffffffff)
    {
        if (g_543e80 == 1)
        {
            if (!context)
                SetStdHandle(STD_INPUT_HANDLE, param_2);
            else if (context == 1)
                SetStdHandle(STD_OUTPUT_HANDLE, param_2);
            else if (context == 2)
                SetStdHandle(STD_ERROR_HANDLE, param_2);
        }

        (&g_c32440)[context >> 5][(context & 0x1f) * 2] = param_2;
        return 0;
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
