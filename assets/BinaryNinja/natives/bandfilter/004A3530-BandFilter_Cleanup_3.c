// Original IGI.EXE function: BandFilter_Cleanup_3 (VA 0x004A3530; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_Cleanup_3.h"
int32_t BandFilter_Cleanup_3(void* context)

{
    int32_t result = *((g_936010 << 2) + &g_a94e84);

    if (result)
        result = result(*(context + 0xc));

    return result;
}
