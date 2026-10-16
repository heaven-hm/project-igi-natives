#include "gi_platform.h"
#include "00470800-Binocular_Process.h"
int32_t* Binocular_Process(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0x1c4));

    if (result)
    {
        void* valA = *result;

        if (valA)
            SoundSys_SetFrequency_7(valA);

        result = Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x1c4)));
        (*(int32_t*)(uintptr_t)(a1 + 0x1c4)) = 0;
    }

    return result;
}
