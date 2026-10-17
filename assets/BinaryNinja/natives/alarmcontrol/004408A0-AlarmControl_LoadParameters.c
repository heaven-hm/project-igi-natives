// Original IGI.EXE function: AlarmControl_LoadParameters (VA 0x004408A0; static CFG gate PASS, CFG score 1.000).
#include "AlarmControl_LoadParameters.h"
int32_t AlarmControl_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a970e0))(a2);
    *(a2 + 0x2a2) = *(a2 + 0x2a1);
    char valA3 = *(a2 + 0x190);

    if (valA3)
    {
        *(a2 + 0x2a0) = 0;
        *(a2 + 0x2a1) = 0;
    }
    else
    {
        valA3 = *(a2 + 0x240);

        if (!valA3)
        {
            *(a2 + 0x2a0) = 0;
            *(a2 + 0x2a1) = 0;
        }
        else
        {
            if (Script_FormatString_6(a2 + 0x2ac))
            {
                Script_SpawnNewTask_7(a2 + 0x2ac, a2);
                *(a2 + 0x2a0) = a1;
            }

            if (*(a2 + 0x2a0))
                *(a2 + 0x2a4) = Script_FormatString_4();

            valA3 = Script_FormatString_6(a2 + 0x2fc);

            if (valA3)
            {
                int32_t valA7 = Script_SpawnNewTask_7(a2 + 0x2fc, a2);
🚫🚫🚫                char v_8_2 = /* char v_8_2 =
                    (unimplemented  {fistp qword [esp+0x10], fp0}).b */;
                /* unimplemented  {fistp qword [esp+0x10], fp0} */
                *(a2 + 0x2a1) = v_8_2;
                return valA7;
            }
        }
    }

    return valA3;
}
