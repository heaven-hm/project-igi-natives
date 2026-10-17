// Original IGI.EXE function: Light_SetLightColor_12 (VA 0x0052F630; static CFG gate FAIL, CFG score 0.815).
#include "Light_SetLightColor_12.h"
void* Light_SetLightColor_12(float* context, void* param_2, double* param_3, void* param_4, void* param_5, int32_t param_6)

{
    void* result = param_2;
    int32_t temp_val = *(result + 0x18);
    int32_t* item_614;
    double* item_610;
    int32_t* item_60c;
    int32_t* item_608;
    int32_t* item_604;
    int32_t* item_600;
    void item_2e8;
    double* context_1;

    if (temp_val & 0xa)
    {
        context_1 = param_3;

        if (!(temp_val & 2))
            result = param_5;
        else
        {
            void* source_1 = 1;
            item_60c = &context_1[9];
            item_614 = context_1 + 0x54;
            item_600 = context_1 + 0x6c;
            item_604 = context_1 + 0x74;
            result = param_5;
            item_608 = context_1;
            item_610 = &context_1[3];

            if (result > 1)
            {
                long double fpu_val_7_2 = context_1[3] - *context_1;
                void* entity_3 = &item_2e8;

                do
                {
                    void* temp_1 = source_1 + param_4;
                    source_1 += 1;
                    int32_t temp_2 = context_1[1];
                    entity_3 += 0x18;
                    *(entity_3 - 0x20) = temp_1 * fpu_val_7_2 / (param_4 + result) + *context_1;
                    *(entity_3 - 0x18) = temp_2;
                    *(entity_3 - 0x14) = *(context_1 + 0xc);
                    *(entity_3 - 0x10) = context[0x12a4];
                } while (source_1 < result);
            }
        }

        if (temp_val & 8)
        {
            item_610 = &context_1[6];
            item_614 = &context_1[0xc];
            item_608 = &context_1[3];
            item_604 = context_1 + 0x7c;
            item_60c = context_1 + 0x54;
            int32_t temp_8 = 1;
            item_600 = context_1 + 0x74;

            if (result > 1)
            {
                long double fpu_val_7_5 = item_610[1] - *(item_608 + 8);
                void* entity_8 = &item_2e8;

                do
                {
                    *(entity_8 - 8) = *item_608;
                    *(entity_8 - 4) = item_608[1];
                    int32_t dest_6 = param_4 + temp_8;
                    temp_8 += 1;
                    entity_8 += 0x18;
                    *(entity_8 - 0x18) = dest_6 * fpu_val_7_5 / (param_4 + result) + *(item_608 + 8);
                    *(entity_8 - 0x10) = context[0x12a4];
                } while (temp_8 < result);
            }
        }

    label_52f8ce:
        void item_308;
        memcpy(&item_308, item_608, 0x18);
        int32_t item_488 = *item_60c;
        int32_t item_484_1 = item_60c[1];
        int32_t item_480_1 = item_60c[2];
        int32_t entity_20 = item_600[1];
        int32_t item_588[0x2];
        item_588[0] = *item_600;
        item_588[1] = entity_20;
        int32_t saved_target;
        memcpy(&(&saved_target)[result * 6 + 0xca], item_610, 0x18);
        (&saved_target)[result * 3 + 0x6a] = *item_614;
        (&saved_target)[result * 3 + 0x6b] = item_614[1];
        (&saved_target)[result * 3 + 0x6c] = item_614[2];
        int32_t entity_25 = item_604[1];
        (&item_588)[result][0] = *item_604;
        item_584;
        *(&item_584 + (result << 3)) = entity_25;
        void item_580;

        if (param_6 && result > 1)
        {
            float* item_618_1 = &item_580;
            void item_47c;
            float* dest_14 = &item_47c;
            void item_2e0;
            int32_t* source_8 = &item_2e0;
            void* item_620_5 = result - 1;
            bool flag_11_1;

            do
            {
                void item_5f8;
                Light_SetLightColor_11(context, &item_5f8, &source_8[-4]);
                int32_t item_5e0;
                *source_8 = item_5e0;
                int32_t item_5dc;
                source_8[1] = item_5dc;
                void item_5c0;
                Light_RenderLensflare_12(context, dest_14, &item_5c0);
                double item_5f0[0x2];

                if (context_1[0x11] == 1)
                    Light_CalculateAttenuation_12(context, item_618_1, &item_5f0, &item_5c0);
                source_8 = &source_8[6];
                dest_14 = &dest_14[3];
                flag_11_1 = item_620_5 != 1;
                item_618_1 = &item_618_1[2];
                item_620_5 -= 1;
            } while (flag_11_1);
            result = param_5;
        }

        void* result_1 = 1;

        if (result >= 1)
        {
            int32_t* item_620_6 = &item_580;
            void item_2f0;
            void* data_19 = &item_2f0;
            void* item_61c_5 = &item_2f0;
            int32_t* item_618_2 = &item_488;

            while (true)
            {
                memcpy(item_608, data_19 - 0x18, 0x18);
                memcpy(item_610, data_19, 0x18);
                int32_t* entity_31;

                if (!param_6)
                    entity_31 = item_60c;
                else
                {
                    entity_31 = item_60c;
                    *entity_31 = *item_618_2;
                    entity_31[1] = item_618_2[1];
                    entity_31[2] = item_618_2[2];
                    *item_614 = item_618_2[3];
                    item_614[1] = item_618_2[4];
                    item_614[2] = item_618_2[5];
                    *item_600 = item_620_6[-2];
                    item_600[1] = item_620_6[-1];
                    int32_t data_27 = item_620_6[1];
                    *item_604 = *item_620_6;
                    item_604[1] = data_27;
                }

                if (context[0x12b2])
                {
                    void* data_30 = result_1 & 0x80000001;
                    bool flag_13_1 = !data_30;

                    if (data_30 < 0)
                        flag_13_1 = ((data_30 - 1) | 0xfffffffe) == 0xffffffff;

                    if (flag_13_1)
                    {
                        *entity_31 = *item_618_2;
                        entity_31[1] = item_618_2[1];
                        entity_31[2] = item_618_2[2];
                        *item_614 = *item_618_2;
                        item_614[1] = item_618_2[1];
                        item_614[2] = item_618_2[2];
                        memset(&context_1[9], 0, 0x24);
                    }
                    else
                    {
                        *entity_31 = 0;
                        entity_31[1] = 0;
                        entity_31[2] = 0;
                        *item_614 = 0;
                        item_614[1] = 0;
                        item_614[2] = 0;
                        context_1[9] = 0;
                        *(context_1 + 0x4c) = 0;
                        context_1[0xa] = 0x3f800000;
                        *(context_1 + 0x54) = 0;
                        context_1[0xb] = 0;
                        *(context_1 + 0x5c) = 0x3f800000;
                        context_1[0xc] = 0;
                        *(context_1 + 0x64) = 0;
                        context_1[0xd] = 0x3f800000;
                    }
                }

                Terrain_ConnectGraphNode(context_1);
                result = result_1 + 1;
                result_1 = result;
                item_61c_5 += 0x18;
                item_620_6 = &item_620_6[2];
                item_618_2 = &item_618_2[3];

                if (result > param_5)
                    break;

                data_19 = item_61c_5;
            }
        }
    }
    else if (temp_val & 0x14)
    {
        context_1 = param_3;

        if (temp_val & 4)
        {
            item_60c = &context_1[9];
            item_614 = context_1 + 0x54;
            item_600 = context_1 + 0x6c;
            item_604 = context_1 + 0x74;
            void* entity_13 = 1;
            item_608 = context_1;
            item_610 = &context_1[3];

            if (param_5 > 1)
            {
                long double fpu_val_7_8 = context_1[3] - *context_1;
                void* data_5 = &item_2e8;

                do
                {
                    void* temp_10 = entity_13 + param_4;
                    entity_13 += 1;
                    int32_t temp_11 = context_1[1];
                    data_5 += 0x18;
                    *(data_5 - 0x20) = temp_10 * fpu_val_7_8 / (param_4 + param_5) + *context_1;
                    *(data_5 - 0x18) = temp_11;
                    *(data_5 - 0x14) = *(context_1 + 0xc);
                    *(data_5 - 0x10) = context[0x12a4];
                } while (entity_13 < param_5);
            }
        }

        if (temp_val & 0x10)
        {
            item_610 = &context_1[6];
            item_60c = &context_1[9];
            item_600 = context_1 + 0x6c;
            item_604 = context_1 + 0x7c;
            int32_t entity_16 = 1;
            item_608 = context_1;
            item_614 = &context_1[0xc];

            if (param_5 > 1)
            {
                long double fpu_val_7_11 = item_610[1] - context_1[1];
                void* data_10 = &item_2e8;

                do
                {
                    *(data_10 - 8) = *context_1;
                    *(data_10 - 4) = *(context_1 + 4);
                    long double fpu_val_5_16 = entity_16 + param_4;
                    entity_16 += 1;
                    data_10 += 0x18;
                    *(data_10 - 0x18) = fpu_val_5_16 * fpu_val_7_11 / (param_4 + param_5) + context_1[1];
                    *(data_10 - 0x10) = context[0x12a4];
                } while (entity_16 < param_5);
            }
        }

        result = param_5;
        goto label_52f8ce;
    }
    return result;
}
