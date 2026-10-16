#include "0045A230-HumanSoldierPistol_Process.h"
/* 0x0045a230 HumanSoldierPistol_Process full linked: callers=0 callees=5 */
int32_t sub_45a230(float a1, int32_t* a2)

{
    int32_t* ebx = a2;
    float esi = a1;
    a1 = 0;
    void* eax = *(esi + 0x800);

    if (eax)
        a1 = *(eax + 0x3abd);

    if (!eax || !*(eax + 0x3abc))
    {
        int32_t eax_2 = sub_489c60(esi, ebx);
        *(esi + 0x2e8) = eax_2;
        sub_489e10(esi + 0x254, eax_2);

        if (eax_2 == 0xf)
        {
            if (!a1)
                a1 = (esi + 0x254)[eax_2 * 2 + 4] * ebx[1];
            else
                a1 = ebx[1];
        }
        else if (eax_2 != 0x10 || !a1)
            a1 = (esi + 0x254)[eax_2 * 2 + 4] * ebx[1];
        else
            a1 = ebx[1];

        (esi + 0x254)[eax_2 * 2 + 3] = a1 + (esi + 0x254)[eax_2 * 2 + 3];
        *(esi + 0x254) = a1 + *(esi + 0x254);
        sub_463ad0(esi, &ebx[2], *ebx);
        long double x87_r7_8 = a1 + *(esi + 0xd08);
        int32_t* ecx_3 = *(esi + 0x2f4);
        a2 = ecx_3;
        *(esi + 0xd08) = x87_r7_8;
        long double x87_r6_1 = *(esi + 0x254);
        long double temp0_1 = *(esi + 0x258);
        x87_r6_1 - temp0_1;
        int32_t* ecx_5;

        if (!(*(&((x87_r6_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(esi + 0xd20) = ebx[2];
            *(esi + 0xd28) = ebx[3];
            *(esi + 0xd30) = ebx[4];

            if (*(ebx[6] + 0x610) != 2)
                *(esi + 0xd1c) = 2;
            else
                *(esi + 0xd1c) = 1;

            ecx_5 = ecx_3 | 0x20000;
            *(esi + 0xcf5) = 1;
        }
        else
        {
            long double temp1_1 = *(esi + 0xd04);
            x87_r7_8 - temp1_1;

            if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(esi + 0xd08) = 0;
                a2 = ecx_3 | 0x10000;
            }

            sub_4637c0(esi, "ai_hit_", 3);
            ecx_5 = a2;
        }

        *(esi + 0x2f4) = ecx_5;
    }

    void* edx_3 = *(esi + 0x800);
    int32_t ebx_1 = ebx[5];
    int32_t var_1c = 0xf;
    int32_t var_18 = 1;
    int32_t var_14 = 0;
    int32_t var_8 = ebx_1;
    int32_t var_4 = ebx_1;
    void var_34;
    void* var_c = &var_34;
    return sub_450d50(edx_3, &var_1c);
}
