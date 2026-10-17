// IGI native provenance: Human_Cleanup_5 - 0x00460280 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460280-Human_Cleanup_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_5.h"
double* Human_Cleanup_5(float context )

{
    double* result = AI_SelectTarget_27();

    if (result)
    {
        result = AI_SelectTarget_27();

        if (result != 3)
        {
            float result_3;
            float result_4 = result_3;
            result = result_4 + 0x20;
            *(context + 0xc) = result;
            *(context + 0x10) = result_4 + 0x78;
            int32_t temp_1 = *(result_4 + 0xa0);
            *(context + 0x1c) = 1;
            *(context + 0x14) = temp_1;
            int32_t entity_2 = *(result_4 + 0xfc);

            if (!entity_2 || entity_2 == 2)
                *(context + 0x20) = 3;
            else
                *(context + 0x20) = 0;

            if (*(result_4 + 0xcf6))
            {
                double* entity_4 = *context;
                float item_1c = *result - *entity_4;
                float item_18_1 = result[1] - entity_4[1];
                float item_14_1 = result[2] - entity_4[2];
                float* data_val = *(context + 4);
                float item_10 = item_14_1 * data_val[6] + item_18_1 * data_val[3] + item_1c * *data_val;
                long double fpu_val_7_17 = item_14_1 * data_val[8] + item_18_1 * data_val[5];
                long double fpu_val_6_12 = item_1c * data_val[2];
                float item_18_2 = item_14_1 * data_val[7] + item_18_1 * data_val[4] + item_1c * data_val[1];
                item_1c = item_10;
                float item_14_2 = fpu_val_7_17 + fpu_val_6_12;
                result = Render_DrawBoneMesh(&item_1c, *(context + 0x14), 0);

                if (!result)
                {
                    double* result_1 = result;
                    double* result_2 = result;
                    result_3 = result;
                    float result_5 = result_4;
                    char data_3 = FX_TrailUpdate_12();
                    result = DynObj_RegisterSymbol_12(Level_StartMission_4(), *context, *(context + 0xc), data_3,
                        &item_10, 0xffffffff, 0xffffffff, &result_3);
                    long double fpu_val_7_19 = result_3;
                    long double f0_1 = 0.0f;
                    fpu_val_7_19 - f0_1;
                    result = (fpu_val_7_19 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_19, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_19 == f0_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        return AI_UpdateOrders_25(context);
                }
            }
        }
    }

    return result;
}
