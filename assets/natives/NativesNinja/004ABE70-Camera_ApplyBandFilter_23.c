#include "004ABE70-Camera_ApplyBandFilter_23.h"
/* 0x004abe70 Camera_ApplyBandFilter_23 full linked: callers=1 callees=3 */
enum WIN32_ERROR sub_4abe70(int32_t a1)

{
    if (a1 < g_c32540 && *((&g_c32440)[a1 >> 5] + ((a1 & 0x1f) << 3) + 4) & 1)
    {
        enum WIN32_ERROR result;

        if (FlushFileBuffers(sub_4abe33(a1)))
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
