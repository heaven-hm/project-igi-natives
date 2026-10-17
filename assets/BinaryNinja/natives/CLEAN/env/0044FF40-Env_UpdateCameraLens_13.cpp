// IGI native provenance: Env_UpdateCameraLens_13 - 0x0044FF40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FF40-Env_UpdateCameraLens_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_UpdateCameraLens_13.h"
int32_t* Env_UpdateCameraLens_13(void* context)

{
    int32_t* result = Env_CheckAmbientArea_13(context);
    result = *(context + 0x3e4a);

    if (result)
    {
        result = *(context + 0x3e4c);

        if (result)
        {
            result = Qtask_UpdateList(result);
            *(context + 0x3e4c) = 0;
        }

        *(context + 0x3e4a) = 0;
    }

    return result;
}
