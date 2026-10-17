// Original IGI.EXE function: Camera_E000 (VA 0x004A72CE; static CFG gate PASS, CFG score 1.000).
#include "Camera_E000.h"
char* Camera_E000(double* context, char* param_2, void* param_3, int32_t param_4)

{
    void* context_val;
    int32_t* source_val;

    if (!g_9361c4)
    {
        int32_t saved_edi_2;
        int32_t saved_edi_1 = saved_edi_2;
        int32_t saved_edi_3 = saved_edi_2;
        saved_edi_3 = *context;
        Camera_SetFieldOfView_26();
        context_val = param_3;
        source_val = &g_936238;
        int32_t data_3 = 0;
        data_3 = g_936238 == 0x2d;
        void* entity_4 = nullptr;
        entity_4 = context_val > 0;
        Camera_UpdateTransform_26(entity_4 + &param_2[data_3], context_val + 1, &g_936238);
    }
    else
    {
        context_val = param_3;
        int32_t* data_val = g_9361c0;
        int32_t entity_val = 0;
        source_val = data_val;
        entity_val = context_val > 0;
        void* entity_1 = nullptr;
        entity_1 = *data_val == 0x2d;
        Camera_ApplyBandFilter_11(entity_1 + param_2, entity_val);
    }

    char* data_4 = param_2;

    if (*source_val == 0x2d)
    {
        *data_4 = 0x2d;
        data_4 = &data_4[1];
    }

    if (context_val > 0)
    {
        *data_4 = data_4[1];
        data_4 = &data_4[1];
        *data_4 = g_544280;
    }

    void* const entity_7 = nullptr;
    entity_7 = !g_9361c4;
    char* data_5 = Camera_ApplyLineFilter_20(entity_7 + data_4 + context_val, "e+000");

    if (param_4)
        *data_5 = 0x45;

    if (*source_val[3] != 0x30)
    {
        int32_t context_1 = source_val[1];
        int32_t context_2 = context_1 - 1;

        if (context_1 - 1 < 0)
        {
            context_2 = -(context_2);
            data_5[1] = 0x2d;
        }

        if (context_2 >= 0x64)
        {
            data_5[2] += context_2 / 0x64;
            context_2 = context_2 % 0x64;
        }

        if (context_2 >= 0xa)
        {
            data_5[3] += context_2 / 0xa;
            context_2 = context_2 % 0xa;
        }

        data_5[4] += context_2;
    }

    return param_2;
}
