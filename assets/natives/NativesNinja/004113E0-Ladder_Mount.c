#include "004113E0-Ladder_Mount.h"
/* 0x004113e0 Ladder_Mount full linked: callers=1 callees=29 */
double* Ladder_Mount(float a1)

{
    float esi = a1;
    double* result = sub_4636e0(esi);
    double* result_1 = result;
    result = *(esi + 0xd78);
    int32_t eax_6;

    if (!result)
    {
        if (*(esi + 0xd7a))
        {
            *(esi + 0xd7a) = 0;
            *(esi + 0xd79) = 0;
            sub_463620(esi);
            sub_463600(esi);
            sub_464710(*(esi + 0x4ec));
            sub_464240(esi);
            sub_463580(esi);
            sub_4635a0(esi);
            Human_ViewCam(esi, 1);
            HumanPlayer_LoadParameters_6(esi);
            sub_489e70(esi, 0, 0f);
            result = *(esi + 0x2f4);
        }

        if (!*(esi + 0xd7a) || !(result & 0x20000))
            return result;

        void* ecx_4 = *(esi + 0x2f0);
        *(esi + 0x2f8) = *(esi + 0x2fc);
        *(esi + 0x2fc) = 0x2f;
        eax_6 = *(ecx_4 + 0xbc);
    }
    else
    {
        float var_38;
        float var_34;
        double var_30;
        double var_28;
        double var_20;

        if (!*(esi + 0xd7b))
        {
            WeaponType_UpdateAnim(&var_30, result_1, 2);
            double var_28_3 = var_28 + result_1[5];
            double var_20_3 = var_20 + result_1[6];
            double var_10_2 = result_1[0x10] * 1515.52 + *(result_1 + 0x84) * 3915.7759999999998;
            double var_8_2 = *(result_1 + 0x8c) * 1515.52 + result_1[0x12] * 3915.7759999999998;
            var_30 = *(result_1 + 0x74) * 1515.52 + result_1[0xf] * 3915.7759999999998 + var_30
                + result_1[4];
            double var_28_4 = var_10_2 + var_28_3;
            double var_20_4 = var_8_2 + var_20_3;
            sub_4631a0(esi, &var_30);
            sub_4b3c50(&result_1[0xe], &var_34, &var_38, &a1);
            a1 = a1 + 3.14159274f;
            sub_463220(esi, a1);
            *(esi + 0xd80) = 0;
        }
        else
        {
            WeaponType_UpdateAnim(&var_30, result_1, 3);
            double var_28_1 = var_28 + result_1[5];
            double var_20_1 = var_20 + result_1[6];
            double var_10_1 =
                *(result_1 + 0x84) * 3481.5999999999999 - result_1[0x10] * 1638.4000000000001;
            double var_8_1 =
                result_1[0x12] * 3481.5999999999999 - *(result_1 + 0x8c) * 1638.4000000000001;
            var_30 = result_1[0xf] * 3481.5999999999999 - *(result_1 + 0x74) * 1638.4000000000001
                + var_30 + result_1[4];
            double var_28_2 = var_10_1 + var_28_1;
            double var_20_2 = var_8_1 + var_20_1;
            sub_4631a0(esi, &var_30);
            sub_4b3c50(&result_1[0xe], &var_34, &var_38, &a1);
            a1 = a1 + 3.14159274f;
            sub_463220(esi, a1);
            *(esi + 0xd80) = result_1[0x27] - 6;
        }
        __builtin_memset(esi + 0x664, 0, 0x18);
        *(esi + 0xd78) = 0;
        *(esi + 0xd79) = 1;
        sub_463610(esi);
        sub_4635f0(esi);
        sub_464700(*(esi + 0x4ec));
        sub_464720(*(esi + 0x4ec));
        sub_463570(esi);
        sub_464230(esi);
        sub_4632d0(esi);
        sub_463590(esi);
        Human_ViewCam(esi, 3);
        HumanPlayer_UpdateAnimation_4(esi);
        *(esi + 0xd7c) = result_1[0x27];

        if (!*(esi + 0xd7b))
        {
            void* ecx_3 = *(esi + 0x2f0);
            *(esi + 0x2f8) = *(esi + 0x2fc);
            *(esi + 0x2fc) = 0x25;
            eax_6 = *(ecx_3 + 0x94);
        }
        else
        {
            void* edx_3 = *(esi + 0x2f0);
            *(esi + 0x2f8) = *(esi + 0x2fc);
            *(esi + 0x2fc) = 0x26;
            eax_6 = *(edx_3 + 0x98);
        }
    }

    *(esi + 0x300) = eax_6;
    return eax_6(esi + 0x2ec, esi);
}
