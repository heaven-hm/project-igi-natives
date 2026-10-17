// Original IGI.EXE function: HumanSoldier_Action (VA 0x0045A5E0; static CFG gate PASS, CFG score 0.970).
#include "HumanSoldier_Action.h"
int32_t HumanSoldier_Action(void* a1, float* a2)

{
    void* valA = *(a1 + 0x800);
    double v_34;

    if (!valA || !*(valA + 0x3abc))
    {
        v_34 = *(a1 + 0x7c) * 4096.0;
        double v_2c_1 = *(a1 + 0x88) * 4096.0;
        double v_24_1 = *(a1 + 0x94) * 4096.0;
        double* valA2 = DynObj_UpdateDynTree_4(a1);
        char* v_64 = a2[1];
        double* valA4 = DynObj_UpdateDynTree_4(v_64);
        double v_4c = *valA2 - *valA4;
        void* valA5 = DynObj_UpdateDynTree_4(a1);
        void* valA6 = DynObj_UpdateDynTree_4(a2[1]);
        double v_44_1 = *(valA5 + 8) - *(valA6 + 8);
        void* valA7 = DynObj_UpdateDynTree_4(a1);
        void* valA8 = DynObj_UpdateDynTree_4(a2[1]);
        double v_3c_1 = *(valA7 + 0x10) - *(valA8 + 0x10);
        Sys_FreeMemory_11(&v_4c);
        int32_t dstD4 = 0xe;
        long double x87_r7_16 = v_3c_1 * v_24_1 + v_44_1 * v_2c_1 + v_4c * v_34;
        long double f0_1 = 0.0;
        x87_r7_16 - f0_1;

        if (*(&((x87_r7_16 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            dstD4 = 0xd;

        v_64 = a1 + 0x254;
        *(a1 + 0x2e8) = dstD4;
        FX_FragmentSimulate_14(v_64, dstD4);
        long double x87_r7_18 = (a1 + 0x254)[dstD4 * 2 + 4] * *a2;
        (a1 + 0x254)[dstD4 * 2 + 3] = x87_r7_18 + (a1 + 0x254)[dstD4 * 2 + 3];
        *(a1 + 0x254) = x87_r7_18 + *(a1 + 0x254);
        int32_t ctxB2 = *(a1 + 0x2f4);
        long double x87_r7_19 = x87_r7_18 + *(a1 + 0xd08);
        *(a1 + 0xd08) = x87_r7_19;
        long double x87_r6_9 = *(a1 + 0x254);
        long double f1_1 = *(a1 + 0x258);
        x87_r6_9 - f1_1;

        if (!(*(&((x87_r6_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, f1_1) ? 1 : 0) << 0xa
            | (x87_r6_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(a1 + 0xd1c) = 2;
            memcpy(a1 + 0xd20, &v_4c, 0x18);
            ctxB2 |= 0x20000;
            *(a1 + 0xcf5) = 1;
        }
        else
        {
            long double f2_1 = *(a1 + 0xd04);
            x87_r7_19 - f2_1;

            if (!(*(&((x87_r7_19 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_19, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                ctxB2 |= 0x10000;
                *(a1 + 0xd08) = 0;
            }

            int32_t v_60_3 = 3;
            v_64 = "ai_hit_";
            AI_MoveToNode_21(a1, v_64, v_60_3);
        }

        *(a1 + 0x2f4) = ctxB2;
    }

    int32_t v_1c = 0xf;
    int32_t v_18 = 1;
    int32_t valA13 = a2[1];
    int32_t v_8 = valA13;
    int32_t v_4 = valA13;
    int32_t v_14 = 0;
    double* v_c = &v_34;
    return AI_TakeCover(*(a1 + 0x800), &v_1c);
}
