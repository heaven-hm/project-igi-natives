// IGI native provenance: Building_LoadParameters - 0x00448760 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00448760-Building_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Building_LoadParameters.h"
int32_t Building_LoadParameters(int32_t* context, int32_t param_2)

{
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    (*((Render_ComputeNormals_15() << 2) + &g_a96ae0))(context, param_2);
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_20, 1.0f, 8);
    memset(&context[0x76], 0, 0x18);
    context[0x72] = 0;
    context[0x68] = 0x3f800000;
    context[0x69] = 0;
    context[0x6a] = 0;
    context[0x6b] = 0;
    context[0x6c] = 0x3f800000;
    context[0x6d] = 0;
    context[0x6e] = 0;
    context[0x6f] = 0;
    context[0x70] = 0x3f800000;
    context[0x71] = 0;
    return 0;
}
