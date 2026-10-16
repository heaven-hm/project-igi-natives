#include "gi_platform.h"
#include "004A6D7D-Camera_ResetMatrix_9.h"
uint32_t Camera_ResetMatrix_9(int32_t a1, int32_t a2, enum SET_FILE_POINTER_MOVE_METHOD a3)

{
    int32_t srcS3;

    if (a1 < g_c32540)
        srcS3 = (a1 & 0x1f) << 3;

    if (a1 >= g_c32540 || !((*(int32_t*)(uintptr_t)((&g_c32440)[a1 >> 5] + srcS3 + 4)) & 1))
    {
        g_936068 = 0;
        g_936064 = 9;
    }
    else
    {
        HANDLE hFile = Camera_ApplyLineFilter_23(a1);

        if (hFile != 0xffffffff)
        {
            uint32_t result = SetFilePointer(hFile, a2, nullptr, a3);
            enum WIN32_ERROR valA;

            if (result != 0xffffffff)
                valA = NO_ERROR;
            else
                valA = GetLastError();

            if (!valA)
            {
                int32_t valA1 = (&g_c32440)[a1 >> 5];
                *(valA1 + srcS3 + 4) &= 0xfd;
                return result;
            }

            Camera_UpdateViewCone_22(valA);
        }
        else
            g_936064 = 9;
    }

    return 0xffffffff;
}
