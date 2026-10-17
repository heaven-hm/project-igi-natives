// IGI native provenance: AnimSpline_GetContext_508E00 - 0x00508E00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508E00-AnimSpline_GetContext_508E00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_GetContext_508E00.h"

void* AnimSpline_GetContext_508E00(void* arg1)

{
    *(arg1 + 0x20) = 0;
    *(arg1 + 0x24) = 0;
    *(arg1 + 0x348) = 0;
    *(arg1 + 0x66c) = 0;
    *(arg1 + 0x990) = 0;
    data_a7b2a0 = arg1;
    return arg1;
}
