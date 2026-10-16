#include "0048BFD0-FX_FragmentSimulate_19.h"
/* 0x0048bfd0 FX_FragmentSimulate_19 full linked: callers=3 callees=15 */
int32_t sub_48bfd0(int32_t* a1, void* a2)

{
    int32_t* esi = a1;
    void* ebp = esi[0xf79];
    int32_t ebx = *(a2 + 0x18);
    *(a2 + 0x18) = 0;
    sub_4511f0(esi[0xeaa], esi, 0xffffffff);

    if (esi[0xf7a] == 0xffffffff)
    {
        int32_t var_18_1 = 0x3fd33333;
        void* eax_2 = sub_4f9720(esi[0xedb], esi[0xf8b]);

        if (!sub_4f9a40(sub_4c3440(esi[5]), eax_2, 4.17232506e-08f, 0))
            return 4;
    }

    int16_t eax_6;
    eax_6 = *(ebp + 0x29);

    if (!eax_6)
    {
        *(a2 + 0x18) = ebx + 1;

        if ((ebx + 1) % 0x1e > 0xf)
        {
            a1 = nullptr;
            sub_48b050(&a1, esi, 0, 5);
            int32_t* eax_30 = a1;

            if (eax_30 && *eax_30 != esi[0xf8b])
            {
                esi[0xf7c] = 0;
                esi[0xf7a] = *eax_30;
                *(a2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t ecx_6 = 0;
        ecx_6 = *(a2 + 0x18) > esi[0xf54];
        return ecx_6 + 6;
    }

    long double x87_r7 = *(a2 + 8);
    long double temp2 = *(esi + 0x3db0);
    x87_r7 - temp2;

    if (*(&((x87_r7 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2) ? 1 : 0) << 0xa
            | (x87_r7 == temp2 ? 1 : 0) << 0xe) + 1) & 1)
        return 3;

    if (!sub_48b980(esi))
    {
        long double x87_r7_1 = esi[0xf64];
        long double temp4 = *(a2 + 8);
        x87_r7_1 - temp4;

        if (*(&((x87_r7_1 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp4) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp4 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_2 = esi[0xf65];
            long double temp6_1 = *(a2 + 8);
            x87_r7_2 - temp6_1;
            int16_t eax_9 = (x87_r7_2 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp6_1 ? 1 : 0) << 0xe;

            if (!(*(&eax_9 + 1) & 0x41))
            {
                eax_9 = *(esi + 0x3dfd);

                if (eax_9)
                {
                    long double st0_1 = sub_4b4770(Level_SetMission_5());
                    long double temp8_1 = esi[0xf62];
                    st0_1 - temp8_1;

                    if (*(&((st0_1 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(st0_1, temp8_1) ? 1 : 0) << 0xa
                            | (st0_1 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        return 1;
                }
            }
        }

        sub_4511f0(esi[0xeaa], esi, 1);
        return 0;
    }

    long double x87_r7_4 = *(a2 + 8);
    long double temp3 = *(esi + 0x3dc0);
    x87_r7_4 - temp3;

    if (!(*(&((x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = nullptr;
        sub_48b050(&a1, esi, 1, 5);
        int32_t* eax_16 = a1;

        if (eax_16)
        {
            int32_t eax_17 = *eax_16;

            if (eax_17 != esi[0xf8b])
            {
                esi[0xf7a] = eax_17;
                return 5;
            }
        }
    }

    long double x87_r7_5 = esi[0xf64];
    long double temp5 = *(a2 + 8);
    x87_r7_5 - temp5;

    if (*(&((x87_r7_5 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp5) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp5 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_6 = esi[0xf65];
        long double temp7_1 = *(a2 + 8);
        x87_r7_6 - temp7_1;
        int16_t eax_15 = (x87_r7_6 < temp7_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_6, temp7_1) ? 1 : 0) << 0xa | (x87_r7_6 == temp7_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_15 + 1) & 0x41))
        {
            eax_15 = *(esi + 0x3dfd);

            if (eax_15)
            {
                long double st0_2 = sub_4b4770(Level_SetMission_5());
                long double temp9_1 = esi[0xf63];
                st0_2 - temp9_1;

                if (*(&((st0_2 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(st0_2, temp9_1) ? 1 : 0) << 0xa
                        | (st0_2 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    return 1;
            }
        }
    }

    if (sub_451270(esi[0xeaa], 0) >= 3)
    {
        sub_4511f0(esi[0xeaa], esi, 2);
        return 6;
    }

    sub_4511f0(esi[0xeaa], esi, 0);
    return 2;
}
