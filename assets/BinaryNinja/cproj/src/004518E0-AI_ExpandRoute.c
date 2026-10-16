#include "gi_platform.h"
#include "004518E0-AI_ExpandRoute.h"
int32_t* AI_ExpandRoute(void* a1, int32_t a2, double* a3, char a4)

{
    label_4518f2: ;
    int32_t dstD2 = a2;
    void* srcS1 = (*(int32_t*)(uintptr_t)(a1 + 0x3b6c));
    int32_t v_12c_1 = 0xffffffff;
    int32_t i_1;
    int16_t idx;

    if ((*(int32_t*)(uintptr_t)(a1 + 0x3e30)) != dstD2)
    {
        if (a4)
        {
            int32_t* objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x3ea0));

            if (objC1)
            {
                int32_t valA3 = (*(int32_t*)(uintptr_t)(a1 + 0x3ea4));
                AI_MoveToNode_4(objC1, valA3, valA3);
                (*(int32_t*)(uintptr_t)(a1 + 0x3ea0)) = 0;
            }

            int32_t* valA6;

            if (!a3)
            {
                double v_20[0x3];
                Script_CallNativeHandler_23(&v_20, Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), dstD2));
                valA6 =
                    AI_UpdateOrders_4(a1 + 0x3ea4, a1 + 0x3ea8, a1 + 0x3eb0, srcS1, dstD2, &v_20);
            }
            else
                valA6 = AI_UpdateOrders_4(a1 + 0x3ea4, a1 + 0x3ea8, a1 + 0x3eb0, srcS1, dstD2, a3);

            (*(int32_t*)(uintptr_t)(a1 + 0x3ea0)) = valA6;
        }

        int32_t valA10 = (*(int32_t*)(uintptr_t)(a1 + 0x3e2c));
        int32_t* v_128;
        double v_118;

        if (valA10 != 0xffffffff)
        {
            void* valA12 = Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), valA10);

            if (valA12)
            {
                int32_t v_140_5 = 0x3fd33333;

                if (!Script_FormatString_23(DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a1 + 0x14))), valA12, 4.17232506e-08.0f, 0))
                {
                    double v_68[0x3];
                    Script_CallNativeHandler_23(&v_68, valA12);
                    long double fp0_1 = Sys_DispatchOpcode_11(&v_68, DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a1 + 0x14))));
                    int32_t* i_2 = (*(int32_t*)(uintptr_t)(a1 + 0xe0));
                    v_118 = fp0_1;
                    idx = 0;
                    int32_t* i = *i_2;
                    v_12c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x3e2c));

                    for (; i; i = *i)
                    {
                        if (i_2[9] != v_12c_1)
                        {
                            int32_t srcS4 = i_2[9];

                            if (srcS4 != 0xffffffff)
                            {
                                int32_t* valA18 = Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), srcS4);
                                v_128 = valA18;

                                if (valA18)
                                {
                                    int32_t v_140_8 = 0x3fd33333;

                                    if (Script_FormatString_23(DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a1 + 0x14))), valA18,
                                            4.17232506e-08.0f, 0))
                                        v_12c_1 = srcS4;
                                    else if (srcS4 != dstD2)
                                    {
                                        void* valA25 = Physics_CheckHullCollision_8((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), srcS4, dstD2);

                                        if (valA25)
                                        {
                                            long double x87_r7_3 = *(valA25 + 4);
                                            long double f4_1 = v_118;
                                            x87_r7_3 - f4_1;
                                            idx = 0;

                                            if (*(&((x87_r7_3 < f4_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_3, f4_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                v_12c_1 = srcS4;
                                        }
                                        else
                                        {
                                            int32_t v_13c_9 = dstD2;
                                            int32_t v_140_11 = srcS4;
                                            int32_t v_144_7 = dstD2;
                                            int32_t v_148_7 = v_12c_1;
                                            Warning_Show("ERROR IN ROUTENET: %d to %d or %d to %d");
                                        }
                                    }
                                    else
                                    {
                                        Script_CallNativeHandler_23(&v_68, v_128);
                                        long double fp0_2 =
                                            Sys_DispatchOpcode_11(&v_68, DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a1 + 0x14))));
                                        long double f3_1 = v_118;
                                        fp0_2 - f3_1;
                                        idx = 0;

                                        if (*(&((fp0_2 < f3_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fp0_2, f3_1) ? 1 : 0) << 0xa
                                                | (fp0_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            v_12c_1 = srcS4;
                                    }
                                }
                            }

                            break;
                        }

                        i_2 = i;
                    }
                }
            }
        }

        Env_UpdateCameraLens_13(a1);
        (*(int32_t*)(uintptr_t)(a1 + 0x3e30)) = dstD2;
        int32_t srcS5;

        if (v_12c_1 != 0xffffffff)
        {
            int32_t* valA28 = AI_CheckHearing_3(a1);
            int32_t* valA30 = Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), v_12c_1);
            v_128 = valA30;

            if (valA28)
            {
                double v_98;
                Script_CallNativeHandler_23(&v_98, valA30);
                int32_t valA31 = DynObj_UpdateDynTree_4((*(int32_t*)(uintptr_t)(a1 + 0x14)));
                long double x87_r7_4 = v_98;
                int32_t* tmpD8 = v_128;
                double v_38;
                memcpy(&v_38, valA31, 0x18);
                double v_c8 = x87_r7_4 - v_38;
                double v_90;
                double v_30;
                double v_c0_1 = v_90 - v_30;
                idx = 0;
                int32_t v_b8_1 = 0;
                int32_t v_b4_1 = 0;
                AI_FireWeapon_3(&valA28[2], tmpD8, &v_98, &v_c8, 0);
                srcS5 = v_12c_1;
                valA28[8] = 0;
                valA28[9] = srcS5;
                dstD2 = a2;
                goto label_451c18;
            }
        }
        else
        {
            srcS5 = (*(int32_t*)(uintptr_t)(a1 + 0x3e2c));
    label_451c18: ;
            if (srcS5 != dstD2)
            {
                while (true)
                {
                    int32_t* valA38 = Physics_CheckHullCollision_8(srcS1, srcS5, dstD2);

                    if (!valA38)
                    {
                        int32_t v_13c_27 = dstD2;
                        int32_t v_140_26 = srcS5;
                        int32_t v_144_17 = (*(int32_t*)(uintptr_t)(a1 + 0x3b68));
                        int32_t valA71 =
                            Warning_Show("Error in graph %d routenet, Node #%d to #%d");
                        valA71 = 0;
                        return valA71;
                    }

                    void* valA39 = Script_ExecuteLevelScript_23(srcS1, srcS5);
                    v_118 = valA39;
                    void* valA41 = Script_ExecuteLevelScript_23(srcS1, *valA38);

                    if (!valA41)
                    {
                        int32_t v_13c_28 = *valA38;
                        int32_t v_140_27 = (*(int32_t*)(uintptr_t)(a1 + 0x3b68));
                        int32_t valA73 =
                            Warning_Show("Error in graph %d nodenet, Node #%d not found");
                        valA73 = 0;
                        return valA73;
                    }

                    if (*valA38 != a2)
                    {
                        double v_e0;
                        Script_CallNativeHandler_23(&v_e0, valA39);
                        double v_b0;
                        Script_CallNativeHandler_23(&v_b0, valA41);
                        bool cond_2_1 = srcS5 != (*(int32_t*)(uintptr_t)(a1 + 0x3e2c));
                        double v_f8 = v_b0 - v_e0;
                        double v_d8;
                        double v_a8;
                        double v_f0_1 = v_a8 - v_d8;
                        double v_d0;
                        double v_a0;
                        double v_e8_1 = v_a0 - v_d0;
                        idx = 0;

                        if (cond_2_1)
                        {
                            int32_t* valA61 = AI_CheckHearing_3(a1);
                            v_128 = valA61;

                            if (!valA61)
                                break;

                            AI_FireWeapon_3(&valA61[2], valA39, &v_e0, &v_f8, 1);
                            int32_t* valA63 = v_128;
                            valA63[8] = 0;
                            valA63[9] = srcS5;
                            int32_t valA64 = Physics_UpdateForces_8();

                            if (*(valA39 + 0x30) & valA64)
                            {
                                int32_t valA65 = Physics_UpdateForces_8();

                                if (*(valA41 + 0x30) & valA65)
                                    v_128[8] = 1;
                            }
                        }
                        else
                        {
                            int32_t v_140_22 = 0x3fd33333;

                            if (Script_FormatString_23(a1 + 0x20, valA39, 4.17232506e-08.0f, 0))
                            {
                                int32_t* valA56 = AI_CheckHearing_3(a1);
                                v_128 = valA56;

                                if (!valA56)
                                    break;

                                AI_FireWeapon_3(&valA56[2], valA39, &v_e0, &v_f8, 1);
                                int32_t* valA58 = v_128;
                                valA58[8] = 0;
                                valA58[9] = srcS5;
                                int32_t valA59 = Physics_UpdateForces_8();

                                if (*(valA39 + 0x30) & valA59)
                                {
                                    int32_t valA60 = Physics_UpdateForces_8();

                                    if (*(valA41 + 0x30) & valA60)
                                        v_128[8] = 1;
                                }
                            }
                        }

                        int32_t* valA66 = AI_CheckHearing_3(a1);

                        if (!valA66)
                            break;

                        AI_FireWeapon_3(&valA66[2], valA41, &v_b0, &v_f8, 0);
                        valA66[8] = 0;
                        valA66[9] = *valA38;
                    }
                    else
                    {
                        bool v_121_1 = false;
                        double v_110;
                        Script_CallNativeHandler_23(&v_110, valA41);
                        double v_100;

                        if (a3)
                        {
                            int32_t* valA43 = AI_CheckHearing_3(a1);

                            if (!valA43)
                                break;

                            double v_50;
                            Script_CallNativeHandler_23(&v_50, valA39);
                            double v_80 = v_110 - v_50;
                            double v_108;
                            double v_48;
                            double v_78_1 = v_108 - v_48;
                            double v_40;
                            double v_70_1 = v_100 - v_40;
                            idx = 0;
                            AI_FireWeapon_3(&valA43[2], valA41, &v_110, &v_80, 0);
                            int32_t valA44 = Physics_UpdateForces_8();
                            int32_t valA45;

                            if (*(valA39 + 0x30) & valA44)
                                valA45 = Physics_UpdateForces_8();

                            if (!(*(valA39 + 0x30) & valA44) || !(*(valA41 + 0x30) & valA45))
                                valA43[8] = 0;
                            else
                                valA43[8] = 1;

                            int32_t v_140_20 = 0x3fd33333;
                            valA43[9] = *valA38;
                            v_121_1 = Script_FormatString_23(a3, valA41, 4.17232506e-08.0f, 0);
                        }

                        int32_t* valA48 = AI_CheckHearing_3(a1);
                        v_128 = valA48;

                        if (!valA48)
                            break;

                        valA48[8] = 0;

                        if (!v_121_1)
                        {
                            memcpy(&valA48[2], &v_110, 0x18);
                            int32_t valA49 = Physics_UpdateForces_8();

                            if (*(v_118 + 0x30) & valA49)
                            {
                                int32_t valA50 = Physics_UpdateForces_8();

                                if (*(valA41 + 0x30) & valA50)
                                    v_128[8] = 1;
                            }

                            v_128[9] = *valA38;
                        }
                        else
                        {
                            memcpy(&valA48[2], a3, 0x18);
                            valA48[6] = v_100;
                            valA48[7] = *(&v_100 + 4);
                            valA48[9] = *valA38;
                        }
                    }

                    srcS5 = *valA38;

                    if (srcS5 == a2)
                        goto label_4518f2;

                    dstD2 = a2;
                }
            }
            else if (!a3)
            {
                int32_t* valA35 = AI_CheckHearing_3(a1);
                void* valA36 = Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x3b6c)), dstD2);

                if (valA35)
                {
                    Script_CallNativeHandler_23(&valA35[2], valA36);
                    valA35[8] = 0;
                    valA35[9] = dstD2;
                    goto label_4518f2;
                }
            }
            else
            {
                int32_t* valA34 = AI_CheckHearing_3(a1);

                if (valA34)
                {
                    memcpy(&valA34[2], a3, 0x18);
                    valA34[8] = 0;
                    valA34[9] = a2;
                    goto label_4518f2;
                }
            }
        }
        i_1 = Warning_Show("Not enough items in movement queue");
    label_45206c: ;
        i_1 = 0;
        return i_1;
    }

🚫🚫    while (true)
    {
        i_1 = AI_SteerHuman(a1);
        idx += 2;

        while (i_1)
        {
            if (i_1 == 1)
                goto label_45206c;

            if (i_1 == 2)
            {
                int32_t* valA70 = Env_UpdateCameraLens_13(a1);
                (*(int32_t*)(uintptr_t)(a1 + 0x3e30)) = 0xffffffff;
                valA70 = 1;
                return valA70;
            }
        }
    }
}
