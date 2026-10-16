#include "gi_platform.h"
#include "00463770-AI_FireWeapon_21.h"
void* AI_FireWeapon_21(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x664)) = (*(int32_t*)(uintptr_t)(a1 + 0x664)) * 0.99000001.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x668)) = (*(int32_t*)(uintptr_t)(a1 + 0x668)) * 0.99000001.0f;
    (*(int32_t*)(uintptr_t)(a1 + 0x66c)) = ((*(int32_t*)(uintptr_t)(a1 + 0x66c)) - 84.7416916.0f) * 0.99000001.0f;
    return a1;
}
