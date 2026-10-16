#include "gi_platform.h"
#include "004494D0-Siren_LoadParameters.h"
struct status_msg* Siren_LoadParameters(int80_t a1 , void* a2)

{
    ((int(*)())(uintptr_t)(*((FX_TrailUpdate() << 2) + &g_a970e0)))(a2);
    (*(int32_t*)(uintptr_t)(a2 + 0x2d1)) = (*(int32_t*)(uintptr_t)(a2 + 0x2d0));
    struct status_msg* result = Script_SpawnNewTask_7(a2 + 0x278, a2);
    result = a1;
    (*(int32_t*)(uintptr_t)(a2 + 0x2d0)) = result;

    if (!result)
    {
        result = (*(int32_t*)(uintptr_t)(a2 + 0x190));

        if (!result)
        {
            result = (*(int32_t*)(uintptr_t)(a2 + 0x2c8));

            if (result)
            {
                result = SoundSys_SetFrequency_7(result);
                (*(int32_t*)(uintptr_t)(a2 + 0x2c8)) = 0;
            }
        }
    }

    result = (*(int32_t*)(uintptr_t)(a2 + 0x2d0));

    if (result)
    {
    label_44957c: ;
        result = (*(int32_t*)(uintptr_t)(a2 + 0x190));

        if (!result)
        {
            result = (*(int32_t*)(uintptr_t)(a2 + 0x2c8));

            if (!result)
            {
                result = SoundSys_SetMasterVolume_7(a2, a2 + 0x238);
                (*(int32_t*)(uintptr_t)(a2 + 0x2c8)) = result;
            }
        }

        result = (*(int32_t*)(uintptr_t)(a2 + 0x2d0));

        if (result)
        {
            result = (*(int32_t*)(uintptr_t)(a2 + 0x190));

            if (result)
            {
                void* valA5 = (*(int32_t*)(uintptr_t)(a2 + 0x2c8));

                if (valA5)
                {
                    SoundSys_SetFrequency_7(valA5);
                    (*(int32_t*)(uintptr_t)(a2 + 0x2c8)) = 0;
                }

                result = (*(int32_t*)(uintptr_t)(a2 + 0x2cc));

                if (!result)
                {
                    result = SoundSys_SetMasterVolume_7(a2, a2 + 0x258);
                    (*(int32_t*)(uintptr_t)(a2 + 0x2cc)) = result;
                }
            }
        }
    }
    else
    {
        result = (*(int32_t*)(uintptr_t)(a2 + 0x190));

        if (result)
        {
            result = (*(int32_t*)(uintptr_t)(a2 + 0x2cc));

            if (result)
            {
                result = SoundSys_SetFrequency_7(result);
                (*(int32_t*)(uintptr_t)(a2 + 0x2cc)) = 0;
            }
        }

        result = (*(int32_t*)(uintptr_t)(a2 + 0x2d0));

        if (result)
            goto label_44957c;
    }

    return result;
}
