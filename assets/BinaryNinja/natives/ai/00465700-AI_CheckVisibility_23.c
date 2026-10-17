// IGI native provenance: AI_CheckVisibility_23 - 0x00465700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00465700-AI_CheckVisibility_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckVisibility_23.h"
int32_t AI_CheckVisibility_23(void* context)

{
    char result = *(context + 0xda);

    if (result)
    {
        result = Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
        *(context + 0xda) = 0;
    }

    return result;
}
