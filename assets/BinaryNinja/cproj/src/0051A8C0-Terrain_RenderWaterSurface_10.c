#include "gi_platform.h"
#include "0051A8C0-Terrain_RenderWaterSurface_10.h"
void Terrain_RenderWaterSurface_10(float a1)

{
    float tmpD = a1;
    int32_t ctxB;
    int32_t v_a0 = ctxB;
    int32_t srcS = *(tmpD + 0x1f8);

    if (srcS < 3)
        return;

    void* valA1 = *(tmpD + 0x68);

    if (*(valA1 + 0xc4))
    {
        *(valA1 + 0x78) = *(*(tmpD + 0x6c) + 0x20) - *(valA1 + 0x20);
        void* valA2 = *(tmpD + 0x68);
        *(valA2 + 0x80) = *(*(tmpD + 0x6c) + 0x28) - *(valA2 + 0x28);
        void* valA3 = *(tmpD + 0x68);
        *(valA3 + 0x88) = *(*(tmpD + 0x6c) + 0x30) - *(valA3 + 0x30);
    }

    void* valA4 = (*(int32_t*)(uintptr_t)(tmpD + (srcS << 2) + 0x64));

    if (*(valA4 + 0xc4))
    {
        *(valA4 + 0x78) = *(valA4 + 0x20) - (*(int32_t*)(uintptr_t)(*(tmpD + (srcS << 2) + 0x60) + 0x20));
        void* valA5 = (*(int32_t*)(uintptr_t)(tmpD + (srcS << 2) + 0x64));
        *(valA5 + 0x80) = *(valA5 + 0x28) - (*(int32_t*)(uintptr_t)(*(tmpD + (srcS << 2) + 0x60) + 0x28));
        void* valA6 = (*(int32_t*)(uintptr_t)(tmpD + (srcS << 2) + 0x64));
        *(valA6 + 0x88) = *(valA6 + 0x30) - (*(int32_t*)(uintptr_t)(*(tmpD + (srcS << 2) + 0x60) + 0x30));
    }

    if (srcS - 1 > 1)
    {
        int32_t* valA7 = tmpD + 0x6c;
        int32_t v_98_1 = srcS - 2;
        bool cond_3_1;

        do
        {
            void* objC9 = *valA7;

            if (*(objC9 + 0xc4))
            {
                *(objC9 + 0x78) = *(valA7[1] + 0x20) - *(valA7[-1] + 0x20);
                *(*valA7 + 0x80) = *(valA7[1] + 0x28) - *(valA7[-1] + 0x28);
                *(*valA7 + 0x88) = *(valA7[1] + 0x30) - *(valA7[-1] + 0x30);
                void* objC14 = *valA7;
                *(objC14 + 0x78) = *(objC14 + 0x78) * 0.5;
                void* objC15 = *valA7;
                *(objC15 + 0x80) = *(objC15 + 0x80) * 0.5;
                void* objC16 = *valA7;
                *(objC16 + 0x88) = *(objC16 + 0x88) * 0.5;
            }

            valA7 = &valA7[1];
            cond_3_1 = v_98_1 != 1;
            v_98_1 -= 1;
        } while (cond_3_1);
    }

    int32_t flagP2 = 0;
    int32_t* ctxB5 = tmpD + 0x68;
    (*(int32_t*)(uintptr_t)(*(tmpD + (srcS << 2) + 0x64) + 0x98)) = 0;
    float v_8c_1 = 0.00200000009.0f;
    void* v_94_1 = nullptr;
    *(*ctxB5 + 0x94) = 0;

    if (srcS - 1 <= 0)
        return;

    while (true)
    {
        float v_9c_1 = 0.0f;
        *(*ctxB5 + 0x98) = 0;
        int32_t valA10 = *ctxB5 + 0x20;
        double v_78;
        memcpy(&v_78, valA10, 0x18);
        double v_60;
        memcpy(&v_60, valA10, 0x18);
        int32_t saved_dst;
        double v_70;
        double v_68;
        double v_58;
        double v_50;

        while (true)
        {
            v_9c_1 = v_9c_1 + v_8c_1;
            char v_18;
            int32_t valA12 = SplinePathDynCubeObj_OnEvent(&v_18, tmpD, v_94_1, v_9c_1);
            int32_t objC22 = flagP2 & 1;
            void* valA13 = *ctxB5;
            flagP2 += 1;
            memcpy(&(&saved_dst)[objC22 * 6 + 0xd], valA12, 0x18);
            long double x87_r7_32 = v_68 - v_50;
            long double x87_r6_1 = v_70 - v_58;
            long double x87_r5_1 = v_78 - v_60;
            *(valA13 + 0x98) =
                sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_32 * x87_r7_32)
                + *(valA13 + 0x98);

            if (flagP2 >= 0x1f4)
                break;

            tmpD = a1;
        }

        void* objC23 = ctxB5[1];
        void* tmpD2 = *ctxB5;
        long double x87_r7_38 = (*(objC23 + 0x90) + *(tmpD2 + 0x90)) * 0.5.0f * 0.277777791.0f;
        long double f1_1 = 0.0f;
        x87_r7_38 - f1_1;

        if (*(&((x87_r7_38 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_38, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_38 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            *(objC23 + 0x94) = 0;
        else
            *(objC23 + 0x94) = *(tmpD2 + 0x98) * 0.000244140625.0f / x87_r7_38 + *(tmpD2 + 0x94);

        v_8c_1 = 0.00100000005.0f;
        int32_t v_98_2 = 0;
        int32_t* v_90 = 0x9c;

        do
        {
            *(v_90 + *ctxB5) = 0;
            float v_9c_2 = v_98_2 * 0.100000001.0f;
            char v_48;
            int32_t valA17 = SplinePathDynCubeObj_OnEvent(&v_48, a1, v_94_1, v_9c_2);
            memcpy(&v_78, valA17, 0x18);
            int32_t i = 0;
            memcpy(&v_60, valA17, 0x18);

            do
            {
                v_9c_2 = v_9c_2 + 0.00100000005.0f;
                char v_30;
                int32_t valA19 = SplinePathDynCubeObj_OnEvent(&v_30, a1, v_94_1, v_9c_2);
                int32_t objC28 = i & 1;
                float* valA21 = v_90 + *ctxB5;
                i += 1;
                memcpy(&(&saved_dst)[objC28 * 6 + 0xd], valA19, 0x18);
                long double x87_r7_50 = v_68 - v_50;
                long double x87_r6_7 = v_70 - v_58;
                long double x87_r5_3 = v_78 - v_60;
                *valA21 = sqrtl(x87_r5_3 * x87_r5_3 + x87_r6_7 * x87_r6_7 + x87_r7_50 * x87_r7_50)
                    + *valA21;
            } while (i < 0x64);

            v_98_2 += 1;
            v_90 = &v_90[1];
        } while (&v_90[1] < 0xc4);

        ctxB5 = &ctxB5[1];
        bool cond_7_1 = v_94_1 + 1 < srcS - 1;
        v_94_1 += 1;

        if (!cond_7_1)
            break;

        tmpD = a1;
        flagP2 = 0;
    }
}
