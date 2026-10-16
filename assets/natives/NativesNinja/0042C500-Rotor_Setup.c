#include "0042C500-Rotor_Setup.h"
/* 0x0042c500 Rotor_Setup full linked: callers=0 callees=10 */
int32_t* Rotor_Setup(void* a1, int32_t* a2)

{
    int32_t* eax_1 = sub_4cec10(*a2);

    if (eax_1)
    {
        *(a1 + 0x13c) = sub_4ee140(*a2);
        memcpy(a1 + 0xf0, &a2[8], 0x18);
        memcpy(a1 + 0x108, &a2[0x18], 0x28);
        sub_4c5710(a2[1], a1, eax_1);
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
        sub_4c7140(a2[1], a1, &a2[2], x87_r7_6, 2);
        memcpy(a1 + 0x70, &a2[0xe], 0x28);
        *(a1 + 0x138) = 0;
        int32_t ebp_1 = a2[0x22];
        *(a1 + 0x130) = ebp_1;
        return sub_4c4950(a1, a1, ebp_1);
    }

    int32_t __saved_ebx_1 = *a2;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
