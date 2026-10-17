// Original IGI.EXE function: HumanSoldierPistol_Process (VA 0x0045A230; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierPistol_Process.h"
int32_t HumanSoldierPistol_Process(float a1, int32_t* a2)

{
    int32_t* ctxB = a2;
    float srcS = a1;
    a1 = 0;
    void* valA = *(srcS + 0x800);

    if (valA)
        a1 = *(valA + 0x3abd);

    if (!valA || !*(valA + 0x3abc))
    {
        int32_t valA2 = FX_000011(srcS, ctxB);
        *(srcS + 0x2e8) = valA2;
        FX_FragmentSimulate_14(srcS + 0x254, valA2);

        if (valA2 == 0xf)
        {
            if (!a1)
                a1 = (srcS + 0x254)[valA2 * 2 + 4] * ctxB[1];
            else
                a1 = ctxB[1];
        }
        else if (valA2 != 0x10 || !a1)
            a1 = (srcS + 0x254)[valA2 * 2 + 4] * ctxB[1];
        else
            a1 = ctxB[1];

        (srcS + 0x254)[valA2 * 2 + 3] = a1 + (srcS + 0x254)[valA2 * 2 + 3];
        *(srcS + 0x254) = a1 + *(srcS + 0x254);
        AI_UpdateOrders_21(srcS, &ctxB[2], *ctxB);
        long double x87_r7_8 = a1 + *(srcS + 0xd08);
        int32_t* objC3 = *(srcS + 0x2f4);
        a2 = objC3;
        *(srcS + 0xd08) = x87_r7_8;
        long double x87_r6_1 = *(srcS + 0x254);
        long double f0_1 = *(srcS + 0x258);
        x87_r6_1 - f0_1;
        int32_t* objC5;

        if (!(*(&((x87_r6_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(srcS + 0xd20) = ctxB[2];
            *(srcS + 0xd28) = ctxB[3];
            *(srcS + 0xd30) = ctxB[4];

            if (*(ctxB[6] + 0x610) != 2)
                *(srcS + 0xd1c) = 2;
            else
                *(srcS + 0xd1c) = 1;

            objC5 = objC3 | 0x20000;
            *(srcS + 0xcf5) = 1;
        }
        else
        {
            long double f1_1 = *(srcS + 0xd04);
            x87_r7_8 - f1_1;

            if (!(*(&((x87_r7_8 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_8, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(srcS + 0xd08) = 0;
                a2 = objC3 | 0x10000;
            }

            AI_MoveToNode_21(srcS, "ai_hit_", 3);
            objC5 = a2;
        }

        *(srcS + 0x2f4) = objC5;
    }

    void* tmpD3 = *(srcS + 0x800);
    int32_t ctxB1 = ctxB[5];
    int32_t v_1c = 0xf;
    int32_t v_18 = 1;
    int32_t v_14 = 0;
    int32_t v_8 = ctxB1;
    int32_t v_4 = ctxB1;
    void v_34;
    void* v_c = &v_34;
    return AI_TakeCover(tmpD3, &v_1c);
}
