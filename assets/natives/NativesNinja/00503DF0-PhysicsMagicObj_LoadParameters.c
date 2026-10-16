#include "00503DF0-PhysicsMagicObj_LoadParameters.h"
/* 0x00503df0 PhysicsMagicObj_LoadParameters full linked: callers=0 callees=12 */
int32_t* sub_503df0(void* a1, float a2)

{
    int32_t* ebp = a2;
    void* eax_1 = sub_4cec10(*ebp);

    if (eax_1)
    {
        sub_4c5710(ebp[1], a1, eax_1);
        long double x87_r7 = *(a1 + 0x9c);
        long double x87_r6 = *(a1 + 0xa0);
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = *(a1 + 0xa0);
        else
            x87_r7_1 = *(a1 + 0x9c);

        long double x87_r6_1 = *(a1 + 0x98);
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = *(a1 + 0x9c);
            long double x87_r6_2 = *(a1 + 0xa0);
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = *(a1 + 0xa0);
            else
                x87_r7_3 = *(a1 + 0x9c);
        }
        else
            x87_r7_3 = *(a1 + 0x98);

        long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
        sub_4c7140(ebp[1], a1, &ebp[2], x87_r7_6, 2);
        memcpy(a1 + 0x70, &ebp[0xe], 0x28);
        memcpy(a1 + 0x720, &ebp[8], 0x18);
        memcpy(a1 + 0x738, &ebp[0x18], 0x28);
        *(a1 + 0x760) = ebp[0x22];
        sub_4fb5f0(a1);
        sub_4fb700(a1, sub_4ee140(*ebp));
        return sub_4c4950(a1, a1, ebp[0x22]);
    }

    int32_t __saved_ebx_1 = *ebp;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
