#include "gi_platform.h"
#include "00523D40-Light_RenderLensflare_3.h"
int32_t* Light_RenderLensflare_3(void* a1, int32_t a2, int32_t a3 , int32_t a4, int32_t a5)

{
    void* valA1 = (*(int32_t*)(uintptr_t)(*(a1 + 0xc) + 0xc));

    if (*(valA1 + 0x20) == 3)
    {
        void* ctxB1 = *(valA1 + 0x24);
        int32_t i = 0;
        void* v_488_1 = ctxB1;

        if (*(ctxB1 + 8) && ctxB1)
        {
            int32_t v_538 = a4;
            int32_t v_53c = a3;
            *(ctxB1 + 0x28) = 0;
            Light_Lightmaps();
            int32_t v_540 = 0xa83a20;
            char v_200;
            Game_DataSymbolLoad(&v_200, "%s/%s_%05d.olm");
            int32_t valA3;
            void* objC1;
            valA3 = Sys_AllocateMemory_16(&v_200);

            if (valA3)
            {
                void* v_53c_1 = &v_200;
                int32_t* valA4 = Resource_Load(valA3, &v_200, objC1, nullptr);

                if (*valA4 != 0x3df5c28f)
                    Resource_Flush(valA4);
                else
                {
                    float* objC2 = (*(int32_t*)(uintptr_t)(*(a1 + 0xc) + 0xc));
                    long double x87_r7_1 = *objC2;
                    long double f2_1 = valA4[1];
                    x87_r7_1 - f2_1;

                    if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        Resource_Flush(valA4);
                    else
                    {
                        int32_t valA7;
                        int32_t tmpD3;
                        valA7 = Light_ApplyLightmap_11(&objC2[1], &valA4[2]);

                        if (valA7 >= 0)
                            Resource_Flush(valA4);
                        else
                        {
                            int32_t valA8 = *(ctxB1 + 4);

                            if (valA8 != valA4[0xb])
                                Resource_Flush(valA4);
                            else if (!a5)
                            {
                                void* v_53c_4 = &v_200;
                                int32_t* valA16 = Resource_Load(valA8, tmpD3, &v_200, nullptr);
                                int32_t valA17 = valA16[0xb];
                                valA16[0xe] = 0;
                                valA16[9] = 1;
                                valA16[0xa] = 0;
                                void* ctxB2 = &valA16[valA17 * 0xb + 0xf];

                                if (valA17 > 0)
                                {
                                    int16_t* dstD1 = valA16 + 0x66;

                                    do
                                    {
                                        int32_t tmpD9 = dstD1[-1] * *dstD1;
                                        *(dstD1 - 6) = ctxB2;
                                        ctxB2 += tmpD9 << 2;
                                        Light_SetLightColor_4(&dstD1[-0x15]);
                                        i += 1;
                                        dstD1 = &dstD1[0x16];
                                    } while (i < valA16[0xb]);
                                }

                                int32_t objC10 = g_a839f4;
                                g_a83b4c += valA16[0xc];
                                g_a839f4 = objC10 + valA16[0xd];
                                return valA16;
                            }
                        }
                    }
                }
            }

            int32_t* srcS2 = Mem_Alloc(*(ctxB1 + 4) * 0x2c + 0x3c, 4);
            int32_t* v_468 = srcS2;
            srcS2[0xb] = *(ctxB1 + 4);
            srcS2[0xe] = Mem_Alloc(*(ctxB1 + 4) * 0x28, 4);
            srcS2[9] = 0;
            srcS2[0xa] = 1;
            g_a83d28 = 1;
            srcS2[0xc] = 0;
            srcS2[0xd] = 0;
            srcS2[1] = 0x3dcccccd;
            *srcS2 = 0x3df5c28f;
            Light_CalculateAttenuation_10(&srcS2[2]);
            int32_t i_4 = 0;

            if (srcS2[0xb] > 0)
            {
                while (true)
                {
                    int32_t ctxB3 = srcS2[0xe];
                    int16_t* valA23 = *(ctxB1 + 0x18) + (i << 3);
                    int32_t* dstD4 = &srcS2[i * 0xb + 0xf];
                    int32_t* v_404_1 = dstD4;
                    int32_t* ctxB4;

                    ctxB4 = !ctxB3 ? nullptr : ctxB3 + i * 0x28;

                    int16_t tmpD12 = *valA23;
                    dstD4[0xa] = tmpD12;
                    int16_t valA24 = valA23[1];
                    *(dstD4 + 0x2a) = valA24;
                    int32_t* v_464_1 = ctxB4;
                    void* valA28 = Mem_Alloc((valA24 * tmpD12) << 2, 4);
                    int32_t objC15 = 0;
                    bool cond_2_1 = *(dstD4 + 0x2a) <= 0;
                    dstD4[9] = valA28;
                    int32_t v_4f0_1 = 0;

                    if (!cond_2_1)
                    {
                        bool cond_5_1;

                        do
                        {
                            int32_t i_1 = 0;

                            if (dstD4[0xa] > 0)
                            {
                                do
                                {
                                    i_1 += 1;
                                    *(dstD4[9] + (objC15 << 2)) = 0xffffffff;
                                    objC15 += 1;
                                } while (i_1 < dstD4[0xa]);
                            }

                            cond_5_1 = v_4f0_1 + 1 < *(dstD4 + 0x2a);
                            v_4f0_1 += 1;
                        } while (cond_5_1);
                    }

                    Light_SetLightColor_4(dstD4);

                    if (ctxB4)
                    {
                        ctxB4[2] = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa] * 0xc, 4);
                        ctxB4[3] = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa] * 0xc, 4);
                        ctxB4[4] = Mem_Alloc((*(dstD4 + 0x2a) * dstD4[0xa]) << 2, 4);
                        ctxB4[9] = Mem_Alloc((*(dstD4 + 0x2a) * dstD4[0xa]) << 2, 4);
                        *ctxB4 = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa] * 0xc, 4);
                        ctxB4[1] = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa] * 0xc, 4);
                        ctxB4[5] = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa], 4);
                        ctxB4[6] = Mem_Alloc(*(dstD4 + 0x2a) * dstD4[0xa], 4);
                        ctxB4[7] = g_a83b4c;
                        int32_t i_2 = 0;
                        int32_t flagP1 = 0;
                        ctxB4[8] = 0;
                        int32_t i_3 = 0;
                        int32_t v_494_1 = 0;

                        if (*(dstD4 + 0x2a) > 0)
                        {
                            do
                            {
                                int32_t tmpD29 = dstD4[0xa];
                                int32_t valA54 = 0;
                                int32_t v_520_1 = tmpD29;
                                int32_t v_518_1 = 0;

                                if (tmpD29 > 0)
                                {
                                    float v_418_1 = i_3;
                                    float v_434_1 = i_2 + 1;
                                    int32_t objC78;

                                    do
                                    {
                                        long double x87_r7_4 = v_520_1;
                                        int32_t* v_454_1 = nullptr;
                                        int32_t* v_4bc_1 = nullptr;
                                        void* v_48c_2 = nullptr;
                                        void* v_520_2 = nullptr;
                                        float v_444_1 = 3.40282347e+38.0f;
                                        float v_500_1 = v_518_1 / x87_r7_4;
                                        int32_t valA56 = ctxB4[4];
                                        float v_4f4_1 = *(dstD4 + 0x2a);
                                        float v_4fc_1 = v_418_1 / v_4f4_1;
                                        float v_510_1 = (valA54 + 1) / x87_r7_4;
                                        float v_50c_1 = v_434_1 / v_4f4_1;
                                        float v_4d8 = (v_510_1 + v_500_1) * 0.5.0f;
                                        float v_4d4_1 = (v_50c_1 + v_4fc_1) * 0.5.0f;
                                        *(valA56 + (flagP1 << 2)) = 0;
                                        void* objC25 = *(v_488_1 + 0x1c);
                                        float v_40c;
                                        float v_408;

                                        while (true)
                                        {
                                            int32_t tmpD31 = 0;
                                            tmpD31 = *(objC25 + 0xc);
                                            void* srcS4 = objC25 + 0x20;
                                            void* v_508_1 = objC25;
                                            void* v_4f4_2 = srcS4;
                                            int32_t v_44c_1 = 0;

                                            if (tmpD31 / 3 > 0)
                                            {
                                                while (true)
                                                {
                                                    int16_t tmpD34 = *(objC25 + 0x14);
                                                    int16_t valA60 = *(srcS4 + 2) + tmpD34;
                                                    int16_t objC26 = tmpD34 + *srcS4;
                                                    int16_t srcS5 = *(srcS4 + 4) + tmpD34;

                                                    if (objC26 != valA60 && valA60 != srcS5
                                                        && srcS5 != objC26)
                                                    {
                                                        int32_t objC27 = 0;
                                                        objC27 = *(v_508_1 + 0x12);

                                                        if (objC27 == i_4)
                                                        {
                                                            int32_t objC28 = *(v_488_1 + 0x14);
                                                            float* ctxB5 = objC28 + objC26 * 0x28;
                                                            long double x87_r7_14 = ctxB5[8];
                                                            long double f4_1 = v_500_1;
                                                            x87_r7_14 - f4_1;
                                                            float* flagP2 = objC28 + valA60 * 0x28;
                                                            float* v_4ec = &ctxB5[8];
                                                            float* tmpD37 = &flagP2[8];
                                                            float* v_4e8_1 = tmpD37;
                                                            float* objC29 = objC28 + srcS5 * 0x28;
                                                            float* objC30 = &objC29[8];
                                                            float* v_4e4_1 = objC30;

                                                            if (!(*(&(
                                                                (x87_r7_14 < f4_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_14, f4_1) ? 1 : 0)
                                                                << 0xa | (x87_r7_14 == f4_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
    label_5242bc: ;
                                                                long double x87_r7_17 = ctxB5[8];
                                                                long double f6_1 = v_510_1;
                                                                x87_r7_17 - f6_1;

                                                                if (*(&(
                                                                        (x87_r7_17 < f6_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(x87_r7_17, f6_1) ? 1 : 0)
                                                                        << 0xa | (x87_r7_17 == f6_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double x87_r7_18 = *tmpD37;
                                                                long double f10_1 = v_510_1;
                                                                x87_r7_18 - f10_1;

                                                                if (*(&(
                                                                        (x87_r7_18 < f10_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_18, f10_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_18 == f10_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double x87_r7_19 = *objC30;
                                                                long double f15_1 = v_510_1;
                                                                x87_r7_19 - f15_1;

                                                                if (*(&(
                                                                    (x87_r7_19 < f15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_19, f15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_19 == f15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    objC30 = v_4e4_1;
                                                                    tmpD37 = v_4e8_1;
    label_5242ef: ;
                                                                    long double x87_r7_20 = ctxB5[9];
                                                                    long double f9_1 = v_4fc_1;
                                                                    x87_r7_20 - f9_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_20 < f9_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_20, f9_1) ? 1 : 0)
                                                                            << 0xa | (x87_r7_20 == f9_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double x87_r7_21 = tmpD37[1];
                                                                    long double f14_1 = v_4fc_1;
                                                                    x87_r7_21 - f14_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_21 < f14_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_21, f14_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_21 == f14_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double x87_r7_22 = objC30[1];
                                                                    long double f19_1 = v_4fc_1;
                                                                    x87_r7_22 - f19_1;

                                                                    if (!(*(&(
                                                                        (x87_r7_22 < f19_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_22, f19_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_22 == f19_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
                                                                        objC30 = v_4e4_1;
                                                                        tmpD37 = v_4e8_1;
    label_524325: ;
                                                                        long double x87_r7_23 = ctxB5[9];
                                                                        long double f13_1 = v_50c_1;
                                                                        x87_r7_23 - f13_1;

                                                                        if (*(&(
                                                                                (x87_r7_23 < f13_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_23, f13_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_23 == f13_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double x87_r7_24 = tmpD37[1];
                                                                        long double f18_1 = v_50c_1;
                                                                        x87_r7_24 - f18_1;

                                                                        if (*(&(
                                                                                (x87_r7_24 < f18_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_24, f18_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_24 == f18_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double x87_r7_25 = objC30[1];
                                                                        long double f20_1 = v_50c_1;
                                                                        x87_r7_25 - f20_1;

                                                                        if (*(&(
                                                                            (x87_r7_25 < f20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_25, f20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_25 == f20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                            objC30 = v_4e4_1;
                                                                            tmpD37 = v_4e8_1;
    label_524365: ;
                                                                            int32_t v_514_1 = 1;
                                                                            long double x87_r7_29 = (objC30[1]
                                                                                - ctxB5[9]) * (*tmpD37 - ctxB5[8])
                                                                                - (tmpD37[1] - ctxB5[9])
                                                                                * (*objC30 - ctxB5[8]);
                                                                            long double f17_1 = 0.0f;
                                                                            x87_r7_29 - f17_1;

                                                                            if (*(&(
                                                                                    (x87_r7_29 < f17_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_29, f17_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_29 == f17_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                v_514_1 = 0;

                                                                            char v_3c0;
                                                                            __builtin_memset(&v_3c0, 0, 0x40);
                                                                            float v_430_1 =
                                                                                Sys_FreeMemory_10(&ctxB5[8], v_4e8_1);
                                                                            float v_42c_1 =
                                                                                Sys_FreeMemory_10(v_4e8_1, v_4e4_1);
                                                                            long double fp0_3 =
                                                                                Sys_FreeMemory_10(v_4e4_1, &ctxB5[8]);
                                                                            long double x87_r6_16 =
                                                                                (fp0_3 + v_42c_1 + v_430_1) * 0.5.0f;
                                                                            long double x87_r6_18 = (x87_r6_16
                                                                                - fp0_3) * (x87_r6_16 - v_42c_1)
                                                                                * (x87_r6_16 - v_430_1) * x87_r6_16;
                                                                            long double f21_1 = 0.0f;
                                                                            x87_r6_18 - f21_1;
                                                                            float v_470_1;

                                                                            v_470_1 = *(&(
                                                                                (x87_r6_18 < f21_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r6_18, f21_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r6_18 == f21_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                : sqrtl(x87_r6_18);

                                                                            long double x87_r7_41 =
                                                                                flagP2[2] - ctxB5[2];
                                                                            long double x87_r6_22 =
                                                                                flagP2[1] - ctxB5[1];
                                                                            long double x87_r5_9 = *flagP2 - *ctxB5;
                                                                            long double x87_r4_5 = sqrtl(
                                                                                x87_r5_9 * x87_r5_9
                                                                                + x87_r6_22 * x87_r6_22
                                                                                + x87_r7_41 * x87_r7_41);
                                                                            long double x87_r6_25 =
                                                                                objC29[2] - flagP2[2];
                                                                            long double x87_r5_12 =
                                                                                objC29[1] - flagP2[1];
                                                                            long double x87_r4_7 = *objC29 - *flagP2;
                                                                            long double x87_r3_9 = sqrtl(
                                                                                x87_r4_7 * x87_r4_7
                                                                                + x87_r5_12 * x87_r5_12
                                                                                + x87_r6_25 * x87_r6_25);
                                                                            long double x87_r5_15 =
                                                                                ctxB5[2] - objC29[2];
                                                                            long double x87_r4_10 =
                                                                                ctxB5[1] - objC29[1];
                                                                            long double x87_r3_11 =
                                                                                *ctxB5 - *objC29;
                                                                            long double x87_r2_9 = sqrtl(
                                                                                x87_r3_11 * x87_r3_11
                                                                                + x87_r4_10 * x87_r4_10
                                                                                + x87_r5_15 * x87_r5_15);
                                                                            long double x87_r4_15 =
                                                                                (x87_r2_9 + x87_r3_9 + x87_r4_5) * 0.5.0f;
                                                                            long double x87_r3_17 = (x87_r4_15
                                                                                - x87_r2_9) * (x87_r4_15 - x87_r3_9)
                                                                                * (x87_r4_15 - x87_r4_5) * x87_r4_15;
                                                                            long double f22_1 = 0.0f;
                                                                            x87_r3_17 - f22_1;
                                                                            float v_458_1;

                                                                            v_458_1 = *(&(
                                                                                (x87_r3_17 < f22_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r3_17, f22_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r3_17 == f22_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                : sqrtl(x87_r3_17);

                                                                            float v_380 = v_500_1;
                                                                            float v_37c_1 = v_4fc_1;
                                                                            float v_378_1 = v_510_1;
                                                                            float v_370 = v_500_1;
                                                                            float v_374_1 = v_4fc_1;
                                                                            float v_36c_1 = v_50c_1;
                                                                            float v_364_1 = v_4fc_1;
                                                                            float v_368_1 = v_510_1;
                                                                            float v_360_1 = v_510_1;
                                                                            float v_358_1 = v_500_1;
                                                                            int32_t dstD6 = 2;
                                                                            int32_t objC36 = 1;
                                                                            void** srcS7 = &v_4ec;
                                                                            float v_35c_1 = v_50c_1;
                                                                            float v_354_1 = v_50c_1;
                                                                            int32_t v_4f8_1 = 2;
                                                                            int32_t v_450_1 = 1;
                                                                            void** v_524_2 = &v_4ec;

                                                                            do
                                                                            {
                                                                                float* tmpD45;
                                                                                float* ctxB6;

                                                                                if (!v_514_1)
                                                                                {
                                                                                    ctxB6 = (&v_4ec)[objC36 % 3];
                                                                                    tmpD45 = *srcS7;
                                                                                }
                                                                                else
                                                                                {
                                                                                    ctxB6 = *srcS7;
                                                                                    tmpD45 = (&v_4ec)[objC36 % 3];
                                                                                }

                                                                                float v_51c_1 = tmpD45;
                                                                                float v_4e0_1 = *tmpD45 - *ctxB6;
                                                                                float v_4dc_1 = tmpD45[1] - ctxB6[1];

                                                                                if (dstD6 > 0)
                                                                                {
                                                                                    float* flagP3 = &v_380;
                                                                                    int32_t* v_490_1 = &v_3c0;
                                                                                    float* v_504_1 = &v_380;
                                                                                    int32_t saved_src;
                                                                                    float* v_46c_1 =
                                                                                        &(&saved_src)[dstD6 * 6 + 0x6f];
                                                                                    int32_t v_448_1 = dstD6;
                                                                                    bool cond_15_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*v_490_1)
                                                                                        {
                                                                                            long double x87_r7_50 = v_4dc_1;
                                                                                            long double f24_1 = 0.0f;
                                                                                            x87_r7_50 - f24_1;
                                                                                            long double x87_r7_51 = v_4dc_1;
                                                                                            int32_t tmpD48 = 0;

                                                                                            if (*(&(
                                                                                                    (x87_r7_50 < f24_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_50, f24_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_50 == f24_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                x87_r7_51 = -(x87_r7_51);

                                                                                            long double x87_r6_28 = v_4e0_1;
                                                                                            long double f25_1 = 0.0f;
                                                                                            x87_r6_28 - f25_1;
                                                                                            long double x87_r6_29 = v_4e0_1;

                                                                                            if (*(&(
                                                                                                    (x87_r6_28 < f25_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r6_28, f25_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_28 == f25_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                x87_r6_29 = -(x87_r6_29);

                                                                                            x87_r7_51 - x87_r6_29;
                                                                                            char v_3f0;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_51 < x87_r6_29 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_51, x87_r6_29) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_51 == x87_r6_29 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41))
                                                                                            {
                                                                                                int32_t* objC38 = &v_3f0;
                                                                                                float* srcS8 = flagP3;
                                                                                                int32_t j_7 = 3;
                                                                                                int32_t j;

                                                                                                do
                                                                                                {
                                                                                                    long double x87_r7_58 = (srcS8[1]
                                                                                                        - ctxB6[1]) * v_4e0_1 / v_4dc_1
                                                                                                        + *ctxB6;
                                                                                                    long double x87_r6_31 = ctxB6[1];
                                                                                                    long double f32_1 = *(v_51c_1 + 4);
                                                                                                    x87_r6_31 - f32_1;
                                                                                                    long double f33_1 = *srcS8;
                                                                                                    x87_r7_58 - f33_1;
                                                                                                    int16_t valA91 =
                                                                                                        (x87_r7_58 < f33_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_58, f33_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_58 == f33_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t valA92;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r6_31 < f32_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r6_31, f32_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r6_31 == f32_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                    {
                                                                                                        if (*(&valA91 + 1) & 1)
                                                                                                            valA92 = 0;
                                                                                                        else
                                                                                                            valA92 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&valA91 + 1) & 0x41))
                                                                                                        valA92 = 0;
                                                                                                    else
                                                                                                        valA92 = 1;

                                                                                                    *objC38 = valA92;
                                                                                                    tmpD48 += valA92;
                                                                                                    srcS8 = &srcS8[2];
                                                                                                    objC38 = &objC38[1];
                                                                                                    j = j_7;
                                                                                                    j_7 -= 1;
                                                                                                } while (j != 1);
                                                                                                goto label_524721;
                                                                                            }

                                                                                            long double x87_r7_59 = v_4e0_1;
                                                                                            long double f29_1 = 0.0f;
                                                                                            x87_r7_59 - f29_1;

                                                                                            if (*(&(
                                                                                                    (x87_r7_59 < f29_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_59, f29_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_59 == f29_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x40)
                                                                                                *v_490_1 = 1;
                                                                                            else
                                                                                            {
                                                                                                int32_t* objC39 = &v_3f0;
                                                                                                float* srcS9 = &flagP3[1];
                                                                                                int32_t j_8 = 3;
                                                                                                int32_t j_1;

                                                                                                do
                                                                                                {
                                                                                                    long double x87_r7_64 = (srcS9[-1]
                                                                                                        - *ctxB6) * v_4dc_1 / v_4e0_1
                                                                                                        + ctxB6[1];
                                                                                                    long double x87_r6_32 = *ctxB6;
                                                                                                    long double f35_1 = *v_51c_1;
                                                                                                    x87_r6_32 - f35_1;
                                                                                                    long double f36_1 = *srcS9;
                                                                                                    x87_r7_64 - f36_1;
                                                                                                    int16_t valA94 =
                                                                                                        (x87_r7_64 < f36_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_64, f36_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_64 == f36_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t valA95;

                                                                                                    if (*(&(
                                                                                                        (x87_r6_32 < f35_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r6_32, f35_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r6_32 == f35_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                    {
                                                                                                        if (*(&valA94 + 1) & 1)
                                                                                                            valA95 = 0;
                                                                                                        else
                                                                                                            valA95 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&valA94 + 1) & 0x41))
                                                                                                        valA95 = 0;
                                                                                                    else
                                                                                                        valA95 = 1;

                                                                                                    *objC39 = valA95;
                                                                                                    tmpD48 += valA95;
                                                                                                    srcS9 = &srcS9[2];
                                                                                                    objC39 = &objC39[1];
                                                                                                    j_1 = j_8;
                                                                                                    j_8 -= 1;
                                                                                                } while (j_1 != 1);
    label_524721: ;
                                                                                                if (tmpD48)
                                                                                                {
                                                                                                    if (tmpD48 == 3)
                                                                                                        *v_490_1 = 1;
                                                                                                    else if (tmpD48 != 2)
                                                                                                    {
                                                                                                        int32_t j_2 = 0;
                                                                                                        int32_t* objC44 = &v_3f0;
                                                                                                        int32_t j_5;

                                                                                                        do
                                                                                                        {
                                                                                                            if (*objC44)
                                                                                                                j_5 = j_2;

                                                                                                            j_2 += 1;
                                                                                                            objC44 = &objC44[1];
                                                                                                        } while (j_2 < 3);

                                                                                                        int32_t f1_5 = (j_5 + 1) % 3;
                                                                                                        float dstD8 = &v_504_1[f1_5 * 2];
                                                                                                        v_46c_1[-2] = v_504_1[f1_5 * 2];
                                                                                                        v_46c_1[-1] = *(dstD8 + 4);
                                                                                                        float* srcS15 = &v_504_1[j_5 * 2];
                                                                                                        float flagP5 =
                                                                                                            &v_504_1[(j_5 + 2) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(v_46c_1, flagP5, srcS15,
                                                                                                            ctxB6, v_51c_1);
                                                                                                        Light_CalculateAttenuation_4(&v_46c_1[2], dstD8,
                                                                                                            srcS15, ctxB6, v_51c_1);
                                                                                                        v_4f8_1 += 1;
                                                                                                        v_46c_1 = &v_46c_1[6];
                                                                                                        Light_CalculateAttenuation_4(srcS15, flagP5, srcS15,
                                                                                                            ctxB6, v_51c_1);
                                                                                                        flagP3 = v_504_1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        int32_t j_3 = 0;
                                                                                                        int32_t* objC41 = &v_3f0;
                                                                                                        int32_t j_6;

                                                                                                        do
                                                                                                        {
                                                                                                            if (!*objC41)
                                                                                                                j_6 = j_3;

                                                                                                            j_3 += 1;
                                                                                                            objC41 = &objC41[1];
                                                                                                        } while (j_3 < 3);

                                                                                                        float* srcS11 = &flagP3[j_6 * 2];
                                                                                                        float valA100 =
                                                                                                            &flagP3[(j_6 + 1) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(valA100, valA100, srcS11,
                                                                                                            ctxB6, v_51c_1);
                                                                                                        float* valA101 =
                                                                                                            &flagP3[(j_6 + 2) % 3 * 2];
                                                                                                        Light_CalculateAttenuation_4(valA101, valA101, srcS11,
                                                                                                            ctxB6, v_51c_1);
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }

                                                                                        flagP3 = &flagP3[6];
                                                                                        cond_15_1 = v_448_1 != 1;
                                                                                        v_504_1 = flagP3;
                                                                                        v_490_1 = &v_490_1[1];
                                                                                        v_448_1 -= 1;
                                                                                    } while (cond_15_1);
                                                                                    dstD6 = v_4f8_1;
                                                                                    objC36 = v_450_1;
                                                                                    srcS7 = v_524_2;
                                                                                }

                                                                                objC36 += 1;
                                                                                srcS7 = &srcS7[1];
                                                                                v_450_1 = objC36;
                                                                                v_524_2 = srcS7;
                                                                            } while (objC36 - 1 < 3);

                                                                            if (!v_4bc_1)
                                                                            {
                                                                                int32_t ctxB7 = 1;
                                                                                void** dstD11 = &v_4ec;
                                                                                int32_t srcS16 = 1;

                                                                                do
                                                                                {
                                                                                    float* objC49;
                                                                                    float* tmpD62;

                                                                                    if (!v_514_1)
                                                                                    {
                                                                                        objC49 = (&v_4ec)[srcS16 % 3];
                                                                                        tmpD62 = *dstD11;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        objC49 = *dstD11;
                                                                                        tmpD62 = (&v_4ec)[srcS16 % 3];
                                                                                    }

                                                                                    long double x87_r7_66 =
                                                                                        *tmpD62 - *objC49;
                                                                                    long double x87_r6_34 =
                                                                                        tmpD62[1] - objC49[1];
                                                                                    long double f28_1 = 0.0f;
                                                                                    x87_r6_34 - f28_1;
                                                                                    long double x87_r5_18 = x87_r6_34;

                                                                                    if (*(&(
                                                                                            (x87_r6_34 < f28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_34, f28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_34 == f28_1 ? 1 : 0)
                                                                                            << 0xe | 0x2800) + 1) & 1)
                                                                                        x87_r5_18 = -(x87_r5_18);

                                                                                    long double f31_1 = 0.0f;
                                                                                    x87_r7_66 - f31_1;
                                                                                    long double x87_r4_18 = x87_r7_66;

                                                                                    if (*(&(
                                                                                            (x87_r7_66 < f31_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_66, f31_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_66 == f31_1 ? 1 : 0)
                                                                                            << 0xe | 0x2000) + 1) & 1)
                                                                                        x87_r4_18 = -(x87_r4_18);

                                                                                    x87_r5_18 - x87_r4_18;
                                                                                    int16_t valA120;

                                                                                    if (*(&(
                                                                                        (x87_r5_18 < x87_r4_18 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r5_18, x87_r4_18) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r5_18 == x87_r4_18 ? 1 : 0)
                                                                                        << 0xe | 0x2800) + 1) & 0x41)
                                                                                    {
                                                                                        long double f37_1 = 0.0f;
                                                                                        x87_r7_66 - f37_1;

                                                                                        if (*(&(
                                                                                                (x87_r7_66 < f37_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_66, f37_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_66 == f37_1 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x40)
                                                                                            ctxB7 = 0;
                                                                                        else
                                                                                        {
                                                                                            long double x87_r5_26 =
                                                                                                (v_4d8 - *objC49) * x87_r6_34;
                                                                                            long double x87_r6_42 =
                                                                                                x87_r5_26 / x87_r5_26 + objC49[1];
                                                                                            long double x87_r6_45 = *objC49;
                                                                                            long double f40_1 = *tmpD62;
                                                                                            x87_r6_45 - f40_1;
                                                                                            long double f41_1 = v_4d4_1;
                                                                                            x87_r6_42 - f41_1;
                                                                                            valA120 =
                                                                                                (x87_r6_42 < f41_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r6_42, f41_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r6_42 == f41_1 ? 1 : 0)
                                                                                                << 0xe;

                                                                                            if (*(&(
                                                                                                (x87_r6_45 < f40_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r6_45, f40_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r6_45 == f40_1 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                            {
                                                                                                if (*(&valA120 + 1) & 1)
                                                                                                    ctxB7 &= 1;
                                                                                                else
                                                                                                    ctxB7 = 0;
                                                                                            }
                                                                                            else if (!(*(&valA120 + 1) & 0x41))
                                                                                                ctxB7 &= 1;
                                                                                            else
                                                                                                ctxB7 = 0;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        long double x87_r6_37 = x87_r7_66
                                                                                            * (v_4d4_1 - objC49[1]) / x87_r6_34
                                                                                            + *objC49;
                                                                                        long double x87_r6_40 = objC49[1];
                                                                                        long double f38_1 = tmpD62[1];
                                                                                        x87_r6_40 - f38_1;
                                                                                        long double f39_1 = v_4d8;
                                                                                        x87_r6_37 - f39_1;
                                                                                        valA120 =
                                                                                            (x87_r6_37 < f39_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_37, f39_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_37 == f39_1 ? 1 : 0)
                                                                                            << 0xe;

                                                                                        if (!(*(&(
                                                                                            (x87_r6_40 < f38_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_40, f38_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_40 == f38_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                        {
                                                                                            if (*(&valA120 + 1) & 1)
                                                                                                ctxB7 &= 1;
                                                                                            else
                                                                                                ctxB7 = 0;
                                                                                        }
                                                                                        else if (!(*(&valA120 + 1) & 0x41))
                                                                                            ctxB7 &= 1;
                                                                                        else
                                                                                            ctxB7 = 0;
                                                                                    }
                                                                                    srcS16 += 1;
                                                                                    dstD11 = &dstD11[1];
                                                                                } while (srcS16 - 1 < 3);

                                                                                if (ctxB7)
                                                                                {
                                                                                    int32_t v_414 = objC26;
                                                                                    int16_t v_410_1 = srcS5;
                                                                                    v_4bc_1 = &v_414;
                                                                                    v_520_2 = v_508_1;
                                                                                }
                                                                            }

                                                                            float v_484_1 = 0.0f;

                                                                            if (v_4f8_1 > 0)
                                                                            {
                                                                                int32_t* flagP6 = &v_3c0;
                                                                                float* srcS17 = &v_370;
                                                                                int32_t v_524_3 = v_4f8_1;
                                                                                bool cond_17_1;

                                                                                do
                                                                                {
                                                                                    if (!*flagP6)
                                                                                    {
                                                                                        float v_424_1 =
                                                                                            Sys_FreeMemory_10(&srcS17[-4], &srcS17[-2]);
                                                                                        float v_420_1 =
                                                                                            Sys_FreeMemory_10(&srcS17[-2], srcS17);
                                                                                        long double fp0_6 =
                                                                                            Sys_FreeMemory_10(srcS17, &srcS17[-4]);
                                                                                        long double x87_r6_50 =
                                                                                            (fp0_6 + v_420_1 + v_424_1) * 0.5.0f;
                                                                                        long double x87_r6_52 = (x87_r6_50
                                                                                            - fp0_6) * (x87_r6_50 - v_420_1)
                                                                                            * (x87_r6_50 - v_424_1) * x87_r6_50;
                                                                                        long double f27_1 = 0.0f;
                                                                                        x87_r6_52 - f27_1;
                                                                                        long double x87_r7_82;

                                                                                        x87_r7_82 = *(&(
                                                                                            (x87_r6_52 < f27_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_52, f27_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_52 == f27_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1 ? 0.0f
                                                                                            : sqrtl(x87_r6_52);

                                                                                        v_484_1 = x87_r7_82 + v_484_1;
                                                                                    }

                                                                                    flagP6 = &flagP6[1];
                                                                                    srcS17 = &srcS17[6];
                                                                                    cond_17_1 = v_524_3 != 1;
                                                                                    v_524_3 -= 1;
                                                                                } while (cond_17_1);
                                                                                long double x87_r7_85 = v_484_1;
                                                                                long double f30_1 = 0.0f;
                                                                                x87_r7_85 - f30_1;

                                                                                if (!(*(&(
                                                                                    (x87_r7_85 < f30_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_85, f30_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_85 == f30_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                {
                                                                                    long double x87_r7_86 = v_470_1;
                                                                                    long double f34_1 = 0.0f;
                                                                                    x87_r7_86 - f34_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_86 < f34_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_86, f34_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_86 == f34_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        float* valA130 =
                                                                                            v_464_1[4] + (v_494_1 << 2);
                                                                                        *valA130 =
                                                                                            v_484_1 * v_458_1 / v_470_1
                                                                                            + *valA130;
                                                                                    }

                                                                                    float* v_504_2 = &v_380;
                                                                                    int32_t* v_514_2 = &v_3c0;
                                                                                    int32_t v_524_4 = v_4f8_1;
                                                                                    bool cond_22_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*v_514_2)
                                                                                        {
                                                                                            float* srcS18 = v_504_2;
                                                                                            int32_t j_9 = 3;
                                                                                            int32_t j_4;

                                                                                            do
                                                                                            {
                                                                                                long double fp0_7 =
                                                                                                    Sys_FreeMemory_10(srcS18, &v_4d8);
                                                                                                long double x87_r6_55 = v_444_1;
                                                                                                x87_r6_55 - fp0_7;

                                                                                                if (!(*(&(
                                                                                                    (x87_r6_55 < fp0_7 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r6_55, fp0_7) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_55 == fp0_7 ? 1 : 0) << 0xe
                                                                                                    | 0x3800) + 1) & 0x41))
                                                                                                {
                                                                                                    float valA133 = *srcS18;
                                                                                                    v_444_1 = fp0_7;
                                                                                                    int16_t v_3fc_1 = srcS5;
                                                                                                    float objC62 = srcS18[1];
                                                                                                    int32_t v_400 = objC26;
                                                                                                    v_454_1 = &v_400;
                                                                                                    v_48c_2 = v_508_1;
                                                                                                    v_40c = valA133;
                                                                                                    v_408 = objC62;
                                                                                                }
