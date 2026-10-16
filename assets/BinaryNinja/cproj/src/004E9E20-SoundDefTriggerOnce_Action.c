#include "gi_platform.h"
#include "004E9E20-SoundDefTriggerOnce_Action.h"
float SoundDefTriggerOnce_Action(int32_t a1, int32_t* a2) __location("valA")

{
    float result = Display_OpenDevice_12((*(int32_t*)(uintptr_t)(a1 + 0x130)), (*(int32_t*)(uintptr_t)(a1 + 0x134)));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
