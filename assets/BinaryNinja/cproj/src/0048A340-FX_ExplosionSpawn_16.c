#include "gi_platform.h"
#include "0048A340-FX_ExplosionSpawn_16.h"
float* FX_ExplosionSpawn_16(float* a1, void* a2, int32_t a3)

{
    int32_t* objC3 = (*(int32_t*)(uintptr_t)(a2 + 0x70)) + a3 * 0x84 + 0x18;
    float tmpD1 = *objC3;
    float tmpD2 = objC3[1];
    float objC4 = objC3[2];
    float v_c = objC4 * (*(int32_t*)(uintptr_t)(a2 + 0x90)) + tmpD2 * (*(int32_t*)(uintptr_t)(a2 + 0x84)) + tmpD1 * (*(int32_t*)(uintptr_t)(a2 + 0x78));
    float v_18_1 = v_c;
    long double x87_r7_15 =
        objC4 * (*(int32_t*)(uintptr_t)(a2 + 0x94)) + tmpD2 * (*(int32_t*)(uintptr_t)(a2 + 0x88)) + tmpD1 * (*(int32_t*)(uintptr_t)(a2 + 0x7c)) + (*(int32_t*)(uintptr_t)(a2 + 0x518));
    long double x87_r7_17 =
        objC4 * (*(int32_t*)(uintptr_t)(a2 + 0x98)) + tmpD2 * (*(int32_t*)(uintptr_t)(a2 + 0x8c)) + tmpD1 * (*(int32_t*)(uintptr_t)(a2 + 0x80)) + (*(int32_t*)(uintptr_t)(a2 + 0x51c));
    *a1 = v_c + (*(int32_t*)(uintptr_t)(a2 + 0x514));
    a1[1] = x87_r7_15;
    a1[2] = x87_r7_17;
    return a1;
}
