// Original IGI.EXE function: SplineObj_Process (VA 0x005008F0; static CFG gate FAIL, CFG score 0.800).
#include "SplineObj_Process.h"
int32_t SplineObj_Process(float context)

{
    int32_t* flagP = context;
    void* data_val = flagP[5];
    char item_11 = 0;
    void* temp_val = QTask_AllocateEvent_2(flagP, g_a7a620);
    char* context_val;

    if (temp_val)
    {
        void* dest_11 = temp_val + 0x178;
        int32_t i = 0xffffffff;
        context_val = &flagP[0x5e];

        while (i)
        {
            bool flag_0_1 = 0 != *dest_11;
            dest_11 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_14 = ~i;
        int32_t source_9;
        int32_t dest_14;
        dest_14 = memcpy(context_val, dest_11 - entity_14, entity_14 & 0xfffffffc);
        memcpy(dest_14, source_9, entity_14 & 3);
        void* dest_15 = temp_val + 0x188;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_15;
            dest_15 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_18 = ~i_1;
        int32_t source_12;
        int32_t dest_18;
        dest_18 = memcpy(&flagP[0x62], dest_15 - entity_18, entity_18 & 0xfffffffc);
        memcpy(dest_18, source_12, entity_18 & 3);
        memcpy(&flagP[0x3e], temp_val + 0xf8, 0x18);
        memcpy(&flagP[0x44], temp_val + 0x110, 0x28);
        long double fpu_val_7_17 = flagP[0x44];
        long double f1_1 = 0.0f;
        fpu_val_7_17 - f1_1;
        float data_15 = flagP[0x47];
        *(flagP + 0x1a1) = *(temp_val + 0x1a1);
        float item_8_2 = data_15;
        *(flagP + 0x1a5) = *(temp_val + 0x1a5);
        float item_4_2 = flagP[0x4a];

        if (!(*(&((fpu_val_7_17 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_17 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_500c79:
            long double fpu_val_6_19 = item_4_2;
            long double fpu_val_5_3 = item_8_2;
            long double fpu_val_6_21 =
                1.0 / sqrtl(fpu_val_7_17 * fpu_val_7_17 + fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_19 * fpu_val_6_19);
            fpu_val_7_17 = fpu_val_7_17 * fpu_val_6_21;
            item_8_2 = item_8_2 * fpu_val_6_21;
            item_4_2 = item_4_2 * fpu_val_6_21;
        }
        else
        {
            long double fpu_val_6_17 = item_8_2;
            long double f2_1 = 0.0f;
            fpu_val_6_17 - f2_1;

            if (!(*(&((fpu_val_6_17 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_17, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_17 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;

            long double fpu_val_6_18 = item_4_2;
            long double f4_1 = 0.0f;
            fpu_val_6_18 - f4_1;

            if (!(*(&((fpu_val_6_18 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_18, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_18 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_500c79;
        }

        int32_t* temp_1 = *(temp_val + 0xf0);
        float item_8_3;
        long double fpu_val_6_30;
        long double fpu_val_7_19;

        if (!temp_1)
        {
            fpu_val_7_19 = fpu_val_7_17 * g_54e5d4;
            item_8_3 = g_54e5d4 * item_8_2;
            fpu_val_6_30 = g_54e5d4;
        }
        else
        {
            long double fpu_val_6_27 = temp_1[0x40] - temp_1[0x3f];
            context = fpu_val_6_27;
            fpu_val_7_19 = fpu_val_7_17 * fpu_val_6_27;
            item_8_3 = context * item_8_2;
            fpu_val_6_30 = context;
        }

        *(flagP + 0xf8) = fpu_val_7_19 + *(flagP + 0xf8);
        *(flagP + 0x100) = item_8_3 + *(flagP + 0x100);
        *(flagP + 0x108) = fpu_val_6_30 * item_4_2 + *(flagP + 0x108);
    }
    else
    {
        temp_val = g_a7a620;
        int32_t* data_2 = QTask_TriggerEvent_2(flagP, temp_val);
        context_val = &flagP[0x5e];

        if (data_2)
        {
            void* dest_1 = &data_2[0x5e];
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool flag_3_1 = 0 != *dest_1;
                dest_1 += 1;
                i_2 -= 1;

                if (!flag_3_1)
                    break;
            }

            int32_t entity_3 = ~i_2;
            int32_t source_2;
            int32_t dest_4;
            dest_4 = memcpy(context_val, dest_1 - entity_3, entity_3 & 0xfffffffc);
            memcpy(dest_4, source_2, entity_3 & 3);
            void* dest_5 = &data_2[0x62];
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool flag_4_1 = 0 != *dest_5;
                dest_5 += 1;
                i_3 -= 1;

                if (!flag_4_1)
                    break;
            }

            int32_t entity_7 = ~i_3;
            int32_t source_5;
            int32_t dest_8;
            dest_8 = memcpy(&flagP[0x62], dest_5 - entity_7, entity_7 & 0xfffffffc);
            memcpy(dest_8, source_5, entity_7 & 3);
            memcpy(&flagP[0x3e], &data_2[0x3e], 0x18);
            memcpy(&flagP[0x44], &data_2[0x44], 0x28);
            float item_c_1 = flagP[0x44];
            long double fpu_val_7_1 = item_c_1;
            long double f3_1 = 0.0f;
            fpu_val_7_1 - f3_1;
            float item_4_1 = flagP[0x4a];
            *(flagP + 0x1a1) = *(data_2 + 0x1a1);
            float entity_13 = flagP[0x47];
            float item_8_1 = entity_13;

            if (!(*(&((fpu_val_7_1 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_500aa3:
                long double fpu_val_7_4 = item_4_1;
                long double fpu_val_6_1 = item_8_1;
                long double fpu_val_5_1 = item_c_1;
                long double fpu_val_7_6 =
                    1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_4 * fpu_val_7_4);
                item_c_1 = item_c_1 * fpu_val_7_6;
                item_8_1 = item_8_1 * fpu_val_7_6;
                item_4_1 = item_4_1 * fpu_val_7_6;
            }
            else
            {
                long double fpu_val_7_2 = item_8_1;
                long double f5_1 = 0.0f;
                fpu_val_7_2 - f5_1;

                if (!(*(&((fpu_val_7_2 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;

                long double fpu_val_7_3 = item_4_1;
                long double f6_1 = 0.0f;
                fpu_val_7_3 - f6_1;

                if (!(*(&((fpu_val_7_3 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_3, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_3 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_500aa3;
            }

            entity_13 = g_a7a620;
            int32_t* data_10 = QTask_TriggerEvent_2(data_2, entity_13);
            long double fpu_val_7_10;

            if (!data_10)
            {
                fpu_val_7_10 = g_54e5d4 * item_c_1;
                item_8_1 = g_54e5d4 * item_8_1;
                item_4_1 = g_54e5d4 * item_4_1;
            }
            else
            {
                void* data_11 = data_10[0x3c];

                if (!data_11)
                    fpu_val_7_10 = item_c_1;
                else
                {
                    long double fpu_val_7_9 = *(data_11 + 0x100) - *(data_11 + 0xfc);
                    context = fpu_val_7_9;
                    fpu_val_7_10 = fpu_val_7_9 * item_c_1;
                    item_8_1 = context * item_8_1;
                    item_4_1 = context * item_4_1;
                }
            }

            item_11 = 1;
            *(flagP + 0xf8) = *(flagP + 0xf8) - fpu_val_7_10;
            *(flagP + 0x100) = *(flagP + 0x100) - item_8_1;
            *(flagP + 0x108) = *(flagP + 0x108) - item_4_1;
        }
        else
        {
            *context_val = g_567c74;
            char entity_2 = g_567c74;
            flagP[0x3e] = 0;
            flagP[0x40] = 0;
            flagP[0x42] = 0;
            flagP[0x62] = entity_2;
            flagP[0x3f] = 0;
            flagP[0x41] = 0;
            flagP[0x43] = 0;
            flagP[0x44] = 0x3f800000;
            flagP[0x45] = 0;
            flagP[0x46] = 0;
            flagP[0x47] = 0;
            flagP[0x48] = 0x3f800000;
            flagP[0x49] = 0;
            flagP[0x4a] = 0;
            flagP[0x4b] = 0;
            flagP[0x4c] = 0x3f800000;
            flagP[0x4d] = 0;
            *(flagP + 0x1a1) = 0;
            *(flagP + 0x1a5) = 0;
        }
    }

    flagP[0x3c] = 0;
    *(flagP + 0x1a2) = *(data_val + 0x4e);
    flagP[0x66] = *(data_val + 0x24);
    flagP[0x69] = 0;
    flagP[0x68] = 0;
    void* data_19 = DynObj_Missing(context_val);
    int16_t result = DynObj_LookupHashItem_6(g_a44344, flagP, data_19);
    result = item_11;
    flagP[0x67] = g_a44344;

    if (!result)
        return result;

    int32_t entity_26 = 0;
    entity_26 = QTask_TriggerEvent_2(flagP, g_a7a620)[7];
    uint32_t data_22 = Script_ParseEnumReal32_8();
    uint32_t temp_4 = data_22 * 3;
    data_22 = g_a7a620;
    return (*(((entity_26 + (temp_4 << 7)) << 2) + &g_a96ae0))(QTask_TriggerEvent_2(flagP, data_22), 0);
}
