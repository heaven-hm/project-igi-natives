// IGI native provenance: AnimSpline_Invoke11 - 0x0050A570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A570-AnimSpline_Invoke11.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke11.h"

int32_t AnimSpline_Invoke11(int32_t arg1, void* arg2)

{
    int32_t var_14 = arg1;
    int32_t var_1c = arg1;
    int32_t result = 0;
    result = Physics_CalculateSplineLength_11(arg2) >= Physics_SolveConstraints_10(arg2);
    return result;
}
