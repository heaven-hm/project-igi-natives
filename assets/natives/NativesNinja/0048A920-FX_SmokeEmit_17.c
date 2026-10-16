#include "0048A920-FX_SmokeEmit_17.h"
/* 0x0048a920 FX_SmokeEmit_17 full linked: callers=11 callees=14 */
int32_t* sub_48a920(void* a1, void* a2)

{
    int32_t* esi = a1;
    void* eax = esi[5];
    esi[0xf79] = 0;
    int32_t* result = esi[0xeaa];

    if (result)
    {
        result = sub_451350(esi);
        int32_t* result_1 = result;

        if (result_1)
        {
            result = *result_1[2];

            if (result)
            {
                result = sub_463170(result);

                if (!result)
                {
                    if (*(result_1 + 0x29))
                    {
                        sub_451380(esi[0xeaa] + 0x110, esi);

                        if (!*(a2 + 0x21))
                        {
                            int16_t eax_4 = HumanPlayer_LoadParameters_12();

                            if (*(*result_1[2] + 0x1c) == eax_4)
                            {
                                int32_t eax_6;

                                if (g_5416cc != 0xffffffff)
                                    eax_6 = Frames_GetUpdateCounter() - g_5416cc;

                                if (g_5416cc == 0xffffffff || eax_6 > 0x5a)
                                {
                                    sub_4e6b00(eax,
                                        (&g_5416d0)[sub_4b47c0(Level_SetMission_5(), 6)]);
                                    g_5416cc = Frames_GetUpdateCounter();
                                }

                                *(a2 + 0x21) = 1;
                            }
                        }
                    }
                    else if (esi[0x224] || esi[0x229] || esi[0x22a] || esi[0x22b] || esi[0x22c]
                            || esi[0x22d] || esi[0x22f] || esi[0x231] || esi[0x233] || esi[0x22e])
                        sub_451380(esi[0xeaa] + 0x110, esi);

                    int32_t* eax_21 = sub_453200(esi);

                    if (!eax_21)
                        esi[0xf7b] = 0xffffffff;
                    else
                    {
                        int32_t ecx_4 = esi[0xf7b];
                        int32_t eax_22 = *eax_21;

                        if (ecx_4 == 0xffffffff)
                            esi[0xf7b] = eax_22;
                        else if (ecx_4 != eax_22)
                        {
                            esi[0xf7b] = eax_22;
                            esi[0xf7c] = 1;
                        }
                    }

                    double* ecx_6 = esi[0xeaa] + 0x110;
                    esi[0xf79] = result_1;
                    long double st0_1 = sub_4b32b0(sub_4c3440(eax), ecx_6);
                    int32_t eax_24 = *(a2 + 0x1c);
                    *(a2 + 8) = st0_1;

                    if (!eax_24)
                        sub_48ab10(esi);

                    int32_t eax_27;
                    int32_t edx_7;
                    edx_7 = HIGHD(*(a2 + 0x1c) + 1);
                    eax_27 = LOWD(*(a2 + 0x1c) + 1);
                    result = COMBINE(edx_7, eax_27) / 0x14;
                    *(a2 + 0x1c) = COMBINE(edx_7, eax_27) % 0x14;
                }
            }
        }
    }

    return result;
}
