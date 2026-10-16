#include "gi_platform.h"
#include "00418970-MenuManager_Update.h"
int32_t MenuManager_Update(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x30)) && (*(int32_t*)(uintptr_t)(a1 + 0x28)) != 9)
    {
        Display_ClearSurfaces_13(a1 + 0x266c, 1);

        if ((*(int32_t*)(uintptr_t)(a1 + 0x28)) == 2)
        {
            void* dstD1 = (*(int32_t*)(uintptr_t)(a1 + 0x27c8));
            int32_t valA3 = StatusScreen_GetEvent();
            int32_t tmpD1 = 0;
            tmpD1 = *(dstD1 + 0x1c);
            ((int(*)())(uintptr_t)(*(((valA3 * 0x180 + tmpD1) << 2) + &g_a96ae0)))(dstD1);
        }

        if ((*(int32_t*)(uintptr_t)(a1 + 0x34)))
        {
            void* dstD2 = (*(int32_t*)(uintptr_t)(a1 + 0x34));
            (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = (*(int32_t*)(uintptr_t)(a1 + 0xcc));
            int32_t valA7 = StatusScreen_GetEvent();
            int32_t tmpD2 = 0;
            tmpD2 = *(dstD2 + 0x1c);
            ((int(*)())(uintptr_t)(*(((valA7 * 0x180 + tmpD2) << 2) + &g_a96ae0)))(dstD2);
        }

        if ((*(int32_t*)(uintptr_t)(a1 + 0x30)))
        {
            int32_t valA10 = (*(int32_t*)(uintptr_t)(a1 + 0x28));

            if (valA10 == 7 || valA10 == 8 || valA10 == 0xf)
                (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = 0x10;
            else
                (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = (*(int32_t*)(uintptr_t)(a1 + 0xcc));

            void* dstD3 = (*(int32_t*)(uintptr_t)(a1 + 0x30));
            int32_t valA12 = StatusScreen_GetEvent();
            int32_t tmpD3 = 0;
            tmpD3 = *(dstD3 + 0x1c);
            ((int(*)())(uintptr_t)(*(((valA12 * 0x180 + tmpD3) << 2) + &g_a96ae0)))(dstD3);
        }
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xc4));
    int32_t objC10 = (*(int32_t*)(uintptr_t)(a1 + 0xcc));
    (*(int32_t*)(uintptr_t)(a1 + 0xc8)) = result;
    (*(int32_t*)(uintptr_t)(a1 + 0xc4)) = objC10;
    return result;
}
