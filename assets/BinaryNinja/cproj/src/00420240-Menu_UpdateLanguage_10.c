#include "gi_platform.h"
#include "00420240-Menu_UpdateLanguage_10.h"
void* Menu_UpdateLanguage_10(void* a1, int32_t a2, int32_t a3, int32_t a4 , int32_t a5)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x20)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x24)) = a3;
    void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    (*(int32_t*)(uintptr_t)(a1 + 0x2c)) = a4;
    (*(int32_t*)(uintptr_t)(a1 + 0xac)) = a4 - *(tmpD1 + 0x2c) - (*(int32_t*)(uintptr_t)(*(a1 + 0x98) + 0x2c)) - 6;
    (*(int32_t*)(uintptr_t)(a1 + 0x248)) = a5;
    return a1;
}
