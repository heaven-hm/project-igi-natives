#include "004D7620-BoneDynCubeObj_Setup.h"
/* 0x004d7620 BoneDynCubeObj_Setup full linked: callers=0 callees=3 */
int32_t* sub_4d7620(float a1, int32_t* a2, float a3 @ 0x6c, float a4, float a5, double a6 @ 0xa0, int16_t* a7 @ 0xc0, float a8 @ 0xe4, float a9, float a10, float a11, float a12, float a13, float a14, float a15)

{
    int32_t ebp;
    int32_t var_4_1 = ebp;
    sub_4a54a0(0x10150);
    int32_t* ecx = a2;
    float esi = a1;
    void** ebx = ecx[8];
    double* arg_ac = *ecx;
    void arg_4148;
    int32_t* var_4 = &arg_4148;
    int32_t* result = *(esi + 0x74);
    double* arg_9c = ecx[1];

    if (result)
    {
        void* eax_1 = *result;
        void* edx_2 = *(*(eax_1 + 0xc) + 0xc);
        result = *(edx_2 + 0x28);

        if (!result)
        {
            int32_t edi_1 = *(edx_2 + 0x2c);
            int32_t eax_3 = ecx[5] << 5;
            result = eax_3 + edi_1;
            int32_t* result_1 = result;

            if (eax_3 != -(edi_1) && *result)
            {
                void* edi_2 = result[5];
                float arg_40 = result[1];
                char eax_5 = ecx[3];
                float arg_30 = edi_2;

                if (eax_5 == 0xff)
                    goto label_4d76f3;

                int32_t eax_7 = 0;
                eax_7 = *(esi + 0x1c);
                int32_t eax_8 = *(((eax_5 * 0x180 + eax_7) << 2) + &g_a96ae0);

                if (!eax_8)
                    goto label_4d76f3;

                eax_8(esi, ecx[4]);
                result = a2;

                if (*result[4])
                {
                    ecx = a2;
                label_4d76f3:
                    float edx_7 = nanf;
                    float arg_48;
                    float arg_54;
                    float arg_5c;
                    float arg_e0;
                    int32_t arg_148[0x1000];

                    if (arg_40 > 0)
                    {
                        int32_t (* arg_3c)[0x1000] = &arg_148;
                        bool cond:3_1;

                        do
                        {
                            float eax_10 = *(edi_2 + 0xc);

                            if (edx_7 != eax_10)
                            {
                                edx_7 = eax_10;
                                void* eax_13 = *(a1 + 0x70) + eax_10 * 0x84;
                                memcpy(&arg_e0, eax_13 + 0x24, 0x28);
                                esi = a1;
                                edi_2 = arg_30;
                                a3 = *(eax_13 + 0x18);
                                a4 = *(eax_13 + 0x1c);
                                a5 = *(eax_13 + 0x20);
                            }

                            long double x87_r7_2 = a9 * *(edi_2 + 8);
                            long double x87_r6_2 = a8 * *(edi_2 + 4);
                            edi_2 += 0x10;
                            arg_30 = edi_2;
                            arg_54 = x87_r7_2 + x87_r6_2 + arg_e0 * *(edi_2 - 0x10);
                            arg_48 = arg_54;
                            arg_5c = a15 * *(edi_2 - 8) + a14 * *(edi_2 - 0xc)
                                + a13 * *(edi_2 - 0x10);
                            long double x87_r7_16 = a4 + a12 * *(edi_2 - 8)
                                + a11 * *(edi_2 - 0xc) + a10 * *(edi_2 - 0x10);
                            *var_4 = a3 + arg_54;
                            var_4[1] = x87_r7_16;
                            var_4[2] = a5 + arg_5c;
                            *arg_3c = edx_7;
                            arg_3c = &(*arg_3c)[1];
                            cond:3_1 = arg_40 != 1;
                            var_4 = &var_4[3];
                            arg_40 -= 1;
                        } while (cond:3_1);
                        ecx = a2;
                    }

                    result = ecx[2];
                    int32_t* result_2 = nullptr;

                    if (result > 0)
                    {
                        do
                        {
                            if (!ebx[0x16])
                                edx_7 = 0;
                            else
                                edx_7 = ebx[0x13];

                            int16_t eax_23;
                            eax_23 = ebx[0x16];
                            char var_5_1 = edx_7;
                            float arg_c = *arg_ac - *(esi + 0x20);
                            float arg_10 = arg_ac[1] - *(esi + 0x28);
                            float arg_14 = arg_ac[2] - *(esi + 0x30);
                            float arg_78 = *arg_9c - *(esi + 0x20);
                            float arg_7c = arg_9c[1] - *(esi + 0x28);
                            float arg_80 = arg_9c[2] - *(esi + 0x30);
                            long double x87_r7_31 = arg_c;
                            long double temp3_1 = arg_78;
                            x87_r7_31 - temp3_1;
                            *(&a2 + 3) = eax_23;
                            char arg_26 = 0;
                            long double x87_r7_32;

                            x87_r7_32 = !(*(&((x87_r7_31 < temp3_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_31, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_31 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_78 : arg_c;

                            double arg_c8 = x87_r7_32 - 0.100000001f;
                            long double x87_r7_34 = arg_10;
                            long double temp4_1 = arg_7c;
                            x87_r7_34 - temp4_1;
                            long double x87_r7_35;

                            x87_r7_35 = !(*(&((x87_r7_34 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_34, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_34 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_7c : arg_10;

                            double arg_d0 = x87_r7_35 - 0.100000001f;
                            long double x87_r7_37 = arg_14;
                            long double temp5_1 = arg_80;
                            x87_r7_37 - temp5_1;
                            long double x87_r7_38;

                            x87_r7_38 = !(*(&((x87_r7_37 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_37, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_37 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_80 : arg_14;

                            double arg_d8 = x87_r7_38 - 0.100000001f;
                            long double x87_r7_40 = arg_c;
                            long double temp6_1 = arg_78;
                            x87_r7_40 - temp6_1;
                            long double x87_r7_41;

                            x87_r7_41 = *(&((x87_r7_40 < temp6_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_40, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_40 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_78 : arg_c;

                            arg_e0 = x87_r7_41 + 0.100000001f;
                            long double x87_r7_43 = arg_10;
                            long double temp7_1 = arg_7c;
                            x87_r7_43 - temp7_1;
                            long double x87_r7_44;

                            x87_r7_44 = *(&((x87_r7_43 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_43, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_43 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_7c : arg_10;

                            a9 = x87_r7_44 + 0.100000001f;
                            long double x87_r7_46 = arg_14;
                            long double temp8_1 = arg_80;
                            x87_r7_46 - temp8_1;
                            eax_23 = (x87_r7_46 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_46, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_46 == temp8_1 ? 1 : 0) << 0xe;
                            long double x87_r7_47;

                            x87_r7_47 = *(&eax_23 + 1) & 0x41 ? arg_80 : arg_14;

                            float arg_130 = arg_c;
                            a11 = x87_r7_47 + 0.100000001f;
                            float arg_84 = *arg_9c - *arg_ac;
                            float arg_88 = arg_9c[1] - arg_ac[1];
                            float arg_8c = arg_9c[2] - arg_ac[2];
                            int32_t (* ecx_16)[0x1000] = *(esi + 0xa0);
                            long double x87_r7_56 = -(arg_c);
                            long double x87_r6_14 = -(arg_10);
                            long double x87_r5_2 = -(arg_14);
                            double arg_b8 = x87_r5_2;
                            double arg_28 = x87_r6_14;
                            double arg_b0 = x87_r7_56;
                            arg_30 = arg_8c;
                            arg_40 = arg_88;
                            double arg_90 = arg_84;
                            var_4 = x87_r5_2 * arg_8c + x87_r6_14 * arg_88 + x87_r7_56 * arg_84;
                            long double x87_r7_65 = arg_b0 * arg_b0 + arg_28 * arg_28
                                + arg_b8 * arg_b8 - 1f
                                / (arg_90 * arg_90 + arg_40 * arg_40 + arg_30 * arg_30) * var_4
                                * var_4;
                            long double x87_r6_32 = ecx_16 * ecx_16;
                            x87_r6_32 - x87_r7_65;

                            if (!(*(&((x87_r6_32 < x87_r7_65 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_32, x87_r7_65) ? 1 : 0) << 0xa
                                | (x87_r6_32 == x87_r7_65 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double x87_r7_66 = ecx_16;
                                long double temp9_1 = arg_c8;
                                x87_r7_66 - temp9_1;

                                if (!(*(&((x87_r7_66 < temp9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_66, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_66 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_67 = ecx_16;
                                    long double temp10_1 = arg_d0;
                                    x87_r7_67 - temp10_1;

                                    if (!(*(&((x87_r7_67 < temp10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_67, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_67 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        long double x87_r7_68 = ecx_16;
                                        long double temp11_1 = arg_d8;
                                        x87_r7_68 - temp11_1;

                                        if (!(*(&((x87_r7_68 < temp11_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_68, temp11_1) ? 1 : 0) << 0xa
                                            | (x87_r7_68 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_70 = -(ecx_16);
                                            var_4 = x87_r7_70;
                                            long double temp12_1 = arg_e0;
                                            x87_r7_70 - temp12_1;

                                            if (*(&((x87_r7_70 < temp12_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_70, temp12_1) ? 1 : 0) << 0xa
                                                | (x87_r7_70 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_71 = var_4;
                                                long double temp13_1 = a9;
                                                x87_r7_71 - temp13_1;

                                                if (*(&((x87_r7_71 < temp13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_71, temp13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_71 == temp13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double x87_r7_72 = var_4;
                                                    long double temp14_1 = a11;
                                                    x87_r7_72 - temp14_1;

                                                    if (*(&((x87_r7_72 < temp14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_72, temp14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_72 == temp14_1 ? 1 : 0) << 0xe) + 1)
                                                        & 0x41)
                                                    {
                                                        long double x87_r7_74 = arg_80 - arg_14;
                                                        float arg_58 = arg_7c;
                                                        int16_t eax_28;
                                                        eax_28 = *(&a2 + 3);
                                                        long double x87_r6_34 = arg_7c - arg_10;
                                                        arg_54 = arg_78;
                                                        long double x87_r5_13 = arg_78 - arg_c;
                                                        arg_5c = arg_80;
                                                        arg_b8 = sqrtl(x87_r5_13 * x87_r5_13
                                                            + x87_r6_34 * x87_r6_34
                                                            + x87_r7_74 * x87_r7_74);

                                                        if (eax_28)
                                                        {
                                                            arg_54 = *(ebx + 8) - *(esi + 0x20);
                                                            arg_58 = *(ebx + 0x10) - *(esi + 0x28);
                                                            long double x87_r7_81 =
                                                                *(ebx + 0x18) - *(esi + 0x30);
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
                                                        long double temp15_1 = 0f;
                                                        x87_r7_84 - temp15_1;

                                                        if (!(*(&(
                                                                (x87_r7_84 < temp15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_84, temp15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_84 == temp15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            arg_90 = arg_88;
                                                        else
                                                            arg_90 = -(arg_88);

                                                        long double x87_r7_87 = arg_84;
                                                        long double temp16_1 = 0f;
                                                        x87_r7_87 - temp16_1;
                                                        eax_28 = (x87_r7_87 < temp16_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_87, temp16_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_87 == temp16_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&eax_28 + 1) & 1))
                                                            arg_90 = arg_84;
                                                        else
                                                            arg_90 = -(arg_84);

                                                        arg_90 = 0;
                                                        int16_t* edi_4 = result_1[4];

                                                        if (*result_1 > 0)
                                                        {
                                                            int32_t __saved_edi;
                                                            bool cond:6_1;

                                                            do
                                                            {
                                                                int32_t eax_31 = 0;
                                                                eax_31 = *edi_4;
                                                                int32_t eax_33 = 0;
                                                                eax_33 = edi_4[1];
                                                                long double x87_r7_90 =
                                                                    (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                long double temp17_1 = arg_c8;
                                                                x87_r7_90 - temp17_1;
                                                                arg_30 =
                                                                    &(&__saved_edi)[eax_33 * 3 + 0x1057];
                                                                int32_t eax_36 = 0;
                                                                eax_36 = edi_4[2];

                                                                if (!(*(&(
                                                                    (x87_r7_90 < temp17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_90, temp17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_90 == temp17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
                                                                label_4d7d71:
                                                                    long double x87_r7_93 =
                                                                        (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                    long double temp18_1 = arg_d0;
                                                                    x87_r7_93 - temp18_1;

                                                                    if (!(*(&(
                                                                        (x87_r7_93 < temp18_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_93, temp18_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_93 == temp18_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
                                                                    label_4d7db0:
                                                                        long double x87_r7_96 =
                                                                            (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                        long double temp20_1 = arg_d8;
                                                                        x87_r7_96 - temp20_1;

                                                                        if (!(*(&(
                                                                            (x87_r7_96 < temp20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_96, temp20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_96 == temp20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
                                                                        label_4d7def:
                                                                            long double x87_r7_99 =
                                                                                (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                            long double temp23_1 = arg_e0;
                                                                            x87_r7_99 - temp23_1;

                                                                            if (*(&(
                                                                                (x87_r7_99 < temp23_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_99, temp23_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_99 == temp23_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4d7e2b:
                                                                                long double x87_r7_102 =
                                                                                    (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                                long double temp26_1 = a9;
                                                                                x87_r7_102 - temp26_1;

                                                                                if (*(&(
                                                                                    (x87_r7_102 < temp26_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_102, temp26_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_102 == temp26_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4d7e6a:
                                                                                    long double x87_r7_105 =
                                                                                        (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                                    long double temp29_1 = a11;
                                                                                    x87_r7_105 - temp29_1;

                                                                                    if (*(&(
                                                                                        (x87_r7_105 < temp29_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_105, temp29_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_105 == temp29_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
                                                                                    label_4d7eb1:
                                                                                        float arg_18 =
                                                                                            (&__saved_edi)[eax_36 * 3 + 0x1057]
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                        float arg_1c =
                                                                                            (&__saved_edi)[eax_36 * 3 + 0x1058]
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                                        float arg_20 =
                                                                                            (&__saved_edi)[eax_36 * 3 + 0x1059]
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                                        arg_48 = *arg_30
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                        float arg_4c = *(arg_30 + 4)
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                                        long double x87_r7_119 = *(arg_30 + 8)
                                                                                            - (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                                        float arg_50 = x87_r7_119;
                                                                                        var_4 =
                                                                                            x87_r7_119 * arg_1c - arg_4c * arg_20;
                                                                                        a3 = var_4;
                                                                                        long double x87_r7_124 =
                                                                                            arg_50 * arg_18 - arg_48 * arg_20;
                                                                                        arg_40 = x87_r7_124;
                                                                                        a4 = -(x87_r7_124);
                                                                                        a1 =
                                                                                            arg_4c * arg_18 - arg_48 * arg_1c;
                                                                                        long double x87_r7_132 = a1 * arg_8c
                                                                                            + a4 * arg_88 + a3 * arg_84;
                                                                                        arg_b0 = x87_r7_132;
                                                                                        long double temp32_1 = 0.0;
                                                                                        x87_r7_132 - temp32_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_132 < temp32_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_132, temp32_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_132 == temp32_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x40))
                                                                                        {
                                                                                            long double x87_r7_138 = ((
                                                                                                (&__saved_edi)[eax_31 * 3 + 0x1058]
                                                                                                - arg_10) * a4 + (
                                                                                                (&__saved_edi)[eax_31 * 3 + 0x1059]
                                                                                                - arg_14) * a1 + (
                                                                                                (&__saved_edi)[eax_31 * 3 + 0x1057]
                                                                                                - arg_c) * a3) / arg_b0;
                                                                                            arg_30 = x87_r7_138;
                                                                                            long double temp36_1 = 0f;
                                                                                            x87_r7_138 - temp36_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_138 < temp36_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_138, temp36_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_138 == temp36_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                                long double x87_r7_139 = arg_30;
                                                                                                long double temp38_1 = 1f;
                                                                                                x87_r7_139 - temp38_1;

                                                                                                if (*(&(
                                                                                                    (x87_r7_139 < temp38_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_139, temp38_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_139 == temp38_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                {
                                                                                                    float arg_60 = arg_30 * arg_84 + arg_c;
                                                                                                    float arg_64 = arg_30 * arg_88 + arg_10;
                                                                                                    float arg_68 = arg_30 * arg_8c + arg_14;
                                                                                                    long double x87_r7_149 = a3;
                                                                                                    long double temp41_1 = 0f;
                                                                                                    x87_r7_149 - temp41_1;
                                                                                                    float arg_13c;

                                                                                                    arg_13c = !(*(&(
                                                                                                        (x87_r7_149 < temp41_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_149, temp41_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_149 == temp41_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1) ? a3 : -(a3);

                                                                                                    long double x87_r7_152 = a4;
                                                                                                    long double temp42_1 = 0f;
                                                                                                    x87_r7_152 - temp42_1;
                                                                                                    long double x87_r7_153 = a4;

                                                                                                    if (*(&(
                                                                                                            (x87_r7_152 < temp42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_152, temp42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_152 == temp42_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                        x87_r7_153 = -(x87_r7_153);

                                                                                                    long double x87_r6_55 = a1;
                                                                                                    long double temp43_1 = 0f;
                                                                                                    x87_r6_55 - temp43_1;
                                                                                                    long double x87_r6_56 = a1;

                                                                                                    if (*(&(
                                                                                                            (x87_r6_55 < temp43_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r6_55, temp43_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r6_55 == temp43_1 ? 1 : 0)
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
                                                                                                            long double temp44_1 = 0.0;
                                                                                                            x87_r7_155 - temp44_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_155 < temp44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_155, temp44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_155 == temp44_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                var_4 = arg_64
                                                                                                                    - (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                                                arg_28 = (var_4 * arg_18
                                                                                                                    - arg_40 * arg_1c) / x87_r7_155;
                                                                                                                long double x87_r7_182 = arg_28;
                                                                                                                long double temp47_1 = 0.0;
                                                                                                                x87_r7_182 - temp47_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_182 < temp47_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_182, temp47_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_182 == temp47_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r7_183 = arg_28;
                                                                                                                    long double temp50_1 = 1.0;
                                                                                                                    x87_r7_183 - temp50_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r7_183 < temp50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_183, temp50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_183 == temp50_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double x87_r7_184 = arg_18;
                                                                                                                        long double temp53_1 = 0f;
                                                                                                                        x87_r7_184 - temp53_1;
                                                                                                                        long double x87_r7_185 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r7_184 < temp53_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_184, temp53_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_184 == temp53_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            x87_r7_185 = -(x87_r7_185);

                                                                                                                        long double x87_r6_97 = arg_1c;
                                                                                                                        long double temp56_1 = 0f;
                                                                                                                        x87_r6_97 - temp56_1;
                                                                                                                        long double x87_r6_98 = arg_1c;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_97 < temp56_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_97, temp56_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_97 == temp56_1 ? 1 : 0)
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
                                                                                                                            long double temp59_1 = 0f;
                                                                                                                            x87_r7_190 - temp59_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (x87_r7_190 < temp59_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_190, temp59_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_190 == temp59_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x40))
                                                                                                                            {
                                                                                                                                x87_r7_155 =
                                                                                                                                    (var_4 - arg_4c * arg_28) / arg_1c;
                                                                                                                                goto label_4d843d;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            x87_r7_155 =
                                                                                                                                (arg_40 - arg_48 * arg_28) / arg_18;
                                                                                                                        label_4d843d:
                                                                                                                            long double temp61_1 = 0.0;
                                                                                                                            x87_r7_155 - temp61_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (x87_r7_155 < temp61_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_155, temp61_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_155 == temp61_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1))
                                                                                                                            {
                                                                                                                                long double x87_r6_105 =
                                                                                                                                    x87_r7_155 + arg_28;
                                                                                                                                long double temp63_1 = 1.0;
                                                                                                                                x87_r6_105 - temp63_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r6_105 < temp63_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_105, temp63_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_105 == temp63_1 ? 1 : 0)
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
                                                                                                            long double temp45_1 = 0.0;
                                                                                                            x87_r7_155 - temp45_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_155 < temp45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_155, temp45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_155 == temp45_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                a1 = arg_68
                                                                                                                    - (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                                                arg_28 = (a1 * arg_18
                                                                                                                    - arg_40 * arg_20) / x87_r7_155;
                                                                                                                long double x87_r7_168 = arg_28;
                                                                                                                long double temp48_1 = 0.0;
                                                                                                                x87_r7_168 - temp48_1;

                                                                                                                if (!(*(&(
                                                                                                                    (x87_r7_168 < temp48_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_168, temp48_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_168 == temp48_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double x87_r7_169 = arg_28;
                                                                                                                    long double temp51_1 = 1.0;
                                                                                                                    x87_r7_169 - temp51_1;

                                                                                                                    if (*(&(
                                                                                                                        (x87_r7_169 < temp51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_169, temp51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_169 == temp51_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double x87_r7_170 = arg_18;
                                                                                                                        long double temp54_1 = 0f;
                                                                                                                        x87_r7_170 - temp54_1;
                                                                                                                        long double x87_r7_171 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r7_170 < temp54_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_170, temp54_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_170 == temp54_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            x87_r7_171 = -(x87_r7_171);

                                                                                                                        long double x87_r6_80 = arg_20;
                                                                                                                        long double temp57_1 = 0f;
                                                                                                                        x87_r6_80 - temp57_1;
                                                                                                                        long double x87_r6_81 = arg_20;

                                                                                                                        if (*(&(
                                                                                                                                (x87_r6_80 < temp57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_80, temp57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_80 == temp57_1 ? 1 : 0)
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
                                                                                                        x87_r7_155 = var_4;
                                                                                                        long double temp46_1 = 0.0;
                                                                                                        x87_r7_155 - temp46_1;

                                                                                                        if (!(*(&(
                                                                                                            (x87_r7_155 < temp46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_155, temp46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_155 == temp46_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 0x40))
                                                                                                        {
                                                                                                            a1 = arg_68
                                                                                                                - (&__saved_edi)[eax_31 * 3 + 0x1059];
                                                                                                            var_4 = arg_64
                                                                                                                - (&__saved_edi)[eax_31 * 3 + 0x1058];
                                                                                                            arg_28 = (a1 * arg_1c
                                                                                                                - var_4 * arg_20) / x87_r7_155;
                                                                                                            long double x87_r7_157 = arg_28;
                                                                                                            long double temp49_1 = 0.0;
                                                                                                            x87_r7_157 - temp49_1;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r7_157 < temp49_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_157, temp49_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_157 == temp49_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1))
                                                                                                            {
                                                                                                                long double x87_r7_158 = arg_28;
                                                                                                                long double temp52_1 = 1.0;
                                                                                                                x87_r7_158 - temp52_1;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_158 < temp52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_158, temp52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_158 == temp52_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double x87_r7_159 = arg_1c;
                                                                                                                    long double temp55_1 = 0f;
                                                                                                                    x87_r7_159 - temp55_1;
                                                                                                                    long double x87_r7_160 = arg_1c;

                                                                                                                    if (*(&(
                                                                                                                            (x87_r7_159 < temp55_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_159, temp55_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_159 == temp55_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                                        x87_r7_160 = -(x87_r7_160);

                                                                                                                    long double x87_r6_66 = arg_20;
                                                                                                                    long double temp58_1 = 0f;
                                                                                                                    x87_r6_66 - temp58_1;
                                                                                                                    long double x87_r6_67 = arg_20;

                                                                                                                    if (*(&(
                                                                                                                            (x87_r6_66 < temp58_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r6_66, temp58_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r6_66 == temp58_1 ? 1 : 0)
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
                                                                                                                    label_4d8250:
                                                                                                                        long double x87_r7_176 = arg_20;
                                                                                                                        long double temp60_1 = 0f;
                                                                                                                        x87_r7_176 - temp60_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_176 < temp60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_176, temp60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_176 == temp60_1 ? 1 : 0)
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
                                                                                                                            (var_4 - arg_4c * arg_28) / arg_1c;
                                                                                                                    label_4d8273:
                                                                                                                        long double temp62_1 = 0.0;
                                                                                                                        x87_r7_155 - temp62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_155 < temp62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_155, temp62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_155 == temp62_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r6_88 =
                                                                                                                                x87_r7_155 + arg_28;
                                                                                                                            long double temp64_1 = 1.0;
                                                                                                                            x87_r6_88 - temp64_1;

                                                                                                                            if (*(&(
                                                                                                                                (x87_r6_88 < temp64_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r6_88, temp64_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r6_88 == temp64_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            {
                                                                                                                            label_4d8469:
                                                                                                                                float* var_18_2 =
                                                                                                                                    &(&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                                                                float var_18_3 = arg_28;
                                                                                                                                float* var_1c_2 =
                                                                                                                                    &(&__saved_edi)[eax_31 * 3 + 0x1057];
                                                                                                                                float var_1c_3 = x87_r7_155;
                                                                                                                                int16_t* var_20_1 = edi_4;
                                                                                                                                void* var_24_1 = eax_1;
                                                                                                                                long double x87_r7_194 =
                                                                                                                                    arg_30 * arg_b8;
                                                                                                                                long double x87_r6_107 = arg_b0;
                                                                                                                                long double temp65_1 = 0.0;
                                                                                                                                x87_r6_107 - temp65_1;
                                                                                                                                int16_t eax_84 =
                                                                                                                                    (x87_r6_107 < temp65_1 ? 1 : 0) << 8 | (
                                                                                                                                    FCMP_UO(x87_r6_107, temp65_1) ? 1 : 0)
                                                                                                                                    << 0xa
                                                                                                                                    | (x87_r6_107 == temp65_1 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800;
                                                                                                                                char ecx_37;

                                                                                                                                ecx_37 = !(*(&eax_84 + 1) & 1) ? 0 : 1;

                                                                                                                                eax_84 = *(&a2 + 3);

                                                                                                                                if (eax_84)
                                                                                                                                {
                                                                                                                                    long double x87_r6_109 =
                                                                                                                                        x87_r7_194 + 0.10000000000000001;
                                                                                                                                    long double temp66_1 = a6;
                                                                                                                                    x87_r6_109 - temp66_1;

                                                                                                                                    if (*(&(
                                                                                                                                        (x87_r6_109 < temp66_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_109, temp66_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_109 == temp66_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    {
                                                                                                                                        *(&__return_addr + 3) = 0;
                                                                                                                                        goto label_4d8532;
                                                                                                                                    }

                                                                                                                                    long double temp67_1 = a6;
                                                                                                                                    x87_r7_194 - temp67_1;
                                                                                                                                    eax_84 =
                                                                                                                                        (x87_r7_194 < temp67_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_194, temp67_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_194 == temp67_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800;

                                                                                                                                    if (!(*(&eax_84 + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double x87_r6_111 =
                                                                                                                                            x87_r7_194 - 0.10000000000000001;
                                                                                                                                        long double temp69_1 = a6;
                                                                                                                                        x87_r6_111 - temp69_1;
                                                                                                                                        eax_84 =
                                                                                                                                            (x87_r6_111 < temp69_1 ? 1 : 0) << 8 | (
                                                                                                                                            FCMP_UO(x87_r6_111, temp69_1) ? 1 : 0)
                                                                                                                                            << 0xa
                                                                                                                                            | (x87_r6_111 == temp69_1 ? 1 : 0)
                                                                                                                                            << 0xe | 0x3800;

                                                                                                                                        if (*(&eax_84 + 1) & 1)
                                                                                                                                        {
                                                                                                                                            if (!ecx_37)
                                                                                                                                            {
                                                                                                                                            label_4d8521:
                                                                                                                                                eax_84 = 0;
                                                                                                                                                goto label_4d8527;
                                                                                                                                            }

                                                                                                                                            eax_84 = var_5_1;
                                                                                                                                            bool cond:12_1 = !eax_84;
                                                                                                                                            eax_84 = 1;

                                                                                                                                            if (cond:12_1)
                                                                                                                                                goto label_4d8527;

                                                                                                                                            goto label_4d8521;
                                                                                                                                        }

                                                                                                                                        edx_7 = var_5_1;
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        if (!ecx_37)
                                                                                                                                            eax_84 = var_5_1;

                                                                                                                                        if (!ecx_37 && eax_84)
                                                                                                                                            goto label_4d8521;

                                                                                                                                        eax_84 = 1;
                                                                                                                                    label_4d8527:
                                                                                                                                        *(&__return_addr + 3) = 1;

                                                                                                                                        if (eax_84)
                                                                                                                                            goto label_4d8532;

                                                                                                                                        edx_7 = var_5_1;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    *(&__return_addr + 3) = 0;
                                                                                                                                label_4d8532:
