#include "gi_platform.h"
#include "0042E870-Menu_PlayMusic_22.h"
int32_t* Menu_PlayMusic_22(int80_t a1 , int32_t a2)

{
    int32_t* result = Script_FormatString_6(a2 + 0x978);

    if (result)
    {
        int32_t result_1 = (*(int32_t*)(uintptr_t)(a2 + 0x91d));
        result = Script_SpawnNewTask_7(a2 + 0x978, a2);
        result = a1;
        (*(int32_t*)(uintptr_t)(a2 + 0x91d)) = result;

        if (result)
        {
            memcpy(a2 + 0xa18, a2 + 0x20, 0x18);
            (*(int32_t*)(uintptr_t)(a2 + 0xa28)) = (*(int32_t*)(uintptr_t)(a2 + 0xa28)) + 8192.0;
            memcpy(a2 + 0xa30, a2 + 0x70, 0x28);
            (*(int32_t*)(uintptr_t)(a2 + 0xa88)) = 0;
            result = Car_DetectionSweep(a2 + 0xa90, a2 + 0xa18, a2, 1);
        }

        result = (*(int32_t*)(uintptr_t)(a2 + 0x91d));

        if (!result)
        {
            result = result_1;

            if (result)
            {
                FX_TrailUpdate_13(a2 + 0xa90);
                return FX_DebrisSpawn_13(a2 + 0xa90, 1, 4, AI_CombatTarget_22(), 4, 8);
            }
        }
    }

    return result;
}
