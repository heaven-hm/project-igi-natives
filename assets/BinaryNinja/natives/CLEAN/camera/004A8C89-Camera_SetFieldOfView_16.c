// IGI native provenance: Camera_SetFieldOfView_16 - 0x004A8C89 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8C89-Camera_SetFieldOfView_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_16.h"
int32_t __fastcall Camera_SetFieldOfView_16(char context, void* param_2 )

{
    *(param_2 - 0x90) = 1;
    int32_t entity_val;
    entity_val = context;
}
