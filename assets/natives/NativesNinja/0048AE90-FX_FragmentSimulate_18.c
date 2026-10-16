#include "0048AE90-FX_FragmentSimulate_18.h"
/* 0x0048ae90 FX_FragmentSimulate_18 full linked: callers=1 callees=11 */
int32_t sub_48ae90(int32_t* a1, void* a2)

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

    if (!*(ebp + 0x29))
    {
        *(a2 + 0x18) = ebx + 1;

        if ((ebx + 1) % 0x1e > 0xf)
        {
            a1 = nullptr;
            sub_48b050(&a1, esi, 0, 5);
            int32_t* eax_20 = a1;

            if (eax_20 && *eax_20 != esi[0xf8b])
            {
                esi[0xf7c] = 0;
                esi[0xf7a] = *eax_20;
                *(a2 + 0x18) = 0;
                return 5;
            }
        }

        int32_t ecx_6 = 0;
        ecx_6 = *(a2 + 0x18) > esi[0xf54];
        return ecx_6 + 6;
    }

    if (!sub_48b980(esi))
    {
        sub_4511f0(esi[0xeaa], esi, 1);
        return 0;
    }

    long double x87_r7 = *(a2 + 8);
    long double temp2 = *(esi + 0x3dc0);
    x87_r7 - temp2;

    if (!(*(&((x87_r7 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        a1 = nullptr;
        sub_48b050(&a1, esi, 1, 5);
        int32_t* eax_10 = a1;

        if (eax_10)
        {
            int32_t eax_11 = *eax_10;

            if (eax_11 != esi[0xf8b])
            {
                esi[0xf7a] = eax_11;
                return 5;
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
