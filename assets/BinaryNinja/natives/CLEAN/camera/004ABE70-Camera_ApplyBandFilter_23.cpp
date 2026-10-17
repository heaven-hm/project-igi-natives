// IGI native provenance: Camera_ApplyBandFilter_23 - 0x004ABE70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABE70-Camera_ApplyBandFilter_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
