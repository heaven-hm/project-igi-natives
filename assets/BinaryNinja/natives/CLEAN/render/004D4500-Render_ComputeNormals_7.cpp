// IGI native provenance: Render_ComputeNormals_7 - 0x004D4500 - CFG score 73.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004D4500-Render_ComputeNormals_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_7.h"
int32_t Render_ComputeNormals_7(float* context, float param_2, float param_3, float param_4)

{
    long double fpu7 = param_4;
    long double f1 = 0.00100000005f;
    fpu7 - f1;
    int16_t data_val = (fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x41)
    {
        memcpy(context, param_3, 0x14);
        return data_val;
    }

    long double fpu_val_7_1 = param_4;
    long double f2 = 0.999000013f;
    fpu_val_7_1 - f2;
    data_val = (fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 1))
    {
        memcpy(context, param_2, 0x14);
        return data_val;
    }

    float source_2 = param_3;
    float context_val = param_2;
    float item_28 = source_2;
    int32_t item_18 = 0;
    Sys_CloseFileStream_13(&item_18, &param_3, &param_2, context_val, item_28);
    int32_t data_1 = item_18;
    float item_14;
    float item_10;
    float item_c;
    float item_8;
    int32_t source_3;

    if (!data_1)
    {
        memcpy(&item_14, source_2, 0x14);
        int32_t item_4;
        source_3 = item_4;
    }
    else
    {
        item_14 = -(*source_2);
        item_10 = -(*(source_2 + 4));
        item_c = -(*(source_2 + 8));
        source_3 = *(source_2 + 0x10);
        item_8 = -(*(source_2 + 0xc));
    }

    param_4 = 1.0f - param_4;
    long double fpu_val_7_12 = param_3;
    long double f3 = 0.0f;
    fpu_val_7_12 - f3;
    data_1 = (fpu_val_7_12 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f3 ? 1 : 0) << 0xe;

    if (*(&data_1 + 1) & 0x40)
    {
        memcpy(context, context_val, 0x14);
        return data_1;
    }

    long double fpu_val_7_13 = param_3;
    long double f4 = 0.00999999978f;
    fpu_val_7_13 - f4;
    long double fpu6;
    long double fpu_val_7_15;

    if (!(*(&((fpu_val_7_13 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_13 == f4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        param_4 = param_4 * param_3;
        long double fp0_1;
        bool c1_1;
        bool c2_4;
        fp0_1 = __fsin(param_3 - param_4);
        fpu_val_7_15 = fp0_1 * param_2;
        long double fp0_2;
        bool c1_2;
        bool c2_5;
        fp0_2 = __fsin(param_4);
        fpu6 = fp0_2 * param_2;
    }
    else
    {
        fpu_val_7_15 = 1.0f - param_4;
        fpu6 = param_4;
    }

    *context = fpu_val_7_15 * *context_val + fpu6 * item_14;
    context[1] = fpu_val_7_15 * *(context_val + 4) + fpu6 * item_10;
    context[2] = fpu_val_7_15 * *(context_val + 8) + fpu6 * item_c;
    context[3] = fpu_val_7_15 * *(context_val + 0xc) + fpu6 * item_8;
    context[4] = *(context_val + 0x10) + source_3 + 1;
    return context;
}
