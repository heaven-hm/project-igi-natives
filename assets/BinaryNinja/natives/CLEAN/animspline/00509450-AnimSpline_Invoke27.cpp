// IGI native provenance: AnimSpline_Invoke27 - 0x00509450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509450-AnimSpline_Invoke27.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke27.h"

int32_t AnimSpline_Invoke27(void* arg1, int32_t* arg2)

{
    int32_t result_val = *(arg1 + 0x58);
    return Script_ExecuteLevelScript_27(*arg2, *(arg1 + 0xb8), (result_val * result_val) << 3);
}
