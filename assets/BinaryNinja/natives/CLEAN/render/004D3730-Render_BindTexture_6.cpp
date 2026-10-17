// IGI native provenance: Render_BindTexture_6 - 0x004D3730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3730-Render_BindTexture_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_6.h"
int32_t* Render_BindTexture_6(void* context)

{
    int32_t* result = *(context + 0x80);

    if (result)
    {
        result = Render_ClipMesh_6(result);
        *(context + 0x80) = result;
    }

    return result;
}
