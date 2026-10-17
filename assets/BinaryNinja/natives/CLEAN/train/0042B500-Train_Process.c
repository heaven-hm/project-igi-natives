// IGI native provenance: Train_Process - 0x0042B500 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0042B500-Train_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Train_Process.h"
int32_t Train_Process(float context, void* param_2)

{
    memcpy(param_2, context + 0x20, 0x18);
    *(param_2 + 0x18) = 0;
    *(param_2 + 0x1c) = 0;
    *(param_2 + 0x20) = 0;
    memcpy(param_2 + 0x24, context + 0x70, 0x28);
    float item_50;
    Sys_DispatchOpcode_12(&item_50, -1.57079637f);
    float item_44;
    float item_38;
    float item_28 = item_44 * *(param_2 + 0x28) + item_38 * *(param_2 + 0x2c) + item_50 * *(param_2 + 0x24);
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_40 * *(param_2 + 0x28) + item_34 * *(param_2 + 0x2c) + item_4c * *(param_2 + 0x24);
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_3c * *(param_2 + 0x28) + item_30 * *(param_2 + 0x2c) + item_48 * *(param_2 + 0x24);
    float item_1c = item_44 * *(param_2 + 0x34) + item_38 * *(param_2 + 0x38) + item_50 * *(param_2 + 0x30);
    float item_18 = item_40 * *(param_2 + 0x34) + item_34 * *(param_2 + 0x38) + item_4c * *(param_2 + 0x30);
    float item_14 = item_3c * *(param_2 + 0x34) + item_30 * *(param_2 + 0x38) + item_48 * *(param_2 + 0x30);
    int32_t item_2c;
    int32_t item_4 = *(param_2 + 0x48) + item_2c + 1;
    float item_10 = item_38 * *(param_2 + 0x44) + item_50 * *(param_2 + 0x3c) + item_44 * *(param_2 + 0x40);
    float item_c = item_34 * *(param_2 + 0x44) + item_4c * *(param_2 + 0x3c) + item_40 * *(param_2 + 0x40);
    float item_8 = item_30 * *(param_2 + 0x44) + item_48 * *(param_2 + 0x3c) + item_3c * *(param_2 + 0x40);
    memcpy(param_2 + 0x24, &item_28, 0x28);
    long double fpu_val_7_36 = *(context + 0x9c);
    long double fpu_val_6_36 = *(context + 0xa0);
    fpu_val_6_36 - fpu_val_7_36;
    long double fpu_val_7_37;

    if (!(*(&((fpu_val_6_36 < fpu_val_7_36 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_36, fpu_val_7_36) ? 1 : 0) << 0xa
            | (fpu_val_6_36 == fpu_val_7_36 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_37 = *(context + 0xa0);
    else
        fpu_val_7_37 = *(context + 0x9c);

    long double fpu_val_6_37 = *(context + 0x98);
    fpu_val_6_37 - fpu_val_7_37;
    long double fpu_val_7_39;

    if (*(&((fpu_val_6_37 < fpu_val_7_37 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_37, fpu_val_7_37) ? 1 : 0) << 0xa
        | (fpu_val_6_37 == fpu_val_7_37 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_40 = *(context + 0x9c);
        long double fpu_val_6_38 = *(context + 0xa0);
        fpu_val_6_38 - fpu_val_7_40;

        if (!(*(&((fpu_val_6_38 < fpu_val_7_40 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_38, fpu_val_7_40) ? 1 : 0) << 0xa
                | (fpu_val_6_38 == fpu_val_7_40 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_39 = *(context + 0xa0);
        else
            fpu_val_7_39 = *(context + 0x9c);
    }
    else
        fpu_val_7_39 = *(context + 0x98);

    int16_t result;
    long double fp0;
    fp0 = Render_ComputeNormals(*(context + 0x6c));
    *(param_2 + 0x4c) = fp0 * fpu_val_7_39;
    int32_t* context_1 = *(param_2 + 0x50);

    if (context_1)
    {
        *context_1 = g_53bd1c[0];
        result = g_53bd1c[4][0];
        context_1[1] = result;
    }

    return result;
}
