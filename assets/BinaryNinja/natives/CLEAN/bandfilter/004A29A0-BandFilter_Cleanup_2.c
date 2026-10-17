// IGI native provenance: BandFilter_Cleanup_2 - 0x004A29A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A29A0-BandFilter_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Cleanup_2.h"
int32_t BandFilter_Cleanup_2(void* context)

{
    Sys_ReadFileBlock_17(context + 0x34);
    return Heap_FreeEntry(*(context + 0x30));
}
