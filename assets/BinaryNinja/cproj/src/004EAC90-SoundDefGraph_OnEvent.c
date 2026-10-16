#include "gi_platform.h"
#include "004EAC90-SoundDefGraph_OnEvent.h"
float SoundDefGraph_OnEvent(int32_t a1, int32_t* a2) __location("valA")

{
    float result = Display_OpenDevice_12((*(int32_t*)(uintptr_t)(a1 + 0x180)), (*(int32_t*)(uintptr_t)(a1 + 0x184)));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
