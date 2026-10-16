#include "00425900-Menu_PlayMusic_16.h"
/* 0x00425900 Menu_PlayMusic_16 full linked: callers=1 callees=14 */
int32_t* Menu_PlayMusic_16(long double a1 @ st0, void* a2)

{
    double* eax = Menu_DrawWidget_16(a2);
    double* var_98 = *(a2 + 0x68);
    double var_50;
    sub_4f9770(&var_50, var_98);
    double var_80;
    double* var_a0 = &var_80;
    var_80 = *eax - var_50;
    double var_48;
    double var_78 = eax[1] - var_48;
    double var_40;
    double var_70 = eax[2] - var_40;
    long double st0 = sub_4b3160(var_a0);
    double var_38 = st0;
    long double temp0 = 3288334336.0;
    st0 - temp0;
    double* var_a8;
    double var_68;

    if (!(*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double x87_r7_8 = -(var_80);
        var_80 = x87_r7_8;
        void* eax_4 = *(a2 + 0x4c);
        long double x87_r6_1 = -(var_78);
        double var_78_1 = x87_r6_1;
        long double x87_r5_1 = -(var_70);
        double var_70_1 = x87_r5_1;
        var_68 =
            *(eax_4 + 0x88) * x87_r5_1 + *(eax_4 + 0x7c) * x87_r6_1 + *(eax_4 + 0x70) * x87_r7_8;
        double var_60_1 =
            *(eax_4 + 0x8c) * x87_r5_1 + *(eax_4 + 0x80) * x87_r6_1 + *(eax_4 + 0x74) * x87_r7_8;
        double var_58_1 =
            *(eax_4 + 0x90) * x87_r5_1 + *(eax_4 + 0x84) * x87_r6_1 + *(eax_4 + 0x78) * x87_r7_8;
        memcpy(&var_80, &var_68, 0x18);
        memcpy(&var_a8, &var_68, 0x18);
        int32_t eax_6 = WeaponType_GetConfig();
        long double temp3 = 0.0;
        a1 - temp3;
        eax_6 = (a1 < temp3 ? 1 : 0) << 8 | (FCMP_UO(a1, temp3) ? 1 : 0) << 0xa
            | (a1 == temp3 ? 1 : 0) << 0xe;
        *(a2 + 0x6c);
        return eax_6;
    }

    double* eax_8 = sub_4c3440(*(a2 + 0x74));
    void* ecx = *(a2 + 0x2c);
    var_98 = eax_8;
    int32_t* var_84;
    sub_5096f0(&var_84, ecx, var_98);
    int32_t* eax_9 = var_84;
    void var_18;
    var_a8 = &var_18;
    sub_4f9770(var_a8, eax_9);
    int32_t* eax_10 = *(a2 + 0x68);
    int32_t* ecx_1 = var_84;

    if (ecx_1 == eax_10)
    {
        *(a2 + 0x6c);
        return eax_10;
    }

    int32_t edx = *ecx_1;
    void* ecx_2 = *(a2 + 0x2c);
    var_98 = *eax_10;
    int32_t* eax_12 = sub_5096c0(ecx_2, var_98, edx);

    if (!eax_12)
        memcpy(&var_68, &var_18, 0x18);
    else
    {
        int32_t edx_1 = *eax_12;
        var_98 = *(a2 + 0x2c);
        sub_4f9770(&var_68, sub_4f9720(var_98, edx_1));
    }

    long double x87_r7_16 = var_68 - var_50;
    double var_30;
    double* var_94_4 = &var_30;
    var_98 = &var_80;
    var_30 = x87_r7_16;
    double var_60;
    double var_28 = var_60 - var_48;
    double var_58;
    double var_20 = var_58 - var_40;
    int32_t eax_15;
    long double st0_1;
    st0_1 = sub_4b31f0(var_98, var_94_4);
    long double x87_r6_5 = *(a2 + 0x6c);
    long double temp1 = 5f;
    x87_r6_5 - temp1;
    eax_15 = (x87_r6_5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp1) ? 1 : 0) << 0xa
        | (x87_r6_5 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&eax_15 + 1) & 1)
    {
        *(a2 + 0x6c);
        return eax_15;
    }

    long double temp2 = 0.17453293005625406;
    st0_1 - temp2;
    eax_15 = (st0_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp2) ? 1 : 0) << 0xa
        | (st0_1 == temp2 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&eax_15 + 1) & 1))
        return eax_15;

    *(a2 + 0x6c);
    return eax_15;
}
