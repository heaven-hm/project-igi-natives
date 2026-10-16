#include "Render_DrawLightmapMesh_12.h"
struct status_msg* Render_DrawLightmapMesh_12(double* a1, double* a2, int32_t* a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)

{
    int32_t kind;
    kind = g_a5e304;
    struct status_msg* result = QTask_HandleInput(nullptr, kind, 0);
    result->head[0x1b] = a4;

    if (!a3)
    {
        result->head[0x20] = 0;
        result->head[0x21] = 0;
        result->head[0x22] = 0;
    }
    else
    {
        result->head[0x20] = *a3;
        result->head[0x21] = a3[1];
        result->head[0x22] = a3[2];
    }

    result->head[0x1c] = a5;
    result->head[0x1e] = a7;
    result->head[0x1d] = a6;
    result->head[0x1f] = a8;
    result->head[0x1a] = g_a44344;
    result->head[0x23] = 0;
    double v_20 = (*a2 - *a1) * 0.5 + *a1;
    double v_18 = (a2[1] - a1[1]) * 0.5 + a1[1];
    double v_10 = (a2[2] - a1[2]) * 0.5 + a1[2];
    DynObj_RemoveSymbol_8(result->head[0x1a], result, &v_20, a1, a2, 4);
    return result;
}
