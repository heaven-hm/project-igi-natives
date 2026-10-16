#include "SoundDefSound_OnEvent.h"
float SoundDefSound_OnEvent(int32_t a1, int32_t* a2) __location("valA")

{
    float result = Display_OpenDevice_12(*(a1 + 0x128), *(a1 + 0x12c));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
