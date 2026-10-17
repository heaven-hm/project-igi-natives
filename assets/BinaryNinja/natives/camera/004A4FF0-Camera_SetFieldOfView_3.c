// IGI native provenance: Camera_SetFieldOfView_3 - 0x004A4FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A4FF0-Camera_SetFieldOfView_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_3.h"
void* Camera_SetFieldOfView_3(void* context, float param_2)

{
    *(context + 0x30) = param_2;
    return context;
}
