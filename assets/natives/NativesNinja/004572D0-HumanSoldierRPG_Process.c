#include "004572D0-HumanSoldierRPG_Process.h"
/* 0x004572d0 HumanSoldierRPG_Process full linked: callers=0 callees=5 */
int32_t sub_4572d0(void* a1, int32_t* a2)

{
    void* esi = a1;
    a1 = 0;
    void* eax = *(esi + 0x800);

    if (eax)
        a1 = *(eax + 0x3abd);

    if (!eax || !*(eax + 0x3abc))
    {
        int32_t eax_2 = sub_489c60(esi, a2);
        *(esi + 0x2e8) = eax_2;
        sub_489e10(esi + 0x254, eax_2);
        long double x87_r7_1;

        if (eax_2 == 0xf)
        {
            if (!a1)
                x87_r7_1 = (esi + 0x254)[eax_2 * 2 + 4] * a2[1];
            else
                x87_r7_1 = a2[1];
        }
        else if (eax_2 != 0x10 || !a1)
            x87_r7_1 = (esi + 0x254)[eax_2 * 2 + 4] * a2[1];
        else
            x87_r7_1 = a2[1];

        (esi + 0x254)[eax_2 * 2 + 3] = x87_r7_1 + (esi + 0x254)[eax_2 * 2 + 3];
        *(esi + 0x254) = x87_r7_1 + *(esi + 0x254);
        sub_463ad0(esi, &a2[2], *a2);
        long double x87_r7_4 = *(esi + 0x254);
        long double temp0_1 = *(esi + 0x258);
        x87_r7_4 - temp0_1;
        int32_t ecx_3 = *(esi + 0x2f4);
        void* ecx_5;

        if (!(*(&((x87_r7_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            *(esi + 0xd10) = a2[2];
            *(esi + 0xd18) = a2[3];
            *(esi + 0xd20) = a2[4];

            if (*(a2[6] + 0x610) != 2)
                *(esi + 0xd08) = 2;
            else
                *(esi + 0xd08) = 1;

            ecx_5 = ecx_3 | 0x20000;
            *(esi + 0xcf5) = 1;
        }
        else
        {
            sub_4637c0(esi, "ai_hit_", 3);
            ecx_5 = ecx_3 | 0x10000;
        }

        *(esi + 0x2f4) = ecx_5;
    }

    void* edx_2 = *(esi + 0x800);
    int32_t ebx_1 = a2[5];
    int32_t var_1c = 0xf;
    int32_t var_18 = 1;
    int32_t var_14 = 0;
    int32_t var_8 = ebx_1;
    int32_t var_4 = ebx_1;
    void var_34;
    void* var_c = &var_34;
    return sub_450d50(edx_2, &var_1c);
}
