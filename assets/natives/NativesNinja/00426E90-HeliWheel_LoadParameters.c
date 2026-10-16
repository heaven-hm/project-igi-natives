#include "00426E90-HeliWheel_LoadParameters.h"
/* 0x00426e90 HeliWheel_LoadParameters full linked: callers=0 callees=8 */
int32_t HeliWheel_LoadParameters(int32_t* a1, float a2)

{
    int32_t* ebp = a2;
    void* eax_1 = sub_4cec10(*ebp);

    if (eax_1)
    {
        memcpy(&a1[0x3c], &ebp[8], 0x18);
        memcpy(&a1[0x42], &ebp[0x18], 0x28);
        sub_4c5710(ebp[1], a1, eax_1);
        long double x87_r7 = a1[0x27];
        long double x87_r6 = a1[0x28];
        x87_r6 - x87_r7;
        long double x87_r7_1;

        if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_1 = a1[0x28];
        else
            x87_r7_1 = a1[0x27];

        long double x87_r6_1 = a1[0x26];
        x87_r6_1 - x87_r7_1;
        long double x87_r7_3;

        if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_4 = a1[0x27];
            long double x87_r6_2 = a1[0x28];
            x87_r6_2 - x87_r7_4;

            if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_3 = a1[0x28];
            else
                x87_r7_3 = a1[0x27];
        }
        else
            x87_r7_3 = a1[0x26];

        long double x87_r7_6 = sub_4d0950(a1[0x1b]) * x87_r7_3;
        sub_4c7140(ebp[1], a1, &ebp[2], x87_r7_6, 2);
        memcpy(&a1[0x1c], &ebp[0xe], 0x28);
        int32_t result = ebp[0x22];
        a1[0x4c] = result;
        a1[0x4e] = ebp[0x23];
        return result;
    }

    int32_t __saved_ebx_1 = *ebp;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
