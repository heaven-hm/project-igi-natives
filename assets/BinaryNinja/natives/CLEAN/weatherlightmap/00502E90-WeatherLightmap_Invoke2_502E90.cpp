// IGI native provenance: WeatherLightmap_Invoke2_502E90 - 0x00502E90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00502E90-WeatherLightmap_Invoke2_502E90.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeatherLightmap_Invoke2_502E90.h"

int32_t WeatherLightmap_Invoke2_502E90(float arg1, void* arg2)

{
    int32_t* eax_1 = QTask_DeleteTask_2(arg1, g_a7a620);
    __builtin_memset(arg2, 0, 0x18);
    *(arg2 + 0x4c) = 0x45800000;

    if (eax_1)
    {
        __builtin_memcpy(arg2, &eax_1[0x3e], 0x18);
        long double x87_r7_1 = eax_1[0x27];
        long double x87_r6_1 = eax_1[0x28];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_2;

        if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_2 = eax_1[0x28];
        else
            x87_r7_2 = eax_1[0x27];

        long double x87_r6_2 = eax_1[0x26];
        x87_r6_2 - x87_r7_2;
        long double x87_r7_4;

        if (*(&((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_5 = eax_1[0x27];
            long double x87_r6_3 = eax_1[0x28];
            x87_r6_3 - x87_r7_5;

            if (!(*(&((x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_4 = eax_1[0x28];
            else
                x87_r7_4 = eax_1[0x27];
        }
        else
            x87_r7_4 = eax_1[0x26];

        *(arg2 + 0x4c) = Render_ComputeNormals(eax_1[0x1b]) * x87_r7_4;
    }

    *(arg2 + 0x18) = 0;
    *(arg2 + 0x1c) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x28) = 0;
    *(arg2 + 0x2c) = 0;
    *(arg2 + 0x30) = 0;
    *(arg2 + 0x38) = 0;
    *(arg2 + 0x3c) = 0;
    *(arg2 + 0x40) = 0;
    *(arg2 + 0x48) = 0;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x24) = 0x3f800000;
    *(arg2 + 0x34) = 0x3f800000;
    *(arg2 + 0x44) = 0x3f800000;
    return 0x3f800000;
}
