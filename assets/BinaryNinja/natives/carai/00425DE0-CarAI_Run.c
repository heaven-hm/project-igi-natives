#include "CarAI_Run.h"
int32_t* CarAI_Run(int32_t a1)

{
    float srcS = a1;
    int32_t* result;
    result = *(srcS + 0x54);

    if (!result)
    {
        result = *(srcS + 0x24);

        if (result != 0xffffffff)
        {
            result = PatrolCursor_Start(srcS + 0x30, result, 0);
            *(srcS + 0x54) = 1;
        }
    }

    if (*(srcS + 0x4c) && *(srcS + 0x2c))
    {
        result = *(srcS + 0x30);

        if (result)
        {
            long double fpu0;

            if (!Menu_HandleInput_16(srcS))
            {
                void* valA7 = PatrolPath_Action(srcS + 0x30);
                int32_t valA8 = PatrolPathCommand_Process(valA7);

                if (valA8 == 2 || valA8 == 3)
                {
                    if (!Menu_RequestScreen_17(srcS, GameScreen_Process(valA7)))
                    {
                        int32_t valA13 = GameScreen_Process(valA7);
                        *(srcS + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(srcS),
                            *(srcS + 0x2c), valA13, srcS);
                        *(srcS + 0x6c) = *(srcS + 0x80);
                        *(srcS + 0x70) = 0;
                        long double fpu7;
                        Menu_LeaveMenus_17(fpu0, fpu7, srcS);
                    }
                    else
                        PatrolCursor_Advance(srcS + 0x30);
                }
                else if (valA8 == 1)
                {
                    *(srcS + 0x6c) = 0;
                    int32_t ctxB1 = *(srcS + 0x7c);
                    *(srcS + 0x70) = 0x3f800000;
                    bool cond_0_1 = ctxB1 <= GameScreen_Process(valA7);
                    *(srcS + 0x7c) = ctxB1 + 1;

                    if (!cond_0_1)
                    {
                        PatrolCursor_Advance(srcS + 0x30);
                        *(srcS + 0x7c) = 0;
                    }
                }
                else if (valA8 == 6 || valA8 == 7)
                {
                    *(srcS + 0x6c) = 0;
                    *(srcS + 0x70) = 0x3f800000;
                    *(srcS + 0x60) = 0x3f800000;
                    *(srcS + 0x64) = 0;
                    *(srcS + 0x5c) = 0;
                }
                else if (valA8 != 8)
                {
                    int32_t v_14_11 = valA8;
                    Warning_Show("Command not supported by CARAI: %d.");
                    PatrolCursor_Advance(srcS + 0x30);
                }
                else
                {
                    a1 = GameScreen_Process(valA7);
                    long double x87_r7_1 = a1;
                    *(srcS + 0x70) = 0;
                    *(srcS + 0x80) = x87_r7_1;
                    PatrolCursor_Advance(srcS + 0x30);
                }
            }
            else
            {
                double* valA2 = DynObj_UpdateDynTree_4(*(srcS + 0x74));
                Physics_ApplyImpulse_8(&a1, *(srcS + 0x2c), valA2);

                if (Menu_RequestScreen_17(srcS, *a1))
                {
                    *(srcS + 0x6c) = 0;
                    *(srcS + 0x70) = 0x3f800000;
                    CarAI_Combat(fpu0, srcS);
                }
                else
                {
                    *(srcS + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(srcS),
                        *(srcS + 0x2c), *a1, srcS);
                    *(srcS + 0x6c) = 0x41a00000;
                    *(srcS + 0x70) = 0;
                    CarAI_Combat(fpu0, srcS);
                }
            }
            CarAI_UpdateCar(srcS, *(srcS + 0x50), *(srcS + 0x58), *(srcS + 0x5c), *(srcS + 0x60));
            result = *(srcS + 0x50) + 1;
            *(srcS + 0x50) = result;
        }
    }

    return result;
}
