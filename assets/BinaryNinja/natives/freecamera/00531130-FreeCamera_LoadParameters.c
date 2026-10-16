#include "FreeCamera_LoadParameters.h"
int32_t FreeCamera_LoadParameters(void* a1)

{
    char result = *(a1 + 0x84);

    if (!result)
        return result;

    int32_t* valA = SoundSys_SetFrequency_9();
    int32_t v_18_1 = 0x42c80000;
    return Camera_SubmitFrame(*(a1 + 0x88), a1 + 0x48, a1 + 0x20, *(a1 + 0x60), 0x3f800000,
        valA, 0, 0, 0f);
}
