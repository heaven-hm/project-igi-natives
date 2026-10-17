// Original IGI.EXE function: BandFilter_LoadParameters (VA 0x004A3550; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_LoadParameters.h"
void* BandFilter_LoadParameters(void* a1)

{
    if (!*(a1 + 0x34))
    {
        int32_t v_c = g_936014;
        void* v_4 = a1;
        void v_10;
        return BandFilter_Cleanup_3(&v_10);
    }

    void* result = Sys_AllocateMemory_19(BandFilter_Cleanup_3, 0x10, *(a1 + 0x2c));
    int32_t objC = g_936014;
    *(result + 0xc) = a1;
    *(result + 4) = objC;
    return result;
}
