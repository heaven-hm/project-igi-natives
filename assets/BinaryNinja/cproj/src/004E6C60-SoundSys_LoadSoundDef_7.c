#include "gi_platform.h"
#include "004E6C60-SoundSys_LoadSoundDef_7.h"
int32_t SoundSys_LoadSoundDef_7(void* a1, int32_t a2, int32_t a3)

{
    int32_t v_8 = a2;
    int32_t valA1 = 0;
    valA1 = g_548817;
    int32_t objC1 = 0;
    objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)(*(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0)))(a1, &v_8, v_8, a3);
}
