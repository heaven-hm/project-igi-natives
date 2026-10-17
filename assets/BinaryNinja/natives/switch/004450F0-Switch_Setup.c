// Original IGI.EXE function: Switch_Setup (VA 0x004450F0; static CFG gate PASS, CFG score 1.000).
#include "Switch_Setup.h"
void* Switch_Setup(int80_t a1 @ fp0, void* a2)

{
    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* dstD1 = *i;
            void* valA4;

            if (!dstD1)
                valA4 = nullptr;
            else
            {
                int32_t valA1 = *dstD1;
                int32_t valA2 = -(valA1);
                valA4 = (valA2 - valA2) & dstD1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA4;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA5 = 0;
            g_afa7e0 = tmpD2;
            valA5 = i[7];
            int32_t valA6 = *((valA5 << 2) + &g_a970e0);

            if (valA6)
            {
                valA6(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    if (Script_FormatString_6(a2 + 0x1d0))
    {
        Script_SpawnNewTask_7(a2 + 0x1d0, a2);
        *(a2 + 0x1c0) = a1;
    }

    void* result = g_bc2360;

    if (*(result + 0x68) > *(a2 + 0x1c8) + 2)
    {
        char objC1 = *(a2 + 0x1c4);
        *(a2 + 0x1c4) = 0;
        *(a2 + 0x1c5) = objC1;
    }

    result = *(a2 + 0x1c0);

    if (result != *(a2 + 0x1c1) || *(a2 + 0x1c4) != *(a2 + 0x1c5)
        || *(a2 + 0x1c2) != *(a2 + 0x1c3))
    {
        int32_t valA8;

        if (*(a2 + 0x1c2))
            valA8 = 4;
        else if (!result)
        {
            int32_t valA11 = 0;
            valA11 = *(a2 + 0x1c4);
            valA8 = valA11 + 2;
        }
        else if (!*(a2 + 0x1c4))
        {
            struct status_msg* valA10 = SoundSys_SetMasterVolume_7(a2, "switch");

            if (valA10)
                SoundSys_StopSoundSample_7(valA10, a2 + 0x20);

            valA8 = 0;
        }
        else
            valA8 = 1;

        result = DynObj_CreateMagicObject_5(a2, DynObj_Missing(((valA8 + 0x17) << 4) + a2));
        result = *(a2 + 0x1c0);
        char objC3 = *(a2 + 0x1c2);
        *(a2 + 0x1c1) = result;
        *(a2 + 0x1c3) = objC3;
    }

    return result;
}
