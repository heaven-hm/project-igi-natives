#include "gi_platform.h"
#include "00430D10-Car_WheelDrive.h"
void* Car_WheelDrive(float* a1, float a2, float a3)

{
    float srcS = a1;
    float dstD = a2;
    void* tmpD = (*(int32_t*)(uintptr_t)(srcS + 0x1b4));
    int32_t objC = dstD * 5;
    void* flagP = *(tmpD + 0x2d4);
    void* ctxB = flagP + (objC << 2);
    a2 = *(flagP + (objC << 2) + 0x120) * 0.0174532924.0f * (*(int32_t*)(uintptr_t)(srcS + 0x72c));
    float flagP1;

    if (!(*(int32_t*)(uintptr_t)(ctxB + 0x11d)))
        flagP1 = a3;
    else
    {
        int32_t valA3 = dstD * 7;
        void* objC1 = srcS + (valA3 << 2);
        int16_t valA4;
        valA4 = (*(int32_t*)(uintptr_t)(srcS + (valA3 << 2) + 0x75d));

        if (!valA4)
        {
    label_430d8b: ;
            valA4 = (*(int32_t*)(uintptr_t)(srcS + 0x6d9));

            if (valA4)
                goto label_430dac;

            flagP1 = a3;
        }
        else
        {
            long double x87_r7_3 = (*(int32_t*)(uintptr_t)(srcS + 0x720));
            long double f1_1 = 0.0f;
            x87_r7_3 - f1_1;
            valA4 = (x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe;

            if (*(&valA4 + 1) & 0x40)
                goto label_430d8b;
    label_430dac: ;
            float tmpD2 = (*(int32_t*)(uintptr_t)(srcS + 0xf8));
            int32_t v_34_1 = *(objC1 + 0x76c);
            long double x87_r7_7 =
                *(*(tmpD + 0x2d4) + 0x1c) * (*(int32_t*)(uintptr_t)(srcS + 0x720)) * 44.6008873.0f / (*(int32_t*)(uintptr_t)(srcS + 0x758));
            int32_t v_30_1 = *(objC1 + 0x770);
            float tmpD5 = (*(int32_t*)(uintptr_t)(srcS + 0x74));
            float tmpD6 = (*(int32_t*)(uintptr_t)(srcS + 0x8c));
            int32_t v_2c_1 = *(objC1 + 0x774);
            float valA8 = (*(int32_t*)(uintptr_t)(srcS + 0x80));
            long double x87_r6_1 = *(objC1 + 0x760);
            long double f2_1 = tmpD5;
            x87_r6_1 - f2_1;
            int16_t valA9 = (x87_r6_1 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, f2_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f2_1 ? 1 : 0) << 0xe | 0x3800;
            float v_40;
            float v_3c;
            float v_38;

            if (!(*(&valA9 + 1) & 0x40))
            {
    label_430e43: ;
                long double x87_r6_6 = tmpD6 * *(objC1 + 0x764) - valA8 * *(objC1 + 0x768);
                long double x87_r5_6 = -((tmpD6 * *(objC1 + 0x760) - tmpD5 * *(objC1 + 0x768)));
                long double x87_r4_5 = valA8 * *(objC1 + 0x760) - tmpD5 * *(objC1 + 0x764);
                long double x87_r3_7 = x87_r6_6 * *(objC1 + 0x768);
                long double x87_r3_9 = x87_r4_5 * *(objC1 + 0x760);
                v_40 = x87_r5_6 * *(objC1 + 0x768) - x87_r4_5 * *(objC1 + 0x764);
                v_3c = -((x87_r3_7 - x87_r3_9));
                v_38 = x87_r6_6 * *(objC1 + 0x764) - x87_r5_6 * *(objC1 + 0x760);
            }
            else
            {
                long double x87_r6_2 = *(objC1 + 0x764);
                long double f3_1 = valA8;
                x87_r6_2 - f3_1;
                valA9 = (x87_r6_2 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&valA9 + 1) & 0x40))
                    goto label_430e43;

                long double x87_r6_3 = *(objC1 + 0x768);
                long double f4_1 = tmpD6;
                x87_r6_3 - f4_1;
                valA9 = (x87_r6_3 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, f4_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                if (!(*(&valA9 + 1) & 0x40))
                    goto label_430e43;
            }

            valA9 = *(flagP + 0x261);

            if (!valA9)
                flagP1 = a3;
            else
            {
                flagP1 = a3;
                x87_r7_7 = Vehicle_InitPlane(srcS, flagP1) * x87_r7_7;
            }

            long double x87_r7_10 = x87_r7_7 - tmpD2;
            v_40 = x87_r7_10 * v_40;
            float v_3c_1 = x87_r7_10 * v_3c;
            long double x87_r7_11 = x87_r7_10 * v_38;
            float v_48_3 =
                v_3c_1 * (*(int32_t*)(uintptr_t)(srcS + 0x80)) + v_40 * (*(int32_t*)(uintptr_t)(srcS + 0x74)) + x87_r7_11 * (*(int32_t*)(uintptr_t)(srcS + 0x8c));
            long double x87_r6_23 = v_40 * (*(int32_t*)(uintptr_t)(srcS + 0x78));
            long double x87_r6_25 = x87_r7_11 * (*(int32_t*)(uintptr_t)(srcS + 0x90));
            v_40 = v_40 * (*(int32_t*)(uintptr_t)(srcS + 0x70)) + x87_r7_11 * (*(int32_t*)(uintptr_t)(srcS + 0x88)) + v_3c_1 * (*(int32_t*)(uintptr_t)(srcS + 0x7c));
            float v_68_2 = v_48_3;
            float v_44_3 = x87_r6_23 + x87_r6_25 + v_3c_1 * (*(int32_t*)(uintptr_t)(srcS + 0x84));
            float v_28;
            Sys_DispatchOpcode_12(&v_28, -(a2));
            float v_1c;
            float v_18;
            float v_14;
            float v_48_4 = v_1c * v_40 + v_14 * v_44_3 + v_18 * v_48_3;
            float v_10;
            long double x87_r7_26 = v_10 * v_40;
            float v_24;
            float v_20;
            v_40 = v_28 * v_40 + v_20 * v_44_3 + v_24 * v_48_3;
            float v_3c_3 = v_48_4;
            float v_c;
            float v_8;
            float v_38_2 = x87_r7_26 + v_8 * v_44_3 + v_c * v_48_3;
            ForceAccumulator_Add(srcS + 0xf0, &v_40);
        }
    }

    void* result = dstD * 7;
    void* objC5 = srcS + (result << 2);
    result = (*(int32_t*)(uintptr_t)(srcS + (result << 2) + 0x75d));

    if (!result || flagP1 < 0)
        return result;

    float v_54_2;

    if (!(*(int32_t*)(uintptr_t)(ctxB + 0x11c)))
        v_54_2 = 0.0f;
    else
        v_54_2 = a2;

    float dstD2 = (*(int32_t*)(uintptr_t)(srcS + flagP1 * 0x38 + 0x1d8));
    a3 = (*(int32_t*)(uintptr_t)(srcS + flagP1 * 0x38 + 0x1dc));

    if ((*(int32_t*)(uintptr_t)(srcS + 0x744)))
    {
        a3 = dstD2;
        (*(int32_t*)(uintptr_t)(srcS + 0x720)) = (*(int32_t*)(uintptr_t)(srcS + 0x720)) * 0.949999988.0f;
    }

    int32_t v_68_4 = 0x42a3d70a;
    return Wheel_FrictionDrive(srcS + 0xf0, srcS + 0x70, objC5 + 0x76c, objC5 + 0x760, v_54_2,
        dstD2, a3);
}
