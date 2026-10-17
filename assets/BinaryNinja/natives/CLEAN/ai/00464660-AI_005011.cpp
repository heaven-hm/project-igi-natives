// IGI native provenance: AI_005011 - 0x00464660 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00464660-AI_005011.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_005011.h"
int32_t AI_005011(int32_t* context)

{
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    context[0x36] = 1;
    *(context + 0xd9) = 1;
    int32_t* data_val = DynObj_Missing("005_01_1");
    int32_t item_2c = Level_StartMission_4();
    Render_DrawBoneMesh_12(context, 5, data_val);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_18, context[0x28], 2);
    int32_t result = Render_SetupLighting_9(&context[0x1a], 0, 2, 0);
    context[0x35] = 0;
    return result;
}
