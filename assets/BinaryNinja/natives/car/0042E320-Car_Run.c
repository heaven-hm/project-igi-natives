#include "Car_Run.h"
uint32_t Car_Run(double* a1)

{
    uint32_t result = Frames_GetUpdateCounter();

    if (*(a1 + 0x924) != result)
    {
        result = Frames_GetUpdateCounter();
        *(a1 + 0x924) = result;
        result = *(a1 + 0x2ed5);

        if (!result)
        {
            char valA = Script_FormatString_6(&a1[0x139]);
            int64_t v_c;

            if (valA)
            {
                Script_SpawnNewTask_7(&a1[0x139], a1);
                long double fpu0;
                v_c = fpu0;
            }

            if (valA && !v_c)
            {
                int32_t* valA7 = a1[0xe9];

                if (valA7)
                {
                    QTask_FindType(valA7);
                    a1[0xe9] = 0;
                }
            }
            else if (!a1[0xe9])
            {
                void* valA3 = *(a1 + 0x1b4);

                if (valA3)
                {
                    struct status_msg* valA6 = SoundSys_SetMasterVolume_7(a1, *(valA3 + 0x2d4) + 0x262);

                    if (valA6)
                        a1[0xe9] = valA6;
                }
            }

🚫🚫            Menu_FormatScreen_22(a1);
🚫🚫            Menu_PlayMusic_22(a1);
            int32_t* i = a1[1];
            int32_t valA8;

            if (!*i || !i)
                valA8 = g_afa7e0;
            else
            {
                valA8 = g_afa7e0;

                do
                {
                    int32_t* srcS2 = *i;
                    void* objC4;

                    if (!srcS2)
                        objC4 = nullptr;
                    else
                    {
                        int32_t objC1 = *srcS2;
                        int32_t objC2 = -(objC1);
                        objC4 = (objC2 - objC2) & srcS2;
                    }

                    *((valA8 << 2) + &g_afa6e0) = objC4;
                    int32_t valA9 = valA8 + 1;
                    int32_t objC5 = 0;
                    g_afa7e0 = valA9;
                    objC5 = i[7];
                    int32_t objC6 = *((objC5 << 2) + &g_a970e0);

                    if (objC6)
                    {
                        objC6(i);
                        valA9 = g_afa7e0;
                    }

                    i = *((valA9 << 2) + &g_afa6dc);
                    valA8 = valA9 - 1;
                    g_afa7e0 = valA8;
                } while (i);
            }

            void* objC12 = a1[0x1d];

            if (objC12)
            {
                int32_t* i_1 = *(objC12 + 8);

                if (*i_1 && i_1)
                {
                    do
                    {
                        int32_t* srcS3 = *i_1;
                        void* objC10;

                        if (!srcS3)
                            objC10 = nullptr;
                        else
                        {
                            int32_t objC7 = *srcS3;
                            int32_t objC8 = -(objC7);
                            objC10 = (objC8 - objC8) & srcS3;
                        }

                        *((valA8 << 2) + &g_afa6e0) = objC10;
                        int32_t valA10 = valA8 + 1;
                        int32_t objC11 = 0;
                        g_afa7e0 = valA10;
                        objC11 = i_1[7];
                        objC12 = *((objC11 << 2) + &g_a970e0);

                        if (objC12)
                        {
                            objC12(i_1);
                            valA10 = g_afa7e0;
                        }

                        i_1 = *((valA10 << 2) + &g_afa6dc);
                        valA8 = valA10 - 1;
                        g_afa7e0 = valA8;
                    } while (i_1);
                }
            }

            if (!*(a1 + 0x2ecc))
            {
                void* objC14 = a1[0x1d];

                if (objC14)
                {
                    double* v_4_1 = a1;
                    v_c = &a1[4];
                    *(&v_c + 4) = &a1[0xe];
                    int32_t* i_2 = *(objC14 + 8);

                    if (*i_2 && i_2)
                    {
                        do
                        {
                            int32_t* tmpD3 = *i_2;
                            void* objC18;

                            if (!tmpD3)
                                objC18 = nullptr;
                            else
                            {
                                int32_t objC15 = *tmpD3;
                                int32_t objC16 = -(objC15);
                                objC18 = (objC16 - objC16) & tmpD3;
                            }

                            *((valA8 << 2) + &g_afa6e0) = objC18;
                            g_afa7e0 = valA8 + 1;
                            uint32_t valA13 = MagicObj_GetEventId();
                            int32_t objC19 = 0;
                            objC19 = i_2[7];
                            int32_t valA17 = *(((valA13 * 0x180 + objC19) << 2) + &g_a96ae0);

                            if (valA17)
                                valA17(i_2, &v_c);

                            valA8 = g_afa7e0 - 1;
                            g_afa7e0 = valA8;
                            i_2 = *((valA8 << 2) + &g_afa6e0);
                        } while (i_2);
                    }

                    int16_t valA19 = Weapon_EjectShell();

                    for (int32_t* i_3 = QTask_DeleteTask_2(a1[0x1d], valA19); i_3;
                        i_3 = QTask_TriggerEvent_2(i_3, Weapon_EjectShell()))
                    {
                        int32_t objC20 = 0;
                        objC20 = i_3[7];
                        (*((objC20 << 2) + &g_a970e0))(i_3);
                    }
                }
            }

            *(a1 + 0x2ecc) = 0;
            a1[0x5da] = 0;
            return Car_ExplosionTick(a1);
        }
    }

    return result;
}
