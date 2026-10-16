#include "gi_platform.h"
#include "004F7120-Script_FormatString_19.h"
void* Script_FormatString_19(void* a1, int32_t a2)

{
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x2ca8));

    if (tmpD)
    {
        if (tmpD - 1 != a2)
        {
            int32_t srcS2 = (*(int32_t*)(uintptr_t)(a1 + (a2 << 2) + 0x2b4c));
            (*(int32_t*)(uintptr_t)(a1 + (a2 << 2) + 0x2b4c)) = (*(int32_t*)(uintptr_t)(a1 + (tmpD << 2) + 0x2b48));
            (*(int32_t*)(uintptr_t)(a1 + (*(a1 + 0x2ca8) << 2) + 0x2b48)) = srcS2;
        }

        (*(int32_t*)(uintptr_t)(a1 + 0x2ca8)) -= 1;
    }

    return a1;
}
