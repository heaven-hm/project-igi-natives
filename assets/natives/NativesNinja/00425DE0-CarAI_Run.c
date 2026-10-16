#include "00425DE0-CarAI_Run.h"
/* 0x00425de0 CarAI_Run full linked: callers=0 callees=25 */
int32_t* CarAI_Run(int32_t a1)

{
    float esi = a1;
    int32_t* result;
    result = *(esi + 0x54);

    if (!result)
    {
        result = *(esi + 0x24);

        if (result != 0xffffffff)
        {
            result = sub_4537e0(esi + 0x30, result, 0);
            *(esi + 0x54) = 1;
        }
    }

    if (*(esi + 0x4c) && *(esi + 0x2c))
    {
        result = *(esi + 0x30);

        if (result)
        {
            long double x87_r0;

            if (!Menu_HandleInput_16(esi))
            {
                void* eax_7 = sub_453720(esi + 0x30);
                int32_t eax_8 = sub_453540(eax_7);

                if (eax_8 == 2 || eax_8 == 3)
                {
                    if (!Menu_RequestScreen_17(esi, sub_485320(eax_7)))
                    {
                        int32_t eax_13 = sub_485320(eax_7);
                        *(esi + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(esi),
                            *(esi + 0x2c), eax_13, esi);
                        *(esi + 0x6c) = *(esi + 0x80);
                        *(esi + 0x70) = 0;
                        long double x87_r7;
                        Menu_LeaveMenus_17(x87_r0, x87_r7, esi);
                    }
                    else
                        sub_453760(esi + 0x30);
                }
                else if (eax_8 == 1)
                {
                    *(esi + 0x6c) = 0;
                    int32_t ebx_1 = *(esi + 0x7c);
                    *(esi + 0x70) = 0x3f800000;
                    bool cond:0_1 = ebx_1 <= sub_485320(eax_7);
                    *(esi + 0x7c) = ebx_1 + 1;

                    if (!cond:0_1)
                    {
                        sub_453760(esi + 0x30);
                        *(esi + 0x7c) = 0;
                    }
                }
                else if (eax_8 == 6 || eax_8 == 7)
                {
                    *(esi + 0x6c) = 0;
                    *(esi + 0x70) = 0x3f800000;
                    *(esi + 0x60) = 0x3f800000;
                    *(esi + 0x64) = 0;
                    *(esi + 0x5c) = 0;
                }
                else if (eax_8 != 8)
                {
                    int32_t var_14_11 = eax_8;
                    Warning_Show("Command not supported by CARAI: %d.");
                    sub_453760(esi + 0x30);
                }
                else
                {
                    a1 = sub_485320(eax_7);
                    long double x87_r7_1 = a1;
                    *(esi + 0x70) = 0;
                    *(esi + 0x80) = x87_r7_1;
                    sub_453760(esi + 0x30);
                }
            }
            else
            {
                double* eax_2 = sub_4c3440(*(esi + 0x74));
                sub_5096f0(&a1, *(esi + 0x2c), eax_2);

                if (Menu_RequestScreen_17(esi, *a1))
                {
                    *(esi + 0x6c) = 0;
                    *(esi + 0x70) = 0x3f800000;
                    CarAI_Combat(x87_r0, esi);
                }
                else
                {
                    *(esi + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(esi),
                        *(esi + 0x2c), *a1, esi);
                    *(esi + 0x6c) = 0x41a00000;
                    *(esi + 0x70) = 0;
                    CarAI_Combat(x87_r0, esi);
                }
            }
            CarAI_UpdateCar(esi, *(esi + 0x50), *(esi + 0x58), *(esi + 0x5c), *(esi + 0x60));
            result = *(esi + 0x50) + 1;
            *(esi + 0x50) = result;
        }
    }

    return result;
}
