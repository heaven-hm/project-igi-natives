#include "gi_platform.h"
#include "0040CB90-HumanPlayer_ApplyPhysics_5.h"
void* HumanPlayer_ApplyPhysics_5(void* a1, float a2)

{
    float srcS = a2;
    double v_58;
    float v_28;
    Menu_FormatScreen_23(AI_CombatTarget_21(srcS), &v_58, &v_28);
    float v_18;
    float v_14;
    double v_38 = v_18 * -2048.0 - v_14 * 1433.5999999999999;
    float v_c;
    float v_8;
    double v_30 = v_c * -2048.0 - v_8 * 1433.5999999999999;
    float v_24;
    float v_20;
    v_58 = v_58 + v_24 * -2048.0 - v_20 * 1433.5999999999999;
    double v_50;
    double v_50_1 = v_50 + v_38;
    double v_48;
    double v_48_1 = v_48 + v_30;
    AI_UpdateOrders_19(srcS, &v_58);
    float v_60;
    float v_5c;
    Sys_Atan2UndefinedInOrig(&v_28, &v_5c, &v_60, &a2);
    AI_AlertAllies_19(srcS, a2);
    HumanPlayer_CheckCollision_9(srcS, 0.0f);
    FX_DebrisSpawn_14(srcS, 0xbd, 0, 0.0f);
    Human_ViewCam(srcS, 3);
    AI_UpdateOrders_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
    AI_MoveToNode_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
    AI_TakeCover_20(srcS);
    AI_UpdatePatrol_20(srcS);
    AI_UpdateSensors_19(srcS);
    void* result = AI_CheckVisibility_20(srcS);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = HumanPlayer_PlayFootstep_5;
    return result;
}
