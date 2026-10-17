// IGI native provenance: DynObj_CreateMagicObject_9 - 0x004C7770 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004C7770-DynObj_CreateMagicObject_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_9.h"
uint32_t DynObj_CreateMagicObject_9(int32_t context, char param_2, int32_t param_3, double* param_4, double* param_5, int32_t param_6, int32_t param_7)

{
    int16_t item_4d4 = -1;
    DynObj_InsertHashItem_12(context, param_7);
    uint32_t result = param_2;
    uint32_t result_2 = result;

    if (*(context + ((result + param_7 * 0xfe) << 1) + 0x118))
    {
        double item_478;
        memcpy(&item_478, param_4, 0x18);
        int32_t item_50c_1 = item_478;
        double item_490;
        memcpy(&item_490, param_5, 0x18);
        int32_t data_3 = *(context + 0xde0);
        int32_t entity_4 = item_50c_1 + data_3;
        int32_t dest_2 = item_490 + data_3;
        int32_t entity_5 = *(context + 0xde4);
        double item_470;
        int32_t temp_2 = item_470 + entity_5;
        int32_t temp_3 = *(context + 0xde8);
        double item_468;
        int32_t source_4 = item_468 + temp_3;
        double item_488;
        int32_t source_6 = item_488 + entity_5;
        double item_480;
        int32_t entity_7 = item_480 + temp_3;
        int32_t entity_9 = *(result_2 + 0xa969e0);

        if (entity_9 != 0xffffffff)
            item_4d4 = 1 << (entity_9 & 0x1f);

        DynObj_LookupHashItem_12(context, param_7);
        int32_t data_5 = *(context + (param_7 << 2) + 0x28);
        int32_t item_460;
        memcpy(&item_460, data_5, 0x40);
        int32_t entity_14 = *(context + (param_7 << 2) + 0xd0);
        int32_t item_4f4_1 = entity_14;
        int32_t item_510_1 = item_460;
        char item_430;

        if (entity_14 != 0x1e)
            entity_14 = item_430;
        else
        {
            memcpy(&item_460, data_5, 0x40);
            char item_430_1 = 0;
            int32_t i = 0;
            int32_t item_500_1 = 7;
            void item_438;
            int32_t* data_6 = &item_438;
            void item_454;
            int32_t* dest_3 = &item_454;

            do
            {
                int32_t entity_12 = *dest_3;
                *dest_3 = *data_6;
                *data_6 = entity_12;
                entity_14 = item_500_1;
                dest_3 = &dest_3[1];
                data_6 -= 4;
                char temp_9 = (item_430 >> (i & 0x1f) & 1) << (entity_14 & 0x1f);
                entity_14 = item_430_1;
                entity_14 |= temp_9;
                i += 1;
                item_430_1 = entity_14;
                item_500_1 -= 1;
            } while (i < 4);
        }
        long double fpu_val_7_7 = *(context + 0xde0);
        int32_t temp_12 = param_7 * 3;
        int32_t* item_3f0 = &item_460;
        uint8_t data_8 = entity_14;
        uint32_t result_1 = 1;
        uint8_t item_3eb_1 = data_8;
        char item_3ea_1 = 0;
        int32_t item_50c_7 = fpu_val_7_7 + *(context + (temp_12 << 3) + 0x40);
        int32_t item_3e8_1 = item_50c_7;
        int32_t item_50c_8 = *(context + 0xde4) + *(context + ((param_7 * 3 + 9) << 3));
        int32_t item_3e4_1 = item_50c_8;
        int64_t item_50c_9 = *(context + 0xde8) + *(context + (temp_12 << 3) + 0x50);
        int32_t temp_14 = item_50c_9;
        int32_t item_3e0_1 = temp_14;
        uint8_t item_3eb_2;

        if (dest_2 <= item_50c_7)
        {
            entity_14 &= 0x55;
            data_8 = entity_14;
            item_3eb_2 = data_8;
        }
        else if (entity_4 >= item_50c_7)
        {
            entity_14 &= 0xaa;
            data_8 = entity_14;
            item_3eb_2 = data_8;
        }
        uint8_t item_3eb_3;

        if (source_6 <= item_50c_8)
        {
            data_8 &= 0x33;
            item_3eb_3 = data_8;
        }
        else if (temp_2 >= item_50c_8)
        {
            data_8 &= 0xcc;
            item_3eb_3 = data_8;
        }
        uint8_t item_3eb_4;

        if (entity_7 <= temp_14)
        {
            data_8 &= 0xf;
            item_3eb_4 = data_8;
        }
        else if (source_4 >= temp_14)
        {
            data_8 &= 0xf0;
            item_3eb_4 = data_8;
        }

        if (!(data_8 & 0xf))
        {
            if (!(data_8 & 0x30))
                data_8 = (data_8 >> 6 & 1) + 6;
            else
                data_8 = (data_8 >> 4 & 1) + 4;
        }
        else if (!(data_8 & 3))
            data_8 = (data_8 >> 2 & 1) + 2;
        else
            data_8 &= 1;

        int32_t* source_13 = &item_3f0;
        uint32_t result_3 = result_2;
        uint8_t item_3ec_1 = data_8 ^ 1;
        int32_t item_4fc_1 = item_4f4_1 - 1;
        int16_t data_11 = item_4d4;

        while (true)
        {
            entity_14 = *(source_13 + 5);
            void* temp_15 = *source_13;
            int32_t* item_504_1;

            if (entity_14)
            {
                data_11 = source_13[1];
                uint32_t entity_26 = data_11;
                void* context_1 = *(temp_15 + (entity_26 << 2) + 0xc);
                char entity_27 = *(source_13 + 5) ^ 1 << (entity_26 & 0x1f);
                *(source_13 + 5) = entity_27;

                if (entity_27)
                {
                    if (!(entity_27 & 0xf))
                    {
                        if (!(entity_27 & 0x30))
                            source_13[1] = (*(source_13 + 5) >> 6 & 1) + 6;
                        else
                            source_13[1] = (*(source_13 + 5) >> 4 & 1) + 4;
                    }
                    else if (!(entity_27 & 3))
                        source_13[1] = (*(source_13 + 5) >> 2 & 1) + 2;
                    else
                        source_13[1] = entity_27 & 1;

                    source_13[1] ^= 1;
                }

                entity_14 = item_4fc_1 - 1;
                item_4f4_1 -= 1;
                result_1 += 1;
                uint8_t data_22 = *(context_1 + 0x30);
                item_4fc_1 = entity_14;
                item_510_1 u>>= 1;
                source_13[5] = context_1;
                *(source_13 + 0x19) = data_22;
                entity_14 = *(source_13 + 6);
                item_504_1 = &source_13[5];

                if (!entity_14)
                {
                    uint8_t context_2 = data_22;
                    *(item_504_1 + 6) = 0;

                    if (context_2)
                    {
                        char entity_29 = item_4f4_1;
                        uint32_t data_27 = data_11 * 0xc;
                        int32_t* source_19 = item_504_1;
                        source_19[2] = (*(data_27 + 0x548000) << (entity_29 & 0x1f)) + source_13[2];
                        int32_t data_29 = *(data_27 + 0x548008) << (item_4f4_1 & 0x1f);
                        source_19[3] = (*(data_27 + &g_548004) << (entity_29 & 0x1f)) + source_13[3];
                        int32_t data_30 = data_29 + source_13[4];
                        entity_14 = source_19[2];
                        source_19[4] = data_30;

                        if (dest_2 <= entity_14)
                            context_2 &= 0x55;
                        else if (entity_4 >= entity_14)
                            context_2 &= 0xaa;

                        int32_t temp_31 = source_19[3];

                        if (source_6 <= temp_31)
                            context_2 &= 0x33;
                        else if (temp_2 >= temp_31)
                            context_2 &= 0xcc;

                        if (entity_7 <= data_30)
                            context_2 &= 0xf;
                        else if (source_4 >= data_30)
                            context_2 &= 0xf0;

                        if (context_2)
                        {
                            void** temp_33 = context_1 + 0xc;
                            int32_t item_4ec_1 = 0;
                            int32_t* i_1 = &g_548004;
                            void** item_4f8_2 = temp_33;

                            do
                            {
                                if (context_2 & 1 << (item_4ec_1 & 0x1f))
                                {
                                    void* data_32 = *item_4f8_2;
                                    temp_33 = *(data_32 + 0x3a);
                                    temp_33 |= *(data_32 + 0x38);

                                    if (temp_33 & item_4d4)
                                    {
                                        void* temp_35 = *(data_32 + 0x3c);

                                        if (temp_35)
                                        {
                                            long double fpu_val_7_26 = *param_5 - *param_4;
                                            long double f6_1 = 4.0;
                                            fpu_val_7_26 - f6_1;
                                            long double fpu_val_6_2;
                                            long double f7_1;

                                            if (*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41)
                                            {
                                                fpu_val_6_2 = param_5[1] - param_4[1];
                                                f7_1 = 4.0;
                                                fpu_val_6_2 - f7_1;
                                            }

                                            if (!(*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41) || !(*(&((fpu_val_6_2 < f7_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_6_2, f7_1) ? 1 : 0) << 0xa
                                                | (fpu_val_6_2 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 0x41))
                                            {
                                                *(&item_50c_9 + 4) = 0;
                                                double item_418_1 = (*i_1 << (item_4fc_1 & 0x1f))
                                                    - *(context + 0xde4) + temp_31;
                                                item_50c_9 = **item_4f8_2;
                                                float item_4f0_2 = item_50c_9;
                                                float item_514_7 = *(temp_35 + 8) * 0.5f / item_4f0_2;
                                                float item_4a8 = (*param_4 - ((i_1[-1]
                                                    << (item_4fc_1 & 0x1f)) - *(context + 0xde0) + entity_14)
                                                    + item_4f0_2) * item_514_7;
                                                float item_4a4_1 =
                                                    (param_4[1] - item_418_1 + item_4f0_2) * item_514_7;
                                                float item_4a0 = item_514_7 * fpu_val_7_26;

                                                if (!SoundSys_LoadSoundDef_3(temp_35, item_4a8, item_4a4_1,
                                                        item_4a0, (param_5[1] - param_4[1]) * item_514_7))
                                                    context_2 &= ~(1 << (item_4ec_1 & 0x1f));
                                            }
                                            else
                                            {
                                                int32_t item_494_1 = 0;
                                                int32_t data_43 = *(temp_35 + 8);
                                                float item_4f0_1 = **item_4f8_2;
                                                float item_514_4 = data_43 * 0.5f / item_4f0_1;
                                                int32_t item_4b0_1 = (*param_4 - ((i_1[-1]
                                                    << (item_4fc_1 & 0x1f)) - *(context + 0xde0) + entity_14)
                                                    + item_4f0_1) * item_514_4;
                                                int32_t item_4b0_2 = (param_4[1] - ((*i_1
                                                    << (item_4fc_1 & 0x1f)) - *(context + 0xde4) + temp_31)
                                                    + item_4f0_1) * item_514_4;

                                                if (item_4b0_1 < data_43 && item_4b0_2 < data_43 &&
                                                        !SoundSys_InitSoundSys_3(temp_35, item_4b0_1, item_4b0_2))
                                                    context_2 &= ~(1 << (item_4ec_1 & 0x1f));
                                            }
                                        }
                                    }
                                    else
                                        context_2 &= ~(1 << (item_4ec_1 & 0x1f));
                                }

                                i_1 = &i_1[3];
                                temp_33 = &item_4f8_2[1];
                                item_4ec_1 += 1;
                                item_4f8_2 = temp_33;
                            } while (i_1 < 0x548064);

                            source_19 = item_504_1;
                        }

                        *(source_19 + 5) = context_2;

                        if (context_2)
                        {
                            if (!(context_2 & 0xf))
                            {
                                if (!(context_2 & 0x30))
                                    context_2 = (context_2 >> 6 & 1) + 6;
                                else
                                    context_2 = (context_2 >> 4 & 1) + 4;
                            }
                            else if (!(context_2 & 3))
                                context_2 = (context_2 >> 2 & 1) + 2;
                            else
                                context_2 &= 1;

                            source_19[1] = context_2;
                            source_19[1] = context_2 ^ 1;
                        }

                        if (dest_2 >= item_510_1 + entity_14)
                        {
                            entity_14 -= item_510_1;

                            if (entity_4 <= entity_14)
                            {
                                entity_14 = source_6;

                                if (entity_14 >= temp_31 + item_510_1)
                                {
                                    entity_14 = item_510_1;

                                    if (temp_2 <= temp_31 - entity_14)
                                    {
                                        int32_t data_67 = item_504_1[4];
                                        entity_14 = data_67 + item_510_1;

                                        if (entity_7 >= entity_14)
                                        {
                                            entity_14 = source_4;

                                            if (entity_14 <= data_67 - item_510_1)
                                                *(item_504_1 + 6) = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    *(source_13 + 0x1a) = 1;

                    if (data_22 > 0)
                    {
                        if (!(data_22 & 0xf))
                        {
                            if (!(data_22 & 0x30))
                            {
                                source_13[6] = (data_22 >> 6 & 1) + 6;
                                source_13[6] = ((data_22 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                source_13[6] = (data_22 >> 4 & 1) + 4;
                                source_13[6] = ((data_22 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(data_22 & 3))
                        {
                            source_13[6] = (data_22 >> 2 & 1) + 2;
                            source_13[6] = ((data_22 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            data_22 &= 1;
                            source_13[6] = data_22;
                            source_13[6] = data_22 ^ 1;
                        }
                    }
                }
            }
            else
            {
                entity_14 = *(source_13 + 6);
                bool flag_4_1 = !entity_14;
                entity_14 = *(temp_15 + 0x38);

                if (flag_4_1)
                {
                    if (entity_14 & data_11)
                    {
                        for (void* i_2 = *(temp_15 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                        {
                            float temp_21 = *(i_2 + 0x44);
                            long double fpu_val_7_14 = *(i_2 + 0x20) - temp_21;
                            long double f0_1 = item_490;
                            fpu_val_7_14 - f0_1;

                            if (*(&((fpu_val_7_14 < f0_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_14, f0_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_14 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double fpu_val_7_16 = temp_21 + *(i_2 + 0x20);
                                long double f1_1 = item_478;
                                fpu_val_7_16 - f1_1;

                                if (!(*(&((fpu_val_7_16 < f1_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_16, f1_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_16 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_18 = *(i_2 + 0x28) - temp_21;
                                    long double f2_1 = item_488;
                                    fpu_val_7_18 - f2_1;

                                    if (*(&((fpu_val_7_18 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_18, f2_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_18 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double fpu_val_7_20 = temp_21 + *(i_2 + 0x28);
                                        long double f3_1 = item_470;
                                        fpu_val_7_20 - f3_1;

                                        if (!(*(&((fpu_val_7_20 < f3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_20, f3_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_20 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double fpu_val_7_22 = *(i_2 + 0x30) - temp_21;
                                            long double f4_1 = item_480;
                                            fpu_val_7_22 - f4_1;

                                            if (*(&((fpu_val_7_22 < f4_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_22, f4_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_22 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double fpu_val_7_24 = temp_21 + *(i_2 + 0x30);
                                                long double f5_1 = item_468;
                                                fpu_val_7_24 - f5_1;

                                                if (!(*(&((fpu_val_7_24 < f5_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_24, f5_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_24 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                                {
                                                    int32_t data_15 = 0;
                                                    data_15 = *(i_2 + 0x1c);

                                                    if (*(data_15 * 0x30 + 0xaf5f0c) & param_6)
                                                    {
                                                        int32_t data_16 = *(
                                                            ((result_3 * 0x180 + data_15) << 2) +
                                                            &g_a96ae0);

                                                        if (data_16)
                                                            data_16(i_2, param_3);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (entity_14 & data_11)
                {
                    for (void* i_3 = *(temp_15 + 0x2c); i_3; i_3 = *(i_3 + 0x58))
                    {
                        int32_t data_12 = 0;
                        data_12 = *(i_3 + 0x1c);

                        if (*(data_12 * 0x30 + 0xaf5f0c) & param_6)
                        {
                            int32_t data_13 = *(((result_3 * 0x180 + data_12) << 2) + &g_a96ae0);

                            if (data_13)
                                data_13(i_3, param_3);
                        }
                    }
                }

                item_504_1 = source_13 - 0x14;
                entity_14 = item_510_1 << 1;
                item_4f4_1 += 1;
                item_4fc_1 += 1;
                item_510_1 = entity_14;
                result_1 -= 1;
            }

            result = result_1;

            if (!result)
                break;

            result_3 = result_2;
            data_11 = item_4d4;
            source_13 = item_504_1;
        }
    }

    return result;
}
