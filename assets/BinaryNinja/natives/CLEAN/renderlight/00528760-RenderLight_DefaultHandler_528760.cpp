// IGI native provenance: RenderLight_DefaultHandler_528760 - 0x00528760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00528760-RenderLight_DefaultHandler_528760.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_DefaultHandler_528760.h"

void* RenderLight_DefaultHandler_528760(void* arg1)

{
    __builtin_memset(arg1 + 0xd8, 0xffffffff, 0x28);
    *(arg1 + 0x1b8) = 0xffffffff;
    *(arg1 + 0x1bc) = 0xffffffff;
    __builtin_memset(arg1 + 0x1c0, 0, 0x57);
    *(arg1 + 0x88) = 0;
    *(arg1 + 0x1a8) = data_54f418[0];
    *(arg1 + 0x1ac) = data_54f418[4][0];
    *(arg1 + 0x1b0) = data_54f418[8][0];
    return Light_CalculateAttenuation_6(arg1);
}
