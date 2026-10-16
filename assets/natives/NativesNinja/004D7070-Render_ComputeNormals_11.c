#include "004D7070-Render_ComputeNormals_11.h"
/* 0x004d7070 Render_ComputeNormals_11 full linked: callers=5 callees=1 */
float sub_4d7070(float a1, float a2, float a3, int32_t a4, int32_t a5) __location("eax")

{
    float result = a1;
    void* ecx = *(result + 0x74);
    float ebp = a3;
    float* esi = a2;

    if (ebp < a4)
    {
        long double x87_r7_3 = (*(result + 0x50) - *(result + 0x54)) * (esi[2] - esi[1]);
        long double x87_r6_5 = (esi[3] - *esi) * (*(result + 0x54) + *(result + 0x50));
        float var_24_1 = (*(result + 0x58) - *(result + 0x4c)) * (esi[1] + esi[2]);
        float var_2c_1 = (*esi + esi[2]) * (*(result + 0x50) + *(result + 0x4c));
        a2 = (*(result + 0x58) - *(result + 0x54)) * (esi[3] + esi[1]);
        long double x87_r5_14 = (esi[3] - esi[1]) * (*(result + 0x58) + *(result + 0x54));
        long double x87_r4_11 = x87_r5_14 + a2 + var_2c_1;
        a1 = ((*(result + 0x4c) - *(result + 0x50)) * (esi[2] - *esi) + x87_r4_11) * 0.5f;
        *(result + 0x4c) =
            (*(result + 0x58) + *(result + 0x4c)) * (esi[3] + *esi) + a1 - x87_r4_11;
        long double x87_r5_16 = x87_r6_5 + a1 - x87_r5_14;
        a3 = x87_r5_16;
        *(result + 0x50) = x87_r5_16;
        int32_t ebx_1 = *(result + 0x5c);
        long double x87_r6_11 = a1 + var_24_1 - a2;
        a2 = x87_r6_11;
        *(result + 0x54) = x87_r6_11;
        long double x87_r7_5 = x87_r7_3 + a1 - var_2c_1;
        *(result + 0x58) = x87_r7_5;
        int32_t ebx_2 = ebx_1 + esi[4] + 1;
        *(result + 0x5c) = ebx_2;

        if (ebx_2 > 0x3e8)
        {
            long double x87_r6_12 = *(result + 0x4c);
            *(result + 0x5c) = 0;
            long double x87_r5_25 = 1.0
                / sqrtl(x87_r7_5 * x87_r7_5 + a2 * a2 + a3 * a3 + x87_r6_12 * x87_r6_12);
            *(result + 0x4c) = *(result + 0x4c) * x87_r5_25;
            *(result + 0x50) = a3 * x87_r5_25;
            *(result + 0x54) = a2 * x87_r5_25;
            *(result + 0x58) = x87_r7_5 * x87_r5_25;
        }

        if (ecx)
        {
            long double x87_r7_10 = -(*(ecx + 0x4c));
            float var_10_1 = -(*(ecx + 0x50));
            float var_c_1 = -(*(ecx + 0x54));
            long double x87_r6_20 = *(ecx + 0x58);
            int32_t edx_4 = *(ecx + 0x5c);
            float var_2c_2 = (var_c_1 + x87_r7_10) * (*(result + 0x50) + *(result + 0x4c));
            a3 = (*(result + 0x58) - *(result + 0x54)) * (x87_r6_20 + var_10_1);
            long double x87_r5_40 = (*(result + 0x58) + *(result + 0x54)) * (x87_r6_20 - var_10_1);
            long double x87_r4_28 = x87_r5_40 + a3 + var_2c_2;
            a1 =
                ((var_c_1 - x87_r7_10) * (*(result + 0x4c) - *(result + 0x50)) + x87_r4_28) * 0.5f;
            long double x87_r4_29 =
                (*(result + 0x58) + *(result + 0x4c)) * (x87_r6_20 + x87_r7_10) + a1 - x87_r4_28;
            a2 = x87_r4_29;
            *(result + 0x60) = x87_r4_29;
            long double x87_r5_43 =
                (*(result + 0x54) + *(result + 0x50)) * (x87_r6_20 - x87_r7_10) + a1 - x87_r5_40;
            *(result + 0x64) = x87_r5_43;
            a3 = (*(result + 0x58) - *(result + 0x4c)) * (var_c_1 + var_10_1) + a1 - a3;
            long double x87_r6_32 = (*(result + 0x50) - *(result + 0x54)) * (var_c_1 - var_10_1);
            *(result + 0x68) = a3;
            int32_t edx_5 = *(result + 0x5c) + edx_4 + 1;
            *(result + 0x70) = edx_5;
            long double x87_r6_34 = x87_r6_32 + a1 - var_2c_2;
            *(result + 0x6c) = x87_r6_34;

            if (edx_5 > 0x3e8)
            {
                *(result + 0x70) = 0;
                long double x87_r5_54 = 1.0 / sqrtl(x87_r6_34 * x87_r6_34 + a3 * a3
                    + x87_r5_43 * x87_r5_43 + a2 * a2);
                *(result + 0x60) = a2 * x87_r5_54;
                *(result + 0x64) = x87_r5_43 * x87_r5_54;
                *(result + 0x68) = a3 * x87_r5_54;
                *(result + 0x6c) = x87_r6_34 * x87_r5_54;
            }
        }

        long double x87_r7_15 = *(result + 0x4c);
        long double x87_r7_16 = x87_r7_15 * x87_r7_15;
        *(result + 0x48) = *(result + 0x5c);
        long double x87_r6_39 = *(result + 0x50) * *(result + 0x4c);
        long double x87_r6_40 = x87_r6_39 + x87_r6_39;
        long double x87_r5_60 = *(result + 0x54) * *(result + 0x4c);
        a3 = x87_r5_60 + x87_r5_60;
        long double x87_r5_63 = *(result + 0x58) * *(result + 0x4c);
        float var_28_1 = x87_r5_63 + x87_r5_63;
        long double x87_r5_65 = *(result + 0x50);
        long double x87_r4_43 = x87_r5_65 * x87_r5_65;
        float var_24_2 = x87_r4_43 + x87_r4_43;
        long double x87_r5_68 = *(result + 0x54) * *(result + 0x50);
        float var_2c_3 = x87_r5_68 + x87_r5_68;
        long double x87_r5_71 = *(result + 0x58) * *(result + 0x50);
        a2 = x87_r5_71 + x87_r5_71;
        long double x87_r5_73 = *(result + 0x54);
        long double x87_r4_46 = x87_r5_73 * x87_r5_73;
        a1 = x87_r4_46 + x87_r4_46;
        long double x87_r5_76 = *(result + 0x58) * *(result + 0x54);
        long double x87_r5_77 = x87_r5_76 + x87_r5_76;
        *(result + 0x24) = 1f - var_24_2 - a1;
        *(result + 0x28) = x87_r6_40 - x87_r5_77;
        *(result + 0x2c) = a2 + a3;
        *(result + 0x30) = x87_r5_77 + x87_r6_40;
        long double x87_r7_18 = 1f - (x87_r7_16 + x87_r7_16);
        *(result + 0x34) = x87_r7_18 - a1;
        *(result + 0x38) = var_2c_3 - var_28_1;
        *(result + 0x3c) = a3 - a2;
        *(result + 0x40) = var_2c_3 + var_28_1;
        *(result + 0x44) = x87_r7_18 - var_24_2;
    }

    if (ebp < a5)
    {
        long double x87_r7_23 = *(ecx + 0x2c) * *(result + 0x10) + *(ecx + 0x28) * *(result + 0xc)
            + *(ecx + 0x24) * *(result + 8);
        float var_14_1 = x87_r7_23;
        float var_20_1 = var_14_1;
        long double x87_r7_27 = *(ecx + 0x38) * *(result + 0x10) + *(ecx + 0x34) * *(result + 0xc)
            + *(ecx + 0x30) * *(result + 8);
        long double x87_r7_31 = *(ecx + 0x44) * *(result + 0x10) + *(ecx + 0x40) * *(result + 0xc)
            + *(ecx + 0x3c) * *(result + 8);
        float var_1c_2 = x87_r7_27 + *(ecx + 0x1c);
        long double x87_r7_37 = x87_r7_31 + *(ecx + 0x20);
        *(result + 0x18) = var_14_1 + *(ecx + 0x18);
        int16_t top_1 = 0;
        *(result + 0x1c) = var_1c_2;
        *(result + 0x20) = x87_r7_37;

        if (ebp < a5 - 1)
        {
            for (float i = *(result + 0x78); i; i = *(i + 0x7c))
            {
                result = sub_4d7070(i, esi, ebp + 1, a4, a5);
                top_1 -= 1;
            }
        }
    }

    return result;
}
