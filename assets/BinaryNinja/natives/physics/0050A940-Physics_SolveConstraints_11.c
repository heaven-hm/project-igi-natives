// Original IGI.EXE function: Physics_SolveConstraints_11 (VA 0x0050A940; static CFG gate PASS, CFG score 0.944).
#include "Physics_SolveConstraints_11.h"
void** Physics_SolveConstraints_11(void** a1)

{
    int32_t* ctxB = a1;
    int32_t objC = ctxB[7];
    void** result_2 = ctxB[6];
    int32_t tmpD = ctxB[0xa];
    int16_t flagP = ctxB[3];
    int32_t valA = ctxB[8];
    int32_t v_58 = valA;
    void v_20;
    Physics_CalculateSplineLength_12(&v_20, ctxB[9], 0f);
    int32_t* srcS = *ctxB;
    __builtin_memset(srcS, 0, 0x24);
    *srcS = Display_CheckCapabilities_7();
    srcS[7] = 0;
    srcS[8] = 0;
    void** result;
    int16_t objC2;

    if (tmpD || !(*(&g_bcac5c + 1) & 1))
    {
        void** result_3 = result_2;
        int32_t valA5 = Sys_OpenFileStream_9();
        Sys_DispatchOpcode_3(Display_CheckCapabilities_7(), valA5, &result_3);
        int32_t result_1;
        result = result_1;
        int32_t v_24;
        objC2 = v_24;
        srcS[4] = result_3 / result_1;
        int32_t v_14;
        flagP = (v_14 >> 3) * result;
        srcS[5] = objC / v_24;
    }
    else
    {
        objC2 = objC;
        srcS[4] = 0x3f800000;
        srcS[5] = 0x3f800000;
        result = result_2;
    }

    srcS[1] = result;
    result = valA;
    *(srcS + 6) = objC2;
    srcS[2] = flagP;
    *(srcS + 0xa) = result;
    srcS[6] = 0;

    if (ctxB[8] == 1)
    {
        int32_t objC4 = g_a7c130;
        result = *(g_a7c12c + (objC4 << 2)) * g_a7c138 + g_a7c128;
        *(g_a7c13c + result) = objC4;
        g_a7c130 += 1;
        *result = srcS;
    }

    return result;
}
