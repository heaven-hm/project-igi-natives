// IGI native provenance: DynObj_FindSymbol_10 - 0x004C9D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C9D70-DynObj_FindSymbol_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_FindSymbol_10.h"
int32_t DynObj_FindSymbol_10(int32_t* context, double* param_2, int32_t param_3)

{
    void* flagP = context[6];
    void* entity_val = context[7];
    int32_t dest_val = context[2];
    int32_t item_34 = *context;
    int32_t temp_1 = context[1];
    double* data_1 = param_2;
    int32_t context_val = *data_1;
    int32_t entity_2 = data_1[1];
    int32_t source_val = data_1[2];
    long double fpu_val_7_3 = *data_1;
    long double f0 = 0.0;
    fpu_val_7_3 - f0;

    if (*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_4 = context_val;
        long double f2_1 = *param_2;
        fpu_val_7_4 - f2_1;

        if (!(*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            context_val -= 1;
    }

    long double fpu_val_7_5 = param_2[1];
    long double f1 = 0.0;
    fpu_val_7_5 - f1;

    if (*(&((fpu_val_7_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f1 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_6 = entity_2;
        long double f4_1 = param_2[1];
        fpu_val_7_6 - f4_1;

        if (!(*(&((fpu_val_7_6 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            entity_2 -= 1;
    }

    long double fpu_val_7_7 = param_2[2];
    long double f3 = 0.0;
    fpu_val_7_7 - f3;

    if (*(&((fpu_val_7_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f3 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_8 = source_val;
        long double f5_1 = param_2[2];
        fpu_val_7_8 - f5_1;

        if (!(*(&((fpu_val_7_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            source_val -= 1;
    }

    int32_t entity_3 = entity_2 + *(entity_val + 0xde4);
    int32_t source_1 = source_val + *(entity_val + 0xde8);
    int32_t context_1 = context_val + *(entity_val + 0xde0);
    int32_t entity_4 = entity_3 ^ 0x40000000;
    int32_t source_2 = source_1 ^ 0x40000000;
    int32_t context_2 = context_1 ^ 0x40000000;
    char entity_5 = temp_1;
    int32_t source_8 = *(((((entity_4 >> (entity_5 & 0x1f) & 1) << 1 | (context_2 >> (entity_5 & 0x1f) & 1))
        + (dest_val << 3)) << 2) + &g_548060) | (source_2 >> (entity_5 & 0x1f) & 1) << 2;

    if (*(flagP + 0x18) & 1 << (source_8 & 0x1f))
    {
        while (param_3 < 0x10)
        {
            int32_t data_24 = 0;
            data_24 = *(source_8 + flagP + 0x10);
            int32_t data_26;
            int32_t entity_9;

            if (dest_val >= 4)
            {
                entity_9 = (dest_val - (data_24 & 3)) & 3;
                data_26 = (data_24 ^ dest_val) & 4;
            }
            else
            {
                entity_9 = (data_24 ^ dest_val) & 4;
                data_26 = (data_24 + dest_val) & 3;
            }

            int32_t data_30 = 0;
            data_30 = *(flagP + (source_8 << 1));
            dest_val = entity_9 + data_26;
            flagP = (data_30 << 5) + *(entity_val + 0xc);
            temp_1 -= 1;
            item_34 s>>= 1;
            char entity_15 = temp_1;
            source_8 = (source_2 >> (entity_15 & 0x1f) & 1) << 2 | *(((((entity_4 >> (entity_15 & 0x1f) & 1) << 1
                | (context_2 >> (entity_15 & 0x1f) & 1)) + (dest_val << 3)) << 2) + &g_548060);
            param_3 += 1;

            if (!(*(flagP + 0x18) & 1 << (source_8 & 0x1f)))
                break;
        }
    }

    void* entity_20 = context[7];
    int32_t data_42 = ~((0x40000000 >> ((param_3 - 1) & 0x1f)) - 1);
    int32_t source_20 = (data_42 & entity_3) - *(entity_20 + 0xde4) + item_34;
    int32_t source_24 = (data_42 & source_1) - *(entity_20 + 0xde8) + item_34;
    double* temp_5 = param_2;
    int16_t* entity_22 = *(flagP + 0x1c);
    double item_18 = (data_42 & context_1) - *(entity_20 + 0xde0) + item_34;
    double item_10 = source_20;
    double item_8 = source_24;
    DynObj_LinkDynamicCube_9(entity_22, &item_18, temp_5, param_3, &param_2, dest_val);
    return *(context[7] + (param_2 << 2) + 0xd3c);
}
