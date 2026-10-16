#include "0042A150-Train_Setup.h"
/* 0x0042a150 Train_Setup full linked: callers=0 callees=11 */
int32_t Train_Setup(void* a1, char* a2)

{
    int32_t esi;

    if (!a2 || !*a2)
        esi = 0;
    else
        esi = 1;

    *(a1 + 0x768) = *(a1 + 0x76c);
    sub_4c48d0(a1, sub_4cec10(a1 + 0x780));
    float var_18;
    WeaponType_RegisterType_2(&var_18, a1, 0);
    float var_c;
    WeaponType_RegisterType_2(&var_c, a1, 1);
    long double x87_r7_1 = var_18 - var_c;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    if (*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    *(a1 + 0x74c) = x87_r7_1;
    long double x87_r6 = var_18;
    long double temp1 = 0f;
    x87_r6 - temp1;
    long double x87_r6_1 = var_18;

    if (*(&((x87_r6 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp1) ? 1 : 0) << 0xa
            | (x87_r6 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_1 = -(x87_r6_1);

    *(a1 + 0x748) = x87_r6_1 / x87_r7_1;
    sub_4fb700(a1, nullptr);
    sub_4f4600(a1);
    sub_4f4820(a1);
    sub_4f4800(a1);
    void* eax_4 = *(a1 + 0x14);
    void* var_2c_2;

    if (*(eax_4 + 0x1c) == g_57bcb8)
        var_2c_2 = eax_4;
    else
        var_2c_2 = a1;

    Menu_LeaveMenus_21(var_2c_2, esi);
    int32_t* i = *(*(a1 + 0xe8) + 8);

    if (*i && i)
    {
        int32_t ecx_3 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_8;

            if (!edx_1)
                eax_8 = nullptr;
            else
            {
                int32_t eax_5 = *edx_1;
                int32_t eax_6 = -(eax_5);
                eax_8 = (eax_6 - eax_6) & edx_1;
            }

            *((ecx_3 << 2) + &g_afa6e0) = eax_8;
            g_afa7e0 = ecx_3 + 1;
            uint32_t eax_10 = sub_4f1a70();
            int32_t ecx_5 = 0;
            ecx_5 = i[7];
            int32_t eax_14 = *(((eax_10 * 0x180 + ecx_5) << 2) + &g_a96ae0);

            if (eax_14)
                eax_14(i, a2);

            ecx_3 = g_afa7e0 - 1;
            g_afa7e0 = ecx_3;
            i = *((ecx_3 << 2) + &g_afa6e0);
        } while (i);
    }

    sub_4f1400(a1 + 0x890, a1);
    return 0;
}
