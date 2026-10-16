#include "gi_platform.h"
#include "004EE200-SoundSys_InitSoundSys_19.h"
int32_t SoundSys_InitSoundSys_19(void* a1)

{
    int32_t v_110 = 0xffffffff;
    int32_t v_10c = 0x7fefffff;
    int32_t v_108 = 0xffffffff;
    int32_t v_104 = 0x7fefffff;
    int32_t v_100 = 0xffffffff;
    int32_t v_fc = 0x7fefffff;
    int32_t v_128 = 0xffffffff;
    int32_t v_124 = 0xffefffff;
    int32_t v_120 = 0xffffffff;
    int32_t v_11c = 0xffefffff;
    int32_t v_118 = 0xffffffff;
    int32_t v_114 = 0xffefffff;
    void* v_8c = DynObj_Missing(a1 + 0x138);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x148));
    int32_t dstD = 0;

    if (result > 0)
    {
        int32_t* ctxB1 = a1 + 0x14c;

        do
        {
            float v_134;
            char v_f8;
            Render_SetupLighting(&v_134, &v_f8, *ctxB1);
            long double x87_r7_1 = v_134;
            long double f2_1 = v_110;
            x87_r7_1 - f2_1;

            if (*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                v_110 = v_134;

            float v_130;
            long double x87_r7_3 = v_130;
            long double f4_1 = v_108;
            x87_r7_3 - f4_1;

            if (*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                v_108 = v_130;

            float v_12c;
            long double x87_r7_5 = v_12c;
            long double f5_1 = v_100;
            x87_r7_5 - f5_1;

            if (*(&((x87_r7_5 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                v_100 = v_12c;

            long double x87_r7_7 = v_134;
            long double f6_1 = v_128;
            x87_r7_7 - f6_1;

            if (!(*(&((x87_r7_7 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                v_128 = v_134;

            long double x87_r7_9 = v_130;
            long double f7_1 = v_120;
            x87_r7_9 - f7_1;

            if (!(*(&((x87_r7_9 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f7_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                v_120 = v_130;

            long double x87_r7_11 = v_12c;
            long double f8_1 = v_118;
            x87_r7_11 - f8_1;

            if (!(*(&((x87_r7_11 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                v_118 = v_12c;

            result = (*(int32_t*)(uintptr_t)(a1 + 0x148));
            dstD += 1;
            ctxB1 = &ctxB1[6];
        } while (dstD < result);
    }

    long double x87_r7_14 = v_128 - v_110;
    long double f0 = 0.0;
    x87_r7_14 - f0;
    result = (x87_r7_14 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f0) ? 1 : 0) << 0xa
        | (x87_r7_14 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_14 = -(x87_r7_14);

    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = x87_r7_14;
    long double x87_r7_16 = v_120 - v_108;
    long double f1 = 0.0;
    x87_r7_16 - f1;
    result = (x87_r7_16 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f1) ? 1 : 0) << 0xa
        | (x87_r7_16 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_16 = -(x87_r7_16);

    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = x87_r7_16;
    long double x87_r7_18 = v_118 - v_100;
    long double f3 = 0.0;
    x87_r7_18 - f3;
    result = (x87_r7_18 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, f3) ? 1 : 0) << 0xa
        | (x87_r7_18 == f3 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_18 = -(x87_r7_18);

    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = x87_r7_18;
    return result;
}
