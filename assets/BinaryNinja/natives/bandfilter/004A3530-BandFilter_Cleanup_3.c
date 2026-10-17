// IGI native provenance: BandFilter_Cleanup_3 - 0x004A3530 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A3530-BandFilter_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Cleanup_3.h"
int32_t BandFilter_Cleanup_3(void* context)

{
    int32_t result = *((g_936010 << 2) + &g_a94e84);

    if (result)
        result = result(*(context + 0xc));

    return result;
}
