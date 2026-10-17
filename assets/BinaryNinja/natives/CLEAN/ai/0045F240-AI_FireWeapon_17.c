// IGI native provenance: AI_FireWeapon_17 - 0x0045F240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045F240-AI_FireWeapon_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_17.h"
int32_t AI_FireWeapon_17(float context)

{
    char result = *(context + 0xd8);

    if (!result)
        return result;

    *(context + 0xd8) = 0;
    Render_DrawBoneMesh_7(context + 0x78, context + 0x68);
    int32_t item_1c_1 = Render_DrawSplineMesh_10(context + 0x68, 0);
    return FX_SmokeEmit_15(context);
}
