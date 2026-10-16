#include "gi_platform.h"
#include "004ABE70-Camera_ApplyBandFilter_23.h"
enum WIN32_ERROR Camera_ApplyBandFilter_23(int32_t a1)

{
    if (a1 < g_c32540 && (*(int32_t*)(uintptr_t)((&g_c32440)[a1 >> 5] + ((a1 & 0x1f) << 3) + 4)) & 1)
    {
        enum WIN32_ERROR result;

        if (FlushFileBuffers(Camera_ApplyLineFilter_23(a1)))
            result = NO_ERROR;
        else
            result = GetLastError();

        if (!result)
            return result;

        g_936068 = result;
    }

    g_936064 = 9;
    return ~NO_ERROR;
}
