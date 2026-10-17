// IGI native provenance: Camera_ApplyWideScreen_33 - 0x004AF990 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AF990-Camera_ApplyWideScreen_33.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyWideScreen_33.h"
void* Camera_ApplyWideScreen_33(void* context, void** param_2)

{
    **(context + 4) = param_2;
    param_2[1] = *(context + 4);
    *(context + 4) = param_2;
    *param_2 = context;
    return context;
}
