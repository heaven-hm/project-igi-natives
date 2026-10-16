#include "00430000-Wheel_LoadParameters.h"
/* 0x00430000 Wheel_LoadParameters full linked: callers=0 callees=10 */
int32_t Wheel_LoadParameters(int32_t* a1, float a2)

{
    int32_t* ebx = a2;
    void* eax_1 = sub_4cec10(*ebx);

    if (eax_1)
    {
        memcpy(&a1[0x3c], &ebx[8], 0x18);
        memcpy(&a1[0x42], &ebx[0x18], 0x28);
        sub_4c5710(ebx[1], a1, eax_1);
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
        sub_4c7140(ebx[1], a1, &ebx[2], x87_r7_6, 2);
        memcpy(&a1[0x1c], &ebx[0xe], 0x28);
        a1[0x53] = sub_4ee140(*ebx);
        a1[0x4f] = 0;
        a1[0x50] = 0;
        a1[0x51] = 0;
        a1[0x4e] = 0;
        void* ecx_2 = ebx[0x22];
        a1[0x4c] = ecx_2;
        int32_t result = Menu_LeaveMenus_23();

        if (*(ecx_2 + 0x1c) == result)
        {
            a1[0x52] = *(ecx_2 + 0x750);
            *(ecx_2 + 0x750) += 1;
            result = a1[0x52];
            *(ecx_2 + result * 0x1c + 0x75c) = 1;
        }

        a1[0x54] = 0;
        return result;
    }

    int32_t var_14_1 = *ebx;
    Error_Show("VirModel "%s" not available");

    while (true)
        /* nop */
}
