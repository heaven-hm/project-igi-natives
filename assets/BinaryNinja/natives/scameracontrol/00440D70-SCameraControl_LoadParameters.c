// Original IGI.EXE function: SCameraControl_LoadParameters (VA 0x00440D70; static CFG gate PASS, CFG score 1.000).
#include "SCameraControl_LoadParameters.h"
char SCameraControl_LoadParameters(long double context , void* param_2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a970e0))(param_2);
    char data_4 = *(param_2 + 0x190);

    if (data_4)
        *(param_2 + 0x2a0) = 0;
    else
    {
        data_4 = Script_FormatString_6(param_2 + 0x2a4);

        if (data_4)
        {
            Script_SpawnNewTask_7(param_2 + 0x2a4, param_2);
            char item_8 = context;
            *(param_2 + 0x2a0) = item_8;
            return item_8;
        }
    }

    return data_4;
}
