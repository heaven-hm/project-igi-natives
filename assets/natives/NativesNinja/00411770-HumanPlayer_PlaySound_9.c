#include "00411770-HumanPlayer_PlaySound_9.h"
/* 0x00411770 HumanPlayer_PlaySound_9 full linked: callers=1 callees=29 */
int32_t* HumanPlayer_PlaySound_9(float a1)

{
    float ebp = a1;
    void* eax = sub_4636e0(ebp);
    double var_1c;

    if (!*(ebp + 0xd90))
    {
        if (!*(ebp + 0xd92))
        {
            int32_t edx_4 = *(ebp + 0xfc);
            var_1c = 0xd;
            *(&var_1c + 4) = edx_4;
            int64_t var_14;
            var_14 = 0x46;
            *(&var_14 + 4) = 0x46a00000;
            int64_t var_c;
            var_c = sub_4c3440(ebp);
            *(&var_c + 4) = ebp;
            float var_4_1 = ebp;
            return sub_450ce0(&var_1c);
        }

        *(ebp + 0xd92) = 0;
        *(ebp + 0xd91) = 0;
        sub_463620(ebp);
        sub_463600(ebp);
        sub_464710(*(ebp + 0x4ec));
        sub_464240(ebp);
        sub_463580(ebp);
        sub_4635a0(ebp);
        Human_ViewCam(ebp, 1);
        HumanPlayer_LoadParameters_6(ebp);
        sub_4636a0(ebp, nullptr);
        sub_489e70(ebp, 0, 0f);
        int32_t* result = *(ebp + 0x2f4);

        if (!(result & 0x20000))
            return result;

        void* ecx_2 = *(ebp + 0x2f0);
        *(ebp + 0x2f8) = *(ebp + 0x2fc);
        *(ebp + 0x2fc) = 0x2f;
        int32_t eax_10 = *(ecx_2 + 0xbc);
        *(ebp + 0x300) = eax_10;
        return eax_10(ebp + 0x2ec, ebp);
    }

    long double x87_r7_1 = *(ebp + 0x20) - *(eax + 0x20);
    double var_34 = x87_r7_1;
    long double x87_r6_1 = *(ebp + 0x28) - *(eax + 0x28);
    long double x87_r5_1 = *(ebp + 0x30) - *(eax + 0x30);
    double var_24 = x87_r5_1;
    var_1c = *(eax + 0x7c) * x87_r6_1 + *(eax + 0x88) * x87_r5_1 + *(eax + 0x70) * x87_r7_1;
    double var_14_1 =
        *(eax + 0x80) * x87_r6_1 + *(eax + 0x8c) * x87_r5_1 + *(eax + 0x74) * x87_r7_1;
    double var_c_1 = *(eax + 0x90) * x87_r5_1 + *(eax + 0x78) * x87_r7_1 + *(eax + 0x84) * x87_r6_1;
    memcpy(&var_34, &var_1c, 0x18);
    long double x87_r7_3 = var_14_1;
    long double temp0 = 0.0;
    x87_r7_3 - temp0;
    float var_40;
    double var_2c;
    long double x87_r7_4;

    if (!(*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        x87_r7_4 = 2457.5999999999999;
        var_40 = 3.14159274f;
        var_2c = x87_r7_4;
    }
    else
    {
        x87_r7_4 = -2457.5999999999999;
        var_40 = 0f;
        var_2c = x87_r7_4;
    }

    var_1c = *(eax + 0x74) * x87_r7_4 + *(eax + 0x70) * var_34 + *(eax + 0x78) * 3891.1999999999998;
    double var_14_2 =
        *(eax + 0x80) * x87_r7_4 + *(eax + 0x7c) * var_34 + *(eax + 0x84) * 3891.1999999999998;
    double var_c_2 =
        *(eax + 0x8c) * x87_r7_4 + *(eax + 0x88) * var_34 + *(eax + 0x90) * 3891.1999999999998;
    memcpy(&var_34, &var_1c, 0x18);
    var_34 = var_1c + *(eax + 0x20);
    double var_2c_1 = var_2c + *(eax + 0x28);
    double var_24_1 = var_24 + *(eax + 0x30);
    sub_4631a0(ebp, &var_34);
    float var_3c;
    float var_38;
    sub_4b3c50(eax + 0x70, &var_38, &var_3c, &a1);
    a1 = a1 + var_40;
    sub_463220(ebp, a1);
    __builtin_memset(ebp + 0x664, 0, 0x18);
    *(ebp + 0xd90) = 0;
    *(ebp + 0xd91) = 1;
    sub_463610(ebp);
    sub_4635f0(ebp);
    sub_464720(*(ebp + 0x4ec));
    sub_464700(*(ebp + 0x4ec));
    sub_463570(ebp);
    sub_464230(ebp);
    sub_4632d0(ebp);
    sub_463590(ebp);
    Human_ViewCam(ebp, 3);
    HumanPlayer_UpdateAnimation_4(ebp);
    void* ecx_1 = *(ebp + 0x2f0);
    *(ebp + 0x2f8) = *(ebp + 0x2fc);
    *(ebp + 0x2fc) = 0x29;
    int32_t eax_7 = *(ecx_1 + 0xa4);
    *(ebp + 0x300) = eax_7;
    return eax_7(ebp + 0x2ec, ebp);
}
