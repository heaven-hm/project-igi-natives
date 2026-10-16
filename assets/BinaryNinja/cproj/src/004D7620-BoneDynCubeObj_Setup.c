#include "gi_platform.h"
#include "004D7620-BoneDynCubeObj_Setup.h"
int32_t* BoneDynCubeObj_Setup(float a1, int32_t* a2, float a3 , float a4, float a5, double a6 , int16_t* a7 , float a8 , float a9, float a10, float a11, float a12, float a13, float a14, float a15)

{
    int32_t flagP;
    int32_t v_4_1 = flagP;
    Camera_UpdateTransform_5(0x10150);
    int32_t* objC = a2;
    float srcS = a1;
    void** ctxB = objC[8];
    double* arg_ac = *objC;
    char arg_4148;
    int32_t* v_4 = &arg_4148;
    int32_t* result = (*(int32_t*)(uintptr_t)(srcS + 0x74));
    double* arg_9c = objC[1];

    if (result)
    {
        void* valA1 = *result;
        void* tmpD2 = *(*(valA1 + 0xc) + 0xc);
        result = *(tmpD2 + 0x28);

        if (!result)
        {
            int32_t dstD1 = *(tmpD2 + 0x2c);
            int32_t valA3 = objC[5] << 5;
            result = valA3 + dstD1;
            int32_t* result_1 = result;

            if (valA3 != -(dstD1) && *result)
            {
                void* dstD2 = result[5];
                float arg_40 = result[1];
                char valA5 = objC[3];
                float arg_30 = dstD2;

                if (valA5 == 0xff)
                    goto label_4d76f3;

                int32_t valA7 = 0;
                valA7 = (*(int32_t*)(uintptr_t)(srcS + 0x1c));
                int32_t valA8 = *(((valA5 * 0x180 + valA7) << 2) + &g_a96ae0);

                if (!valA8)
                    goto label_4d76f3;

                valA8(srcS, objC[4]);
                result = a2;

                if (*result[4])
                {
                    objC = a2;
    label_4d76f3: ;
                    float tmpD7 = nanf;
                    float arg_48;
                    float arg_54;
                    float arg_5c;
                    float arg_e0;
                    int32_t arg_148[0x1000];

                    if (arg_40 > 0)
                    {
                        int32_t (* arg_3c)[0x1000] = &arg_148;
                        bool cond_3_1;

                        do
                        {
                            float valA10 = *(dstD2 + 0xc);

                            if (tmpD7 != valA10)
                            {
                                tmpD7 = valA10;
                                void* valA13 = (*(int32_t*)(uintptr_t)(a1 + 0x70)) + valA10 * 0x84;
                                memcpy(&arg_e0, valA13 + 0x24, 0x28);
                                srcS = a1;
                                dstD2 = arg_30;
                                a3 = *(valA13 + 0x18);
                                a4 = *(valA13 + 0x1c);
                                a5 = *(valA13 + 0x20);
                            }

                            long double x87_r7_2 = a9 * *(dstD2 + 8);
                            long double x87_r6_2 = a8 * *(dstD2 + 4);
                            dstD2 += 0x10;
                            arg_30 = dstD2;
                            arg_54 = x87_r7_2 + x87_r6_2 + arg_e0 * *(dstD2 - 0x10);
                            arg_48 = arg_54;
                            arg_5c = a15 * *(dstD2 - 8) + a14 * *(dstD2 - 0xc)
                                + a13 * *(dstD2 - 0x10);
                            long double x87_r7_16 = a4 + a12 * *(dstD2 - 8)
                                + a11 * *(dstD2 - 0xc) + a10 * *(dstD2 - 0x10);
                            *v_4 = a3 + arg_54;
                            v_4[1] = x87_r7_16;
                            v_4[2] = a5 + arg_5c;
                            *arg_3c = tmpD7;
                            arg_3c = &(*arg_3c)[1];
                            cond_3_1 = arg_40 != 1;
                            v_4 = &v_4[3];
                            arg_40 -= 1;
                        } while (cond_3_1);
                        objC = a2;
                    }

                    result = objC[2];
                    int32_t* result_2 = nullptr;

                    if (result > 0)
                    {
                        do
                        {
                            if (!ctxB[0x16])
                                tmpD7 = 0;
                            else
                                tmpD7 = ctxB[0x13];

                            int16_t valA23;
                            valA23 = ctxB[0x16];
                            char v_5_1 = tmpD7;
                            float arg_c = *arg_ac - (*(int32_t*)(uintptr_t)(srcS + 0x20));
                            float arg_10 = arg_ac[1] - (*(int32_t*)(uintptr_t)(srcS + 0x28));
                            float arg_14 = arg_ac[2] - (*(int32_t*)(uintptr_t)(srcS + 0x30));
                            float arg_78 = *arg_9c - (*(int32_t*)(uintptr_t)(srcS + 0x20));
                            float arg_7c = arg_9c[1] - (*(int32_t*)(uintptr_t)(srcS + 0x28));
                            float arg_80 = arg_9c[2] - (*(int32_t*)(uintptr_t)(srcS + 0x30));
                            long double x87_r7_31 = arg_c;
                            long double f3_1 = arg_78;
                            x87_r7_31 - f3_1;
                            (*(int32_t*)(uintptr_t)(&a2 + 3)) = valA23;
                            char arg_26 = 0;
                            long double x87_r7_32;

                            x87_r7_32 = !(*(&((x87_r7_31 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, f3_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_78 : arg_c;

                            double arg_c8 = x87_r7_32 - 0.100000001.0f;
                            long double x87_r7_34 = arg_10;
                            long double f4_1 = arg_7c;
                            x87_r7_34 - f4_1;
                            long double x87_r7_35;

                            x87_r7_35 = !(*(&((x87_r7_34 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_34, f4_1) ? 1 : 0) << 0xa
                                | (x87_r7_34 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_7c : arg_10;

                            double arg_d0 = x87_r7_35 - 0.100000001.0f;
                            long double x87_r7_37 = arg_14;
                            long double f5_1 = arg_80;
                            x87_r7_37 - f5_1;
                            long double x87_r7_38;

                            x87_r7_38 = !(*(&((x87_r7_37 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, f5_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == f5_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_80 : arg_14;

                            double arg_d8 = x87_r7_38 - 0.100000001.0f;
                            long double x87_r7_40 = arg_c;
                            long double f6_1 = arg_78;
                            x87_r7_40 - f6_1;
                            long double x87_r7_41;

                            x87_r7_41 = *(&((x87_r7_40 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_40, f6_1) ? 1 : 0) << 0xa
                                | (x87_r7_40 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_78 : arg_c;

                            arg_e0 = x87_r7_41 + 0.100000001.0f;
                            long double x87_r7_43 = arg_10;
                            long double f7_1 = arg_7c;
                            x87_r7_43 - f7_1;
                            long double x87_r7_44;

                            x87_r7_44 = *(&((x87_r7_43 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_43, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_43 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_7c : arg_10;

                            a9 = x87_r7_44 + 0.100000001.0f;
                            long double x87_r7_46 = arg_14;
                            long double f8_1 = arg_80;
                            x87_r7_46 - f8_1;
                            valA23 = (x87_r7_46 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_46, f8_1) ? 1 : 0) << 0xa
                                | (x87_r7_46 == f8_1 ? 1 : 0) << 0xe;
                            long double x87_r7_47;

                            x87_r7_47 = *(&valA23 + 1) & 0x41 ? arg_80 : arg_14;

                            float arg_130 = arg_c;
                            a11 = x87_r7_47 + 0.100000001.0f;
                            float arg_84 = *arg_9c - *arg_ac;
                            float arg_88 = arg_9c[1] - arg_ac[1];
                            float arg_8c = arg_9c[2] - arg_ac[2];
                            int32_t (* objC16)[0x1000] = (*(int32_t*)(uintptr_t)(srcS + 0xa0));
                            long double x87_r7_56 = -(arg_c);
                            long double x87_r6_14 = -(arg_10);
                            long double x87_r5_2 = -(arg_14);
                            double arg_b8 = x87_r5_2;
                            double arg_28 = x87_r6_14;
                            double arg_b0 = x87_r7_56;
                            arg_30 = arg_8c;
                            arg_40 = arg_88;
                            double arg_90 = arg_84;
                            v_4 = x87_r5_2 * arg_8c + x87_r6_14 * arg_88 + x87_r7_56 * arg_84;
                            long double x87_r7_65 = arg_b0 * arg_b0 + arg_28 * arg_28
                                + arg_b8 * arg_b8 - 1.0f
                                / (arg_90 * arg_90 + arg_40 * arg_40 + arg_30 * arg_30) * v_4
                                * v_4;
                            long double x87_r6_32 = objC16 * objC16;
                            x87_r6_32 - x87_r7_65;

                            if (!(*(&((x87_r6_32 < x87_r7_65 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_32, x87_r7_65) ? 1 : 0) << 0xa
                                | (x87_r6_32 == x87_r7_65 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_66 = objC16;
                                long double f9_1 = arg_c8;
                                x87_r7_66 - f9_1;

                                if (!(*(&((x87_r7_66 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, f9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_67 = objC16;
                                    long double f10_1 = arg_d0;
                                    x87_r7_67 - f10_1;

                                    if (!(*(&((x87_r7_67 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_67, f10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_67 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        long double x87_r7_68 = objC16;
                                        long double f11_1 = arg_d8;
                                        x87_r7_68 - f11_1;

                                        if (!(*(&((x87_r7_68 < f11_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_68, f11_1) ? 1 : 0) << 0xa
                                            | (x87_r7_68 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_70 = -(objC16);
                                            v_4 = x87_r7_70;
                                            long double f12_1 = arg_e0;
                                            x87_r7_70 - f12_1;

                                            if (*(&((x87_r7_70 < f12_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_70, f12_1) ? 1 : 0) << 0xa
                                                | (x87_r7_70 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_71 = v_4;
                                                long double f13_1 = a9;
                                                x87_r7_71 - f13_1;

                                                if (*(&((x87_r7_71 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_71, f13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_71 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double x87_r7_72 = v_4;
                                                    long double f14_1 = a11;
                                                    x87_r7_72 - f14_1;

                                                    if (*(&((x87_r7_72 < f14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_72, f14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_72 == f14_1 ? 1 : 0) << 0xe) + 1)
                                                        & 0x41)
                                                    {
                                                        long double x87_r7_74 = arg_80 - arg_14;
                                                        float arg_58 = arg_7c;
                                                        int16_t valA28;
                                                        valA28 = (*(int32_t*)(uintptr_t)(&a2 + 3));
                                                        long double x87_r6_34 = arg_7c - arg_10;
                                                        arg_54 = arg_78;
                                                        long double x87_r5_13 = arg_78 - arg_c;
                                                        arg_5c = arg_80;
                                                        arg_b8 = sqrtl(x87_r5_13 * x87_r5_13
                                                            + x87_r6_34 * x87_r6_34
                                                            + x87_r7_74 * x87_r7_74);

                                                        if (valA28)
                                                        {
                                                            arg_54 = (*(int32_t*)(uintptr_t)(ctxB + 8)) - (*(int32_t*)(uintptr_t)(srcS + 0x20));
                                                            arg_58 = (*(int32_t*)(uintptr_t)(ctxB + 0x10)) - (*(int32_t*)(uintptr_t)(srcS + 0x28));
                                                            long double x87_r7_81 =
                                                                (*(int32_t*)(uintptr_t)(ctxB + 0x18)) - (*(int32_t*)(uintptr_t)(srcS + 0x30));
                                                            arg_5c = x87_r7_81;
                                                            long double x87_r7_82 =
                                                                x87_r7_81 - arg_14;
                                                            long double x87_r6_37 = arg_58 - arg_10;
                                                            long double x87_r5_16 = arg_54 - arg_c;
                                                            a6 = sqrtl(x87_r5_16 * x87_r5_16
                                                                + x87_r6_37 * x87_r6_37
                                                                + x87_r7_82 * x87_r7_82);
                                                        }

                                                        long double x87_r7_84 = arg_88;
                                                        long double f15_1 = 0.0f;
                                                        x87_r7_84 - f15_1;

                                                        if (!(*(&(
                                                                (x87_r7_84 < f15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_84, f15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_84 == f15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            arg_90 = arg_88;
                                                        else
                                                            arg_90 = -(arg_88);

                                                        long double x87_r7_87 = arg_84;
                                                        long double f16_1 = 0.0f;
                                                        x87_r7_87 - f16_1;
                                                        valA28 = (x87_r7_87 < f16_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_87, f16_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_87 == f16_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&valA28 + 1) & 1))
                                                            arg_90 = arg_84;
                                                        else
                                                            arg_90 = -(arg_84);

                                                        arg_90 = 0;
                                                        int16_t* dstD4 = result_1[4];

                                                        if (*result_1 > 0)
                                                        {
                                                            int32_t saved_dst;
                                                            bool cond_6_1;

                                                            do
                                                            {
                                                                int32_t valA31 = 0;
                                                                valA31 = *dstD4;
                                                                int32_t valA33 = 0;
                                                                valA33 = dstD4[1];
                                                                long double x87_r7_90 =
                                                                    (&saved_dst)[valA31 * 3 + 0x1057];
                                                                long double f17_1 = arg_c8;
                                                                x87_r7_90 - f17_1;
                                                                arg_30 =
                                                                    &(&saved_dst)[valA33 * 3 + 0x1057];
                                                                int32_t valA36 = 0;
                                                                valA36 = dstD4[2];

                                                                if (!(*(&(
                                                                    (x87_r7_90 < f17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_90, f17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_90 == f17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
    label_4d7d71: ;
                                                                    long double x87_r7_93 =
                                                                        (&saved_dst)[valA31 * 3 + 0x1058];
                                                                    long double f18_1 = arg_d0;
                                                                    x87_r7_93 - f18_1;

                                                                    if (!(*(&(
                                                                        (x87_r7_93 < f18_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_93, f18_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_93 == f18_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
    label_4d7db0: ;
                                                                        long double x87_r7_96 =
                                                                            (&saved_dst)[valA31 * 3 + 0x1059];
                                                                        long double f20_1 = arg_d8;
                                                                        x87_r7_96 - f20_1;

                                                                        if (!(*(&(
                                                                            (x87_r7_96 < f20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_96, f20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_96 == f20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
    label_4d7def: ;
                                                                            long double x87_r7_99 =
                                                                                (&saved_dst)[valA31 * 3 + 0x1057];
                                                                            long double f23_1 = arg_e0;
                                                                            x87_r7_99 - f23_1;

                                                                            if (*(&(
                                                                                (x87_r7_99 < f23_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_99, f23_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_99 == f23_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
    label_4d7e2b: ;
                                                                                long double x87_r7_102 =
                                                                                    (&saved_dst)[valA31 * 3 + 0x1058];
                                                                                long double f26_1 = a9;
                                                                                x87_r7_102 - f26_1;

                                                                                if (*(&(
                                                                                    (x87_r7_102 < f26_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_102, f26_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_102 == f26_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
    label_4d7e6a: ;
                                                                                    long double x87_r7_105 =
                                                                                        (&saved_dst)[valA31 * 3 + 0x1059];
                                                                                    long double f29_1 = a11;
                                                                                    x87_r7_105 - f29_1;

                                                                                    if (*(&(
                                                                                        (x87_r7_105 < f29_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_105, f29_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_105 == f29_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
    label_4d7eb1: ;
                                                                                        float arg_18 =
                                                                                            (&saved_dst)[valA36 * 3 + 0x1057]
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1057];
                                                                                        float arg_1c =
                                                                                            (&saved_dst)[valA36 * 3 + 0x1058]
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1058];
                                                                                        float arg_20 =
                                                                                            (&saved_dst)[valA36 * 3 + 0x1059]
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1059];
                                                                                        arg_48 = *arg_30
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1057];
                                                                                        float arg_4c = *(arg_30 + 4)
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1058];
                                                                                        long double x87_r7_119 = *(arg_30 + 8)
                                                                                            - (&saved_dst)[valA31 * 3 + 0x1059];
                                                                                        float arg_50 = x87_r7_119;
                                                                                        v_4 =
                                                                                            x87_r7_119 * arg_1c - arg_4c * arg_20;
                                                                                        a3 = v_4;
                                                                                        long double x87_r7_124 =
                                                                                            arg_50 * arg_18 - arg_48 * arg_20;
                                                                                        arg_40 = x87_r7_124;
                                                                                        a4 = -(x87_r7_124);
                                                                                        a1 =
                                                                                            arg_4c * arg_18 - arg_48 * arg_1c;
                                                                                        long double x87_r7_132 = a1 * arg_8c
                                                                                            + a4 * arg_88 + a3 * arg_84;
                                                                                        arg_b0 = x87_r7_132;
                                                                                        long double f32_1 = 0.0;
                                                                                        x87_r7_132 - f32_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_132 < f32_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_132, f32_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_132 == f32_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x40))
                                                                                        {
                                                                                            long double x87_r7_138 = ((
                                                                                                (&saved_dst)[valA31 * 3 + 0x1058]
                                                                                                - arg_10) * a4 + (
                                                                                                (&saved_dst)[valA31 * 3 + 0x1059]
                                                                                                - arg_14) * a1 + (
                                                                                                (&saved_dst)[valA31 * 3 + 0x1057]
                                                                                                - arg_c) * a3) / arg_b0;
                                                                                            arg_30 = x87_r7_138;
                                                                                            long double f36_1 = 0.0f;
                                                                                            x87_r7_138 - f36_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_138 < f36_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_138, f36_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_138 == f36_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                                long double x87_r7_139 = arg_30;
                                                                                                long double f38_1 = 1.0f;
                                                                                                x87_r7_139 - f38_1;

                                                                                                if (*(&(
                                                                                                    (x87_r7_139 < f38_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_139, f38_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_139 == f38_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                {
                                                                                                    float arg_60 = arg_30 * arg_84 + arg_c;
                                                                                                    float arg_64 = arg_30 * arg_88 + arg_10;
                                                                                                    float arg_68 = arg_30 * arg_8c + arg_14;
                                                                                                    long double x87_r7_149 = a3;
                                                                                                    long double f41_1 = 0.0f;
                                                                                                    x87_r7_149 - f41_1;
                                                                                                    float arg_13c;

                                                                                                    arg_13c = !(*(&(
                                                                                                        (x87_r7_149 < f41_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_149, f41_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_149 == f41_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1) ? a3 : -(a3);

                                                                                                    long double x87_r7_152 = a4;
                                                                                                    long double f42_1 = 0.0f;
                                                                                                    x87_r7_152 - f42_1;
                                                                                                    long double x87_r7_153 = a4;

                                                                                                    if (*(&(
                                                                                                            (x87_r7_152 < f42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_152, f42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_152 == f42_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                        x87_r7_153 = -(x87_r7_153);

                                                                                                    long double x87_r6_55 = a1;
                                                                                                    long double f43_1 = 0.0f;
                                                                                                    x87_r6_55 - f43_1;
                                                                                                    long double x87_r6_56 = a1;

                                                                                                    if (*(&(
                                                                                                            (x87_r6_55 < f43_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r6_55, f43_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r6_55 == f43_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3000) + 1) & 1)
                                                                                                        x87_r6_56 = -(x87_r6_56);

                                                                                                    long double x87_r5_18 = arg_13c;
                                                                                                    x87_r5_18 - x87_r7_153;
                                                                                                    long double x87_r5_19;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r5_18 < x87_r7_153 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r5_18, x87_r7_153) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r5_18 == x87_r7_153 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41))
                                                                                                    {
                                                                                                        x87_r5_19 = arg_13c;
                                                                                                        x87_r5_19 - x87_r6_56;
                                                                                                    }

                                                                                                    long double x87_r7_155;

                                                                                                    if (*(&(
                                                                                                        (x87_r5_18 < x87_r7_153 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(x87_r5_18, x87_r7_153) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (x87_r5_18 == x87_r7_153 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                        (x87_r5_19 < x87_r6_56 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r5_19, x87_r6_56) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r5_19 == x87_r6_56 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41)
                                                                                                    {
                                                                                                        x87_r7_153 - x87_r6_56;

                                                                                                        if (*(&(
                                                                                                            (x87_r7_153 < x87_r6_56 ? 1 : 0) << 8
                                                                                                            | (FCMP_UO(x87_r7_153, x87_r6_56) ? 1
                                                                                                            : 0) << 0xa
                                                                                                            | (x87_r7_153 == x87_r6_56 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 0x41)
                                                                                                        {
                                                                                                            x87_r7_155 = a1;
                                                                                                            long double f44_1 = 0.0;
                                                                                                            x87_r7_155 - f44_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_155 < f44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_155, f44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_155 == f44_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                v_4 = arg_64
                                                                                                                    - (&saved_dst)[valA31 * 3 + 0x1058];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&saved_dst)[valA31 * 3 + 0x1057];
                                                                                                                arg_28 = (v_4 * arg_18
                                                                                                                    - arg_40 * arg_1c) / x87_r7_155;
                                                                                                                long double x87_r7_182 = arg_28;
                                                                                                                long double f47_1 = 0.0;
                                                                                                                x87_r7_182 - f47_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_182 < f47_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_182, f47_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_182 == f47_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r7_183 = arg_28;
                                                                                                                    long double f50_1 = 1.0;
                                                                                                                    x87_r7_183 - f50_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r7_183 < f50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_183, f50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_183 == f50_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double x87_r7_184 = arg_18;
                                                                                                                        long double f53_1 = 0.0f;
                                                                                                                        x87_r7_184 - f53_1;
                                                                                                                        long double x87_r7_185 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r7_184 < f53_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_184, f53_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_184 == f53_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            x87_r7_185 = -(x87_r7_185);

                                                                                                                        long double x87_r6_97 = arg_1c;
                                                                                                                        long double f56_1 = 0.0f;
                                                                                                                        x87_r6_97 - f56_1;
                                                                                                                        long double x87_r6_98 = arg_1c;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_97 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_97, f56_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_97 == f56_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3000) + 1) & 1)
                                                                                                                            x87_r6_98 = -(x87_r6_98);

                                                                                                                        x87_r7_185 - x87_r6_98;

                                                                                                                        if (*(&(
                                                                                                                            (x87_r7_185 < x87_r6_98 ? 1 : 0) << 8
                                                                                                                            | (FCMP_UO(x87_r7_185, x87_r6_98) ? 1
                                                                                                                            : 0) << 0xa
                                                                                                                            | (x87_r7_185 == x87_r6_98 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                        {
                                                                                                                            long double x87_r7_190 = arg_1c;
                                                                                                                            long double f59_1 = 0.0f;
                                                                                                                            x87_r7_190 - f59_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (x87_r7_190 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_190, f59_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_190 == f59_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x40))
                                                                                                                            {
                                                                                                                                x87_r7_155 =
                                                                                                                                    (v_4 - arg_4c * arg_28) / arg_1c;
                                                                                                                                goto label_4d843d;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            x87_r7_155 =
                                                                                                                                (arg_40 - arg_48 * arg_28) / arg_18;
    label_4d843d: ;
                                                                                                                            long double f61_1 = 0.0;
                                                                                                                            x87_r7_155 - f61_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (x87_r7_155 < f61_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_155, f61_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_155 == f61_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1))
                                                                                                                            {
                                                                                                                                long double x87_r6_105 =
                                                                                                                                    x87_r7_155 + arg_28;
                                                                                                                                long double f63_1 = 1.0;
                                                                                                                                x87_r6_105 - f63_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r6_105 < f63_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_105, f63_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_105 == f63_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                    goto label_4d8469;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            x87_r7_155 = arg_40;
                                                                                                            long double f45_1 = 0.0;
                                                                                                            x87_r7_155 - f45_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_155 < f45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_155, f45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_155 == f45_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                a1 = arg_68
                                                                                                                    - (&saved_dst)[valA31 * 3 + 0x1059];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&saved_dst)[valA31 * 3 + 0x1057];
                                                                                                                arg_28 = (a1 * arg_18
                                                                                                                    - arg_40 * arg_20) / x87_r7_155;
                                                                                                                long double x87_r7_168 = arg_28;
                                                                                                                long double f48_1 = 0.0;
                                                                                                                x87_r7_168 - f48_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_168 < f48_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_168, f48_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_168 == f48_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r7_169 = arg_28;
                                                                                                                    long double f51_1 = 1.0;
                                                                                                                    x87_r7_169 - f51_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r7_169 < f51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_169, f51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_169 == f51_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double x87_r7_170 = arg_18;
                                                                                                                        long double f54_1 = 0.0f;
                                                                                                                        x87_r7_170 - f54_1;
                                                                                                                        long double x87_r7_171 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r7_170 < f54_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_170, f54_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_170 == f54_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            x87_r7_171 = -(x87_r7_171);

                                                                                                                        long double x87_r6_80 = arg_20;
                                                                                                                        long double f57_1 = 0.0f;
                                                                                                                        x87_r6_80 - f57_1;
                                                                                                                        long double x87_r6_81 = arg_20;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_80 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_80, f57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_80 == f57_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3000) + 1) & 1)
                                                                                                                            x87_r6_81 = -(x87_r6_81);

                                                                                                                        x87_r7_171 - x87_r6_81;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r7_171 < x87_r6_81 ? 1 : 0) << 8
                                                                                                                                | (FCMP_UO(x87_r7_171, x87_r6_81) ? 1
                                                                                                                                : 0) << 0xa
                                                                                                                                | (x87_r7_171 == x87_r6_81 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            goto label_4d8250;

                                                                                                                        x87_r7_155 =
                                                                                                                            (arg_40 - arg_48 * arg_28) / arg_18;
                                                                                                                        goto label_4d8273;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        x87_r7_155 = v_4;
                                                                                                        long double f46_1 = 0.0;
                                                                                                        x87_r7_155 - f46_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_155 < f46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_155, f46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_155 == f46_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 0x40))
                                                                                                        {
                                                                                                            a1 = arg_68
                                                                                                                - (&saved_dst)[valA31 * 3 + 0x1059];
                                                                                                            v_4 = arg_64
                                                                                                                - (&saved_dst)[valA31 * 3 + 0x1058];
                                                                                                            arg_28 = (a1 * arg_1c
                                                                                                                - v_4 * arg_20) / x87_r7_155;
                                                                                                            long double x87_r7_157 = arg_28;
                                                                                                            long double f49_1 = 0.0;
                                                                                                            x87_r7_157 - f49_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_157 < f49_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_157, f49_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_157 == f49_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1))
                                                                                                            {
                                                                                                                long double x87_r7_158 = arg_28;
                                                                                                                long double f52_1 = 1.0;
                                                                                                                x87_r7_158 - f52_1;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_158 < f52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_158, f52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_158 == f52_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double x87_r7_159 = arg_1c;
                                                                                                                    long double f55_1 = 0.0f;
                                                                                                                    x87_r7_159 - f55_1;
                                                                                                                    long double x87_r7_160 = arg_1c;

                                                                                                                    if (*(&(
                                                                                                                            (x87_r7_159 < f55_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_159, f55_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_159 == f55_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                                        x87_r7_160 = -(x87_r7_160);

                                                                                                                    long double x87_r6_66 = arg_20;
                                                                                                                    long double f58_1 = 0.0f;
                                                                                                                    x87_r6_66 - f58_1;
                                                                                                                    long double x87_r6_67 = arg_20;

                                                                                                                    if (*(&(
                                                                                                                            (x87_r6_66 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r6_66, f58_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r6_66 == f58_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3000) + 1) & 1)
                                                                                                                        x87_r6_67 = -(x87_r6_67);

                                                                                                                    x87_r7_160 - x87_r6_67;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r7_160 < x87_r6_67 ? 1 : 0) << 8
                                                                                                                        | (FCMP_UO(x87_r7_160, x87_r6_67) ? 1
                                                                                                                        : 0) << 0xa
                                                                                                                        | (x87_r7_160 == x87_r6_67 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    {
    label_4d8250: ;
                                                                                                                        long double x87_r7_176 = arg_20;
                                                                                                                        long double f60_1 = 0.0f;
                                                                                                                        x87_r7_176 - f60_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_176 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_176, f60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_176 == f60_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 0x40))
                                                                                                                        {
                                                                                                                            x87_r7_155 =
                                                                                                                                (a1 - arg_50 * arg_28) / arg_20;
                                                                                                                            goto label_4d8273;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                        x87_r7_155 =
                                                                                                                            (v_4 - arg_4c * arg_28) / arg_1c;
    label_4d8273: ;
                                                                                                                        long double f62_1 = 0.0;
                                                                                                                        x87_r7_155 - f62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_155 < f62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_155, f62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_155 == f62_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r6_88 =
                                                                                                                                x87_r7_155 + arg_28;
                                                                                                                            long double f64_1 = 1.0;
                                                                                                                            x87_r6_88 - f64_1;

                                                                                                                            if (*(&(
                                                                                                                                (x87_r6_88 < f64_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_88, f64_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_88 == f64_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            {
    label_4d8469: ;
                                                                                                                                float* v_18_2 =
                                                                                                                                    &(&saved_dst)[valA31 * 3 + 0x1057];
                                                                                                                                float v_18_3 = arg_28;
                                                                                                                                float* v_1c_2 =
                                                                                                                                    &(&saved_dst)[valA31 * 3 + 0x1057];
                                                                                                                                float v_1c_3 = x87_r7_155;
                                                                                                                                int16_t* v_20_1 = dstD4;
                                                                                                                                void* v_24_1 = valA1;
                                                                                                                                long double x87_r7_194 =
                                                                                                                                    arg_30 * arg_b8;
                                                                                                                                long double x87_r6_107 = arg_b0;
                                                                                                                                long double f65_1 = 0.0;
                                                                                                                                x87_r6_107 - f65_1;
                                                                                                                                int16_t valA84 =
                                                                                                                                    (x87_r6_107 < f65_1 ? 1 : 0) << 8 | (
                                                                                                                                    FCMP_UO(x87_r6_107, f65_1) ? 1 : 0)
                                                                                                                                    << 0xa
                                                                                                                                    | (x87_r6_107 == f65_1 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800;
                                                                                                                                char objC37;

                                                                                                                                objC37 = !(*(&valA84 + 1) & 1) ? 0 : 1;

                                                                                                                                valA84 = (*(int32_t*)(uintptr_t)(&a2 + 3));

                                                                                                                                if (valA84)
                                                                                                                                {
                                                                                                                                    long double x87_r6_109 =
                                                                                                                                        x87_r7_194 + 0.10000000000000001;
                                                                                                                                    long double f66_1 = a6;
                                                                                                                                    x87_r6_109 - f66_1;

                                                                                                                                    if (*(&(
                                                                                                                                        (x87_r6_109 < f66_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_109, f66_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_109 == f66_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    {
                                                                                                                                        *(&__return_addr + 3) = 0;
                                                                                                                                        goto label_4d8532;
                                                                                                                                    }

                                                                                                                                    long double f67_1 = a6;
                                                                                                                                    x87_r7_194 - f67_1;
                                                                                                                                    valA84 =
                                                                                                                                        (x87_r7_194 < f67_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_194, f67_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_194 == f67_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800;

                                                                                                                                    if (!(*(&valA84 + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double x87_r6_111 =
                                                                                                                                            x87_r7_194 - 0.10000000000000001;
                                                                                                                                        long double f69_1 = a6;
                                                                                                                                        x87_r6_111 - f69_1;
                                                                                                                                        valA84 =
                                                                                                                                            (x87_r6_111 < f69_1 ? 1 : 0) << 8 | (
                                                                                                                                            FCMP_UO(x87_r6_111, f69_1) ? 1 : 0)
                                                                                                                                            << 0xa
                                                                                                                                            | (x87_r6_111 == f69_1 ? 1 : 0)
                                                                                                                                            << 0xe | 0x3800;

                                                                                                                                        if (*(&valA84 + 1) & 1)
                                                                                                                                        {
                                                                                                                                            if (!objC37)
                                                                                                                                            {
    label_4d8521: ;
                                                                                                                                                valA84 = 0;
                                                                                                                                                goto label_4d8527;
                                                                                                                                            }

                                                                                                                                            valA84 = v_5_1;
                                                                                                                                            bool cond_12_1 = !valA84;
                                                                                                                                            valA84 = 1;

                                                                                                                                            if (cond_12_1)
                                                                                                                                                goto label_4d8527;

                                                                                                                                            goto label_4d8521;
                                                                                                                                        }

                                                                                                                                        tmpD7 = v_5_1;
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        if (!objC37)
                                                                                                                                            valA84 = v_5_1;

                                                                                                                                        if (!objC37 && valA84)
                                                                                                                                            goto label_4d8521;

                                                                                                                                        valA84 = 1;
    label_4d8527: ;
                                                                                                                                        *(&__return_addr + 3) = 1;

                                                                                                                                        if (valA84)
                                                                                                                                            goto label_4d8532;

                                                                                                                                        tmpD7 = v_5_1;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    *(&__return_addr + 3) = 0;
    label_4d8532: ;