// Original IGI.EXE function: QTask_FindType (VA 0x004015F0; static CFG gate PASS, CFG score 1.000).
#include "QTask_FindType.h"
int32_t QTask_FindType(int32_t* a1)

{
    g_567c58 -= 1;
    int32_t tmpD1 = g_afa7e0;
    int32_t valA = 0;

    if (tmpD1 > 0)
    {
        int32_t* objC1 = &g_afa6e0;

        do
        {
            if (*objC1 == a1)
            {
                int32_t* tmpD2 = *a1;
                void* objC5;

                if (!tmpD2)
                    objC5 = nullptr;
                else
                {
                    int32_t objC2 = *tmpD2;
                    int32_t objC3 = -(objC2);
                    objC5 = (objC3 - objC3) & tmpD2;
                }

                *((valA << 2) + &g_afa6e0) = objC5;
                break;
            }

            valA += 1;
            objC1 = &objC1[1];
        } while (valA < tmpD1);
    }

    int32_t valA1 = 0;
    valA1 = a1[7];
    int32_t valA2 = *((valA1 << 2) + &g_a97ce0);

    if (valA2)
        valA2(a1);

    int32_t* i_1 = a1[4];

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        QTask_FindType(i_1);
        i_1 = i;
    }

    int32_t objC6 = 0;
    objC6 = a1[7];
    int32_t valA3 = *((objC6 << 2) + &g_a976e0);

    if (valA3)
        valA3(a1);

    if (a1[6])
    {
        int32_t valA5 = g_567c40;
        int32_t objC7 = 0;

        if (valA5 > 0)
        {
            do
            {
                int32_t ctxB1 = g_567c38;
                int32_t* valA8 = *(g_567c3c + (objC7 << 2)) * g_567c48;

                if (*(valA8 + ctxB1) == a1)
                    *(valA8 + ctxB1) = 0;

                objC7 += 1;
            } while (objC7 < valA5);
        }
    }

    QTask_AllocateEvent(a1);

    if (!*(a1 + 0x1e))
        return Sys_ExecuteBytecode_2(a1);

    int32_t valA12 = 0;
    valA12 = a1[7];
    int32_t valA14 = valA12 * 0x30;
    int32_t dstD1 = *(*(valA14 + 0xaf5f00) + a1);
    *(valA14 + 0xaf5ef4) -= 1;
    int32_t valA15 = 0;
    valA15 = a1[7];
    int32_t objC10 = valA15 * 0x30;
    int32_t valA16 = *(objC10 + 0xaf5ef4);

    if (dstD1 == valA16)
        return valA16;

    int32_t tmpD4 = *(objC10 + 0xaf5ef0);
    int32_t flagP3 = *(tmpD4 + (dstD1 << 2));
    int32_t valA19 = *(tmpD4 + (valA16 << 2)) * *(objC10 + 0xaf5efc) + *(objC10 + 0xaf5eec);
    int32_t ctxB3 = *(*(objC10 + 0xaf5f00) + valA19);
    *(tmpD4 + (dstD1 << 2)) = *(tmpD4 + (ctxB3 << 2));
    int32_t objC13 = 0;
    objC13 = a1[7];
    *(*(objC13 * 0x30 + 0xaf5ef0) + (ctxB3 << 2)) = flagP3;
    int32_t objC15 = 0;
    objC15 = a1[7];
    *(*(objC15 * 0x30 + 0xaf5f00) + valA19) = dstD1;
    return valA19;
}
