// Original IGI.EXE function: Render_ComputeNormals_13 (VA 0x004DAAF0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_13.h"
int32_t Render_ComputeNormals_13(int32_t context)

{
    int32_t* source_val = g_b041f4;
    int32_t temp_val = *(source_val + context);
    int32_t result = g_b041e8 - 1;
    g_b041e8 = result;

    if (temp_val != result)
    {
        int32_t entity_1 = g_b041e4;
        result = *(entity_1 + (result << 2)) * g_b041f0 + g_b041e0;
        int32_t dest_2 = *(entity_1 + (temp_val << 2));
        int32_t source_1 = *(source_val + result);
        *(entity_1 + (temp_val << 2)) = *(entity_1 + (source_1 << 2));
        *(g_b041e4 + (source_1 << 2)) = dest_2;
        *(g_b041f4 + result) = temp_val;
    }

    return result;
}
