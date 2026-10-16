#include "0040E9C0-HumanPlayer_HandleInput_7.h"
/* 0x0040e9c0 HumanPlayer_HandleInput_7 full linked: callers=0 callees=27 */
int32_t* HumanPlayer_HandleInput_7(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, int32_t a4, int32_t a5)

{
    int32_t player = a5;
    float mode = *(player + 0xd5c);

    if (*(player + 0xd58) != mode)
        HumanPlayer_CheckCollision_9(player, mode);

    void* a = Table_GetAt(player + 0x4c4, 0);
    void* a_1 = a;
    int32_t eax_1 = *(a4 + 8);
    int16_t eax_2;
    eax_2 = *(player + 0xd44);

    if (eax_2)
    {
        Human_TaskViewReset(*(player + 0x4ec));
        int32_t* eax_3 = *(a4 + 4);
        *(a4 + 0xc) = *(a4 + 0x10);
        *(a4 + 0x10) = 0;
        int32_t eax_4 = *eax_3;
        *(a4 + 0x14) = eax_4;
        return eax_4(a4, player);
    }

    long double x87_r7 = *(player + 0x238);
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_1 = *(player + 0x198);
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;

        if (*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            a5 = Table_GetAt(player + 0x4c4, 0);
            int32_t* eax_8 = HumanPlayer_UpdateMotion_11(a4, player, player,
                sub_47cda0("WEAPON_ID_BINOCULARS"));

            if (eax_8)
            {
                if (eax_8 != a5)
                {
                    sub_4f2070(player + 0x4c4, nullptr, eax_8);
                    *(player + 0xde4) = a5;
                }
                else
                {
                    int32_t eax_9 = sub_4f2030();
                    int32_t edx_2 = 0;
                    edx_2 = eax_8[7];
                    (*(((eax_9 * 0x180 + edx_2) << 2) + &g_a96ae0))(eax_8, a3, a2, a1);
                    *(player + 0xd4c) = HumanPlayer_LoadParameters_13(*(player + 0xde4))->c67c;
                    *(player + 0xde4) = 0;
                }

                *(player + 0x1c8) = 0x3f800000;
            }

            a = a_1;
        }
    }

    int32_t result = *(player + 0xde4);

    if (!result)
    {
        if (a)
        {
            struct collision_set* eax_13 = HumanPlayer_LoadParameters_13(a, a3, a2, a1);
            sub_4f23d0(a, &a_1);
            void* a_2;

            if (!(eax_1 & 0x200))
            {
                if (eax_1 & 0x400)
                {
                    int32_t eax_36 = sub_47cda0("WEAPON_ID_M16A2");

                    if (eax_13->c67c != eax_36)
                    {
                        int32_t eax_43 = sub_47cda0("WEAPON_ID_PROXIMITYMINE");

                        if (eax_13->c67c == eax_43)
                        {
                            *(player + 0x4d2) = 1;
                            void* edx_9 = *(a4 + 4);
                            *(a4 + 0xc) = *(a4 + 0x10);
                            *(a4 + 0x10) = 8;
                            int32_t eax_44 = *(edx_9 + 0x20);
                            *(a4 + 0x14) = eax_44;
                            return eax_44(a4, player);
                        }
                    }
                    else
                    {
                        if (g_56e214)
                            goto label_40ecc1;

                        int32_t* eax_42 = sub_47cee0(player + 0x340, sub_47cda0("AMMO_ID_M203"));

                        if (eax_42)
                        {
                            int32_t ecx_14 = eax_42[1];

                            if (ecx_14)
                            {
                                eax_42[1] = ecx_14 - 1;
                            label_40ecc1:
                                void* eax_38 = *(a4 + 4);
                                *(a4 + 0xc) = *(a4 + 0x10);
                                *(a4 + 0x10) = 6;
                                int32_t eax_39 = *(eax_38 + 0x18);
                                *(a4 + 0x14) = eax_39;
                                return eax_39(a4, player);
                            }
                        }
                    }
                }

                a_2 = a_1;
            }
            else
            {
                int32_t eax_15 = *(eax_13 + 0x610) - 3;

                if (eax_15 > 4)
                {
                label_40ec48:

                    if (!a_1)
                    {
                        void* ecx_11 = *(a4 + 4);
                        *(a4 + 0xc) = *(a4 + 0x10);
                        *(a4 + 0x10) = 0xc;
                        int32_t eax_34 = *(ecx_11 + 0x30);
                        *(a4 + 0x14) = eax_34;
                        return eax_34(a4, player);
                    }

                    void* edx_7 = *(a4 + 4);
                    *(a4 + 0xc) = *(a4 + 0x10);
                    *(a4 + 0x10) = 2;
                    int32_t eax_31 = *(edx_7 + 8);
                    *(a4 + 0x14) = eax_31;
                    return eax_31(a4, player);
                }

                switch (eax_15)
                {
                    case 0:
                    {
                        void* edx_4 = *(a4 + 4);
                        *(a4 + 0xc) = *(a4 + 0x10);
                        *(a4 + 0x10) = 9;
                        int32_t eax_16 = *(edx_4 + 0x24);
                        *(a4 + 0x14) = eax_16;
                        return eax_16(a4, player);
                        break;
                    }
                    case 1:
                    {
                        a_2 = a_1;

                        if (a_2)
                        {
                            void* ecx_7 = *(a4 + 4);
                            *(a4 + 0xc) = *(a4 + 0x10);
                            *(a4 + 0x10) = 7;
                            int32_t eax_19 = *(ecx_7 + 0x1c);
                            *(a4 + 0x14) = eax_19;
                            return eax_19(a4, player);
                        }
                        break;
                    }
                    case 2:
                    {
                        goto label_40ec48;
                    }
                    case 3:
                    {
                        int32_t* eax_22 =
                            sub_47cee0(player + 0x340, sub_47cda0("AMMO_ID_MEDIPACK"));

                        if (eax_22 && eax_22[1])
                        {
                            long double x87_r7_2 = *(player + 0x254);
                            long double temp7_1 = 0f;
                            x87_r7_2 - temp7_1;

                            if (!(*(&((x87_r7_2 < temp7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_2, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_2 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            {
                                void* ecx_9 = *(a4 + 4);
                                *(a4 + 0xc) = *(a4 + 0x10);
                                *(a4 + 0x10) = 0xa;
                                int32_t eax_25 = *(ecx_9 + 0x28);
                                *(a4 + 0x14) = eax_25;
                                return eax_25(a4, player);
                            }
                        }

                        a_2 = a_1;
                        break;
                    }
                    case 4:
                    {
                        a_2 = a_1;

                        if (a_2)
                        {
                            void* eax_27 = *(a4 + 4);
                            *(a4 + 0xc) = *(a4 + 0x10);
                            *(a4 + 0x10) = 8;
                            int32_t eax_28 = *(eax_27 + 0x20);
                            *(a4 + 0x14) = eax_28;
                            return eax_28(a4, player);
                        }
                        break;
                    }
                }
            }

            int32_t var_4;

            if ((eax_1 & 0x800 || !a_2) && (var_4 || g_56e214) && a_2 < *(eax_13 + 0x648))
            {
                Human_TaskViewReset(*(player + 0x4ec));
                void* edx_10 = *(a4 + 4);
                *(a4 + 0xc) = *(a4 + 0x10);
                *(a4 + 0x10) = 3;
                int32_t eax_47 = *(edx_10 + 0xc);
                *(a4 + 0x14) = eax_47;
                return eax_47(a4, player);
            }

            long double x87_r7_3 = *(player + 0x1e0);
            long double temp6_1 = 0f;
            x87_r7_3 - temp6_1;

            if (!(*(&((x87_r7_3 < temp6_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_3, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40) && *(player + 0x2f4) & 4)
            {
                Human_TaskViewReset(*(player + 0x4ec));
                void* edx_11 = *(a4 + 4);
                *(a4 + 0xc) = *(a4 + 0x10);
                *(a4 + 0x10) = 5;
                int32_t eax_51 = *(edx_11 + 0x14);
                *(a4 + 0x14) = eax_51;
                return eax_51(a4, player);
            }
        }

        if (*(player + 0xd4c) != 0xffffffff)
        {
            Human_TaskViewReset(*(player + 0x4ec));
            void* edx_12 = *(a4 + 4);
            *(a4 + 0xc) = *(a4 + 0x10);
            *(a4 + 0x10) = 4;
            int32_t eax_54 = *(edx_12 + 0x10);
            *(a4 + 0x14) = eax_54;
            return eax_54(a4, player);
        }

        int16_t eax_56;
        eax_56 = *(player + 0x7b9);

        if (eax_56)
        {
            long double x87_r7_4 = *(player + 0x1d4);
            long double temp2_1 = 0f;
            x87_r7_4 - temp2_1;

            if (*(&((x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(player + 0x7b9) = 0;
        }

        result = sub_463740(player);

        if (result)
        {
            result = *(player + 0x7b9);

            if (!result)
            {
                long double x87_r7_5 = *(player + 0x1d4);
                long double temp5_1 = 0f;
                x87_r7_5 - temp5_1;
                result = (x87_r7_5 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_5, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp5_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x40))
                {
                    a5 = 0;
                    int32_t ecx_23 = 0;
                    ecx_23 = *(sub_463740(player) + 0x1c);
                    uint32_t eax_59 = Level_CheckQTaskID_2();
                    (*(((ecx_23 + eax_59 * 0x180) << 2) + &g_a96ae0))(sub_463740(player), &a5,
                        a3, a2, a1);
                    Human_TaskViewReset(*(player + 0x4ec));
                    return HumanPlayer_PlaySound_5(player, a5);
                }
            }
        }

        long double x87_r7_6 = *(player + 0x230);
        long double temp3_1 = 0f;
        x87_r7_6 - temp3_1;
        result = (x87_r7_6 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            long double x87_r7_7 = *(player + 0x190);
            long double temp4_1 = 0f;
            x87_r7_7 - temp4_1;
            result = (x87_r7_7 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 0x40 && *(player + 0x2f4) & 4)
            {
                Human_TaskViewReset(*(player + 0x4ec));
                void* edx_16 = *(a4 + 4);
                *(a4 + 0xc) = *(a4 + 0x10);
                *(a4 + 0x10) = 0xb;
                int32_t eax_63 = *(edx_16 + 0x2c);
                *(a4 + 0x14) = eax_63;
                return eax_63(a4, player);
            }
        }
    }

    return result;
}
