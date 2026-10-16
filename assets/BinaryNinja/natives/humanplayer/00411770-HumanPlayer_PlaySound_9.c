#include "HumanPlayer_PlaySound_9.h"
int32_t* HumanPlayer_PlaySound_9(float a1)

{
    float flagP = a1;
    void* valA = AI_CombatTarget_21(flagP);
    double v_1c;

    if (!*(flagP + 0xd90))
    {
        if (!*(flagP + 0xd92))
        {
            int32_t tmpD4 = *(flagP + 0xfc);
            v_1c = 0xd;
            *(&v_1c + 4) = tmpD4;
            int64_t v_14;
            v_14 = 0x46;
            *(&v_14 + 4) = 0x46a00000;
            int64_t v_c;
            v_c = DynObj_UpdateDynTree_4(flagP);
            *(&v_c + 4) = flagP;
            float v_4_1 = flagP;
            return AI_EventBroadcast(&v_1c);
        }

        *(flagP + 0xd92) = 0;
        *(flagP + 0xd91) = 0;
        AI_SelectTarget_20(flagP);
        AI_UpdateOrders_20(flagP);
        AI_TakeCover_22(*(flagP + 0x4ec));
        AI_UpdateSensors_21(flagP);
        AI_CombatTarget_20(flagP);
        AI_CheckHearing_20(flagP);
        Human_ViewCam(flagP, 1);
        HumanPlayer_LoadParameters_6(flagP);
        AI_UpdatePatrol_21(flagP, nullptr);
        Human_StateAnimation(flagP, 0, 0f);
        int32_t* result = *(flagP + 0x2f4);

        if (!(result & 0x20000))
            return result;

        void* objC2 = *(flagP + 0x2f0);
        *(flagP + 0x2f8) = *(flagP + 0x2fc);
        *(flagP + 0x2fc) = 0x2f;
        int32_t valA10 = *(objC2 + 0xbc);
        *(flagP + 0x300) = valA10;
        return valA10(flagP + 0x2ec, flagP);
    }

    long double x87_r7_1 = *(flagP + 0x20) - *(valA + 0x20);
    double v_34 = x87_r7_1;
    long double x87_r6_1 = *(flagP + 0x28) - *(valA + 0x28);
    long double x87_r5_1 = *(flagP + 0x30) - *(valA + 0x30);
    double v_24 = x87_r5_1;
    v_1c = *(valA + 0x7c) * x87_r6_1 + *(valA + 0x88) * x87_r5_1 + *(valA + 0x70) * x87_r7_1;
    double v_14_1 =
        *(valA + 0x80) * x87_r6_1 + *(valA + 0x8c) * x87_r5_1 + *(valA + 0x74) * x87_r7_1;
    double v_c_1 = *(valA + 0x90) * x87_r5_1 + *(valA + 0x78) * x87_r7_1 + *(valA + 0x84) * x87_r6_1;
    memcpy(&v_34, &v_1c, 0x18);
    long double x87_r7_3 = v_14_1;
    long double f0 = 0.0;
    x87_r7_3 - f0;
    float v_40;
    double v_2c;
    long double x87_r7_4;

    if (!(*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        x87_r7_4 = 2457.5999999999999;
        v_40 = 3.14159274f;
        v_2c = x87_r7_4;
    }
    else
    {
        x87_r7_4 = -2457.5999999999999;
        v_40 = 0f;
        v_2c = x87_r7_4;
    }

    v_1c = *(valA + 0x74) * x87_r7_4 + *(valA + 0x70) * v_34 + *(valA + 0x78) * 3891.1999999999998;
    double v_14_2 =
        *(valA + 0x80) * x87_r7_4 + *(valA + 0x7c) * v_34 + *(valA + 0x84) * 3891.1999999999998;
    double v_c_2 =
        *(valA + 0x8c) * x87_r7_4 + *(valA + 0x88) * v_34 + *(valA + 0x90) * 3891.1999999999998;
    memcpy(&v_34, &v_1c, 0x18);
    v_34 = v_1c + *(valA + 0x20);
    double v_2c_1 = v_2c + *(valA + 0x28);
    double v_24_1 = v_24 + *(valA + 0x30);
    AI_UpdateOrders_19(flagP, &v_34);
    float v_3c;
    float v_38;
    Sys_Atan2UndefinedInOrig(valA + 0x70, &v_38, &v_3c, &a1);
    a1 = a1 + v_40;
    AI_AlertAllies_19(flagP, a1);
    __builtin_memset(flagP + 0x664, 0, 0x18);
    *(flagP + 0xd90) = 0;
    *(flagP + 0xd91) = 1;
    AI_AlertAllies_20(flagP);
    AI_TakeCover_20(flagP);
    AI_UpdateOrders_22(*(flagP + 0x4ec));
    AI_MoveToNode_22(*(flagP + 0x4ec));
    AI_UpdatePatrol_20(flagP);
    AI_SelectTarget_21(flagP);
    AI_UpdateSensors_19(flagP);
    AI_CheckVisibility_20(flagP);
    Human_ViewCam(flagP, 3);
    HumanPlayer_UpdateAnimation_4(flagP);
    void* objC1 = *(flagP + 0x2f0);
    *(flagP + 0x2f8) = *(flagP + 0x2fc);
    *(flagP + 0x2fc) = 0x29;
    int32_t valA7 = *(objC1 + 0xa4);
    *(flagP + 0x300) = valA7;
    return valA7(flagP + 0x2ec, flagP);
}
