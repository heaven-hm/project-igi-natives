// Original IGI.EXE function: HumanSoldierRPG_Process (VA 0x004572D0; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierRPG_Process.h"
int32_t HumanSoldierRPG_Process(void* a1, int32_t* a2)

{
    void* srcS = a1;
    a1 = 0;
    void* valA = *(srcS + 0x800);

    if (valA)
        a1 = *(valA + 0x3abd);

    if (!valA || !*(valA + 0x3abc))
    {
        int32_t valA2 = FX_000011(srcS, a2);
        *(srcS + 0x2e8) = valA2;
        FX_FragmentSimulate_14(srcS + 0x254, valA2);
        long double x87_r7_1;

        if (valA2 == 0xf)
        {
            if (!a1)
                x87_r7_1 = (srcS + 0x254)[valA2 * 2 + 4] * a2[1];
            else
                x87_r7_1 = a2[1];
        }
        else if (valA2 != 0x10 || !a1)
            x87_r7_1 = (srcS + 0x254)[valA2 * 2 + 4] * a2[1];
        else
            x87_r7_1 = a2[1];

        (srcS + 0x254)[valA2 * 2 + 3] = x87_r7_1 + (srcS + 0x254)[valA2 * 2 + 3];
        *(srcS + 0x254) = x87_r7_1 + *(srcS + 0x254);
        AI_UpdateOrders_21(srcS, &a2[2], *a2);
        long double x87_r7_4 = *(srcS + 0x254);
        long double f0_1 = *(srcS + 0x258);
        x87_r7_4 - f0_1;
        int32_t objC3 = *(srcS + 0x2f4);
        void* objC5;

        if (!(*(&((x87_r7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            *(srcS + 0xd10) = a2[2];
            *(srcS + 0xd18) = a2[3];
            *(srcS + 0xd20) = a2[4];

            if (*(a2[6] + 0x610) != 2)
                *(srcS + 0xd08) = 2;
            else
                *(srcS + 0xd08) = 1;

            objC5 = objC3 | 0x20000;
            *(srcS + 0xcf5) = 1;
        }
        else
        {
            AI_MoveToNode_21(srcS, "ai_hit_", 3);
            objC5 = objC3 | 0x10000;
        }

        *(srcS + 0x2f4) = objC5;
    }

    void* tmpD2 = *(srcS + 0x800);
    int32_t ctxB1 = a2[5];
    int32_t v_1c = 0xf;
    int32_t v_18 = 1;
    int32_t v_14 = 0;
    int32_t v_8 = ctxB1;
    int32_t v_4 = ctxB1;
    void v_34;
    void* v_c = &v_34;
    return AI_TakeCover(tmpD2, &v_1c);
}
