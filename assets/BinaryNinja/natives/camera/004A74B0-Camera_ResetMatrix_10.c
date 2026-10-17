// Original IGI.EXE function: Camera_ResetMatrix_10 (VA 0x004A74B0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_10.h"
char* Camera_ResetMatrix_10(double* context, char* param_2, int32_t param_3, int32_t param_4)

{
    int32_t entity_val;
    int32_t item_14 = entity_val;
    int32_t item_18 = entity_val;
    item_18 = *context;
    Camera_SetFieldOfView_26();
    g_9361c0 = &g_936238;
    g_9361c8 = g_93623c - 1;
    void* entity_3 = nullptr;
    entity_3 = g_936238 == 0x2d;
    char* source_val = entity_3 + param_2;
    Camera_UpdateTransform_26(source_val, param_3, &g_936238);
    void* data_val = g_9361c0;
    bool entity_7 = g_9361c8 < *(data_val + 4) - 1;
    g_9361cc = entity_7;
    int32_t data_2 = *(data_val + 4) - 1;
    g_9361c8 = data_2;

    if (data_2 < 0xfffffffc || data_2 >= param_3)
        return Camera_UpdateTransform_11(context, param_2, param_3, param_4);

    if (entity_7)
    {
        char i;

        do
        {
            i = *source_val;
            source_val = &source_val[1];
        } while (i);

        source_val[0xfffffffe] &= i;
    }

    return Camera_SetFieldOfView_11(context, param_2, param_3);
}
