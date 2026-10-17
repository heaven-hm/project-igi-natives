// Original IGI.EXE function: AI_UpdateSensors_3 (VA 0x004526E0; static CFG gate PASS, CFG score 0.967).
#include "AI_UpdateSensors_3.h"
void* AI_UpdateSensors_3(void* a1)

{
    int32_t ctxB = *(a1 + 0x14);
    int32_t v_50 = 0;
    int32_t v_4c = 0xc0c80000;
    int32_t v_48 = 0;
    int32_t v_44 = 0;
    int32_t v_40 = 0;
    int32_t v_3c = 0;
    double v_58 = *(AI_CheckVisibility_19(ctxB) + 8) * v_40;
    double v_60 = *(AI_CheckVisibility_19(ctxB) + 4) * v_48;
    double v_20 = *AI_CheckVisibility_19(ctxB) * v_50 + v_60 + v_58;
    double v_60_1 = *(AI_CheckVisibility_19(ctxB) + 0x14) * v_40;
    double v_58_1 = *(AI_CheckVisibility_19(ctxB) + 0x10) * v_48;
    double v_18 = *(AI_CheckVisibility_19(ctxB) + 0xc) * v_50 + v_58_1 + v_60_1;
    double v_60_2 = *(AI_CheckVisibility_19(ctxB) + 0x20) * v_40;
    double v_58_2 = *(AI_CheckVisibility_19(ctxB) + 0x1c) * v_48;
    long double x87_r7_23 = *(AI_CheckVisibility_19(ctxB) + 0x18) * v_50 + v_58_2 + v_60_2;
    double v_10 = x87_r7_23;
    long double fpu6 = v_20;
    memcpy(&v_50, &v_20, 0x18);
    double v_38;
    memcpy(&v_38, &v_20, 0x18);
    v_38 = -(fpu6);
    double v_30;
    double v_30_1 = -(v_30);
    double v_28 = x87_r7_23;
    double* valA10 = DynObj_UpdateDynTree_4(ctxB);
    v_50 = v_50 + *valA10;
    v_48 = v_48 + *(DynObj_UpdateDynTree_4(ctxB) + 8);
    v_40 = v_40 + *(DynObj_UpdateDynTree_4(ctxB) + 0x10);
    double* valA13 = DynObj_UpdateDynTree_4(ctxB);
    v_38 = v_38 + *valA13;
    double v_30_2 = v_30_1 + *(DynObj_UpdateDynTree_4(ctxB) + 8);
    double v_28_1 = v_28 + *(DynObj_UpdateDynTree_4(ctxB) + 0x10);
    void* valA17 = Script_ExecuteLevelScript_23(*(a1 + 0x3b6c), *(a1 + 0x3e2c));

    if (!valA17)
        return valA17;

    int32_t v_78_1 = 0;
    int32_t dstD = 2;

    if (Script_FormatString_23(&v_50, valA17, 0f, 0))
        dstD = 3;

    int32_t v_78_2 = 0;

    if (Script_FormatString_23(&v_38, valA17, 0f, 0))
        return dstD;

    return dstD & 0xfffffffd;
}
