// IGI native provenance: AI_MoveToNode_18 - 0x00460CF0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00460CF0-AI_MoveToNode_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_MoveToNode_18.h"
float* AI_MoveToNode_18(float* context)

{
    float* result_2 = context[0x1db];
    memset(&context[0x1ca], 0, 0x40);
    float* result;

    if (result_2)
    {
    label_460d98:
        uint32_t data_4 = Level_SetMission_3();
        int32_t entity_1 = 0;
        entity_1 = result_2[7];
        result = data_4 * 0x180 + entity_1;

        if (*((result << 2) + &g_a96ae0))
        {
            uint32_t data_8 = Level_SetMission_3();
            int32_t data_9 = 0;
            data_9 = result_2[7];
            float* result_1;
            (*(((data_8 * 0x180 + data_9) << 2) + &g_a96ae0))(result_2, &result_1);
            result = result_1;

            if (result)
            {
                long double fpu_val_7_2 = *result - *(context + 0x20);
                double item_40_1 = *(result + 8) - *(context + 0x28);
                double item_38_1 = *(result + 0x10) - *(context + 0x30);
                float* item_50;
                double* item_4c;
                long double fpu_val_6_18 = item_40_1
                    - (item_50[5] * item_38_1 + item_50[4] * item_40_1 + item_50[3] * fpu_val_7_2)
                    + item_4c[1];
                double item_28_2 = fpu_val_6_18;
                long double fpu_val_6_20 = item_38_1
                    - (item_50[8] * item_38_1 + item_50[7] * item_40_1 + item_50[6] * fpu_val_7_2)
                    + item_4c[2];
                double item_20_2 = fpu_val_6_20;
                context[0x1ca] = fpu_val_7_2
                    - (item_50[2] * item_38_1 + item_50[1] * item_40_1 + *item_50 * fpu_val_7_2) + *item_4c;
                context[0x1cb] = item_28_2;
                context[0x1cc] = item_20_2;
                memcpy(&context[0x1cd], item_50, 0x28);
                return Sys_Atan2UndefinedInOrig(item_50, &context[0x1d7], &context[0x1d8], &context[0x1d9]);
            }
        }
    }
    else
    {
        result = AI_CheckSector_20(context);
        result_2 = result;

        if (result_2)
            goto label_460d98;
    }

    return result;
}
