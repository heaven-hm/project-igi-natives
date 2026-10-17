// Original IGI.EXE function: Generator_LoadParameters (VA 0x0043B500; static CFG gate PASS, CFG score 1.000).
#include "Generator_LoadParameters.h"
struct status_msg* Generator_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    int32_t flagP = *(a2 + 0x23c);
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x23c) = 0;
    else if (Script_FormatString_6(a2 + 0x240))
    {
        Script_SpawnNewTask_7(a2 + 0x240, a2);
        *(a2 + 0x23c) = a1;
    }

    if (*(a2 + 0x2b4))
    {
        if (!*(a2 + 0x23c) && *(a2 + 0x2b8) == 0xffffffff)
        {
🚫🚫            /* unimplemented  {fld fp0, dword [srcS+0x2b0]} */
🚫🚫            /* unimplemented  {fmul fp0, dword [&g_5333bc]} */
🚫🚫🚫            int32_t v_8_2 = /* int32_t v_8_2 =
                (unimplemented  {fistp qword [esp+0xc], fp0}).d */;
            /* unimplemented  {fistp qword [esp+0xc], fp0} */
            *(a2 + 0x2b8) = v_8_2;
        }

        int32_t valA9 = *(a2 + 0x2b8);

        if (valA9 <= 0)
            *(a2 + 0x23c) = 1;
        else
            *(a2 + 0x2b8) = valA9 - 1;
    }

    struct status_msg* result = *(a2 + 0x238);

    if (!*(a2 + 0x23c))
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(a2 + 0x238) = 0;
        }

        if (flagP)
        {
            result = SoundSys_SetMasterVolume_7(a2, a2 + 0x2a0);

            if (result)
                return SoundSys_StopSoundSample_7(result, a2 + 0x20);
        }
    }
    else if (!result)
    {
        result = a2 + 0x290;

        if (*(a2 + 0x290))
        {
            result = SoundSys_SetMasterVolume_7(a2, result);
            *(a2 + 0x238) = result;

            if (result)
                return SoundSys_StopSoundSample_7(result, a2 + 0x20);
        }
    }

    return result;
}
