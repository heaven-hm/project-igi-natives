// Original IGI.EXE function: ComputerMenu_LoadParameters (VA 0x0046AC30; static CFG gate PASS, CFG score 1.000).
#include "ComputerMenu_LoadParameters.h"
void* ComputerMenu_LoadParameters(float context)

{
    void* flagP = *(AI_CombatTarget_29() + 0x14);
    int32_t dest_val = 0;
    float item_1c = g_c28b44;
    float item_18 = g_c28b48;
    void* result = Level_LoadObjects_7();

    if (!result)
    {
        float source_1 = context;

        if (*(source_1 + 0x38))
        {
            QTask_CleanupTypes(source_1);
            AI_NoNewFunctionForMenu(*(source_1 + 0x38));
            *(source_1 + 0x38) = 0;
        }

        float item_14;

        if (!*(source_1 + 0x2c))
        {
            int32_t entity_1 = *(Config_GetActivePlayerProfileRecord() + 0x538);
            long double fpu_val_6_1 = *(flagP + 0x1b4);

            if (entity_1)
                fpu_val_6_1 = fpu_val_6_1 * -1.0f;

            long double fpu_val_6_6 = *(flagP + 0x1b0) * item_1c * 0.5f + *(source_1 + 0x24);
            context = fpu_val_6_6;
            *(source_1 + 0x24) = fpu_val_6_6;
            long double fpu_val_7_6 = fpu_val_6_1 * item_18 * 0.5f + *(source_1 + 0x28);
            item_14 = fpu_val_7_6;
            *(source_1 + 0x28) = fpu_val_7_6;
            long double fpu_val_7_8 = item_1c * 0.0484374985f;
            long double f1_1 = context;
            fpu_val_7_8 - f1_1;

            if (*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                fpu_val_7_8 = item_1c - item_1c * 0.0453125015f;
                long double f3_1 = context;
                fpu_val_7_8 - f3_1;

                if (!(*(&((fpu_val_7_8 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    fpu_val_7_8 = context;
            }

            *(source_1 + 0x24) = fpu_val_7_8;
            long double fpu_val_7_14 = item_18 * 0.0541666672f;
            long double f2_1 = item_14;
            fpu_val_7_14 - f2_1;

            if (*(&((fpu_val_7_14 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_14, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_14 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                fpu_val_7_14 = item_18 - item_18 * 0.0958333313f;
                long double f4_1 = item_14;
                fpu_val_7_14 - f4_1;

                if (!(*(&((fpu_val_7_14 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_14, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_14 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    fpu_val_7_14 = item_14;
            }

            *(source_1 + 0x28) = fpu_val_7_14;
        }

        char data_6 = g_c28f8c;

        if (data_6 & 1)
            dest_val = 0x10;

        if (data_6 & 2)
            dest_val |= 0x20;

        item_14 = *(source_1 + 0x24);
        float item_c = item_14;
        int32_t item_4_1 = 0;
        item_14 = *(source_1 + 0x28);
        float item_8_1 = item_14;
        Physics_CalculateSplineLength_4(*(source_1 + 0x20), &item_c);
        void** i = *(source_1 + 8);
        int32_t temp_4 = ~*(source_1 + 0x30) & dest_val;
        *(source_1 + 0x30) = dest_val;
        *(source_1 + 0x34) = temp_4;
        result = *i;

        if (result && i)
        {
            int32_t temp_5 = g_afa7e0;

            do
            {
                int32_t* source_2 = *i;
                void* data_10;

                if (!source_2)
                    data_10 = nullptr;
                else
                {
                    int32_t data_7 = *source_2;
                    int32_t data_8 = -(data_7);
                    data_10 = (data_8 - data_8) & source_2;
                }

                *((temp_5 << 2) + &g_afa6e0) = data_10;
                int32_t temp_6 = temp_5 + 1;
                int32_t data_11 = 0;
                g_afa7e0 = temp_6;
                data_11 = i[7];
                result = *((data_11 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_6 = g_afa7e0;
                }

                i = *((temp_6 << 2) + &g_afa6dc);
                temp_5 = temp_6 - 1;
                g_afa7e0 = temp_5;
            } while (i);
        }
    }

    return result;
}
