// IGI native provenance: ConditionalSound_LoadParameters - 0x00425050 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00425050-ConditionalSound_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ConditionalSound_LoadParameters.h"
int32_t ConditionalSound_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x20);
    memset(context + 0x90, 0, 0x1a);
    *(context + 0x70) = 0;
    *(context + 0xb0) = 0;
    *(context + 0xb1) = 0;
    *(context + 0xb2) = 0;
    *(context + 0xb4) = 0;
    *(context + 0xb3) = 0;
    *(context + 0xac) = 0xffffffff;
    *(context + 0x120) = 0;
    *(context + 0x124) = 0;
    return 0;
}
