#include "0046EAE0-AIStationaryGun_LoadParameters.h"
/* 0x0046eae0 AIStationaryGun_LoadParameters full linked: callers=0 callees=16 */
int32_t* sub_46eae0(double* a1, float a2)

{
    int32_t* ebx = a2;
    void* eax_1 = sub_4cec10(*ebx);

    if (eax_1)
    {
        memcpy(&a1[0x1e], &ebx[8], 0x18);
        memcpy(&a1[0x21], &ebx[0x18], 0x28);
        a1[0x26] = ebx[0x22];
        sub_4c5710(ebx[1], a1, eax_1);
        long double x87_r7 = *(a1 + 0x9c);
        long double x87_r6 = a1[0x14];
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = a1[0x14];
        else
            x87_r7_1 = *(a1 + 0x9c);

        long double x87_r6_1 = a1[0x13];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(a1 + 0x9c);
            long double x87_r6_2 = a1[0x14];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = a1[0x14];
            else
                x87_r7_3 = *(a1 + 0x9c);
        }
        else
            x87_r7_3 = a1[0x13];

        long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
        sub_4c7140(ebx[1], a1, &ebx[2], x87_r7_6, 1);
        memcpy(&a1[0xe], &ebx[0xe], 0x28);
        a1[0x37] = ebx[0x23];
        memcpy(&a1[0x27], &ebx[2], 0x18);
        memcpy(&a1[0x2a], &ebx[0xe], 0x28);
        *(a1 + 0x1bc) = 0;
        a1[0x38] = 0;
        sub_4f2050(a1 + 0x1c4);
        Weapon_EntityCreate(a1, 0, *HumanPlayer_ApplyRecoil_10(a1[0x37]), *(a1[0x37] + 0x2c),
            0);
        double* var_4c = a1;
        sub_4f2140(a1 + 0x1c4, nullptr);
        sub_46ec90(a1, a1[0x26] + 0x70);
        int32_t* result = sub_4c4950(a1, a1, a1[0x26]);
        a1[0x3a] = 0;
        *(a1 + 0x1d4) = 0;
        *(a1 + 0x1e4) = 0;
        a1[0x3b] = 0;
        return result;
    }

    int32_t __saved_ebp_1 = *ebx;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
