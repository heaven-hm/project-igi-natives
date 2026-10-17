// Original IGI.EXE function: Ladder_Mount (VA 0x004113E0; static CFG gate PASS, CFG score 0.989).
#include "Ladder_Mount.h"
double* Ladder_Mount(float context)

{
    float source_val = context;
    double* result = AI_CombatTarget_21(source_val);
    double* result_1 = result;
    result = *(source_val + 0xd78);
    int32_t data_6;

    if (!result)
    {
        if (*(source_val + 0xd7a))
        {
            *(source_val + 0xd7a) = 0;
            *(source_val + 0xd79) = 0;
            AI_SelectTarget_20(source_val);
            AI_UpdateOrders_20(source_val);
            AI_TakeCover_22(*(source_val + 0x4ec));
            AI_UpdateSensors_21(source_val);
            AI_CombatTarget_20(source_val);
            AI_CheckHearing_20(source_val);
            Human_ViewCam(source_val, 1);
            HumanPlayer_LoadParameters_6(source_val);
            Human_StateAnimation(source_val, 0, 0.0f);
            result = *(source_val + 0x2f4);
        }

        if (!*(source_val + 0xd7a) || !(result & 0x20000))
            return result;

        void* entity_4 = *(source_val + 0x2f0);
        *(source_val + 0x2f8) = *(source_val + 0x2fc);
        *(source_val + 0x2fc) = 0x2f;
        data_6 = *(entity_4 + 0xbc);
    }
    else
    {
        float item_38;
        float item_34;
        double item_30;
        double item_28;
        double item_20;

        if (!*(source_val + 0xd7b))
        {
            WeaponType_UpdateAnim(&item_30, result_1, 2);
            double item_28_3 = item_28 + result_1[5];
            double item_20_3 = item_20 + result_1[6];
            double item_10_2 = result_1[0x10] * 1515.52 + *(result_1 + 0x84) * 3915.7759999999998;
            double item_8_2 = *(result_1 + 0x8c) * 1515.52 + result_1[0x12] * 3915.7759999999998;
            item_30 = *(result_1 + 0x74) * 1515.52 + result_1[0xf] * 3915.7759999999998 + item_30
                + result_1[4];
            double item_28_4 = item_10_2 + item_28_3;
            double item_20_4 = item_8_2 + item_20_3;
            AI_UpdateOrders_19(source_val, &item_30);
            Sys_Atan2UndefinedInOrig(&result_1[0xe], &item_34, &item_38, &context);
            context = context + 3.14159274f;
            AI_AlertAllies_19(source_val, context);
            *(source_val + 0xd80) = 0;
        }
        else
        {
            WeaponType_UpdateAnim(&item_30, result_1, 3);
            double item_28_1 = item_28 + result_1[5];
            double item_20_1 = item_20 + result_1[6];
            double item_10_1 =
                *(result_1 + 0x84) * 3481.5999999999999 - result_1[0x10] * 1638.4000000000001;
            double item_8_1 =
                result_1[0x12] * 3481.5999999999999 - *(result_1 + 0x8c) * 1638.4000000000001;
            item_30 = result_1[0xf] * 3481.5999999999999 - *(result_1 + 0x74) * 1638.4000000000001
                + item_30 + result_1[4];
            double item_28_2 = item_10_1 + item_28_1;
            double item_20_2 = item_8_1 + item_20_1;
            AI_UpdateOrders_19(source_val, &item_30);
            Sys_Atan2UndefinedInOrig(&result_1[0xe], &item_34, &item_38, &context);
            context = context + 3.14159274f;
            AI_AlertAllies_19(source_val, context);
            *(source_val + 0xd80) = result_1[0x27] - 6;
        }
        memset(source_val + 0x664, 0, 0x18);
        *(source_val + 0xd78) = 0;
        *(source_val + 0xd79) = 1;
        AI_AlertAllies_20(source_val);
        AI_TakeCover_20(source_val);
        AI_MoveToNode_22(*(source_val + 0x4ec));
        AI_UpdateOrders_22(*(source_val + 0x4ec));
        AI_UpdatePatrol_20(source_val);
        AI_SelectTarget_21(source_val);
        AI_UpdateSensors_19(source_val);
        AI_CheckVisibility_20(source_val);
        Human_ViewCam(source_val, 3);
        HumanPlayer_UpdateAnimation_4(source_val);
        *(source_val + 0xd7c) = result_1[0x27];

        if (!*(source_val + 0xd7b))
        {
            void* entity_3 = *(source_val + 0x2f0);
            *(source_val + 0x2f8) = *(source_val + 0x2fc);
            *(source_val + 0x2fc) = 0x25;
            data_6 = *(entity_3 + 0x94);
        }
        else
        {
            void* temp_3 = *(source_val + 0x2f0);
            *(source_val + 0x2f8) = *(source_val + 0x2fc);
            *(source_val + 0x2fc) = 0x26;
            data_6 = *(temp_3 + 0x98);
        }
    }

    *(source_val + 0x300) = data_6;
    return data_6(source_val + 0x2ec, source_val);
}
