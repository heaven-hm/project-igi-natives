// Original IGI.EXE function: SCameraControl_LoadParameters (VA 0x00440D70; static CFG gate PASS, CFG score 1.000).
#include "SCameraControl_LoadParameters.h"
char SCameraControl_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a970e0))(a2);
    char valA4 = *(a2 + 0x190);

    if (valA4)
        *(a2 + 0x2a0) = 0;
    else
    {
        valA4 = Script_FormatString_6(a2 + 0x2a4);

        if (valA4)
        {
            Script_SpawnNewTask_7(a2 + 0x2a4, a2);
            char v_8 = a1;
            *(a2 + 0x2a0) = v_8;
            return v_8;
        }
    }

    return valA4;
}
