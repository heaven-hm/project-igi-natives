#include "gi_platform.h"
#include "004FDD30-Script_ExecuteLevelScript_30.h"
void Script_ExecuteLevelScript_30(void* a1, int32_t a2)

{
    int32_t srcS = (*(int32_t*)(uintptr_t)(a1 + 0xf0));

    if (!srcS)
        return;

    if (srcS - 1 != a2)
    {
        int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x6c));
        int32_t dstD1 = (*(int32_t*)(uintptr_t)(valA1 + (a2 << 2)));
        (*(int32_t*)(uintptr_t)(valA1 + (a2 << 2))) = (*(int32_t*)(uintptr_t)(valA1 + (srcS << 2) - 4));
        (*(int32_t*)(uintptr_t)(*(a1 + 0x6c) + (*(a1 + 0xf0) << 2) - 4)) = dstD1;
    }

    (*(int32_t*)(uintptr_t)(a1 + 0xf0)) -= 1;
}
