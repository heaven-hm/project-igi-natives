#include "00444150-Cabinet_Cleanup.h"
/* 0x00444150 Cabinet_Cleanup full linked: callers=0 callees=7 */
int32_t sub_444150(double* a1, float a2)

{
    int32_t* ebp = a2;
    void* eax_1 = sub_4cec10(*ebp);

    if (eax_1)
    {
        sub_4c5710(ebp[1], a1, eax_1);
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
        sub_4c7140(ebp[1], a1, &ebp[2], x87_r7_6, 1);
        memcpy(&a1[0xe], &ebp[0xe], 0x28);
        a1[0x26] = ebp[0x22];
        memcpy(&a1[0x27], &ebp[2], 0x18);
        a1[0x2a] = 0;
        *(a1 + 0x154) = 0;
        a1[0x2b] = 0;
        return 0;
    }

    int32_t __saved_ebx_1 = *ebp;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
