// IGI native provenance: Camera_UpdateViewCone_8 - 0x004A68A9 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A68A9-Camera_UpdateViewCone_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_8.h"
void* __stdcall __seh_longjmp_unwind(int32_t* context)

{
    *context;
    return Camera_SetFieldOfView_7(context[6], context[7]);
}
