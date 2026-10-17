// IGI native provenance: HumanPlayer_PlaySound_9 - 0x00411770 - CFG score 96.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00411770-HumanPlayer_PlaySound_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlaySound_9.h"
int32_t* HumanPlayer_PlaySound_9(float context)

{
    float flagP = context;
    void* data_val = AI_CombatTarget_21(flagP);
    double item_1c;

    if (!*(flagP + 0xd90))
    {
        if (!*(flagP + 0xd92))
        {
            int32_t temp_4 = *(flagP + 0xfc);
            item_1c = 0xd;
            *(&item_1c + 4) = temp_4;
            int64_t item_14;
            item_14 = 0x46;
            *(&item_14 + 4) = 0x46a00000;
            int64_t item_c;
            item_c = DynObj_UpdateDynTree_4(flagP);
            *(&item_c + 4) = flagP;
            float item_4_1 = flagP;
            return AI_EventBroadcast(&item_1c);
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
        Human_StateAnimation(flagP, 0, 0.0f);
        int32_t* result = *(flagP + 0x2f4);

        if (!(result & 0x20000))
            return result;

        void* entity_2 = *(flagP + 0x2f0);
        *(flagP + 0x2f8) = *(flagP + 0x2fc);
        *(flagP + 0x2fc) = 0x2f;
        int32_t data_10 = *(entity_2 + 0xbc);
        *(flagP + 0x300) = data_10;
        return data_10(flagP + 0x2ec, flagP);
    }

    long double fpu_val_7_1 = *(flagP + 0x20) - *(data_val + 0x20);
    double item_34 = fpu_val_7_1;
    long double fpu_val_6_1 = *(flagP + 0x28) - *(data_val + 0x28);
    long double fpu_val_5_1 = *(flagP + 0x30) - *(data_val + 0x30);
    double item_24 = fpu_val_5_1;
    item_1c = *(data_val + 0x7c) * fpu_val_6_1 + *(data_val + 0x88) * fpu_val_5_1 + *(data_val + 0x70) * fpu_val_7_1;
    double item_14_1 =
        *(data_val + 0x80) * fpu_val_6_1 + *(data_val + 0x8c) * fpu_val_5_1 + *(data_val + 0x74) * fpu_val_7_1;
    double item_c_1 = *(data_val + 0x90) * fpu_val_5_1 + *(data_val + 0x78) * fpu_val_7_1 + *(data_val + 0x84) * fpu_val_6_1;
    memcpy(&item_34, &item_1c, 0x18);
    long double fpu_val_7_3 = item_14_1;
    long double f0 = 0.0;
    fpu_val_7_3 - f0;
    float item_40;
    double item_2c;
    long double fpu_val_7_4;

    if (!(*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        fpu_val_7_4 = 2457.5999999999999;
        item_40 = 3.14159274f;
        item_2c = fpu_val_7_4;
    }
    else
    {
        fpu_val_7_4 = -2457.5999999999999;
        item_40 = 0.0f;
        item_2c = fpu_val_7_4;
    }

    item_1c = *(data_val + 0x74) * fpu_val_7_4 + *(data_val + 0x70) * item_34 + *(data_val + 0x78) * 3891.1999999999998;
    double item_14_2 =
        *(data_val + 0x80) * fpu_val_7_4 + *(data_val + 0x7c) * item_34 + *(data_val + 0x84) * 3891.1999999999998;
    double item_c_2 =
        *(data_val + 0x8c) * fpu_val_7_4 + *(data_val + 0x88) * item_34 + *(data_val + 0x90) * 3891.1999999999998;
    memcpy(&item_34, &item_1c, 0x18);
    item_34 = item_1c + *(data_val + 0x20);
    double item_2c_1 = item_2c + *(data_val + 0x28);
    double item_24_1 = item_24 + *(data_val + 0x30);
    AI_UpdateOrders_19(flagP, &item_34);
    float item_3c;
    float item_38;
    Sys_Atan2UndefinedInOrig(data_val + 0x70, &item_38, &item_3c, &context);
    context = context + item_40;
    AI_AlertAllies_19(flagP, context);
    memset(flagP + 0x664, 0, 0x18);
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
    void* entity_1 = *(flagP + 0x2f0);
    *(flagP + 0x2f8) = *(flagP + 0x2fc);
    *(flagP + 0x2fc) = 0x29;
    int32_t data_7 = *(entity_1 + 0xa4);
    *(flagP + 0x300) = data_7;
    return data_7(flagP + 0x2ec, flagP);
}
