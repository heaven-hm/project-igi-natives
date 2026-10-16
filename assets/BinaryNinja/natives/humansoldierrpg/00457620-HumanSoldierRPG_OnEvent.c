#include "HumanSoldierRPG_OnEvent.h"
int32_t HumanSoldierRPG_OnEvent(void* a1, float* a2)

{
    void* flagP = a1;
    void* valA = *(flagP + 0x800);
    double v_34;

    if (!valA || !*(valA + 0x3abc))
    {
        v_34 = *(flagP + 0x7c) * 4096.0;
        double v_2c_1 = *(flagP + 0x88) * 4096.0;
        double v_24_1 = *(flagP + 0x94) * 4096.0;
        double* valA2 = DynObj_UpdateDynTree_4(flagP);
        char* v_64 = a2[1];
        double* valA4 = DynObj_UpdateDynTree_4(v_64);
        double v_4c = *valA2 - *valA4;
        void* valA5 = DynObj_UpdateDynTree_4(flagP);
        void* valA6 = DynObj_UpdateDynTree_4(a2[1]);
        double v_44_1 = *(valA5 + 8) - *(valA6 + 8);
        void* valA7 = DynObj_UpdateDynTree_4(flagP);
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

        v_64 = flagP + 0x254;
        *(flagP + 0x2e8) = dstD4;
        FX_FragmentSimulate_14(v_64, dstD4);
        long double x87_r7_18 = (flagP + 0x254)[dstD4 * 2 + 4] * *a2;
        (flagP + 0x254)[dstD4 * 2 + 3] = x87_r7_18 + (flagP + 0x254)[dstD4 * 2 + 3];
        long double x87_r7_19 = x87_r7_18 + *(flagP + 0x254);
        *(flagP + 0x254) = x87_r7_19;
        long double f1_1 = *(flagP + 0x258);
        x87_r7_19 - f1_1;
        void* dstD5 = *(flagP + 0x2f4);
        void* dstD6;

        if (!(*(&((x87_r7_19 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_19 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            memcpy(flagP + 0xd10, &v_4c, 0x18);
            void* valA14 = dstD5 | 0x20000;
            *(flagP + 0xd08) = 2;
            a1 = valA14;
            *(flagP + 0xcf5) = 1;
            dstD6 = valA14;
        }
        else
        {
            int32_t v_60_3 = 3;
            v_64 = "ai_hit_";
            dstD6 = dstD5 | 0x10000;
            AI_MoveToNode_21(flagP, v_64, v_60_3);
        }

        *(flagP + 0x2f4) = dstD6;
    }

    int32_t valA15 = a2[1];
    int32_t v_8 = valA15;
    int32_t v_4 = valA15;
    void* valA16 = *(flagP + 0x800);
    int32_t v_1c;
    int32_t* saved_dst = &v_1c;
    v_1c = 0xf;
    int32_t v_18 = 1;
    int32_t v_14 = 0;
    double* v_c = &v_34;
    return AI_TakeCover(valA16, saved_dst);
}
