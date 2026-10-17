// IGI native provenance: BandFilter_Cleanup - 0x004A25E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A25E0-BandFilter_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Cleanup.h"
int32_t BandFilter_Cleanup(void* context)

{
    Heap_FreeEntry(*(context + 0x70));
    Struct_Clear36(context + 0x2c);
    return 0;
}
