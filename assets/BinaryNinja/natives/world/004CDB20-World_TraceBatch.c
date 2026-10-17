// Original IGI.EXE function: World_TraceBatch (VA 0x004CDB20; static CFG gate PASS, CFG score 0.872).
#include "World_TraceBatch.h"
int32_t* World_TraceBatch(int32_t context, int32_t* param_2, double* param_3, double* param_4, int32_t* param_5, char param_6, double* param_7, int32_t param_8, int32_t param_9)

{
    int32_t* result = param_5;
    int32_t item_8 = 1;

    if (result)
    {
        int32_t source_2 = g_a4438c + 1;
        g_a44390 += result;
        double* temp_3 = param_3;
        g_a4438c = source_2;
        double item_3c;
        memcpy(&item_3c, temp_3, 0x18);
        double item_24;
        memcpy(&item_24, temp_3, 0x18);
        double item_34;
        double item_1c;
        double item_14;
        double* context_2;
        long double fpu_val_7_1;
        double item_2c;

        if (result <= 0)
        {
            fpu_val_7_1 = item_2c;
            context_2 = param_4;
        }
        else
        {
            int32_t* result_2 = result;
            fpu_val_7_1 = item_2c;
            double* dest_1 = &param_2[2];
            param_3 = dest_1;

            while (true)
            {
                long double fpu_val_6_1 = *temp_3;
                long double f0_1 = *param_4;
                fpu_val_6_1 - f0_1;
                long double fpu_val_6_2;
                long double f1_1;

                if (*(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
                {
                    fpu_val_6_2 = temp_3[1];
                    f1_1 = param_4[1];
                    fpu_val_6_2 - f1_1;
                }

                if (!(*(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                        (fpu_val_6_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_2, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    item_8 = 0;

                long double fpu_val_6_3 = *temp_3;
                long double f2_1 = item_3c;
                fpu_val_6_3 - f2_1;

                if (*(&((fpu_val_6_3 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_6_4 = *temp_3;
                    long double f3_1 = item_24;
                    fpu_val_6_4 - f3_1;

                    if (*(&((fpu_val_6_4 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_4, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t entity_3 = *(temp_3 + 4);
                        item_24 = *temp_3;
                        *(&item_24 + 4) = entity_3;
                    }
                }
                else
                {
                    int32_t entity_2 = *(temp_3 + 4);
                    item_3c = *temp_3;
                    *(&item_3c + 4) = entity_2;
                }

                long double fpu_val_6_5 = temp_3[1];
                long double f4_1 = item_34;
                fpu_val_6_5 - f4_1;

                if (*(&((fpu_val_6_5 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_5, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_6_6 = temp_3[1];
                    long double f5_1 = item_1c;
                    fpu_val_6_6 - f5_1;

                    if (*(&((fpu_val_6_6 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_6, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_6 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        item_1c = temp_3[1];
                        *(&item_1c + 4) = *(temp_3 + 0xc);
                    }
                }
                else
                {
                    item_34 = temp_3[1];
                    *(&item_34 + 4) = *(temp_3 + 0xc);
                }

                long double f7_1 = temp_3[2];
                fpu_val_7_1 - f7_1;

                if (!(*(&((fpu_val_7_1 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_6_7 = temp_3[2];
                    long double f9_1 = item_14;
                    fpu_val_6_7 - f9_1;

                    if (*(&((fpu_val_6_7 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_7, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_7 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        item_14 = temp_3[2];
                        *(&item_14 + 4) = *(temp_3 + 0x14);
                    }
                }
                else
                    fpu_val_7_1 = temp_3[2];

                long double fpu_val_6_8 = *param_4;
                long double f10_1 = item_3c;
                fpu_val_6_8 - f10_1;

                if (*(&((fpu_val_6_8 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_8, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_8 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_6_9 = *param_4;
                    long double f11_1 = item_24;
                    fpu_val_6_9 - f11_1;

                    if (*(&((fpu_val_6_9 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_9, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_9 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        int32_t entity_8 = *(param_4 + 4);
                        item_24 = *param_4;
                        *(&item_24 + 4) = entity_8;
                    }
                }
                else
                {
                    int32_t entity_7 = *(param_4 + 4);
                    item_3c = *param_4;
                    *(&item_3c + 4) = entity_7;
                }

                long double fpu_val_6_10 = param_4[1];
                long double f12_1 = item_34;
                fpu_val_6_10 - f12_1;

                if (*(&((fpu_val_6_10 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_10, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_10 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                {
                    long double fpu_val_6_11 = param_4[1];
                    long double f13_1 = item_1c;
                    fpu_val_6_11 - f13_1;

                    if (*(&((fpu_val_6_11 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_11, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_11 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        item_1c = param_4[1];
                        *(&item_1c + 4) = *(param_4 + 0xc);
                    }
                }
                else
                {
                    item_34 = param_4[1];
                    *(&item_34 + 4) = *(param_4 + 0xc);
                }

                long double f14_1 = param_4[2];
                fpu_val_7_1 - f14_1;

                if (!(*(&((fpu_val_7_1 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_1, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_6_12 = param_4[2];
                    long double f15_1 = item_14;
                    fpu_val_6_12 - f15_1;

                    if (*(&((fpu_val_6_12 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_12, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        item_14 = param_4[2];
                        *(&item_14 + 4) = *(param_4 + 0x14);
                    }
                }
                else
                    fpu_val_7_1 = param_4[2];

                dest_1[0xa] = 0;
                *param_2 = 0;
                memcpy(dest_1, param_4, 0x18);
                temp_3 = &temp_3[3];
                context_2 = &param_4[3];
                bool flag_4_1 = result_2 != 1;
                param_4 = context_2;
                param_2 = &param_2[0x1c];
                param_3 = &param_3[0xe];
                result_2 -= 1;

                if (!flag_4_1)
                    break;

                dest_1 = param_3;
            }

            result = param_5;
        }
        int32_t entity_15 = result * 0x18;
        double* temp_4 = temp_3 - entity_15;
        double* context_3 = context_2 - entity_15;
        item_3c = item_3c + 2.0;
        param_3 = temp_4;
        double item_34_1 = item_34 + 2.0;
        int32_t* source_9 = &param_2[-((result * 7)) * 4];
        char item_58_1 = param_6;
        double* item_54 = param_7;
        double item_2c_1 = fpu_val_7_1 + 16387.0;
        int32_t* item_44_1 = source_9;
        double* i = nullptr;
        item_24 = item_24 - 2.0;
        double* item_64 = temp_4;
        double* item_60_1 = context_3;
        int32_t* result_1 = result;
        int32_t item_50_1 = param_9;
        int32_t item_4c_1 = 0;
        int32_t item_48;
        strncpy(&item_48, "DCBA", 4);
        double item_1c_1 = item_1c - 2.0;
        double item_14_1 = item_14 - 16387.0;
        int32_t item_88;

        if (param_8 & 0x7fffffff)
        {
            if (!item_8)
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                    {
                        int32_t item_1b0_2 = param_8;
                        void** item_1c0_1 = &item_64;
                        DynObj_ParseConfigFile_9(context, 9, temp_4, context_3, result, i, item_88);
                        temp_4 = param_3;
                        result = param_5;
                    }

                    i += 1;
                } while (i < 6);
            }
            else
            {
                do
                {
                    if (i == 1 || !i || i == 4 || i == 5)
                        result = DynObj_CreateMagicObject_9(context, 0xa, &item_64, &item_24, &item_3c, param_8, i);

                    i += 1;
                } while (i < 6);
            }
        }

        if (param_8 & 0x80000000)
        {
            DynObj_ParseConfigFile_6();
            int32_t source_10 = context;
            int32_t context_4 = *(source_10 + 0xde4);
            int32_t item_70_1 = *(source_10 + 0xc) + 0x20;
            int32_t temp_8 = *(source_10 + 0xde8);
            int32_t item_80_1 = 0;
            int32_t item_7c_1 = 0;
            int32_t item_78_1 = 0;
            int32_t item_74_1 = 0;
            int32_t data_13 = *(source_10 + 0xde0);
            int32_t dest_4 = item_24 + data_13;
            int32_t item_6c_1 = source_10;
            item_88 = 0x40000000;
            int32_t item_84_1 = 0x1e;
            int32_t data_18 = ((item_2c_1 + *(source_10 + 0xde8)) ^ (item_14_1 + temp_8))
                | ((item_34_1 + context_4) ^ (item_1c_1 + context_4)) | ((item_3c + data_13) ^ dest_4);
            param_6 = data_18;
            int32_t eflags_1;
            int32_t data_19;
            data_19 = __bsr_gprv_memv(param_6);
            param_6 = data_19;
            int32_t data_20 = 0x1e - param_6;

            if (data_20 > 0x10)
                data_20 = 0x10;

            double* dest_5 = param_3;
            int32_t* item_1b4_3 = &item_88;
            double* data_21 = DynObj_RegisterSymbol_10(source_10, &item_88, dest_5, data_20);
            result = param_5;

            if (result > 0)
            {
                param_6 = dest_5;
                double* data_23 = context_3 - dest_5;
                int32_t* context_8 = &source_9[0x16];
                param_4 = data_23;
                param_2 = param_5;

                while (true)
                {
                    void item_104;

                    if (DynObj_InsertHashItem_11(&item_104, &item_88, data_21, dest_5, data_23 + dest_5))
                    {
                        double item_fc[0x6];
                        long double fp0_2;
                        long double f8_1;

                        if (*context_8)
                        {
                            double item_c_7 = Sys_PushStack_11(dest_5, &item_fc);
                            fp0_2 = Sys_PushStack_11(dest_5, &context_8[-0x14]);
                            f8_1 = item_c_7;
                            fp0_2 - f8_1;
                        }

                        if (!*context_8 || !(*(&((fp0_2 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
                            | (fp0_2 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            int32_t item_194_1 = 0;
                            int32_t item_10c_1 = 0;
                            int32_t item_108_1 = 0;
                            char item_190_1 = 1;
                            char item_110_1 = 0xff;
                            int32_t item_198_1 = 1;
                            double (* item_19c)[0x6] = &item_fc;
                            DynObj_CreateMagicObject_11(source_10, 0xb, &item_19c, &item_fc, 0x20000000, 4);

                            if (item_190_1)
                            {
                                int32_t item_a4;
                                context_8[2] = item_a4;
                                int32_t item_a0;
                                context_8[3] = item_a0;
                                memcpy(&context_8[-0x14], &item_fc, 0x18);
                                int32_t item_b8;
                                context_8[-3] = item_b8;
                                dest_5 = param_6;
                                source_10 = context;
                                int32_t item_b4;
                                context_8[-2] = item_b4;
                                int32_t item_cc;
                                context_8[-8] = item_cc;
                                *context_8 = 1;
                                context_8[-0x16] = 0;
                                int32_t item_c8;
                                context_8[-7] = item_c8;
                                int32_t item_c4;
                                context_8[-6] = item_c4;
                            }
                        }
                    }

                    context_8 = &context_8[0x1c];
                    dest_5 = &dest_5[3];
                    result = param_2 - 1;
                    bool flag_3_1 = param_2 != 1;
                    param_6 = dest_5;
                    param_2 = result;

                    if (!flag_3_1)
                        break;

                    data_23 = param_4;
                }
            }
        }
    }

    return result;
}
