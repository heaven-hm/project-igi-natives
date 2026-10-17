// IGI native provenance: CarAI_Run - 0x00425DE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00425DE0-CarAI_Run.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CarAI_Run.h"
int32_t* CarAI_Run(int32_t context)

{
    float source_val = context;
    int32_t* result;
    result = *(source_val + 0x54);

    if (!result)
    {
        result = *(source_val + 0x24);

        if (result != 0xffffffff)
        {
            result = PatrolCursor_Start(source_val + 0x30, result, 0);
            *(source_val + 0x54) = 1;
        }
    }

    if (*(source_val + 0x4c) && *(source_val + 0x2c))
    {
        result = *(source_val + 0x30);

        if (result)
        {
            long double fpu0;

            if (!Menu_HandleInput_16(source_val))
            {
                void* data_7 = PatrolPath_Action(source_val + 0x30);
                int32_t data_8 = PatrolPathCommand_Process(data_7);

                if (data_8 == 2 || data_8 == 3)
                {
                    if (!Menu_RequestScreen_17(source_val, GameScreen_Process(data_7)))
                    {
                        int32_t data_13 = GameScreen_Process(data_7);
                        *(source_val + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(source_val),
                            *(source_val + 0x2c), data_13, source_val);
                        *(source_val + 0x6c) = *(source_val + 0x80);
                        *(source_val + 0x70) = 0;
                        long double fpu7;
                        Menu_LeaveMenus_17(fpu0, fpu7, source_val);
                    }
                    else
                        PatrolCursor_Advance(source_val + 0x30);
                }
                else if (data_8 == 1)
                {
                    *(source_val + 0x6c) = 0;
                    int32_t context_1 = *(source_val + 0x7c);
                    *(source_val + 0x70) = 0x3f800000;
                    bool flag_0_1 = context_1 <= GameScreen_Process(data_7);
                    *(source_val + 0x7c) = context_1 + 1;

                    if (!flag_0_1)
                    {
                        PatrolCursor_Advance(source_val + 0x30);
                        *(source_val + 0x7c) = 0;
                    }
                }
                else if (data_8 == 6 || data_8 == 7)
                {
                    *(source_val + 0x6c) = 0;
                    *(source_val + 0x70) = 0x3f800000;
                    *(source_val + 0x60) = 0x3f800000;
                    *(source_val + 0x64) = 0;
                    *(source_val + 0x5c) = 0;
                }
                else if (data_8 != 8)
                {
                    int32_t item_14_11 = data_8;
                    Warning_Show("Command not supported by CARAI: %d.");
                    PatrolCursor_Advance(source_val + 0x30);
                }
                else
                {
                    context = GameScreen_Process(data_7);
                    long double fpu_val_7_1 = context;
                    *(source_val + 0x70) = 0;
                    *(source_val + 0x80) = fpu_val_7_1;
                    PatrolCursor_Advance(source_val + 0x30);
                }
            }
            else
            {
                double* data_2 = DynObj_UpdateDynTree_4(*(source_val + 0x74));
                Physics_ApplyImpulse_8(&context, *(source_val + 0x2c), data_2);

                if (Menu_RequestScreen_17(source_val, *context))
                {
                    *(source_val + 0x6c) = 0;
                    *(source_val + 0x70) = 0x3f800000;
                    CarAI_Combat(fpu0, source_val);
                }
                else
                {
                    *(source_val + 0x68) = Menu_CaraiErrorInGraphDNo_2(Menu_DrawWidget_16(source_val),
                        *(source_val + 0x2c), *context, source_val);
                    *(source_val + 0x6c) = 0x41a00000;
                    *(source_val + 0x70) = 0;
                    CarAI_Combat(fpu0, source_val);
                }
            }
            CarAI_UpdateCar(source_val, *(source_val + 0x50), *(source_val + 0x58), *(source_val + 0x5c), *(source_val + 0x60));
            result = *(source_val + 0x50) + 1;
            *(source_val + 0x50) = result;
        }
    }

    return result;
}
