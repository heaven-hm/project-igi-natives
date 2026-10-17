// Original IGI.EXE function: QTask_CreateTask_3 (VA 0x00401E70; static CFG gate PASS, CFG score 1.000).
#include "QTask_CreateTask_3.h"
int32_t QTask_CreateTask_3(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    int32_t valA4 = g_afa7e0;
    *((valA4 << 2) + &g_afa6e0) = a1;
    int32_t valA = valA4 + 1;
    g_afa7e0 = valA;
    int16_t objC = *(a1 + 0x1c);

    if (objC == a3)
    {
        int32_t objC2 = *(((a2 * 0x180 + objC) << 2) + &g_a96ae0);

        if (objC2)
        {
            objC2(a1, a4);
            valA = g_afa7e0;
        }
    }

    if (a1 == *((valA << 2) + &g_afa6dc))
    {
        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            do
            {
                int32_t* srcS1 = *i;
                void* tmpD9;

                if (!srcS1)
                    tmpD9 = nullptr;
                else
                {
                    int32_t tmpD6 = *srcS1;
                    int32_t tmpD7 = -(tmpD6);
                    tmpD9 = (tmpD7 - tmpD7) & srcS1;
                }

                *((valA << 2) + &g_afa6e0) = tmpD9;
                g_afa7e0 = valA + 1;
                QTask_CreateTask_3(i, a2, a3, a4);
                valA = g_afa7e0 - 1;
                g_afa7e0 = valA;
                i = *((valA << 2) + &g_afa6e0);
            } while (i);
        }
    }

    g_afa7e0 = valA - 1;
    return valA - 1;
}
