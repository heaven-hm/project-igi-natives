// IGI native provenance: RenderLight_Invoke2 - 0x00527470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00527470-RenderLight_Invoke2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke2.h"

void* RenderLight_Invoke2(void* arg1)

{
    *(*(arg1 + 0x14) + 0x5c) = 0xff7fffff;
    return arg1;
}
