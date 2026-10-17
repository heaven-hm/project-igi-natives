// IGI native provenance: Camera_ApplyPostProcess_23 - 0x004AC119 - CFG score 63.9% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004AC119-Camera_ApplyPostProcess_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyPostProcess_23.h"
int32_t Camera_ApplyPostProcess_23()

{
    int32_t result = Camera_ApplyWideScreen_9();

    if (!g_9360a4)
        return result;

    /* tailcall */
    return sub_4ad8ba();
}
