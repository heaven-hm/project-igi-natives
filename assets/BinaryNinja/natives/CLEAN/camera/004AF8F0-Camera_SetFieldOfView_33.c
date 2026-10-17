// IGI native provenance: Camera_SetFieldOfView_33 - 0x004AF8F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF8F0-Camera_SetFieldOfView_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_33.h"
void* Camera_SetFieldOfView_33(void* context, void** param_2)

{
    param_2[1] = *(context + 8);
    *param_2 = context + 4;
    **(context + 8) = param_2;
    *(context + 8) = param_2;
    return context;
}
