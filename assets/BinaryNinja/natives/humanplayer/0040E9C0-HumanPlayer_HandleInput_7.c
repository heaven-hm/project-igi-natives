// Original IGI.EXE function: HumanPlayer_HandleInput_7 (VA 0x0040E9C0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_HandleInput_7.h"
int32_t* HumanPlayer_HandleInput_7(void* context, int32_t* param_2)

{
    int32_t* dest_val = param_2;
    float data_val = dest_val[0x357];
    int32_t* temp_val;

    if (dest_val[0x356] != data_val)
        temp_val = HumanPlayer_CheckCollision_9(dest_val, data_val);

    void* data_1;
    int32_t entity_1;
    data_1 = Table_GetAt(&dest_val[0x131], 0);
    void* flagP = data_1;
    void* item_8 = flagP;
    void* data_2 = *(context + 8);
    int16_t data_3;
    data_3 = dest_val[0x351];

    if (data_3)
    {
        Human_TaskViewReset(dest_val[0x13b]);
        int32_t* data_4 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0;
        int32_t data_5 = *data_4;
        *(context + 0x14) = data_5;
        return data_5(context, dest_val);
    }

    long double fpu7 = dest_val[0x8e];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_1 = dest_val[0x66];
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            param_2 = Table_GetAt(&dest_val[0x131], 0);
            int32_t* data_9;
            data_9 = HumanPlayer_UpdateMotion_11(dest_val, Weapon_FireBullet_8("WEAPON_ID_BINOCULARS"));

            if (data_9)
            {
                if (data_9 != param_2)
                {
                    entity_1 = Script_ExecuteLevelScript_12(&dest_val[0x131], nullptr, data_9);
                    temp_val = param_2;
                    dest_val[0x379] = temp_val;
                }
                else
                {
                    int32_t data_10 = Script_SpawnNewTask_12();
                    int32_t temp_2 = 0;
                    temp_2 = data_9[7];
                    int32_t entity_6;
                    int32_t temp_3;
                    temp_3 = (*(((data_10 * 0x180 + temp_2) << 2) + &g_a96ae0))(data_9);
                    void* data_12 = dest_val[0x379];
                    int32_t* data_13;
                    data_13 = HumanPlayer_LoadParameters_13(data_12, temp_3, entity_6, data_12);
                    entity_1 = *data_13;
                    dest_val[0x353] = entity_1;
                    dest_val[0x379] = 0;
                }

                dest_val[0x72] = 0x3f800000;
            }

            flagP = item_8;
        }
    }

    int32_t result = dest_val[0x379];

    if (!result)
    {
        if (flagP)
        {
            int32_t* data_14 = HumanPlayer_LoadParameters_13(result, temp_val, entity_1, flagP);
            Script_ParseEnumReal32_13(flagP, &item_8);
            void* data_19;

            if (!(data_2 & 0x200))
            {
                if (data_2 & 0x400)
                {
                    int32_t data_38 = Weapon_FireBullet_8("WEAPON_ID_M16A2");

                    if (*data_14 != data_38)
                    {
                        int32_t data_45 = Weapon_FireBullet_8("WEAPON_ID_PROXIMITYMINE");

                        if (*data_14 == data_45)
                        {
                            *(dest_val + 0x4d2) = 1;
                            void* temp_9 = *(context + 4);
                            *(context + 0xc) = *(context + 0x10);
                            *(context + 0x10) = 8;
                            int32_t data_46 = *(temp_9 + 0x20);
                            *(context + 0x14) = data_46;
                            return data_46(context, dest_val);
                        }
                    }
                    else
                    {
                        if (g_56e214)
                            goto label_40ecc1;

                        int32_t* data_44 = Weapon_UpdateMuzzleFlash_8(&dest_val[0xd0], Weapon_FireBullet_8("AMMO_ID_M203"));

                        if (data_44)
                        {
                            int32_t entity_15 = data_44[1];

                            if (entity_15)
                            {
                                data_44[1] = entity_15 - 1;
                            label_40ecc1:
                                void* data_40 = *(context + 4);
                                *(context + 0xc) = *(context + 0x10);
                                *(context + 0x10) = 6;
                                int32_t data_41 = *(data_40 + 0x18);
                                *(context + 0x14) = data_41;
                                return data_41(context, dest_val);
                            }
                        }
                    }
                }

                data_19 = item_8;
            }
            else
            {
                int32_t data_16 = data_14[0x184] - 3;

                if (data_16 > 4)
                {
                label_40ec48:

                    if (!item_8)
                    {
                        void* entity_12 = *(context + 4);
                        *(context + 0xc) = *(context + 0x10);
                        *(context + 0x10) = 0xc;
                        int32_t data_36 = *(entity_12 + 0x30);
                        *(context + 0x14) = data_36;
                        return data_36(context, dest_val);
                    }

                    void* temp_7 = *(context + 4);
                    *(context + 0xc) = *(context + 0x10);
                    *(context + 0x10) = 2;
                    int32_t data_33 = *(temp_7 + 8);
                    *(context + 0x14) = data_33;
                    return data_33(context, dest_val);
                }

                switch (data_16)
                {
                    case 0:
                    {
                        void* temp_4 = *(context + 4);
                        *(context + 0xc) = *(context + 0x10);
                        *(context + 0x10) = 9;
                        int32_t data_17 = *(temp_4 + 0x24);
                        *(context + 0x14) = data_17;
                        return data_17(context, dest_val);
                        break;
                    }
                    case 1:
                    {
                        data_19 = item_8;

                        if (data_19)
                        {
                            void* entity_8 = *(context + 4);
                            *(context + 0xc) = *(context + 0x10);
                            *(context + 0x10) = 7;
                            int32_t data_21 = *(entity_8 + 0x1c);
                            *(context + 0x14) = data_21;
                            return data_21(context, dest_val);
                        }
                        break;
                    }
                    case 2:
                    {
                        goto label_40ec48;
                    }
                    case 3:
                    {
                        int32_t* data_24 = Weapon_UpdateMuzzleFlash_8(&dest_val[0xd0], Weapon_FireBullet_8("AMMO_ID_MEDIPACK"));

                        if (data_24 && data_24[1])
                        {
                            long double fpu_val_7_2 = dest_val[0x95];
                            long double f7_1 = 0.0f;
                            fpu_val_7_2 - f7_1;

                            if (!(*(&((fpu_val_7_2 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_2, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_2 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                                void* entity_10 = *(context + 4);
                                *(context + 0xc) = *(context + 0x10);
                                *(context + 0x10) = 0xa;
                                int32_t data_27 = *(entity_10 + 0x28);
                                *(context + 0x14) = data_27;
                                return data_27(context, dest_val);
                            }
                        }

                        data_19 = item_8;
                        break;
                    }
                    case 4:
                    {
                        data_19 = item_8;

                        if (data_19)
                        {
                            void* data_29 = *(context + 4);
                            *(context + 0xc) = *(context + 0x10);
                            *(context + 0x10) = 8;
                            int32_t data_30 = *(data_29 + 0x20);
                            *(context + 0x14) = data_30;
                            return data_30(context, dest_val);
                        }
                        break;
                    }
                }
            }

            int32_t item_4;

            if ((data_2 & 0x800 || !data_19) && (item_4 || g_56e214) && data_19 < data_14[0x192])
            {
                Human_TaskViewReset(dest_val[0x13b]);
                void* temp_10 = *(context + 4);
                *(context + 0xc) = *(context + 0x10);
                *(context + 0x10) = 3;
                int32_t data_49 = *(temp_10 + 0xc);
                *(context + 0x14) = data_49;
                return data_49(context, dest_val);
            }

            long double fpu_val_7_3 = dest_val[0x78];
            long double f6_1 = 0.0f;
            fpu_val_7_3 - f6_1;

            if (!(*(&((fpu_val_7_3 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_3, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) && dest_val[0xbd] & 4)
            {
                Human_TaskViewReset(dest_val[0x13b]);
                void* temp_11 = *(context + 4);
                *(context + 0xc) = *(context + 0x10);
                *(context + 0x10) = 5;
                int32_t data_53 = *(temp_11 + 0x14);
                *(context + 0x14) = data_53;
                return data_53(context, dest_val);
            }
        }

        if (dest_val[0x353] != 0xffffffff)
        {
            Human_TaskViewReset(dest_val[0x13b]);
            void* temp_12 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 4;
            int32_t data_56 = *(temp_12 + 0x10);
            *(context + 0x14) = data_56;
            return data_56(context, dest_val);
        }

        int16_t data_58;
        data_58 = *(dest_val + 0x7b9);

        if (data_58)
        {
            long double fpu_val_7_4 = dest_val[0x75];
            long double f2_1 = 0.0f;
            fpu_val_7_4 - f2_1;

            if (*(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(dest_val + 0x7b9) = 0;
        }

        result = AI_CheckHearing_21(dest_val);

        if (result)
        {
            result = *(dest_val + 0x7b9);

            if (!result)
            {
                long double fpu_val_7_5 = dest_val[0x75];
                long double f5_1 = 0.0f;
                fpu_val_7_5 - f5_1;
                result = (fpu_val_7_5 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                    param_2 = nullptr;
                    int32_t entity_24 = 0;
                    entity_24 = *(AI_CheckHearing_21(dest_val) + 0x1c);
                    uint32_t data_61 = Level_CheckQTaskID_2();
                    (*(((entity_24 + data_61 * 0x180) << 2) + &g_a96ae0))(AI_CheckHearing_21(dest_val), &param_2);
                    Human_TaskViewReset(dest_val[0x13b]);
                    return HumanPlayer_PlaySound_5(dest_val, param_2);
                }
            }
        }

        long double fpu_val_7_6 = dest_val[0x8c];
        long double f3_1 = 0.0f;
        fpu_val_7_6 - f3_1;
        result = (fpu_val_7_6 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double fpu_val_7_7 = dest_val[0x64];
            long double f4_1 = 0.0f;
            fpu_val_7_7 - f4_1;
            result = (fpu_val_7_7 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f4_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 0x40 && dest_val[0xbd] & 4)
            {
                Human_TaskViewReset(dest_val[0x13b]);
                void* temp_16 = *(context + 4);
                *(context + 0xc) = *(context + 0x10);
                *(context + 0x10) = 0xb;
                int32_t data_65 = *(temp_16 + 0x2c);
                *(context + 0x14) = data_65;
                return data_65(context, dest_val);
            }
        }
    }

    return result;
}
