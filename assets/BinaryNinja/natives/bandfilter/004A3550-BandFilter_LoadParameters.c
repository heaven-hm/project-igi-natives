// Original IGI.EXE function: BandFilter_LoadParameters (VA 0x004A3550; static CFG gate PASS, CFG score 1.000).
#include "BandFilter_LoadParameters.h"
void* BandFilter_LoadParameters(void* context)

{
    if (!*(context + 0x34))
    {
        int32_t item_c = g_936014;
        void* item_4 = context;
        void item_10;
        return BandFilter_Cleanup_3(&item_10);
    }

    void* result = Sys_AllocateMemory_19(BandFilter_Cleanup_3, 0x10, *(context + 0x2c));
    int32_t entity_val = g_936014;
    *(result + 0xc) = context;
    *(result + 4) = entity_val;
    return result;
}
