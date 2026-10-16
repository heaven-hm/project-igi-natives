#include "004553E0-HumanSoldierFemale_Process.h"
/* 0x004553e0 HumanSoldierFemale_Process full linked: callers=0 callees=5 */
int32_t sub_4553e0(float a1, int32_t* a2)

{
    float esi = a1;
    a1 = 0;
    void* eax = *(esi + 0x800);

    if (eax)
        a1 = *(eax + 0x3abd);

    if (!eax || !*(eax + 0x3abc))
    {
        int32_t eax_2 = sub_489c60(esi, a2);
        *(esi + 0x2e8) = eax_2;
        sub_489e10(esi + 0x254, eax_2);

        if (eax_2 == 0xf)
        {
            if (!a1)
                a1 = (esi + 0x254)[eax_2 * 2 + 4] * a2[1];
            else
                a1 = a2[1];
        }
        else if (eax_2 != 0x10 || !a1)
            a1 = (esi + 0x254)[eax_2 * 2 + 4] * a2[1];
        else
            a1 = a2[1];

        (esi + 0x254)[eax_2 * 2 + 3] = a1 + (esi + 0x254)[eax_2 * 2 + 3];
        *(esi + 0x254) = a1 + *(esi + 0x254);
        sub_463ad0(esi, &a2[2], *a2);
        long double x87_r7_8 = a1 + *(esi + 0xd08);
        int32_t* ecx_3 = *(esi + 0x2f4);
        *(esi + 0xd08) = x87_r7_8;
        long double x87_r6_1 = *(esi + 0x254);
        long double temp0_1 = *(esi + 0x258);
        x87_r6_1 - temp0_1;
        int32_t* ecx_4;

        if (!(*(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(esi + 0xd20) = a2[2];
            *(esi + 0xd28) = a2[3];
            *(esi + 0xd30) = a2[4];

            if (*(a2[6] + 0x610) != 2)
                *(esi + 0xd18) = 2;
            else
                *(esi + 0xd18) = 1;

            ecx_4 = ecx_3 | 0x20000;
            *(esi + 0xcf5) = 1;
        }
        else
        {
            long double temp1_1 = *(esi + 0xd04);
            x87_r7_8 - temp1_1;

            if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(esi + 0xd08) = 0;

            sub_4637c0(esi, "ai_hit_", 3);
            ecx_4 = ecx_3;
        }

        *(esi + 0x2f4) = ecx_4;
    }

    void* edx_3 = *(esi + 0x800);
    int32_t ebx_1 = a2[5];
    int32_t var_1c = 0xf;
    int32_t var_18 = 1;
    int32_t var_14 = 0;
    int32_t var_8 = ebx_1;
    int32_t var_4 = ebx_1;
    void var_34;
    void* var_c = &var_34;
    return sub_450d50(edx_3, &var_1c);
}
