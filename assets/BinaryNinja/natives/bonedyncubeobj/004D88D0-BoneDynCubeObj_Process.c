// Original IGI.EXE function: BoneDynCubeObj_Process (VA 0x004D88D0; static CFG gate PASS, CFG score 0.889).
#include "BoneDynCubeObj_Process.h"
❓  int32_t* BoneDynCubeObj_Process(float a1, float a2, float a3 @ 0x30, float a4, float a5 @ 0x64, float a6, float a7, float a8, float a9, float a10, float a11, float a12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    int32_t flagP;
    int32_t v_4_1 = flagP;
    Camera_UpdateTransform_5(0x100c0);
    int32_t* tmpD = a2;
    float srcS = a1;
    float arg_48 = *tmpD;
    void arg_40b8;
    int32_t* v_4 = &arg_40b8;
    int32_t* valA1 = *(srcS + 0x74);
    float arg_18 = tmpD[1];

    if (valA1)
    {
        void* valA2 = *valA1;
        valA1 = *(*(valA2 + 0xc) + 0xc);

        if (!valA1[0xa])
        {
            int32_t** objC3 = valA1[0xb];
            int32_t** arg_5c = objC3;

            if (objC3)
            {
                int16_t valA3;
                valA3 = tmpD[2];
                void* ctxB1 = objC3[5];
                int32_t dstD1 = objC3[1];

                if (valA3 == 0xff)
                    goto label_4d8980;

                int32_t valA5 = 0;
                valA5 = *(srcS + 0x1c);
                int32_t valA6 = *(((valA3 * 0x180 + valA5) << 2) + &g_a96ae0);

                if (!valA6)
                    goto label_4d8980;

                valA6(srcS, *(a2 + 0xc));
                valA1 = a2;

                if (*valA1[3])
                {
                    objC3 = arg_5c;
                label_4d8980:
                    int32_t tmpD5 = 0xffffffff;
                    int32_t* arg_20;
                    float arg_38;
                    float __return_addr_2;
                    float arg_58;
                    float arg_60;

                    if (dstD1 > 0)
                    {
                        int32_t v_8_1 = dstD1;
                        void arg_b8;
                        arg_20 = &arg_b8;
                        bool cond_2_1;

                        do
                        {
                            int32_t valA7 = *(ctxB1 + 0xc);

                            if (tmpD5 != valA7)
                            {
                                tmpD5 = valA7;
                                void* valA10 = *(a1 + 0x70) + valA7 * 0x84;
                                memcpy(&arg_60, valA10 + 0x24, 0x28);
                                srcS = a1;
                                a3 = *(valA10 + 0x18);
                                a4 = *(valA10 + 0x1c);
                                objC3 = arg_5c;
                                arg_38 = *(valA10 + 0x20);
                            }

                            long double x87_r7_2 = a6 * *(ctxB1 + 8);
                            long double x87_r6_2 = a5 * *(ctxB1 + 4);
                            ctxB1 += 0x10;
                            __return_addr_2 = x87_r7_2 + x87_r6_2 + arg_60 * *(ctxB1 - 0x10);
                            __return_addr = __return_addr_2;
                            arg_58 = a12 * *(ctxB1 - 8) + a11 * *(ctxB1 - 0xc)
                                + a10 * *(ctxB1 - 0x10);
                            long double x87_r7_16 = a4 + a9 * *(ctxB1 - 8)
                                + a8 * *(ctxB1 - 0xc) + a7 * *(ctxB1 - 0x10);
                            *v_4 = a3 + __return_addr_2;
                            a1 = x87_r7_16;
                            long double x87_r7_18 = arg_38 + arg_58;
                            v_4[1] = a1;
                            v_4[2] = x87_r7_18;
                            *arg_20 = tmpD5;
                            arg_20 = &arg_20[1];
                            cond_2_1 = v_8_1 != 1;
                            v_4 = &v_4[3];
                            v_8_1 -= 1;
                        } while (cond_2_1);
                    }

                    double* tmpD6 = arg_48;
                    double* dstD7 = arg_18;
                    float __return_addr_1 = *tmpD6 - *(srcS + 0x20);
                    float arg_28 = tmpD6[1] - *(srcS + 0x28);
                    float arg_2c = tmpD6[2] - *(srcS + 0x30);
                    long double x87_r7_26 = *dstD7 - *(srcS + 0x20);
                    a1 = dstD7[1] - *(srcS + 0x28);
                    a2 = dstD7[2] - *(srcS + 0x30);
                    long double x87_r6_17 = __return_addr_1;
                    x87_r6_17 - x87_r7_26;
                    long double x87_r6_18;

                    x87_r6_18 = !(*(&((x87_r6_17 < x87_r7_26 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_17, x87_r7_26) ? 1 : 0) << 0xa
                        | (x87_r6_17 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? x87_r7_26
                        : __return_addr_1;

                    double arg_90 = x87_r6_18 - 0.100000001f;
                    long double x87_r6_20 = arg_28;
                    long double f1_1 = a1;
                    x87_r6_20 - f1_1;
                    long double x87_r6_21;

                    x87_r6_21 = !(*(&((x87_r6_20 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_20, f1_1) ? 1 : 0) << 0xa
                        | (x87_r6_20 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? a1 : arg_28;

                    double arg_98 = x87_r6_21 - 0.100000001f;
                    long double x87_r6_23 = arg_2c;
                    long double f3_1 = a2;
                    x87_r6_23 - f3_1;
                    long double x87_r6_24;

                    x87_r6_24 = !(*(&((x87_r6_23 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_23, f3_1) ? 1 : 0) << 0xa
                        | (x87_r6_23 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? a2 : arg_2c;

                    double arg_a0 = x87_r6_24 - 0.100000001f;
                    long double x87_r6_26 = __return_addr_1;
                    x87_r6_26 - x87_r7_26;

                    if (!(*(&((x87_r6_26 < x87_r7_26 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_26, x87_r7_26) ? 1 : 0) << 0xa
                            | (x87_r6_26 == x87_r7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        x87_r7_26 = __return_addr_1;

                    arg_60 = x87_r7_26 + 0.100000001f;
                    long double x87_r7_29 = arg_28;
                    long double f4_1 = a1;
                    x87_r7_29 - f4_1;
                    long double x87_r7_30;

                    x87_r7_30 = *(&((x87_r7_29 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_29, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_29 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? a1 : arg_28;

                    a6 = x87_r7_30 + 0.100000001f;
                    long double x87_r7_32 = arg_2c;
                    long double f5_1 = a2;
                    x87_r7_32 - f5_1;
                    long double x87_r7_33;

                    x87_r7_33 = *(&((x87_r7_32 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_32, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? a2 : arg_2c;

                    __return_addr = __return_addr_1;
                    valA1 = arg_2c;
                    a8 = x87_r7_33 + 0.100000001f;
                    float arg_3c = *dstD7 - *tmpD6;
                    float arg_40 = dstD7[1] - tmpD6[1];
                    float arg_44 = dstD7[2] - tmpD6[2];
                    float tmpD7 = *(srcS + 0xa0);
                    __return_addr = -(__return_addr_1);
                    a1 = -(arg_28);
                    long double x87_r7_46 = -(valA1);
                    a2 = x87_r7_46;
                    long double x87_r6_27 = a1;
                    long double x87_r5_1 = __return_addr;
                    arg_18 = arg_44;
                    arg_48 = arg_40;
                    double arg_88 = arg_3c;
                    v_4 = a2 * arg_44 + a1 * arg_40 + __return_addr * arg_3c;
                    long double x87_r7_50 = x87_r5_1 * x87_r5_1 + x87_r6_27 * x87_r6_27
                        + x87_r7_46 * x87_r7_46 - 1f
                        / (arg_88 * arg_88 + arg_48 * arg_48 + arg_18 * arg_18) * v_4 * v_4;
                    long double x87_r6_38 = tmpD7 * tmpD7;
                    x87_r6_38 - x87_r7_50;
                    valA1 = (x87_r6_38 < x87_r7_50 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_38, x87_r7_50) ? 1 : 0) << 0xa
                        | (x87_r6_38 == x87_r7_50 ? 1 : 0) << 0xe;

                    if (!(*(&valA1 + 1) & 1))
                    {
                        long double x87_r7_51 = tmpD7;
                        long double f6_1 = arg_90;
                        x87_r7_51 - f6_1;
                        valA1 = (x87_r7_51 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_51, f6_1) ? 1 : 0) << 0xa
                            | (x87_r7_51 == f6_1 ? 1 : 0) << 0xe;

                        if (!(*(&valA1 + 1) & 1))
                        {
                            long double x87_r7_52 = tmpD7;
                            long double f7_1 = arg_98;
                            x87_r7_52 - f7_1;
                            valA1 = (x87_r7_52 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_52, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_52 == f7_1 ? 1 : 0) << 0xe;

                            if (!(*(&valA1 + 1) & 1))
                            {
                                long double x87_r7_53 = tmpD7;
                                long double f8_1 = arg_a0;
                                x87_r7_53 - f8_1;
                                valA1 = (x87_r7_53 < f8_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_53, f8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_53 == f8_1 ? 1 : 0) << 0xe;

                                if (!(*(&valA1 + 1) & 1))
                                {
                                    long double x87_r7_55 = -(tmpD7);
                                    v_4 = x87_r7_55;
                                    long double f9_1 = arg_60;
                                    x87_r7_55 - f9_1;
                                    valA1 = (x87_r7_55 < f9_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_55, f9_1) ? 1 : 0) << 0xa
                                        | (x87_r7_55 == f9_1 ? 1 : 0) << 0xe;

                                    if (*(&valA1 + 1) & 0x41)
                                    {
                                        long double x87_r7_56 = v_4;
                                        long double f10_1 = a6;
                                        x87_r7_56 - f10_1;
                                        valA1 = (x87_r7_56 < f10_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_56, f10_1) ? 1 : 0) << 0xa
                                            | (x87_r7_56 == f10_1 ? 1 : 0) << 0xe;

                                        if (*(&valA1 + 1) & 0x41)
                                        {
                                            long double x87_r7_57 = v_4;
                                            long double f11_1 = a8;
                                            x87_r7_57 - f11_1;
                                            valA1 = (x87_r7_57 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_57, f11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_57 == f11_1 ? 1 : 0) << 0xe;

                                            if (*(&valA1 + 1) & 0x41)
                                            {
                                                long double x87_r7_58 = arg_40;
                                                long double f12_1 = 0f;
                                                x87_r7_58 - f12_1;

                                                arg_48 = !(*(&((x87_r7_58 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_58, f12_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_58 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_40 : -(arg_40);

                                                long double x87_r7_61 = arg_3c;
                                                long double f13_1 = 0f;
                                                x87_r7_61 - f13_1;

                                                arg_48 = !(*(&((x87_r7_61 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_61, f13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_61 == f13_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                    ? arg_3c : -(arg_3c);

                                                valA1 = *objC3;
                                                int16_t* srcS2 = objC3[4];
                                                arg_48 = 0f;

                                                if (valA1 > 0)
                                                {
                                                    float dstD8 = a2;

                                                    while (true)
                                                    {
                                                        int32_t valA24 = 0;
                                                        valA24 = *srcS2;
                                                        int32_t objC11 = valA24 * 3;
                                                        int32_t valA25 = 0;
                                                        valA25 = srcS2[1];
                                                        long double x87_r7_64 =
                                                            *(&arg_40b8 + (objC11 << 2));
                                                        long double f14_1 = arg_90;
                                                        x87_r7_64 - f14_1;
                                                        int32_t valA26 = 0;
                                                        valA26 = srcS2[2];
                                                        int32_t saved_dst;

                                                        if (!(*(&(
                                                            (x87_r7_64 < f14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_64, f14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_64 == f14_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                        label_4d8e28:
                                                            long double x87_r7_67 =
                                                                (&saved_dst)[objC11 + 0x1034];
                                                            long double f15_1 = arg_98;
                                                            x87_r7_67 - f15_1;

                                                            if (!(*(&(
                                                                (x87_r7_67 < f15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_67, f15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_67 == f15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
                                                            label_4d8e5f:
                                                                long double x87_r7_70 =
                                                                    (&saved_dst)[objC11 + 0x1035];
                                                                long double f17_1 = arg_a0;
                                                                x87_r7_70 - f17_1;

                                                                if (!(*(&(
                                                                    (x87_r7_70 < f17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_70, f17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_70 == f17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
                                                                label_4d8e96:
                                                                    long double x87_r7_73 =
                                                                        (&saved_dst)[objC11 + 0x1033];
                                                                    long double f20_1 = arg_60;
                                                                    x87_r7_73 - f20_1;

                                                                    if (*(&(
                                                                        (x87_r7_73 < f20_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_73, f20_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_73 == f20_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    {
                                                                    label_4d8ec1:
                                                                        long double x87_r7_76 =
                                                                            (&saved_dst)[objC11 + 0x1034];
                                                                        long double f23_1 = a6;
                                                                        x87_r7_76 - f23_1;

                                                                        if (*(&(
                                                                            (x87_r7_76 < f23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_76, f23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_76 == f23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4d8eef:
                                                                            long double x87_r7_79 =
                                                                                (&saved_dst)[objC11 + 0x1035];
                                                                            long double f26_1 = a8;
                                                                            x87_r7_79 - f26_1;

                                                                            if (*(&(
                                                                                (x87_r7_79 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_79, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_79 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4d8f2a:
                                                                                float arg_c =
                                                                                    (&saved_dst)[valA26 * 3 + 0x1033]
                                                                                    - (&saved_dst)[objC11 + 0x1033];
                                                                                float arg_10 =
                                                                                    (&saved_dst)[valA26 * 3 + 0x1034]
                                                                                    - (&saved_dst)[objC11 + 0x1034];
                                                                                float arg_14 =
                                                                                    (&saved_dst)[valA26 * 3 + 0x1035]
                                                                                    - (&saved_dst)[objC11 + 0x1035];
                                                                                __return_addr =
                                                                                    (&saved_dst)[valA25 * 3 + 0x1033]
                                                                                    - (&saved_dst)[objC11 + 0x1033];
                                                                                a1 =
                                                                                    (&saved_dst)[valA25 * 3 + 0x1034]
                                                                                    - (&saved_dst)[objC11 + 0x1034];
                                                                                long double x87_r7_93 =
                                                                                    (&saved_dst)[valA25 * 3 + 0x1035]
                                                                                    - (&saved_dst)[objC11 + 0x1035];
                                                                                a2 = x87_r7_93;
                                                                                v_4 =
                                                                                    x87_r7_93 * arg_10 - a1 * arg_14;
                                                                                a3 = v_4;
                                                                                long double x87_r7_98 =
                                                                                    a2 * arg_c - __return_addr * arg_14;
                                                                                a4 = -(x87_r7_98);
                                                                                arg_18 =
                                                                                    a1 * arg_c - __return_addr * arg_10;
                                                                                arg_38 = arg_18;
                                                                                long double x87_r7_106 = arg_38 * arg_44
                                                                                    + a4 * arg_40 + a3 * arg_3c;
                                                                                long double f29_1 = 0.0;
                                                                                x87_r7_106 - f29_1;
                                                                                arg_88 = x87_r7_106;
                                                                                bool c1_1 = /* bool c1_1 =
                                                                                    unknown  {fst dword [esp+0x9c], fp0} */;

                                                                                if (!(*(&(
                                                                                    (x87_r7_106 < f29_1 ? 1 : 0) << 8
                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                    FCMP_UO(x87_r7_106, f29_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_106 == f29_1 ? 1 : 0)
                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                {
                                                                                    long double x87_r7_108 = ((
                                                                                        (&saved_dst)[objC11 + 0x1034]
                                                                                        - arg_28) * a4 + (
                                                                                        (&saved_dst)[objC11 + 0x1033]
                                                                                        - __return_addr_1) * a3 + (
                                                                                        (&saved_dst)[objC11 + 0x1035]
                                                                                        - arg_2c) * arg_38) / x87_r7_106;
                                                                                    float v_8_3 = x87_r7_108;
                                                                                    long double f32_1 = 0f;
                                                                                    x87_r7_108 - f32_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_108 < f32_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_108, f32_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_108 == f32_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                        long double x87_r7_109 = v_8_3;
                                                                                        long double f34_1 = 1f;
                                                                                        x87_r7_109 - f34_1;

                                                                                        if (*(&(
                                                                                            (x87_r7_109 < f34_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_109, f34_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_109 == f34_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x41)
                                                                                        {
                                                                                            __return_addr_2 =
                                                                                                v_8_3 * arg_3c + __return_addr_1;
                                                                                            float arg_54 =
                                                                                                v_8_3 * arg_40 + arg_28;
                                                                                            arg_58 = v_8_3 * arg_44 + arg_2c;
                                                                                            long double x87_r7_119 = a3;
                                                                                            long double f35_1 = 0f;
                                                                                            x87_r7_119 - f35_1;
                                                                                            float arg_ac;

                                                                                            arg_ac = !(*(&(
                                                                                                (x87_r7_119 < f35_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_119, f35_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_119 == f35_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1) ? a3 : -(a3);

                                                                                            long double x87_r7_122 = a4;
                                                                                            long double f36_1 = 0f;
                                                                                            x87_r7_122 - f36_1;
                                                                                            long double x87_r7_123 = a4;

                                                                                            if (*(&(
                                                                                                    (x87_r7_122 < f36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_122, f36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_122 == f36_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                x87_r7_123 = -(x87_r7_123);

                                                                                            long double x87_r6_55 = arg_38;
                                                                                            long double f37_1 = 0f;
                                                                                            x87_r6_55 - f37_1;
                                                                                            long double x87_r6_56 = arg_38;

                                                                                            if (*(&(
                                                                                                    (x87_r6_55 < f37_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r6_55, f37_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_55 == f37_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                x87_r6_56 = -(x87_r6_56);

                                                                                            long double x87_r5_15 = arg_ac;
                                                                                            x87_r5_15 - x87_r7_123;
                                                                                            long double x87_r5_16;

                                                                                            if (!(*(&(
                                                                                                (x87_r5_15 < x87_r7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(x87_r5_15, x87_r7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (x87_r5_15 == x87_r7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                            {
                                                                                                x87_r5_16 = arg_ac;
                                                                                                x87_r5_16 - x87_r6_56;
                                                                                            }

                                                                                            float v_8_4;

                                                                                            if (*(&(
                                                                                                (x87_r5_15 < x87_r7_123 ? 1 : 0) << 8
                                                                                                | (FCMP_UO(x87_r5_15, x87_r7_123) ? 1
                                                                                                : 0) << 0xa
                                                                                                | (x87_r5_15 == x87_r7_123 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                (x87_r5_16 < x87_r6_56 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r5_16, x87_r6_56) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r5_16 == x87_r6_56 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                            {
                                                                                                x87_r7_123 - x87_r6_56;

                                                                                                if (*(&(
                                                                                                    (x87_r7_123 < x87_r6_56 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r7_123, x87_r6_56) ? 1
                                                                                                    : 0) << 0xa
                                                                                                    | (x87_r7_123 == x87_r6_56 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                {
                                                                                                    x87_r7_106 = arg_18;
                                                                                                    long double f38_1 = 0.0;
                                                                                                    x87_r7_106 - f38_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_106 < f38_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_106, f38_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_106 == f38_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        v_4 = arg_54
                                                                                                            - (&saved_dst)[objC11 + 0x1034];
                                                                                                        arg_20 = __return_addr_2
                                                                                                            - (&saved_dst)[objC11 + 0x1033];
                                                                                                        arg_18 = (v_4 * arg_c
                                                                                                            - arg_20 * arg_10) / x87_r7_106;
                                                                                                        long double x87_r7_150 = arg_18;
                                                                                                        long double f41_1 = 0.0;
                                                                                                        x87_r7_150 - f41_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_150 < f41_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_150, f41_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_150 == f41_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double x87_r7_151 = arg_18;
                                                                                                            long double f44_1 = 1.0;
                                                                                                            x87_r7_151 - f44_1;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_151 < f44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_151, f44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_151 == f44_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double x87_r7_152 = arg_c;
                                                                                                                long double f47_1 = 0f;
                                                                                                                x87_r7_152 - f47_1;
                                                                                                                long double x87_r7_153 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_152 < f47_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_152, f47_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_152 == f47_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    x87_r7_153 = -(x87_r7_153);

                                                                                                                long double x87_r6_97 = arg_10;
                                                                                                                long double f50_1 = 0f;
                                                                                                                x87_r6_97 - f50_1;
                                                                                                                long double x87_r6_98 = arg_10;

                                                                                                                if (*(&(
                                                                                                                        (x87_r6_97 < f50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_97, f50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_97 == f50_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    x87_r6_98 = -(x87_r6_98);

                                                                                                                x87_r7_153 - x87_r6_98;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_153 < x87_r6_98 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(x87_r7_153, x87_r6_98) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (x87_r7_153 == x87_r6_98 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double x87_r7_158 = arg_10;
                                                                                                                    long double f53_1 = 0f;
                                                                                                                    x87_r7_158 - f53_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_158 < f53_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_158, f53_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_158 == f53_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        x87_r7_106 =
                                                                                                                            (v_4 - a1 * arg_18) / arg_10;
                                                                                                                        goto label_4d93ca;
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    x87_r7_106 = (arg_20
                                                                                                                        - __return_addr * arg_18) / arg_c;
                                                                                                                label_4d93ca:
                                                                                                                    long double f55_1 = 0.0;
                                                                                                                    x87_r7_106 - f55_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_106 < f55_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_106, f55_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_106 == f55_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                    {
                                                                                                                        long double x87_r6_105 =
                                                                                                                            x87_r7_106 + arg_18;
                                                                                                                        long double f57_1 = 1.0;
                                                                                                                        x87_r6_105 - f57_1;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_105 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_105, f57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_105 == f57_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            goto label_4d93fd;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    x87_r7_106 = x87_r7_98;
                                                                                                    long double f39_1 = 0.0;
                                                                                                    x87_r7_106 - f39_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_106 < f39_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_106, f39_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_106 == f39_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                    {
                                                                                                        v_8_4 = arg_58
                                                                                                            - (&saved_dst)[objC11 + 0x1035];
                                                                                                        arg_20 = __return_addr_2
                                                                                                            - (&saved_dst)[objC11 + 0x1033];
                                                                                                        arg_18 = (v_8_4 * arg_c
                                                                                                            - arg_20 * arg_14) / x87_r7_106;
                                                                                                        long double x87_r7_141 = arg_18;
                                                                                                        long double f42_1 = 0.0;
                                                                                                        x87_r7_141 - f42_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_141 < f42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_141, f42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_141 == f42_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 1))
                                                                                                        {
                                                                                                            long double x87_r7_142 = arg_18;
                                                                                                            long double f45_1 = 1.0;
                                                                                                            x87_r7_142 - f45_1;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_142 < f45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_142, f45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_142 == f45_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                            {
                                                                                                                long double x87_r7_143 = arg_c;
                                                                                                                long double f48_1 = 0f;
                                                                                                                x87_r7_143 - f48_1;
                                                                                                                long double x87_r7_144 = arg_c;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_143 < f48_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_143, f48_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_143 == f48_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                    x87_r7_144 = -(x87_r7_144);

                                                                                                                long double x87_r6_84 = arg_14;
                                                                                                                long double f51_1 = 0f;
                                                                                                                x87_r6_84 - f51_1;
                                                                                                                long double x87_r6_85 = arg_14;

                                                                                                                if (*(&(
                                                                                                                        (x87_r6_84 < f51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_84, f51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_84 == f51_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                    x87_r6_85 = -(x87_r6_85);

                                                                                                                x87_r7_144 - x87_r6_85;

                                                                                                                if (*(&(
                                                                                                                        (x87_r7_144 < x87_r6_85 ? 1 : 0) << 8
                                                                                                                        | (FCMP_UO(x87_r7_144, x87_r6_85) ? 1
                                                                                                                        : 0) << 0xa
                                                                                                                        | (x87_r7_144 == x87_r6_85 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    goto label_4d91ab;

                                                                                                                x87_r7_106 = (arg_20
                                                                                                                    - __return_addr * arg_18) / arg_c;
                                                                                                                goto label_4d91ce;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                x87_r7_106 = v_4;
                                                                                                long double f40_1 = 0.0;
                                                                                                x87_r7_106 - f40_1;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_106 < f40_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_106, f40_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_106 == f40_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    v_8_4 = arg_58
                                                                                                        - (&saved_dst)[objC11 + 0x1035];
                                                                                                    v_4 = arg_54
                                                                                                        - (&saved_dst)[objC11 + 0x1034];
                                                                                                    arg_18 = (v_8_4 * arg_10
                                                                                                        - v_4 * arg_14) / x87_r7_106;
                                                                                                    long double x87_r7_126 = arg_18;
                                                                                                    long double f43_1 = 0.0;
                                                                                                    x87_r7_126 - f43_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_126 < f43_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_126, f43_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_126 == f43_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double x87_r7_127 = arg_18;
                                                                                                        long double f46_1 = 1.0;
                                                                                                        x87_r7_127 - f46_1;

                                                                                                        if (*(&(
                                                                                                            (x87_r7_127 < f46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_127, f46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_127 == f46_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            long double x87_r7_128 = arg_10;
                                                                                                            long double f49_1 = 0f;
                                                                                                            x87_r7_128 - f49_1;
                                                                                                            long double x87_r7_129 = arg_10;

                                                                                                            if (*(&(
                                                                                                                    (x87_r7_128 < f49_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_128, f49_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_128 == f49_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                x87_r7_129 = -(x87_r7_129);

                                                                                                            long double x87_r6_66 = arg_14;
                                                                                                            long double f52_1 = 0f;
                                                                                                            x87_r6_66 - f52_1;
                                                                                                            long double x87_r6_67 = arg_14;

                                                                                                            if (*(&(
                                                                                                                    (x87_r6_66 < f52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r6_66, f52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r6_66 == f52_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                x87_r6_67 = -(x87_r6_67);

                                                                                                            x87_r7_129 - x87_r6_67;

                                                                                                            if (*(&(
                                                                                                                (x87_r7_129 < x87_r6_67 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r7_129, x87_r6_67) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r7_129 == x87_r6_67 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                            {
                                                                                                            label_4d91ab:
                                                                                                                long double x87_r7_134 = arg_14;
                                                                                                                long double f54_1 = 0f;
                                                                                                                x87_r7_134 - f54_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_134 < f54_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_134, f54_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_134 == f54_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x40))
                                                                                                                {
                                                                                                                    x87_r7_106 =
                                                                                                                        (v_8_4 - a2 * arg_18) / arg_14;
                                                                                                                    goto label_4d91ce;
                                                                                                                }
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                x87_r7_106 =
                                                                                                                    (v_4 - a1 * arg_18) / arg_10;
                                                                                                            label_4d91ce:
                                                                                                                long double f56_1 = 0.0;
                                                                                                                x87_r7_106 - f56_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_106 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_106, f56_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_106 == f56_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r6_74 =
                                                                                                                        x87_r7_106 + arg_18;
                                                                                                                    long double f58_1 = 1.0;
                                                                                                                    x87_r6_74 - f58_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r6_74 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r6_74, f58_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r6_74 == f58_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    {
                                                                                                                    label_4d93fd:
                                                                                                                        float* v_18_2 =
                                                                                                                            &(&saved_dst)[objC11 + 0x1033];
                                                                                                                        float v_18_3 = arg_18;
                                                                                                                        float* v_1c_2 =
                                                                                                                            &(&saved_dst)[objC11 + 0x1033];
                                                                                                                        float v_1c_3 = x87_r7_106;
                                                                                                                        int16_t* v_20_1 = srcS2;
                                                                                                                        void* v_24_1 = valA2;
                                                                                                                        int32_t valA34 = Sys_PopStack_28();
                                                                                                                        *(dstD8 + 0x14) = 1;
                                                                                                                        valA34 = srcS2[3];
                                                                                                                        valA1 = nullptr;
                                                                                                                        valA1 = arg_5c[6 + 2][valA34 * 3];

                                                                                                                        if (valA1 == 0xffff)
                                                                                                                            break;

                                                                                                                        long double x87_r7_161 = arg_88;
                                                                                                                        long double f59_1 = 0f;
                                                                                                                        x87_r7_161 - f59_1;
                                                                                                                        float* objC16 = *(*(dstD8 + 0x10)
                                                                                                                            + (valA1 << 2) + 0xd3c);
                                                                                                                        valA1 =
                                                                                                                            (x87_r7_161 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_161, f59_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_161 == f59_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&valA1 + 1) & 1)
                                                                                                                            *(dstD8 + 0x18) =
                                                                                                                                *objC16 * *(dstD8 + 0x18);

                                                                                                                        long double x87_r7_164 = *objC16;
                                                                                                                        long double f60_1 = 0f;
                                                                                                                        x87_r7_164 - f60_1;
                                                                                                                        valA1 =
                                                                                                                            (x87_r7_164 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_164, f60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_164 == f60_1 ? 1 : 0)
                                                                                                                            << 0xe;

                                                                                                                        if (*(&valA1 + 1) & 0x40)
                                                                                                                            break;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                long double x87_r7_80 =
                                                                                    (&saved_dst)[valA25 * 3 + 0x1035];
                                                                                long double f30_1 = a8;
                                                                                x87_r7_80 - f30_1;

                                                                                if (*(&(
                                                                                        (x87_r7_80 < f30_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_80, f30_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_80 == f30_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;

                                                                                long double x87_r7_81 =
                                                                                    (&saved_dst)[valA26 * 3 + 0x1035];
                                                                                long double f33_1 = a8;
                                                                                x87_r7_81 - f33_1;

                                                                                if (*(&(
                                                                                        (x87_r7_81 < f33_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_81, f33_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_81 == f33_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    goto label_4d8f2a;
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            long double x87_r7_77 =
                                                                                (&saved_dst)[valA25 * 3 + 0x1034];
                                                                            long double f27_1 = a6;
                                                                            x87_r7_77 - f27_1;

                                                                            if (*(&(
                                                                                    (x87_r7_77 < f27_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_77, f27_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_77 == f27_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;

                                                                            long double x87_r7_78 =
                                                                                (&saved_dst)[valA26 * 3 + 0x1034];
                                                                            long double f31_1 = a6;
                                                                            x87_r7_78 - f31_1;

                                                                            if (*(&(
                                                                                    (x87_r7_78 < f31_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_78, f31_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_78 == f31_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                goto label_4d8eef;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        long double x87_r7_74 =
                                                                            (&saved_dst)[valA25 * 3 + 0x1033];
                                                                        long double f24_1 = arg_60;
                                                                        x87_r7_74 - f24_1;

                                                                        if (*(&(
                                                                                (x87_r7_74 < f24_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_74, f24_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_74 == f24_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;

                                                                        long double x87_r7_75 =
                                                                            (&saved_dst)[valA26 * 3 + 0x1033];
                                                                        long double f28_1 = arg_60;
                                                                        x87_r7_75 - f28_1;

                                                                        if (*(&(
                                                                                (x87_r7_75 < f28_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_75, f28_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_75 == f28_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_4d8ec1;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    long double x87_r7_71 =
                                                                        (&saved_dst)[valA25 * 3 + 0x1035];
                                                                    long double f21_1 = arg_a0;
                                                                    x87_r7_71 - f21_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_71 < f21_1 ? 1 : 0) << 8 | (
