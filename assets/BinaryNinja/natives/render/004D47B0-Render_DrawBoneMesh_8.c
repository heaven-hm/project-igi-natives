// IGI native provenance: Render_DrawBoneMesh_8 - 0x004D47B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D47B0-Render_DrawBoneMesh_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_8.h"
void* Render_DrawBoneMesh_8(void* context)

{
    void* result = *(context + 0x74);

    if (result)
    {
        while (!(*(result + 4) & 0x20000))
        {
            result = *(result + 0x74);

            if (!result)
                break;
        }
    }

    return result;
}
