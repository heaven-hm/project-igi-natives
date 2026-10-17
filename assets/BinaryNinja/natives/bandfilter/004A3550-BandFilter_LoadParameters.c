// IGI native provenance: BandFilter_LoadParameters - 0x004A3550 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A3550-BandFilter_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
