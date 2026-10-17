// Original IGI.EXE function: Camera_ApplyBandFilter_23 (VA 0x004ABE70; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_23.h"
enum WIN32_ERROR Camera_ApplyBandFilter_23(int32_t context)

{
    if (context < g_c32540 && *((&g_c32440)[context >> 5] + ((context & 0x1f) << 3) + 4) & 1)
    {
        enum WIN32_ERROR result;

        if (FlushFileBuffers(Camera_ApplyLineFilter_23(context)))
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
