#include "gi_platform.h"
#include "004ECF80-SoundSys_SetMasterVolume_17.h"
void* SoundSys_SetMasterVolume_17(float* a1, void* a2, float* a3)

{
    float v_8 = -((a3[2] * (*(int32_t*)(uintptr_t)(a2 + 0x48)) - (*(int32_t*)(uintptr_t)(a2 + 0x50)) * *a3));
    long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a2 + 0x48)) * a3[1] - *a3 * (*(int32_t*)(uintptr_t)(a2 + 0x4c));
    *a1 = a3[2] * (*(int32_t*)(uintptr_t)(a2 + 0x4c)) - (*(int32_t*)(uintptr_t)(a2 + 0x50)) * a3[1];
    a1[1] = v_8;
    a1[2] = x87_r7_9;
    *a1 = (*(int32_t*)(uintptr_t)(a2 + 0x18)) + *a1;
    a1[1] = (*(int32_t*)(uintptr_t)(a2 + 0x1c)) + a1[1];
    a1[2] = (*(int32_t*)(uintptr_t)(a2 + 0x20)) + a1[2];
    return a2;
}
