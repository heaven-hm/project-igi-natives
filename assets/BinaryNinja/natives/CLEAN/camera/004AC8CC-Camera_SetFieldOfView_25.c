// IGI native provenance: Camera_SetFieldOfView_25 - 0x004AC8CC - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004AC8CC-Camera_SetFieldOfView_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_25.h"
int32_t Camera_SetFieldOfView_25(int32_t* context)

{
    *context = 0;
    int32_t* dest_1 = &context[1];
    *dest_1 = 0;
    dest_1[1] = 0;
    return 0;
}
