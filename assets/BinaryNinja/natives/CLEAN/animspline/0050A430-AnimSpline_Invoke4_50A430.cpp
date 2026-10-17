// IGI native provenance: AnimSpline_Invoke4_50A430 - 0x0050A430 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A430-AnimSpline_Invoke4_50A430.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke4_50A430.h"

int32_t AnimSpline_Invoke4_50A430(void* arg1)

{
    *(arg1 + 0xa8) = 0;
    return Camera_UpdateTransform_4(*(arg1 + 0x98));
}
