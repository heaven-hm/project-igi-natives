// IGI native provenance: AI_TakeCover_24 - 0x004663B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004663B0-AI_TakeCover_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_24.h"
void* AI_TakeCover_24(void* context)

{
    *(context + 0x70) = (*(context + 0x70) & 0xfffffffd) | 1;
    *(context + 0x20) = 0;
    *(context + 0x40) = 0;
    return context;
}
