#include "AI_CheckVisibility_16.h"
void* AI_CheckVisibility_16(void* a1, float a2)

{
    float srcS = a2;
    double* valA = AI_CombatTarget_21(srcS);
    *(srcS + 0x696) = 0;
    double v_58;
    float v_28;
    Env_ActivateEntity_5(valA, &v_58, &v_28);
    int32_t v_48 = *(srcS + 0x30);
    float v_18;
    double v_38 = v_18 * 2867.1999999999998;
    int32_t v_44 = *(srcS + 0x34);
    float v_24;
    v_58 = v_24 * 2867.1999999999998 + v_58;
    double v_50;
    double v_50_1 = v_38 + v_50;
    AI_UpdateOrders_19(srcS, &v_58);
    float v_60;
    float v_5c;
    Sys_Atan2UndefinedInOrig(&v_28, &v_5c, &v_60, &a2);
    a2 = a2 + 3.14159274f;
    AI_AlertAllies_19(srcS, a2);
    FX_DebrisSpawn_14(srcS, 0x1f, 0, 0f);
    AI_UpdateOrders_22(*(srcS + 0x4ec));
    AI_MoveToNode_22(*(srcS + 0x4ec));
    AI_TakeCover_20(srcS);
    Human_SetParent(srcS, valA);
    *(a1 + 0x14) = sub_45c9b0;
    return a1;
}
