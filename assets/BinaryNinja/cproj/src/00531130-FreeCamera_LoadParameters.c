#include "gi_platform.h"
#include "00531130-FreeCamera_LoadParameters.h"
int32_t FreeCamera_LoadParameters(void* a1)

{
    char result = (*(int32_t*)(uintptr_t)(a1 + 0x84));

    if (!result)
        return result;

    int32_t* valA = SoundSys_SetFrequency_9();
    int32_t v_18_1 = 0x42c80000;
    return Camera_SubmitFrame((*(int32_t*)(uintptr_t)(a1 + 0x88)), a1 + 0x48, a1 + 0x20, (*(int32_t*)(uintptr_t)(a1 + 0x60)), 0x3f800000,
        valA, 0, 0, 0.0f);
}
