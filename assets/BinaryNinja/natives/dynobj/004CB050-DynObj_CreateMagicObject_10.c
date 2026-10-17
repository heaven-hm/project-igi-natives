// IGI native provenance: DynObj_CreateMagicObject_10 - 0x004CB050 - CFG score 85.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CB050-DynObj_CreateMagicObject_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_10.h"
int32_t DynObj_CreateMagicObject_10(void* context, int32_t* param_2, double* param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7)

{
    int32_t item_2ec = *param_2;
    int32_t item_2fc = param_2[1];
    int32_t entity_1 = *(param_2[7] + 0xc);
    void* dest_val = param_2[6];
    void* item_308 = param_2[8];
    int32_t i = param_6;
    *(context + 0x58) = 0;
    float item_2e8 = *param_3;
    int32_t item_2e4 = param_3[1];
    int32_t source_val = param_3[2];
    int32_t item_2e0 = source_val;
    long double fpu_val_7_3 = *param_3;
    long double f1 = 0.0;
    fpu_val_7_3 - f1;

    if (*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_4 = item_2e8;
        long double f3_1 = *param_3;
        fpu_val_7_4 - f3_1;

        if (!(*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            item_2e8 -= 1;
    }

    long double fpu_val_7_5 = param_3[1];
    long double f2 = 0.0;
    fpu_val_7_5 - f2;

    if (*(&((fpu_val_7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f2 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_6 = item_2e4;
        long double f5_1 = param_3[1];
        fpu_val_7_6 - f5_1;

        if (!(*(&((fpu_val_7_6 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            item_2e4 -= 1;
    }

    long double fpu_val_7_7 = param_3[2];
    long double f4 = 0.0;
    fpu_val_7_7 - f4;

    if (*(&((fpu_val_7_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f4 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_8 = item_2e0;
        long double f6_1 = param_3[2];
        fpu_val_7_8 - f6_1;

        if (!(*(&((fpu_val_7_8 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            source_val -= 1;
    }

    int32_t entity_4;

    if (!param_4)
    {
        int32_t item_2f8_1 = source_val + 0x4001;
        entity_4 = source_val + 0x4001;
    }
    else
        entity_4 = source_val - 0x4001;

    void* data_7 = param_2[7];
    int32_t item_100[0x20];
    item_100[i] = dest_val;
    int32_t context_val = *(data_7 + 0xde0);
    int32_t source_2 = *(data_7 + 0xde4);
    int32_t data_8 = *(data_7 + 0xde8);
    int32_t context_1 = context_val + item_2e8;
    int32_t data_11 = item_2e4 + source_2;
    int32_t entity_5 = entity_4 + data_8;
    int32_t entity_6 = entity_5 ^ 0x40000000;
    int32_t entity_7 = 0;
    entity_7 = param_2[2];
    int32_t item_304 = param_2[5];
    int32_t data_12 = data_11 ^ 0x40000000;
    int32_t source_5 = entity_7;
    char entity_8 = item_2fc;
    int32_t context_2 = context_1 ^ 0x40000000;
    int32_t item_180[0x20];
    item_180[i] = source_5;
    int32_t context_6 = *(((((data_12 >> (entity_8 & 0x1f) & 1) << 1 | (context_2 >> (entity_8 & 0x1f) & 1))
        + (source_5 << 3)) << 2) + &g_548060) | (entity_6 >> (entity_8 & 0x1f) & 1) << 2;
    int32_t item_280[0x20];
    item_280[i] = (context_6 >> 2 & 1) ^ param_4;
    int32_t item_200[0x20];
    item_200[i] = item_304;
    int32_t item_80[0x20];
    item_80[i] = item_308;
    DynObj_UpdateDynTree_6();
    void* item_300;

    if (g_b97d20 && item_308 && *(item_308 + 0x38) & 0x80)
    {
        void* data_24 = *(item_308 + 0x2c);
        item_300 = data_24;

        while (true)
        {
            if (*(data_24 + 0x5c) & 0x80)
            {
                int32_t entity_14 = 0;
                entity_14 = *(data_24 + 0x1c);
                (*((entity_14 << 2) + &g_a9c4e0))(data_24, *(data_24 + 0x48));
                data_24 = item_300;
            }

            void* data_23 = *(data_24 + 0x58);
            item_300 = data_23;

            if (!data_23)
                break;

            data_24 = item_300;
        }
    }

    if (1 << (context_6 & 0x1f) & *(dest_val + 0x18))
    {
        void* data_26 = item_308;
        int32_t temp_5 = item_2fc - 1;
        int32_t item_2f4_1 = temp_5;

        while (i < 0x10)
        {
            if (g_b97d20 && data_26)
            {
                void* data_36 = *(item_308 + (((entity_5 >> ((temp_5 - 1) & 0x1f) & 4)
                    | (data_11 >> (temp_5 & 0x1f) & 2) | (context_1 >> (item_2fc & 0x1f) & 1)) << 2) + 0xc);
                item_308 = data_36;

                if (data_36 && *(data_36 + 0x38) & 0x80)
                {
                    void* data_38 = *(data_36 + 0x2c);
                    item_300 = data_38;

                    while (true)
                    {
                        if (*(data_38 + 0x5c) & 0x80)
                        {
                            int32_t entity_22 = 0;
                            entity_22 = *(data_38 + 0x1c);
                            (*((entity_22 << 2) + &g_a9c4e0))(data_38, *(data_38 + 0x48));
                            data_38 = item_300;
                        }

                        void* data_39 = *(data_38 + 0x58);
                        item_300 = data_39;

                        if (!data_39)
                            break;

                        data_38 = item_300;
                    }
                }
            }

            i += 1;
            int32_t data_41 = item_2ec >> 1;
            item_2fc -= 1;
            item_2ec = data_41;
            item_2f4_1 -= 1;
            int32_t entity_26;

            entity_26 = !(context_6 & 4) ? item_304 - data_41 : item_304 + data_41;

            int32_t data_42 = 0;
            data_42 = *(context_6 + dest_val + 0x10);
            item_304 = entity_26;
            int32_t data_44;
            int32_t entity_29;

            if (source_5 >= 4)
            {
                entity_29 = (source_5 - (data_42 & 3)) & 3;
                data_44 = (data_42 ^ source_5) & 4;
            }
            else
            {
                entity_29 = (data_42 ^ source_5) & 4;
                data_44 = (data_42 + source_5) & 3;
            }

            int32_t temp_15 = 0;
            source_5 = entity_29 + data_44;
            temp_15 = *(dest_val + (context_6 << 1));
            char entity_33 = item_2fc;
            item_180[i] = source_5;
            dest_val = (temp_15 << 5) + entity_1;
            item_100[i] = dest_val;
            item_200[i] = item_304;
            context_6 = *(((((data_12 >> (entity_33 & 0x1f) & 1) << 1 | (context_2 >> (entity_33 & 0x1f) & 1))
                + (source_5 << 3)) << 2) + &g_548060) | (entity_6 >> (entity_33 & 0x1f) & 1) << 2;
            char entity_36 = *(dest_val + 0x18);
            item_280[i] = (context_6 >> 2 & 1) ^ param_4;
            data_26 = item_308;
            item_80[i] = data_26;

            if (!(1 << (context_6 & 0x1f) & entity_36))
                break;

            temp_5 = item_2f4_1;
        }
    }

    int32_t item_2f8_3 = item_2fc - 1;

    while (true)
    {
        if (i == 0x10)
        {
            double item_298 = (context_1 & 0xffff8000) - context_val + item_2ec;
            double item_290_1 = (data_11 & 0xffff8000) - source_2 + item_2ec;
            double item_288_1 = item_304 - data_8;
            int32_t item_2b0;

            if (DynObj_InsertHashItem_10(*(dest_val + 0x1c), &item_298, param_3, &item_2b0, i, &item_300, source_5, param_4,
                &item_2e8))
            {
                double item_2a0;
                long double fpu_val_7_13 = param_3[2] - item_2a0;
                long double f7_1 = 0.0;
                fpu_val_7_13 - f7_1;

                if (*(&((fpu_val_7_13 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_13, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_13 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    fpu_val_7_13 = -(fpu_val_7_13);

                long double fpu_val_6_1 = param_5;
                fpu_val_7_13 - fpu_val_6_1;

                if (!(*(&((fpu_val_7_13 < fpu_val_6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_13, fpu_val_6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_13 == fpu_val_6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    break;

                void* dest_8 = item_300 ^ 1;
                *(context + 0x38) = item_2e8;
                *(context + 0x3c) = item_2e4;
                *(context + 8) = item_2b0;
                *(context + 0x40) = item_2e0;
                int32_t item_2a8;
                *(context + 0x10) = item_2a8;
                int32_t item_2ac;
                *(context + 0xc) = item_2ac;
                int32_t item_2a4;
                *(context + 0x14) = item_2a4;
                *(context + 0x18) = item_2a0;
                *(context + 0x1c) = *(&item_2a0 + 4);
                long double fpu_val_7_16 = param_3[2] - item_2a0;
                long double f8 = 0.0;
                fpu_val_7_16 - f8;

                if (*(&((fpu_val_7_16 < f8 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_16, f8) ? 1 : 0) << 0xa
                        | (fpu_val_7_16 == f8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    fpu_val_7_16 = -(fpu_val_7_16);

                *(context + 0x58) = 1;
                *(context + 0x60) = fpu_val_7_16;

                if (param_7)
                {
                    void* data_95 = DynObj_ParseConfigFile_10(param_2[7], context + 8);
                    void* entity_68 = item_300;

                    if (entity_68)
                    {
                        entity_68 = data_95;
                        item_300 = entity_68;
                    }

                    if (dest_8)
                        dest_8 = data_95;

                    *(context + 0x4c) = *(param_2[7] + (entity_68 << 2) + 0xd3c);
                    *(context + 0x50) = *(param_2[7] + (dest_8 << 2) + 0xd3c);
                }

                DynObj_LinkDynamicCube_6();
                return 1;
            }
        }

        int32_t data_63 = item_280[i];

        if (data_63 && i < 0x10)
        {
            char entity_43 = item_2fc;
            item_280[i] = data_63 - 1;
            int32_t data_65 = (data_63 - 1) ^ param_4;
            int32_t data_68 = context_2 >> (entity_43 & 0x1f) & 1;
            int32_t entity_45 = *((((((data_12 >> (entity_43 & 0x1f) & 1) | (data_65 * 2)) << 1 | data_68)
                + (source_5 << 3)) << 2) + &g_548060);
            int32_t temp_41 = (data_12 >> (item_2f8_3 & 0x1f) & 2) | data_65 << 2 | data_68;

            if (!(*(dest_val + 0x18) & 1 << (entity_45 & 0x1f)))
                continue;
            else
            {
                i += 1;
                int32_t data_71 = item_2ec >> 1;
                item_2ec = data_71;
                item_2fc -= 1;
                item_2f8_3 -= 1;
                int32_t entity_54;

                entity_54 = !data_65 ? item_304 - data_71 : item_304 + data_71;

                item_304 = entity_54;
                int32_t data_72 = 0;
                data_72 = *(entity_45 + dest_val + 0x10);

                source_5 = source_5 >= 4 ? ((source_5 - (data_72 & 3)) & 3) + ((data_72 ^ source_5) & 4)
                    : ((data_72 ^ source_5) & 4) + ((data_72 + source_5) & 3);

                int32_t data_77 = 0;
                item_280[i] = 2;
                item_180[i] = source_5;
                data_77 = *(dest_val + (entity_45 << 1));
                item_200[i] = item_304;
                dest_val = (data_77 << 5) + entity_1;
                bool flag_6_1 = !g_b97d20;
                item_100[i] = dest_val;
                void* data_80;

                if (flag_6_1)
                    data_80 = item_308;
                else
                {
                    data_80 = item_308;

                    if (data_80)
                    {
                        if (!i)
                            temp_41 = 7 - temp_41;

                        void* temp_42 = *(data_80 + (temp_41 << 2) + 0xc);
                        item_308 = temp_42;

                        if (temp_42 && *(temp_42 + 0x38) & 0x80)
                        {
                            void* i_1 = *(temp_42 + 0x2c);

                            do
                            {
                                if (*(i_1 + 0x5c) & 0x80)
                                {
                                    int32_t entity_64 = 0;
                                    entity_64 = *(i_1 + 0x1c);
                                    (*((entity_64 << 2) + &g_a9c4e0))(i_1, *(i_1 + 0x48));
                                }

                                i_1 = *(i_1 + 0x58);
                            } while (i_1);
                        }

                        data_80 = item_308;
                    }
                }

                item_80[i] = data_80;
                continue;
            }
        }

        i -= 1;
        item_2ec <<= 1;
        item_2fc += 1;
        item_2f8_3 += 1;

        if (i < param_6)
            break;

        if (g_b97d20 && item_308 && *(item_308 + 0x38) & 0x100)
        {
            void* i_2 = *(item_308 + 0x2c);

            do
            {
                if (*(i_2 + 0x5c) & 0x100)
                {
                    int32_t data_85 = 0;
                    data_85 = *(i_2 + 0x1c);
                    (*((data_85 << 2) + &g_a9cae0))(i_2, *(i_2 + 0x48));
                }

                i_2 = *(i_2 + 0x58);
            } while (i_2);
        }

        dest_val = item_100[i];
        source_5 = item_180[i];
        item_304 = item_200[i];
        item_308 = item_80[i];
    }

    DynObj_LinkDynamicCube_6();
    return 0;
}
