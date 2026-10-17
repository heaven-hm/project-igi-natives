// IGI native provenance: AI_ExpandRoute - 0x004518E0 - CFG score 97.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004518E0-AI_ExpandRoute.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_ExpandRoute.h"
int32_t* AI_ExpandRoute(void* context, int32_t param_2, double* param_3, char param_4)

{
label_4518f2:
    int32_t dest_2 = param_2;
    void* source_1 = *(context + 0x3b6c);
    int32_t item_12c_1 = 0xffffffff;
    int32_t i_1;
    int16_t idx;

    if (*(context + 0x3e30) != dest_2)
    {
        if (param_4)
        {
            int32_t* entity_1 = *(context + 0x3ea0);

            if (entity_1)
            {
                int32_t data_3 = *(context + 0x3ea4);
                AI_MoveToNode_4(entity_1, data_3, data_3);
                *(context + 0x3ea0) = 0;
            }

            int32_t* data_6;

            if (!param_3)
            {
                double item_20[0x3];
                Script_CallNativeHandler_23(&item_20, Script_ExecuteLevelScript_23(*(context + 0x3b6c), dest_2));
                data_6 =
                    AI_UpdateOrders_4(context + 0x3ea4, context + 0x3ea8, context + 0x3eb0, source_1, dest_2, &item_20);
            }
            else
                data_6 = AI_UpdateOrders_4(context + 0x3ea4, context + 0x3ea8, context + 0x3eb0, source_1, dest_2, param_3);

            *(context + 0x3ea0) = data_6;
        }

        int32_t data_10 = *(context + 0x3e2c);
        int32_t* item_128;
        double item_118;

        if (data_10 != 0xffffffff)
        {
            void* data_12 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), data_10);

            if (data_12)
            {
                int32_t item_140_5 = 0x3fd33333;

                if (!Script_FormatString_23(DynObj_UpdateDynTree_4(*(context + 0x14)), data_12, 4.17232506e-08.0f, 0))
                {
                    double item_68[0x3];
                    Script_CallNativeHandler_23(&item_68, data_12);
                    long double fp0_1 = Sys_DispatchOpcode_11(&item_68, DynObj_UpdateDynTree_4(*(context + 0x14)));
                    int32_t* i_2 = *(context + 0xe0);
                    item_118 = fp0_1;
                    idx = 0;
                    int32_t* i = *i_2;
                    item_12c_1 = *(context + 0x3e2c);

                    for (; i; i = *i)
                    {
                        if (i_2[9] != item_12c_1)
                        {
                            int32_t source_4 = i_2[9];

                            if (source_4 != 0xffffffff)
                            {
                                int32_t* data_18 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), source_4);
                                item_128 = data_18;

                                if (data_18)
                                {
                                    int32_t item_140_8 = 0x3fd33333;

                                    if (Script_FormatString_23(DynObj_UpdateDynTree_4(*(context + 0x14)), data_18,
                                            4.17232506e-08.0f, 0))
                                        item_12c_1 = source_4;
                                    else if (source_4 != dest_2)
                                    {
                                        void* data_25 = Physics_CheckHullCollision_8(*(context + 0x3b6c), source_4, dest_2);

                                        if (data_25)
                                        {
                                            long double fpu_val_7_3 = *(data_25 + 4);
                                            long double f4_1 = item_118;
                                            fpu_val_7_3 - f4_1;
                                            idx = 0;

                                            if (*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                item_12c_1 = source_4;
                                        }
                                        else
                                        {
                                            int32_t item_13c_9 = dest_2;
                                            int32_t item_140_11 = source_4;
                                            int32_t item_144_7 = dest_2;
                                            int32_t item_148_7 = item_12c_1;
                                            Warning_Show("ERROR IN ROUTENET: %d to %d or %d to %d");
                                        }
                                    }
                                    else
                                    {
                                        Script_CallNativeHandler_23(&item_68, item_128);
                                        long double fp0_2 =
                                            Sys_DispatchOpcode_11(&item_68, DynObj_UpdateDynTree_4(*(context + 0x14)));
                                        long double f3_1 = item_118;
                                        fp0_2 - f3_1;
                                        idx = 0;

                                        if (*(&((fp0_2 < f3_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fp0_2, f3_1) ? 1 : 0) << 0xa
                                                | (fp0_2 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            item_12c_1 = source_4;
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

        Env_UpdateCameraLens_13(context);
        *(context + 0x3e30) = dest_2;
        int32_t source_5;

        if (item_12c_1 != 0xffffffff)
        {
            int32_t* data_28 = AI_CheckHearing_3(context);
            int32_t* data_30 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), item_12c_1);
            item_128 = data_30;

            if (data_28)
            {
                double item_98;
                Script_CallNativeHandler_23(&item_98, data_30);
                int32_t data_31 = DynObj_UpdateDynTree_4(*(context + 0x14));
                long double fpu_val_7_4 = item_98;
                int32_t* temp_8 = item_128;
                double item_38;
                memcpy(&item_38, data_31, 0x18);
                double item_c8 = fpu_val_7_4 - item_38;
                double item_90;
                double item_30;
                double item_c0_1 = item_90 - item_30;
                idx = 0;
                int32_t item_b8_1 = 0;
                int32_t item_b4_1 = 0;
                AI_FireWeapon_3(&data_28[2], temp_8, &item_98, &item_c8, 0);
                source_5 = item_12c_1;
                data_28[8] = 0;
                data_28[9] = source_5;
                dest_2 = param_2;
                goto label_451c18;
            }
        }
        else
        {
            source_5 = *(context + 0x3e2c);
        label_451c18:

            if (source_5 != dest_2)
            {
                while (true)
                {
                    int32_t* data_38 = Physics_CheckHullCollision_8(source_1, source_5, dest_2);

                    if (!data_38)
                    {
                        int32_t item_13c_27 = dest_2;
                        int32_t item_140_26 = source_5;
                        int32_t item_144_17 = *(context + 0x3b68);
                        int32_t data_71 =
                            Warning_Show("Error in graph %d routenet, Node #%d to #%d");
                        data_71 = 0;
                        return data_71;
                    }

                    void* data_39 = Script_ExecuteLevelScript_23(source_1, source_5);
                    item_118 = data_39;
                    void* data_41 = Script_ExecuteLevelScript_23(source_1, *data_38);

                    if (!data_41)
                    {
                        int32_t item_13c_28 = *data_38;
                        int32_t item_140_27 = *(context + 0x3b68);
                        int32_t data_73 =
                            Warning_Show("Error in graph %d nodenet, Node #%d not found");
                        data_73 = 0;
                        return data_73;
                    }

                    if (*data_38 != param_2)
                    {
                        double item_e0;
                        Script_CallNativeHandler_23(&item_e0, data_39);
                        double item_b0;
                        Script_CallNativeHandler_23(&item_b0, data_41);
                        bool flag_2_1 = source_5 != *(context + 0x3e2c);
                        double item_f8 = item_b0 - item_e0;
                        double item_d8;
                        double item_a8;
                        double item_f0_1 = item_a8 - item_d8;
                        double item_d0;
                        double item_a0;
                        double item_e8_1 = item_a0 - item_d0;
                        idx = 0;

                        if (flag_2_1)
                        {
                            int32_t* data_61 = AI_CheckHearing_3(context);
                            item_128 = data_61;

                            if (!data_61)
                                break;

                            AI_FireWeapon_3(&data_61[2], data_39, &item_e0, &item_f8, 1);
                            int32_t* data_63 = item_128;
                            data_63[8] = 0;
                            data_63[9] = source_5;
                            int32_t data_64 = Physics_UpdateForces_8();

                            if (*(data_39 + 0x30) & data_64)
                            {
                                int32_t data_65 = Physics_UpdateForces_8();

                                if (*(data_41 + 0x30) & data_65)
                                    item_128[8] = 1;
                            }
                        }
                        else
                        {
                            int32_t item_140_22 = 0x3fd33333;

                            if (Script_FormatString_23(context + 0x20, data_39, 4.17232506e-08.0f, 0))
                            {
                                int32_t* data_56 = AI_CheckHearing_3(context);
                                item_128 = data_56;

                                if (!data_56)
                                    break;

                                AI_FireWeapon_3(&data_56[2], data_39, &item_e0, &item_f8, 1);
                                int32_t* data_58 = item_128;
                                data_58[8] = 0;
                                data_58[9] = source_5;
                                int32_t data_59 = Physics_UpdateForces_8();

                                if (*(data_39 + 0x30) & data_59)
                                {
                                    int32_t data_60 = Physics_UpdateForces_8();

                                    if (*(data_41 + 0x30) & data_60)
                                        item_128[8] = 1;
                                }
                            }
                        }

                        int32_t* data_66 = AI_CheckHearing_3(context);

                        if (!data_66)
                            break;

                        AI_FireWeapon_3(&data_66[2], data_41, &item_b0, &item_f8, 0);
                        data_66[8] = 0;
                        data_66[9] = *data_38;
                    }
                    else
                    {
                        bool item_121_1 = false;
                        double item_110;
                        Script_CallNativeHandler_23(&item_110, data_41);
                        double item_100;

                        if (param_3)
                        {
                            int32_t* data_43 = AI_CheckHearing_3(context);

                            if (!data_43)
                                break;

                            double item_50;
                            Script_CallNativeHandler_23(&item_50, data_39);
                            double item_80 = item_110 - item_50;
                            double item_108;
                            double item_48;
                            double item_78_1 = item_108 - item_48;
                            double item_40;
                            double item_70_1 = item_100 - item_40;
                            idx = 0;
                            AI_FireWeapon_3(&data_43[2], data_41, &item_110, &item_80, 0);
                            int32_t data_44 = Physics_UpdateForces_8();
                            int32_t data_45;

                            if (*(data_39 + 0x30) & data_44)
                                data_45 = Physics_UpdateForces_8();

                            if (!(*(data_39 + 0x30) & data_44) || !(*(data_41 + 0x30) & data_45))
                                data_43[8] = 0;
                            else
                                data_43[8] = 1;

                            int32_t item_140_20 = 0x3fd33333;
                            data_43[9] = *data_38;
                            item_121_1 = Script_FormatString_23(param_3, data_41, 4.17232506e-08.0f, 0);
                        }

                        int32_t* data_48 = AI_CheckHearing_3(context);
                        item_128 = data_48;

                        if (!data_48)
                            break;

                        data_48[8] = 0;

                        if (!item_121_1)
                        {
                            memcpy(&data_48[2], &item_110, 0x18);
                            int32_t data_49 = Physics_UpdateForces_8();

                            if (*(item_118 + 0x30) & data_49)
                            {
                                int32_t data_50 = Physics_UpdateForces_8();

                                if (*(data_41 + 0x30) & data_50)
                                    item_128[8] = 1;
                            }

                            item_128[9] = *data_38;
                        }
                        else
                        {
                            memcpy(&data_48[2], param_3, 0x18);
                            data_48[6] = item_100;
                            data_48[7] = *(&item_100 + 4);
                            data_48[9] = *data_38;
                        }
                    }

                    source_5 = *data_38;

                    if (source_5 == param_2)
                        goto label_4518f2;

                    dest_2 = param_2;
                }
            }
            else if (!param_3)
            {
                int32_t* data_35 = AI_CheckHearing_3(context);
                void* data_36 = Script_ExecuteLevelScript_23(*(context + 0x3b6c), dest_2);

                if (data_35)
                {
                    Script_CallNativeHandler_23(&data_35[2], data_36);
                    data_35[8] = 0;
                    data_35[9] = dest_2;
                    goto label_4518f2;
                }
            }
            else
            {
                int32_t* data_34 = AI_CheckHearing_3(context);

                if (data_34)
                {
                    memcpy(&data_34[2], param_3, 0x18);
                    data_34[8] = 0;
                    data_34[9] = param_2;
                    goto label_4518f2;
                }
            }
        }
        i_1 = Warning_Show("Not enough items in movement queue");
    label_45206c:
        i_1 = 0;
        return i_1;
    }

🚫🚫    while (true)
    {
        i_1 = AI_SteerHuman(context);
        idx += 2;

        while (i_1)
        {
            if (i_1 == 1)
                goto label_45206c;

            if (i_1 == 2)
            {
                int32_t* data_70 = Env_UpdateCameraLens_13(context);
                *(context + 0x3e30) = 0xffffffff;
                data_70 = 1;
                return data_70;
            }
        }
    }
}
