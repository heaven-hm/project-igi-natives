#include "00411AE0-HumanPlayer_TakeDamage_9.h"
/* 0x00411ae0 HumanPlayer_TakeDamage_9 full linked: callers=1 callees=31 */
int32_t HumanPlayer_TakeDamage_9(void* a1)

{
    double* eax = sub_4636e0(a1);
    float var_80;
    float var_7c;
    float var_70;
    float var_64;
    void* var_58;
    float var_54;
    void* var_4c;
    float var_48;

    if (!*(a1 + 0xd93))
    {
        sub_43f820(&var_80, eax);
        long double x87_r4_15 = var_64 * (*(a1 + 0x30) - eax[6])
            + var_70 * (*(a1 + 0x28) - eax[5]) + var_7c * (*(a1 + 0x20) - eax[4]);
        double var_90_2 = x87_r4_15;
        WeaponType_RegisterType_2(&var_58, eax, 0);
        WeaponType_RegisterType_2(&var_4c, eax, 1);
        long double x87_r7_31 = var_54 + 3072f;
        long double temp0 = var_90_2;
        x87_r7_31 - temp0;
        long double x87_r7_33;
        long double temp1_1;

        if (*(&((x87_r7_31 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, temp0) ? 1 : 0) << 0xa
            | (x87_r7_31 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_33 = var_48 - 3072f;
            temp1_1 = var_90_2;
            x87_r7_33 - temp1_1;
        }

        char ecx_2;

        ecx_2 = *(&((x87_r7_31 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_31, temp0) ? 1 : 0) << 0xa
            | (x87_r7_31 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41 && !(*(&(
            (x87_r7_33 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_33, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_33 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

        long double x87_r7_34 = *(a1 + 0x1d4);
        long double temp2 = 0f;
        x87_r7_34 - temp2;
        int16_t result = (x87_r7_34 < temp2 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_34, temp2) ? 1 : 0) << 0xa | (x87_r7_34 == temp2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
        label_411e52:

            if (!ecx_2 && !(*(a1 + 0x2f4) & 0x20000))
                return result;
        }
        else
        {
            long double x87_r7_35 = *(a1 + 0x134);
            long double temp4_1 = 0f;
            x87_r7_35 - temp4_1;
            result = (x87_r7_35 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_35, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_35 == temp4_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_411e52;
        }

        *(a1 + 0xd94) = 0;
        sub_463620(a1);
        sub_463600(a1);
        sub_464710(*(a1 + 0x4ec));
        sub_463580(a1);
        sub_4635a0(a1);
        Human_ViewCam(a1, 1);
        HumanPlayer_LoadParameters_6(a1);
        sub_464240(a1);
        eax[0x26] = 0;
        int32_t eax_13;

        if (!(0x20000 & *(a1 + 0x2f4)))
        {
            void* edx_4 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x1d;
            eax_13 = *(edx_4 + 0x74);
        }
        else
        {
            void* eax_12 = *(a1 + 0x2f0);
            *(a1 + 0x2f8) = *(a1 + 0x2fc);
            *(a1 + 0x2fc) = 0x2f;
            eax_13 = *(eax_12 + 0xbc);
        }

        *(a1 + 0x300) = eax_13;
        return eax_13(a1 + 0x2ec, a1);
    }

    sub_43f820(&var_80, eax);
    long double x87_r7_1 = *(a1 + 0x20) - eax[4];
    long double x87_r6_1 = *(a1 + 0x28) - eax[5];
    double var_38 = x87_r6_1;
    long double x87_r5_1 = *(a1 + 0x30) - eax[6];
    float var_74;
    float var_68;
    double var_98 = var_68 * x87_r5_1 + var_74 * x87_r6_1 + var_80 * x87_r7_1;
    double var_90 = var_64 * x87_r5_1 + var_70 * x87_r6_1 + var_7c * x87_r7_1;
    float var_78;
    float var_6c;
    float var_60;
    double var_88 = var_60 * x87_r5_1 + var_6c * x87_r6_1 + var_78 * x87_r7_1;
    void var_40;
    memcpy(&var_40, &var_98, 0x18);
    WeaponType_RegisterType_2(&var_58, eax, 0);
    WeaponType_RegisterType_2(&var_4c, eax, 1);
    long double x87_r7_4 = var_54 + 3072f;
    long double temp3 = var_90;
    x87_r7_4 - temp3;

    if (*(&((x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_7 = var_48 - 3072f;
        long double temp5_1 = var_90;
        x87_r7_7 - temp5_1;

        if (*(&((x87_r7_7 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            var_38 = x87_r7_7;
    }
    else
        var_38 = x87_r7_4;

    var_98 = var_7c * var_38 - var_78 * 2150.4000000000001;
    double var_90_1 = var_70 * var_38 - var_6c * 2150.4000000000001;
    double var_88_1 = var_64 * var_38 - var_60 * 2150.4000000000001;
    long double x87_r7_18 = var_98;
    double var_28;
    memcpy(&var_28, &var_98, 0x18);
    var_28 = x87_r7_18 + eax[4];
    double var_20;
    double var_20_1 = var_20 + eax[5];
    double var_18;
    double var_18_1 = var_18 + eax[6];
    sub_4631a0(a1, &var_28);
    __builtin_memset(a1 + 0x664, 0, 0x18);
    float var_a0;
    float var_10;
    float var_c;
    sub_4b3c50(&var_80, &var_10, &var_c, &var_a0);
    long double x87_r7_24 = var_38;
    long double temp6 = 0.0;
    x87_r7_24 - temp6;

    if (!(*(&((x87_r7_24 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, temp6) ? 1 : 0) << 0xa
            | (x87_r7_24 == temp6 ? 1 : 0) << 0xe) + 1) & 0x41))
        var_a0 = var_a0 + 3.14159274f;

    sub_463220(a1, var_a0);
    *(a1 + 0xd93) = 0;
    *(a1 + 0xd94) = 1;
    sub_463610(a1);
    sub_4635f0(a1);
    sub_464700(*(a1 + 0x4ec));
    sub_463570(a1);
    sub_4632d0(a1);
    sub_464720(*(a1 + 0x4ec));
    sub_463590(a1);
    Human_ViewCam(a1, 3);
    HumanPlayer_UpdateAnimation_4(a1);
    sub_464230(a1);
    void* eax_8 = *(a1 + 0x2f0);
    *(a1 + 0x2f8) = *(a1 + 0x2fc);
    *(a1 + 0x2fc) = 0x2a;
    int32_t eax_9 = *(eax_8 + 0xa8);
    *(a1 + 0x300) = eax_9;
    return eax_9(a1 + 0x2ec, a1);
}
