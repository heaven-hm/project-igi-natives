// IGI native provenance: AI_CheckHearing_13 - 0x0045AF60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045AF60-AI_CheckHearing_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckHearing_13.h"
void* AI_CheckHearing_13(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    *(source_val + 0x696) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.0f);
    void* result = *(context + 0xc);

    if (result > 0 && result <= 2)
        result = Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    *(context + 0x14) = sub_4582c0;
    return result;
}
