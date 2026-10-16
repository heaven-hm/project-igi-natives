#include "gi_platform.h"
#include "0040E9C0-HumanPlayer_HandleInput_7.h"
int32_t* HumanPlayer_HandleInput_7(void* a1, int32_t* a2)

{
    int32_t* dstD = a2;
    float valA = dstD[0x357];
    int32_t* tmpD;

    if (dstD[0x356] != valA)
        tmpD = HumanPlayer_CheckCollision_9(dstD, valA);

    void* valA1;
    int32_t objC1;
    valA1 = Table_GetAt(&dstD[0x131], 0);
    void* flagP = valA1;
    void* v_8 = flagP;
    void* valA2 = (*(int32_t*)(uintptr_t)(a1 + 8));
    int16_t valA3;
    valA3 = dstD[0x351];

    if (valA3)
    {
        Human_TaskViewReset(dstD[0x13b]);
        int32_t* valA4 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
        int32_t valA5 = *valA4;
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA5;
        return valA5(a1, dstD);
    }

    long double fpu7 = dstD[0x8e];
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = dstD[0x66];
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;

        if (*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            a2 = Table_GetAt(&dstD[0x131], 0);
            int32_t* valA9;
            valA9 = HumanPlayer_UpdateMotion_11(dstD, Weapon_FireBullet_8("WEAPON_ID_BINOCULARS"));

            if (valA9)
            {
                if (valA9 != a2)
                {
                    objC1 = Script_ExecuteLevelScript_12(&dstD[0x131], nullptr, valA9);
                    tmpD = a2;
                    dstD[0x379] = tmpD;
                }
                else
                {
                    int32_t valA10 = Script_SpawnNewTask_12();
                    int32_t tmpD2 = 0;
                    tmpD2 = valA9[7];
                    int32_t objC6;
                    int32_t tmpD3;
                    tmpD3 = ((int(*)())(uintptr_t)(*(((valA10 * 0x180 + tmpD2) << 2) + &g_a96ae0)))(valA9);
                    void* valA12 = dstD[0x379];
                    int32_t* valA13;
                    valA13 = HumanPlayer_LoadParameters_13(valA12, tmpD3, objC6, valA12);
                    objC1 = *valA13;
                    dstD[0x353] = objC1;
                    dstD[0x379] = 0;
                }

                dstD[0x72] = 0x3f800000;
            }

            flagP = v_8;
        }
    }

    int32_t result = dstD[0x379];

    if (!result)
    {
        if (flagP)
        {
            int32_t* valA14 = HumanPlayer_LoadParameters_13(result, tmpD, objC1, flagP);
            Script_ParseEnumReal32_13(flagP, &v_8);
            void* valA19;

            if (!(valA2 & 0x200))
            {
                if (valA2 & 0x400)
                {
                    int32_t valA38 = Weapon_FireBullet_8("WEAPON_ID_M16A2");

                    if (*valA14 != valA38)
                    {
                        int32_t valA45 = Weapon_FireBullet_8("WEAPON_ID_PROXIMITYMINE");

                        if (*valA14 == valA45)
                        {
                            (*(int32_t*)(uintptr_t)(dstD + 0x4d2)) = 1;
                            void* tmpD9 = (*(int32_t*)(uintptr_t)(a1 + 4));
                            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 8;
                            int32_t valA46 = *(tmpD9 + 0x20);
                            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA46;
                            return valA46(a1, dstD);
                        }
                    }
                    else
                    {
                        if (g_56e214)
                            goto label_40ecc1;

                        int32_t* valA44 = Weapon_UpdateMuzzleFlash_8(&dstD[0xd0], Weapon_FireBullet_8("AMMO_ID_M203"));

                        if (valA44)
                        {
                            int32_t objC15 = valA44[1];

                            if (objC15)
                            {
                                valA44[1] = objC15 - 1;
    label_40ecc1: ;
                                void* valA40 = (*(int32_t*)(uintptr_t)(a1 + 4));
                                (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                                (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 6;
                                int32_t valA41 = *(valA40 + 0x18);
                                (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA41;
                                return valA41(a1, dstD);
                            }
                        }
                    }
                }

                valA19 = v_8;
            }
            else
            {
                int32_t valA16 = valA14[0x184] - 3;

                if (valA16 > 4)
                {
    label_40ec48: ;
                    if (!v_8)
                    {
                        void* objC12 = (*(int32_t*)(uintptr_t)(a1 + 4));
                        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xc;
                        int32_t valA36 = *(objC12 + 0x30);
                        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA36;
                        return valA36(a1, dstD);
                    }

                    void* tmpD7 = (*(int32_t*)(uintptr_t)(a1 + 4));
                    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 2;
                    int32_t valA33 = *(tmpD7 + 8);
                    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA33;
                    return valA33(a1, dstD);
                }

                switch (valA16)
                {
                    case 0:
                    {
                        void* tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 4));
                        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 9;
                        int32_t valA17 = *(tmpD4 + 0x24);
                        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA17;
                        return valA17(a1, dstD);
                        break;
                    }
                    case 1:
                    {
                        valA19 = v_8;

                        if (valA19)
                        {
                            void* objC8 = (*(int32_t*)(uintptr_t)(a1 + 4));
                            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 7;
                            int32_t valA21 = *(objC8 + 0x1c);
                            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA21;
                            return valA21(a1, dstD);
                        }
                        break;
                    }
                    case 2:
                    {
                        goto label_40ec48;
                    }
                    case 3:
                    {
                        int32_t* valA24 = Weapon_UpdateMuzzleFlash_8(&dstD[0xd0], Weapon_FireBullet_8("AMMO_ID_MEDIPACK"));

                        if (valA24 && valA24[1])
                        {
                            long double x87_r7_2 = dstD[0x95];
                            long double f7_1 = 0.0f;
                            x87_r7_2 - f7_1;

                            if (!(*(&((x87_r7_2 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_2, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                                void* objC10 = (*(int32_t*)(uintptr_t)(a1 + 4));
                                (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                                (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xa;
                                int32_t valA27 = *(objC10 + 0x28);
                                (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA27;
                                return valA27(a1, dstD);
                            }
                        }

                        valA19 = v_8;
                        break;
                    }
                    case 4:
                    {
                        valA19 = v_8;

                        if (valA19)
                        {
                            void* valA29 = (*(int32_t*)(uintptr_t)(a1 + 4));
                            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 8;
                            int32_t valA30 = *(valA29 + 0x20);
                            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA30;
                            return valA30(a1, dstD);
                        }
                        break;
                    }
                }
            }

            int32_t v_4;

            if ((valA2 & 0x800 || !valA19) && (v_4 || g_56e214) && valA19 < valA14[0x192])
            {
                Human_TaskViewReset(dstD[0x13b]);
                void* tmpD10 = (*(int32_t*)(uintptr_t)(a1 + 4));
                (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 3;
                int32_t valA49 = *(tmpD10 + 0xc);
                (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA49;
                return valA49(a1, dstD);
            }

            long double x87_r7_3 = dstD[0x78];
            long double f6_1 = 0.0f;
            x87_r7_3 - f6_1;

            if (!(*(&((x87_r7_3 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_3, f6_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40) && dstD[0xbd] & 4)
            {
                Human_TaskViewReset(dstD[0x13b]);
                void* tmpD11 = (*(int32_t*)(uintptr_t)(a1 + 4));
                (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 5;
                int32_t valA53 = *(tmpD11 + 0x14);
                (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA53;
                return valA53(a1, dstD);
            }
        }

        if (dstD[0x353] != 0xffffffff)
        {
            Human_TaskViewReset(dstD[0x13b]);
            void* tmpD12 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 4;
            int32_t valA56 = *(tmpD12 + 0x10);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA56;
            return valA56(a1, dstD);
        }

        int16_t valA58;
        valA58 = (*(int32_t*)(uintptr_t)(dstD + 0x7b9));

        if (valA58)
        {
            long double x87_r7_4 = dstD[0x75];
            long double f2_1 = 0.0f;
            x87_r7_4 - f2_1;

            if (*(&((x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                (*(int32_t*)(uintptr_t)(dstD + 0x7b9)) = 0;
        }

        result = AI_CheckHearing_21(dstD);

        if (result)
        {
            result = (*(int32_t*)(uintptr_t)(dstD + 0x7b9));

            if (!result)
            {
                long double x87_r7_5 = dstD[0x75];
                long double f5_1 = 0.0f;
                x87_r7_5 - f5_1;
                result = (x87_r7_5 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                    a2 = nullptr;
                    int32_t objC24 = 0;
                    objC24 = (*(int32_t*)(uintptr_t)(AI_CheckHearing_21(dstD) + 0x1c));
                    uint32_t valA61 = Level_CheckQTaskID_2();
                    ((int(*)())(uintptr_t)(*(((objC24 + valA61 * 0x180) << 2) + &g_a96ae0)))(AI_CheckHearing_21(dstD), &a2);
                    Human_TaskViewReset(dstD[0x13b]);
                    return HumanPlayer_PlaySound_5(dstD, a2);
                }
            }
        }

        long double x87_r7_6 = dstD[0x8c];
        long double f3_1 = 0.0f;
        x87_r7_6 - f3_1;
        result = (x87_r7_6 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == f3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_7 = dstD[0x64];
            long double f4_1 = 0.0f;
            x87_r7_7 - f4_1;
            result = (x87_r7_7 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f4_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 0x40 && dstD[0xbd] & 4)
            {
                Human_TaskViewReset(dstD[0x13b]);
                void* tmpD16 = (*(int32_t*)(uintptr_t)(a1 + 4));
                (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
                (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xb;
                int32_t valA65 = *(tmpD16 + 0x2c);
                (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA65;
                return valA65(a1, dstD);
            }
        }
    }

    return result;
}
