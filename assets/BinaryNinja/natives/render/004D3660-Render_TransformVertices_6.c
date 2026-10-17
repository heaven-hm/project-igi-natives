// Original IGI.EXE function: Render_TransformVertices_6 (VA 0x004D3660; static CFG gate FAIL, CFG score 0.667).
#include "Render_TransformVertices_6.h"
int32_t Render_TransformVertices_6(void* context)

{
    int32_t data_val = *(context + 0xc);

    if (data_val)
        data_val(*(context + 0x10));

    memset(context, 0, 0x14);
    int32_t* temp_val = g_a54604;
    int32_t source_1 = *(temp_val + context);
    int32_t result = g_a545f8 - 1;
    g_a545f8 = result;

    if (source_1 != result)
    {
        int32_t entity_2 = g_a545f4;
        result = *(entity_2 + (result << 2)) * g_a54600 + g_a545f0;
        int32_t dest_2 = *(entity_2 + (source_1 << 2));
        int32_t temp_1 = *(temp_val + result);
        *(entity_2 + (source_1 << 2)) = *(entity_2 + (temp_1 << 2));
        *(g_a545f4 + (temp_1 << 2)) = dest_2;
        *(g_a54604 + result) = source_1;
    }

    return result;
}
