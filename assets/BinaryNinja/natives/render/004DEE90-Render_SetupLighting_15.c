// IGI native provenance: Render_SetupLighting_15 - 0x004DEE90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DEE90-Render_SetupLighting_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_15.h"
void* Render_SetupLighting_15(void* context, char* param_2)

{
    void* result = DynObj_Missing(param_2);

    if (*(context + 0x6c) != result)
    {
        *(context + 0x6c) = result;
        *(context + 0x18c) = 0;
    }

    return result;
}
