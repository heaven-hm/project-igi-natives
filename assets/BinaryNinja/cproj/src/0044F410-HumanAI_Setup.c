#include "gi_platform.h"
#include "0044F410-HumanAI_Setup.h"
void* HumanAI_Setup(int32_t a1)

{
    int32_t* flagP = a1;
    __builtin_memset(&flagP[0xf1d], 0, 0xa0);
    char v_51 = 0;
    a1 = DEBUG_KEYSENABLEINVALID(0x37);
    flagP[0xf30] = a1;
    float ctxB = flagP[5];
    float v_3c;
    float* valA1 = FX_ExplosionSpawn_16(&v_3c, ctxB, 0);
    float v_48 = *valA1;
    int32_t v_44 = valA1[1];
    float valA2 = valA1[2];
    flagP[8] = (*(int32_t*)(uintptr_t)(ctxB + 0x20));
    flagP[9] = (*(int32_t*)(uintptr_t)(ctxB + 0x24));
    flagP[0xa] = (*(int32_t*)(uintptr_t)(ctxB + 0x28));
    flagP[0xb] = (*(int32_t*)(uintptr_t)(ctxB + 0x2c));
    *(flagP + 0x30) = (*(int32_t*)(uintptr_t)(ctxB + 0x30)) - valA2;
    memcpy(&flagP[0x14], ctxB + 0x78, 0x28);
    AI_FireWeapon_23(&flagP[0xe], (*(int32_t*)(uintptr_t)(ctxB + 0x4ec)));
    int32_t* tmpD3 = &flagP[0x1e];
    AI_TakeCover_23(tmpD3, (*(int32_t*)(uintptr_t)(ctxB + 0x4ec)));
    AI_UpdateSensors_23((*(int32_t*)(uintptr_t)(ctxB + 0x4ec)), 0, 0);

    if (!flagP[0xf1c])
    {
        int32_t v_6c_1 = Script_EvaluateCondition_4(flagP);
        return Warning_Show("No AI script in HumanAI #%d");
    }

    if (!flagP[0xedb])
    {
        int32_t v_6c_2 = Script_EvaluateCondition_4(flagP);
        return Warning_Show("No AI graph in HumanAI #%d");
    }

    int32_t v_50;
    int32_t v_30;

    if (flagP[0xf45])
    {
        if (AI_UpdateSensors_2(flagP) && !*(flagP + 0x3aba))
        {
            int32_t* i_3 = flagP[0x23f];
            a1 = 0xffffffff;

            for (int32_t* i = *i_3; i; i = *i)
            {
                AI_CombatTarget_2(flagP, i_3);
                i_3 = i;
            }

            int32_t objC7 = flagP[0x237];
            int32_t valA19 = 0;

            if (objC7 > 0)
            {
                int32_t* tmpD5 = &flagP[0x207];

                do
                {
                    if (*tmpD5 == 2)
                        a1 = valA19;

                    valA19 += 1;
                    tmpD5 = &tmpD5[1];
                } while (valA19 < objC7);
            }

            int32_t v_28_2 = 2;
            int32_t v_2c_2 = 0;
            v_30 = 0;
            Camera_SetFieldOfView_33(&flagP[0x1c2], &v_30);
            HumanAI_EventDispatch(flagP, 2, a1);
            tmpD3 = Camera_ApplyHandiCam_33(&v_30);
            *(flagP + 0x3aba) = AI_UpdateSensors_2(flagP);
        }

        if (!AI_UpdateSensors_2(flagP))
        {
            int32_t valA24 = flagP[0x28];
            *(flagP + 0x3a30) = (*(int32_t*)(uintptr_t)(*(ctxB + 0x70) + 0x2ac)) + (*(int32_t*)(uintptr_t)(ctxB + 0x20));
            *(flagP + 0x3a38) = (*(int32_t*)(uintptr_t)(*(ctxB + 0x70) + 0x2b0)) + (*(int32_t*)(uintptr_t)(ctxB + 0x28));
            int32_t tmpD7 = flagP[0x2a];
            *(flagP + 0x3a40) = (*(int32_t*)(uintptr_t)(*(ctxB + 0x70) + 0x2b4)) + (*(int32_t*)(uintptr_t)(ctxB + 0x30));
            memcpy(&flagP[0xe92], (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + 0x2b8, 0x28);
            int32_t objC10 = flagP[0x29];
            flagP[0xe9c] = valA24;
            int32_t valA25 = flagP[0x2b];
            flagP[0xe9e] = tmpD7;
            int32_t tmpD8 = flagP[0x31];
            flagP[0xe9f] = valA25;
            int32_t valA26 = flagP[0x32];
            flagP[0xe9d] = objC10;
            int32_t objC11 = flagP[0x30];
            flagP[0xea4] = valA26;
            char valA27 = *(flagP + 0x3abb);
            flagP[0xea2] = objC11;
            int32_t objC12 = flagP[0x33];
            flagP[0xea3] = tmpD8;
            flagP[0xea5] = objC12;

            if (!valA27)
            {
                int32_t tmpD11 = flagP[0x34];
                int32_t objC14 = flagP[0x2d];
                flagP[0xea0] = flagP[0x2c];
                int32_t valA30 = flagP[0x35];
                flagP[0xea6] = tmpD11;
                flagP[0xea1] = objC14;
                flagP[0xea7] = valA30;
            }
            else
            {
                int32_t objC13 = flagP[0x36];
                int32_t valA28 = flagP[0x2f];
                flagP[0xea0] = flagP[0x2e];
                int32_t tmpD10 = flagP[0x37];
                flagP[0xea6] = objC13;
                flagP[0xea1] = valA28;
                flagP[0xea7] = tmpD10;
            }

            flagP[0xea8] = 1;
            tmpD3 = Car_DetectionSweep(&flagP[0x57e], &flagP[0xe8c], ctxB, AI_CombatTarget_19(ctxB));
            int32_t* i_4 = flagP[0x584];

            for (int32_t* i_1 = *i_4; i_1; i_1 = *i_1)
            {
                if (*(i_4 + 0x29))
                {
                    tmpD3 = i_4[2];
                    void* valA34 = *tmpD3;

                    if (valA34 && !AI_FireWeapon_19(valA34))
                    {
                        v_30 = 0x16;
                        int32_t v_28_3 = 0;
                        int32_t v_2c_3 = AI_CombatTarget_19(*i_4[2]);
                        int32_t v_18_1 = *i_4[2];
                        int32_t v_1c_1 = *i_4[2];
                        int32_t v_20_1 = DynObj_UpdateDynTree_4(*i_4[2]);
                        int32_t v_24_1 = 0;
                        tmpD3 = AI_TakeCover(flagP, &v_30);
                    }
                }

                i_4 = i_1;
            }

            int32_t* i_5 = flagP[0x587];

            for (int32_t* i_2 = *i_5; i_2; i_2 = *i_2)
            {
                if (*(i_5 + 0x29))
                {
                    void* valA42 = *i_5[2];

                    if (valA42 && AI_FireWeapon_19(valA42))
                    {
                        v_30 = 0x17;
                        int32_t v_28_4 = 0;
                        int32_t v_2c_4 = AI_CombatTarget_19(*i_5[2]);
                        int32_t v_18_2 = *i_5[2];
                        int32_t v_1c_2 = *i_5[2];
                        int32_t v_20_2 = DynObj_UpdateDynTree_4(*i_5[2]);
                        int32_t v_24_2 = 0;
                        tmpD3 = AI_TakeCover(flagP, &v_30);
                    }
                }

                i_5 = i_2;
            }

            int32_t valA48 = flagP[0xeb1];

            if (valA48 != 0xffffffff)
            {
                void* valA49 = Script_ExecuteLevelScript_4(valA48);

                if (!valA49)
                {
                    int32_t v_68_17 = flagP[0xeb1];
                    tmpD3 = Warning_Show("AlarmControl ID #%d not defined");
                    flagP[0xeb1] = 0xffffffff;
                }
                else if (!Env_ActivateEntity(valA49))
                {
                    if (Env_InitLadder_2(valA49))
                        tmpD3 = AI_UpdateOrders(flagP, 9, 0);
                }
                else
                {
                    tmpD3 = AI_UpdateOrders(flagP, 8, 0);
                    v_51 = 1;
                }
            }

            int32_t valA52 = flagP[0xed8];

            if (valA52 >= 0 && flagP[0xed9])
            {
                int32_t valA55;

                if (valA52)
                    valA55 = valA52 - 1;
                else
                {
                    AI_UpdateOrders(flagP, 3, valA52);
                    uint32_t valA54;
                    valA54 = Sys_FreeMemory_14(Level_SetMission_5(), flagP[0xed7]);
                    valA55 = valA54 + flagP[0xed6];
                }

                flagP[0xed8] = valA55;
            }
        }

        int32_t* valA56 = flagP[0xeaa];

        if (valA56)
        {
            int32_t objC26 = *valA56[3];

            if (!objC26)
            {
                tmpD3 = *(flagP + 0x3aba);
                AI_AlertAllies_2(valA56, flagP, tmpD3);
                flagP[0xeaa] = 0;
            }
            else
            {
                valA56 = FX_ExplosionSpawn_14(&flagP[0x57e], objC26);
                flagP[0xeab] = valA56;

                if (valA56)
                    v_51 = 1;
                else
                {
                    valA56 = *(flagP + 0x3aba);
                    AI_AlertAllies_2(flagP[0xeaa], flagP, valA56);
                    flagP[0xeaa] = 0;
                }
            }
        }

        *(flagP + 0x3abb) = v_51;
        void* valA58 = AI_AlertAllies(flagP);

        if (!valA58)
        {
            v_30 = 4;
            int32_t v_28_5 = 0;
            int32_t v_2c_5 = 0xffffffff;
            int32_t v_18_3 = 0;
            int32_t v_1c_3 = 0;
            int32_t v_20_3 = 0;
            void* v_24_3 = valA58;
            AI_TakeCover(flagP, &v_30);
        }

        int32_t v_68_24 = flagP[0x238];
        char* v_6c_14 = "Events: %d";
        int32_t v_70_10 = 0xffffffff;
        int32_t* v_74_4 = flagP;
    }
    else
    {
        void* srcS1 = flagP[5];
        v_50 = 0xffffffff;
        void* v_4c_1 = &flagP[0xf1d];
        uint32_t valA14 = Script_ParseEnumReal32_15();
        int32_t tmpD4 = 0;
        tmpD4 = *(srcS1 + 0x1c);
        int32_t valA15 = *(((valA14 * 0x180 + tmpD4) << 2) + &g_a96ae0);

        if (valA15)
            valA15(srcS1, &v_50);

        Env_WeaponNotInitialized(flagP);
        flagP[0xf45] = 1;
        int32_t v_28_1 = 0;
        int32_t v_2c_1 = 0;
        v_30 = 0;
        Camera_SetFieldOfView_33(&flagP[0x1bc], &v_30);
        HumanAI_EventDispatch(flagP, 0, 0xffffffff);
        Camera_ApplyHandiCam_33(&v_30);
    }
    Env_InitLadder_13(flagP);
    HumanAI_RunActions(flagP);

    if (AI_TakeCover_19(ctxB))
    {
        void* srcS5 = flagP[5];
        v_50 = 0xffffffff;
        void* v_4c_2 = &flagP[0xf1d];
        uint32_t valA62 = Script_ParseEnumReal32_15();
        int32_t objC28 = 0;
        objC28 = *(srcS5 + 0x1c);
        int32_t valA66 = *(((valA62 * 0x180 + objC28) << 2) + &g_a96ae0);

        if (valA66)
            valA66(srcS5, &v_50);
    }

    void* result = AI_UpdateSensors_2(flagP);

    if (result)
    {
        result = AI_TakeCover_19(ctxB);

        if (result)
        {
            result = (*(int32_t*)(uintptr_t)(ctxB + 0x33c));

            if (result)
            {
                Env_UpdateCameraLens_13(flagP);
                void* valA67 = flagP[0xeac];

                if (valA67)
                {
                    AI_CombatTarget_5(valA67);
                    flagP[0xeac] = 0;
                }

                void* valA68 = flagP[0xead];

                if (valA68)
                {
                    AI_CombatTarget_5(valA68);
                    flagP[0xead] = 0;
                }

                int32_t* objC29 = flagP[0xfa8];

                if (objC29)
                {
                    int32_t valA69 = flagP[0xfa9];
                    AI_MoveToNode_4(objC29, valA69, valA69);
                    flagP[0xfa8] = 0;
                }

                int32_t valA70 = flagP[0xf84];

                if (valA70 >= 0)
                {
                    result = valA70 - 1;
                    flagP[0xf84] = result;
                }
                else
                {
                    int16_t valA71 = FX_ExplosionSpawn_11();

                    if ((*(int32_t*)(uintptr_t)(*(ctxB + 0x14) + 0x1c)) != valA71 && (*(int32_t*)(uintptr_t)(ctxB + 0x7c4)) != 0xffffffff)
                        result = Frames_GetTaskCounter() - (*(int32_t*)(uintptr_t)(ctxB + 0x7c4));

                    if ((*(int32_t*)(uintptr_t)(*(ctxB + 0x14) + 0x1c)) == valA71 || (*(int32_t*)(uintptr_t)(ctxB + 0x7c4)) == 0xffffffff
                        || result > 1)
                    {
                        a1 = Level_StartMission_4();
                        uint32_t valA75 = DynObj_LinkDynamicCube_12();
                        int32_t valA76 = 0;
                        valA76 = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
                        result = *(((valA75 * 0x180 + valA76) << 2) + &g_a96ae0);

                        if (result)
                            return result(ctxB, &a1);
                    }
                }
            }
        }
    }

    return result;
}
