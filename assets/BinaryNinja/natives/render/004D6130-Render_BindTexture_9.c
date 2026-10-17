// IGI native provenance: Render_BindTexture_9 - 0x004D6130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6130-Render_BindTexture_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_9.h"
int32_t Render_BindTexture_9(float context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, float param_7)

{
    int32_t* data_val = context;
    int32_t* source_val = data_val[2] + param_2 * 0x84;
    context = param_7 * 4800.0f / g_a54658;
    int32_t* data_3;

    if (param_5 >= 0)
        data_3 = Render_DrawSplineMesh_8(*data_val, param_2, param_5, param_6);
    else
        data_3 = Render_BindTexture_7(source_val);

    Render_ComputeNormals_9(source_val, Render_DrawSplineMesh_6(1, Render_DrawRigidMesh_9(param_2, param_3, param_4), 1, data_3, 0, 0, 0, 0, 0, 0), context,
        0);
    int32_t result = source_val[1] | 0x20000;
    source_val[1] = result;
    return result;
}
