// Original IGI.EXE function: FX_DebrisSpawn_10 (VA 0x004883C0; static CFG gate PASS, CFG score 1.000).
#include "FX_DebrisSpawn_10.h"
void** FX_DebrisSpawn_10(void* context, void* param_2)

{
    void** result = Mem_Alloc(0x2c, 4);
    result[0xa] = 0;
    result[9] = 0;
    result[8] = Script_EvaluateCondition_4(param_2);
    result[7] = *(param_2 + 0x1c);
    result[5] = context;
    result[1] = 0;
    *result = nullptr;
    result[2] = &result[3];
    result[4] = &result[2];
    result[3] = 0;

    if (context)
        Camera_SetFieldOfView_33(context + 8, result);

    return result;
}
