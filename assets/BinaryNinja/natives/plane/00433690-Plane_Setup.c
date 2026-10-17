// Original IGI.EXE function: Plane_Setup (VA 0x00433690; static CFG gate PASS, CFG score 1.000).
#include "Plane_Setup.h"
struct status_msg* Plane_Setup(int80_t a1 @ fp0, void* a2)

{
    char valA = Script_FormatString_6(a2 + 0x838);

    if (valA)
        Script_SpawnNewTask_7(a2 + 0x838, a2);

    struct status_msg* result;

    if (valA && !a1)
        result = Vehicle_UpdateCockpit_3(a2);
    else
    {
        result = *(a2 + 0x834);

        if (!result)
        {
            result = SoundSys_SetMasterVolume_7(a2, "su27");

            if (result)
            {
                result = QTask_LinkEventHandler_2(result);
                *(a2 + 0x834) = result;
            }
        }
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA5;

            if (!srcS1)
                valA5 = nullptr;
            else
            {
                int32_t valA2 = *srcS1;
                int32_t valA3 = -(valA2);
                valA5 = (valA3 - valA3) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA5;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA6 = 0;
            g_afa7e0 = tmpD2;
            valA6 = i[7];
            result = *((valA6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
