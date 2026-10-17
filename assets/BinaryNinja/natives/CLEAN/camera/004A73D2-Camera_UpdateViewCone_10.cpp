// IGI native provenance: Camera_UpdateViewCone_10 - 0x004A73D2 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A73D2-Camera_UpdateViewCone_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_10.h"
char* Camera_UpdateViewCone_10(double* context, char* param_2, int32_t param_3)

{
    int32_t context_val;
    int32_t* source_val;

    if (!g_9361c4)
    {
        int32_t entity_val;
        int32_t item_14_1 = entity_val;
        int32_t item_18_1 = entity_val;
        item_18_1 = *context;
        Camera_SetFieldOfView_26();
        context_val = param_3;
        source_val = &g_936238;
        void* data_5 = nullptr;
        data_5 = g_936238 == 0x2d;
        Camera_UpdateTransform_26(data_5 + param_2, g_93623c + context_val, &g_936238);
    }
    else
    {
        int32_t data_val = g_9361c8;
        context_val = param_3;
        source_val = g_9361c0;

        if (data_val == context_val)
        {
            void* entity_1 = nullptr;
            entity_1 = *source_val == 0x2d;
            char* entity_3 = entity_1 + data_val + param_2;
            *entity_3 = 0x30;
            entity_3[1] = 0;
        }
    }

    char* dest_val = param_2;

    if (*source_val == 0x2d)
    {
        *param_2 = 0x2d;
        dest_val = &param_2[1];
    }

    int32_t data_7 = source_val[1];
    char* dest_1;

    if (data_7 > 0)
        dest_1 = &dest_val[data_7];
    else
    {
        Camera_ApplyBandFilter_11(dest_val, 1);
        *dest_val = 0x30;
        dest_1 = &dest_val[1];
    }

    if (context_val > 0)
    {
        Camera_ApplyBandFilter_11(dest_1, 1);
        *dest_1 = g_544280;
        int32_t source_1 = source_val[1];

        if (source_1 < 0)
        {
            if (!g_9361c4)
            {
                int32_t source_2 = -(source_1);

                if (context_val >= source_2)
                    context_val = source_2;
            }
            else
                context_val = -(source_1);

            Camera_ApplyBandFilter_11(&dest_1[1], context_val);
            Camera_ApplyBandFilter_26(&dest_1[1], 0x30, context_val);
        }
    }

    return param_2;
}
