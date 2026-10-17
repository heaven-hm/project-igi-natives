// IGI native provenance: AnimSpline_InvokeOffscreenbuffersprit - 0x0050EDA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050EDA0-AnimSpline_InvokeOffscreenbuffersprit.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_InvokeOffscreenbuffersprit.h"

int32_t AnimSpline_InvokeOffscreenbuffersprit(float arg1)

{
    if (!*(arg1 + 0x42))
        return Physics_EvaluateAreaCriteria_14(arg1);

    return Physics_Offscreenbuffersprit(arg1);
}
