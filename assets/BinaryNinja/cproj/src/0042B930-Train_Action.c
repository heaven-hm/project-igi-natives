#include "gi_platform.h"
#include "0042B930-Train_Action.h"
void* Train_Action(void* a1, void** a2)

{
    int32_t valA = 0;
    valA = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)((valA << 2) + &g_a970e0))))(a1);
    g_57bca0 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) - (*(int32_t*)(uintptr_t)(a1 + 0x6c0));
    g_57bca8 = (*(int32_t*)(uintptr_t)(a1 + 0x28)) - (*(int32_t*)(uintptr_t)(a1 + 0x6c8));
    g_57bcb0 = (*(int32_t*)(uintptr_t)(a1 + 0x30)) - (*(int32_t*)(uintptr_t)(a1 + 0x6d0));
    float tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x6a0));
    float v_50 = (*(int32_t*)(uintptr_t)(a1 + 0x694));
    float objC1 = (*(int32_t*)(uintptr_t)(a1 + 0x6ac));
    float tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x698));
    float objC2 = (*(int32_t*)(uintptr_t)(a1 + 0x6a4));
    float tmpD2 = (*(int32_t*)(uintptr_t)(a1 + 0x6b0));
    float objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x69c));
    float tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 0x6a8));
    float objC4 = (*(int32_t*)(uintptr_t)(a1 + 0x6b4));
    int32_t tmpD4 = (*(int32_t*)(uintptr_t)(a1 + 0x6b8));
    int32_t v_2c = tmpD4;
    memcpy(0x57bcc0, &v_50, 0x28);
    float v_28 = tmpD1 * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + objC3 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_50 * (*(int32_t*)(uintptr_t)(a1 + 0x70));
    float v_24 = objC2 * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + tmpD3 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + tmpD * (*(int32_t*)(uintptr_t)(a1 + 0x70));
    float v_20 = tmpD2 * (*(int32_t*)(uintptr_t)(a1 + 0x74)) + objC4 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + objC1 * (*(int32_t*)(uintptr_t)(a1 + 0x70));
    float v_1c = objC3 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_50 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + tmpD1 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
    int32_t v_4 = (*(int32_t*)(uintptr_t)(a1 + 0x94)) + tmpD4 + 1;
    float v_18 = tmpD3 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + tmpD * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + objC2 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
    float v_14 = objC4 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + objC1 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + tmpD2 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
    float v_10 = tmpD1 * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + objC3 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_50 * (*(int32_t*)(uintptr_t)(a1 + 0x88));
    float v_c = objC2 * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + tmpD3 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + tmpD * (*(int32_t*)(uintptr_t)(a1 + 0x88));
    float v_8 = tmpD2 * (*(int32_t*)(uintptr_t)(a1 + 0x8c)) + objC4 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + objC1 * (*(int32_t*)(uintptr_t)(a1 + 0x88));
    memcpy(0x57bcc0, &v_28, 0x28);
    *a2 = a1 + 0x20;
    a2[2] = &g_57bca0;
    a2[1] = 0x57bcc0;
    return a1 + 0x20;
}
