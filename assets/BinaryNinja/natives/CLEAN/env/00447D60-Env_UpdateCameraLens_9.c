// IGI native provenance: Env_UpdateCameraLens_9 - 0x00447D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447D60-Env_UpdateCameraLens_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_UpdateCameraLens_9.h"
int32_t Env_UpdateCameraLens_9(void* context, char param_2)

{
    *(context + 0x19d) = param_2;
    return param_2;
}
