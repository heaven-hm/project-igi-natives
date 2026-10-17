// IGI native provenance: DynObj_CreateMagicObject_11 - 0x004CE090 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CE090-DynObj_CreateMagicObject_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_11.h"
uint32_t DynObj_CreateMagicObject_11(int32_t context, char param_2, int32_t param_3, double* param_4, int32_t param_5, int32_t param_6)

{
    DynObj_InsertHashItem_12(context, param_6);
    uint32_t result = param_2;
    uint32_t result_1 = result;

    if (*(context + ((result + param_6 * 0xfe) << 1) + 0x118))
    {
        DynObj_LookupHashItem_12(context, param_6);
        double* data_1 = param_4;
        long double fpu_val_7_1 = *data_1;
        double item_20;
        memcpy(&item_20, data_1, 0x18);
        int32_t entity_4 = fpu_val_7_1 + *(context + 0xde0);
        int32_t temp_2 = data_1[1] + *(context + 0xde4);
        int64_t item_4c_3 = data_1[2];
        int32_t source_3 = item_4c_3 + *(context + 0xde8);
        int32_t* item_60_1 = *(context + (param_6 << 2) + 0x28);
        int32_t temp_4 = *(context + (param_6 << 2) + 0xd0);
        int32_t item_5c_1 = temp_4;
        double item_38;
        memcpy(&item_38, context + param_6 * 0x18 + 0x40, 0x18);

        while (true)
        {
            void* entity_8 = item_60_1[0xf];
            int64_t item_54;
            double item_30;

            if (entity_8)
            {
                *(&item_4c_3 + 4) = 0;
                item_4c_3 = *item_60_1;
                long double fpu_val_7_4 = item_4c_3;
                long double fpu_val_6_3 = *(entity_8 + 8) * 0.5f / fpu_val_7_4;
                item_54 = (*data_1 - item_38 + fpu_val_7_4) * fpu_val_6_3;
                int32_t temp_6 = item_54;
                item_54 = (data_1[1] - item_30 + fpu_val_7_4) * fpu_val_6_3;
                result = SoundSys_InitSoundSys_3(entity_8, temp_6, item_54);

                if (!result)
                    break;

                temp_4 = item_5c_1;
            }

            for (void* i = item_60_1[0xb]; i; i = *(i + 0x58))
            {
                int32_t entity_9 = 0;
                entity_9 = *(i + 0x1c);
                int32_t dest_3 = *(((entity_9 + result_1 * 0x180) << 2) + &g_a96ae0);

                if (dest_3)
                {
                    float data_5 = *(i + 0x44);
                    long double fpu_val_7_9 = *(i + 0x20) - data_5;
                    long double f1_1 = item_20;
                    fpu_val_7_9 - f1_1;

                    if (*(&((fpu_val_7_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_9, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_11 = data_5 + *(i + 0x20);
                        long double f2_1 = item_20;
                        fpu_val_7_11 - f2_1;

                        if (!(*(&((fpu_val_7_11 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fpu_val_7_13 = *(i + 0x28) - data_5;
                            double item_18;
                            long double f3_1 = item_18;
                            fpu_val_7_13 - f3_1;

                            if (*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double fpu_val_7_15 = data_5 + *(i + 0x28);
                                long double f4_1 = item_18;
                                fpu_val_7_15 - f4_1;

                                if (!(*(&((fpu_val_7_15 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_15, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_15 == f4_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_17 = *(i + 0x30) - data_5;
                                    double item_10;
                                    long double f5_1 = item_10;
                                    fpu_val_7_17 - f5_1;

                                    if (*(&((fpu_val_7_17 < f5_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_17, f5_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_17 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double fpu_val_7_19 = data_5 + *(i + 0x30);
                                        long double f6_1 = item_10;
                                        fpu_val_7_19 - f6_1;

                                        if (!(*(&((fpu_val_7_19 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_19, f6_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_19 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            && *(entity_9 * 0x30 + 0xaf5f0c) & param_5)
                                        {
                                            dest_3(i, param_3);
                                            temp_4 = item_5c_1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            char entity_13 = temp_4;
            result = ((source_3 >> (entity_13 & 0x1f) & 1) << 1 | (temp_2 >> (entity_13 & 0x1f) & 1)) << 1
                | (entity_4 >> (entity_13 & 0x1f) & 1);
            int32_t* entity_15 = item_60_1[result + 3];
            item_60_1 = entity_15;

            if (!entity_15)
                break;

            temp_4 -= 1;
            item_5c_1 = temp_4;
            double item_28;

            if (temp_4 == 0x1d)
            {
                uint32_t data_18 = ~result;
                item_54 = ((data_18 & 1) << 0x1e) - 0x20000000;
                long double fpu_val_7_27 = item_54 + item_38;
                item_54 = ((data_18 & 2) << 0x1d) - 0x20000000;
                item_38 = fpu_val_7_27;
                long double fpu_val_7_28 = item_54;
                item_54 = ((data_18 & 4) - 2) << 0x1c;
                data_1 = param_4;
                item_30 = fpu_val_7_28 + item_30;
                item_28 = item_54 + item_28;
            }
            else
            {
                char entity_18 = temp_4;
                item_54 = ((result & 1) * 2 - 1) << (entity_18 & 0x1f);
                item_38 = item_54 + item_38;
                item_54 = ((result & 2) - 1) << (entity_18 & 0x1f);
                long double fpu_val_7_23 = item_54 + item_30;
                item_54 = ((result >> 1 & 2) - 1) << (entity_18 & 0x1f);
                data_1 = param_4;
                item_30 = fpu_val_7_23;
                item_28 = item_54 + item_28;
            }
        }
    }

    return result;
}
