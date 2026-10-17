// IGI native provenance: Render_ComputeNormals_5 - 0x004D3020 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3020-Render_ComputeNormals_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_5.h"
int32_t Render_ComputeNormals_5(long double context , float* param_2, float* param_3, float param_4)

{
    float item_30;
    float item_24;
    int32_t data_1 = Render_BindTexture_5(&item_30, &item_24, Render_SetupLighting_6(param_4, 0));
    float item_18;
    float item_c;
    int32_t result = Render_BindTexture_5(&item_18, &item_c, Render_SetupLighting_6(param_4, 1));

    if (!data_1 && !result)
        return result;

    if (!data_1)
    {
        if (result)
        {
            if (param_2)
            {
                *param_2 = item_18;
                int32_t item_14;
                param_2[1] = item_14;
                int32_t item_10;
                param_2[2] = item_10;
            }

            if (param_3)
            {
                *param_3 = item_c;
                int32_t item_8;
                param_3[1] = item_8;
                int32_t item_4;
                param_3[2] = item_4;
            }
        }
    }
    else if (!result)
    {
        if (param_2)
        {
            *param_2 = item_30;
            int32_t item_2c;
            param_2[1] = item_2c;
            int32_t item_28;
            param_2[2] = item_28;
        }

        if (param_3)
        {
            *param_3 = item_24;
            int32_t item_20;
            param_3[1] = item_20;
            int32_t item_1c;
            param_3[2] = item_1c;
        }
    }
    else
    {
        (*(param_4 + 0xc))(*(param_4 + 0x18));
        param_4 = context;

        if (param_2)
            Render_SetupLighting_5(param_2, &item_30, &item_18, param_4);

        if (param_3)
            Render_SetupLighting_5(param_3, &item_24, &item_c, param_4);
    }

    return 1;
}
