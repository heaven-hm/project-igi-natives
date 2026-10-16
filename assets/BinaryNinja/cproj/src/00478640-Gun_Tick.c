#include "gi_platform.h"
#include "00478640-Gun_Tick.h"
uint32_t Gun_Tick(int32_t* a1)

{
    void* flagP = a1[0x4a];

    if (a1[0x51] == 0xfffffffe)
        a1[0x51] = *(flagP + 0x648);

    if (a1[0x3f])
        return QTask_FindType(a1);

    int32_t valA3 = a1[0x4f];

    if (valA3)
        a1[0x4f] = valA3 - 1;

    int32_t* i = (*(int32_t*)(uintptr_t)(a1[0x3a] + 8));

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* dstD1 = *i;
            void* valA7;

            if (!dstD1)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *dstD1;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & dstD1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA7;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA8 = 0;
            g_afa7e0 = tmpD2;
            valA8 = i[7];
            valA3 = *((valA8 << 2) + &g_a970e0);

            if (valA3)
            {
                valA3(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    long double fpu7 = a1[0x66];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = a1[0x66];
        long double f1_1 = 0.0f;
        x87_r7_6 - f1_1;

        if (!(*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_11 = a1[0x66] - 60.0 / (60.0 / *(flagP + 0x644) * 30.0);
            a1[0x66] = x87_r7_11;
            long double f3_1 = 0.0f;
            x87_r7_11 - f3_1;

            if (*(&((x87_r7_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                a1[0x66] = 0;
        }
    }
    else
    {
        long double x87_r7_5 = 60.0 / (60.0 / *(flagP + 0x644) * 30.0) + a1[0x66];
        a1[0x66] = x87_r7_5;
        long double f2_1 = 0.0f;
        x87_r7_5 - f2_1;

        if (!(*(&((x87_r7_5 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            a1[0x66] = 0;
    }

    int32_t valA10 = a1[0x69];

    if (valA10)
    {
        int32_t objC1 = a1[0x6a];

        if (!objC1)
        {
            a1[0x69] = valA10 + 1;
            int32_t valA12;
            int32_t tmpD3;
            tmpD3 = HIGHD(0x55555556 * 60.0 / *(flagP + 0x644) * 30.0);
            valA12 = LOWD(0x55555556 * 60.0 / *(flagP + 0x644) * 30.0);
            a1[0x6a] = tmpD3 + (tmpD3 >> 0x1f);
        }
        else
            a1[0x6a] = objC1 - 1;
    }

    uint32_t result = a1[0x67];

    if (result)
    {
        int32_t objC6 = a1[0x68];

        if (objC6)
        {
            a1[0x68] = objC6 - 1;
            return result;
        }

        a1[0x67] = result + 1;
        int32_t valA14;
        int32_t tmpD5;
        tmpD5 = HIGHD(0x66666667 * 60.0 / *(flagP + 0x644) * 30.0);
        valA14 = LOWD(0x66666667 * 60.0 / *(flagP + 0x644) * 30.0);
        int32_t tmpD6 = tmpD5 >> 2;
        result = tmpD6 >> 0x1f;
        a1[0x68] = tmpD6 + result;
    }

    return result;
}
