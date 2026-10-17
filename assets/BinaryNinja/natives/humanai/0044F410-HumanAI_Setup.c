// Original IGI.EXE function: HumanAI_Setup (VA 0x0044F410; static CFG gate PASS, CFG score 0.984).
#include "HumanAI_Setup.h"
void* HumanAI_Setup(int32_t context)

{
    int32_t* flagP = context;
    memset(&flagP[0xf1d], 0, 0xa0);
    char item_51 = 0;
    context = DEBUG_KEYSENABLEINVALID(0x37);
    flagP[0xf30] = context;
    float context_val = flagP[5];
    float item_3c;
    float* data_1 = FX_ExplosionSpawn_16(&item_3c, context_val, 0);
    float item_48 = *data_1;
    int32_t item_44 = data_1[1];
    float data_2 = data_1[2];
    flagP[8] = *(context_val + 0x20);
    flagP[9] = *(context_val + 0x24);
    flagP[0xa] = *(context_val + 0x28);
    flagP[0xb] = *(context_val + 0x2c);
    *(flagP + 0x30) = *(context_val + 0x30) - data_2;
    memcpy(&flagP[0x14], context_val + 0x78, 0x28);
    AI_FireWeapon_23(&flagP[0xe], *(context_val + 0x4ec));
    int32_t* temp_3 = &flagP[0x1e];
    AI_TakeCover_23(temp_3, *(context_val + 0x4ec));
    AI_UpdateSensors_23(*(context_val + 0x4ec), 0, 0);

    if (!flagP[0xf1c])
    {
        int32_t item_6c_1 = Script_EvaluateCondition_4(flagP);
        return Warning_Show("No AI script in HumanAI #%d");
    }

    if (!flagP[0xedb])
    {
        int32_t item_6c_2 = Script_EvaluateCondition_4(flagP);
        return Warning_Show("No AI graph in HumanAI #%d");
    }

    int32_t item_50;
    int32_t item_30;

    if (flagP[0xf45])
    {
        if (AI_UpdateSensors_2(flagP) && !*(flagP + 0x3aba))
        {
            int32_t* i_3 = flagP[0x23f];
            context = 0xffffffff;

            for (int32_t* i = *i_3; i; i = *i)
            {
                AI_CombatTarget_2(flagP, i_3);
                i_3 = i;
            }

            int32_t entity_7 = flagP[0x237];
            int32_t data_19 = 0;

            if (entity_7 > 0)
            {
                int32_t* temp_5 = &flagP[0x207];

                do
                {
                    if (*temp_5 == 2)
                        context = data_19;

                    data_19 += 1;
                    temp_5 = &temp_5[1];
                } while (data_19 < entity_7);
            }

            int32_t item_28_2 = 2;
            int32_t item_2c_2 = 0;
            item_30 = 0;
            Camera_SetFieldOfView_33(&flagP[0x1c2], &item_30);
            HumanAI_EventDispatch(flagP, 2, context);
            temp_3 = Camera_ApplyHandiCam_33(&item_30);
            *(flagP + 0x3aba) = AI_UpdateSensors_2(flagP);
        }

        if (!AI_UpdateSensors_2(flagP))
        {
            int32_t data_24 = flagP[0x28];
            *(flagP + 0x3a30) = *(*(context_val + 0x70) + 0x2ac) + *(context_val + 0x20);
            *(flagP + 0x3a38) = *(*(context_val + 0x70) + 0x2b0) + *(context_val + 0x28);
            int32_t temp_7 = flagP[0x2a];
            *(flagP + 0x3a40) = *(*(context_val + 0x70) + 0x2b4) + *(context_val + 0x30);
            memcpy(&flagP[0xe92], *(context_val + 0x70) + 0x2b8, 0x28);
            int32_t entity_10 = flagP[0x29];
            flagP[0xe9c] = data_24;
            int32_t data_25 = flagP[0x2b];
            flagP[0xe9e] = temp_7;
            int32_t temp_8 = flagP[0x31];
            flagP[0xe9f] = data_25;
            int32_t data_26 = flagP[0x32];
            flagP[0xe9d] = entity_10;
            int32_t entity_11 = flagP[0x30];
            flagP[0xea4] = data_26;
            char data_27 = *(flagP + 0x3abb);
            flagP[0xea2] = entity_11;
            int32_t entity_12 = flagP[0x33];
            flagP[0xea3] = temp_8;
            flagP[0xea5] = entity_12;

            if (!data_27)
            {
                int32_t temp_11 = flagP[0x34];
                int32_t entity_14 = flagP[0x2d];
                flagP[0xea0] = flagP[0x2c];
                int32_t data_30 = flagP[0x35];
                flagP[0xea6] = temp_11;
                flagP[0xea1] = entity_14;
                flagP[0xea7] = data_30;
            }
            else
            {
                int32_t entity_13 = flagP[0x36];
                int32_t data_28 = flagP[0x2f];
                flagP[0xea0] = flagP[0x2e];
                int32_t temp_10 = flagP[0x37];
                flagP[0xea6] = entity_13;
                flagP[0xea1] = data_28;
                flagP[0xea7] = temp_10;
            }

            flagP[0xea8] = 1;
            temp_3 = Car_DetectionSweep(&flagP[0x57e], &flagP[0xe8c], context_val, AI_CombatTarget_19(context_val));
            int32_t* i_4 = flagP[0x584];

            for (int32_t* i_1 = *i_4; i_1; i_1 = *i_1)
            {
                if (*(i_4 + 0x29))
                {
                    temp_3 = i_4[2];
                    void* data_34 = *temp_3;

                    if (data_34 && !AI_FireWeapon_19(data_34))
                    {
                        item_30 = 0x16;
                        int32_t item_28_3 = 0;
                        int32_t item_2c_3 = AI_CombatTarget_19(*i_4[2]);
                        int32_t item_18_1 = *i_4[2];
                        int32_t item_1c_1 = *i_4[2];
                        int32_t item_20_1 = DynObj_UpdateDynTree_4(*i_4[2]);
                        int32_t item_24_1 = 0;
                        temp_3 = AI_TakeCover(flagP, &item_30);
                    }
                }

                i_4 = i_1;
            }

            int32_t* i_5 = flagP[0x587];

            for (int32_t* i_2 = *i_5; i_2; i_2 = *i_2)
            {
                if (*(i_5 + 0x29))
                {
                    void* data_42 = *i_5[2];

                    if (data_42 && AI_FireWeapon_19(data_42))
                    {
                        item_30 = 0x17;
                        int32_t item_28_4 = 0;
                        int32_t item_2c_4 = AI_CombatTarget_19(*i_5[2]);
                        int32_t item_18_2 = *i_5[2];
                        int32_t item_1c_2 = *i_5[2];
                        int32_t item_20_2 = DynObj_UpdateDynTree_4(*i_5[2]);
                        int32_t item_24_2 = 0;
                        temp_3 = AI_TakeCover(flagP, &item_30);
                    }
                }

                i_5 = i_2;
            }

            int32_t data_48 = flagP[0xeb1];

            if (data_48 != 0xffffffff)
            {
                void* data_49 = Script_ExecuteLevelScript_4(data_48);

                if (!data_49)
                {
                    int32_t item_68_17 = flagP[0xeb1];
                    temp_3 = Warning_Show("AlarmControl ID #%d not defined");
                    flagP[0xeb1] = 0xffffffff;
                }
                else if (!Env_ActivateEntity(data_49))
                {
                    if (Env_InitLadder_2(data_49))
                        temp_3 = AI_UpdateOrders(flagP, 9, 0);
                }
                else
                {
                    temp_3 = AI_UpdateOrders(flagP, 8, 0);
                    item_51 = 1;
                }
            }

            int32_t data_52 = flagP[0xed8];

            if (data_52 >= 0 && flagP[0xed9])
            {
                int32_t data_55;

                if (data_52)
                    data_55 = data_52 - 1;
                else
                {
                    AI_UpdateOrders(flagP, 3, data_52);
                    uint32_t data_54;
                    data_54 = Sys_FreeMemory_14(Level_SetMission_5(), flagP[0xed7]);
                    data_55 = data_54 + flagP[0xed6];
                }

                flagP[0xed8] = data_55;
            }
        }

        int32_t* data_56 = flagP[0xeaa];

        if (data_56)
        {
            int32_t entity_26 = *data_56[3];

            if (!entity_26)
            {
                temp_3 = *(flagP + 0x3aba);
                AI_AlertAllies_2(data_56, flagP, temp_3);
                flagP[0xeaa] = 0;
            }
            else
            {
                data_56 = FX_ExplosionSpawn_14(&flagP[0x57e], entity_26);
                flagP[0xeab] = data_56;

                if (data_56)
                    item_51 = 1;
                else
                {
                    data_56 = *(flagP + 0x3aba);
                    AI_AlertAllies_2(flagP[0xeaa], flagP, data_56);
                    flagP[0xeaa] = 0;
                }
            }
        }

        *(flagP + 0x3abb) = item_51;
        void* data_58 = AI_AlertAllies(flagP);

        if (!data_58)
        {
            item_30 = 4;
            int32_t item_28_5 = 0;
            int32_t item_2c_5 = 0xffffffff;
            int32_t item_18_3 = 0;
            int32_t item_1c_3 = 0;
            int32_t item_20_3 = 0;
            void* item_24_3 = data_58;
            AI_TakeCover(flagP, &item_30);
        }

        int32_t item_68_24 = flagP[0x238];
        char* item_6c_14 = "Events: %d";
        int32_t item_70_10 = 0xffffffff;
        int32_t* item_74_4 = flagP;
    }
    else
    {
        void* source_1 = flagP[5];
        item_50 = 0xffffffff;
        void* item_4c_1 = &flagP[0xf1d];
        uint32_t data_14 = Script_ParseEnumReal32_15();
        int32_t temp_4 = 0;
        temp_4 = *(source_1 + 0x1c);
        int32_t data_15 = *(((data_14 * 0x180 + temp_4) << 2) + &g_a96ae0);

        if (data_15)
            data_15(source_1, &item_50);

        Env_WeaponNotInitialized(flagP);
        flagP[0xf45] = 1;
        int32_t item_28_1 = 0;
        int32_t item_2c_1 = 0;
        item_30 = 0;
        Camera_SetFieldOfView_33(&flagP[0x1bc], &item_30);
        HumanAI_EventDispatch(flagP, 0, 0xffffffff);
        Camera_ApplyHandiCam_33(&item_30);
    }
    Env_InitLadder_13(flagP);
    HumanAI_RunActions(flagP);

    if (AI_TakeCover_19(context_val))
    {
        void* source_5 = flagP[5];
        item_50 = 0xffffffff;
        void* item_4c_2 = &flagP[0xf1d];
        uint32_t data_62 = Script_ParseEnumReal32_15();
        int32_t entity_28 = 0;
        entity_28 = *(source_5 + 0x1c);
        int32_t data_66 = *(((data_62 * 0x180 + entity_28) << 2) + &g_a96ae0);

        if (data_66)
            data_66(source_5, &item_50);
    }

    void* result = AI_UpdateSensors_2(flagP);

    if (result)
    {
        result = AI_TakeCover_19(context_val);

        if (result)
        {
            result = *(context_val + 0x33c);

            if (result)
            {
                Env_UpdateCameraLens_13(flagP);
                void* data_67 = flagP[0xeac];

                if (data_67)
                {
                    AI_CombatTarget_5(data_67);
                    flagP[0xeac] = 0;
                }

                void* data_68 = flagP[0xead];

                if (data_68)
                {
                    AI_CombatTarget_5(data_68);
                    flagP[0xead] = 0;
                }

                int32_t* entity_29 = flagP[0xfa8];

                if (entity_29)
                {
                    int32_t data_69 = flagP[0xfa9];
                    AI_MoveToNode_4(entity_29, data_69, data_69);
                    flagP[0xfa8] = 0;
                }

                int32_t data_70 = flagP[0xf84];

                if (data_70 >= 0)
                {
                    result = data_70 - 1;
                    flagP[0xf84] = result;
                }
                else
                {
                    int16_t data_71 = FX_ExplosionSpawn_11();

                    if (*(*(context_val + 0x14) + 0x1c) != data_71 && *(context_val + 0x7c4) != 0xffffffff)
                        result = Frames_GetTaskCounter() - *(context_val + 0x7c4);

                    if (*(*(context_val + 0x14) + 0x1c) == data_71 || *(context_val + 0x7c4) == 0xffffffff
                        || result > 1)
                    {
                        context = Level_StartMission_4();
                        uint32_t data_75 = DynObj_LinkDynamicCube_12();
                        int32_t data_76 = 0;
                        data_76 = *(context_val + 0x1c);
                        result = *(((data_75 * 0x180 + data_76) << 2) + &g_a96ae0);

                        if (result)
                            return result(context_val, &context);
                    }
                }
            }
        }
    }

    return result;
}
