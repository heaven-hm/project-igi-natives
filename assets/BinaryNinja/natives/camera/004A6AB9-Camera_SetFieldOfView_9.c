// Original IGI.EXE function: Camera_SetFieldOfView_9 (VA 0x004A6AB9; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_9.h"
int32_t Camera_SetFieldOfView_9(int32_t a1)

{
    int32_t srcS3;

    if (a1 < g_c32540)
        srcS3 = (a1 & 0x1f) << 3;

    if (a1 >= g_c32540 || !(*((&g_c32440)[a1 >> 5] + srcS3 + 4) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        enum WIN32_ERROR flagP2;

        if (Camera_ApplyLineFilter_23(a1) == 0xffffffff)
            flagP2 = NO_ERROR;
        else if (a1 == 1 || a1 == 2)
        {
            int32_t valA5 = Camera_ApplyLineFilter_23(2);

            if (Camera_ApplyLineFilter_23(1) != valA5)
                goto label_4a6b1e;

            flagP2 = NO_ERROR;
        }
        else
        {
        label_4a6b1e:

            if (CloseHandle(Camera_ApplyLineFilter_23(a1)))
                flagP2 = NO_ERROR;
            else
                flagP2 = GetLastError();
        }

        Camera_SetFieldOfView_23(a1);
        *((&g_c32440)[a1 >> 5] + srcS3 + 4) = 0;

        if (!flagP2)
            return 0;

        Camera_UpdateViewCone_22(flagP2);
    }

    return 0xffffffff;
}
