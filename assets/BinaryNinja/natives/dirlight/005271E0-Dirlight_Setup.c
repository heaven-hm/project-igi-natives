// Original IGI.EXE function: Dirlight_Setup (VA 0x005271E0; static CFG gate PASS, CFG score 1.000).
#include "Dirlight_Setup.h"
int32_t Dirlight_Setup(void* context)

{
    int32_t data_val = *(context + 0x48);

    if (data_val)
        Render_ComputeNormals_13(data_val);

    int32_t* source_val = g_ba1e14;
    int32_t entity_val = *(*(context + 0x60) + source_val);
    int32_t data_3 = g_ba1e08 - 1;
    g_ba1e08 = data_3;

    if (entity_val != data_3)
    {
        int32_t temp_1 = g_ba1e04;
        int32_t data_6 = *(temp_1 + (data_3 << 2)) * g_ba1e10 + g_ba1e00;
        int32_t dest_2 = *(temp_1 + (entity_val << 2));
        int32_t source_1 = *(source_val + data_6);
        *(temp_1 + (entity_val << 2)) = *(temp_1 + (source_1 << 2));
        *(g_ba1e04 + (source_1 << 2)) = dest_2;
        *(g_ba1e14 + data_6) = entity_val;
    }

    return Light_LightsourceNotFound(context);
}
