#include "gi_platform.h"
#include "004113E0-Ladder_Mount.h"
double* Ladder_Mount(float a1)

{
    float srcS = a1;
    double* result = AI_CombatTarget_21(srcS);
    double* result_1 = result;
    result = (*(int32_t*)(uintptr_t)(srcS + 0xd78));
    int32_t valA6;

    if (!result)
    {
        if ((*(int32_t*)(uintptr_t)(srcS + 0xd7a)))
        {
            (*(int32_t*)(uintptr_t)(srcS + 0xd7a)) = 0;
            (*(int32_t*)(uintptr_t)(srcS + 0xd79)) = 0;
            AI_SelectTarget_20(srcS);
            AI_UpdateOrders_20(srcS);
            AI_TakeCover_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
            AI_UpdateSensors_21(srcS);
            AI_CombatTarget_20(srcS);
            AI_CheckHearing_20(srcS);
            Human_ViewCam(srcS, 1);
            HumanPlayer_LoadParameters_6(srcS);
            Human_StateAnimation(srcS, 0, 0.0f);
            result = (*(int32_t*)(uintptr_t)(srcS + 0x2f4));
        }

        if (!(*(int32_t*)(uintptr_t)(srcS + 0xd7a)) || !(result & 0x20000))
            return result;

        void* objC4 = (*(int32_t*)(uintptr_t)(srcS + 0x2f0));
        (*(int32_t*)(uintptr_t)(srcS + 0x2f8)) = (*(int32_t*)(uintptr_t)(srcS + 0x2fc));
        (*(int32_t*)(uintptr_t)(srcS + 0x2fc)) = 0x2f;
        valA6 = *(objC4 + 0xbc);
    }
    else
    {
        float v_38;
        float v_34;
        double v_30;
        double v_28;
        double v_20;

        if (!(*(int32_t*)(uintptr_t)(srcS + 0xd7b)))
        {
            WeaponType_UpdateAnim(&v_30, result_1, 2);
            double v_28_3 = v_28 + result_1[5];
            double v_20_3 = v_20 + result_1[6];
            double v_10_2 = result_1[0x10] * 1515.52 + *(result_1 + 0x84) * 3915.7759999999998;
            double v_8_2 = *(result_1 + 0x8c) * 1515.52 + result_1[0x12] * 3915.7759999999998;
            v_30 = *(result_1 + 0x74) * 1515.52 + result_1[0xf] * 3915.7759999999998 + v_30
                + result_1[4];
            double v_28_4 = v_10_2 + v_28_3;
            double v_20_4 = v_8_2 + v_20_3;
            AI_UpdateOrders_19(srcS, &v_30);
            Sys_Atan2UndefinedInOrig(&result_1[0xe], &v_34, &v_38, &a1);
            a1 = a1 + 3.14159274.0f;
            AI_AlertAllies_19(srcS, a1);
            (*(int32_t*)(uintptr_t)(srcS + 0xd80)) = 0;
        }
        else
        {
            WeaponType_UpdateAnim(&v_30, result_1, 3);
            double v_28_1 = v_28 + result_1[5];
            double v_20_1 = v_20 + result_1[6];
            double v_10_1 =
                *(result_1 + 0x84) * 3481.5999999999999 - result_1[0x10] * 1638.4000000000001;
            double v_8_1 =
                result_1[0x12] * 3481.5999999999999 - *(result_1 + 0x8c) * 1638.4000000000001;
            v_30 = result_1[0xf] * 3481.5999999999999 - *(result_1 + 0x74) * 1638.4000000000001
                + v_30 + result_1[4];
            double v_28_2 = v_10_1 + v_28_1;
            double v_20_2 = v_8_1 + v_20_1;
            AI_UpdateOrders_19(srcS, &v_30);
            Sys_Atan2UndefinedInOrig(&result_1[0xe], &v_34, &v_38, &a1);
            a1 = a1 + 3.14159274.0f;
            AI_AlertAllies_19(srcS, a1);
            (*(int32_t*)(uintptr_t)(srcS + 0xd80)) = result_1[0x27] - 6;
        }
        __builtin_memset(srcS + 0x664, 0, 0x18);
        (*(int32_t*)(uintptr_t)(srcS + 0xd78)) = 0;
        (*(int32_t*)(uintptr_t)(srcS + 0xd79)) = 1;
        AI_AlertAllies_20(srcS);
        AI_TakeCover_20(srcS);
        AI_MoveToNode_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
        AI_UpdateOrders_22((*(int32_t*)(uintptr_t)(srcS + 0x4ec)));
        AI_UpdatePatrol_20(srcS);
        AI_SelectTarget_21(srcS);
        AI_UpdateSensors_19(srcS);
        AI_CheckVisibility_20(srcS);
        Human_ViewCam(srcS, 3);
        HumanPlayer_UpdateAnimation_4(srcS);
        (*(int32_t*)(uintptr_t)(srcS + 0xd7c)) = result_1[0x27];

        if (!(*(int32_t*)(uintptr_t)(srcS + 0xd7b)))
        {
            void* objC3 = (*(int32_t*)(uintptr_t)(srcS + 0x2f0));
            (*(int32_t*)(uintptr_t)(srcS + 0x2f8)) = (*(int32_t*)(uintptr_t)(srcS + 0x2fc));
            (*(int32_t*)(uintptr_t)(srcS + 0x2fc)) = 0x25;
            valA6 = *(objC3 + 0x94);
        }
        else
        {
            void* tmpD3 = (*(int32_t*)(uintptr_t)(srcS + 0x2f0));
            (*(int32_t*)(uintptr_t)(srcS + 0x2f8)) = (*(int32_t*)(uintptr_t)(srcS + 0x2fc));
            (*(int32_t*)(uintptr_t)(srcS + 0x2fc)) = 0x26;
            valA6 = *(tmpD3 + 0x98);
        }
    }

    (*(int32_t*)(uintptr_t)(srcS + 0x300)) = valA6;
    return valA6(srcS + 0x2ec, srcS);
}
