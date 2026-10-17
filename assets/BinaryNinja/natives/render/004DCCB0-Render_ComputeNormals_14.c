// Original IGI.EXE function: Render_ComputeNormals_14 (VA 0x004DCCB0; static CFG gate PASS, CFG score 1.000).
#include "Render_ComputeNormals_14.h"
int32_t Render_ComputeNormals_14(int32_t context, void* param_2, double* param_3)

{
    double* item_30 = param_3;
    void* item_28 = nullptr;
    int32_t item_24 = 0;
    int32_t item_2c = 1;
    DynObj_CreateMagicObject_11(context, Render_DrawBoneMesh_4(), &item_30, param_3, 0xffffffff, 5);

    if (item_28 && item_28 != item_24 && *(item_28 + 0x138) < *(item_28 + 0x13c))
    {
        int32_t entity_2 = g_a5e320;

        if (entity_2 < g_a5e324)
        {
            int32_t* data_7 = *(g_a5e31c + (entity_2 << 2)) * g_a5e328 + g_a5e318;
            *(g_a5e32c + data_7) = entity_2;
            g_a5e320 += 1;
            data_7[1] = item_28;
            data_7[2] = item_24;
            int32_t source_2 = *(item_28 + 0x138);
            int32_t* entity_9 =
                *(*(item_28 + 0x134) + (source_2 << 2)) * *(item_28 + 0x140) + *(item_28 + 0x130);
            *(*(item_28 + 0x144) + entity_9) = source_2;
            void* temp_2 = data_7[1];
            *(temp_2 + 0x138) += 1;
            *data_7 = entity_9;
            *entity_9 = param_2;
            *(param_2 + 0x60) = 1;
            return 1;
        }
    }

    *(param_2 + 0x60) = 0;
    return 0;
}
