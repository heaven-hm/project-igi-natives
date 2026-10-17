// Original IGI.EXE function: MenuManager_Update (VA 0x00418970; static CFG gate PASS, CFG score 1.000).
#include "MenuManager_Update.h"
int32_t MenuManager_Update(void* a1)

{
    if (*(a1 + 0x30) && *(a1 + 0x28) != 9)
    {
        Display_ClearSurfaces_13(a1 + 0x266c, 1);

        if (*(a1 + 0x28) == 2)
        {
            void* dstD1 = *(a1 + 0x27c8);
            int32_t valA3 = StatusScreen_GetEvent();
            int32_t tmpD1 = 0;
            tmpD1 = *(dstD1 + 0x1c);
            (*(((valA3 * 0x180 + tmpD1) << 2) + &g_a96ae0))(dstD1);
        }

        if (*(a1 + 0x34))
        {
            void* dstD2 = *(a1 + 0x34);
            *(a1 + 0xd0) = *(a1 + 0xcc);
            int32_t valA7 = StatusScreen_GetEvent();
            int32_t tmpD2 = 0;
            tmpD2 = *(dstD2 + 0x1c);
            (*(((valA7 * 0x180 + tmpD2) << 2) + &g_a96ae0))(dstD2);
        }

        if (*(a1 + 0x30))
        {
            int32_t valA10 = *(a1 + 0x28);

            if (valA10 == 7 || valA10 == 8 || valA10 == 0xf)
                *(a1 + 0xd0) = 0x10;
            else
                *(a1 + 0xd0) = *(a1 + 0xcc);

            void* dstD3 = *(a1 + 0x30);
            int32_t valA12 = StatusScreen_GetEvent();
            int32_t tmpD3 = 0;
            tmpD3 = *(dstD3 + 0x1c);
            (*(((valA12 * 0x180 + tmpD3) << 2) + &g_a96ae0))(dstD3);
        }
    }

    int32_t result = *(a1 + 0xc4);
    int32_t objC10 = *(a1 + 0xcc);
    *(a1 + 0xc8) = result;
    *(a1 + 0xc4) = objC10;
    return result;
}
