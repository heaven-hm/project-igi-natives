// IGI native provenance: SoundSys_InitSoundSys_19 - 0x004EE200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE200-SoundSys_InitSoundSys_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_19.h"
int32_t SoundSys_InitSoundSys_19(void* context)

{
    int32_t item_110 = 0xffffffff;
    int32_t item_10c = 0x7fefffff;
    int32_t item_108 = 0xffffffff;
    int32_t item_104 = 0x7fefffff;
    int32_t item_100 = 0xffffffff;
    int32_t item_fc = 0x7fefffff;
    int32_t item_128 = 0xffffffff;
    int32_t item_124 = 0xffefffff;
    int32_t item_120 = 0xffffffff;
    int32_t item_11c = 0xffefffff;
    int32_t item_118 = 0xffffffff;
    int32_t item_114 = 0xffefffff;
    void* item_8c = DynObj_Missing(context + 0x138);
    int32_t result = *(context + 0x148);
    int32_t dest_val = 0;

    if (result > 0)
    {
        int32_t* context_1 = context + 0x14c;

        do
        {
            float item_134;
            void item_f8;
            Render_SetupLighting(&item_134, &item_f8, *context_1);
            long double fpu_val_7_1 = item_134;
            long double f2_1 = item_110;
            fpu_val_7_1 - f2_1;

            if (*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                item_110 = item_134;

            float item_130;
            long double fpu_val_7_3 = item_130;
            long double f4_1 = item_108;
            fpu_val_7_3 - f4_1;

            if (*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                item_108 = item_130;

            float item_12c;
            long double fpu_val_7_5 = item_12c;
            long double f5_1 = item_100;
            fpu_val_7_5 - f5_1;

            if (*(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                item_100 = item_12c;

            long double fpu_val_7_7 = item_134;
            long double f6_1 = item_128;
            fpu_val_7_7 - f6_1;

            if (!(*(&((fpu_val_7_7 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                item_128 = item_134;

            long double fpu_val_7_9 = item_130;
            long double f7_1 = item_120;
            fpu_val_7_9 - f7_1;

            if (!(*(&((fpu_val_7_9 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_9, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                item_120 = item_130;

            long double fpu_val_7_11 = item_12c;
            long double f8_1 = item_118;
            fpu_val_7_11 - f8_1;

            if (!(*(&((fpu_val_7_11 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                item_118 = item_12c;

            result = *(context + 0x148);
            dest_val += 1;
            context_1 = &context_1[6];
        } while (dest_val < result);
    }

    long double fpu_val_7_14 = item_128 - item_110;
    long double f0 = 0.0;
    fpu_val_7_14 - f0;
    result = (fpu_val_7_14 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_14 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        fpu_val_7_14 = -(fpu_val_7_14);

    *(context + 0xc) = fpu_val_7_14;
    long double fpu_val_7_16 = item_120 - item_108;
    long double f1 = 0.0;
    fpu_val_7_16 - f1;
    result = (fpu_val_7_16 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_16 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        fpu_val_7_16 = -(fpu_val_7_16);

    *(context + 0x10) = fpu_val_7_16;
    long double fpu_val_7_18 = item_118 - item_100;
    long double f3 = 0.0;
    fpu_val_7_18 - f3;
    result = (fpu_val_7_18 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_18, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_18 == f3 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        fpu_val_7_18 = -(fpu_val_7_18);

    *(context + 0x14) = fpu_val_7_18;
    return result;
}
