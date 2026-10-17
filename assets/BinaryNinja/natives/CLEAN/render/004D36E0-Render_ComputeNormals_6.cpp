// IGI native provenance: Render_ComputeNormals_6 - 0x004D36E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D36E0-Render_ComputeNormals_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_6.h"
int32_t Render_ComputeNormals_6(void* context)

{
    void* item_c = context;
    int32_t result = *(context + 0x10);

    if (result)
        result = result(*(context + 0x18));

    *(context + 0x18) = 0;
    *(context + 0x10) = 0;
    *(context + 0xc) = 0;
    *(context + 0x14) = 0;
    return result;
}
