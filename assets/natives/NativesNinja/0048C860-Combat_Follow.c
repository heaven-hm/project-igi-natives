#include "0048C860-Combat_Follow.h"
/* 0x0048c860 Combat_Follow full linked: callers=0 callees=16 */
int32_t* sub_48c860(int32_t* a1, int32_t* a2)

{
    int32_t* ebp = a2;
    char* var_40 = "Combat - Follow";
    int32_t var_44 = 0xffffffff;
    int32_t* var_48 = a1;
    void* edi_1 = ebp[0xa] + 8;
    a1[0xf37] = 0x3f800000;
    sub_48a920(a1, edi_1);

    if (!a1[0xf79])
        return sub_450ff0(a1, ebp);

    if (a1[0xf7a] == 0xffffffff)
        return sub_48ae70(a1, ebp, ebp[7], 0);

    void* eax_4 = sub_452660(a1);
    int32_t var_44_3 = a1[0xf7a];
    char* var_48_2 = "Tracking target at node #%d";
    int32_t var_4c_2 = 0xffffffff;
    int32_t* var_50_1 = a1;
    eax_4 = a1[0xf7c];

    if (eax_4)
    {
        void* edx_1 = a1[0xf79];
        a2 = nullptr;
        eax_4 = *(edx_1 + 0x29);
        sub_48b050(&a2, a1, eax_4, 5);
        int32_t* eax_5 = a2;

        if (eax_5)
        {
            int32_t eax_6 = *eax_5;

            if (eax_6 != a1[0xf8b])
            {
                a1[0xf7a] = eax_6;
                *(edi_1 + 0x18) = 0;
            }
        }

        a1[0xf7c] = 0;
    }

    if (sub_4522a0(a1, a1[0xf7a], &a1[0xfac], 0))
    {
        a1[0xf7a] = 0xffffffff;
        sub_48ae70(a1, ebp, ebp[7], 0);
        return sub_4511f0(a1[0xeaa], a1, 0xffffffff);
    }

    if (*(a1[0xf79] + 0x29))
    {
        void* eax_11 = a1[0xeaa];
        double var_30 = *(eax_11 + 0x110) - *(a1 + 0x20);
        double var_28_1 = *(eax_11 + 0x118) - *(a1 + 0x28);
        double var_20_1 = *(eax_11 + 0x120) - *(a1 + 0x30);
        double var_18_1 = a1[0x1f];
        double var_10_1 = a1[0x22];
        double var_8_1 = a1[0x25];
        sub_4b3100(&var_30);
        long double x87_r7_13 = var_8_1 * var_20_1 + var_10_1 * var_28_1 + var_18_1 * var_30;
        long double temp0_1 = 0.95999999999999996;
        x87_r7_13 - temp0_1;

        if (!(*(&((x87_r7_13 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            if (sub_451270(a1[0xeaa], 0) >= 4 && sub_451230(a1[0xeaa], a1))
                return sub_4511f0(a1[0xeaa], a1, 2);

            void* edx_5 = a1[0xeaa];
            a1[0xf23] = 0x3f800000;
            return sub_4511f0(edx_5, a1, 0);
        }
    }

    return sub_4511f0(a1[0xeaa], a1, 0xffffffff);
}
