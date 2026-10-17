// IGI native provenance: BandFilter_Cleanup_5 - 0x004A38A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A38A0-BandFilter_Cleanup_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BandFilter_Cleanup_5.h"
int32_t BandFilter_Cleanup_5(int32_t context)

{
    int32_t source_val = context;
    int32_t entity_val = *(source_val + 0x54);
    long double fpu_val_7_1 = -(*(source_val + 0x24));
    context = -4.0f / entity_val;
    long double f0 = context;
    fpu_val_7_1 - f0;

    if (*(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu_val_7_1 = context;

    int32_t data_1 = *(source_val + 0x50);
    *(source_val + 0x24) = fpu_val_7_1 + *(source_val + 0x24);

    if (data_1 >= entity_val)
        *(source_val + 0x50) = 0;
    else
        *(source_val + 0x50) = data_1 + 1;

    int32_t data_3 = *(source_val + 0x58);

    if (data_3 < *(source_val + 0x5c))
    {
        *(source_val + 0x58) = data_3 + 1;
        return data_3 + 1;
    }

    *(source_val + 0x58) = Sys_AllocateMemory_14(0x935bf0) * *(source_val + 0x5c) * 0.699999988f;
    int32_t result;
    long double fp0_1;
    fp0_1 = Sys_AllocateMemory_14(0x935bf0);
    *(source_val + 0x24) = fp0_1 * *(source_val + 0x28);
    return result;
}
