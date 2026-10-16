#include "00438000-Smoke_Process.h"
/* 0x00438000 Smoke_Process full linked: callers=0 callees=10 */
void* Smoke_Process(void* a1)

{
    memcpy(a1 + 0x40, a1 + 0x28, 0x18);
    int32_t* ecx = *(a1 + 0xf4);

    if (ecx)
    {
        long double x87_r7_1 = *(a1 + 0x124);
        long double temp0_1 = *(a1 + 0x128);
        x87_r7_1 - temp0_1;

        if (*(&((x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            QTask_FindType(ecx);
            *(a1 + 0xf4) = 0;
        }
    }

    int32_t eax_2 = *(a1 + 0x124);
    *(a1 + 0x171) = 0;
    *(a1 + 0x128) = eax_2;

    if (!*(a1 + 0xf4))
    {
        float ecx_1 = *(a1 + 0x80);
        float var_78 = 1f;
        int32_t var_74_1 = 0;
        int32_t var_70_1 = 0;
        int32_t var_6c_1 = 0;
        int32_t var_68_1 = 0x3f800000;
        int32_t var_64_1 = 0;
        int32_t var_60_1 = 0;
        int32_t var_5c_1 = 0;
        int32_t var_58_1 = 0x3f800000;
        int32_t var_54_1 = 0;
        float var_28[0xa];
        sub_4b3790(&var_28, &var_78, ecx_1);
        void var_50;
        sub_4b34f0(&var_50, &var_28, *(a1 + 0x7c));
        int32_t var_30;
        *(a1 + 0x78) = var_30;
        int32_t eax_5 = *(a1 + 0x110);
        int32_t var_48;
        *(a1 + 0x70) = var_48;
        int32_t var_3c;
        *(a1 + 0x74) = var_3c;
        float var_98;
        float ecx_4;

        if (!eax_5)
            ecx_4 = 2.4979255e-38f;
        else if (eax_5 == 1)
            ecx_4 = 2.35099094e-38f;
        else if (eax_5 != 2)
            ecx_4 = var_98;
        else
            ecx_4 = 2.35099319e-38f;

        int32_t eax_9 = *(a1 + 0x118);
        uint32_t eax_13;

        if (!eax_9)
            eax_13 = g_57bdc8 + 0x18;
        else if (eax_9 == 1)
            eax_13 = g_57be44 + 0x18;
        else if (eax_9 == 2)
            eax_13 = g_57be48 + 0x18;
        else
            eax_13 = g_57be4c + 0x18;

        long double x87_r7_3 = *(a1 + 0x84) * 4096f;
        int32_t edx_4 = *(a1 + 0xf8);
        float var_b4_2 = ecx_4;
        var_98 = x87_r7_3;
        float var_94_1 = x87_r7_3;
        long double x87_r7_5 = *(a1 + 0x104) * 63f;
        int32_t var_90 = 0;
        int32_t var_8c_1 = 0;
        int32_t var_88_1 = 0;
        float var_84 = x87_r7_5;
        float var_80_1 = *(a1 + 0x108) * 63f;
        float var_7c_1 = *(a1 + 0x10c) * 63f;
        float var_b4_3 = *(a1 + 0x114) * 0.0333333351f;
        void* eax_15 = Level_StartMission_4();
        struct status_msg* eax_17 = sub_4fdf00(sub_4f0ee0(), eax_15, eax_13, &var_90, &var_84,
            &var_98, 0x48c80000, ecx_4, 0, var_b4_3, 0, edx_4, 0);
        *(a1 + 0xf4) = eax_17;
        sub_4fe5d0(eax_17, 0);
    }

    sub_4f1400(a1 + 0xa4, a1);
    return Vehicle_DeployGear_6(a1);
}
