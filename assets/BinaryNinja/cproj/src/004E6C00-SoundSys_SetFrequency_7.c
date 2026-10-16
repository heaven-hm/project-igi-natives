#include "gi_platform.h"
#include "004E6C00-SoundSys_SetFrequency_7.h"
int32_t SoundSys_SetFrequency_7(void* a1)

{
    int32_t valA3 = SoundSys_SetFrequency_6();
    int32_t tmpD = 0;
    tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    int32_t result = *(((valA3 * 0x180 + tmpD) << 2) + &g_a96ae0);

    if (result)
        result = result(a1);

    return result;
}
