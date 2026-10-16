#include "Fence_OnEvent.h"
int32_t Fence_OnEvent(void* a1, void* a2)

{
    int16_t result;
    result = *(a1 + 0x11c);

    if (!result)
    {
        long double x87_r7_2 = *(a2 + 8) - *(a1 + 0x20);
        long double x87_r6_2 = *(a2 + 0x10) - *(a1 + 0x28);
        long double x87_r5_2 = *(a2 + 0x18) - *(a1 + 0x30);
        double v_18_1 =
            *(a1 + 0x88) * x87_r5_2 + *(a1 + 0x7c) * x87_r6_2 + *(a1 + 0x70) * x87_r7_2;
        double v_10_1 =
            *(a1 + 0x80) * x87_r6_2 + *(a1 + 0x8c) * x87_r5_2 + *(a1 + 0x74) * x87_r7_2;
        float v_30;
        WeaponType_RegisterType_2(&v_30, a1, 0);
        float v_24;
        WeaponType_RegisterType_2(&v_24, a1, 1);
        long double x87_r7_4 = v_10_1;
        long double f0_1 = 0.0;
        x87_r7_4 - f0_1;
        long double x87_r7_5 = v_10_1;

        if (*(&((x87_r7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_5 = -(x87_r7_5);

        long double f1_1 = *(a2 + 0x78);
        x87_r7_5 - f1_1;
        result = (x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            long double x87_r7_6 = v_30;
            long double f2_1 = v_18_1;
            x87_r7_6 - f2_1;
            result = (x87_r7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double x87_r7_7 = v_24;
                long double f3_1 = v_18_1;
                x87_r7_7 - f3_1;
                result = (x87_r7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_8 = v_10_1;
                    long double f4_1 = 0.0;
                    x87_r7_8 - f4_1;
                    int32_t objC1 = *(a2 + 0x3c);
                    int32_t v_38_1 = *(a2 + 0x30);
                    float valA1 = *(a1 + 0x80);
                    int32_t v_3c = *(a2 + 0x24);
                    int32_t v_34_1 = objC1;
                    float objC2 = *(a1 + 0x8c);
                    float v_48 = *(a1 + 0x74);

                    if (!(*(&((x87_r7_8 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_8, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_8 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        v_48 = -(v_48);
                        float v_44_2 = -(valA1);
                        float v_40_2 = -(objC2);
                    }

                    long double fp0_1 = Sys_PushStack_10(&v_3c, &v_48);
                    long double f5_1 = 1.04719758f;
                    fp0_1 - f5_1;
                    result = (fp0_1 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fp0_1, f5_1) ? 1 : 0) << 0xa
                        | (fp0_1 == f5_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        *(a2 + 0x70) = 0;
                        *(a2 + 0x74) = 0;
                        *(a2 + 0x80) = a1;
                    }
                }
            }
        }
    }

    return result;
}
