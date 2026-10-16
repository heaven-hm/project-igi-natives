#include "gi_platform.h"
#include "00497680-Display_CheckCapabilities_13.h"
int32_t Display_CheckCapabilities_13(void* a1, int32_t* a2)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x18)) = *a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = a2[1];
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = a2[2];
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = a2[3];
    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = a2[2] * 0.5.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = a2[3] * 0.5.0f;
    int32_t valA1 = Display_SetGammaRamp_4();
    float v_8 = (*(int32_t*)(uintptr_t)(a1 + 0x18));
    float v_4 = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    long double x87_r7_7 = (*(int32_t*)(uintptr_t)(a1 + 0x20)) + (*(int32_t*)(uintptr_t)(a1 + 0x18));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = valA1;
    float v_10 = x87_r7_7;
    float v_c = (*(int32_t*)(uintptr_t)(a1 + 0x24)) + (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return Display_CloseDevice_13(a1, &v_8, &v_10);
}
