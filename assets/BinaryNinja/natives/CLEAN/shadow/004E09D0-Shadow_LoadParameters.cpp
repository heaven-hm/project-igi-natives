// IGI native provenance: Shadow_LoadParameters - 0x004E09D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E09D0-Shadow_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Shadow_LoadParameters.h"
int32_t* Shadow_LoadParameters(float context)

{
    float context_val = context;
    int32_t* result = *(context_val + 0x28);

    if (!*result || !**(context_val + 0x2c))
        return result;

    long double fpu_val_7_4 = (1.0 - **(context_val + 0x30) / *(context_val + 0x38)) * 0.800000012f;
    long double f0_1 = 0.300000012f;
    fpu_val_7_4 - f0_1;

    if (!(*(&((fpu_val_7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0_1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double fpu_val_6_1 = 0.0f;
        fpu_val_6_1 - fpu_val_7_4;

        if (*(&((fpu_val_6_1 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_4) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_6_2 = 1.0f;
            fpu_val_6_2 - fpu_val_7_4;

            if (*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_4 = 1.0f;
        }
        else
            fpu_val_7_4 = 0.0f;
    }
    else
        fpu_val_7_4 = 0.300000012f;

    *(context_val + 0x118) = g_548708[0];
    *(context_val + 0x11c) = g_548708[4][0];
    *(context_val + 0x120) = g_548708[8][0];
    *(context_val + 0x118) = fpu_val_7_4 * *(context_val + 0x118);
    int32_t* data_2 = *(context_val + 0x34);
    *(context_val + 0x11c) = fpu_val_7_4 * *(context_val + 0x11c);
    *(context_val + 0x120) = fpu_val_7_4 * *(context_val + 0x120);
    float item_28;
    Sys_ResolveSymbol_12(&item_28, data_2);
    long double fpu_val_7_10 = -(*(context_val + 0x3c));
    *(context_val + 0x4c) = fpu_val_7_10;
    *(context_val + 0x5c) = fpu_val_7_10;
    *(context_val + 0x64) = fpu_val_7_10;
    long double fpu_val_6_7 = *(context_val + 0x3c);
    int32_t temp_5 = *(context_val + 0x3c);
    *(context_val + 0x68) = fpu_val_7_10;
    *(context_val + 0x44) = temp_5;
    *(context_val + 0x48) = 0x41200000;
    *(context_val + 0x54) = 0x41200000;
    float item_10;
    context = item_10 * 10.0f;
    *(context_val + 0x60) = 0x41200000;
    *(context_val + 0x6c) = 0x41200000;
    *(context_val + 0x40) = temp_5;
    *(context_val + 0x50) = temp_5;
    *(context_val + 0x58) = temp_5;
    float item_1c;
    float item_50_1 = fpu_val_6_7 * item_1c;
    long double fpu_val_5_7 = fpu_val_6_7 * item_28;
    *(context_val + 0x40) = fpu_val_5_7 + item_50_1 + context;
    float item_c;
    float item_58_1 = item_c * 10.0f;
    float item_18;
    float item_4c_1 = fpu_val_6_7 * item_18;
    float item_24;
    long double fpu_val_5_15 = fpu_val_6_7 * item_24;
    float item_8;
    float item_54_1 = item_8 * 10.0f;
    float item_14;
    float item_48_1 = fpu_val_6_7 * item_14;
    float item_20;
    long double fpu_val_6_8 = fpu_val_6_7 * item_20;
    long double fpu_val_6_12 = fpu_val_7_10 * item_28;
    *(context_val + 0x44) = fpu_val_5_15 + item_4c_1 + item_58_1;
    *(context_val + 0x48) = fpu_val_6_8 + item_48_1 + item_54_1;
    int32_t source_1 = *(context_val + 0x24);
    int32_t dest_2 = *(context_val + 0x74) + 0x20;
    long double fpu_val_6_16 = fpu_val_7_10 * item_24;
    *(context_val + 0x4c) = fpu_val_6_12 + item_50_1 + context;
    long double fpu_val_6_20 = fpu_val_7_10 * item_20;
    *(context_val + 0x50) = fpu_val_6_16 + item_4c_1 + item_58_1;
    *(context_val + 0x54) = fpu_val_6_20 + item_48_1 + item_54_1;
    float item_48_2 = fpu_val_7_10 * item_1c;
    *(context_val + 0x58) = fpu_val_5_7 + item_48_2 + context;
    float item_44_2 = fpu_val_7_10 * item_18;
    long double fpu_val_7_11 = fpu_val_7_10 * item_14;
    *(context_val + 0x5c) = fpu_val_5_15 + item_44_2 + item_58_1;
    *(context_val + 0x60) = fpu_val_6_8 + fpu_val_7_11 + item_54_1;
    *(context_val + 0x64) = fpu_val_6_12 + item_48_2 + context;
    *(context_val + 0x68) = fpu_val_6_16 + item_44_2 + item_58_1;
    *(context_val + 0x6c) = fpu_val_6_20 + fpu_val_7_11 + item_54_1;
    memcpy(dest_2, source_1, 0x18);
    int32_t data_8 = *(context_val + 0x70);
    *(context_val + 0xc0) = data_8;
    *(context_val + 0x110) = data_8;
    void* context_1 = *(context_val + 0x74);
    int32_t data_9 = 0;
    data_9 = *(context_1 + 0x1c);
    return (*((data_9 << 2) + &g_a982e0))(context_1, 0);
}
