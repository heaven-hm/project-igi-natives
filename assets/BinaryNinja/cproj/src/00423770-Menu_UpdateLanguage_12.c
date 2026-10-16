#include "gi_platform.h"
#include "00423770-Menu_UpdateLanguage_12.h"
void* Menu_UpdateLanguage_12(void* a1, void* a2, int32_t a3)

{
    void* srcS = a1;
    int32_t* dstD = (*(int32_t*)(uintptr_t)(srcS + (a2 << 2) + 0x154));
    (*(int32_t*)(uintptr_t)(srcS + (a2 << 2) + 0x254)) = a3;

    if (!dstD)
        return a2;

    KEY_ANGLE(a3, nullptr, &a1);
    return Sys_FreeMemory_18(dstD, Menu_LocalSS((*(int32_t*)(uintptr_t)(srcS + 0x44)), a1));
}
