// Original IGI.EXE function: HumanPlayer_HandleInput_5 (VA 0x0040C970; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_5.h"
void* HumanPlayer_HandleInput_5(void* a1, float a2)

{
    float srcS = a2;
    double* valA = AI_CombatTarget_21(srcS);
    double v_58;
    float v_28;
    Env_ActivateEntity_5(valA, &v_58, &v_28);
    double v_50;
    double v_48;
    float v_24;
    float v_18;
    float v_c;
    long double x87_r4_3 = v_c * (*(srcS + 0x30) - v_48) + v_18 * (*(srcS + 0x28) - v_50)
        + v_24 * (*(srcS + 0x20) - v_58);
    long double f0 = 0.0;
    x87_r4_3 - f0;

    if (*(&((x87_r4_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_3, f0) ? 1 : 0) << 0xa
            | (x87_r4_3 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        Sys_OpenFileStream_12(&v_28, &v_28, 3.14159274f);

    v_48 = *(srcS + 0x30);
    double v_38 = v_18 * 2867.1999999999998;
    *(&v_48 + 4) = *(srcS + 0x34);
    v_58 = v_24 * 2867.1999999999998 + v_58;
    double v_50_1 = v_38 + v_50;
    AI_UpdateOrders_19(srcS, &v_58);
    float v_60;
    float v_5c;
    Sys_Atan2UndefinedInOrig(&v_28, &v_5c, &v_60, &a2);
    a2 = a2 + 3.14159274f;
    AI_AlertAllies_19(srcS, a2);
    HumanPlayer_CheckCollision_9(srcS, 0f);
    HumanPlayer_UpdateAnimation_4(srcS);
    FX_DebrisSpawn_14(srcS, 0xc6, 0, 0f);
    AI_UpdateOrders_22(*(srcS + 0x4ec));
    AI_MoveToNode_22(*(srcS + 0x4ec));
    AI_TakeCover_20(srcS);
    Human_SetParent(srcS, valA);
    void* result = AI_CheckVisibility_20(srcS);
    *(srcS + 0x4d0) = 0;
    *(a1 + 0x14) = sub_40cae0;
    return result;
}
