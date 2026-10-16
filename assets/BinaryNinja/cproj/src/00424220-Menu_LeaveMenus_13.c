#include "gi_platform.h"
#include "00424220-Menu_LeaveMenus_13.h"
void* Menu_LeaveMenus_13(void* a1, void* a2)

{
    int32_t valA = Menu_UpdateLanguage_3();
    void* srcS = a2;

    while ((*(int32_t*)(uintptr_t)(srcS + 0x1c)) != valA)
    {
        srcS = (*(int32_t*)(uintptr_t)(srcS + 0x14));

        if (!srcS)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x44)) = 0;
            return valA;
        }

        valA = Menu_UpdateLanguage_3();
    }

    (*(int32_t*)(uintptr_t)(a1 + 0x44)) = srcS;
    return a1;
}
