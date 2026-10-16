#include "gi_platform.h"
#include "0049CBE0-Display_RestoreDevice_19.h"
int32_t Display_RestoreDevice_19(void* a1, void* a2)

{
    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0x78)) * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * (*(int32_t*)(uintptr_t)(a2 + 0x34))
        + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a2 + 0x34))
        + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a2 + 0x38)) + (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a2 + 0x34))
        + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a2 + 0x30));
    double v_18 = x87_r7_3 + (*(int32_t*)(uintptr_t)(a1 + 0x20));
    double v_10 = x87_r6_7 + (*(int32_t*)(uintptr_t)(a1 + 0x28));
    double v_8 = x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0x30));
    return Display_CreateSurface_18(&v_18, (*(int32_t*)(uintptr_t)(a2 + 0x3c)));
}
