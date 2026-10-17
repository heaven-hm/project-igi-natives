// IGI native provenance: DynObj_RemoveSymbol_9 - 0x004C9750 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004C9750-DynObj_RemoveSymbol_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RemoveSymbol_9.h"
uint32_t DynObj_RemoveSymbol_9(int32_t context, int32_t* param_2, double* param_3, uint32_t param_4, char param_5, int32_t param_6, int32_t param_7)

{
    DynObj_ParseConfigFile_6();
    int32_t context_val = context;
    int32_t data_val = *(context_val + 0xc);
    double item_2c;
    memcpy(&item_2c, param_3, 0x18);
    double item_44;
    memcpy(&item_44, param_3, 0x18);
    int32_t item_50 = data_val + 0x20;
    int32_t item_4c = context_val;
    int32_t item_68 = 0x40000000;
    int32_t item_64 = 0x1e;
    int32_t item_60 = 0;
    int32_t item_5c = 0;
    int32_t item_58 = 0;
    int32_t item_54 = 0;
    char item_f4[0x80];
    double item_3c;
    double item_34;
    double item_24;
    double item_1c;

    if (param_4 > 0)
    {
        int64_t item_c;
        *(&item_c + 4) = param_4;
        long double fpu_val_7_1 = item_1c;
        int32_t* source_2 = param_2;
        double* temp_1 = &param_3[2];
        memset(memset(&item_f4, 0x1010101, param_4 & 0xfffffffc), 1, param_4 & 3);
        uint32_t i_1 = param_4;
        uint32_t i;

        do
        {
            long double fpu_val_6_1 = item_44;
            long double f0_1 = temp_1[-2];
            fpu_val_6_1 - f0_1;

            if (!(*(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_2 = item_2c;
                long double f1_1 = temp_1[-2];
                fpu_val_6_2 - f1_1;

                if (!(*(&((fpu_val_6_2 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    int32_t dest_3 = *(temp_1 - 0xc);
                    item_2c = temp_1[-2];
                    *(&item_2c + 4) = dest_3;
                }
            }
            else
            {
                int32_t dest_2 = *(temp_1 - 0xc);
                item_44 = temp_1[-2];
                *(&item_44 + 4) = dest_2;
            }

            long double fpu_val_6_3 = item_3c;
            long double f2_1 = temp_1[-1];
            fpu_val_6_3 - f2_1;

            if (!(*(&((fpu_val_6_3 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_3, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_4 = item_24;
                long double f3_1 = temp_1[-1];
                fpu_val_6_4 - f3_1;

                if (!(*(&((fpu_val_6_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    item_24 = temp_1[-1];
                    *(&item_24 + 4) = *(temp_1 - 4);
                }
            }
            else
            {
                item_3c = temp_1[-1];
                *(&item_3c + 4) = *(temp_1 - 4);
            }

            long double fpu_val_6_5 = item_34;
            long double f5_1 = *temp_1;
            fpu_val_6_5 - f5_1;

            if (!(*(&((fpu_val_6_5 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_5, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_5 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f6_1 = *temp_1;
                fpu_val_7_1 - f6_1;

                if (!(*(&((fpu_val_7_1 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_1, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    fpu_val_7_1 = *temp_1;
            }
            else
            {
                item_34 = *temp_1;
                *(&item_34 + 4) = *(temp_1 + 4);
            }

            *source_2 = 0;
            temp_1 = &temp_1[3];
            source_2 = &source_2[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        item_1c = fpu_val_7_1;
        context_val = context;
    }

    int32_t data_8 = *(context_val + 0xde0);
    int32_t context_2 = *(context_val + 0xde4);
    int32_t temp_2 = *(context + 0xde8);
    double item_1c_1 = item_1c - 2.0;
    int64_t item_c_2 = item_24 - 2.0;
    int32_t dest_7 = item_c_2;
    *(&item_c_2 + 4) = temp_2;
    *(&item_1c_1 + 4) = item_1c_1 + temp_2;
    int32_t data_13 = ((item_34 + 2.0 + *(&item_c_2 + 4)) ^ *(&item_1c_1 + 4))
        | ((item_3c + 2.0 + context_2) ^ (dest_7 + context_2))
        | ((item_44 + 2.0 + data_8) ^ (item_2c - 2.0 + data_8));
    *(&item_c_2 + 4) = data_13;
    int32_t eflags;
    uint32_t result;
    result = __bsr_gprv_memv(*(&item_c_2 + 4));
    *(&item_c_2 + 4) = result;
    int32_t source_5 = 0x1e - *(&item_c_2 + 4);
    double* context_5;

    if (!(param_7 & 0x7fffffff))
        context_5 = param_3;
    else
    {
        context_5 = param_3;
        int32_t* item_f8_1 = param_2;
        char item_74_1 = param_5;
        uint32_t item_fc_1 = param_4;
        double* item_100 = context_5;
        int32_t item_70_1 = param_6;
        int32_t item_6c_1 = 0;
        result = DynObj_ParseConfigFile_11(context, 0xb, &item_100, context_5, param_7);
    }

    if (param_7 & 0x80000000)
    {
        result = context;

        if (*(result + 0xc))
        {
            if (source_5 > 0x10)
                source_5 = 0x10;

            int32_t* item_118_2 = &item_68;
            param_5 = DynObj_RegisterSymbol_10(result, &item_68, context_5, source_5);
            result = param_4;
            int32_t dest_10 = 0;

            if (result > 0)
            {
                int32_t* source_6 = param_2;

                do
                {
                    void* data_17 = *source_6;

                    if (item_f4[dest_10])
                    {
                        long double fpu_val_7_7;
                        long double f4_1;

                        if (data_17)
                        {
                            fpu_val_7_7 = *(data_17 + 0xc);
                            f4_1 = 0.0f;
                            fpu_val_7_7 - f4_1;
                        }

                        if (!data_17 || *(&((fpu_val_7_7 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_7, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                            *source_6 = DynObj_FindSymbol_10(&item_68, context_5, param_5);
                    }
                    else if (!data_17)
                        *source_6 = *(context + 0xd3c);

                    result = param_4;
                    dest_10 += 1;
                    source_6 = &source_6[1];
                    context_5 = &context_5[3];
                } while (dest_10 < result);
            }
        }
    }

    return result;
}
