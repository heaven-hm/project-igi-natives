// IGI native provenance: SoundSys_InitSoundSys_4 - 0x004E5CB0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004E5CB0-SoundSys_InitSoundSys_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_4.h"
int32_t SoundSys_InitSoundSys_4()

{
    long double fpu_val_7_1 = 1.0 / (g_bcab20 * 1.2);
    memset(0xa5e464, 0, 0x180);
    int32_t result = g_b04280;
    g_a5e414 = g_b04284;
    g_a5e410 = result;
    int64_t* i = &g_b04288;
    g_b015b8 = fpu_val_7_1 * 32.0;
    g_b015c0 = 1.0 / (g_bcab24 * 1.2) * 24.0;
    long double fpu_val_7_7 = g_b04288;

    do
    {
        long double fpu_val_6_1 = i[-1];
        long double f0_1 = *g_a5e410;
        fpu_val_6_1 - f0_1;
        result = (fpu_val_6_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = *(i - 4);
            g_a5e410 = i[-1];
            g_a5e414 = result;
        }

        long double f1_1 = *i;
        fpu_val_7_7 - f1_1;
        result = (fpu_val_7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            fpu_val_7_7 = *i;

        i = &i[3];
    } while (i < 0xb04348);

    *g_a5e410 = *g_a5e410 * g_b015b8 * 1.2;
    g_a5e418 = fpu_val_7_7 * g_b015c0 * 1.2;
    return result;
}
