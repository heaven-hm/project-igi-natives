// IGI native provenance: Render_DrawLightmapMesh_12 - 0x004D9FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D9FC0-Render_DrawLightmapMesh_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh_12.h"
struct status_msg* Render_DrawLightmapMesh_12(double* context, double* param_2, int32_t* param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8)

{
    int32_t kind;
    kind = g_a5e304;
    struct status_msg* result = QTask_HandleInput(nullptr, kind, 0);
    result->head[0x1b] = param_4;

    if (!param_3)
    {
        result->head[0x20] = 0;
        result->head[0x21] = 0;
        result->head[0x22] = 0;
    }
    else
    {
        result->head[0x20] = *param_3;
        result->head[0x21] = param_3[1];
        result->head[0x22] = param_3[2];
    }

    result->head[0x1c] = param_5;
    result->head[0x1e] = param_7;
    result->head[0x1d] = param_6;
    result->head[0x1f] = param_8;
    result->head[0x1a] = g_a44344;
    result->head[0x23] = 0;
    double item_20 = (*param_2 - *context) * 0.5 + *context;
    double item_18 = (param_2[1] - context[1]) * 0.5 + context[1];
    double item_10 = (param_2[2] - context[2]) * 0.5 + context[2];
    DynObj_RemoveSymbol_8(result->head[0x1a], result, &item_20, context, param_2, 4);
    return result;
}
