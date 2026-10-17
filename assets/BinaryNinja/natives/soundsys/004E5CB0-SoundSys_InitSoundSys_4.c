// Original IGI.EXE function: SoundSys_InitSoundSys_4 (VA 0x004E5CB0; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_InitSoundSys_4.h"
int32_t SoundSys_InitSoundSys_4()

{
    long double x87_r7_1 = 1.0 / (g_bcab20 * 1.2);
    __builtin_memset(0xa5e464, 0, 0x180);
    int32_t result = g_b04280;
    g_a5e414 = g_b04284;
    g_a5e410 = result;
    int64_t* i = &g_b04288;
    g_b015b8 = x87_r7_1 * 32.0;
    g_b015c0 = 1.0 / (g_bcab24 * 1.2) * 24.0;
    long double x87_r7_7 = g_b04288;

    do
    {
        long double x87_r6_1 = i[-1];
        long double f0_1 = *g_a5e410;
        x87_r6_1 - f0_1;
        result = (x87_r6_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = *(i - 4);
            g_a5e410 = i[-1];
            g_a5e414 = result;
        }

        long double f1_1 = *i;
        x87_r7_7 - f1_1;
        result = (x87_r7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            x87_r7_7 = *i;

        i = &i[3];
    } while (i < 0xb04348);

    *g_a5e410 = *g_a5e410 * g_b015b8 * 1.2;
    g_a5e418 = x87_r7_7 * g_b015c0 * 1.2;
    return result;
}
