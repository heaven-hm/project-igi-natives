#include "00411F20-HumanPlayer_WireSlide1_2.h"
/* 0x00411f20 HumanPlayer_WireSlide1_2 full linked: callers=1 callees=35 */
int32_t HumanPlayer_WireSlide1_2(float* a1)

{
    double* eax = sub_4636e0(a1);
    float* var_d0;
    int32_t eax_9;
    float var_98;
    float var_94;
    float var_88;
    float var_7c;
    void* var_58;
    float var_54;
    void* var_4c;
    float var_48;

    if (!a1[0x368])
    {
        var_d0 = &var_98;
        char var_b9_1 = 0;
        sub_43f820(var_d0, eax);
        long double x87_r4_15 = var_7c * (*(a1 + 0x30) - eax[6])
            + var_88 * (*(a1 + 0x28) - eax[5]) + var_94 * (*(a1 + 0x20) - eax[4]);
        double var_68_1 = x87_r4_15;
        WeaponType_RegisterType_2(&var_58, eax, 0);
        WeaponType_RegisterType_2(&var_4c, eax, 1);
        long double x87_r7_36 = var_54 + 3072f;
        long double temp0_1 = var_68_1;
        x87_r7_36 - temp0_1;
        long double x87_r7_38;
        long double temp1_1;

        if (*(&((x87_r7_36 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_36, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_36 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_38 = var_48 - 3072f;
            temp1_1 = var_68_1;
            x87_r7_38 - temp1_1;
        }

        char ecx_2;

        ecx_2 = *(&((x87_r7_36 < temp0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_36, temp0_1) ? 1 : 0) << 0xa | (x87_r7_36 == temp0_1 ? 1 : 0) << 0xe)
            + 1) & 0x41 && !(*(&((x87_r7_38 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_38, temp1_1) ? 1 : 0) << 0xa | (x87_r7_38 == temp1_1 ? 1 : 0) << 0xe)
            + 1) & 1) ? var_b9_1 : 1;

        long double x87_r7_39 = a1[0x75];
        long double temp2_1 = 0f;
        x87_r7_39 - temp2_1;
        int16_t result = (x87_r7_39 < temp2_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_39, temp2_1) ? 1 : 0) << 0xa | (x87_r7_39 == temp2_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
        label_412307:

            if (!ecx_2 && !(a1[0xbd] & 0x20000))
                return result;
        }
        else
        {
            long double x87_r7_40 = a1[0x4d];
            long double temp4_1 = 0f;
            x87_r7_40 - temp4_1;
            result = (x87_r7_40 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_40, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_40 == temp4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_412307;
        }

        *(a1 + 0xda1) = 0;
        sub_463620(a1);
        var_d0 = a1;
        sub_463600(var_d0);
        sub_464710(a1[0x13b]);
        sub_463580(a1);
        sub_4635a0(a1);
        Human_ViewCam(a1, 1);
        HumanPlayer_LoadParameters_6(a1);
        void* eax_10 = a1[0x36d];

        if (eax_10)
        {
            sub_4e6c00(eax_10);
            a1[0x36d] = 0;
        }

        sub_464240(a1);
        eax[0x26] = 0;

        if (!(0x20000 & a1[0xbd]))
        {
            void* edx_4 = a1[0xbc];
            a1[0xbe] = a1[0xbf];
            a1[0xbf] = 0x1d;
            eax_9 = *(edx_4 + 0x74);
        }
        else
        {
            void* eax_12 = a1[0xbc];
            a1[0xbe] = a1[0xbf];
            a1[0xbf] = 0x2f;
            eax_9 = *(eax_12 + 0xbc);
        }
    }
    else
    {
        var_d0 = &var_98;
        sub_43f820(var_d0, eax);
        long double x87_r7_1 = *(a1 + 0x20) - eax[4];
        long double x87_r6_1 = *(a1 + 0x28) - eax[5];
        double var_68 = x87_r6_1;
        long double x87_r5_1 = *(a1 + 0x30) - eax[6];
        float var_8c;
        float var_80;
        double var_b8 = var_80 * x87_r5_1 + var_8c * x87_r6_1 + var_98 * x87_r7_1;
        double var_b0_1 = var_7c * x87_r5_1 + var_88 * x87_r6_1 + var_94 * x87_r7_1;
        float var_90;
        float var_84;
        float var_78;
        double var_a8_1 = var_78 * x87_r5_1 + var_84 * x87_r6_1 + var_90 * x87_r7_1;
        double var_70;
        memcpy(&var_70, &var_b8, 0x18);
        WeaponType_RegisterType_2(&var_58, eax, 0);
        WeaponType_RegisterType_2(&var_4c, eax, 1);
        long double x87_r7_4 = var_54 + 3072f;
        long double temp3_1 = var_b0_1;
        x87_r7_4 - temp3_1;

        if (*(&((x87_r7_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            x87_r7_4 = var_48 - 3072f;
            long double temp5_1 = var_b0_1;
            x87_r7_4 - temp5_1;

            if (!(*(&((x87_r7_4 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_4 = var_68;
        }

        double var_40;
        int64_t* var_cc_2 = &var_40;
        var_d0 = a1;
        var_b8 = var_94 * x87_r7_4 - var_90 * 3686.4000000000001;
        double var_b0_2 = var_88 * x87_r7_4 - var_84 * 3686.4000000000001;
        double var_a8_2 = var_7c * x87_r7_4 - var_78 * 3686.4000000000001;
        memcpy(&var_40, &var_b8, 0x18);
        var_40 = var_b8 + eax[4];
        double var_38;
        double var_38_1 = var_38 + eax[5];
        double var_30;
        double var_30_1 = var_30 + eax[6];
        sub_4631a0(var_d0, var_cc_2);
        float var_a0;
        float var_28;
        float var_24;
        sub_4b3c50(&var_98, &var_28, &var_24, &var_a0);
        WeaponType_UpdateAnim(&var_70, eax, 0);
        double var_20;
        WeaponType_UpdateAnim(&var_20, eax, 1);
        var_b8 = var_20 - var_70;
        double var_18;
        double var_b0_3 = var_18 - var_68;
        double var_60;
        double var_10;
        long double x87_r7_20 = var_10 - var_60;
        double var_a8_3 = x87_r7_20;
        long double temp6_1 = 0.0;
        x87_r7_20 - temp6_1;

        if (!(*(&((x87_r7_20 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            var_b8 = -(var_b8);
            var_b0_3 = -(var_b0_3);
            var_a8_3 = -(var_a8_3);
            var_a0 = var_a0 + 3.14159274f;
        }

        sub_4b3100(&var_b8);
        long double x87_r7_29 = var_b8;
        float edx_1 = var_a0;
        a1[0x36c] = 0;
        a1[0x369] = x87_r7_29;
        var_d0 = edx_1;
        a1[0x36a] = var_b0_3;
        a1[0x36b] = var_a8_3;
        sub_463220(a1, var_d0);
        a1[0x368] = 0;
        *(a1 + 0xda1) = 1;
        sub_463610(a1);
        sub_4635f0(a1);
        sub_464700(a1[0x13b]);
        sub_464720(a1[0x13b]);
        sub_463570(a1);
        sub_463590(a1);
        sub_4632d0(a1);
        Human_ViewCam(a1, 3);
        HumanPlayer_UpdateAnimation_4(a1);
        a1[0x36d] = sub_4e6b00(a1, "wire_slide_1");
        sub_464230(a1);
        void* eax_8 = a1[0xbc];
        a1[0xbe] = a1[0xbf];
        a1[0xbf] = 0x2b;
        eax_9 = *(eax_8 + 0xac);
    }
    a1[0xc0] = eax_9;
    var_d0 = &a1[0xbb];
    return eax_9(var_d0, a1);
}
