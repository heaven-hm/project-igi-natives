#include "HumanPlayer_TakeDamage_5.h"
void* HumanPlayer_TakeDamage_5(void* a1, float a2)

{
    float srcS = a2;
    double* valA = AI_CombatTarget_21(srcS);
    *(srcS + 0x33d) = 0;
    HumanPlayer_CheckCollision_9(srcS, 0f);
    FX_DebrisSpawn_14(srcS, Env_ScanViewCone_10(valA), 1, 0f);
    Render_TransformVertices_5(srcS + 0x514, srcS + 0x520, srcS + 0x68);
    long double x87_r7_3 = *(srcS + 0x80) * *(srcS + 0x528) + *(srcS + 0x7c) * *(srcS + 0x524)
        + *(srcS + 0x78) * *(srcS + 0x520);
    float v_58 = x87_r7_3;
    long double x87_r7_7 = *(srcS + 0x8c) * *(srcS + 0x528) + *(srcS + 0x88) * *(srcS + 0x524)
        + *(srcS + 0x84) * *(srcS + 0x520);
    float v_54 = x87_r7_7;
    long double x87_r7_10 = *(srcS + 0x98) * *(srcS + 0x528) + *(srcS + 0x94) * *(srcS + 0x524);
    long double x87_r6_11 = *(srcS + 0x90) * *(srcS + 0x520);
    *(srcS + 0x520) = v_58;
    *(srcS + 0x524) = v_54;
    float v_50 = x87_r7_10 + x87_r6_11;
    *(srcS + 0x528) = v_50;
    double v_40;
    float v_28;
    Env_UpdateCameraLens_10(valA, &v_40, &v_28);
    float v_18;
    v_50 = v_18 * 3481.5999999999999;
    float v_c;
    double v_48 = v_c * 3481.5999999999999;
    float v_24;
    v_40 = v_40 + v_24 * 3481.5999999999999;
    double v_38;
    double v_38_1 = v_38 + v_50;
    double v_30;
    double v_30_1 = v_30 + v_48;
    AI_UpdateOrders_19(srcS, &v_40);
    AI_SelectTarget_19(srcS);
    float v_60;
    float v_5c;
    Sys_Atan2UndefinedInOrig(&v_28, &v_5c, &v_60, &a2);
    a2 = a2 + 3.14159274f;
    AI_AlertAllies_19(srcS, a2);
    HumanPlayer_UpdateAnimation_4(srcS);
    long double x87_r7_22 = Env_CheckAmbientArea_10(valA) * 30f;
    *(srcS + 0xd64) = 0;
    v_58 = x87_r7_22;
    *(srcS + 0xd60) = v_58;
    Human_ViewCam(srcS, 3);
    HumanPlayer_CheckCollision_4(srcS);
    AI_CheckVisibility_20(srcS);
    AI_UpdateOrders_22(*(srcS + 0x4ec));
    AI_MoveToNode_22(*(srcS + 0x4ec));
    void* result = AI_TakeCover_20(srcS);
    *(srcS + 0xd70) = 0;
    *(a1 + 0x14) = sub_40d580;
    return result;
}
