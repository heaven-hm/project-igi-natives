#include "0042E320-Car_Run.h"
/* 0x0042e320 Car_Run full linked: callers=0 callees=14 */
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
            char eax = sub_4f16c0(&a1[0x139]);
            int64_t var_c;

            if (eax)
            {
                sub_4f16e0(&a1[0x139], a1);
                long double x87_r0;
                var_c = x87_r0;
            }

            if (eax && !var_c)
            {
                int32_t* eax_7 = a1[0xe9];

                if (eax_7)
                {
                    QTask_FindType(eax_7);
                    a1[0xe9] = 0;
                }
            }
            else if (!a1[0xe9])
            {
                void* eax_3 = *(a1 + 0x1b4);

                if (eax_3)
                {
                    struct status_msg* eax_6 = sub_4e6b00(a1, *(eax_3 + 0x2d4) + 0x262);

                    if (eax_6)
                        a1[0xe9] = eax_6;
                }
            }

🚫🚫            Menu_FormatScreen_22(a1);
🚫🚫            Menu_PlayMusic_22(a1);
            int32_t* i = a1[1];
            int32_t eax_8;

            if (!*i || !i)
                eax_8 = g_afa7e0;
            else
            {
                eax_8 = g_afa7e0;

                do
                {
                    int32_t* esi_2 = *i;
                    void* ecx_4;

                    if (!esi_2)
                        ecx_4 = nullptr;
                    else
                    {
                        int32_t ecx_1 = *esi_2;
                        int32_t ecx_2 = -(ecx_1);
                        ecx_4 = (ecx_2 - ecx_2) & esi_2;
                    }

                    *((eax_8 << 2) + &g_afa6e0) = ecx_4;
                    int32_t eax_9 = eax_8 + 1;
                    int32_t ecx_5 = 0;
                    g_afa7e0 = eax_9;
                    ecx_5 = i[7];
                    int32_t ecx_6 = *((ecx_5 << 2) + &g_a970e0);

                    if (ecx_6)
                    {
                        ecx_6(i);
                        eax_9 = g_afa7e0;
                    }

                    i = *((eax_9 << 2) + &g_afa6dc);
                    eax_8 = eax_9 - 1;
                    g_afa7e0 = eax_8;
                } while (i);
            }

            void* ecx_12 = a1[0x1d];

            if (ecx_12)
            {
                int32_t* i_1 = *(ecx_12 + 8);

                if (*i_1 && i_1)
                {
                    do
                    {
                        int32_t* esi_3 = *i_1;
                        void* ecx_10;

                        if (!esi_3)
                            ecx_10 = nullptr;
                        else
                        {
                            int32_t ecx_7 = *esi_3;
                            int32_t ecx_8 = -(ecx_7);
                            ecx_10 = (ecx_8 - ecx_8) & esi_3;
                        }

                        *((eax_8 << 2) + &g_afa6e0) = ecx_10;
                        int32_t eax_10 = eax_8 + 1;
                        int32_t ecx_11 = 0;
                        g_afa7e0 = eax_10;
                        ecx_11 = i_1[7];
                        ecx_12 = *((ecx_11 << 2) + &g_a970e0);

                        if (ecx_12)
                        {
                            ecx_12(i_1);
                            eax_10 = g_afa7e0;
                        }

                        i_1 = *((eax_10 << 2) + &g_afa6dc);
                        eax_8 = eax_10 - 1;
                        g_afa7e0 = eax_8;
                    } while (i_1);
                }
            }

            if (!*(a1 + 0x2ecc))
            {
                void* ecx_14 = a1[0x1d];

                if (ecx_14)
                {
                    double* var_4_1 = a1;
                    var_c = &a1[4];
                    *(&var_c + 4) = &a1[0xe];
                    int32_t* i_2 = *(ecx_14 + 8);

                    if (*i_2 && i_2)
                    {
                        do
                        {
                            int32_t* edx_3 = *i_2;
                            void* ecx_18;

                            if (!edx_3)
                                ecx_18 = nullptr;
                            else
                            {
                                int32_t ecx_15 = *edx_3;
                                int32_t ecx_16 = -(ecx_15);
                                ecx_18 = (ecx_16 - ecx_16) & edx_3;
                            }

                            *((eax_8 << 2) + &g_afa6e0) = ecx_18;
                            g_afa7e0 = eax_8 + 1;
                            uint32_t eax_13 = MagicObj_GetEventId();
                            int32_t ecx_19 = 0;
                            ecx_19 = i_2[7];
                            int32_t eax_17 = *(((eax_13 * 0x180 + ecx_19) << 2) + &g_a96ae0);

                            if (eax_17)
                                eax_17(i_2, &var_c);

                            eax_8 = g_afa7e0 - 1;
                            g_afa7e0 = eax_8;
                            i_2 = *((eax_8 << 2) + &g_afa6e0);
                        } while (i_2);
                    }

                    int16_t eax_19 = sub_470400();

                    for (int32_t* i_3 = QTask_DeleteTask_2(a1[0x1d], eax_19); i_3;
                        i_3 = QTask_TriggerEvent_2(i_3, sub_470400()))
                    {
                        int32_t ecx_20 = 0;
                        ecx_20 = i_3[7];
                        (*((ecx_20 << 2) + &g_a970e0))(i_3);
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
