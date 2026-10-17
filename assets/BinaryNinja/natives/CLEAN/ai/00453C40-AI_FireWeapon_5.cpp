// IGI native provenance: AI_FireWeapon_5 - 0x00453C40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00453C40-AI_FireWeapon_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_5.h"
void* AI_FireWeapon_5(void* context, float param_2)

{
    float source_val = param_2;
    *(source_val + 0x33d) = 0;
    *(source_val + 0x696) = 0;
    param_2 = Render_TransformVertices_10(source_val + 0x68, 0.0f);
    Human_StateAnimation(source_val, *(context + 0x10), 0.0f);
    int32_t data_1 = *(context + 0xc);
    void* result = data_1 - 2;

    if (data_1 == 2)
        result = Render_BindTexture_10(source_val + 0x68, 0, Render_DrawLightmapMesh_10(source_val + 0x68, 0) * param_2);

    *(context + 0x14) = sub_453cb0;
    return result;
}
