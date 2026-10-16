#include "004EE200-SoundSys_InitSoundSys_19.h"
/* 0x004ee200 SoundSys_InitSoundSys_19 full linked: callers=1 callees=2 */
int32_t sub_4ee200(void* a1)

{
    int32_t var_110 = 0xffffffff;
    int32_t var_10c = 0x7fefffff;
    int32_t var_108 = 0xffffffff;
    int32_t var_104 = 0x7fefffff;
    int32_t var_100 = 0xffffffff;
    int32_t var_fc = 0x7fefffff;
    int32_t var_128 = 0xffffffff;
    int32_t var_124 = 0xffefffff;
    int32_t var_120 = 0xffffffff;
    int32_t var_11c = 0xffefffff;
    int32_t var_118 = 0xffffffff;
    int32_t var_114 = 0xffefffff;
    void* var_8c = sub_4cec10(a1 + 0x138);
    int32_t result = *(a1 + 0x148);
    int32_t edi = 0;

    if (result > 0)
    {
        int32_t* ebx_1 = a1 + 0x14c;

        do
        {
            float var_134;
            void var_f8;
            sub_4d0970(&var_134, &var_f8, *ebx_1);
            long double x87_r7_1 = var_134;
            long double temp2_1 = var_110;
            x87_r7_1 - temp2_1;

            if (*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                var_110 = var_134;

            float var_130;
            long double x87_r7_3 = var_130;
            long double temp4_1 = var_108;
            x87_r7_3 - temp4_1;

            if (*(&((x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1)
                var_108 = var_130;

            float var_12c;
            long double x87_r7_5 = var_12c;
            long double temp5_1 = var_100;
            x87_r7_5 - temp5_1;

            if (*(&((x87_r7_5 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
                var_100 = var_12c;

            long double x87_r7_7 = var_134;
            long double temp6_1 = var_128;
            x87_r7_7 - temp6_1;

            if (!(*(&((x87_r7_7 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                var_128 = var_134;

            long double x87_r7_9 = var_130;
            long double temp7_1 = var_120;
            x87_r7_9 - temp7_1;

            if (!(*(&((x87_r7_9 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                var_120 = var_130;

            long double x87_r7_11 = var_12c;
            long double temp8_1 = var_118;
            x87_r7_11 - temp8_1;

            if (!(*(&((x87_r7_11 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                var_118 = var_12c;

            result = *(a1 + 0x148);
            edi += 1;
            ebx_1 = &ebx_1[6];
        } while (edi < result);
    }

    long double x87_r7_14 = var_128 - var_110;
    long double temp0 = 0.0;
    x87_r7_14 - temp0;
    result = (x87_r7_14 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp0) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_14 = -(x87_r7_14);

    *(a1 + 0xc) = x87_r7_14;
    long double x87_r7_16 = var_120 - var_108;
    long double temp1 = 0.0;
    x87_r7_16 - temp1;
    result = (x87_r7_16 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp1) ? 1 : 0) << 0xa
        | (x87_r7_16 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_16 = -(x87_r7_16);

    *(a1 + 0x10) = x87_r7_16;
    long double x87_r7_18 = var_118 - var_100;
    long double temp3 = 0.0;
    x87_r7_18 - temp3;
    result = (x87_r7_18 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_18, temp3) ? 1 : 0) << 0xa
        | (x87_r7_18 == temp3 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        x87_r7_18 = -(x87_r7_18);

    *(a1 + 0x14) = x87_r7_18;
    return result;
}
