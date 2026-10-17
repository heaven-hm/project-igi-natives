// IGI native provenance: BinocularOverlay_OnEvent - 0x00471310 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00471310-BinocularOverlay_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BinocularOverlay_OnEvent.h"
int32_t* BinocularOverlay_OnEvent(void* context)

{
    *(context + 0x74) = 0;
    int32_t* result = Script_ExecuteLevelScript_6(context + 0x24);
    *(context + 0x20) = 0;
    return result;
}
